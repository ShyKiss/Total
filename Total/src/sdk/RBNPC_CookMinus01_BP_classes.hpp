#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBNPC_CookMinus01_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RBNPC_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RBNPC_Cook-01_BP.RBNPC_Cook-01_BP_C
// 0x0040 (0x58D0 - 0x5890)
class ARBNPC_CookMinus01_BP_C final : public ARBNPC_BP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_RBNPC_CookMinus01_BP_C;             // 0x5890(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URBPropOptimizerComponent*              RBPropOptimizer;                                   // 0x5898(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Kitchen_Chef_Head;                                 // 0x58A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Kitchen_Chef_Body;                                 // 0x58A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FString                                 Season;                                            // 0x58B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UPoseAsset*                             PoseAsset;                                         // 0x58C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetSpecialEventHat();
	void GetFaceAnimBP(class UEnemyFace_AnimBlueprint_C** EnemyFaceAnimBP);
	class UPoseAsset* GetFacePoseAsset();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetNormalMeshVisibility(bool bVisible);
	void ExecuteUbergraph_RBNPC_CookMinus01_BP(int32 EntryPoint);

	class USkeletalMeshComponent* GetFaceFXSkeletalMeshComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RBNPC_Cook-01_BP_C">();
	}
	static class ARBNPC_CookMinus01_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARBNPC_CookMinus01_BP_C>();
	}
};
static_assert(alignof(ARBNPC_CookMinus01_BP_C) == 0x000010, "Wrong alignment on ARBNPC_CookMinus01_BP_C");
static_assert(sizeof(ARBNPC_CookMinus01_BP_C) == 0x0058D0, "Wrong size on ARBNPC_CookMinus01_BP_C");
static_assert(offsetof(ARBNPC_CookMinus01_BP_C, UberGraphFrame_RBNPC_CookMinus01_BP_C) == 0x005890, "Member 'ARBNPC_CookMinus01_BP_C::UberGraphFrame_RBNPC_CookMinus01_BP_C' has a wrong offset!");
static_assert(offsetof(ARBNPC_CookMinus01_BP_C, RBPropOptimizer) == 0x005898, "Member 'ARBNPC_CookMinus01_BP_C::RBPropOptimizer' has a wrong offset!");
static_assert(offsetof(ARBNPC_CookMinus01_BP_C, Kitchen_Chef_Head) == 0x0058A0, "Member 'ARBNPC_CookMinus01_BP_C::Kitchen_Chef_Head' has a wrong offset!");
static_assert(offsetof(ARBNPC_CookMinus01_BP_C, Kitchen_Chef_Body) == 0x0058A8, "Member 'ARBNPC_CookMinus01_BP_C::Kitchen_Chef_Body' has a wrong offset!");
static_assert(offsetof(ARBNPC_CookMinus01_BP_C, Season) == 0x0058B0, "Member 'ARBNPC_CookMinus01_BP_C::Season' has a wrong offset!");
static_assert(offsetof(ARBNPC_CookMinus01_BP_C, PoseAsset) == 0x0058C0, "Member 'ARBNPC_CookMinus01_BP_C::PoseAsset' has a wrong offset!");

}
