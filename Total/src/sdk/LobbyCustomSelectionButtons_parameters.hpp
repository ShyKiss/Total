#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyCustomSelectionButtons

#include "Basic.hpp"


namespace SDK::Params
{

// Function LobbyCustomSelectionButtons.LobbyCustomSelectionButtons_C.ExecuteUbergraph_LobbyCustomSelectionButtons
// 0x0040 (0x0040 - 0x0000)
struct LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33A4[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyCustomSelectionButtonsUI_C*       K2Node_DynamicCast_AsLobby_Custom_Selection_Buttons_UI; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons) == 0x000008, "Wrong alignment on LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons");
static_assert(sizeof(LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons) == 0x000040, "Wrong size on LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons");
static_assert(offsetof(LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons, EntryPoint) == 0x000000, "Member 'LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons::EntryPoint' has a wrong offset!");
static_assert(offsetof(LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons, CallFunc_IsValid_ReturnValue) == 0x000024, "Member 'LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons, CallFunc_GetUserWidgetObject_ReturnValue) == 0x000028, "Member 'LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons::CallFunc_GetUserWidgetObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons, K2Node_DynamicCast_AsLobby_Custom_Selection_Buttons_UI) == 0x000030, "Member 'LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons::K2Node_DynamicCast_AsLobby_Custom_Selection_Buttons_UI' has a wrong offset!");
static_assert(offsetof(LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'LobbyCustomSelectionButtons_C_ExecuteUbergraph_LobbyCustomSelectionButtons::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}
