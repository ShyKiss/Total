#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CeilingLampMinus10

#include "Basic.hpp"


namespace SDK::Params
{

// Function CeilingLamp-10.CeilingLamp-10_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct CeilingLampMinus10_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CeilingLampMinus10_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on CeilingLampMinus10_C_ReceiveActorBeginOverlap");
static_assert(sizeof(CeilingLampMinus10_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on CeilingLampMinus10_C_ReceiveActorBeginOverlap");
static_assert(offsetof(CeilingLampMinus10_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'CeilingLampMinus10_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function CeilingLamp-10.CeilingLamp-10_C.ExecuteUbergraph_CeilingLamp-10
// 0x0010 (0x0010 - 0x0000)
struct CeilingLampMinus10_C_ExecuteUbergraph_CeilingLampMinus10 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CeilingLampMinus10_C_ExecuteUbergraph_CeilingLampMinus10) == 0x000008, "Wrong alignment on CeilingLampMinus10_C_ExecuteUbergraph_CeilingLampMinus10");
static_assert(sizeof(CeilingLampMinus10_C_ExecuteUbergraph_CeilingLampMinus10) == 0x000010, "Wrong size on CeilingLampMinus10_C_ExecuteUbergraph_CeilingLampMinus10");
static_assert(offsetof(CeilingLampMinus10_C_ExecuteUbergraph_CeilingLampMinus10, EntryPoint) == 0x000000, "Member 'CeilingLampMinus10_C_ExecuteUbergraph_CeilingLampMinus10::EntryPoint' has a wrong offset!");
static_assert(offsetof(CeilingLampMinus10_C_ExecuteUbergraph_CeilingLampMinus10, K2Node_Event_OtherActor) == 0x000008, "Member 'CeilingLampMinus10_C_ExecuteUbergraph_CeilingLampMinus10::K2Node_Event_OtherActor' has a wrong offset!");

}

