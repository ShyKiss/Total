#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DoorBlocker_GhostAnimBP

#include "Basic.hpp"

#include "DoorBlocker_GhostAnimBP_classes.hpp"
#include "DoorBlocker_GhostAnimBP_parameters.hpp"


namespace SDK
{

// Function DoorBlocker_GhostAnimBP.DoorBlocker_GhostAnimBP_C.ExecuteUbergraph_DoorBlocker_GhostAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDoorBlocker_GhostAnimBP_C::ExecuteUbergraph_DoorBlocker_GhostAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBlocker_GhostAnimBP_C", "ExecuteUbergraph_DoorBlocker_GhostAnimBP");

	Params::DoorBlocker_GhostAnimBP_C_ExecuteUbergraph_DoorBlocker_GhostAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBlocker_GhostAnimBP.DoorBlocker_GhostAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDoorBlocker_GhostAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBlocker_GhostAnimBP_C", "BlueprintUpdateAnimation");

	Params::DoorBlocker_GhostAnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBlocker_GhostAnimBP.DoorBlocker_GhostAnimBP_C.AnimNotify_Holding
// (BlueprintCallable, BlueprintEvent)

void UDoorBlocker_GhostAnimBP_C::AnimNotify_Holding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBlocker_GhostAnimBP_C", "AnimNotify_Holding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBlocker_GhostAnimBP.DoorBlocker_GhostAnimBP_C.AnimNotify_Finish
// (BlueprintCallable, BlueprintEvent)

void UDoorBlocker_GhostAnimBP_C::AnimNotify_Finish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBlocker_GhostAnimBP_C", "AnimNotify_Finish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBlocker_GhostAnimBP.DoorBlocker_GhostAnimBP_C.BP_ClearGhost
// (Event, Protected, BlueprintEvent)

void UDoorBlocker_GhostAnimBP_C::BP_ClearGhost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBlocker_GhostAnimBP_C", "BP_ClearGhost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBlocker_GhostAnimBP.DoorBlocker_GhostAnimBP_C.BP_InitializeGhost
// (Event, Protected, BlueprintEvent)

void UDoorBlocker_GhostAnimBP_C::BP_InitializeGhost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBlocker_GhostAnimBP_C", "BP_InitializeGhost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBlocker_GhostAnimBP.DoorBlocker_GhostAnimBP_C.FinishGhost
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGhostFinishReason                      FinishReason                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   GhostFinishCustomReason                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UDoorBlocker_GhostAnimBP_C::FinishGhost(EGhostFinishReason FinishReason, int32 GhostFinishCustomReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBlocker_GhostAnimBP_C", "FinishGhost");

	Params::DoorBlocker_GhostAnimBP_C_FinishGhost Parms{};

	Parms.FinishReason = FinishReason;
	Parms.GhostFinishCustomReason = GhostFinishCustomReason;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function DoorBlocker_GhostAnimBP.DoorBlocker_GhostAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UDoorBlocker_GhostAnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBlocker_GhostAnimBP_C", "AnimGraph");

	Params::DoorBlocker_GhostAnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}
