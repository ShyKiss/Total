#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hidespot_Desk_Base_BP

#include "Basic.hpp"

#include "OPP_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Hidespot_Desk_Base_BP.Hidespot_Desk_Base_BP_C.UserConstructionScript
// 0x0140 (0x0140 - 0x0000)
struct Hidespot_Desk_Base_BP_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x000C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult_1;     // 0x00A0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x012B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x012C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12D[0x3];                                      // 0x012D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            K2Node_Select_Default;                             // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Hidespot_Desk_Base_BP_C_UserConstructionScript) == 0x000008, "Wrong alignment on Hidespot_Desk_Base_BP_C_UserConstructionScript");
static_assert(sizeof(Hidespot_Desk_Base_BP_C_UserConstructionScript) == 0x000140, "Wrong size on Hidespot_Desk_Base_BP_C_UserConstructionScript");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000000, "Member 'Hidespot_Desk_Base_BP_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_UserConstructionScript, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x00000C, "Member 'Hidespot_Desk_Base_BP_C_UserConstructionScript::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000094, "Member 'Hidespot_Desk_Base_BP_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_UserConstructionScript, CallFunc_K2_SetWorldLocation_SweepHitResult_1) == 0x0000A0, "Member 'Hidespot_Desk_Base_BP_C_UserConstructionScript::CallFunc_K2_SetWorldLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000128, "Member 'Hidespot_Desk_Base_BP_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_UserConstructionScript, Temp_bool_Variable) == 0x000129, "Member 'Hidespot_Desk_Base_BP_C_UserConstructionScript::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x00012A, "Member 'Hidespot_Desk_Base_BP_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_UserConstructionScript, CallFunc_IsValid_ReturnValue_1) == 0x00012B, "Member 'Hidespot_Desk_Base_BP_C_UserConstructionScript::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_UserConstructionScript, CallFunc_BooleanAND_ReturnValue) == 0x00012C, "Member 'Hidespot_Desk_Base_BP_C_UserConstructionScript::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_UserConstructionScript, K2Node_Select_Default) == 0x000130, "Member 'Hidespot_Desk_Base_BP_C_UserConstructionScript::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_UserConstructionScript, CallFunc_SetStaticMesh_ReturnValue) == 0x000138, "Member 'Hidespot_Desk_Base_BP_C_UserConstructionScript::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

// Function Hidespot_Desk_Base_BP.Hidespot_Desk_Base_BP_C.BP_MapCheck
// 0x0038 (0x0038 - 0x0000)
struct Hidespot_Desk_Base_BP_C_BP_MapCheck final
{
public:
	EMapCheckType                                 CheckType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OutErrorMsg;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_MakeLiteralString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Hidespot_Desk_Base_BP_C_BP_MapCheck) == 0x000008, "Wrong alignment on Hidespot_Desk_Base_BP_C_BP_MapCheck");
static_assert(sizeof(Hidespot_Desk_Base_BP_C_BP_MapCheck) == 0x000038, "Wrong size on Hidespot_Desk_Base_BP_C_BP_MapCheck");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_BP_MapCheck, CheckType) == 0x000000, "Member 'Hidespot_Desk_Base_BP_C_BP_MapCheck::CheckType' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_BP_MapCheck, OutErrorMsg) == 0x000008, "Member 'Hidespot_Desk_Base_BP_C_BP_MapCheck::OutErrorMsg' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_BP_MapCheck, ReturnValue) == 0x000018, "Member 'Hidespot_Desk_Base_BP_C_BP_MapCheck::ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_BP_MapCheck, CallFunc_MakeLiteralString_ReturnValue) == 0x000020, "Member 'Hidespot_Desk_Base_BP_C_BP_MapCheck::CallFunc_MakeLiteralString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_BP_MapCheck, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'Hidespot_Desk_Base_BP_C_BP_MapCheck::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_BP_MapCheck, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'Hidespot_Desk_Base_BP_C_BP_MapCheck::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_BP_MapCheck, CallFunc_BooleanAND_ReturnValue) == 0x000032, "Member 'Hidespot_Desk_Base_BP_C_BP_MapCheck::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function Hidespot_Desk_Base_BP.Hidespot_Desk_Base_BP_C.RandomizeStuff
// 0x0068 (0x0068 - 0x0000)
struct Hidespot_Desk_Base_BP_C_RandomizeStuff final
{
public:
	TArray<class USceneComponent*>                DiscardedSceneCompoent;                            // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Index_0;                                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_GetChildComponent_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumChildrenComponents_ReturnValue;     // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Hidespot_Desk_Base_BP_C_RandomizeStuff) == 0x000008, "Wrong alignment on Hidespot_Desk_Base_BP_C_RandomizeStuff");
static_assert(sizeof(Hidespot_Desk_Base_BP_C_RandomizeStuff) == 0x000068, "Wrong size on Hidespot_Desk_Base_BP_C_RandomizeStuff");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, DiscardedSceneCompoent) == 0x000000, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::DiscardedSceneCompoent' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, Index_0) == 0x000010, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::Index_0' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, Temp_int_Array_Index_Variable) == 0x000014, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, Temp_int_Variable) == 0x000018, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, CallFunc_Array_Get_Item) == 0x000020, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, CallFunc_Add_IntInt_ReturnValue_1) == 0x000038, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, CallFunc_GetChildComponent_ReturnValue) == 0x000040, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::CallFunc_GetChildComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, CallFunc_Add_IntInt_ReturnValue_2) == 0x000048, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, CallFunc_Array_Add_ReturnValue) == 0x00004C, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, CallFunc_Not_PreBool_ReturnValue) == 0x000050, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, CallFunc_GetNumChildrenComponents_ReturnValue) == 0x000054, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::CallFunc_GetNumChildrenComponents_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, CallFunc_Less_IntInt_ReturnValue_1) == 0x000058, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, CallFunc_Percent_IntInt_ReturnValue) == 0x00005C, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000060, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_RandomizeStuff, CallFunc_BooleanAND_ReturnValue) == 0x000061, "Member 'Hidespot_Desk_Base_BP_C_RandomizeStuff::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function Hidespot_Desk_Base_BP.Hidespot_Desk_Base_BP_C.BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct Hidespot_Desk_Base_BP_C_BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature final
{
public:
	class URBHidespotComponent*                   Hidespot;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDisabled;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Hidespot_Desk_Base_BP_C_BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on Hidespot_Desk_Base_BP_C_BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature");
static_assert(sizeof(Hidespot_Desk_Base_BP_C_BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature) == 0x000010, "Wrong size on Hidespot_Desk_Base_BP_C_BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature, Hidespot) == 0x000000, "Member 'Hidespot_Desk_Base_BP_C_BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature::Hidespot' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature, bDisabled) == 0x000008, "Member 'Hidespot_Desk_Base_BP_C_BndEvt__RBHidespot_K2Node_ComponentBoundEvent_1_OnHidespotDisabledChangedEvent__DelegateSignature::bDisabled' has a wrong offset!");

// Function Hidespot_Desk_Base_BP.Hidespot_Desk_Base_BP_C.ExecuteUbergraph_Hidespot_Desk_Base_BP
// 0x0018 (0x0018 - 0x0000)
struct Hidespot_Desk_Base_BP_C_ExecuteUbergraph_Hidespot_Desk_Base_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URBHidespotComponent*                   K2Node_ComponentBoundEvent_hidespot;               // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bDisabled;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Hidespot_Desk_Base_BP_C_ExecuteUbergraph_Hidespot_Desk_Base_BP) == 0x000008, "Wrong alignment on Hidespot_Desk_Base_BP_C_ExecuteUbergraph_Hidespot_Desk_Base_BP");
static_assert(sizeof(Hidespot_Desk_Base_BP_C_ExecuteUbergraph_Hidespot_Desk_Base_BP) == 0x000018, "Wrong size on Hidespot_Desk_Base_BP_C_ExecuteUbergraph_Hidespot_Desk_Base_BP");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_ExecuteUbergraph_Hidespot_Desk_Base_BP, EntryPoint) == 0x000000, "Member 'Hidespot_Desk_Base_BP_C_ExecuteUbergraph_Hidespot_Desk_Base_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_ExecuteUbergraph_Hidespot_Desk_Base_BP, K2Node_ComponentBoundEvent_hidespot) == 0x000008, "Member 'Hidespot_Desk_Base_BP_C_ExecuteUbergraph_Hidespot_Desk_Base_BP::K2Node_ComponentBoundEvent_hidespot' has a wrong offset!");
static_assert(offsetof(Hidespot_Desk_Base_BP_C_ExecuteUbergraph_Hidespot_Desk_Base_BP, K2Node_ComponentBoundEvent_bDisabled) == 0x000010, "Member 'Hidespot_Desk_Base_BP_C_ExecuteUbergraph_Hidespot_Desk_Base_BP::K2Node_ComponentBoundEvent_bDisabled' has a wrong offset!");

}

