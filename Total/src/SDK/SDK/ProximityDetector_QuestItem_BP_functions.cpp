#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProximityDetector_QuestItem_BP

#include "Basic.hpp"

#include "ProximityDetector_QuestItem_BP_classes.hpp"
#include "ProximityDetector_QuestItem_BP_parameters.hpp"


namespace SDK
{

// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.GetStateName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           StateA                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           StateB                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AProximityDetector_QuestItem_BP_C::GetStateName(class FString* StateA, class FString* StateB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "GetStateName");

	Params::ProximityDetector_QuestItem_BP_C_GetStateName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StateA != nullptr)
		*StateA = std::move(Parms.StateA);

	if (StateB != nullptr)
		*StateB = std::move(Parms.StateB);

	return Parms.ReturnValue;
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.CheckForProximityChange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSomethingChanged                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProximityDetector_QuestItem_BP_C::CheckForProximityChange(bool* bSomethingChanged)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "CheckForProximityChange");

	Params::ProximityDetector_QuestItem_BP_C_CheckForProximityChange Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSomethingChanged != nullptr)
		*bSomethingChanged = Parms.bSomethingChanged;
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.ShouldFogLightBeVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                                   LIghtLevel                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AProximityDetector_QuestItem_BP_C::ShouldFogLightBeVisible(int32* LIghtLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "ShouldFogLightBeVisible");

	Params::ProximityDetector_QuestItem_BP_C_ShouldFogLightBeVisible Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LIghtLevel != nullptr)
		*LIghtLevel = Parms.LIghtLevel;

	return Parms.ReturnValue;
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.RefreshFogLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProximityDetector_QuestItem_BP_C::RefreshFogLight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "RefreshFogLight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.StartAudioLoop
// (Public, BlueprintCallable, BlueprintEvent)

void AProximityDetector_QuestItem_BP_C::StartAudioLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "StartAudioLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.StopAudioLoop
// (Public, BlueprintCallable, BlueprintEvent)

void AProximityDetector_QuestItem_BP_C::StopAudioLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "StopAudioLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.RefreshAudioState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bAllowAudio                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProximityDetector_QuestItem_BP_C::RefreshAudioState(bool bAllowAudio)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "RefreshAudioState");

	Params::ProximityDetector_QuestItem_BP_C_RefreshAudioState Parms{};

	Parms.bAllowAudio = bAllowAudio;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProximityDetector_QuestItem_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.PrepareState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bStateA                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           RandomOwner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProximityDetector_QuestItem_BP_C::PrepareState(bool bStateA, class AActor* RandomOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "PrepareState");

	Params::ProximityDetector_QuestItem_BP_C_PrepareState Parms{};

	Parms.bStateA = bStateA;
	Parms.RandomOwner = RandomOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.SetShouldBeIgnoredForLots
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProximityDetector_QuestItem_BP_C::SetShouldBeIgnoredForLots(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "SetShouldBeIgnoredForLots");

	Params::ProximityDetector_QuestItem_BP_C_SetShouldBeIgnoredForLots Parms{};

	Parms.bValue = bValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.SetState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bStateA                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProximityDetector_QuestItem_BP_C::SetState(bool bStateA)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "SetState");

	Params::ProximityDetector_QuestItem_BP_C_SetState Parms{};

	Parms.bStateA = bStateA;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.BP_OnProximityLevelChanged
// (Event, Protected, BlueprintEvent)

void AProximityDetector_QuestItem_BP_C::BP_OnProximityLevelChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "BP_OnProximityLevelChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.BP_OnEquipped
// (Event, Protected, BlueprintEvent)

void AProximityDetector_QuestItem_BP_C::BP_OnEquipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "BP_OnEquipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.BP_OnUnequipped
// (Event, Protected, BlueprintEvent)

void AProximityDetector_QuestItem_BP_C::BP_OnUnequipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "BP_OnUnequipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.ExecuteUbergraph_ProximityDetector_QuestItem_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProximityDetector_QuestItem_BP_C::ExecuteUbergraph_ProximityDetector_QuestItem_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "ExecuteUbergraph_ProximityDetector_QuestItem_BP");

	Params::ProximityDetector_QuestItem_BP_C_ExecuteUbergraph_ProximityDetector_QuestItem_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.IsRandomStateSet
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AProximityDetector_QuestItem_BP_C::IsRandomStateSet() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "IsRandomStateSet");

	Params::ProximityDetector_QuestItem_BP_C_IsRandomStateSet Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.IsStateA
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AProximityDetector_QuestItem_BP_C::IsStateA() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "IsStateA");

	Params::ProximityDetector_QuestItem_BP_C_IsStateA Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ProximityDetector_QuestItem_BP.ProximityDetector_QuestItem_BP_C.ShouldBeIgnoredForLots
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AProximityDetector_QuestItem_BP_C::ShouldBeIgnoredForLots() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProximityDetector_QuestItem_BP_C", "ShouldBeIgnoredForLots");

	Params::ProximityDetector_QuestItem_BP_C_ShouldBeIgnoredForLots Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

