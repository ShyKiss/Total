#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TrapDart_BP

#include "Basic.hpp"

#include "TrapDart_BP_classes.hpp"
#include "TrapDart_BP_parameters.hpp"


namespace SDK
{

// Function TrapDart_BP.TrapDart_BP_C.OnRep_bDetached
// (BlueprintCallable, BlueprintEvent)

void ATrapDart_BP_C::OnRep_bDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TrapDart_BP_C", "OnRep_bDetached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TrapDart_BP.TrapDart_BP_C.SimulatePhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bAddImpulse                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrapDart_BP_C::SimulatePhysics(bool bAddImpulse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TrapDart_BP_C", "SimulatePhysics");

	Params::TrapDart_BP_C_SimulatePhysics Parms{};

	Parms.bAddImpulse = bAddImpulse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TrapDart_BP.TrapDart_BP_C.ReachEndOfCable
// (Public, BlueprintCallable, BlueprintEvent)

void ATrapDart_BP_C::ReachEndOfCable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TrapDart_BP_C", "ReachEndOfCable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TrapDart_BP.TrapDart_BP_C.BP_OnLaunchEvent
// (Event, Public, BlueprintEvent)

void ATrapDart_BP_C::BP_OnLaunchEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TrapDart_BP_C", "BP_OnLaunchEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TrapDart_BP.TrapDart_BP_C.Electrify
// (BlueprintCallable, BlueprintEvent)

void ATrapDart_BP_C::Electrify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TrapDart_BP_C", "Electrify");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TrapDart_BP.TrapDart_BP_C.BP_OnHitPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARBPlayer*                        Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrapDart_BP_C::BP_OnHitPlayer(class ARBPlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TrapDart_BP_C", "BP_OnHitPlayer");

	Params::TrapDart_BP_C_BP_OnHitPlayer Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TrapDart_BP.TrapDart_BP_C.BP_OnDetachFromPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARBPlayer*                        Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrapDart_BP_C::BP_OnDetachFromPlayer(class ARBPlayer* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TrapDart_BP_C", "BP_OnDetachFromPlayer");

	Params::TrapDart_BP_C_BP_OnDetachFromPlayer Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TrapDart_BP.TrapDart_BP_C.BP_OnReachedMaxLimitServer
// (Event, Public, BlueprintEvent)

void ATrapDart_BP_C::BP_OnReachedMaxLimitServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TrapDart_BP_C", "BP_OnReachedMaxLimitServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TrapDart_BP.TrapDart_BP_C.BP_OnPlayerDamage
// (Event, Public, BlueprintEvent)

void ATrapDart_BP_C::BP_OnPlayerDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TrapDart_BP_C", "BP_OnPlayerDamage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TrapDart_BP.TrapDart_BP_C.BP_OnPlayerPsychosis
// (Event, Public, BlueprintEvent)

void ATrapDart_BP_C::BP_OnPlayerPsychosis()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TrapDart_BP_C", "BP_OnPlayerPsychosis");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TrapDart_BP.TrapDart_BP_C.BP_OnHitNPC
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARBNPC*                           NPC                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrapDart_BP_C::BP_OnHitNPC(class ARBNPC* NPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TrapDart_BP_C", "BP_OnHitNPC");

	Params::TrapDart_BP_C_BP_OnHitNPC Parms{};

	Parms.NPC = NPC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TrapDart_BP.TrapDart_BP_C.ExecuteUbergraph_TrapDart_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrapDart_BP_C::ExecuteUbergraph_TrapDart_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TrapDart_BP_C", "ExecuteUbergraph_TrapDart_BP");

	Params::TrapDart_BP_C_ExecuteUbergraph_TrapDart_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

