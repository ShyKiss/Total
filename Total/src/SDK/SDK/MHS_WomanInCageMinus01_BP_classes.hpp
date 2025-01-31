#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MHS_WomanInCageMinus01_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RBAmbientCharacterBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MHS_WomanInCage-01_BP.MHS_WomanInCage-01_BP_C
// 0x0060 (0x02A8 - 0x0248)
class AMHS_WomanInCageMinus01_BP_C final : public ARBAmbientCharacterBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_MHS_WomanInCageMinus01_BP_C;        // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URBPropOptimizerComponent*              RBPropOptimizer;                                   // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSoundComponent*                      VoiceComponent;                                    // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Arms_L;                                            // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Head;                                              // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Legs_R;                                            // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 UpperBody;                                         // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Hair;                                              // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Legs_L;                                            // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Arms_R;                                            // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 LowerBody;                                         // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         VoiceSelector;                                     // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetVoice();
	void UserConstructionScript();
	void SetMasterPose();
	void ExecuteUbergraph_MHS_WomanInCageMinus01_BP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MHS_WomanInCage-01_BP_C">();
	}
	static class AMHS_WomanInCageMinus01_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMHS_WomanInCageMinus01_BP_C>();
	}
};
static_assert(alignof(AMHS_WomanInCageMinus01_BP_C) == 0x000008, "Wrong alignment on AMHS_WomanInCageMinus01_BP_C");
static_assert(sizeof(AMHS_WomanInCageMinus01_BP_C) == 0x0002A8, "Wrong size on AMHS_WomanInCageMinus01_BP_C");
static_assert(offsetof(AMHS_WomanInCageMinus01_BP_C, UberGraphFrame_MHS_WomanInCageMinus01_BP_C) == 0x000248, "Member 'AMHS_WomanInCageMinus01_BP_C::UberGraphFrame_MHS_WomanInCageMinus01_BP_C' has a wrong offset!");
static_assert(offsetof(AMHS_WomanInCageMinus01_BP_C, RBPropOptimizer) == 0x000250, "Member 'AMHS_WomanInCageMinus01_BP_C::RBPropOptimizer' has a wrong offset!");
static_assert(offsetof(AMHS_WomanInCageMinus01_BP_C, VoiceComponent) == 0x000258, "Member 'AMHS_WomanInCageMinus01_BP_C::VoiceComponent' has a wrong offset!");
static_assert(offsetof(AMHS_WomanInCageMinus01_BP_C, Arms_L) == 0x000260, "Member 'AMHS_WomanInCageMinus01_BP_C::Arms_L' has a wrong offset!");
static_assert(offsetof(AMHS_WomanInCageMinus01_BP_C, Head) == 0x000268, "Member 'AMHS_WomanInCageMinus01_BP_C::Head' has a wrong offset!");
static_assert(offsetof(AMHS_WomanInCageMinus01_BP_C, Legs_R) == 0x000270, "Member 'AMHS_WomanInCageMinus01_BP_C::Legs_R' has a wrong offset!");
static_assert(offsetof(AMHS_WomanInCageMinus01_BP_C, UpperBody) == 0x000278, "Member 'AMHS_WomanInCageMinus01_BP_C::UpperBody' has a wrong offset!");
static_assert(offsetof(AMHS_WomanInCageMinus01_BP_C, Hair) == 0x000280, "Member 'AMHS_WomanInCageMinus01_BP_C::Hair' has a wrong offset!");
static_assert(offsetof(AMHS_WomanInCageMinus01_BP_C, Legs_L) == 0x000288, "Member 'AMHS_WomanInCageMinus01_BP_C::Legs_L' has a wrong offset!");
static_assert(offsetof(AMHS_WomanInCageMinus01_BP_C, Arms_R) == 0x000290, "Member 'AMHS_WomanInCageMinus01_BP_C::Arms_R' has a wrong offset!");
static_assert(offsetof(AMHS_WomanInCageMinus01_BP_C, LowerBody) == 0x000298, "Member 'AMHS_WomanInCageMinus01_BP_C::LowerBody' has a wrong offset!");
static_assert(offsetof(AMHS_WomanInCageMinus01_BP_C, VoiceSelector) == 0x0002A0, "Member 'AMHS_WomanInCageMinus01_BP_C::VoiceSelector' has a wrong offset!");

}

