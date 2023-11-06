// Fill out your copyright notice in the Description page of Project Settings.


#include "LampPickup.h"

#include "GeometryTypes.h"
#include "Components/AudioComponent.h"
#include "AGP/Characters/EnemyCharacter.h"

ALampPickup::ALampPickup()
{
	PrimaryActorTick.bCanEverTick = true;

	Ring = CreateDefaultSubobject<UAudioComponent>(TEXT("Ring"));
	Ring->SetupAttachment(RootComponent);
	
}

void ALampPickup::OnPickupOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                  UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitInfo)
{

	Ring = FindComponentByClass<UAudioComponent>();
	
	if (Ring)
	{
		if (EnemyCharacterReference)
		{
			float Distance = FVector::Dist(EnemyCharacterReference->GetActorLocation(), GetActorLocation());
			
			float Volume = Distance/MaxHearingDistance;
			if (Volume <= 1)
			{
				EnemyCharacterReference->OnBellHeard(Volume);
			}
			
		}
		
		Ring->Play(0.0f);
	}
	LampTimer = 0;
}

void ALampPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DrawDebugSphere(GetWorld(), GetActorLocation(), 360.0f, 32, FColor::Red, false, -1.0f, 0, 2.0f);
	DrawDebugSphere(GetWorld(), GetActorLocation(), 1200.0f, 32, FColor::Green, false, -1.0f, 0, 2.0f);
}
