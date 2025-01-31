#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Default_NightVision_AnimBP

#include "Basic.hpp"

#include "Default_NightVision_AnimBP_classes.hpp"
#include "Default_NightVision_AnimBP_parameters.hpp"


namespace SDK
{

// Function Default_NightVision_AnimBP.Default_NightVision_AnimBP_C.ExecuteUbergraph_Default_NightVision_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefault_NightVision_AnimBP_C::ExecuteUbergraph_Default_NightVision_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Default_NightVision_AnimBP_C", "ExecuteUbergraph_Default_NightVision_AnimBP");

	Params::Default_NightVision_AnimBP_C_ExecuteUbergraph_Default_NightVision_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Default_NightVision_AnimBP.Default_NightVision_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UDefault_NightVision_AnimBP_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Default_NightVision_AnimBP_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Default_NightVision_AnimBP.Default_NightVision_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefault_NightVision_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Default_NightVision_AnimBP_C", "BlueprintUpdateAnimation");

	Params::Default_NightVision_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Default_NightVision_AnimBP.Default_NightVision_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UDefault_NightVision_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Default_NightVision_AnimBP_C", "AnimGraph");

	Params::Default_NightVision_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}

}

