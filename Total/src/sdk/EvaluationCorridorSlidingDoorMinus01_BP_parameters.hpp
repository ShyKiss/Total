#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EvaluationCorridorSlidingDoorMinus01_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function EvaluationCorridorSlidingDoor-01_BP.EvaluationCorridorSlidingDoor-01_BP_C.SasActivation
// 0x0001 (0x0001 - 0x0000)
struct EvaluationCorridorSlidingDoorMinus01_BP_C_SasActivation final
{
public:
	bool                                          IsReady;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EvaluationCorridorSlidingDoorMinus01_BP_C_SasActivation) == 0x000001, "Wrong alignment on EvaluationCorridorSlidingDoorMinus01_BP_C_SasActivation");
static_assert(sizeof(EvaluationCorridorSlidingDoorMinus01_BP_C_SasActivation) == 0x000001, "Wrong size on EvaluationCorridorSlidingDoorMinus01_BP_C_SasActivation");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_SasActivation, IsReady) == 0x000000, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_SasActivation::IsReady' has a wrong offset!");

// Function EvaluationCorridorSlidingDoor-01_BP.EvaluationCorridorSlidingDoor-01_BP_C.ExecuteUbergraph_EvaluationCorridorSlidingDoor-01_BP
// 0x02B4 (0x02B4 - 0x0000)
struct EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F6D[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue_2;                 // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0048(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_3;             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x005C(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_MakeVector_ReturnValue_3;                 // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_2;                          // 0x0078(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0088(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_1;  // 0x0110(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         CallFunc_PostEventOnActor_ReturnValue;             // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEventOnActor_ReturnValue_1;           // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEventOnActor_ReturnValue_2;           // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_2;  // 0x01A4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult_3;  // 0x022C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP) == 0x000004, "Wrong alignment on EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP");
static_assert(sizeof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP) == 0x0002B4, "Wrong size on EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, EntryPoint) == 0x000000, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000004, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000008, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_Add_FloatFloat_ReturnValue) == 0x00000C, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000010, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_MakeVector_ReturnValue) == 0x000014, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_MakeVector_ReturnValue_1) == 0x000020, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x00002C, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x000034, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_MakeVector_ReturnValue_2) == 0x000038, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_MakeVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x000044, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, Temp_delegate_Variable) == 0x000048, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_Add_FloatFloat_ReturnValue_3) == 0x000058, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_Add_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, Temp_delegate_Variable_1) == 0x00005C, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_MakeVector_ReturnValue_3) == 0x00006C, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_MakeVector_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, Temp_delegate_Variable_2) == 0x000078, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::Temp_delegate_Variable_2' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000088, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_K2_SetRelativeLocation_SweepHitResult_1) == 0x000110, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_K2_SetRelativeLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_PostEventOnActor_ReturnValue) == 0x000198, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_PostEventOnActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_PostEventOnActor_ReturnValue_1) == 0x00019C, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_PostEventOnActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_PostEventOnActor_ReturnValue_2) == 0x0001A0, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_PostEventOnActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_K2_SetRelativeLocation_SweepHitResult_2) == 0x0001A4, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_K2_SetRelativeLocation_SweepHitResult_2' has a wrong offset!");
static_assert(offsetof(EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP, CallFunc_K2_SetRelativeLocation_SweepHitResult_3) == 0x00022C, "Member 'EvaluationCorridorSlidingDoorMinus01_BP_C_ExecuteUbergraph_EvaluationCorridorSlidingDoorMinus01_BP::CallFunc_K2_SetRelativeLocation_SweepHitResult_3' has a wrong offset!");

}
