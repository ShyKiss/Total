#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputBindingsMenu

#include "Basic.hpp"

#include "InputBindingsMenu_classes.hpp"
#include "InputBindingsMenu_parameters.hpp"


namespace SDK
{

// Function InputBindingsMenu.InputBindingsMenu_C.ExecuteUbergraph_InputBindingsMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputBindingsMenu_C::ExecuteUbergraph_InputBindingsMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputBindingsMenu_C", "ExecuteUbergraph_InputBindingsMenu");

	Params::InputBindingsMenu_C_ExecuteUbergraph_InputBindingsMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputBindingsMenu.InputBindingsMenu_C.Event_DuplicateBindingFound
// (Event, Public, BlueprintEvent)
// Parameters:
// class URBMenuControlBindingEntry*       DuplicateEntry                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputBindingsMenu_C::Event_DuplicateBindingFound(class URBMenuControlBindingEntry* DuplicateEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputBindingsMenu_C", "Event_DuplicateBindingFound");

	Params::InputBindingsMenu_C_Event_DuplicateBindingFound Parms{};

	Parms.DuplicateEntry = DuplicateEntry;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputBindingsMenu.InputBindingsMenu_C.Event_UpdateRebindStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsRebindInProgress                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInputBindingsMenu_C::Event_UpdateRebindStatus(bool IsRebindInProgress)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputBindingsMenu_C", "Event_UpdateRebindStatus");

	Params::InputBindingsMenu_C_Event_UpdateRebindStatus Parms{};

	Parms.IsRebindInProgress = IsRebindInProgress;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputBindingsMenu.InputBindingsMenu_C.OnResetKeyPressed
// (BlueprintCallable, BlueprintEvent)

void UInputBindingsMenu_C::OnResetKeyPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputBindingsMenu_C", "OnResetKeyPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InputBindingsMenu.InputBindingsMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInputBindingsMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputBindingsMenu_C", "PreConstruct");

	Params::InputBindingsMenu_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputBindingsMenu.InputBindingsMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInputBindingsMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputBindingsMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InputBindingsMenu.InputBindingsMenu_C.BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URBMenuButton_C*                  Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputBindingsMenu_C::BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputBindingsMenu_C", "BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::InputBindingsMenu_C_BndEvt__ResetDefaultsBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputBindingsMenu.InputBindingsMenu_C.BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class URBMenuButton_C*                  Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputBindingsMenu_C::BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class URBMenuButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputBindingsMenu_C", "BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Params::InputBindingsMenu_C_BndEvt__ExitBtn_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InputBindingsMenu.InputBindingsMenu_C.RefreshDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UInputBindingsMenu_C::RefreshDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputBindingsMenu_C", "RefreshDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InputBindingsMenu.InputBindingsMenu_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInputBindingsMenu_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputBindingsMenu_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InputBindingsMenu.InputBindingsMenu_C.UpdateNavigationButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInputBindingsMenu_C::UpdateNavigationButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InputBindingsMenu_C", "UpdateNavigationButtons");

	UObject::ProcessEvent(Func, nullptr);
}

}
