#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RigList

#include "Basic.hpp"

#include "RigList_classes.hpp"
#include "RigList_parameters.hpp"


namespace SDK
{

// Function RigList.RigList_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply URigList_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigList_C", "OnFocusReceived");

	Params::RigList_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RigList.RigList_C.OnRigReleasedEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EActiveSkillType                        ActiveSkillType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URigList_C::OnRigReleasedEvent(class FName ItemId, EActiveSkillType ActiveSkillType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigList_C", "OnRigReleasedEvent");

	Params::RigList_C_OnRigReleasedEvent Parms{};

	Parms.ItemId = ItemId;
	Parms.ActiveSkillType = ActiveSkillType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RigList.RigList_C.OnRigPressedEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EActiveSkillType                        ActiveSkillType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URigList_C::OnRigPressedEvent(class FName ItemId, EActiveSkillType ActiveSkillType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigList_C", "OnRigPressedEvent");

	Params::RigList_C_OnRigPressedEvent Parms{};

	Parms.ItemId = ItemId;
	Parms.ActiveSkillType = ActiveSkillType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RigList.RigList_C.OnRigClickedEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EActiveSkillType                        ActiveSkillType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URigList_C::OnRigClickedEvent(class FName ItemId, EActiveSkillType ActiveSkillType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigList_C", "OnRigClickedEvent");

	Params::RigList_C_OnRigClickedEvent Parms{};

	Parms.ItemId = ItemId;
	Parms.ActiveSkillType = ActiveSkillType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RigList.RigList_C.OnRigUnhoveredEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EActiveSkillType                        ActiveSkillType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URigList_C::OnRigUnhoveredEvent(class FName ItemId, EActiveSkillType ActiveSkillType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigList_C", "OnRigUnhoveredEvent");

	Params::RigList_C_OnRigUnhoveredEvent Parms{};

	Parms.ItemId = ItemId;
	Parms.ActiveSkillType = ActiveSkillType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RigList.RigList_C.OnRigHoveredEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EActiveSkillType                        ActiveSkillType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URigList_C::OnRigHoveredEvent(class FName ItemId, EActiveSkillType ActiveSkillType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigList_C", "OnRigHoveredEvent");

	Params::RigList_C_OnRigHoveredEvent Parms{};

	Parms.ItemId = ItemId;
	Parms.ActiveSkillType = ActiveSkillType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RigList.RigList_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URigList_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigList_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RigList.RigList_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsLoadout                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URigList_C::Init(bool Param_bIsLoadout)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigList_C", "Init");

	Params::RigList_C_Init Parms{};

	Parms.Param_bIsLoadout = Param_bIsLoadout;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RigList.RigList_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URigList_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigList_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RigList.RigList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URigList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigList_C", "PreConstruct");

	Params::RigList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RigList.RigList_C.ExecuteUbergraph_RigList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URigList_C::ExecuteUbergraph_RigList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigList_C", "ExecuteUbergraph_RigList");

	Params::RigList_C_ExecuteUbergraph_RigList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RigList.RigList_C.OnRigClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EActiveSkillType                        ActiveSkillType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URigList_C::OnRigClicked__DelegateSignature(class FName ItemId, EActiveSkillType ActiveSkillType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigList_C", "OnRigClicked__DelegateSignature");

	Params::RigList_C_OnRigClicked__DelegateSignature Parms{};

	Parms.ItemId = ItemId;
	Parms.ActiveSkillType = ActiveSkillType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RigList.RigList_C.OnRigUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EActiveSkillType                        ActiveSkillType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URigList_C::OnRigUnhovered__DelegateSignature(class FName ItemId, EActiveSkillType ActiveSkillType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigList_C", "OnRigUnhovered__DelegateSignature");

	Params::RigList_C_OnRigUnhovered__DelegateSignature Parms{};

	Parms.ItemId = ItemId;
	Parms.ActiveSkillType = ActiveSkillType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RigList.RigList_C.OnRigHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EActiveSkillType                        ActiveSkillType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URigList_C::OnRigHovered__DelegateSignature(class FName ItemId, EActiveSkillType ActiveSkillType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RigList_C", "OnRigHovered__DelegateSignature");

	Params::RigList_C_OnRigHovered__DelegateSignature Parms{};

	Parms.ItemId = ItemId;
	Parms.ActiveSkillType = ActiveSkillType;

	UObject::ProcessEvent(Func, &Parms);
}

}
