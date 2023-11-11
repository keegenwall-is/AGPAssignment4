// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Room1Class.h"
#include "Room2Class.h"
#include "Room3Class.h"
#include "Room4Class.h"
#include "GameFramework/Actor.h"
#include "LandscapeGenerator.generated.h"

class UPathfindingSubsystem;
class UPCGGameInstance;
class AWallClass;
class ARoom1Class;
class ARoom2Class;
class ARoom3Class;
class ARoom4Class;
class ARoom5Class;
class ATableClass;
class ATableChairClass;
class ANavigationNode;

UCLASS()
class AGP_API ALandscapeGenerator : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALandscapeGenerator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void PopulateArray();
	void DrawGrid();
	void DrawPath();
	void GenerateRooms();
	void SpawnRooms();
	void SpawnCorners();
	void SpawnEdge1();
	void SpawnEdge2();
	void SpawnEdge3();
	void SpawnEdge4();
	void SpawnTables();
	void GenerateNodes();
	FRotator RandomRotation();
	

	TArray<FVector> SpawnLocations;
	TArray<FVector> Edges1;
	TArray<FVector> Edges2;
	TArray<FVector> Edges3;
	TArray<FVector> Edges4;
	TArray<FVector> Corners;
	TArray<FVector> AllOptions;

	virtual bool ShouldTickIfViewportsOnly() const override;


	UPROPERTY(EditAnywhere)
	int height = 5;
	UPROPERTY(EditAnywhere)
	int width = 5;

	UPROPERTY(VisibleAnywhere)
	TArray<FVector> Path1;
	UPROPERTY(VisibleAnywhere)
	TArray<FVector> Path2;
	TArray<FVector> TempPath1;
	TArray<FVector> TempPath2;
	UPROPERTY(VisibleAnywhere)
	TArray<FVector> TotalPath;
	FVector StartPoint;
	FVector EndPoint;

	UPROPERTY()
	UPathfindingSubsystem* pathfindingSubsystem;



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};