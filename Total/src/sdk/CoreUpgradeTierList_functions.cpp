#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CoreUpgradeTierList

#include "Basic.hpp"

#include "CoreUpgradeTierList_classes.hpp"
#include "CoreUpgradeTierList_parameters.hpp"


namespace SDK
{

// Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UCoreUpgradeTierList_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CoreUpgradeTierList_C", "OnFocusReceived");

	Params::CoreUpgradeTierList_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierClickedEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCoreUpgradeTierList_C::OnTierClickedEvent(int32 Tier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CoreUpgradeTierList_C", "OnTierClickedEvent");

	Params::CoreUpgradeTierList_C_OnTierClickedEvent Parms{};

	Parms.Tier = Tier;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierUnhoveredEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCoreUpgradeTierList_C::OnTierUnhoveredEvent(int32 Tier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CoreUpgradeTierList_C", "OnTierUnhoveredEvent");

	Params::CoreUpgradeTierList_C_OnTierUnhoveredEvent Parms{};

	Parms.Tier = Tier;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierHoveredEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCoreUpgradeTierList_C::OnTierHoveredEvent(int32 Tier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CoreUpgradeTierList_C", "OnTierHoveredEvent");

	Params::CoreUpgradeTierList_C_OnTierHoveredEvent Parms{};

	Parms.Tier = Tier;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CoreUpgradeTierList.CoreUpgradeTierList_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCoreUpgradeTierList_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CoreUpgradeTierList_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CoreUpgradeTierList.CoreUpgradeTierList_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsLoadout                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCoreUpgradeTierList_C::Init(bool Param_bIsLoadout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CoreUpgradeTierList_C", "Init");

	Params::CoreUpgradeTierList_C_Init Parms{};

	Parms.Param_bIsLoadout = Param_bIsLoadout;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CoreUpgradeTierList.CoreUpgradeTierList_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCoreUpgradeTierList_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CoreUpgradeTierList_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CoreUpgradeTierList.CoreUpgradeTierList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCoreUpgradeTierList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CoreUpgradeTierList_C", "PreConstruct");

	Params::CoreUpgradeTierList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CoreUpgradeTierList.CoreUpgradeTierList_C.ExecuteUbergraph_CoreUpgradeTierList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCoreUpgradeTierList_C::ExecuteUbergraph_CoreUpgradeTierList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CoreUpgradeTierList_C", "ExecuteUbergraph_CoreUpgradeTierList");

	Params::CoreUpgradeTierList_C_ExecuteUbergraph_CoreUpgradeTierList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCoreUpgradeTierList_C::OnTierClicked__DelegateSignature(int32 Tier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CoreUpgradeTierList_C", "OnTierClicked__DelegateSignature");

	Params::CoreUpgradeTierList_C_OnTierClicked__DelegateSignature Parms{};

	Parms.Tier = Tier;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCoreUpgradeTierList_C::OnTierUnhovered__DelegateSignature(int32 Tier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CoreUpgradeTierList_C", "OnTierUnhovered__DelegateSignature");

	Params::CoreUpgradeTierList_C_OnTierUnhovered__DelegateSignature Parms{};

	Parms.Tier = Tier;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CoreUpgradeTierList.CoreUpgradeTierList_C.OnTierHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCoreUpgradeTierList_C::OnTierHovered__DelegateSignature(int32 Tier)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CoreUpgradeTierList_C", "OnTierHovered__DelegateSignature");

	Params::CoreUpgradeTierList_C_OnTierHovered__DelegateSignature Parms{};

	Parms.Tier = Tier;

	UObject::ProcessEvent(Func, &Parms);
}

}
