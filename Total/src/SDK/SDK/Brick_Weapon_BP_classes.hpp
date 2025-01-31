#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Brick_Weapon_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SimpleMesh_ThrowableWeapon_BP_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Brick_Weapon_BP.Brick_Weapon_BP_C
// 0x0030 (0x0CD0 - 0x0CA0)
class ABrick_Weapon_BP_C final : public ASimpleMesh_ThrowableWeapon_BP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Brick_Weapon_BP_C;                  // 0x0CA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URBInteractionZoneComponent*            RBInteractionZoneSecondary;                        // 0x0CA8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMesh*>                    ItemWorldMeshes;                                   // 0x0CB0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UMaterialInstance*>              ItemWorldMaterials;                                // 0x0CC0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BP_OnGroundAndPoundCounter();
	void RefreshThrowableVisualAfterThrowHit();
	void ExecuteUbergraph_Brick_Weapon_BP(int32 EntryPoint);

	class URBInteractionZoneComponent* GetSecondaryInteractionZoneBox() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Brick_Weapon_BP_C">();
	}
	static class ABrick_Weapon_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABrick_Weapon_BP_C>();
	}
};
static_assert(alignof(ABrick_Weapon_BP_C) == 0x000010, "Wrong alignment on ABrick_Weapon_BP_C");
static_assert(sizeof(ABrick_Weapon_BP_C) == 0x000CD0, "Wrong size on ABrick_Weapon_BP_C");
static_assert(offsetof(ABrick_Weapon_BP_C, UberGraphFrame_Brick_Weapon_BP_C) == 0x000CA0, "Member 'ABrick_Weapon_BP_C::UberGraphFrame_Brick_Weapon_BP_C' has a wrong offset!");
static_assert(offsetof(ABrick_Weapon_BP_C, RBInteractionZoneSecondary) == 0x000CA8, "Member 'ABrick_Weapon_BP_C::RBInteractionZoneSecondary' has a wrong offset!");
static_assert(offsetof(ABrick_Weapon_BP_C, ItemWorldMeshes) == 0x000CB0, "Member 'ABrick_Weapon_BP_C::ItemWorldMeshes' has a wrong offset!");
static_assert(offsetof(ABrick_Weapon_BP_C, ItemWorldMaterials) == 0x000CC0, "Member 'ABrick_Weapon_BP_C::ItemWorldMaterials' has a wrong offset!");

}

