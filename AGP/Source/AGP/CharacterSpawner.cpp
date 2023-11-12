// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterSpawner.h"

#include "EngineUtils.h"

// Sets default values
ACharacterSpawner::ACharacterSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacterSpawner::BeginPlay()
{
	Super::BeginPlay();
	for (TActorIterator<APlayerCharacter> It(GetWorld()); It; ++It)
	{
		players.Add(*It);
	}
	
	for (APlayerCharacter* player : players)
	{
		player->SetActorLocation(StartPoint);
	}

	for (TActorIterator<AEnemyCharacter> It(GetWorld()); It; ++It)
	{
		enemies.Add(*It);
	}
	
	for (AEnemyCharacter* enemy : enemies)
	{
		enemy->SetActorLocation(EndPoint);
	}
	
}

// Called every frame
void ACharacterSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

