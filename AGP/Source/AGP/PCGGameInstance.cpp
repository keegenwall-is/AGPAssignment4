// Fill out your copyright notice in the Description page of Project Settings.


#include "PCGGameInstance.h"


#include "Pathfinding/NavigationNode.h"
#include "Room1Class.h"
#include "Room2Class.h"
#include "Room3Class.h"
#include "Room4Class.h"
#include "TableChairClass.h"
#include "TableClass.h"

class ARoom1Class;
class ARoom2Class;
class ARoom3Class;
class ARoom4Class;
class ARoom5Class;
class ATableClass;

UClass* UPCGGameInstance::GetRoom1Class() const
{
	return Room1Class.Get();
}

UClass* UPCGGameInstance::GetRoom2Class() const
{
	return Room2Class.Get();
}

UClass* UPCGGameInstance::GetRoom3Class() const
{
	return Room3Class.Get();
}

UClass* UPCGGameInstance::GetRoom4Class() const
{
	return Room4Class.Get();
}

UClass* UPCGGameInstance::GetRoom5Class() const
{
	return Room5Class.Get();
}

UClass* UPCGGameInstance::GetTableClass() const
{
	return TableClass.Get();
}

UClass* UPCGGameInstance::GetTableChairClass() const
{
	return TableChairClass.Get();
}

