#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pitcher_01_Bottles_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Pitcher_01_Bottles_Skeleton_AnimBlueprint_classes.hpp"
#include "Pitcher_01_Bottles_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function Pitcher_01_Bottles_Skeleton_AnimBlueprint.Pitcher_01_Bottles_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UPitcher_01_Bottles_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pitcher_01_Bottles_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::Pitcher_01_Bottles_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function Pitcher_01_Bottles_Skeleton_AnimBlueprint.Pitcher_01_Bottles_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Pitcher_01_Bottles_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPitcher_01_Bottles_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Pitcher_01_Bottles_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Pitcher_01_Bottles_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Pitcher_01_Bottles_Skeleton_AnimBlueprint");

	Params::Pitcher_01_Bottles_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Pitcher_01_Bottles_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

