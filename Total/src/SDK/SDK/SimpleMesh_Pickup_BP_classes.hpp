#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SimpleMesh_Pickup_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Base_RBPickup_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SimpleMesh_Pickup_BP.SimpleMesh_Pickup_BP_C
// 0x0010 (0x0A80 - 0x0A70)
class ASimpleMesh_Pickup_BP_C : public ABase_RBPickup_BP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   ItemWorldMesh;                                     // 0x0A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SimpleMesh_Pickup_BP(int32 EntryPoint);
	void Event_OnContainerChanged();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SimpleMesh_Pickup_BP_C">();
	}
	static class ASimpleMesh_Pickup_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASimpleMesh_Pickup_BP_C>();
	}
};
static_assert(alignof(ASimpleMesh_Pickup_BP_C) == 0x000010, "Wrong alignment on ASimpleMesh_Pickup_BP_C");
static_assert(sizeof(ASimpleMesh_Pickup_BP_C) == 0x000A80, "Wrong size on ASimpleMesh_Pickup_BP_C");
static_assert(offsetof(ASimpleMesh_Pickup_BP_C, UberGraphFrame) == 0x000A70, "Member 'ASimpleMesh_Pickup_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASimpleMesh_Pickup_BP_C, ItemWorldMesh) == 0x000A78, "Member 'ASimpleMesh_Pickup_BP_C::ItemWorldMesh' has a wrong offset!");

}

