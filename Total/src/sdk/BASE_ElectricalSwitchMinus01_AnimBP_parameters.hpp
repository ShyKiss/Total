#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BASE_ElectricalSwitchMinus01_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BASE_ElectricalSwitch-01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct BASE_ElectricalSwitchMinus01_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(BASE_ElectricalSwitchMinus01_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on BASE_ElectricalSwitchMinus01_AnimBP_C_AnimGraph");
static_assert(sizeof(BASE_ElectricalSwitchMinus01_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on BASE_ElectricalSwitchMinus01_AnimBP_C_AnimGraph");
static_assert(offsetof(BASE_ElectricalSwitchMinus01_AnimBP_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'BASE_ElectricalSwitchMinus01_AnimBP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function BASE_ElectricalSwitch-01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct BASE_ElectricalSwitchMinus01_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BASE_ElectricalSwitchMinus01_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on BASE_ElectricalSwitchMinus01_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(BASE_ElectricalSwitchMinus01_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on BASE_ElectricalSwitchMinus01_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(BASE_ElectricalSwitchMinus01_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'BASE_ElectricalSwitchMinus01_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function BASE_ElectricalSwitch-01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C.ExecuteUbergraph_BASE_ElectricalSwitch-01_AnimBP
// 0x0038 (0x0038 - 0x0000)
struct BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABASE_ElectricalSwitchMinus01_BP_C*     K2Node_DynamicCast_AsBASE_Electrical_Switch_01_BP; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_30EF[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ARBPawn*>                        CallFunc_BP_GetInteractorPawns_ReturnValue;        // 0x0020(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP) == 0x000008, "Wrong alignment on BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP");
static_assert(sizeof(BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP) == 0x000038, "Wrong size on BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP");
static_assert(offsetof(BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP, EntryPoint) == 0x000000, "Member 'BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP, K2Node_DynamicCast_AsBASE_Electrical_Switch_01_BP) == 0x000010, "Member 'BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP::K2Node_DynamicCast_AsBASE_Electrical_Switch_01_BP' has a wrong offset!");
static_assert(offsetof(BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP, CallFunc_BP_GetInteractorPawns_ReturnValue) == 0x000020, "Member 'BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP::CallFunc_BP_GetInteractorPawns_ReturnValue' has a wrong offset!");
static_assert(offsetof(BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000034, "Member 'BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}
