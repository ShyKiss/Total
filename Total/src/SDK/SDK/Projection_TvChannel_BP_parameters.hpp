#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Projection_TvChannel_BP

#include "Basic.hpp"


namespace SDK::Params
{

// Function Projection_TvChannel_BP.Projection_TvChannel_BP_C.GetClueTextFromNameInternal
// 0x0040 (0x0040 - 0x0000)
struct Projection_TvChannel_BP_C_GetClueTextFromNameInternal final
{
public:
	class FName                                   ClueName;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   ClueText;                                          // 0x0008(0x0018)(Parm, OutParm)
	class FText                                   CallFunc_Map_Find_Value;                           // 0x0020(0x0018)()
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Projection_TvChannel_BP_C_GetClueTextFromNameInternal) == 0x000008, "Wrong alignment on Projection_TvChannel_BP_C_GetClueTextFromNameInternal");
static_assert(sizeof(Projection_TvChannel_BP_C_GetClueTextFromNameInternal) == 0x000040, "Wrong size on Projection_TvChannel_BP_C_GetClueTextFromNameInternal");
static_assert(offsetof(Projection_TvChannel_BP_C_GetClueTextFromNameInternal, ClueName) == 0x000000, "Member 'Projection_TvChannel_BP_C_GetClueTextFromNameInternal::ClueName' has a wrong offset!");
static_assert(offsetof(Projection_TvChannel_BP_C_GetClueTextFromNameInternal, ClueText) == 0x000008, "Member 'Projection_TvChannel_BP_C_GetClueTextFromNameInternal::ClueText' has a wrong offset!");
static_assert(offsetof(Projection_TvChannel_BP_C_GetClueTextFromNameInternal, CallFunc_Map_Find_Value) == 0x000020, "Member 'Projection_TvChannel_BP_C_GetClueTextFromNameInternal::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Projection_TvChannel_BP_C_GetClueTextFromNameInternal, CallFunc_Map_Find_ReturnValue) == 0x000038, "Member 'Projection_TvChannel_BP_C_GetClueTextFromNameInternal::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

}

