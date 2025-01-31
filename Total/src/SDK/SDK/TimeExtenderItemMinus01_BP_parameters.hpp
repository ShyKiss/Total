#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimeExtenderItemMinus01_BP

#include "Basic.hpp"

#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function TimeExtenderItem-01_BP.TimeExtenderItem-01_BP_C.ExecuteUbergraph_TimeExtenderItem-01_BP
// 0x0028 (0x0028 - 0x0000)
struct TimeExtenderItemMinus01_BP_C_ExecuteUbergraph_TimeExtenderItemMinus01_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PostEventGlobal_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBPawn*                                K2Node_Event_pawn_1;                               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARBPawn*                                K2Node_Event_pawn;                                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TimeExtenderItemMinus01_BP_C_ExecuteUbergraph_TimeExtenderItemMinus01_BP) == 0x000008, "Wrong alignment on TimeExtenderItemMinus01_BP_C_ExecuteUbergraph_TimeExtenderItemMinus01_BP");
static_assert(sizeof(TimeExtenderItemMinus01_BP_C_ExecuteUbergraph_TimeExtenderItemMinus01_BP) == 0x000028, "Wrong size on TimeExtenderItemMinus01_BP_C_ExecuteUbergraph_TimeExtenderItemMinus01_BP");
static_assert(offsetof(TimeExtenderItemMinus01_BP_C_ExecuteUbergraph_TimeExtenderItemMinus01_BP, EntryPoint) == 0x000000, "Member 'TimeExtenderItemMinus01_BP_C_ExecuteUbergraph_TimeExtenderItemMinus01_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(TimeExtenderItemMinus01_BP_C_ExecuteUbergraph_TimeExtenderItemMinus01_BP, Temp_delegate_Variable) == 0x000004, "Member 'TimeExtenderItemMinus01_BP_C_ExecuteUbergraph_TimeExtenderItemMinus01_BP::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(TimeExtenderItemMinus01_BP_C_ExecuteUbergraph_TimeExtenderItemMinus01_BP, CallFunc_PostEventGlobal_ReturnValue) == 0x000014, "Member 'TimeExtenderItemMinus01_BP_C_ExecuteUbergraph_TimeExtenderItemMinus01_BP::CallFunc_PostEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(TimeExtenderItemMinus01_BP_C_ExecuteUbergraph_TimeExtenderItemMinus01_BP, K2Node_Event_pawn_1) == 0x000018, "Member 'TimeExtenderItemMinus01_BP_C_ExecuteUbergraph_TimeExtenderItemMinus01_BP::K2Node_Event_pawn_1' has a wrong offset!");
static_assert(offsetof(TimeExtenderItemMinus01_BP_C_ExecuteUbergraph_TimeExtenderItemMinus01_BP, K2Node_Event_pawn) == 0x000020, "Member 'TimeExtenderItemMinus01_BP_C_ExecuteUbergraph_TimeExtenderItemMinus01_BP::K2Node_Event_pawn' has a wrong offset!");

// Function TimeExtenderItem-01_BP.TimeExtenderItem-01_BP_C.OnConsumeItemNotify
// 0x0008 (0x0008 - 0x0000)
struct TimeExtenderItemMinus01_BP_C_OnConsumeItemNotify final
{
public:
	class ARBPawn*                                Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TimeExtenderItemMinus01_BP_C_OnConsumeItemNotify) == 0x000008, "Wrong alignment on TimeExtenderItemMinus01_BP_C_OnConsumeItemNotify");
static_assert(sizeof(TimeExtenderItemMinus01_BP_C_OnConsumeItemNotify) == 0x000008, "Wrong size on TimeExtenderItemMinus01_BP_C_OnConsumeItemNotify");
static_assert(offsetof(TimeExtenderItemMinus01_BP_C_OnConsumeItemNotify, Pawn) == 0x000000, "Member 'TimeExtenderItemMinus01_BP_C_OnConsumeItemNotify::Pawn' has a wrong offset!");

// Function TimeExtenderItem-01_BP.TimeExtenderItem-01_BP_C.OnConsumeItemCancelledNotify
// 0x0008 (0x0008 - 0x0000)
struct TimeExtenderItemMinus01_BP_C_OnConsumeItemCancelledNotify final
{
public:
	class ARBPawn*                                Pawn;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TimeExtenderItemMinus01_BP_C_OnConsumeItemCancelledNotify) == 0x000008, "Wrong alignment on TimeExtenderItemMinus01_BP_C_OnConsumeItemCancelledNotify");
static_assert(sizeof(TimeExtenderItemMinus01_BP_C_OnConsumeItemCancelledNotify) == 0x000008, "Wrong size on TimeExtenderItemMinus01_BP_C_OnConsumeItemCancelledNotify");
static_assert(offsetof(TimeExtenderItemMinus01_BP_C_OnConsumeItemCancelledNotify, Pawn) == 0x000000, "Member 'TimeExtenderItemMinus01_BP_C_OnConsumeItemCancelledNotify::Pawn' has a wrong offset!");

}

