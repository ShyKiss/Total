#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BasicDynamic_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BasicDynamic_AnimBP.BasicDynamic_AnimBP_C.ExecuteUbergraph_BasicDynamic_AnimBP
// 0x0004 (0x0004 - 0x0000)
struct BasicDynamic_AnimBP_C_ExecuteUbergraph_BasicDynamic_AnimBP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BasicDynamic_AnimBP_C_ExecuteUbergraph_BasicDynamic_AnimBP) == 0x000004, "Wrong alignment on BasicDynamic_AnimBP_C_ExecuteUbergraph_BasicDynamic_AnimBP");
static_assert(sizeof(BasicDynamic_AnimBP_C_ExecuteUbergraph_BasicDynamic_AnimBP) == 0x000004, "Wrong size on BasicDynamic_AnimBP_C_ExecuteUbergraph_BasicDynamic_AnimBP");
static_assert(offsetof(BasicDynamic_AnimBP_C_ExecuteUbergraph_BasicDynamic_AnimBP, EntryPoint) == 0x000000, "Member 'BasicDynamic_AnimBP_C_ExecuteUbergraph_BasicDynamic_AnimBP::EntryPoint' has a wrong offset!");

// Function BasicDynamic_AnimBP.BasicDynamic_AnimBP_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct BasicDynamic_AnimBP_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(BasicDynamic_AnimBP_C_AnimGraph) == 0x000008, "Wrong alignment on BasicDynamic_AnimBP_C_AnimGraph");
static_assert(sizeof(BasicDynamic_AnimBP_C_AnimGraph) == 0x000020, "Wrong size on BasicDynamic_AnimBP_C_AnimGraph");
static_assert(offsetof(BasicDynamic_AnimBP_C_AnimGraph, InPose) == 0x000000, "Member 'BasicDynamic_AnimBP_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(BasicDynamic_AnimBP_C_AnimGraph, Param_AnimGraph) == 0x000010, "Member 'BasicDynamic_AnimBP_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}
