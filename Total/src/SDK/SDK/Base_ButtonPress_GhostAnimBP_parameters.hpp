#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Base_ButtonPress_GhostAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Base_ButtonPress_GhostAnimBP.Base_ButtonPress_GhostAnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Base_ButtonPress_GhostAnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Base_ButtonPress_GhostAnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Base_ButtonPress_GhostAnimBP_C_AnimGraph");
static_assert(sizeof(Base_ButtonPress_GhostAnimBP_C_AnimGraph) == 0x000010, "Wrong size on Base_ButtonPress_GhostAnimBP_C_AnimGraph");
static_assert(offsetof(Base_ButtonPress_GhostAnimBP_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Base_ButtonPress_GhostAnimBP_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function Base_ButtonPress_GhostAnimBP.Base_ButtonPress_GhostAnimBP_C.ExecuteUbergraph_Base_ButtonPress_GhostAnimBP
// 0x0040 (0x0040 - 0x0000)
struct Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GhostAnimTransition_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetCurrentValue_ScheduledUObject_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBInteractionZoneComponent*            K2Node_DynamicCast_AsRB_Interaction_Zone_Component; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABase_Button_BP_C*                      K2Node_DynamicCast_AsBase_Button_BP;               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          CallFunc_GetStartAnimation_Anim;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP) == 0x000008, "Wrong alignment on Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP");
static_assert(sizeof(Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP) == 0x000040, "Wrong size on Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP");
static_assert(offsetof(Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP, EntryPoint) == 0x000000, "Member 'Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP, CallFunc_GhostAnimTransition_ReturnValue) == 0x000004, "Member 'Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP::CallFunc_GhostAnimTransition_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP, CallFunc_GetCurrentValue_ScheduledUObject_ReturnValue) == 0x000008, "Member 'Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP::CallFunc_GetCurrentValue_ScheduledUObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP, K2Node_DynamicCast_AsRB_Interaction_Zone_Component) == 0x000010, "Member 'Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP::K2Node_DynamicCast_AsRB_Interaction_Zone_Component' has a wrong offset!");
static_assert(offsetof(Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP, CallFunc_GetOwner_ReturnValue) == 0x000020, "Member 'Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP, K2Node_DynamicCast_AsBase_Button_BP) == 0x000028, "Member 'Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP::K2Node_DynamicCast_AsBase_Button_BP' has a wrong offset!");
static_assert(offsetof(Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP, CallFunc_GetStartAnimation_Anim) == 0x000038, "Member 'Base_ButtonPress_GhostAnimBP_C_ExecuteUbergraph_Base_ButtonPress_GhostAnimBP::CallFunc_GetStartAnimation_Anim' has a wrong offset!");

}

