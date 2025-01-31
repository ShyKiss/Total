#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Clue_TvChannel_BP

#include "Basic.hpp"

#include "Clue_TvChannel_BP_classes.hpp"
#include "Clue_TvChannel_BP_parameters.hpp"


namespace SDK
{

// Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.GetAssociatedInvestigationComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URBPlayerInvestigationZoneComponent*ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class URBPlayerInvestigationZoneComponent* AClue_TvChannel_BP_C::GetAssociatedInvestigationComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Clue_TvChannel_BP_C", "GetAssociatedInvestigationComponent");

	Params::Clue_TvChannel_BP_C_GetAssociatedInvestigationComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.GetClue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClueData                        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FClueData AClue_TvChannel_BP_C::GetClue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Clue_TvChannel_BP_C", "GetClue");

	Params::Clue_TvChannel_BP_C_GetClue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.GetClueTextFromNameInternal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ClueName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ClueText                                               (Parm, OutParm)

void AClue_TvChannel_BP_C::GetClueTextFromNameInternal(class FName ClueName, class FText* ClueText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Clue_TvChannel_BP_C", "GetClueTextFromNameInternal");

	Params::Clue_TvChannel_BP_C_GetClueTextFromNameInternal Parms{};

	Parms.ClueName = ClueName;

	UObject::ProcessEvent(Func, &Parms);

	if (ClueText != nullptr)
		*ClueText = std::move(Parms.ClueText);
}


// Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.OnRep_MasterInvestigationTV
// (BlueprintCallable, BlueprintEvent)

void AClue_TvChannel_BP_C::OnRep_MasterInvestigationTV()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Clue_TvChannel_BP_C", "OnRep_MasterInvestigationTV");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.UpdateClueText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AClue_TvChannel_BP_C::UpdateClueText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Clue_TvChannel_BP_C", "UpdateClueText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.GetInvestigationZone
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class URBPlayerInvestigationZoneComponent*InvestigationZone                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AClue_TvChannel_BP_C::GetInvestigationZone(class URBPlayerInvestigationZoneComponent** InvestigationZone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Clue_TvChannel_BP_C", "GetInvestigationZone");

	Params::Clue_TvChannel_BP_C_GetInvestigationZone Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (InvestigationZone != nullptr)
		*InvestigationZone = Parms.InvestigationZone;
}


// Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.SetInvestigationZoneEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AClue_TvChannel_BP_C::SetInvestigationZoneEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Clue_TvChannel_BP_C", "SetInvestigationZoneEnabled");

	Params::Clue_TvChannel_BP_C_SetInvestigationZoneEnabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.HasValidClue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AClue_TvChannel_BP_C::HasValidClue(bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Clue_TvChannel_BP_C", "HasValidClue");

	Params::Clue_TvChannel_BP_C_HasValidClue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.HideClue
// (Public, BlueprintCallable, BlueprintEvent)

void AClue_TvChannel_BP_C::HideClue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Clue_TvChannel_BP_C", "HideClue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.ShowClue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AClue_TvChannel_BP_C::ShowClue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Clue_TvChannel_BP_C", "ShowClue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.OnRep_Clue
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AClue_TvChannel_BP_C::OnRep_Clue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Clue_TvChannel_BP_C", "OnRep_Clue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.SetClue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClueData                        ClueData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AClue_TvChannel_BP_C::SetClue(const struct FClueData& ClueData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Clue_TvChannel_BP_C", "SetClue");

	Params::Clue_TvChannel_BP_C_SetClue Parms{};

	Parms.ClueData = std::move(ClueData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.Event_OnResetStage
// (Event, Public, BlueprintEvent)

void AClue_TvChannel_BP_C::Event_OnResetStage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Clue_TvChannel_BP_C", "Event_OnResetStage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.Event_OnLinkedScreenAdded
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARBNarrativeScreen*               LinkedScreen                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AClue_TvChannel_BP_C::Event_OnLinkedScreenAdded(class ARBNarrativeScreen* LinkedScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Clue_TvChannel_BP_C", "Event_OnLinkedScreenAdded");

	Params::Clue_TvChannel_BP_C_Event_OnLinkedScreenAdded Parms{};

	Parms.LinkedScreen = LinkedScreen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Clue_TvChannel_BP.Clue_TvChannel_BP_C.ExecuteUbergraph_Clue_TvChannel_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AClue_TvChannel_BP_C::ExecuteUbergraph_Clue_TvChannel_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Clue_TvChannel_BP_C", "ExecuteUbergraph_Clue_TvChannel_BP");

	Params::Clue_TvChannel_BP_C_ExecuteUbergraph_Clue_TvChannel_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

