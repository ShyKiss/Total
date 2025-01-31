#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ElectricTrap_Container_BP

#include "Basic.hpp"

#include "OPP_structs.hpp"


namespace SDK::Params
{

// Function ElectricTrap_Container_BP.ElectricTrap_Container_BP_C.ExecuteUbergraph_ElectricTrap_Container_BP
// 0x0060 (0x0060 - 0x0000)
struct ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FContainerSpawnedItemInfo              CallFunc_Array_Get_Item;                           // 0x0018(0x0010)(NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ATriggerTrap_BatteryPowered_Right_BP_C* K2Node_DynamicCast_AsTrigger_Trap_Battery_Powered_Right_BP; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsArmed_ReturnValue;                   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class URBOutlineComponent*                    K2Node_Select_Default;                             // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP) == 0x000008, "Wrong alignment on ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP");
static_assert(sizeof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP) == 0x000060, "Wrong size on ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP");
static_assert(offsetof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP, EntryPoint) == 0x000000, "Member 'ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP::EntryPoint' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP, CallFunc_IsDedicatedServer_ReturnValue) == 0x000004, "Member 'ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP, Temp_int_Array_Index_Variable) == 0x000008, "Member 'ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP, Temp_bool_Variable) == 0x00000C, "Member 'ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP, CallFunc_Array_Get_Item) == 0x000018, "Member 'ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP, CallFunc_GetAttachParentActor_ReturnValue) == 0x000038, "Member 'ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP, K2Node_DynamicCast_AsTrigger_Trap_Battery_Powered_Right_BP) == 0x000048, "Member 'ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP::K2Node_DynamicCast_AsTrigger_Trap_Battery_Powered_Right_BP' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP, CallFunc_GetIsArmed_ReturnValue) == 0x000051, "Member 'ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP::CallFunc_GetIsArmed_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP, K2Node_Select_Default) == 0x000058, "Member 'ElectricTrap_Container_BP_C_ExecuteUbergraph_ElectricTrap_Container_BP::K2Node_Select_Default' has a wrong offset!");

// Function ElectricTrap_Container_BP.ElectricTrap_Container_BP_C.IsOpen
// 0x0028 (0x0028 - 0x0000)
struct ElectricTrap_Container_BP_C_IsOpen final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOpen_ReturnValue;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ARBWireTriggerTrap*                     K2Node_DynamicCast_AsRB_Wire_Trigger_Trap;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetIsArmed_ReturnValue;                   // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ElectricTrap_Container_BP_C_IsOpen) == 0x000008, "Wrong alignment on ElectricTrap_Container_BP_C_IsOpen");
static_assert(sizeof(ElectricTrap_Container_BP_C_IsOpen) == 0x000028, "Wrong size on ElectricTrap_Container_BP_C_IsOpen");
static_assert(offsetof(ElectricTrap_Container_BP_C_IsOpen, ReturnValue) == 0x000000, "Member 'ElectricTrap_Container_BP_C_IsOpen::ReturnValue' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_IsOpen, CallFunc_GetAttachParentActor_ReturnValue) == 0x000008, "Member 'ElectricTrap_Container_BP_C_IsOpen::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_IsOpen, CallFunc_IsOpen_ReturnValue) == 0x000010, "Member 'ElectricTrap_Container_BP_C_IsOpen::CallFunc_IsOpen_ReturnValue' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_IsOpen, K2Node_DynamicCast_AsRB_Wire_Trigger_Trap) == 0x000018, "Member 'ElectricTrap_Container_BP_C_IsOpen::K2Node_DynamicCast_AsRB_Wire_Trigger_Trap' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_IsOpen, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ElectricTrap_Container_BP_C_IsOpen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ElectricTrap_Container_BP_C_IsOpen, CallFunc_GetIsArmed_ReturnValue) == 0x000021, "Member 'ElectricTrap_Container_BP_C_IsOpen::CallFunc_GetIsArmed_ReturnValue' has a wrong offset!");

}

