#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestDeviceItem_Spawner_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function QuestDeviceItem_Spawner_BP.QuestDeviceItem_Spawner_BP_C.GetProximityItemSpawnClass
// 0x0008 (0x0008 - 0x0000)
struct QuestDeviceItem_Spawner_BP_C_GetProximityItemSpawnClass final
{
public:
	class UClass*                                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestDeviceItem_Spawner_BP_C_GetProximityItemSpawnClass) == 0x000008, "Wrong alignment on QuestDeviceItem_Spawner_BP_C_GetProximityItemSpawnClass");
static_assert(sizeof(QuestDeviceItem_Spawner_BP_C_GetProximityItemSpawnClass) == 0x000008, "Wrong size on QuestDeviceItem_Spawner_BP_C_GetProximityItemSpawnClass");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_GetProximityItemSpawnClass, ReturnValue) == 0x000000, "Member 'QuestDeviceItem_Spawner_BP_C_GetProximityItemSpawnClass::ReturnValue' has a wrong offset!");

// Function QuestDeviceItem_Spawner_BP.QuestDeviceItem_Spawner_BP_C.GetStateName
// 0x0028 (0x0028 - 0x0000)
struct QuestDeviceItem_Spawner_BP_C_GetStateName final
{
public:
	class FString                                 StateA;                                            // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 StateB;                                            // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDeviceItem_Spawner_BP_C_GetStateName) == 0x000008, "Wrong alignment on QuestDeviceItem_Spawner_BP_C_GetStateName");
static_assert(sizeof(QuestDeviceItem_Spawner_BP_C_GetStateName) == 0x000028, "Wrong size on QuestDeviceItem_Spawner_BP_C_GetStateName");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_GetStateName, StateA) == 0x000000, "Member 'QuestDeviceItem_Spawner_BP_C_GetStateName::StateA' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_GetStateName, StateB) == 0x000010, "Member 'QuestDeviceItem_Spawner_BP_C_GetStateName::StateB' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_GetStateName, ReturnValue) == 0x000020, "Member 'QuestDeviceItem_Spawner_BP_C_GetStateName::ReturnValue' has a wrong offset!");

// Function QuestDeviceItem_Spawner_BP.QuestDeviceItem_Spawner_BP_C.UserConstructionScript
// 0x0018 (0x0018 - 0x0000)
struct QuestDeviceItem_Spawner_BP_C_UserConstructionScript final
{
public:
	class UClass*                                 CallFunc_GetProximityItemSpawnClass_ReturnValue;   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<TSubclassOf<class ARBPickup>>          K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
};
static_assert(alignof(QuestDeviceItem_Spawner_BP_C_UserConstructionScript) == 0x000008, "Wrong alignment on QuestDeviceItem_Spawner_BP_C_UserConstructionScript");
static_assert(sizeof(QuestDeviceItem_Spawner_BP_C_UserConstructionScript) == 0x000018, "Wrong size on QuestDeviceItem_Spawner_BP_C_UserConstructionScript");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_UserConstructionScript, CallFunc_GetProximityItemSpawnClass_ReturnValue) == 0x000000, "Member 'QuestDeviceItem_Spawner_BP_C_UserConstructionScript::CallFunc_GetProximityItemSpawnClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_UserConstructionScript, K2Node_MakeArray_Array) == 0x000008, "Member 'QuestDeviceItem_Spawner_BP_C_UserConstructionScript::K2Node_MakeArray_Array' has a wrong offset!");

// Function QuestDeviceItem_Spawner_BP.QuestDeviceItem_Spawner_BP_C.SetState
// 0x0001 (0x0001 - 0x0000)
struct QuestDeviceItem_Spawner_BP_C_SetState final
{
public:
	bool                                          bStateA;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDeviceItem_Spawner_BP_C_SetState) == 0x000001, "Wrong alignment on QuestDeviceItem_Spawner_BP_C_SetState");
static_assert(sizeof(QuestDeviceItem_Spawner_BP_C_SetState) == 0x000001, "Wrong size on QuestDeviceItem_Spawner_BP_C_SetState");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_SetState, bStateA) == 0x000000, "Member 'QuestDeviceItem_Spawner_BP_C_SetState::bStateA' has a wrong offset!");

// Function QuestDeviceItem_Spawner_BP.QuestDeviceItem_Spawner_BP_C.SetShouldBeIgnoredForLots
// 0x0001 (0x0001 - 0x0000)
struct QuestDeviceItem_Spawner_BP_C_SetShouldBeIgnoredForLots final
{
public:
	bool                                          bValue;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDeviceItem_Spawner_BP_C_SetShouldBeIgnoredForLots) == 0x000001, "Wrong alignment on QuestDeviceItem_Spawner_BP_C_SetShouldBeIgnoredForLots");
static_assert(sizeof(QuestDeviceItem_Spawner_BP_C_SetShouldBeIgnoredForLots) == 0x000001, "Wrong size on QuestDeviceItem_Spawner_BP_C_SetShouldBeIgnoredForLots");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_SetShouldBeIgnoredForLots, bValue) == 0x000000, "Member 'QuestDeviceItem_Spawner_BP_C_SetShouldBeIgnoredForLots::bValue' has a wrong offset!");

// Function QuestDeviceItem_Spawner_BP.QuestDeviceItem_Spawner_BP_C.ExecuteUbergraph_QuestDeviceItem_Spawner_BP
// 0x0014 (0x0014 - 0x0000)
struct QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasAuthority_ReturnValue_1;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bStateA;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bValue;                               // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetBoolValue_ReturnValue;                 // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECollisionEnabled                             K2Node_Select_Default;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP) == 0x000004, "Wrong alignment on QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP");
static_assert(sizeof(QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP) == 0x000014, "Wrong size on QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP, EntryPoint) == 0x000000, "Member 'QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP, Temp_byte_Variable) == 0x000004, "Member 'QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP, Temp_byte_Variable_1) == 0x000005, "Member 'QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP, Temp_bool_Variable) == 0x000006, "Member 'QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP, CallFunc_HasAuthority_ReturnValue) == 0x000007, "Member 'QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP, CallFunc_HasAuthority_ReturnValue_1) == 0x000008, "Member 'QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP::CallFunc_HasAuthority_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP, K2Node_Event_bStateA) == 0x000009, "Member 'QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP::K2Node_Event_bStateA' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP, K2Node_Event_bValue) == 0x00000A, "Member 'QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP::K2Node_Event_bValue' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP, CallFunc_GetBoolValue_ReturnValue) == 0x00000B, "Member 'QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP::CallFunc_GetBoolValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP, K2Node_Select_Default) == 0x000011, "Member 'QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'QuestDeviceItem_Spawner_BP_C_ExecuteUbergraph_QuestDeviceItem_Spawner_BP::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function QuestDeviceItem_Spawner_BP.QuestDeviceItem_Spawner_BP_C.IsStateA
// 0x0002 (0x0002 - 0x0000)
struct QuestDeviceItem_Spawner_BP_C_IsStateA final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_IsStateA_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDeviceItem_Spawner_BP_C_IsStateA) == 0x000001, "Wrong alignment on QuestDeviceItem_Spawner_BP_C_IsStateA");
static_assert(sizeof(QuestDeviceItem_Spawner_BP_C_IsStateA) == 0x000002, "Wrong size on QuestDeviceItem_Spawner_BP_C_IsStateA");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_IsStateA, ReturnValue) == 0x000000, "Member 'QuestDeviceItem_Spawner_BP_C_IsStateA::ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_IsStateA, CallFunc_BP_IsStateA_ReturnValue) == 0x000001, "Member 'QuestDeviceItem_Spawner_BP_C_IsStateA::CallFunc_BP_IsStateA_ReturnValue' has a wrong offset!");

// Function QuestDeviceItem_Spawner_BP.QuestDeviceItem_Spawner_BP_C.ShouldBeIgnoredForLots
// 0x0002 (0x0002 - 0x0000)
struct QuestDeviceItem_Spawner_BP_C_ShouldBeIgnoredForLots final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_ShouldBeIgnoredForLots_ReturnValue;    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestDeviceItem_Spawner_BP_C_ShouldBeIgnoredForLots) == 0x000001, "Wrong alignment on QuestDeviceItem_Spawner_BP_C_ShouldBeIgnoredForLots");
static_assert(sizeof(QuestDeviceItem_Spawner_BP_C_ShouldBeIgnoredForLots) == 0x000002, "Wrong size on QuestDeviceItem_Spawner_BP_C_ShouldBeIgnoredForLots");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_ShouldBeIgnoredForLots, ReturnValue) == 0x000000, "Member 'QuestDeviceItem_Spawner_BP_C_ShouldBeIgnoredForLots::ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestDeviceItem_Spawner_BP_C_ShouldBeIgnoredForLots, CallFunc_BP_ShouldBeIgnoredForLots_ReturnValue) == 0x000001, "Member 'QuestDeviceItem_Spawner_BP_C_ShouldBeIgnoredForLots::CallFunc_BP_ShouldBeIgnoredForLots_ReturnValue' has a wrong offset!");

}

