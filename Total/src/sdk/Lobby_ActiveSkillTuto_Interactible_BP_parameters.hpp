#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby_ActiveSkillTuto_Interactible_BP

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "OPP_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Lobby_ActiveSkillTuto_Interactible_BP.Lobby_ActiveSkillTuto_Interactible_BP_C.OnWorldPopulateFinishedTimeSliced
// 0x0001 (0x0001 - 0x0000)
struct Lobby_ActiveSkillTuto_Interactible_BP_C_OnWorldPopulateFinishedTimeSliced final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lobby_ActiveSkillTuto_Interactible_BP_C_OnWorldPopulateFinishedTimeSliced) == 0x000001, "Wrong alignment on Lobby_ActiveSkillTuto_Interactible_BP_C_OnWorldPopulateFinishedTimeSliced");
static_assert(sizeof(Lobby_ActiveSkillTuto_Interactible_BP_C_OnWorldPopulateFinishedTimeSliced) == 0x000001, "Wrong size on Lobby_ActiveSkillTuto_Interactible_BP_C_OnWorldPopulateFinishedTimeSliced");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_OnWorldPopulateFinishedTimeSliced, ReturnValue) == 0x000000, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_OnWorldPopulateFinishedTimeSliced::ReturnValue' has a wrong offset!");

// Function Lobby_ActiveSkillTuto_Interactible_BP.Lobby_ActiveSkillTuto_Interactible_BP_C.OnPawnPlaySpecialMoveAnimation
// 0x0010 (0x0010 - 0x0000)
struct Lobby_ActiveSkillTuto_Interactible_BP_C_OnPawnPlaySpecialMoveAnimation final
{
public:
	const class ARBPawn*                          Pawn;                                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESpecialMove                                  SpecialMove;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lobby_ActiveSkillTuto_Interactible_BP_C_OnPawnPlaySpecialMoveAnimation) == 0x000008, "Wrong alignment on Lobby_ActiveSkillTuto_Interactible_BP_C_OnPawnPlaySpecialMoveAnimation");
static_assert(sizeof(Lobby_ActiveSkillTuto_Interactible_BP_C_OnPawnPlaySpecialMoveAnimation) == 0x000010, "Wrong size on Lobby_ActiveSkillTuto_Interactible_BP_C_OnPawnPlaySpecialMoveAnimation");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_OnPawnPlaySpecialMoveAnimation, Pawn) == 0x000000, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_OnPawnPlaySpecialMoveAnimation::Pawn' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_OnPawnPlaySpecialMoveAnimation, SpecialMove) == 0x000008, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_OnPawnPlaySpecialMoveAnimation::SpecialMove' has a wrong offset!");

// Function Lobby_ActiveSkillTuto_Interactible_BP.Lobby_ActiveSkillTuto_Interactible_BP_C.ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP
// 0x0188 (0x0188 - 0x0000)
struct Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PostEventGlobal_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0028(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PostEventGlobal_ReturnValue_1;            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33C6[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0040(0x0010)(NoDestructor)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle_1;            // 0x0050(0x0010)(NoDestructor)
	struct FNarrativeScreenAnimationData          K2Node_MakeStruct_NarrativeScreenAnimationData;    // 0x0060(0x0018)(NoDestructor)
	struct FNarrativeScreenAnimationData          K2Node_MakeStruct_NarrativeScreenAnimationData_1;  // 0x0078(0x0018)(NoDestructor)
	class ARBController*                          CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBController*                          CallFunc_GetLocalPlayerController_ReturnValue_1;   // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33C7[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBController*                          CallFunc_GetLocalPlayerController_ReturnValue_2;   // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULobbyActiveSkillTutorialMenu_C*        CallFunc_Create_ReturnValue;                       // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBController*                          CallFunc_GetLocalPlayerController_ReturnValue_3;   // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class ARBPawn*                          K2Node_Event_pawn;                                 // 0x00C0(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESpecialMove                                  K2Node_Event_specialMove;                          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33C8[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBPlayer_BP_C*                         K2Node_DynamicCast_AsRB_Player_BP;                 // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33C9[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULobbyActiveSkillTutorialMenu_C*        K2Node_DynamicCast_AsLobby_Active_Skill_Tutorial_Menu; // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33CA[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULobbyActiveSkillTutorialMenu_C*        K2Node_DynamicCast_AsLobby_Active_Skill_Tutorial_Menu_1; // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33CB[0x6];                                     // 0x00FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBPlayer*                              CallFunc_GetLocalPawn_ReturnValue;                 // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBController*                          CallFunc_GetLocalPlayerController_ReturnValue_4;   // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URBMenuManager*                         CallFunc_GetMenuManager_ReturnValue;               // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATvChannel_BP_C*                        K2Node_DynamicCast_AsTv_Channel_BP;                // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33CC[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATvChannel_BP_C*                        K2Node_DynamicCast_AsTv_Channel_BP_1;              // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33CD[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2; // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATvChannel_BP_C*                        K2Node_DynamicCast_AsTv_Channel_BP_2;              // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33CE[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3; // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0168(0x0010)(ZeroConstructor, NoDestructor)
	class ATvChannel_BP_C*                        K2Node_DynamicCast_AsTv_Channel_BP_3;              // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP) == 0x000008, "Wrong alignment on Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP");
static_assert(sizeof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP) == 0x000188, "Wrong size on Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, EntryPoint) == 0x000000, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, Temp_delegate_Variable) == 0x000004, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_CreateDelegate_OutputDelegate) == 0x000014, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_PostEventGlobal_ReturnValue) == 0x000024, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_PostEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, Temp_delegate_Variable_1) == 0x000028, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_PostEventGlobal_ReturnValue_1) == 0x000038, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_PostEventGlobal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_MakeStruct_DataTableRowHandle) == 0x000040, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_MakeStruct_DataTableRowHandle_1) == 0x000050, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_MakeStruct_DataTableRowHandle_1' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_MakeStruct_NarrativeScreenAnimationData) == 0x000060, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_MakeStruct_NarrativeScreenAnimationData' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_MakeStruct_NarrativeScreenAnimationData_1) == 0x000078, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_MakeStruct_NarrativeScreenAnimationData_1' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000090, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_GetLocalPlayerController_ReturnValue_1) == 0x000098, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_GetLocalPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_GetLocalPlayerController_ReturnValue_2) == 0x0000A8, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_GetLocalPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_Create_ReturnValue) == 0x0000B0, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_GetLocalPlayerController_ReturnValue_3) == 0x0000B8, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_GetLocalPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_Event_pawn) == 0x0000C0, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_Event_pawn' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_Event_specialMove) == 0x0000C8, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_Event_specialMove' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_DynamicCast_AsRB_Player_BP) == 0x0000D0, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_DynamicCast_AsRB_Player_BP' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_DynamicCast_AsLobby_Active_Skill_Tutorial_Menu) == 0x0000E0, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_DynamicCast_AsLobby_Active_Skill_Tutorial_Menu' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_DynamicCast_bSuccess_1) == 0x0000E8, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_DynamicCast_AsLobby_Active_Skill_Tutorial_Menu_1) == 0x0000F0, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_DynamicCast_AsLobby_Active_Skill_Tutorial_Menu_1' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_DynamicCast_bSuccess_2) == 0x0000F8, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_IsValid_ReturnValue_1) == 0x0000F9, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_GetLocalPawn_ReturnValue) == 0x000100, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_GetLocalPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_GetLocalPlayerController_ReturnValue_4) == 0x000108, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_GetLocalPlayerController_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_GetMenuManager_ReturnValue) == 0x000110, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_GetMenuManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000118, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_DynamicCast_AsTv_Channel_BP) == 0x000120, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_DynamicCast_AsTv_Channel_BP' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_DynamicCast_bSuccess_3) == 0x000128, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1) == 0x000130, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_DynamicCast_AsTv_Channel_BP_1) == 0x000138, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_DynamicCast_AsTv_Channel_BP_1' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_DynamicCast_bSuccess_4) == 0x000140, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2) == 0x000148, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_DynamicCast_AsTv_Channel_BP_2) == 0x000150, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_DynamicCast_AsTv_Channel_BP_2' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_DynamicCast_bSuccess_5) == 0x000158, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3) == 0x000160, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_CreateDelegate_OutputDelegate_1) == 0x000168, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_DynamicCast_AsTv_Channel_BP_3) == 0x000178, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_DynamicCast_AsTv_Channel_BP_3' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP, K2Node_DynamicCast_bSuccess_6) == 0x000180, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_ExecuteUbergraph_Lobby_ActiveSkillTuto_Interactible_BP::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");

// Function Lobby_ActiveSkillTuto_Interactible_BP.Lobby_ActiveSkillTuto_Interactible_BP_C.GetInteractionPawnLocation
// 0x0028 (0x0028 - 0x0000)
struct Lobby_ActiveSkillTuto_Interactible_BP_C_GetInteractionPawnLocation final
{
public:
	const class ARBPawn*                          Pawn;                                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESpecialMove                                  SpecialMove;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_33CF[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                OutLocation;                                       // 0x000C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OutDirection;                                      // 0x0018(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0024(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lobby_ActiveSkillTuto_Interactible_BP_C_GetInteractionPawnLocation) == 0x000008, "Wrong alignment on Lobby_ActiveSkillTuto_Interactible_BP_C_GetInteractionPawnLocation");
static_assert(sizeof(Lobby_ActiveSkillTuto_Interactible_BP_C_GetInteractionPawnLocation) == 0x000028, "Wrong size on Lobby_ActiveSkillTuto_Interactible_BP_C_GetInteractionPawnLocation");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_GetInteractionPawnLocation, Pawn) == 0x000000, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_GetInteractionPawnLocation::Pawn' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_GetInteractionPawnLocation, SpecialMove) == 0x000008, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_GetInteractionPawnLocation::SpecialMove' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_GetInteractionPawnLocation, OutLocation) == 0x00000C, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_GetInteractionPawnLocation::OutLocation' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_GetInteractionPawnLocation, OutDirection) == 0x000018, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_GetInteractionPawnLocation::OutDirection' has a wrong offset!");
static_assert(offsetof(Lobby_ActiveSkillTuto_Interactible_BP_C_GetInteractionPawnLocation, ReturnValue) == 0x000024, "Member 'Lobby_ActiveSkillTuto_Interactible_BP_C_GetInteractionPawnLocation::ReturnValue' has a wrong offset!");

}
