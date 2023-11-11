// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Room1Class.h"
#include "Room2Class.h"
#include "Room3Class.h"
#include "Room4Class.h"
#include "Room5Class.h"
#include "EmptyRoomClass.h"
#include "PCGGameInstance.generated.h"

class ARoom1Class;
class ARoom2Class;
class ARoom3Class;
class ARoom4Class;
class ARoom5Class;
class ATableClass;
class ATableChairClass;
class AEmptyRoomClass;
/**
 *
 */
UCLASS()
class AGP_API UPCGGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UClass* GetRoom1Class() const;
	UClass* GetRoom2Class() const;
	UClass* GetRoom3Class() const;
	UClass* GetRoom4Class() const;
	UClass* GetRoom5Class() const;
	UClass* GetTableClass() const;
	UClass* GetTableChairClass() const;
	UClass* GetEmptyRoomClass() const;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Room Classes")
	TSubclassOf<ARoom1Class> Room1Class;

	UPROPERTY(EditDefaultsOnly, Category = "Room Classes")
	TSubclassOf<ARoom2Class> Room2Class;

	UPROPERTY(EditDefaultsOnly, Category = "Room Classes")
	TSubclassOf<ARoom3Class> Room3Class;

	UPROPERTY(EditDefaultsOnly, Category = "Room Classes")
	TSubclassOf<ARoom4Class> Room4Class;

	UPROPERTY(EditDefaultsOnly, Category = "Room Classes")
	TSubclassOf<ARoom5Class> Room5Class;

	UPROPERTY(EditDefaultsOnly, Category = "Room Classes")
	TSubclassOf<AEmptyRoomClass> EmptyRoomClass;

	UPROPERTY(EditDefaultsOnly, Category = "Object Classes")
	TSubclassOf<ATableClass> TableClass;

	UPROPERTY(EditDefaultsOnly, Category = "Object Classes")
	TSubclassOf<ATableChairClass> TableChairClass;
};
