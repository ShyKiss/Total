#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby_Persistent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Lobby_Persistent.Lobby_Persistent_C
// 0x0008 (0x0258 - 0x0250)
class ALobby_Persistent_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0250(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	bool OnWorldPopulateFinishedTimeSliced();
	void OnWorldPopulateFinished();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void StreamFeaturedLevel();
	void OnWorldFullyLoaded();
	void ExecuteUbergraph_Lobby_Persistent(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lobby_Persistent_C">();
	}
	static class ALobby_Persistent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobby_Persistent_C>();
	}
};
static_assert(alignof(ALobby_Persistent_C) == 0x000008, "Wrong alignment on ALobby_Persistent_C");
static_assert(sizeof(ALobby_Persistent_C) == 0x000258, "Wrong size on ALobby_Persistent_C");
static_assert(offsetof(ALobby_Persistent_C, UberGraphFrame) == 0x000250, "Member 'ALobby_Persistent_C::UberGraphFrame' has a wrong offset!");

}
