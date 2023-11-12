// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/EnemyCharacter.h"
#include "Characters/PlayerCharacter.h"
#include "GameFramework/Actor.h"
#include "CharacterSpawner.generated.h"

UCLASS()
class AGP_API ACharacterSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACharacterSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	TArray<APlayerCharacter*> players;
	TArray<AEnemyCharacter*> enemies;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FVector StartPoint;
	FVector EndPoint;

};
