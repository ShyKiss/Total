#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Quest_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function quest_AnimBP.quest_AnimBP_C.ExecuteUbergraph_quest_AnimBP
// 0x00D8 (0x00D8 - 0x0000)
struct Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActor_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseAnimatedQuestGiver_BP_C*           K2Node_DynamicCast_AsBase_Animated_Quest_Giver_BP; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BB3[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue; // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BB4[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1; // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BB5[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           K2Node_CustomEvent_Montage;                        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bInterrupted;                   // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BB6[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2; // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_2;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x005B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3; // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_3;            // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BB7[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStageResetCount_ReturnValue;           // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_LastReset_Variable;                       // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BB8[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_4; // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_4;            // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable_1;               // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable_1;                     // 0x008F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_5; // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_5;            // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BB9[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BBA[0x2];                                     // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_1;                      // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStageResetCount_ReturnValue_1;         // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_LastReset_Variable_1;                     // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BBB[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue_2;                      // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP) == 0x000008, "Wrong alignment on Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP");
static_assert(sizeof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP) == 0x0000D8, "Wrong size on Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, EntryPoint) == 0x000000, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, K2Node_Event_DeltaTimeX) == 0x000004, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::K2Node_Event_DeltaTimeX' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_GetOwningActor_ReturnValue) == 0x000008, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_GetOwningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, K2Node_DynamicCast_AsBase_Animated_Quest_Giver_BP) == 0x000010, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::K2Node_DynamicCast_AsBase_Animated_Quest_Giver_BP' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue) == 0x00001C, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Less_FloatFloat_ReturnValue) == 0x000020, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, Temp_bool_IsClosed_Variable) == 0x000021, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1) == 0x000024, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x000038, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, K2Node_CustomEvent_Montage) == 0x000048, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::K2Node_CustomEvent_Montage' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, K2Node_CustomEvent_bInterrupted) == 0x000050, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::K2Node_CustomEvent_bInterrupted' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2) == 0x000054, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Less_FloatFloat_ReturnValue_2) == 0x000058, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Less_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Not_PreBool_ReturnValue) == 0x00005A, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_BooleanAND_ReturnValue) == 0x00005B, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3) == 0x00005C, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Less_FloatFloat_ReturnValue_3) == 0x000060, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Less_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue) == 0x000068, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1) == 0x000070, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_GetStageResetCount_ReturnValue) == 0x000078, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_GetStageResetCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, Temp_int_LastReset_Variable) == 0x00007C, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::Temp_int_LastReset_Variable' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000080, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_4) == 0x000084, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Not_PreBool_ReturnValue_1) == 0x000088, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Less_FloatFloat_ReturnValue_4) == 0x000089, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Less_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_BooleanAND_ReturnValue_1) == 0x00008A, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Not_PreBool_ReturnValue_2) == 0x00008B, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_BooleanAND_ReturnValue_2) == 0x00008C, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, Temp_bool_Has_Been_Initd_Variable) == 0x00008D, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, Temp_bool_Has_Been_Initd_Variable_1) == 0x00008E, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::Temp_bool_Has_Been_Initd_Variable_1' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, Temp_bool_IsClosed_Variable_1) == 0x00008F, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::Temp_bool_IsClosed_Variable_1' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_5) == 0x000090, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x000094, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Less_FloatFloat_ReturnValue_5) == 0x000098, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Less_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_FInterpTo_ReturnValue) == 0x00009C, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2) == 0x0000A0, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_PlaySlotAnimationAsDynamicMontage_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000A8, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0000A9, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Add_IntInt_ReturnValue) == 0x0000AC, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B0, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Clamp_ReturnValue) == 0x0000B4, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Clamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Clamp_ReturnValue_1) == 0x0000B8, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Clamp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_GetStageResetCount_ReturnValue_1) == 0x0000BC, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_GetStageResetCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, Temp_int_LastReset_Variable_1) == 0x0000C0, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::Temp_int_LastReset_Variable_1' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0000C4, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000C8, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_Clamp_ReturnValue_2) == 0x0000CC, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_Clamp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x0000D0, "Member 'Quest_AnimBP_C_ExecuteUbergraph_quest_AnimBP::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");

// Function quest_AnimBP.quest_AnimBP_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Quest_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Quest_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on Quest_AnimBP_C_AnimGraph");
static_assert(sizeof(Quest_AnimBP_C_AnimGraph) == 0x000010, "Wrong size on Quest_AnimBP_C_AnimGraph");
static_assert(offsetof(Quest_AnimBP_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'Quest_AnimBP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

// Function quest_AnimBP.quest_AnimBP_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct Quest_AnimBP_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Quest_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on Quest_AnimBP_C_BlueprintUpdateAnimation");
static_assert(sizeof(Quest_AnimBP_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on Quest_AnimBP_C_BlueprintUpdateAnimation");
static_assert(offsetof(Quest_AnimBP_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'Quest_AnimBP_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function quest_AnimBP.quest_AnimBP_C.FinishedPlayingReaction
// 0x0010 (0x0010 - 0x0000)
struct Quest_AnimBP_C_FinishedPlayingReaction final
{
public:
	class UAnimMontage*                           Montage;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInterrupted;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Quest_AnimBP_C_FinishedPlayingReaction) == 0x000008, "Wrong alignment on Quest_AnimBP_C_FinishedPlayingReaction");
static_assert(sizeof(Quest_AnimBP_C_FinishedPlayingReaction) == 0x000010, "Wrong size on Quest_AnimBP_C_FinishedPlayingReaction");
static_assert(offsetof(Quest_AnimBP_C_FinishedPlayingReaction, Montage) == 0x000000, "Member 'Quest_AnimBP_C_FinishedPlayingReaction::Montage' has a wrong offset!");
static_assert(offsetof(Quest_AnimBP_C_FinishedPlayingReaction, bInterrupted) == 0x000008, "Member 'Quest_AnimBP_C_FinishedPlayingReaction::bInterrupted' has a wrong offset!");

}
