#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FourLightSelector_BP

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function 4LightSelector_BP.4LightSelector_BP_C.UpdateLight
// 0x0038 (0x0038 - 0x0000)
struct FourLightSelector_BP_C_UpdateLight final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsGreen;                                           // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33BD[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FourLightSelector_BP_C_UpdateLight) == 0x000004, "Wrong alignment on FourLightSelector_BP_C_UpdateLight");
static_assert(sizeof(FourLightSelector_BP_C_UpdateLight) == 0x000038, "Wrong size on FourLightSelector_BP_C_UpdateLight");
static_assert(offsetof(FourLightSelector_BP_C_UpdateLight, Value) == 0x000000, "Member 'FourLightSelector_BP_C_UpdateLight::Value' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_UpdateLight, IsGreen) == 0x000004, "Member 'FourLightSelector_BP_C_UpdateLight::IsGreen' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_UpdateLight, Temp_bool_Variable) == 0x000005, "Member 'FourLightSelector_BP_C_UpdateLight::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_UpdateLight, Temp_struct_Variable) == 0x000008, "Member 'FourLightSelector_BP_C_UpdateLight::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_UpdateLight, Temp_struct_Variable_1) == 0x000018, "Member 'FourLightSelector_BP_C_UpdateLight::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_UpdateLight, K2Node_Select_Default) == 0x000028, "Member 'FourLightSelector_BP_C_UpdateLight::K2Node_Select_Default' has a wrong offset!");

// Function 4LightSelector_BP.4LightSelector_BP_C.SetAllLight
// 0x0028 (0x0028 - 0x0000)
struct FourLightSelector_BP_C_SetAllLight final
{
public:
	bool                                          Light1;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Light2;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Light3;                                            // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Light4;                                            // 0x0003(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_1;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_2;                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue_3;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_3;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FourLightSelector_BP_C_SetAllLight) == 0x000004, "Wrong alignment on FourLightSelector_BP_C_SetAllLight");
static_assert(sizeof(FourLightSelector_BP_C_SetAllLight) == 0x000028, "Wrong size on FourLightSelector_BP_C_SetAllLight");
static_assert(offsetof(FourLightSelector_BP_C_SetAllLight, Light1) == 0x000000, "Member 'FourLightSelector_BP_C_SetAllLight::Light1' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_SetAllLight, Light2) == 0x000001, "Member 'FourLightSelector_BP_C_SetAllLight::Light2' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_SetAllLight, Light3) == 0x000002, "Member 'FourLightSelector_BP_C_SetAllLight::Light3' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_SetAllLight, Light4) == 0x000003, "Member 'FourLightSelector_BP_C_SetAllLight::Light4' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_SetAllLight, CallFunc_SelectFloat_ReturnValue) == 0x000004, "Member 'FourLightSelector_BP_C_SetAllLight::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_SetAllLight, CallFunc_SelectFloat_ReturnValue_1) == 0x000008, "Member 'FourLightSelector_BP_C_SetAllLight::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_SetAllLight, CallFunc_SelectFloat_ReturnValue_2) == 0x00000C, "Member 'FourLightSelector_BP_C_SetAllLight::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_SetAllLight, CallFunc_SelectFloat_ReturnValue_3) == 0x000010, "Member 'FourLightSelector_BP_C_SetAllLight::CallFunc_SelectFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_SetAllLight, CallFunc_Add_FloatFloat_ReturnValue) == 0x000014, "Member 'FourLightSelector_BP_C_SetAllLight::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_SetAllLight, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000018, "Member 'FourLightSelector_BP_C_SetAllLight::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_SetAllLight, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x00001C, "Member 'FourLightSelector_BP_C_SetAllLight::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_SetAllLight, CallFunc_Add_FloatFloat_ReturnValue_3) == 0x000020, "Member 'FourLightSelector_BP_C_SetAllLight::CallFunc_Add_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_SetAllLight, CallFunc_FTrunc_ReturnValue) == 0x000024, "Member 'FourLightSelector_BP_C_SetAllLight::CallFunc_FTrunc_ReturnValue' has a wrong offset!");

// Function 4LightSelector_BP.4LightSelector_BP_C.SetSelectorNumber
// 0x0008 (0x0008 - 0x0000)
struct FourLightSelector_BP_C_SetSelectorNumber final
{
public:
	int32                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FourLightSelector_BP_C_SetSelectorNumber) == 0x000004, "Wrong alignment on FourLightSelector_BP_C_SetSelectorNumber");
static_assert(sizeof(FourLightSelector_BP_C_SetSelectorNumber) == 0x000008, "Wrong size on FourLightSelector_BP_C_SetSelectorNumber");
static_assert(offsetof(FourLightSelector_BP_C_SetSelectorNumber, Value) == 0x000000, "Member 'FourLightSelector_BP_C_SetSelectorNumber::Value' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_SetSelectorNumber, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000004, "Member 'FourLightSelector_BP_C_SetSelectorNumber::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

// Function 4LightSelector_BP.4LightSelector_BP_C.UpdateLoop
// 0x0018 (0x0018 - 0x0000)
struct FourLightSelector_BP_C_UpdateLoop final
{
public:
	int32                                         SetNumber;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitialDelay;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopNumberMin;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopNumberMax;                                     // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LoopDuration;                                      // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OpenClose;                                         // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FourLightSelector_BP_C_UpdateLoop) == 0x000004, "Wrong alignment on FourLightSelector_BP_C_UpdateLoop");
static_assert(sizeof(FourLightSelector_BP_C_UpdateLoop) == 0x000018, "Wrong size on FourLightSelector_BP_C_UpdateLoop");
static_assert(offsetof(FourLightSelector_BP_C_UpdateLoop, SetNumber) == 0x000000, "Member 'FourLightSelector_BP_C_UpdateLoop::SetNumber' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_UpdateLoop, InitialDelay) == 0x000004, "Member 'FourLightSelector_BP_C_UpdateLoop::InitialDelay' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_UpdateLoop, LoopNumberMin) == 0x000008, "Member 'FourLightSelector_BP_C_UpdateLoop::LoopNumberMin' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_UpdateLoop, LoopNumberMax) == 0x00000C, "Member 'FourLightSelector_BP_C_UpdateLoop::LoopNumberMax' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_UpdateLoop, LoopDuration) == 0x000010, "Member 'FourLightSelector_BP_C_UpdateLoop::LoopDuration' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_UpdateLoop, OpenClose) == 0x000014, "Member 'FourLightSelector_BP_C_UpdateLoop::OpenClose' has a wrong offset!");

// Function 4LightSelector_BP.4LightSelector_BP_C.UpdateLoopCountdown
// 0x000C (0x000C - 0x0000)
struct FourLightSelector_BP_C_UpdateLoopCountdown final
{
public:
	float                                         TimeLength;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CounterDelay;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OpenClose;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FourLightSelector_BP_C_UpdateLoopCountdown) == 0x000004, "Wrong alignment on FourLightSelector_BP_C_UpdateLoopCountdown");
static_assert(sizeof(FourLightSelector_BP_C_UpdateLoopCountdown) == 0x00000C, "Wrong size on FourLightSelector_BP_C_UpdateLoopCountdown");
static_assert(offsetof(FourLightSelector_BP_C_UpdateLoopCountdown, TimeLength) == 0x000000, "Member 'FourLightSelector_BP_C_UpdateLoopCountdown::TimeLength' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_UpdateLoopCountdown, CounterDelay) == 0x000004, "Member 'FourLightSelector_BP_C_UpdateLoopCountdown::CounterDelay' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_UpdateLoopCountdown, OpenClose) == 0x000008, "Member 'FourLightSelector_BP_C_UpdateLoopCountdown::OpenClose' has a wrong offset!");

// Function 4LightSelector_BP.4LightSelector_BP_C.ExecuteUbergraph_4LightSelector_BP
// 0x00DC (0x00DC - 0x0000)
struct FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33BE[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33BF[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33C0[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_5;                               // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SetNumber;                      // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_InitialDelay;                   // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_LoopNumberMin;                  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_LoopNumberMax;                  // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_LoopDuration;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_OpenClose_1;                    // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33C1[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33C2[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_CustomEvent_timeLength;                     // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_counterDelay;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_OpenClose;                      // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33C3[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0094(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x00A4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetServerTime_ReturnValue;                // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33C4[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_33C5[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_3;                           // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP) == 0x000004, "Wrong alignment on FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP");
static_assert(sizeof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP) == 0x0000DC, "Wrong size on FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, EntryPoint) == 0x000000, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, Temp_struct_Variable) == 0x000008, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, Temp_struct_Variable_1) == 0x000018, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, Temp_bool_Variable) == 0x000028, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, Temp_struct_Variable_2) == 0x00002C, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, Temp_struct_Variable_3) == 0x00003C, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, Temp_int_Variable) == 0x00004C, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, Temp_int_Variable_1) == 0x000050, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, Temp_int_Variable_2) == 0x000054, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, Temp_int_Variable_3) == 0x000058, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, Temp_int_Variable_4) == 0x00005C, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, Temp_bool_Variable_1) == 0x000060, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, Temp_int_Variable_5) == 0x000064, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, K2Node_CustomEvent_SetNumber) == 0x000068, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::K2Node_CustomEvent_SetNumber' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, K2Node_CustomEvent_InitialDelay) == 0x00006C, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::K2Node_CustomEvent_InitialDelay' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, K2Node_CustomEvent_LoopNumberMin) == 0x000070, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::K2Node_CustomEvent_LoopNumberMin' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, K2Node_CustomEvent_LoopNumberMax) == 0x000074, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::K2Node_CustomEvent_LoopNumberMax' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, K2Node_CustomEvent_LoopDuration) == 0x000078, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::K2Node_CustomEvent_LoopDuration' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, K2Node_CustomEvent_OpenClose_1) == 0x00007C, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::K2Node_CustomEvent_OpenClose_1' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000080, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, Temp_bool_Variable_2) == 0x000084, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, K2Node_CustomEvent_timeLength) == 0x000088, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::K2Node_CustomEvent_timeLength' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, K2Node_CustomEvent_counterDelay) == 0x00008C, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::K2Node_CustomEvent_counterDelay' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, K2Node_CustomEvent_OpenClose) == 0x000090, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::K2Node_CustomEvent_OpenClose' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, K2Node_Select_Default) == 0x000094, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, K2Node_Select_Default_1) == 0x0000A4, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, CallFunc_GetServerTime_ReturnValue) == 0x0000B4, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::CallFunc_GetServerTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000B8, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000BC, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, CallFunc_FMin_ReturnValue) == 0x0000C0, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000C4, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000C8, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, CallFunc_FFloor_ReturnValue) == 0x0000CC, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, CallFunc_BooleanOR_ReturnValue) == 0x0000D0, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, K2Node_Select_Default_2) == 0x0000D4, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP, K2Node_Select_Default_3) == 0x0000D8, "Member 'FourLightSelector_BP_C_ExecuteUbergraph_4LightSelector_BP::K2Node_Select_Default_3' has a wrong offset!");

}
