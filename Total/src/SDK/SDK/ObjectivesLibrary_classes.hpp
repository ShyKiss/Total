#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ObjectivesLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ObjectivesLibrary.ObjectivesLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UObjectivesLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetClueObjectiveIconFromName(class FName ClueName, class UObject* __WorldContext, struct FSlateBrush* ClueObjectiveIcon);
	static void GetClueTextFromName(class FName ClueName, class UObject* __WorldContext, class FText* ClueText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ObjectivesLibrary_C">();
	}
	static class UObjectivesLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UObjectivesLibrary_C>();
	}
};
static_assert(alignof(UObjectivesLibrary_C) == 0x000008, "Wrong alignment on UObjectivesLibrary_C");
static_assert(sizeof(UObjectivesLibrary_C) == 0x000028, "Wrong size on UObjectivesLibrary_C");

}

