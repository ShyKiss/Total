#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BASE_ElectricalSwitchMinus01_AnimBP

#include "Basic.hpp"

#include "BASE_ElectricalSwitchMinus01_AnimBP_classes.hpp"
#include "BASE_ElectricalSwitchMinus01_AnimBP_parameters.hpp"


namespace SDK
{

// Function BASE_ElectricalSwitch-01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UBASE_ElectricalSwitchMinus01_AnimBP_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BASE_ElectricalSwitch-01_AnimBP_C", "AnimGraph");

	Params::BASE_ElectricalSwitchMinus01_AnimBP_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function BASE_ElectricalSwitch-01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBASE_ElectricalSwitchMinus01_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BASE_ElectricalSwitch-01_AnimBP_C", "BlueprintUpdateAnimation");

	Params::BASE_ElectricalSwitchMinus01_AnimBP_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BASE_ElectricalSwitch-01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UBASE_ElectricalSwitchMinus01_AnimBP_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BASE_ElectricalSwitch-01_AnimBP_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BASE_ElectricalSwitch-01_AnimBP.BASE_ElectricalSwitch-01_AnimBP_C.ExecuteUbergraph_BASE_ElectricalSwitch-01_AnimBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBASE_ElectricalSwitchMinus01_AnimBP_C::ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BASE_ElectricalSwitch-01_AnimBP_C", "ExecuteUbergraph_BASE_ElectricalSwitch-01_AnimBP");

	Params::BASE_ElectricalSwitchMinus01_AnimBP_C_ExecuteUbergraph_BASE_ElectricalSwitchMinus01_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
