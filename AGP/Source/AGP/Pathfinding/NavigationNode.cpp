	// Fill out your copyright notice in the Description page of Project Settings.


#include "NavigationNode.h"

// Sets default values
ANavigationNode::ANavigationNode()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	bNetLoadOnClient = false;
	
	LocationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Location Component"));
	SetRootComponent(LocationComponent);

	

}

void ANavigationNode::DeleteAllConnections()
{
	ConnectedNodes.Empty();
}

void ANavigationNode::DeleteConnection(ANavigationNode* node)
{
	if (ConnectedNodes.Contains(node))
	{
		ConnectedNodes.Remove(node);
	}
}

// Called when the game starts or when spawned
void ANavigationNode::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ANavigationNode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FColor SphereColor = FColor::White;
	if (ConnectedNodes.Contains(this))
	{
		SphereColor = FColor::Red;
	}

	DrawDebugSphere(GetWorld(), GetActorLocation(), 100.0f, 4, SphereColor, false, -1, 0, 5.0f);

	for (const ANavigationNode* ConnectedNode : ConnectedNodes)
	{
		if (ConnectedNode)
		{
			FColor LineColor = FColor::Red;
			if (ConnectedNode->ConnectedNodes.Contains(this))
			{
				LineColor = FColor::Green;
			}
			DrawDebugLine(GetWorld(), GetActorLocation(), ConnectedNode->GetActorLocation(),
				LineColor, false, -1, 0, 5.0f);
		}
	}
}



