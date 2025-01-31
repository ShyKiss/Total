#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TentacleTrapAnim_BP

#include "Basic.hpp"

#include "TentacleTrapAnim_BP_classes.hpp"
#include "TentacleTrapAnim_BP_parameters.hpp"


namespace SDK
{

// Function TentacleTrapAnim_BP.TentacleTrapAnim_BP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UTentacleTrapAnim_BP_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TentacleTrapAnim_BP_C", "AnimGraph");

	Params::TentacleTrapAnim_BP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function TentacleTrapAnim_BP.TentacleTrapAnim_BP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTentacleTrapAnim_BP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TentacleTrapAnim_BP_C", "BlueprintUpdateAnimation");

	Params::TentacleTrapAnim_BP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TentacleTrapAnim_BP.TentacleTrapAnim_BP_C.AnimNotify_EnterIdle
// (BlueprintCallable, BlueprintEvent)

void UTentacleTrapAnim_BP_C::AnimNotify_EnterIdle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TentacleTrapAnim_BP_C", "AnimNotify_EnterIdle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TentacleTrapAnim_BP.TentacleTrapAnim_BP_C.AnimNotify_EnterIdleAfterAttack
// (BlueprintCallable, BlueprintEvent)

void UTentacleTrapAnim_BP_C::AnimNotify_EnterIdleAfterAttack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TentacleTrapAnim_BP_C", "AnimNotify_EnterIdleAfterAttack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TentacleTrapAnim_BP.TentacleTrapAnim_BP_C.AnimNotify_EnterDestroy
// (BlueprintCallable, BlueprintEvent)

void UTentacleTrapAnim_BP_C::AnimNotify_EnterDestroy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TentacleTrapAnim_BP_C", "AnimNotify_EnterDestroy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TentacleTrapAnim_BP.TentacleTrapAnim_BP_C.ExecuteUbergraph_TentacleTrapAnim_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTentacleTrapAnim_BP_C::ExecuteUbergraph_TentacleTrapAnim_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TentacleTrapAnim_BP_C", "ExecuteUbergraph_TentacleTrapAnim_BP");

	Params::TentacleTrapAnim_BP_C_ExecuteUbergraph_TentacleTrapAnim_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

