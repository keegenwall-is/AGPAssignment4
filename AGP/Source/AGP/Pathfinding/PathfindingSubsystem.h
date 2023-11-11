// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "PathfindingSubsystem.generated.h"

class ANavigationNode;
/**
 * 
 */
UCLASS()
class AGP_API UPathfindingSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:

	virtual void OnWorldBeginPlay(UWorld& InWorld) override;
	/**
	 * Will retrieve a path from the StartLocation, to a random position in the world's navigation system.
	 * @param StartLocation The location that the path will start at.
	 * @return An array of vector positions representing the steps along the path, in reverse order.
	 */
	TArray<FVector> GetRandomPath(const FVector& StartLocation);
	/**
	 * Will retrieve a path from the StartLocation, to the TargetLocation
	 * @param StartLocation The location that the path will start at.
	 * @param TargetLocation A location near where the path will end at.
	 * @return An array of vector positions representing the steps along the path, in reverse order.
	 */
	TArray<FVector> GetPath(const FVector& StartLocation, const FVector& TargetLocation);
	/**
	 * Will retrieve a path from the StartLocation, to a position far away from the TargetLocation
	 * @param StartLocation The location that the path will start at.
	 * @param TargetLocation The location that will be used to determine a position far away from.
	 * @return An array of vector positions representing the steps along the path, in reverse order.
	 */
	TArray<FVector> GetPathAway(const FVector& StartLocation, const FVector& TargetLocation);

	TArray<FVector> GetGuardLoopSecond(const FVector& StartLocation);
	TArray<FVector> GetGuardLoopThird(const FVector& StartLocation);
	ANavigationNode* FindNearestNode(const FVector& TargetLocation);
	ANavigationNode* FindSecondNearestNode(const FVector& TargetLocation);
	ANavigationNode* FindThirdNearestNode(const FVector& TargetLocation);

	//void PlaceProceduralNodes(const TArray<FVector>& LandscapeVertexData, int32 MapWidth, int32 MapHeight);
	void DeleteOtherNodes(TArray<FVector> Path1, TArray<FVector> Path2);

protected:

	TArray<ANavigationNode*> Nodes;
	TArray<ANavigationNode*> ProcedurallyPlacedNodes;

private:

	void PopulateNodes();
	//void RemoveAllNodes();
	ANavigationNode* GetRandomNode();
	

	ANavigationNode* FindFurthestNode(const FVector& TargetLocation);
	TArray<FVector> GetPath(ANavigationNode* StartNode, ANavigationNode* EndNode);
	static TArray<FVector> ReconstructPath(const TMap<ANavigationNode*, ANavigationNode*>& CameFromMap, ANavigationNode* EndNode);
	TArray<ANavigationNode*> NodesToKeep;
	TArray<ANavigationNode*> NodesToRemove;
};
