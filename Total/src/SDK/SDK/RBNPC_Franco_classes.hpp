#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBNPC_Franco

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RBNPC_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RBNPC_Franco.RBNPC_Franco_C
// 0x0030 (0x5AA0 - 0x5A70)
class ARBNPC_Franco_C final : public ARBNPC_BP_C
{
public:
	uint8                                         Pad_5A61[0x7];                                     // 0x5A61(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_RBNPC_Franco_C;                     // 0x5A68(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   ShotgunShellMinus01;                               // 0x5A70(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       HeadDamage;                                        // 0x5A78(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Franco_Pacifier;                                   // 0x5A80(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Head_Mesh;                                         // 0x5A88(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Body_Mesh;                                         // 0x5A90(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RBNPC_Franco(int32 EntryPoint);
	void Event_OnBulletImpact(const struct FHitResult& Impact);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	class UPoseAsset* GetFacePoseAsset();
	void GetFaceAnimBP(class UEnemyFace_AnimBlueprint_C** EnemyFaceAnimBP);
	void ShotgunShellVisibility(bool IsVisible);

	class USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RBNPC_Franco_C">();
	}
	static class ARBNPC_Franco_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARBNPC_Franco_C>();
	}
};
static_assert(alignof(ARBNPC_Franco_C) == 0x000010, "Wrong alignment on ARBNPC_Franco_C");
static_assert(sizeof(ARBNPC_Franco_C) == 0x005AA0, "Wrong size on ARBNPC_Franco_C");
static_assert(offsetof(ARBNPC_Franco_C, UberGraphFrame_RBNPC_Franco_C) == 0x005A68, "Member 'ARBNPC_Franco_C::UberGraphFrame_RBNPC_Franco_C' has a wrong offset!");
static_assert(offsetof(ARBNPC_Franco_C, ShotgunShellMinus01) == 0x005A70, "Member 'ARBNPC_Franco_C::ShotgunShellMinus01' has a wrong offset!");
static_assert(offsetof(ARBNPC_Franco_C, HeadDamage) == 0x005A78, "Member 'ARBNPC_Franco_C::HeadDamage' has a wrong offset!");
static_assert(offsetof(ARBNPC_Franco_C, Franco_Pacifier) == 0x005A80, "Member 'ARBNPC_Franco_C::Franco_Pacifier' has a wrong offset!");
static_assert(offsetof(ARBNPC_Franco_C, Head_Mesh) == 0x005A88, "Member 'ARBNPC_Franco_C::Head_Mesh' has a wrong offset!");
static_assert(offsetof(ARBNPC_Franco_C, Body_Mesh) == 0x005A90, "Member 'ARBNPC_Franco_C::Body_Mesh' has a wrong offset!");

}

