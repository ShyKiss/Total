#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MetalBarMinusDoorLock_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.SnapBarToPosition
// 0x0100 (0x0100 - 0x0000)
struct MetalBarMinusDoorLock_BP_C_SnapBarToPosition final
{
public:
	struct FTransform                             BarAnimatedTransform;                              // 0x0000(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FTransform                             InverseAnchorTransform;                            // 0x0030(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_IsLocked_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3394[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0074(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(MetalBarMinusDoorLock_BP_C_SnapBarToPosition) == 0x000010, "Wrong alignment on MetalBarMinusDoorLock_BP_C_SnapBarToPosition");
static_assert(sizeof(MetalBarMinusDoorLock_BP_C_SnapBarToPosition) == 0x000100, "Wrong size on MetalBarMinusDoorLock_BP_C_SnapBarToPosition");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_SnapBarToPosition, BarAnimatedTransform) == 0x000000, "Member 'MetalBarMinusDoorLock_BP_C_SnapBarToPosition::BarAnimatedTransform' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_SnapBarToPosition, InverseAnchorTransform) == 0x000030, "Member 'MetalBarMinusDoorLock_BP_C_SnapBarToPosition::InverseAnchorTransform' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_SnapBarToPosition, CallFunc_BP_IsLocked_ReturnValue) == 0x000060, "Member 'MetalBarMinusDoorLock_BP_C_SnapBarToPosition::CallFunc_BP_IsLocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_SnapBarToPosition, CallFunc_SelectFloat_ReturnValue) == 0x000064, "Member 'MetalBarMinusDoorLock_BP_C_SnapBarToPosition::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_SnapBarToPosition, CallFunc_MakeRotator_ReturnValue) == 0x000068, "Member 'MetalBarMinusDoorLock_BP_C_SnapBarToPosition::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_SnapBarToPosition, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000074, "Member 'MetalBarMinusDoorLock_BP_C_SnapBarToPosition::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");

// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.GetCurrentAnimSequence
// 0x0030 (0x0030 - 0x0000)
struct MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence final
{
public:
	class UAnimSequence*                          AnimSequence;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3395[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          Temp_object_Variable;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          Temp_object_Variable_1;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_IsLocked_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3396[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimSequence*                          K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence) == 0x000008, "Wrong alignment on MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence");
static_assert(sizeof(MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence) == 0x000030, "Wrong size on MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence, AnimSequence) == 0x000000, "Member 'MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence::AnimSequence' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence, Temp_bool_Variable) == 0x000008, "Member 'MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence, Temp_object_Variable) == 0x000010, "Member 'MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence, Temp_object_Variable_1) == 0x000018, "Member 'MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence, CallFunc_BP_IsLocked_ReturnValue) == 0x000020, "Member 'MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence::CallFunc_BP_IsLocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence, K2Node_Select_Default) == 0x000028, "Member 'MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence::K2Node_Select_Default' has a wrong offset!");

// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.GetLockedTransform
// 0x0060 (0x0060 - 0x0000)
struct MetalBarMinusDoorLock_BP_C_GetLockedTransform final
{
public:
	struct FTransform                             UnlockedTransform;                                 // 0x0000(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(MetalBarMinusDoorLock_BP_C_GetLockedTransform) == 0x000010, "Wrong alignment on MetalBarMinusDoorLock_BP_C_GetLockedTransform");
static_assert(sizeof(MetalBarMinusDoorLock_BP_C_GetLockedTransform) == 0x000060, "Wrong size on MetalBarMinusDoorLock_BP_C_GetLockedTransform");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_GetLockedTransform, UnlockedTransform) == 0x000000, "Member 'MetalBarMinusDoorLock_BP_C_GetLockedTransform::UnlockedTransform' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_GetLockedTransform, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'MetalBarMinusDoorLock_BP_C_GetLockedTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.GetUnlockedTransform
// 0x0060 (0x0060 - 0x0000)
struct MetalBarMinusDoorLock_BP_C_GetUnlockedTransform final
{
public:
	struct FTransform                             UnlockedTransform;                                 // 0x0000(0x0030)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0030(0x0030)(IsPlainOldData, NoDestructor)
};
static_assert(alignof(MetalBarMinusDoorLock_BP_C_GetUnlockedTransform) == 0x000010, "Wrong alignment on MetalBarMinusDoorLock_BP_C_GetUnlockedTransform");
static_assert(sizeof(MetalBarMinusDoorLock_BP_C_GetUnlockedTransform) == 0x000060, "Wrong size on MetalBarMinusDoorLock_BP_C_GetUnlockedTransform");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_GetUnlockedTransform, UnlockedTransform) == 0x000000, "Member 'MetalBarMinusDoorLock_BP_C_GetUnlockedTransform::UnlockedTransform' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_GetUnlockedTransform, CallFunc_MakeTransform_ReturnValue) == 0x000030, "Member 'MetalBarMinusDoorLock_BP_C_GetUnlockedTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_OverrideEditorCompTranform
// 0x0130 (0x0130 - 0x0000)
struct MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform final
{
public:
	class FName                                   CompName;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bLocked;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3397[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform;                                         // 0x0010(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FTransform                             ReturnValue;                                       // 0x0040(0x0030)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_GetLockedTransform_UnlockedTransform;     // 0x0070(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location_1;                // 0x00C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation_1;                // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale_1;                   // 0x00DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3398[0x8];                                     // 0x00E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00F0(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform) == 0x000010, "Wrong alignment on MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform");
static_assert(sizeof(MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform) == 0x000130, "Wrong size on MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform, CompName) == 0x000000, "Member 'MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform::CompName' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform, bLocked) == 0x000008, "Member 'MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform::bLocked' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform, Transform) == 0x000010, "Member 'MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform::Transform' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform, ReturnValue) == 0x000040, "Member 'MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform::ReturnValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform, CallFunc_GetLockedTransform_UnlockedTransform) == 0x000070, "Member 'MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform::CallFunc_GetLockedTransform_UnlockedTransform' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform, CallFunc_BreakTransform_Location) == 0x0000A0, "Member 'MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform, CallFunc_BreakTransform_Rotation) == 0x0000AC, "Member 'MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform, CallFunc_BreakTransform_Scale) == 0x0000B8, "Member 'MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform, CallFunc_BreakTransform_Location_1) == 0x0000C4, "Member 'MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform::CallFunc_BreakTransform_Location_1' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform, CallFunc_BreakTransform_Rotation_1) == 0x0000D0, "Member 'MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform::CallFunc_BreakTransform_Rotation_1' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform, CallFunc_BreakTransform_Scale_1) == 0x0000DC, "Member 'MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform::CallFunc_BreakTransform_Scale_1' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform, CallFunc_MakeTransform_ReturnValue) == 0x0000F0, "Member 'MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000120, "Member 'MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.OnSetup
// 0x0001 (0x0001 - 0x0000)
struct MetalBarMinusDoorLock_BP_C_OnSetup final
{
public:
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MetalBarMinusDoorLock_BP_C_OnSetup) == 0x000001, "Wrong alignment on MetalBarMinusDoorLock_BP_C_OnSetup");
static_assert(sizeof(MetalBarMinusDoorLock_BP_C_OnSetup) == 0x000001, "Wrong size on MetalBarMinusDoorLock_BP_C_OnSetup");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_OnSetup, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000000, "Member 'MetalBarMinusDoorLock_BP_C_OnSetup::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_ApplyAnimatedTransform
// 0x0010 (0x0010 - 0x0000)
struct MetalBarMinusDoorLock_BP_C_BP_ApplyAnimatedTransform final
{
public:
	float                                         CurveValue;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3399[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class ARBPawn*                          InteractorPawn;                                    // 0x0008(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MetalBarMinusDoorLock_BP_C_BP_ApplyAnimatedTransform) == 0x000008, "Wrong alignment on MetalBarMinusDoorLock_BP_C_BP_ApplyAnimatedTransform");
static_assert(sizeof(MetalBarMinusDoorLock_BP_C_BP_ApplyAnimatedTransform) == 0x000010, "Wrong size on MetalBarMinusDoorLock_BP_C_BP_ApplyAnimatedTransform");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_BP_ApplyAnimatedTransform, CurveValue) == 0x000000, "Member 'MetalBarMinusDoorLock_BP_C_BP_ApplyAnimatedTransform::CurveValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_BP_ApplyAnimatedTransform, InteractorPawn) == 0x000008, "Member 'MetalBarMinusDoorLock_BP_C_BP_ApplyAnimatedTransform::InteractorPawn' has a wrong offset!");

// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.ExecuteUbergraph_MetalBar-DoorLock_BP
// 0x00E8 (0x00E8 - 0x0000)
struct MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRecentEvent_ReturnValue;                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_339A[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_curveValue;                           // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class ARBPawn*                          K2Node_Event_interactorPawn;                       // 0x0010(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBPlayer*                              K2Node_DynamicCast_AsRB_Player;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_339B[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue_1;        // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_339C[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0054(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_2;       // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_339D[0x3];                                     // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetGameTime_ReturnValue;                  // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP) == 0x000008, "Wrong alignment on MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP");
static_assert(sizeof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP) == 0x0000E8, "Wrong size on MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, EntryPoint) == 0x000000, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, CallFunc_HasAuthority_ReturnValue) == 0x000004, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, CallFunc_IsRecentEvent_ReturnValue) == 0x000005, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::CallFunc_IsRecentEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, CallFunc_IsValid_ReturnValue) == 0x000006, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, CallFunc_IsValid_ReturnValue_1) == 0x000007, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000008, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, CallFunc_K2_AttachToComponent_ReturnValue_1) == 0x000009, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::CallFunc_K2_AttachToComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, K2Node_Event_curveValue) == 0x00000C, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::K2Node_Event_curveValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, K2Node_Event_interactorPawn) == 0x000010, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::K2Node_Event_interactorPawn' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, K2Node_DynamicCast_AsRB_Player) == 0x000018, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::K2Node_DynamicCast_AsRB_Player' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000024, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, CallFunc_MakeRotator_ReturnValue) == 0x000028, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, CallFunc_GetActorRightVector_ReturnValue) == 0x000034, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, CallFunc_GetActorRightVector_ReturnValue_1) == 0x000040, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::CallFunc_GetActorRightVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, CallFunc_Dot_VectorVector_ReturnValue) == 0x00004C, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000050, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000054, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, CallFunc_K2_AttachToComponent_ReturnValue_2) == 0x0000DC, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::CallFunc_K2_AttachToComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP, CallFunc_GetGameTime_ReturnValue) == 0x0000E0, "Member 'MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP::CallFunc_GetGameTime_ReturnValue' has a wrong offset!");

}
