#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RigList

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "OPP_structs.hpp"


namespace SDK::Params
{

// Function RigList.RigList_C.OnFocusReceived
// 0x01C0 (0x01C0 - 0x0000)
struct RigList_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	bool                                          CallFunc_BP_IsUsingGamepad_ReturnValue;            // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_370D[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0100(0x00B8)()
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RigList_C_OnFocusReceived) == 0x000008, "Wrong alignment on RigList_C_OnFocusReceived");
static_assert(sizeof(RigList_C_OnFocusReceived) == 0x0001C0, "Wrong size on RigList_C_OnFocusReceived");
static_assert(offsetof(RigList_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'RigList_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(RigList_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'RigList_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(RigList_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'RigList_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(RigList_C_OnFocusReceived, CallFunc_BP_IsUsingGamepad_ReturnValue) == 0x0000F8, "Member 'RigList_C_OnFocusReceived::CallFunc_BP_IsUsingGamepad_ReturnValue' has a wrong offset!");
static_assert(offsetof(RigList_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x000100, "Member 'RigList_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(RigList_C_OnFocusReceived, CallFunc_GetChildAt_ReturnValue) == 0x0001B8, "Member 'RigList_C_OnFocusReceived::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");

// Function RigList.RigList_C.OnRigReleasedEvent
// 0x0138 (0x0138 - 0x0000)
struct RigList_C_OnRigReleasedEvent final
{
public:
	class FName                                   ItemId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EActiveSkillType                              ActiveSkillType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_370E[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMenuUpgradeItemInfo                   CallFunc_GetUpgradeItemInfo_ReturnValue;           // 0x0010(0x0128)()
};
static_assert(alignof(RigList_C_OnRigReleasedEvent) == 0x000008, "Wrong alignment on RigList_C_OnRigReleasedEvent");
static_assert(sizeof(RigList_C_OnRigReleasedEvent) == 0x000138, "Wrong size on RigList_C_OnRigReleasedEvent");
static_assert(offsetof(RigList_C_OnRigReleasedEvent, ItemId) == 0x000000, "Member 'RigList_C_OnRigReleasedEvent::ItemId' has a wrong offset!");
static_assert(offsetof(RigList_C_OnRigReleasedEvent, ActiveSkillType) == 0x000008, "Member 'RigList_C_OnRigReleasedEvent::ActiveSkillType' has a wrong offset!");
static_assert(offsetof(RigList_C_OnRigReleasedEvent, CallFunc_GetUpgradeItemInfo_ReturnValue) == 0x000010, "Member 'RigList_C_OnRigReleasedEvent::CallFunc_GetUpgradeItemInfo_ReturnValue' has a wrong offset!");

// Function RigList.RigList_C.OnRigPressedEvent
// 0x0140 (0x0140 - 0x0000)
struct RigList_C_OnRigPressedEvent final
{
public:
	class FName                                   ItemId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EActiveSkillType                              ActiveSkillType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_370F[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMenuUpgradeItemInfo                   CallFunc_GetUpgradeItemInfo_ReturnValue;           // 0x0010(0x0128)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RigList_C_OnRigPressedEvent) == 0x000008, "Wrong alignment on RigList_C_OnRigPressedEvent");
static_assert(sizeof(RigList_C_OnRigPressedEvent) == 0x000140, "Wrong size on RigList_C_OnRigPressedEvent");
static_assert(offsetof(RigList_C_OnRigPressedEvent, ItemId) == 0x000000, "Member 'RigList_C_OnRigPressedEvent::ItemId' has a wrong offset!");
static_assert(offsetof(RigList_C_OnRigPressedEvent, ActiveSkillType) == 0x000008, "Member 'RigList_C_OnRigPressedEvent::ActiveSkillType' has a wrong offset!");
static_assert(offsetof(RigList_C_OnRigPressedEvent, CallFunc_GetUpgradeItemInfo_ReturnValue) == 0x000010, "Member 'RigList_C_OnRigPressedEvent::CallFunc_GetUpgradeItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(RigList_C_OnRigPressedEvent, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000138, "Member 'RigList_C_OnRigPressedEvent::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function RigList.RigList_C.OnRigClickedEvent
// 0x000C (0x000C - 0x0000)
struct RigList_C_OnRigClickedEvent final
{
public:
	class FName                                   ItemId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EActiveSkillType                              ActiveSkillType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RigList_C_OnRigClickedEvent) == 0x000004, "Wrong alignment on RigList_C_OnRigClickedEvent");
static_assert(sizeof(RigList_C_OnRigClickedEvent) == 0x00000C, "Wrong size on RigList_C_OnRigClickedEvent");
static_assert(offsetof(RigList_C_OnRigClickedEvent, ItemId) == 0x000000, "Member 'RigList_C_OnRigClickedEvent::ItemId' has a wrong offset!");
static_assert(offsetof(RigList_C_OnRigClickedEvent, ActiveSkillType) == 0x000008, "Member 'RigList_C_OnRigClickedEvent::ActiveSkillType' has a wrong offset!");

// Function RigList.RigList_C.OnRigUnhoveredEvent
// 0x000C (0x000C - 0x0000)
struct RigList_C_OnRigUnhoveredEvent final
{
public:
	class FName                                   ItemId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EActiveSkillType                              ActiveSkillType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RigList_C_OnRigUnhoveredEvent) == 0x000004, "Wrong alignment on RigList_C_OnRigUnhoveredEvent");
static_assert(sizeof(RigList_C_OnRigUnhoveredEvent) == 0x00000C, "Wrong size on RigList_C_OnRigUnhoveredEvent");
static_assert(offsetof(RigList_C_OnRigUnhoveredEvent, ItemId) == 0x000000, "Member 'RigList_C_OnRigUnhoveredEvent::ItemId' has a wrong offset!");
static_assert(offsetof(RigList_C_OnRigUnhoveredEvent, ActiveSkillType) == 0x000008, "Member 'RigList_C_OnRigUnhoveredEvent::ActiveSkillType' has a wrong offset!");

// Function RigList.RigList_C.OnRigHoveredEvent
// 0x000C (0x000C - 0x0000)
struct RigList_C_OnRigHoveredEvent final
{
public:
	class FName                                   ItemId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EActiveSkillType                              ActiveSkillType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RigList_C_OnRigHoveredEvent) == 0x000004, "Wrong alignment on RigList_C_OnRigHoveredEvent");
static_assert(sizeof(RigList_C_OnRigHoveredEvent) == 0x00000C, "Wrong size on RigList_C_OnRigHoveredEvent");
static_assert(offsetof(RigList_C_OnRigHoveredEvent, ItemId) == 0x000000, "Member 'RigList_C_OnRigHoveredEvent::ItemId' has a wrong offset!");
static_assert(offsetof(RigList_C_OnRigHoveredEvent, ActiveSkillType) == 0x000008, "Member 'RigList_C_OnRigHoveredEvent::ActiveSkillType' has a wrong offset!");

// Function RigList.RigList_C.Refresh
// 0x0048 (0x0048 - 0x0000)
struct RigList_C_Refresh final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3710[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3711[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3712[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URigButton_C*                           K2Node_DynamicCast_AsRig_Button;                   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RigList_C_Refresh) == 0x000008, "Wrong alignment on RigList_C_Refresh");
static_assert(sizeof(RigList_C_Refresh) == 0x000048, "Wrong size on RigList_C_Refresh");
static_assert(offsetof(RigList_C_Refresh, Temp_int_Array_Index_Variable) == 0x000000, "Member 'RigList_C_Refresh::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RigList_C_Refresh, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'RigList_C_Refresh::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RigList_C_Refresh, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'RigList_C_Refresh::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RigList_C_Refresh, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'RigList_C_Refresh::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(RigList_C_Refresh, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'RigList_C_Refresh::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RigList_C_Refresh, CallFunc_Array_Get_Item) == 0x000028, "Member 'RigList_C_Refresh::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RigList_C_Refresh, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'RigList_C_Refresh::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RigList_C_Refresh, K2Node_DynamicCast_AsRig_Button) == 0x000038, "Member 'RigList_C_Refresh::K2Node_DynamicCast_AsRig_Button' has a wrong offset!");
static_assert(offsetof(RigList_C_Refresh, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'RigList_C_Refresh::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function RigList.RigList_C.Init
// 0x0001 (0x0001 - 0x0000)
struct RigList_C_Init final
{
public:
	bool                                          Param_bIsLoadout;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RigList_C_Init) == 0x000001, "Wrong alignment on RigList_C_Init");
static_assert(sizeof(RigList_C_Init) == 0x000001, "Wrong size on RigList_C_Init");
static_assert(offsetof(RigList_C_Init, Param_bIsLoadout) == 0x000000, "Member 'RigList_C_Init::Param_bIsLoadout' has a wrong offset!");

// Function RigList.RigList_C.Setup
// 0x0178 (0x0178 - 0x0000)
struct RigList_C_Setup final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName ItemId, EActiveSkillType ActiveSkillType)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName ItemId, EActiveSkillType ActiveSkillType)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName ItemId, EActiveSkillType ActiveSkillType)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName ItemId, EActiveSkillType ActiveSkillType)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName ItemId, EActiveSkillType ActiveSkillType)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_3713[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class URigButton_C*                           CallFunc_Create_ReturnValue;                       // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBPlayerProgressionData*               CallFunc_GetLocalPlayerProgressionData_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRBItemProgressionData>         CallFunc_FilterItemProgressionData_ReturnValue;    // 0x0070(0x0010)(ReferenceParm)
	struct FRBItemProgressionData                 CallFunc_Array_Get_Item;                           // 0x0080(0x00E8)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3714[0x3];                                     // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RigList_C_Setup) == 0x000008, "Wrong alignment on RigList_C_Setup");
static_assert(sizeof(RigList_C_Setup) == 0x000178, "Wrong size on RigList_C_Setup");
static_assert(offsetof(RigList_C_Setup, Temp_int_Array_Index_Variable) == 0x000000, "Member 'RigList_C_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(RigList_C_Setup, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'RigList_C_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(RigList_C_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'RigList_C_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RigList_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'RigList_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(RigList_C_Setup, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'RigList_C_Setup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(RigList_C_Setup, K2Node_CreateDelegate_OutputDelegate_2) == 0x00002C, "Member 'RigList_C_Setup::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(RigList_C_Setup, K2Node_CreateDelegate_OutputDelegate_3) == 0x00003C, "Member 'RigList_C_Setup::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(RigList_C_Setup, K2Node_CreateDelegate_OutputDelegate_4) == 0x00004C, "Member 'RigList_C_Setup::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(RigList_C_Setup, CallFunc_Create_ReturnValue) == 0x000060, "Member 'RigList_C_Setup::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(RigList_C_Setup, CallFunc_GetLocalPlayerProgressionData_ReturnValue) == 0x000068, "Member 'RigList_C_Setup::CallFunc_GetLocalPlayerProgressionData_ReturnValue' has a wrong offset!");
static_assert(offsetof(RigList_C_Setup, CallFunc_FilterItemProgressionData_ReturnValue) == 0x000070, "Member 'RigList_C_Setup::CallFunc_FilterItemProgressionData_ReturnValue' has a wrong offset!");
static_assert(offsetof(RigList_C_Setup, CallFunc_Array_Get_Item) == 0x000080, "Member 'RigList_C_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(RigList_C_Setup, CallFunc_Array_Length_ReturnValue) == 0x000168, "Member 'RigList_C_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(RigList_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x00016C, "Member 'RigList_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(RigList_C_Setup, CallFunc_AddChild_ReturnValue) == 0x000170, "Member 'RigList_C_Setup::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function RigList.RigList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct RigList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RigList_C_PreConstruct) == 0x000001, "Wrong alignment on RigList_C_PreConstruct");
static_assert(sizeof(RigList_C_PreConstruct) == 0x000001, "Wrong size on RigList_C_PreConstruct");
static_assert(offsetof(RigList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'RigList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function RigList.RigList_C.ExecuteUbergraph_RigList
// 0x0008 (0x0008 - 0x0000)
struct RigList_C_ExecuteUbergraph_RigList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(RigList_C_ExecuteUbergraph_RigList) == 0x000004, "Wrong alignment on RigList_C_ExecuteUbergraph_RigList");
static_assert(sizeof(RigList_C_ExecuteUbergraph_RigList) == 0x000008, "Wrong size on RigList_C_ExecuteUbergraph_RigList");
static_assert(offsetof(RigList_C_ExecuteUbergraph_RigList, EntryPoint) == 0x000000, "Member 'RigList_C_ExecuteUbergraph_RigList::EntryPoint' has a wrong offset!");
static_assert(offsetof(RigList_C_ExecuteUbergraph_RigList, K2Node_Event_IsDesignTime) == 0x000004, "Member 'RigList_C_ExecuteUbergraph_RigList::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function RigList.RigList_C.OnRigClicked__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct RigList_C_OnRigClicked__DelegateSignature final
{
public:
	class FName                                   ItemId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EActiveSkillType                              ActiveSkillType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RigList_C_OnRigClicked__DelegateSignature) == 0x000004, "Wrong alignment on RigList_C_OnRigClicked__DelegateSignature");
static_assert(sizeof(RigList_C_OnRigClicked__DelegateSignature) == 0x00000C, "Wrong size on RigList_C_OnRigClicked__DelegateSignature");
static_assert(offsetof(RigList_C_OnRigClicked__DelegateSignature, ItemId) == 0x000000, "Member 'RigList_C_OnRigClicked__DelegateSignature::ItemId' has a wrong offset!");
static_assert(offsetof(RigList_C_OnRigClicked__DelegateSignature, ActiveSkillType) == 0x000008, "Member 'RigList_C_OnRigClicked__DelegateSignature::ActiveSkillType' has a wrong offset!");

// Function RigList.RigList_C.OnRigUnhovered__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct RigList_C_OnRigUnhovered__DelegateSignature final
{
public:
	class FName                                   ItemId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EActiveSkillType                              ActiveSkillType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RigList_C_OnRigUnhovered__DelegateSignature) == 0x000004, "Wrong alignment on RigList_C_OnRigUnhovered__DelegateSignature");
static_assert(sizeof(RigList_C_OnRigUnhovered__DelegateSignature) == 0x00000C, "Wrong size on RigList_C_OnRigUnhovered__DelegateSignature");
static_assert(offsetof(RigList_C_OnRigUnhovered__DelegateSignature, ItemId) == 0x000000, "Member 'RigList_C_OnRigUnhovered__DelegateSignature::ItemId' has a wrong offset!");
static_assert(offsetof(RigList_C_OnRigUnhovered__DelegateSignature, ActiveSkillType) == 0x000008, "Member 'RigList_C_OnRigUnhovered__DelegateSignature::ActiveSkillType' has a wrong offset!");

// Function RigList.RigList_C.OnRigHovered__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct RigList_C_OnRigHovered__DelegateSignature final
{
public:
	class FName                                   ItemId;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EActiveSkillType                              ActiveSkillType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(RigList_C_OnRigHovered__DelegateSignature) == 0x000004, "Wrong alignment on RigList_C_OnRigHovered__DelegateSignature");
static_assert(sizeof(RigList_C_OnRigHovered__DelegateSignature) == 0x00000C, "Wrong size on RigList_C_OnRigHovered__DelegateSignature");
static_assert(offsetof(RigList_C_OnRigHovered__DelegateSignature, ItemId) == 0x000000, "Member 'RigList_C_OnRigHovered__DelegateSignature::ItemId' has a wrong offset!");
static_assert(offsetof(RigList_C_OnRigHovered__DelegateSignature, ActiveSkillType) == 0x000008, "Member 'RigList_C_OnRigHovered__DelegateSignature::ActiveSkillType' has a wrong offset!");

}
