#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HeroinPackage_GhostAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "OPP_structs.hpp"


namespace SDK::Params
{

// Function HeroinPackage_GhostAnimBP.HeroinPackage_GhostAnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct HeroinPackage_GhostAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(HeroinPackage_GhostAnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on HeroinPackage_GhostAnimBP_C_AnimGraph");
static_assert(sizeof(HeroinPackage_GhostAnimBP_C_AnimGraph) == 0x000010, "Wrong size on HeroinPackage_GhostAnimBP_C_AnimGraph");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'HeroinPackage_GhostAnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function HeroinPackage_GhostAnimBP.HeroinPackage_GhostAnimBP_C.ExecuteUbergraph_HeroinPackage_GhostAnimBP
// 0x0060 (0x0060 - 0x0000)
struct HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BP_GetPawnTargetLocation_ReturnValue;     // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsInFirstPerson_ReturnValue;           // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESpecialMove                                  CallFunc_BP_GetSpecialMove_ReturnValue;            // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GhostAnimTransition_ReturnValue;          // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F[0x1];                                       // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetCurrentValue_ScheduledUObject_ReturnValue; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBLargePickup*                         K2Node_DynamicCast_AsRB_Large_Pickup;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP) == 0x000008, "Wrong alignment on HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP");
static_assert(sizeof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP) == 0x000060, "Wrong size on HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, EntryPoint) == 0x000000, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, CallFunc_BP_GetPawnTargetLocation_ReturnValue) == 0x000004, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::CallFunc_BP_GetPawnTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, CallFunc_BreakVector_X) == 0x000010, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, CallFunc_BreakVector_Y) == 0x000014, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, CallFunc_BreakVector_Z) == 0x000018, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, CallFunc_BP_IsInFirstPerson_ReturnValue) == 0x00001C, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::CallFunc_BP_IsInFirstPerson_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, CallFunc_BP_GetSpecialMove_ReturnValue) == 0x00001D, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::CallFunc_BP_GetSpecialMove_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, CallFunc_GhostAnimTransition_ReturnValue) == 0x00001E, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::CallFunc_GhostAnimTransition_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, CallFunc_GetCurrentValue_ScheduledUObject_ReturnValue) == 0x000020, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::CallFunc_GetCurrentValue_ScheduledUObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, K2Node_DynamicCast_AsRB_Large_Pickup) == 0x000028, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::K2Node_DynamicCast_AsRB_Large_Pickup' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000038, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000040, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, CallFunc_BreakVector_X_1) == 0x00004C, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, CallFunc_BreakVector_Y_1) == 0x000050, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, CallFunc_BreakVector_Z_1) == 0x000054, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000058, "Member 'HeroinPackage_GhostAnimBP_C_ExecuteUbergraph_HeroinPackage_GhostAnimBP::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");

}

