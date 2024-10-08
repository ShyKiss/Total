#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputBindingsMenu

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function InputBindingsMenu.InputBindingsMenu_C.ExecuteUbergraph_InputBindingsMenu
// 0x0250 (0x0250 - 0x0000)
struct InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URBMenuButton_C*                        K2Node_ComponentBoundEvent_Button_1;               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBMenuButton_C*                        K2Node_ComponentBoundEvent_Button;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidget*                          CallFunc_GetFirstFocusableUserWidgetChild_ReturnValue; // 0x0040(0x0008)(ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBGlobalUIConfig*                      CallFunc_GetGlobalUIConfig_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_isRebindInProgress;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URBMenuControlBindingEntry*             K2Node_Event_duplicateEntry;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	class UInputBindingEntryWidget_C*             K2Node_DynamicCast_AsInput_Binding_Entry_Widget;   // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0090(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A8(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00E8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0130(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0140(0x0018)()
	class FText                                   K2Node_Select_Default_1;                           // 0x0158(0x0018)()
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0170(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0188(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x01C8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0208(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0218(0x0018)()
	class FText                                   CallFunc_FormatTextForDecorator_ReturnValue;       // 0x0230(0x0018)()
	class URBPopUpConfirmCancelWidget*            CallFunc_CreatePopUpConfirmCancel_ReturnValue;     // 0x0248(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu) == 0x000008, "Wrong alignment on InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu");
static_assert(sizeof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu) == 0x000250, "Wrong size on InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, EntryPoint) == 0x000000, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, Temp_bool_Variable) == 0x000004, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, Temp_byte_Variable) == 0x000005, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, Temp_byte_Variable_1) == 0x000006, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, Temp_bool_Variable_1) == 0x000007, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, Temp_text_Variable) == 0x000008, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_Select_Default) == 0x000020, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_ComponentBoundEvent_Button_1) == 0x000028, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_ComponentBoundEvent_Button) == 0x000030, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_ComponentBoundEvent_Button' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_Event_IsDesignTime) == 0x000038, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, CallFunc_GetFirstFocusableUserWidgetChild_ReturnValue) == 0x000040, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::CallFunc_GetFirstFocusableUserWidgetChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, CallFunc_GetGlobalUIConfig_ReturnValue) == 0x000048, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::CallFunc_GetGlobalUIConfig_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_Event_isRebindInProgress) == 0x000050, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_Event_isRebindInProgress' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_Event_duplicateEntry) == 0x000058, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_Event_duplicateEntry' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000060, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_DynamicCast_AsInput_Binding_Entry_Widget) == 0x000070, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_DynamicCast_AsInput_Binding_Entry_Widget' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x00007C, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, CallFunc_GetText_ReturnValue) == 0x000090, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_MakeStruct_FormatArgumentData) == 0x0000A8, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000E8, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000128, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_MakeArray_Array) == 0x000130, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, CallFunc_Format_ReturnValue) == 0x000140, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_Select_Default_1) == 0x000158, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, CallFunc_Conv_NameToText_ReturnValue) == 0x000170, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_MakeStruct_FormatArgumentData_2) == 0x000188, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_MakeStruct_FormatArgumentData_3) == 0x0001C8, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, K2Node_MakeArray_Array_1) == 0x000208, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, CallFunc_Format_ReturnValue_1) == 0x000218, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, CallFunc_FormatTextForDecorator_ReturnValue) == 0x000230, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::CallFunc_FormatTextForDecorator_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu, CallFunc_CreatePopUpConfirmCancel_ReturnValue) == 0x000248, "Member 'InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu::CallFunc_CreatePopUpConfirmCancel_ReturnValue' has a wrong offset!");

// Function InputBindingsMenu.InputBindingsMenu_C.Event_DuplicateBindingFound
// 0x0008 (0x0008 - 0x0000)
struct InputBindingsMenu_C_Event_DuplicateBindingFound final
{
public:
	class URBMenuControlBindingEntry*             DuplicateEntry;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InputBindingsMenu_C_Event_DuplicateBindingFound) == 0x000008, "Wrong alignment on InputBindingsMenu_C_Event_DuplicateBindingFound");
static_assert(sizeof(InputBindingsMenu_C_Event_DuplicateBindingFound) == 0x000008, "Wrong size on InputBindingsMenu_C_Event_DuplicateBindingFound");
static_assert(offsetof(InputBindingsMenu_C_Event_DuplicateBindingFound, DuplicateEntry) == 0x000000, "Member 'InputBindingsMenu_C_Event_DuplicateBindingFound::DuplicateEntry' has a wrong offset!");

// Function InputBindingsMenu.InputBindingsMenu_C.Event_UpdateRebindStatus
// 0x0001 (0x0001 - 0x0000)
struct InputBindingsMenu_C_Event_UpdateRebindStatus final
{
public:
	bool                                          IsRebindInProgress;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InputBindingsMenu_C_Event_UpdateRebindStatus) == 0x000001, "Wrong alignment on InputBindingsMenu_C_Event_UpdateRebindStatus");
static_assert(sizeof(InputBindingsMenu_C_Event_UpdateRebindStatus) == 0x000001, "Wrong size on InputBindingsMenu_C_Event_UpdateRebindStatus");
static_assert(offsetof(InputBindingsMenu_C_Event_UpdateRebindStatus, IsRebindInProgress) == 0x000000, "Member 'InputBindingsMenu_C_Event_UpdateRebindStatus::IsRebindInProgress' has a wrong offset!");

// Function InputBindingsMenu.InputBindingsMenu_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct InputBindingsMenu_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InputBindingsMenu_C_PreConstruct) == 0x000001, "Wrong alignment on InputBindingsMenu_C_PreConstruct");
static_assert(sizeof(InputBindingsMenu_C_PreConstruct) == 0x000001, "Wrong size on InputBindingsMenu_C_PreConstruct");
static_assert(offsetof(InputBindingsMenu_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'InputBindingsMenu_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function InputBindingsMenu.InputBindingsMenu_C.BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct InputBindingsMenu_C_BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature final
{
public:
	class URBMenuButton_C*                        Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InputBindingsMenu_C_BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on InputBindingsMenu_C_BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(sizeof(InputBindingsMenu_C_BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature) == 0x000008, "Wrong size on InputBindingsMenu_C_BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
static_assert(offsetof(InputBindingsMenu_C_BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature, Button) == 0x000000, "Member 'InputBindingsMenu_C_BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function InputBindingsMenu.InputBindingsMenu_C.BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct InputBindingsMenu_C_BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature final
{
public:
	class URBMenuButton_C*                        Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InputBindingsMenu_C_BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on InputBindingsMenu_C_BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
static_assert(sizeof(InputBindingsMenu_C_BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature) == 0x000008, "Wrong size on InputBindingsMenu_C_BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
static_assert(offsetof(InputBindingsMenu_C_BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature, Button) == 0x000000, "Member 'InputBindingsMenu_C_BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature::Button' has a wrong offset!");

// Function InputBindingsMenu.InputBindingsMenu_C.RefreshDisplay
// 0x0020 (0x0020 - 0x0000)
struct InputBindingsMenu_C_RefreshDisplay final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBMenuControlBindingEntry*             CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InputBindingsMenu_C_RefreshDisplay) == 0x000008, "Wrong alignment on InputBindingsMenu_C_RefreshDisplay");
static_assert(sizeof(InputBindingsMenu_C_RefreshDisplay) == 0x000020, "Wrong size on InputBindingsMenu_C_RefreshDisplay");
static_assert(offsetof(InputBindingsMenu_C_RefreshDisplay, Temp_int_Array_Index_Variable) == 0x000000, "Member 'InputBindingsMenu_C_RefreshDisplay::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_RefreshDisplay, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'InputBindingsMenu_C_RefreshDisplay::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_RefreshDisplay, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'InputBindingsMenu_C_RefreshDisplay::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_RefreshDisplay, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'InputBindingsMenu_C_RefreshDisplay::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_RefreshDisplay, CallFunc_Array_Get_Item) == 0x000010, "Member 'InputBindingsMenu_C_RefreshDisplay::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_RefreshDisplay, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'InputBindingsMenu_C_RefreshDisplay::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_RefreshDisplay, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'InputBindingsMenu_C_RefreshDisplay::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function InputBindingsMenu.InputBindingsMenu_C.Init
// 0x0040 (0x0040 - 0x0000)
struct InputBindingsMenu_C_Init final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputBindingEntryWidget_C*             K2Node_DynamicCast_AsInput_Binding_Entry_Widget;   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InputBindingsMenu_C_Init) == 0x000008, "Wrong alignment on InputBindingsMenu_C_Init");
static_assert(sizeof(InputBindingsMenu_C_Init) == 0x000040, "Wrong size on InputBindingsMenu_C_Init");
static_assert(offsetof(InputBindingsMenu_C_Init, Temp_int_Array_Index_Variable) == 0x000000, "Member 'InputBindingsMenu_C_Init::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_Init, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'InputBindingsMenu_C_Init::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_Init, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'InputBindingsMenu_C_Init::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_Init, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'InputBindingsMenu_C_Init::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_Init, CallFunc_Array_Get_Item) == 0x000020, "Member 'InputBindingsMenu_C_Init::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_Init, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'InputBindingsMenu_C_Init::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_Init, K2Node_DynamicCast_AsInput_Binding_Entry_Widget) == 0x000030, "Member 'InputBindingsMenu_C_Init::K2Node_DynamicCast_AsInput_Binding_Entry_Widget' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_Init, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'InputBindingsMenu_C_Init::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_Init, CallFunc_Less_IntInt_ReturnValue) == 0x000039, "Member 'InputBindingsMenu_C_Init::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function InputBindingsMenu.InputBindingsMenu_C.UpdateNavigationButtons
// 0x0060 (0x0060 - 0x0000)
struct InputBindingsMenu_C_UpdateNavigationButtons final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0020(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B[0x5];                                       // 0x003B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0040(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(InputBindingsMenu_C_UpdateNavigationButtons) == 0x000008, "Wrong alignment on InputBindingsMenu_C_UpdateNavigationButtons");
static_assert(sizeof(InputBindingsMenu_C_UpdateNavigationButtons) == 0x000060, "Wrong size on InputBindingsMenu_C_UpdateNavigationButtons");
static_assert(offsetof(InputBindingsMenu_C_UpdateNavigationButtons, Temp_bool_Variable) == 0x000000, "Member 'InputBindingsMenu_C_UpdateNavigationButtons::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_UpdateNavigationButtons, Temp_text_Variable) == 0x000008, "Member 'InputBindingsMenu_C_UpdateNavigationButtons::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_UpdateNavigationButtons, Temp_text_Variable_1) == 0x000020, "Member 'InputBindingsMenu_C_UpdateNavigationButtons::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_UpdateNavigationButtons, Temp_bool_Variable_1) == 0x000038, "Member 'InputBindingsMenu_C_UpdateNavigationButtons::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_UpdateNavigationButtons, Temp_byte_Variable) == 0x000039, "Member 'InputBindingsMenu_C_UpdateNavigationButtons::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_UpdateNavigationButtons, Temp_byte_Variable_1) == 0x00003A, "Member 'InputBindingsMenu_C_UpdateNavigationButtons::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_UpdateNavigationButtons, K2Node_Select_Default) == 0x000040, "Member 'InputBindingsMenu_C_UpdateNavigationButtons::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(InputBindingsMenu_C_UpdateNavigationButtons, K2Node_Select_Default_1) == 0x000058, "Member 'InputBindingsMenu_C_UpdateNavigationButtons::K2Node_Select_Default_1' has a wrong offset!");

}

