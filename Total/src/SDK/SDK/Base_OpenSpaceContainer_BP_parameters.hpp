#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Base_OpenSpaceContainer_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.FixUp
// 0x00A8 (0x00A8 - 0x0000)
struct Base_OpenSpaceContainer_BP_C_FixUp final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_GetDefaultObject_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABase_OpenSpaceContainer_BP_C*          K2Node_DynamicCast_AsBase_Open_Space_Container_BP; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x001C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Base_OpenSpaceContainer_BP_C_FixUp) == 0x000008, "Wrong alignment on Base_OpenSpaceContainer_BP_C_FixUp");
static_assert(sizeof(Base_OpenSpaceContainer_BP_C_FixUp) == 0x0000A8, "Wrong size on Base_OpenSpaceContainer_BP_C_FixUp");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_FixUp, ReturnValue) == 0x000000, "Member 'Base_OpenSpaceContainer_BP_C_FixUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_FixUp, CallFunc_GetDefaultObject_ReturnValue) == 0x000008, "Member 'Base_OpenSpaceContainer_BP_C_FixUp::CallFunc_GetDefaultObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_FixUp, K2Node_DynamicCast_AsBase_Open_Space_Container_BP) == 0x000010, "Member 'Base_OpenSpaceContainer_BP_C_FixUp::K2Node_DynamicCast_AsBase_Open_Space_Container_BP' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_FixUp, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Base_OpenSpaceContainer_BP_C_FixUp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_FixUp, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x00001C, "Member 'Base_OpenSpaceContainer_BP_C_FixUp::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_FixUp, CallFunc_NotEqual_VectorVector_ReturnValue) == 0x0000A4, "Member 'Base_OpenSpaceContainer_BP_C_FixUp::CallFunc_NotEqual_VectorVector_ReturnValue' has a wrong offset!");

// Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.UserConstructionScript
// 0x01C0 (0x01C0 - 0x0000)
struct Base_OpenSpaceContainer_BP_C_UserConstructionScript final
{
public:
	class FName                                   Temp_name_Variable;                                // 0x0000(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInEditor_ReturnValue;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0060(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TArray<class UActorComponent*>                CallFunc_GetComponentByClass_outComponents;        // 0x00E8(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UActorComponent*                        CallFunc_Array_Get_Item;                           // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URBContainerSpawnLocationComponent*     K2Node_DynamicCast_AsRB_Container_Spawn_Location_Component; // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_112[0xE];                                      // 0x0112(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetRelativeTransform_ReturnValue;         // 0x0120(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0150(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x015C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0168(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0180(0x0030)(IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B4[0x4];                                      // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_AddComponent_ReturnValue;                 // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Base_OpenSpaceContainer_BP_C_UserConstructionScript) == 0x000010, "Wrong alignment on Base_OpenSpaceContainer_BP_C_UserConstructionScript");
static_assert(sizeof(Base_OpenSpaceContainer_BP_C_UserConstructionScript) == 0x0001C0, "Wrong size on Base_OpenSpaceContainer_BP_C_UserConstructionScript");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, Temp_name_Variable) == 0x000000, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, Temp_name_Variable_1) == 0x000008, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, Temp_int_Array_Index_Variable) == 0x000018, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, Temp_int_Variable) == 0x00001C, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_GetNumMaterials_ReturnValue) == 0x000024, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_Array_Add_ReturnValue) == 0x00002C, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000030, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000034, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_BreakVector_X) == 0x000040, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_BreakVector_Y) == 0x000044, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_BreakVector_Z) == 0x000048, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_Add_FloatFloat_ReturnValue) == 0x00004C, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_IsInEditor_ReturnValue) == 0x000050, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_IsInEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_MakeVector_ReturnValue) == 0x000054, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000060, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_GetComponentByClass_outComponents) == 0x0000E8, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_GetComponentByClass_outComponents' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_Array_Length_ReturnValue) == 0x000100, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, K2Node_DynamicCast_AsRB_Container_Spawn_Location_Component) == 0x000108, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::K2Node_DynamicCast_AsRB_Container_Spawn_Location_Component' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, K2Node_DynamicCast_bSuccess) == 0x000110, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000111, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_GetRelativeTransform_ReturnValue) == 0x000120, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_GetRelativeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_BreakTransform_Location) == 0x000150, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_BreakTransform_Rotation) == 0x00015C, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_BreakTransform_Scale) == 0x000168, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_Add_VectorVector_ReturnValue) == 0x000174, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_MakeTransform_ReturnValue) == 0x000180, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_Array_Add_ReturnValue_1) == 0x0001B0, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x0001B8, "Member 'Base_OpenSpaceContainer_BP_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");

// Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.OnPostActorsPasted
// 0x0010 (0x0010 - 0x0000)
struct Base_OpenSpaceContainer_BP_C_OnPostActorsPasted final
{
public:
	TArray<class AActor*>                         PastedActors;                                      // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Base_OpenSpaceContainer_BP_C_OnPostActorsPasted) == 0x000008, "Wrong alignment on Base_OpenSpaceContainer_BP_C_OnPostActorsPasted");
static_assert(sizeof(Base_OpenSpaceContainer_BP_C_OnPostActorsPasted) == 0x000010, "Wrong size on Base_OpenSpaceContainer_BP_C_OnPostActorsPasted");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_OnPostActorsPasted, PastedActors) == 0x000000, "Member 'Base_OpenSpaceContainer_BP_C_OnPostActorsPasted::PastedActors' has a wrong offset!");

// Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.PostDuplicated
// 0x0008 (0x0008 - 0x0000)
struct Base_OpenSpaceContainer_BP_C_PostDuplicated final
{
public:
	class AActor*                                 DuplicationParent;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Base_OpenSpaceContainer_BP_C_PostDuplicated) == 0x000008, "Wrong alignment on Base_OpenSpaceContainer_BP_C_PostDuplicated");
static_assert(sizeof(Base_OpenSpaceContainer_BP_C_PostDuplicated) == 0x000008, "Wrong size on Base_OpenSpaceContainer_BP_C_PostDuplicated");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_PostDuplicated, DuplicationParent) == 0x000000, "Member 'Base_OpenSpaceContainer_BP_C_PostDuplicated::DuplicationParent' has a wrong offset!");

// Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.PostEditChange
// 0x0008 (0x0008 - 0x0000)
struct Base_OpenSpaceContainer_BP_C_PostEditChange final
{
public:
	class FName                                   PropertyName;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Base_OpenSpaceContainer_BP_C_PostEditChange) == 0x000004, "Wrong alignment on Base_OpenSpaceContainer_BP_C_PostEditChange");
static_assert(sizeof(Base_OpenSpaceContainer_BP_C_PostEditChange) == 0x000008, "Wrong size on Base_OpenSpaceContainer_BP_C_PostEditChange");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_PostEditChange, PropertyName) == 0x000000, "Member 'Base_OpenSpaceContainer_BP_C_PostEditChange::PropertyName' has a wrong offset!");

// Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.PostEditMove
// 0x0001 (0x0001 - 0x0000)
struct Base_OpenSpaceContainer_BP_C_PostEditMove final
{
public:
	bool                                          bFinished;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Base_OpenSpaceContainer_BP_C_PostEditMove) == 0x000001, "Wrong alignment on Base_OpenSpaceContainer_BP_C_PostEditMove");
static_assert(sizeof(Base_OpenSpaceContainer_BP_C_PostEditMove) == 0x000001, "Wrong size on Base_OpenSpaceContainer_BP_C_PostEditMove");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_PostEditMove, bFinished) == 0x000000, "Member 'Base_OpenSpaceContainer_BP_C_PostEditMove::bFinished' has a wrong offset!");

// Function Base_OpenSpaceContainer_BP.Base_OpenSpaceContainer_BP_C.ExecuteUbergraph_Base_OpenSpaceContainer_BP
// 0x0030 (0x0030 - 0x0000)
struct Base_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_Event_pastedActors;                         // 0x0008(0x0010)(ConstParm, ReferenceParm)
	class AActor*                                 K2Node_Event_duplicationParent;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_propertyName;                         // 0x0020(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bFinished;                            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Base_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP) == 0x000008, "Wrong alignment on Base_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP");
static_assert(sizeof(Base_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP) == 0x000030, "Wrong size on Base_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP, EntryPoint) == 0x000000, "Member 'Base_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP, K2Node_Event_pastedActors) == 0x000008, "Member 'Base_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP::K2Node_Event_pastedActors' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP, K2Node_Event_duplicationParent) == 0x000018, "Member 'Base_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP::K2Node_Event_duplicationParent' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP, K2Node_Event_propertyName) == 0x000020, "Member 'Base_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP::K2Node_Event_propertyName' has a wrong offset!");
static_assert(offsetof(Base_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP, K2Node_Event_bFinished) == 0x000028, "Member 'Base_OpenSpaceContainer_BP_C_ExecuteUbergraph_Base_OpenSpaceContainer_BP::K2Node_Event_bFinished' has a wrong offset!");

}

