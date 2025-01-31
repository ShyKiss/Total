#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ControllerMappingEntry

#include "Basic.hpp"

#include "ControllerMappingEntry_classes.hpp"
#include "ControllerMappingEntry_parameters.hpp"


namespace SDK
{

// Function ControllerMappingEntry.ControllerMappingEntry_C.ExecuteUbergraph_ControllerMappingEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UControllerMappingEntry_C::ExecuteUbergraph_ControllerMappingEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerMappingEntry_C", "ExecuteUbergraph_ControllerMappingEntry");

	Params::ControllerMappingEntry_C_ExecuteUbergraph_ControllerMappingEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ControllerMappingEntry.ControllerMappingEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UControllerMappingEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerMappingEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ControllerMappingEntry.ControllerMappingEntry_C.UpdateIcon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       NewIcon                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UControllerMappingEntry_C::UpdateIcon(class UTexture2D* NewIcon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerMappingEntry_C", "UpdateIcon");

	Params::ControllerMappingEntry_C_UpdateIcon Parms{};

	Parms.NewIcon = NewIcon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ControllerMappingEntry.ControllerMappingEntry_C.Event_UpdateDescription
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             NewDescription                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UControllerMappingEntry_C::Event_UpdateDescription(const class FText& NewDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerMappingEntry_C", "Event_UpdateDescription");

	Params::ControllerMappingEntry_C_Event_UpdateDescription Parms{};

	Parms.NewDescription = std::move(NewDescription);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ControllerMappingEntry.ControllerMappingEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UControllerMappingEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ControllerMappingEntry_C", "PreConstruct");

	Params::ControllerMappingEntry_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

