#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimedGateLights_BP

#include "Basic.hpp"

#include "TimedGateLights_BP_classes.hpp"
#include "TimedGateLights_BP_parameters.hpp"


namespace SDK
{

// Function TimedGateLights_BP.TimedGateLights_BP_C.ExecuteUbergraph_TimedGateLights_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATimedGateLights_BP_C::ExecuteUbergraph_TimedGateLights_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "ExecuteUbergraph_TimedGateLights_BP");

	Params::TimedGateLights_BP_C_ExecuteUbergraph_TimedGateLights_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.OnHackStateChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URBHackableComponent*             HackableComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATimedGateLights_BP_C::OnHackStateChanged(class URBHackableComponent* HackableComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "OnHackStateChanged");

	Params::TimedGateLights_BP_C_OnHackStateChanged Parms{};

	Parms.HackableComponent = HackableComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.BndEvt__TimedGateLights_BP_DeviceHackZone_K2Node_ComponentBoundEvent_0_OnCurrentHackStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URBHackableComponent*             HackableComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATimedGateLights_BP_C::BndEvt__TimedGateLights_BP_DeviceHackZone_K2Node_ComponentBoundEvent_0_OnCurrentHackStateChanged__DelegateSignature(class URBHackableComponent* HackableComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "BndEvt__TimedGateLights_BP_DeviceHackZone_K2Node_ComponentBoundEvent_0_OnCurrentHackStateChanged__DelegateSignature");

	Params::TimedGateLights_BP_C_BndEvt__TimedGateLights_BP_DeviceHackZone_K2Node_ComponentBoundEvent_0_OnCurrentHackStateChanged__DelegateSignature Parms{};

	Parms.HackableComponent = HackableComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.OnTriggerEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ARBTriggerable*                   Triggerable                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATimedGateLights_BP_C::OnTriggerEvent(bool IsOn, class ARBTriggerable* Triggerable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "OnTriggerEvent");

	Params::TimedGateLights_BP_C_OnTriggerEvent Parms{};

	Parms.IsOn = IsOn;
	Parms.Triggerable = Triggerable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATimedGateLights_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.SetTimedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ETimedOpenClosedGateState               State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATimedGateLights_BP_C::SetTimedState(ETimedOpenClosedGateState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "SetTimedState");

	Params::TimedGateLights_BP_C_SetTimedState Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.SetVariatorEnabled
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATimedGateLights_BP_C::SetVariatorEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "SetVariatorEnabled");

	Params::TimedGateLights_BP_C_SetVariatorEnabled Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.SetLightState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*             MeshComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Green                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Blinking_Red_Green                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Blinking_Red                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Blinking_Green                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATimedGateLights_BP_C::SetLightState(class UStaticMeshComponent* MeshComponent, bool bOn, bool Green, bool Blinking_Red_Green, bool Blinking_Red, bool Blinking_Green)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "SetLightState");

	Params::TimedGateLights_BP_C_SetLightState Parms{};

	Parms.MeshComponent = MeshComponent;
	Parms.bOn = bOn;
	Parms.Green = Green;
	Parms.Blinking_Red_Green = Blinking_Red_Green;
	Parms.Blinking_Red = Blinking_Red;
	Parms.Blinking_Green = Blinking_Green;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.OnRep_LightState
// (BlueprintCallable, BlueprintEvent)

void ATimedGateLights_BP_C::OnRep_LightState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "OnRep_LightState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.PlayAlarmSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    Event                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATimedGateLights_BP_C::PlayAlarmSound(class UAkAudioEvent* Event)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "PlayAlarmSound");

	Params::TimedGateLights_BP_C_PlayAlarmSound Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.RefreshLightState
// (Public, BlueprintCallable, BlueprintEvent)

void ATimedGateLights_BP_C::RefreshLightState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "RefreshLightState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.OnDisabledHackedStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bHacked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATimedGateLights_BP_C::OnDisabledHackedStateChanged(bool bHacked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "OnDisabledHackedStateChanged");

	Params::TimedGateLights_BP_C_OnDisabledHackedStateChanged Parms{};

	Parms.bHacked = bHacked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.RefreshGateHackZoneSizes
// (Public, BlueprintCallable, BlueprintEvent)

void ATimedGateLights_BP_C::RefreshGateHackZoneSizes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "RefreshGateHackZoneSizes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.GetLinkedTriggerable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ARBTriggerable*                   Triggerable                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATimedGateLights_BP_C::GetLinkedTriggerable(class ARBTriggerable** Triggerable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "GetLinkedTriggerable");

	Params::TimedGateLights_BP_C_GetLinkedTriggerable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Triggerable != nullptr)
		*Triggerable = Parms.Triggerable;
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.RefreshHackedVisualState
// (Public, BlueprintCallable, BlueprintEvent)

void ATimedGateLights_BP_C::RefreshHackedVisualState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "RefreshHackedVisualState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.IsConsideredActivelyBeingHacked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Out                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATimedGateLights_BP_C::IsConsideredActivelyBeingHacked(bool* Out)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "IsConsideredActivelyBeingHacked");

	Params::TimedGateLights_BP_C_IsConsideredActivelyBeingHacked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;
}


// Function TimedGateLights_BP.TimedGateLights_BP_C.GetVariatorEnabled
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ATimedGateLights_BP_C::GetVariatorEnabled() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TimedGateLights_BP_C", "GetVariatorEnabled");

	Params::TimedGateLights_BP_C_GetVariatorEnabled Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

