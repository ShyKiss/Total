#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MetalBarMinusDoorLock_BP

#include "Basic.hpp"

#include "MetalBarMinusDoorLock_BP_classes.hpp"
#include "MetalBarMinusDoorLock_BP_parameters.hpp"


namespace SDK
{

// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.SnapBarToPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMetalBarMinusDoorLock_BP_C::SnapBarToPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalBar-DoorLock_BP_C", "SnapBarToPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.GetCurrentAnimSequence
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimSequence*                    AnimSequence                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMetalBarMinusDoorLock_BP_C::GetCurrentAnimSequence(class UAnimSequence** AnimSequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalBar-DoorLock_BP_C", "GetCurrentAnimSequence");

	Params::MetalBarMinusDoorLock_BP_C_GetCurrentAnimSequence Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimSequence != nullptr)
		*AnimSequence = Parms.AnimSequence;
}


// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.GetLockedTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       UnlockedTransform                                      (Parm, OutParm, IsPlainOldData, NoDestructor)

void AMetalBarMinusDoorLock_BP_C::GetLockedTransform(struct FTransform* UnlockedTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalBar-DoorLock_BP_C", "GetLockedTransform");

	Params::MetalBarMinusDoorLock_BP_C_GetLockedTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (UnlockedTransform != nullptr)
		*UnlockedTransform = std::move(Parms.UnlockedTransform);
}


// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.GetUnlockedTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       UnlockedTransform                                      (Parm, OutParm, IsPlainOldData, NoDestructor)

void AMetalBarMinusDoorLock_BP_C::GetUnlockedTransform(struct FTransform* UnlockedTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalBar-DoorLock_BP_C", "GetUnlockedTransform");

	Params::MetalBarMinusDoorLock_BP_C_GetUnlockedTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (UnlockedTransform != nullptr)
		*UnlockedTransform = std::move(Parms.UnlockedTransform);
}


// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_OverrideEditorCompTranform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CompName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bLocked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                       Transform                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)

struct FTransform AMetalBarMinusDoorLock_BP_C::BP_OverrideEditorCompTranform(class FName CompName, bool bLocked, const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalBar-DoorLock_BP_C", "BP_OverrideEditorCompTranform");

	Params::MetalBarMinusDoorLock_BP_C_BP_OverrideEditorCompTranform Parms{};

	Parms.CompName = CompName;
	Parms.bLocked = bLocked;
	Parms.Transform = std::move(Transform);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.OnSetup
// (Public, BlueprintCallable, BlueprintEvent)

void AMetalBarMinusDoorLock_BP_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalBar-DoorLock_BP_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMetalBarMinusDoorLock_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalBar-DoorLock_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_OnInitialization
// (BlueprintEvent)

void AMetalBarMinusDoorLock_BP_C::BP_OnInitialization()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalBar-DoorLock_BP_C", "BP_OnInitialization");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.Event_SnapToState
// (Event, Public, BlueprintEvent)

void AMetalBarMinusDoorLock_BP_C::Event_SnapToState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalBar-DoorLock_BP_C", "Event_SnapToState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMetalBarMinusDoorLock_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalBar-DoorLock_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_ApplyAnimatedTransform
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   CurveValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARBPawn*                          InteractorPawn                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMetalBarMinusDoorLock_BP_C::BP_ApplyAnimatedTransform(float CurveValue, const class ARBPawn* InteractorPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalBar-DoorLock_BP_C", "BP_ApplyAnimatedTransform");

	Params::MetalBarMinusDoorLock_BP_C_BP_ApplyAnimatedTransform Parms{};

	Parms.CurveValue = CurveValue;
	Parms.InteractorPawn = InteractorPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.BP_OnDoorOwnerChanged
// (Event, Public, BlueprintEvent)

void AMetalBarMinusDoorLock_BP_C::BP_OnDoorOwnerChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalBar-DoorLock_BP_C", "BP_OnDoorOwnerChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.Event_OnResetStage
// (Event, Public, BlueprintEvent)

void AMetalBarMinusDoorLock_BP_C::Event_OnResetStage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalBar-DoorLock_BP_C", "Event_OnResetStage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MetalBar-DoorLock_BP.MetalBar-DoorLock_BP_C.ExecuteUbergraph_MetalBar-DoorLock_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMetalBarMinusDoorLock_BP_C::ExecuteUbergraph_MetalBarMinusDoorLock_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MetalBar-DoorLock_BP_C", "ExecuteUbergraph_MetalBar-DoorLock_BP");

	Params::MetalBarMinusDoorLock_BP_C_ExecuteUbergraph_MetalBarMinusDoorLock_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
