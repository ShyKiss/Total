#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PerkListTabs

#include "Basic.hpp"

#include "PerkListTabs_classes.hpp"
#include "PerkListTabs_parameters.hpp"


namespace SDK
{

// Function PerkListTabs.PerkListTabs_C.SetSelectedTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPerkCategory                           NewCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkListTabs_C::SetSelectedTab(EPerkCategory NewCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkListTabs_C", "SetSelectedTab");

	Params::PerkListTabs_C_SetSelectedTab Parms{};

	Parms.NewCategory = NewCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkListTabs.PerkListTabs_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkListTabs_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkListTabs_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkListTabs.PerkListTabs_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerkListTabs_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkListTabs_C", "PreConstruct");

	Params::PerkListTabs_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkListTabs.PerkListTabs_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPerkListTabs_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkListTabs_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PerkListTabs.PerkListTabs_C.OnTabButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPerkCategory                           Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkListTabs_C::OnTabButtonClicked(EPerkCategory Category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkListTabs_C", "OnTabButtonClicked");

	Params::PerkListTabs_C_OnTabButtonClicked Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkListTabs.PerkListTabs_C.ExecuteUbergraph_PerkListTabs
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkListTabs_C::ExecuteUbergraph_PerkListTabs(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkListTabs_C", "ExecuteUbergraph_PerkListTabs");

	Params::PerkListTabs_C_ExecuteUbergraph_PerkListTabs Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PerkListTabs.PerkListTabs_C.OnPerkCategoryChangeRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPerkCategory                           NewCategory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerkListTabs_C::OnPerkCategoryChangeRequested__DelegateSignature(EPerkCategory NewCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PerkListTabs_C", "OnPerkCategoryChangeRequested__DelegateSignature");

	Params::PerkListTabs_C_OnPerkCategoryChangeRequested__DelegateSignature Parms{};

	Parms.NewCategory = NewCategory;

	UObject::ProcessEvent(Func, &Parms);
}

}
