// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickupBase.h"
#include "LampPickup.generated.h"

class AEnemyCharacter;
/**
 * 
 */
UCLASS()
class AGP_API ALampPickup : public APickupBase
{
	GENERATED_BODY()

public:
	ALampPickup();
	
protected:
	virtual void OnPickupOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
		UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& HitInfo) override;

public:
	virtual void Tick(float DeltaTime) override;

	int32 LampTimer = 4;

	UPROPERTY(EditAnywhere)
	UAudioComponent* Ring;

	UPROPERTY(EditAnywhere)
	float MaxHearingDistance = 1200.0f;

private:
	UPROPERTY(EditAnywhere)
	AEnemyCharacter* EnemyCharacterReference;
	
};
