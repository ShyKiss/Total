#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FlipCounterMinusBP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function FlipCounter-BP.FlipCounter-BP_C.GetCounter
// 0x0004 (0x0004 - 0x0000)
struct FlipCounterMinusBP_C_GetCounter final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlipCounterMinusBP_C_GetCounter) == 0x000004, "Wrong alignment on FlipCounterMinusBP_C_GetCounter");
static_assert(sizeof(FlipCounterMinusBP_C_GetCounter) == 0x000004, "Wrong size on FlipCounterMinusBP_C_GetCounter");
static_assert(offsetof(FlipCounterMinusBP_C_GetCounter, ReturnValue) == 0x000000, "Member 'FlipCounterMinusBP_C_GetCounter::ReturnValue' has a wrong offset!");

// Function FlipCounter-BP.FlipCounter-BP_C.Decrement
// 0x000C (0x000C - 0x0000)
struct FlipCounterMinusBP_C_Decrement final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3248[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlipCounterMinusBP_C_Decrement) == 0x000004, "Wrong alignment on FlipCounterMinusBP_C_Decrement");
static_assert(sizeof(FlipCounterMinusBP_C_Decrement) == 0x00000C, "Wrong size on FlipCounterMinusBP_C_Decrement");
static_assert(offsetof(FlipCounterMinusBP_C_Decrement, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'FlipCounterMinusBP_C_Decrement::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_Decrement, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'FlipCounterMinusBP_C_Decrement::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_Decrement, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'FlipCounterMinusBP_C_Decrement::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function FlipCounter-BP.FlipCounter-BP_C.Increment
// 0x0008 (0x0008 - 0x0000)
struct FlipCounterMinusBP_C_Increment final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3249[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlipCounterMinusBP_C_Increment) == 0x000004, "Wrong alignment on FlipCounterMinusBP_C_Increment");
static_assert(sizeof(FlipCounterMinusBP_C_Increment) == 0x000008, "Wrong size on FlipCounterMinusBP_C_Increment");
static_assert(offsetof(FlipCounterMinusBP_C_Increment, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'FlipCounterMinusBP_C_Increment::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_Increment, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'FlipCounterMinusBP_C_Increment::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function FlipCounter-BP.FlipCounter-BP_C.ResetCount
// 0x0001 (0x0001 - 0x0000)
struct FlipCounterMinusBP_C_ResetCount final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlipCounterMinusBP_C_ResetCount) == 0x000001, "Wrong alignment on FlipCounterMinusBP_C_ResetCount");
static_assert(sizeof(FlipCounterMinusBP_C_ResetCount) == 0x000001, "Wrong size on FlipCounterMinusBP_C_ResetCount");
static_assert(offsetof(FlipCounterMinusBP_C_ResetCount, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'FlipCounterMinusBP_C_ResetCount::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");

// Function FlipCounter-BP.FlipCounter-BP_C.SetCounter
// 0x0004 (0x0004 - 0x0000)
struct FlipCounterMinusBP_C_SetCounter final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlipCounterMinusBP_C_SetCounter) == 0x000004, "Wrong alignment on FlipCounterMinusBP_C_SetCounter");
static_assert(sizeof(FlipCounterMinusBP_C_SetCounter) == 0x000004, "Wrong size on FlipCounterMinusBP_C_SetCounter");
static_assert(offsetof(FlipCounterMinusBP_C_SetCounter, Value) == 0x000000, "Member 'FlipCounterMinusBP_C_SetCounter::Value' has a wrong offset!");

// Function FlipCounter-BP.FlipCounter-BP_C.ExecuteUbergraph_FlipCounter-BP
// 0x0060 (0x0060 - 0x0000)
struct FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_324A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFlipNumberCountDownMinus01_BP_C*       K2Node_DynamicCast_AsFlip_Number_Count_Down_01_BP; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_324B[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_324C[0x1];                                     // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_value;                                // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_324D[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable_1;                             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_324E[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue_2;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_324F[0x6];                                     // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFlipNumberCountDownMinus01_BP_C*       K2Node_DynamicCast_AsFlip_Number_Count_Down_01_BP_1; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP) == 0x000008, "Wrong alignment on FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP");
static_assert(sizeof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP) == 0x000060, "Wrong size on FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, EntryPoint) == 0x000000, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::EntryPoint' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, K2Node_DynamicCast_AsFlip_Number_Count_Down_01_BP) == 0x000008, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::K2Node_DynamicCast_AsFlip_Number_Count_Down_01_BP' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, Temp_float_Variable) == 0x000014, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, CallFunc_HasAuthority_ReturnValue) == 0x000018, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, Temp_bool_Variable) == 0x000019, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, CallFunc_HasAuthority_ReturnValue_1) == 0x00001A, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, CallFunc_Percent_IntInt_ReturnValue) == 0x00001C, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, CallFunc_Divide_IntInt_ReturnValue) == 0x000020, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, K2Node_Event_value) == 0x000024, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::K2Node_Event_value' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000028, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, CallFunc_Not_PreBool_ReturnValue) == 0x000029, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, Temp_float_Variable_1) == 0x00002C, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000030, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, K2Node_Select_Default) == 0x000034, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, K2Node_MakeStruct_LinearColor) == 0x000038, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, CallFunc_HasAuthority_ReturnValue_2) == 0x000048, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::CallFunc_HasAuthority_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, CallFunc_IsDedicatedServer_ReturnValue) == 0x000049, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, K2Node_DynamicCast_AsFlip_Number_Count_Down_01_BP_1) == 0x000050, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::K2Node_DynamicCast_AsFlip_Number_Count_Down_01_BP_1' has a wrong offset!");
static_assert(offsetof(FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'FlipCounterMinusBP_C_ExecuteUbergraph_FlipCounterMinusBP::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}
