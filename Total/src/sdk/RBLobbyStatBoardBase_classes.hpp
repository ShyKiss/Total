#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBLobbyStatBoardBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RBLobbyStatBoardBase.RBLobbyStatBoardBase_C
// 0x0038 (0x0300 - 0x02C8)
class ARBLobbyStatBoardBase_C final : public ARBLobbyStatBoard
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URBSoundComponent*                      RBSound;                                           // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ALobbyExitReagentBoardNameItem_C*> Rolls;                                             // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class ALobbyExitReagentBoardNameItem_C*       MainRoll;                                          // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRefreshingRolls;                                  // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void UpdateAllEntries();
	void PlayRollSound();
	void Event_CurrentStatUpdated();
	void Event_EntriesUpdated();
	void ExecuteUbergraph_RBLobbyStatBoardBase(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RBLobbyStatBoardBase_C">();
	}
	static class ARBLobbyStatBoardBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARBLobbyStatBoardBase_C>();
	}
};
static_assert(alignof(ARBLobbyStatBoardBase_C) == 0x000008, "Wrong alignment on ARBLobbyStatBoardBase_C");
static_assert(sizeof(ARBLobbyStatBoardBase_C) == 0x000300, "Wrong size on ARBLobbyStatBoardBase_C");
static_assert(offsetof(ARBLobbyStatBoardBase_C, UberGraphFrame) == 0x0002C8, "Member 'ARBLobbyStatBoardBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARBLobbyStatBoardBase_C, RBSound) == 0x0002D0, "Member 'ARBLobbyStatBoardBase_C::RBSound' has a wrong offset!");
static_assert(offsetof(ARBLobbyStatBoardBase_C, StaticMesh) == 0x0002D8, "Member 'ARBLobbyStatBoardBase_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ARBLobbyStatBoardBase_C, Rolls) == 0x0002E0, "Member 'ARBLobbyStatBoardBase_C::Rolls' has a wrong offset!");
static_assert(offsetof(ARBLobbyStatBoardBase_C, MainRoll) == 0x0002F0, "Member 'ARBLobbyStatBoardBase_C::MainRoll' has a wrong offset!");
static_assert(offsetof(ARBLobbyStatBoardBase_C, bRefreshingRolls) == 0x0002F8, "Member 'ARBLobbyStatBoardBase_C::bRefreshingRolls' has a wrong offset!");

}
