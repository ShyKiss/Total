#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NightVision_ScreenShot

#include "Basic.hpp"


namespace SDK::Params
{

// Function NightVision_ScreenShot.NightVision_ScreenShot_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct NightVision_ScreenShot_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NightVision_ScreenShot_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on NightVision_ScreenShot_C_BlueprintUpdateAnimation");
static_assert(sizeof(NightVision_ScreenShot_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on NightVision_ScreenShot_C_BlueprintUpdateAnimation");
static_assert(offsetof(NightVision_ScreenShot_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'NightVision_ScreenShot_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function NightVision_ScreenShot.NightVision_ScreenShot_C.ExecuteUbergraph_NightVision_ScreenShot
// 0x0020 (0x0020 - 0x0000)
struct NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScreenshotPlayer_C*                    K2Node_DynamicCast_AsScreenshot_Player;            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot) == 0x000008, "Wrong alignment on NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot");
static_assert(sizeof(NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot) == 0x000020, "Wrong size on NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot");
static_assert(offsetof(NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot, EntryPoint) == 0x000000, "Member 'NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot::EntryPoint' has a wrong offset!");
static_assert(offsetof(NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot, K2Node_DynamicCast_AsScreenshot_Player) == 0x000010, "Member 'NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot::K2Node_DynamicCast_AsScreenshot_Player' has a wrong offset!");
static_assert(offsetof(NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'NightVision_ScreenShot_C_ExecuteUbergraph_NightVision_ScreenShot::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
