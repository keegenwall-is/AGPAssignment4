// Fill out your copyright notice in the Description page of Project Settings.


#include "PathfindingSubsystem.h"

#include "EngineUtils.h"
#include "NavigationNode.h"
#include "AGP/Characters/EnemyCharacter.h"

void UPathfindingSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	//PopulateNodes();
}

TArray<FVector> UPathfindingSubsystem::GetRandomPath(const FVector& StartLocation)
{	
	return GetPath(FindNearestNode(StartLocation), GetRandomNode());
}

TArray<FVector> UPathfindingSubsystem::GetPath(const FVector& StartLocation, const FVector& TargetLocation)
{
	return GetPath(FindNearestNode(StartLocation), FindNearestNode(TargetLocation));
}

TArray<FVector> UPathfindingSubsystem::GetPathAway(const FVector& StartLocation, const FVector& TargetLocation)
{
	return GetPath(FindNearestNode(StartLocation), FindFurthestNode(TargetLocation));
}

TArray<FVector> UPathfindingSubsystem::GetGuardLoopSecond(const FVector& StartLocation)
{
	TArray<FVector> HalfLoop;
	HalfLoop = GetPath(FindSecondNearestNode(StartLocation), FindNearestNode(StartLocation));
	HalfLoop.Append(GetPath(FindNearestNode(StartLocation), FindSecondNearestNode(StartLocation)));
	return HalfLoop;
}

TArray<FVector> UPathfindingSubsystem::GetGuardLoopThird(const FVector& StartLocation)
{
	TArray<FVector> HalfLoop;
	HalfLoop = GetPath(FindThirdNearestNode(StartLocation), FindNearestNode(StartLocation));
	HalfLoop.Append(GetPath(FindNearestNode(StartLocation), FindThirdNearestNode(StartLocation)) );
	return HalfLoop;
}

void UPathfindingSubsystem::PopulateNodes()
{
	Nodes.Empty();

	for (TActorIterator<ANavigationNode> It(GetWorld()); It; ++It)
	{
		Nodes.Add(*It);
		UE_LOG(LogTemp, Warning, TEXT("NODE: %s"), *(*It)->GetActorLocation().ToString())
	}
	
}

void UPathfindingSubsystem::DeleteOtherNodes(TArray<FVector> Path1, TArray<FVector> Path2)
{
	for (ANavigationNode* node : Nodes)
	{
		for (FVector place : Path1)
		{
			if (node->GetActorLocation() == place)
			{
				NodesToKeep.Add(node);
			}
		}
		for (FVector place : Path2)
		{
			if (node->GetActorLocation() == place)
			{
				NodesToKeep.Add(node);
			}
		}
	}
	
	for (ANavigationNode* node : Nodes)
	{
		if (!NodesToKeep.Contains(node))
		{
			NodesToRemove.Add(node);
		}
	}

	for (ANavigationNode* node : NodesToKeep)
	{
		for (ANavigationNode* n : NodesToRemove)
		{
			node->DeleteConnection(n);
		}
	}

	for (ANavigationNode* node : NodesToRemove)
	{
		UE_LOG(LogTemp, Warning, TEXT("yes"));
		//Nodes.Remove(node);
		node->DeleteAllConnections();
		node->Destroy();
	}
}

ANavigationNode* UPathfindingSubsystem::GetRandomNode()
{
	// Failure condition
	if (Nodes.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("The nodes array is empty."))
		return nullptr;
	}
	const int32 RandIndex = FMath::RandRange(0, Nodes.Num()-1);
	return Nodes[RandIndex];
}

void UPathfindingSubsystem::RemoveAllNodes()
{
	for (int i = 0; i < Nodes.Num()-1; i++)
	{
		Nodes[i]->Destroy();
	}
	Nodes.Empty();
}

ANavigationNode* UPathfindingSubsystem::FindNearestNode(const FVector& TargetLocation)
{
	// Failure condition.
	if (Nodes.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("The nodes array is empty."))
		return nullptr;
	}

	// Using the minimum programming pattern to find the closest node.
	// What is the Big O complexity of this? Can you do it more efficiently?
	ANavigationNode* ClosestNode = nullptr;
	float MinDistance = UE_MAX_FLT;
	for (ANavigationNode* Node : Nodes)
	{
		if (Node == nullptr)
		{
			UE_LOG(LogTemp, Error, TEXT("nothing."))
		}
		const float Distance = FVector::Distance(TargetLocation, Node->GetActorLocation());
		if (Distance < MinDistance)
		{
			MinDistance = Distance;
			ClosestNode = Node;
		}
	}

	return ClosestNode;
}

ANavigationNode* UPathfindingSubsystem::FindSecondNearestNode(const FVector& TargetLocation)
{

	if (Nodes.Num() < 2)
	{
		UE_LOG(LogTemp, Error, TEXT("There are not enough nodes to find the second nearest node."));
		return nullptr;
	}

	ANavigationNode* ClosestNode = nullptr;
	ANavigationNode* SecondClosestNode = nullptr;
	float MinDistance = UE_MAX_FLT;
	float SecondMinDistance = UE_MAX_FLT;

	for (ANavigationNode* Node : Nodes)
	{
		const float Distance = FVector::Distance(TargetLocation, Node->GetActorLocation());

		if (Distance < MinDistance)
		{
			SecondClosestNode = ClosestNode;
			SecondMinDistance = MinDistance;

			ClosestNode = Node;
			MinDistance = Distance;
		}
		else if (Distance < SecondMinDistance)
		{
			SecondClosestNode = Node;
			SecondMinDistance = Distance;
		}
	}

	return SecondClosestNode;
	
}

ANavigationNode* UPathfindingSubsystem::FindThirdNearestNode(const FVector& TargetLocation)
{

	if (Nodes.Num() < 3)
	{
		UE_LOG(LogTemp, Error, TEXT("There are not enough nodes to find the third nearest node."));
		return nullptr;
	}

	ANavigationNode* ClosestNode = nullptr;
	ANavigationNode* SecondClosestNode = nullptr;
	ANavigationNode* ThirdClosestNode = nullptr;
	float MinDistance = UE_MAX_FLT;
	float SecondMinDistance = UE_MAX_FLT;
	float ThirdMinDistance = UE_MAX_FLT;

	for (ANavigationNode* Node : Nodes)
	{
		const float Distance = FVector::Distance(TargetLocation, Node->GetActorLocation());

		if (Distance < MinDistance)
		{
			ThirdClosestNode = SecondClosestNode;
			ThirdMinDistance = SecondMinDistance;

			SecondClosestNode = ClosestNode;
			SecondMinDistance = MinDistance;

			ClosestNode = Node;
			MinDistance = Distance;
		}
		else if (Distance < SecondMinDistance)
		{
			ThirdClosestNode = SecondClosestNode;
			ThirdMinDistance = SecondMinDistance;

			SecondClosestNode = Node;
			SecondMinDistance = Distance;
		}
		else if (Distance < ThirdMinDistance)
		{
			ThirdClosestNode = Node;
			ThirdMinDistance = Distance;
		}
	}

	return ThirdClosestNode;
	
}

ANavigationNode* UPathfindingSubsystem::FindFurthestNode(const FVector& TargetLocation)
{
	// Failure condition.
	if (Nodes.Num() == 0)
	{
		UE_LOG(LogTemp, Error, TEXT("The nodes array is empty."))
		return nullptr;
	}

	// Using the minimum programming pattern to find the closest node.
	// What is the Big O complexity of this? Can you do it more efficiently?
	ANavigationNode* FurthestNode = nullptr;
	float MaxDistance = -1.0f;
	for (ANavigationNode* Node : Nodes)
	{
		const float Distance = FVector::Distance(TargetLocation, Node->GetActorLocation());
		if (Distance > MaxDistance)
		{
			MaxDistance = Distance;
			FurthestNode = Node;
		}
	}

	return FurthestNode;
}

TArray<FVector> UPathfindingSubsystem::GetPath(ANavigationNode* StartNode, ANavigationNode* EndNode)
{
	if (!StartNode || !EndNode)
	{
		UE_LOG(LogTemp, Error, TEXT("Either the start or end node are nullptrs."))
		return TArray<FVector>();
	}

	// Setup the open set and add the start node.
	TArray<ANavigationNode*> OpenSet;
	OpenSet.Add(StartNode);

	// Setup the maps that will hold the GScores, HScores and CameFrom
	TMap<ANavigationNode*, float> GScores, HScores;
	TMap<ANavigationNode*, ANavigationNode*> CameFrom;
	// You could pre-populate the GScores and HScores maps with all of the GScores (at infinity) and HScores here by looping over
	// all the nodes in the Nodes array. However it is more efficient to only calculate these when you need them
	// as some nodes might not be explored when finding a path.

	// Setup the start nodes G and H score.
	GScores.Add(StartNode, 0);
	HScores.Add(StartNode, FVector::Distance(StartNode->GetActorLocation(), EndNode->GetActorLocation()));
	CameFrom.Add(StartNode, nullptr);

	while (!OpenSet.IsEmpty())
	{
		// Find the node in the open set with the lowest FScore.
		ANavigationNode* CurrentNode = OpenSet[0]; // We know this exists because the OpenSet is not empty.
		for (int32 i = 1; i < OpenSet.Num(); i++)
		{
			// We can be sure that all the nodes in the open set have already had their GScores and HScores calculated.
			if (GScores[OpenSet[i]] + HScores[OpenSet[i]] < GScores[CurrentNode] + HScores[CurrentNode])
			{
				CurrentNode = OpenSet[i];
			}
		}

		// Remove the current node from the OpenSet
		OpenSet.Remove(CurrentNode);

		if (CurrentNode == EndNode)
		{
			// Then we have found the path so reconstruct it and get the positions of each of the nodes in the path.
			//UE_LOG(LogTemp, Display, TEXT("PATH FOUND"))
			return ReconstructPath(CameFrom, EndNode);
		}

		for (ANavigationNode* ConnectedNode : CurrentNode->ConnectedNodes)
		{
			if (!ConnectedNode) continue; // Failsafe if the ConnectedNode is a nullptr.
			const float TentativeGScore = GScores[CurrentNode] + FVector::Distance(CurrentNode->GetActorLocation(), ConnectedNode->GetActorLocation());
			// Because we didn't setup all the scores and came from at the start, we need to check if the connected node has a gscore
			// already otherwise set it. If it doesn't have a gscore then it won't have all the other things either so initialise them as well.
			if (!GScores.Contains(ConnectedNode))
			{
				GScores.Add(ConnectedNode, UE_MAX_FLT);
				HScores.Add(ConnectedNode, FVector::Distance(ConnectedNode->GetActorLocation(), EndNode->GetActorLocation()));
				CameFrom.Add(ConnectedNode, nullptr);
			}

			// Then update this nodes scores and came from if the tentative g score is lower than the current g score.
			if (TentativeGScore < GScores[ConnectedNode])
			{
				CameFrom[ConnectedNode] = CurrentNode;
				GScores[ConnectedNode] = TentativeGScore;
				// HScore is already set when adding the node to the HScores map.
				// Then add connected node to the open set if it isn't already in there.
				if (!OpenSet.Contains(ConnectedNode))
				{
					OpenSet.Add(ConnectedNode);
				}
			}
		}
	}

	// If we get here, then no path has been found so return an empty array.
	return TArray<FVector>();
	
}

TArray<FVector> UPathfindingSubsystem::ReconstructPath(const TMap<ANavigationNode*, ANavigationNode*>& CameFromMap, ANavigationNode* EndNode)
{
	TArray<FVector> NodeLocations;

	const ANavigationNode* NextNode = EndNode;
	while(NextNode)
	{
		NodeLocations.Push(NextNode->GetActorLocation());
		NextNode = CameFromMap[NextNode];
	}

	return NodeLocations;
}

void UPathfindingSubsystem::PlaceProceduralNodes(int32 MapWidth, int32 MapHeight)
{
	// Need to destroy all of the current nodes in the world.
	RemoveAllNodes();
	
	// Then create and place all the nodes and store them in the ProcedurallyPlacedNodes array.
	for (int Y = 0; Y < MapHeight; Y++)
	{
		for (int X = 0; X < MapWidth; X++)
		{
			// Spawn the node in
			if (ANavigationNode* Node = GetWorld()->SpawnActor<ANavigationNode>())
			{
				Node->SetActorLocation(FVector(Y * 950, X * 950, 0));
				ProcedurallyPlacedNodes.Add(Node);
			} else
			{
				UE_LOG(LogTemp, Error, TEXT("Unable to spawn a node for some reason. This is bad!"))
			}
			
		}
	}
	// Then add connections between all adjacent nodes.
	for (int Y = 0; Y < MapHeight; Y++)
	{
		for (int X = 0; X < MapWidth; X++)
		{
			if (ANavigationNode* CurrentNode = ProcedurallyPlacedNodes[Y * MapWidth + X]) // Make sure it's a valid ptr.
			{
				// ADD CONNECTIONS:
				// Add Left
				if (X != MapWidth-1)
					CurrentNode->ConnectedNodes.Add(ProcedurallyPlacedNodes[Y * MapWidth + X+1]);
				// Add Up
				if (Y != MapHeight-1)
					CurrentNode->ConnectedNodes.Add(ProcedurallyPlacedNodes[(Y+1) * MapWidth + X]);
				// Add Right
				if (X != 0)
					CurrentNode->ConnectedNodes.Add(ProcedurallyPlacedNodes[Y * MapWidth + X-1]);
				// Add Down
				if (Y != 0)
					CurrentNode->ConnectedNodes.Add(ProcedurallyPlacedNodes[(Y-1) * MapWidth + X]);
			}
		}
	}
	PopulateNodes();
}

