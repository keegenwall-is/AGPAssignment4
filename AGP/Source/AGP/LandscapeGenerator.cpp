// Fill out your copyright notice in the Description page of Project Settings.


#include "LandscapeGenerator.h"

#include "EngineUtils.h"
#include "Pathfinding/PathfindingSubsystem.h"
#include "PCGGameInstance.h"
#include "Room1Class.h"
#include "Room2Class.h"
#include "Room3Class.h"
#include "Room4Class.h"
#include "Room5Class.h"
#include "TableChairClass.h"
#include "TableClass.h"
#include "Characters/EnemyCharacter.h"
#include "Kismet/KismetMathLibrary.h"

class UPathfindingSubsystem;
class ARoom1Class;
class ARoom2Class;
class ARoom3Class;
class ARoom4Class;

// Sets default values
ALandscapeGenerator::ALandscapeGenerator()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALandscapeGenerator::BeginPlay()
{
	pathfindingSubsystem = GetWorld()->GetSubsystem<UPathfindingSubsystem>();
	Super::BeginPlay();
	SpawnOutside();
	PopulateArray();
	if (DoDebug) { DrawGrid(); }
	DrawPath();
	GenerateRooms();
	SpawnLamps();


	/*for (TActorIterator<APlayerCharacter> It(GetWorld()); It; ++It)
	{
		players.Add(*It);
	}
	
	for (APlayerCharacter* player : players)
	{
		player->SetActorLocation(StartPoint);
	}*/

	for (TActorIterator<AEnemyCharacter> It(GetWorld()); It; ++It)
	{
		enemies.Add(*It);
	}
	
	for (AEnemyCharacter* enemy : enemies)
	{
		enemy->SetActorLocation(EndPoint);
	}
	
}

bool ALandscapeGenerator::ShouldTickIfViewportsOnly() const
{
	return true;
}

// Called every frame
void ALandscapeGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALandscapeGenerator::SpawnOutside()
{
	const UPCGGameInstance* GameInstance = GetWorld()->GetGameInstance<UPCGGameInstance>();
	for (int i =-1; i < height+1; i++)
	{
		for (int j = -1; j < width+1; j++)
		{
			if (i == -1 || j == -1 || i == height || j == width)
			{
				Outsides.Add(FVector(i * 950, j * 950, 0));
			}
		}
	}

	for (FVector location : Outsides)
	{
		GetWorld()->SpawnActor<AEmptyRoomClass>(GameInstance->GetEmptyRoomClass(), location, RandomRotation());
	}
}


void ALandscapeGenerator::PopulateArray()
{
	//size: (floor scale / 2) x 100
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			AllOptions.Add(FVector(i * 950, j * 950, 0));
			if (i == 0)
			{
				if (j == 0 || j == width - 1)
				{
					Corners.Add(FVector(i * 950, j * 950, 0));
				}
				else
				{
					Edges1.Add(FVector(i * 950, j * 950, 0));
				}
			}
			else if (i == height - 1)
			{
				if (j == width - 1 || j == 0)
				{
					Corners.Add(FVector(i * 950, j * 950, 0));
				}
				else
				{
					Edges4.Add(FVector(i * 950, j * 950, 0));
				}
			}
			if (j == 0 && i != 0 && i != height - 1)
			{
				Edges2.Add(FVector(i * 950, j * 950, 0));
			}
			else if (j == width - 1 && i != 0 && i != height - 1)
			{
				Edges3.Add(FVector(i * 950, j * 950, 0));
			}

			//adding everything in the middle to the list of spawn locations
			if (i != 0 && i != height - 1 && j != 0 && j != width - 1)
			{
				SpawnLocations.Add(FVector(i * 950, j * 950, 0));
			}
		}
	}
}

void ALandscapeGenerator::DrawGrid()
{
	//const UPCGGameInstance* GameInstance = GetWorld()->GetGameInstance<UPCGGameInstance>();
	for (FVector location : SpawnLocations)
	{
		DrawDebugSphere(GetWorld(), location, 50, 15, FColor::Blue, true);
		//GetWorld()->SpawnActor<ANavigationNode>(GameInstance->GetNavigationNode(), location, FRotator(0,0,0));
	}
	for (FVector place : Edges1)
	{
		DrawDebugSphere(GetWorld(), place, 100, 8, FColor::Red, true);
	}
	for (FVector place : Edges2)
	{
		DrawDebugSphere(GetWorld(), place, 100, 8, FColor::Magenta, true);
	}
	for (FVector place : Edges3)
	{
		DrawDebugSphere(GetWorld(), place, 100, 8, FColor::Orange, true);
	}
	for (FVector place : Edges4)
	{
		DrawDebugSphere(GetWorld(), place, 100, 8, FColor::Green, true);
	}
	for (FVector corner : Corners)
	{
		DrawDebugSphere(GetWorld(), corner, 150, 20, FColor::Yellow, true);
	}
}

void ALandscapeGenerator::DrawPath()
{
	if (pathfindingSubsystem)
	{
		// first sections of the two goal paths
		StartPoint = AllOptions[UKismetMathLibrary::RandomInteger(6)];
		int k = UKismetMathLibrary::RandomInteger(6);
		Path1 = pathfindingSubsystem->GetPath(StartPoint, Edges2[k]);
		
		k = UKismetMathLibrary::RandomInteger(6);
		Path2 = pathfindingSubsystem->GetPath(StartPoint, Edges3[k]);
		

		//second sections of the paths
		EndPoint = AllOptions[AllOptions.Num()-1-(UKismetMathLibrary::RandomInteger(6))];
		TempPath1 = pathfindingSubsystem->GetPath(Path1[0], EndPoint);
		FVector MidPoint = Edges4[UKismetMathLibrary::RandomInteger(4)];
		while (MidPoint == EndPoint)
		{
			MidPoint = Edges4[UKismetMathLibrary::RandomInteger(4)];
		}
		TempPath2 = pathfindingSubsystem->GetPath(Path2[0], MidPoint);

		//adding the first section to the second section to create two paths to the goal
		for (FVector p : TempPath1)
		{
			if (!Path1.Contains(p))
				Path1.Add(p);
		}

		TempPath1.Empty();
		TempPath1 = pathfindingSubsystem->GetPath(TempPath2[0], EndPoint);

		for (FVector p : TempPath2)
		{
			if (!Path2.Contains(p))
				Path2.Add(p);
		}
		for (FVector p : TempPath1)
		{
			if (!Path2.Contains(p))
				Path2.Add(p);
		}

		for (FVector p : Path2)
		{
			if (Path1.Contains(p))
			{
				Path2.Remove(p);
			}
		}
	}
}

void ALandscapeGenerator::GenerateRooms()
{
	const UPCGGameInstance* GameInstance = GetWorld()->GetGameInstance<UPCGGameInstance>();

	if (pathfindingSubsystem)
	{
		if (DoDebug)
		{
			DrawDebugSphere(GetWorld(), StartPoint, 300, 8, FColor::Cyan, true);
			DrawDebugSphere(GetWorld(), EndPoint, 300, 8, FColor::Cyan, true);
		}
		pathfindingSubsystem->DeleteOtherNodes(Path1, Path2);
	}
	
	//this section spawns in the rooms for the middle section of the grid
	//not including the edges and corners
	//this also excludes the path of rooms so it doesn't override them
	for (FVector location : AllOptions)
	{
		if (!Path1.Contains(location) && !Path2.Contains(location))
		{
			GetWorld()->SpawnActor<AEmptyRoomClass>(GameInstance->GetEmptyRoomClass(), location, RandomRotation());
		}
		else
		{
			GetWorld()->SpawnActor<ARoom4Class>(GameInstance->GetRoom4Class(), location, RandomRotation());
		}
	}
}

void ALandscapeGenerator::SpawnLamps()
{
	const UPCGGameInstance* GameInstance = GetWorld()->GetGameInstance<UPCGGameInstance>();

	int i = UKismetMathLibrary::RandomInteger(Path1.Num());
	int j = UKismetMathLibrary::RandomInteger(Path2.Num());
	
	GetWorld()->SpawnActor<ALampPickup>(GameInstance->GetLampPickupClass(), Path1[i], FRotator(0, 45, 0));
	GetWorld()->SpawnActor<ALampPickup>(GameInstance->GetLampPickupClass(), Path2[j], FRotator(0, 45, 0));
}


void ALandscapeGenerator::SpawnPathRooms(FVector p)
{
	const UPCGGameInstance* GameInstance = GetWorld()->GetGameInstance<UPCGGameInstance>();

	if (!Corners.Contains(p))
	{
		if (Edges1.Contains(p))
		{
			GetWorld()->SpawnActor<ARoom3Class>(GameInstance->GetRoom3Class(), p, FRotator(0, 180, 0));
		}
		else if (Edges2.Contains(p))
		{
			GetWorld()->SpawnActor<ARoom3Class>(GameInstance->GetRoom3Class(), p, FRotator(0, 270, 0));
		}
		else if (Edges3.Contains(p))
		{
			GetWorld()->SpawnActor<ARoom3Class>(GameInstance->GetRoom3Class(), p, FRotator(0, 90, 0));
		}
		else if (Edges4.Contains(p))
		{
			GetWorld()->SpawnActor<ARoom3Class>(GameInstance->GetRoom3Class(), p, FRotator(0, 0, 0));
		}
		else
		{
			GetWorld()->SpawnActor<ARoom4Class>(GameInstance->GetRoom4Class(), p, RandomRotation());
		}
	}
}

FRotator ALandscapeGenerator::RandomRotation()
{
	FRotator Rotation;

	int r = UKismetMathLibrary::RandomInteger(4);
	if (r == 0)
	{
		Rotation = FRotator(0, 0, 0);
	}
	else if (r == 1)
	{
		Rotation = FRotator(0, 90, 0);
	}
	else if (r == 2)
	{
		Rotation = FRotator(0, 180, 0);
	}
	else if (r == 3)
	{
		Rotation = FRotator(0, 270, 0);
	}

	return Rotation;
}

void ALandscapeGenerator::GenerateNodes()
{
	if (pathfindingSubsystem)
	{
		//pathfindingSubsystem->PlaceProceduralNodes(AllOptions, width, height);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Can't find the pathfinding subsystem"))
	}
}

