#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScreenshotPlayer_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ScreenshotPlayer_AnimBP.ScreenshotPlayer_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ScreenshotPlayer_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ScreenshotPlayer_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on ScreenshotPlayer_AnimBP_C_AnimGraph");
static_assert(sizeof(ScreenshotPlayer_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on ScreenshotPlayer_AnimBP_C_AnimGraph");
static_assert(offsetof(ScreenshotPlayer_AnimBP_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ScreenshotPlayer_AnimBP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function ScreenshotPlayer_AnimBP.ScreenshotPlayer_AnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ScreenshotPlayer_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ScreenshotPlayer_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ScreenshotPlayer_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(ScreenshotPlayer_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ScreenshotPlayer_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(ScreenshotPlayer_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ScreenshotPlayer_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function ScreenshotPlayer_AnimBP.ScreenshotPlayer_AnimBP_C.ExecuteUbergraph_ScreenshotPlayer_AnimBP
// 0x0020 (0x0020 - 0x0000)
struct ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScreenshotPlayer_C*                    K2Node_DynamicCast_AsScreenshot_Player;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP) == 0x000008, "Wrong alignment on ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP");
static_assert(sizeof(ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP) == 0x000020, "Wrong size on ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP");
static_assert(offsetof(ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP, EntryPoint) == 0x000000, "Member 'ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP, K2Node_DynamicCast_AsScreenshot_Player) == 0x000010, "Member 'ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP::K2Node_DynamicCast_AsScreenshot_Player' has a wrong offset!");
static_assert(offsetof(ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'ScreenshotPlayer_AnimBP_C_ExecuteUbergraph_ScreenshotPlayer_AnimBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
