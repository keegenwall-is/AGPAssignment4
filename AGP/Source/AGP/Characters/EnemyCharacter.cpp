// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "EngineUtils.h"
#include "HealthComponent.h"
#include "PlayerCharacter.h"
#include "AGP/Pathfinding/NavigationNode.h"
#include "AGP/Pathfinding/PathfindingSubsystem.h"
#include "AGP/Pickups/LampPickup.h"
#include "Perception/PawnSensingComponent.h"

// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//bNetLoadOnClient = false;
	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>("Pawn Sensing Component");
}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
	
	Super::BeginPlay();
	if (GetLocalRole() != ROLE_Authority) return;

	PathfindingSubsystem = GetWorld()->GetSubsystem<UPathfindingSubsystem>();
	if (PathfindingSubsystem)
	{
		CurrentPath = PathfindingSubsystem->GetRandomPath(GetActorLocation());
	} else
	{
		UE_LOG(LogTemp, Error, TEXT("Unable to find the PathfindingSubsystem"))
	}
	if (PawnSensingComponent)
	{
		PawnSensingComponent->OnSeePawn.AddDynamic(this, &AEnemyCharacter::OnSensedPawn);
	}
	if (GetLocalRole() == ROLE_Authority) {
		FTimerHandle TimerHandle = FTimerHandle();
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AEnemyCharacter::CanTick, 5.0f);
	}
	
}

void AEnemyCharacter::MoveAlongPath()
{
	// Execute the path. Should be called each tick.

	// If the path is empty do nothing.
	if (CurrentPath.IsEmpty()) return;
	
	// 1. Move towards the current stage of the path.
	//		a. Calculate the direction from the current position to the target of the current stage of the path.
	FVector MovementDirection = CurrentPath[CurrentPath.Num()-1] - GetActorLocation();
	MovementDirection.Normalize();
	//		b. Apply movement in that direction.
	AddMovementInput(MovementDirection);
	// 2. Check if it is close to the current stage of the path then pop it off.
	if (FVector::Distance(GetActorLocation(), CurrentPath[CurrentPath.Num() - 1]) < PathfindingError)
	{
		CurrentPath.Pop();
	}
}

void AEnemyCharacter::TickPatrol()
{
	if (CurrentPath.IsEmpty())
	{
		CurrentPath = PathfindingSubsystem->GetRandomPath(GetActorLocation());
	}
	MoveAlongPath();
}

void AEnemyCharacter::TickEngage()
{
	
	float NearestDistance = MAX_FLT;
	APlayerCharacter* NearestCharacter = nullptr;
    
	if (!SensedCharacter) return;

	CheckVisibility();

	TArray<APlayerCharacter*> Players;
	for (TActorIterator<APlayerCharacter> It(GetWorld()); It; ++It)
	{
		Players.Add(*It);
	}
    
	for (APlayerCharacter* Player : Players)
	{
		if (Player)
		{
			float Distance = FVector::Dist(this->GetActorLocation(), Player->GetActorLocation());
			if (Distance < NearestDistance)
			{
				NearestDistance = Distance;
				NearestCharacter = Player;
			}
		}
	}

	if (CurrentPath.IsEmpty())
	{
		CurrentPath = PathfindingSubsystem->GetPath(GetActorLocation(), NearestCharacter->GetActorLocation());
	}
	MoveAlongPath();
	//Fire();
	
}

void AEnemyCharacter::TickEvade()
{
	// Find the player and return if it can't find it.
	//if (!SensedCharacter) return;

	ALampPickup* NearestLamp = nullptr;
	float NearestDistance = MAX_FLT;
	
	for (TActorIterator<ALampPickup> It(GetWorld()); It; ++It)
	{
		ALampPickup* Bell = *It;
		if (Bell)
		{
			float Distance = FVector::Dist(this->GetActorLocation(), Bell->GetActorLocation());
			if (Distance < NearestDistance)
			{
				NearestDistance = Distance;
				NearestLamp = Bell;
			}
		}
	}
	
	if (CurrentPath.IsEmpty())
	{
		CurrentPath = PathfindingSubsystem->GetPathAway(GetActorLocation(),NearestLamp->GetActorLocation());
	}
	MoveAlongPath();
}

void AEnemyCharacter::TickInvestigate()
{
	CheckVisibility();
	if (CurrentPath.IsEmpty())
	{
		CurrentPath = PathfindingSubsystem->GetPath(GetActorLocation(), Lamp->GetActorLocation());
	}
	MoveAlongPath();
}

void AEnemyCharacter::TickGuard()
{
	CheckVisibility();
	if (CurrentPath.IsEmpty() && bFromSecond == false && bFromThird == false)
	{
		CurrentPath = PathfindingSubsystem->GetGuardLoopSecond(Lamp->GetActorLocation());
		bFromSecond = true;
		bFromThird = false;
	} else if (CurrentPath.IsEmpty() && bFromSecond == true)
	{
		CurrentPath = PathfindingSubsystem->GetGuardLoopThird(Lamp->GetActorLocation());
		bFromSecond = false;
		bFromThird = true;
	} else if (CurrentPath.IsEmpty() && bFromThird == true)
	{
		CurrentPath = PathfindingSubsystem->GetGuardLoopSecond(Lamp->GetActorLocation());
		bFromSecond = true;
		bFromThird = false;
	}
	MoveAlongPath();
	
}

void AEnemyCharacter::OnSensedPawn(APawn* SensedActor)
{
	if (APlayerCharacter* Player = Cast<APlayerCharacter>(SensedActor))
	{
		SensedCharacter = Player;
		UE_LOG(LogTemp, Display, TEXT("Sensed Player"))
	}
}

void AEnemyCharacter::UpdateSight()
{
	if (!SensedCharacter) return;
	if (PawnSensingComponent)
	{
		if (!PawnSensingComponent->HasLineOfSightTo(SensedCharacter))
		{
			SensedCharacter = nullptr;
			UE_LOG(LogTemp, Display, TEXT("Lost Player"))
		}
	}
}

void AEnemyCharacter::CheckVisibility()
{
	ServerCheckVisibility();
}

void AEnemyCharacter::OnBellHeard(float Volume)
{

	if (Volume <= 0.3)
	{
		CurrentPath.Empty();
		CurrentState = EEnemyState::Evade;
	} else
	{
		CurrentPath.Empty();
		CurrentState = EEnemyState::Investigate;
	}
	
}


// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
	if (!canTick)
	{
		return;
	}
	
	Super::Tick(DeltaTime);
	if (GetLocalRole() == ROLE_Authority)
	{
		UpdateSight();
	
		switch(CurrentState)
		{
		case EEnemyState::Patrol:
			TickPatrol();
			this->SetActorHiddenInGame(false);
			//UE_LOG(LogTemp, Display, TEXT("Patrolling"))
			if (SensedCharacter)
			{
				if (HealthComponent->GetCurrentHealthPercentage() >= 0.4f)
				{
					CurrentState = EEnemyState::Engage;
				} else
				{
					CurrentState = EEnemyState::Evade;
				}
				CurrentPath.Empty();
			}
			break;
		case EEnemyState::Engage:
			TickEngage();
			//UE_LOG(LogTemp, Display, TEXT("Engaging"))
		
			if (!SensedCharacter)
			{
				CurrentState = EEnemyState::Patrol;
			}
			break;
		case EEnemyState::Evade:
			TickEvade();
			//UE_LOG(LogTemp, Display, TEXT("Evading"))
			this->SetActorHiddenInGame(false);
			if (CurrentPath.IsEmpty())
			{
				CurrentState = EEnemyState::Patrol;
			}
			break;
		case EEnemyState::Investigate:
			TickInvestigate();
			//UE_LOG(LogTemp, Display, TEXT("Investigating"))
			this->SetActorHiddenInGame(false);
			if (CurrentPath.IsEmpty())
			{
				CurrentState = EEnemyState::Guard;
			}
			break;
		case EEnemyState::Guard:
			TickGuard();
			GuardTimer = GuardTimer + 1 * DeltaTime;
			if (GuardTimer > 10)
			{
				GuardTimer = 0;
				CurrentState = EEnemyState::Patrol;
			}
			UE_LOG(LogTemp, Display, TEXT("Guarding"))
			this->SetActorHiddenInGame(false);
			break;
		}
	}
	
	
}

// Called to bind functionality to input
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AEnemyCharacter::CanTick()
{
	canTick = true;
}

APlayerCharacter* AEnemyCharacter::FindPlayer() const
{
	APlayerCharacter* Player = nullptr;
	for (TActorIterator<APlayerCharacter> It(GetWorld()); It; ++It)
	{
		Player = *It;
		break;
	}
	if (!Player)
	{
		UE_LOG(LogTemp, Error, TEXT("Unable to find the Player Character in the world."))
	}
	return Player;
}

void AEnemyCharacter::CheckVisibilityImplementation()
{
	TArray<APlayerCharacter*> Players;
	for (TActorIterator<APlayerCharacter> It(GetWorld()); It; ++It)
	{
		Players.Add(*It);
	}
	GetMesh()->SetVisibility(false);
	for (APlayerCharacter* Player : Players)
	{
		if (Player)
		{
			float Distance = FVector::Dist(this->GetActorLocation(), Player->GetActorLocation());
			if (Distance < 200.0f)
			{
				// If the player is within the visibility range, don't hide the AI
				GetMesh()->SetVisibility(true);
				//UE_LOG(LogTemp, Error, TEXT("dont be invisible"))
			}
		}
	}
}

void AEnemyCharacter::ServerCheckVisibility_Implementation()
{
	MulticastCheckVisibility();
}

void AEnemyCharacter::MulticastCheckVisibility_Implementation()
{
	CheckVisibilityImplementation();
}

