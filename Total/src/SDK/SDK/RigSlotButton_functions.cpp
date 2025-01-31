#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RigSlotButton

#include "Basic.hpp"

#include "RigSlotButton_classes.hpp"
#include "RigSlotButton_parameters.hpp"


namespace SDK
{

// Function RigSlotButton.RigSlotButton_C.RefreshNewStatus
// (Public, BlueprintCallable, BlueprintEvent)

void URigSlotButton_C::RefreshNewStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigSlotButton_C", "RefreshNewStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RigSlotButton.RigSlotButton_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void URigSlotButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigSlotButton_C", "OnRemovedFromFocusPath");

	Params::RigSlotButton_C_OnRemovedFromFocusPath Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RigSlotButton.RigSlotButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply URigSlotButton_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigSlotButton_C", "OnFocusReceived");

	Params::RigSlotButton_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RigSlotButton.RigSlotButton_C.ComputeTier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URigSlotButton_C::ComputeTier()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigSlotButton_C", "ComputeTier");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RigSlotButton.RigSlotButton_C.SetHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInHovered                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URigSlotButton_C::SetHovered(bool bInHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigSlotButton_C", "SetHovered");

	Params::RigSlotButton_C_SetHovered Parms{};

	Parms.bInHovered = bInHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RigSlotButton.RigSlotButton_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URigSlotButton_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigSlotButton_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RigSlotButton.RigSlotButton_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void URigSlotButton_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigSlotButton_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RigSlotButton.RigSlotButton_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URigSlotButton_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigSlotButton_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RigSlotButton.RigSlotButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URigSlotButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigSlotButton_C", "PreConstruct");

	Params::RigSlotButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RigSlotButton.RigSlotButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void URigSlotButton_C::BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigSlotButton_C", "BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RigSlotButton.RigSlotButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void URigSlotButton_C::BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigSlotButton_C", "BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RigSlotButton.RigSlotButton_C.BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void URigSlotButton_C::BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigSlotButton_C", "BndEvt__RigButton_InteractionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RigSlotButton.RigSlotButton_C.ExecuteUbergraph_RigSlotButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URigSlotButton_C::ExecuteUbergraph_RigSlotButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigSlotButton_C", "ExecuteUbergraph_RigSlotButton");

	Params::RigSlotButton_C_ExecuteUbergraph_RigSlotButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RigSlotButton.RigSlotButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URigSlotButton_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigSlotButton_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

