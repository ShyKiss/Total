#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUDTutorial

#include "Basic.hpp"

#include "HUDTutorial_classes.hpp"
#include "HUDTutorial_parameters.hpp"


namespace SDK
{

// Function HUDTutorial.HUDTutorial_C.ExecuteUbergraph_HUDTutorial
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDTutorial_C::ExecuteUbergraph_HUDTutorial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDTutorial_C", "ExecuteUbergraph_HUDTutorial");

	Params::HUDTutorial_C_ExecuteUbergraph_HUDTutorial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDTutorial.HUDTutorial_C.Event_Hide
// (Event, Public, BlueprintEvent)

void UHUDTutorial_C::Event_Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDTutorial_C", "Event_Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDTutorial.HUDTutorial_C.Event_Show
// (Event, Public, BlueprintEvent)

void UHUDTutorial_C::Event_Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDTutorial_C", "Event_Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDTutorial.HUDTutorial_C.OnHideHUDTutorial_Event_0
// (BlueprintCallable, BlueprintEvent)

void UHUDTutorial_C::OnHideHUDTutorial_Event_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDTutorial_C", "OnHideHUDTutorial_Event_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDTutorial.HUDTutorial_C.OnShowHUDTutorial_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDTutorialTextData             TutorialData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUDTutorial_C::OnShowHUDTutorial_Event_0(const struct FHUDTutorialTextData& TutorialData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDTutorial_C", "OnShowHUDTutorial_Event_0");

	Params::HUDTutorial_C_OnShowHUDTutorial_Event_0 Parms{};

	Parms.TutorialData = std::move(TutorialData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function HUDTutorial.HUDTutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUDTutorial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDTutorial_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HUDTutorial.HUDTutorial_C.ShouldShow
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UHUDTutorial_C::ShouldShow() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HUDTutorial_C", "ShouldShow");

	Params::HUDTutorial_C_ShouldShow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
