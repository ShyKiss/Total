#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FX_Parent_Triggerable

#include "Basic.hpp"

#include "BP_FX_Parent_Triggerable_classes.hpp"
#include "BP_FX_Parent_Triggerable_parameters.hpp"


namespace SDK
{

// Function BP_FX_Parent_Triggerable.BP_FX_Parent_Triggerable_C.StopSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FX_Parent_Triggerable_C::StopSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FX_Parent_Triggerable_C", "StopSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FX_Parent_Triggerable.BP_FX_Parent_Triggerable_C.PlaySound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FX_Parent_Triggerable_C::PlaySound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FX_Parent_Triggerable_C", "PlaySound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FX_Parent_Triggerable.BP_FX_Parent_Triggerable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FX_Parent_Triggerable_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FX_Parent_Triggerable_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FX_Parent_Triggerable.BP_FX_Parent_Triggerable_C.Event_OnTriggered
// (Event, Public, BlueprintEvent)

void ABP_FX_Parent_Triggerable_C::Event_OnTriggered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FX_Parent_Triggerable_C", "Event_OnTriggered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FX_Parent_Triggerable.BP_FX_Parent_Triggerable_C.Event_OnUntriggered
// (Event, Public, BlueprintEvent)

void ABP_FX_Parent_Triggerable_C::Event_OnUntriggered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FX_Parent_Triggerable_C", "Event_OnUntriggered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FX_Parent_Triggerable.BP_FX_Parent_Triggerable_C.Event_SnapToState
// (Event, Public, BlueprintEvent)

void ABP_FX_Parent_Triggerable_C::Event_SnapToState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FX_Parent_Triggerable_C", "Event_SnapToState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FX_Parent_Triggerable.BP_FX_Parent_Triggerable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FX_Parent_Triggerable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FX_Parent_Triggerable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FX_Parent_Triggerable.BP_FX_Parent_Triggerable_C.ExecuteUbergraph_BP_FX_Parent_Triggerable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FX_Parent_Triggerable_C::ExecuteUbergraph_BP_FX_Parent_Triggerable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FX_Parent_Triggerable_C", "ExecuteUbergraph_BP_FX_Parent_Triggerable");

	Params::BP_FX_Parent_Triggerable_C_ExecuteUbergraph_BP_FX_Parent_Triggerable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

