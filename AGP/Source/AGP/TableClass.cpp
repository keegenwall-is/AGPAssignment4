// Fill out your copyright notice in the Description page of Project Settings.


#include "TableClass.h"

// Sets default values
ATableClass::ATableClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATableClass::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATableClass::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

