#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DoorBase_BP

#include "Basic.hpp"

#include "DoorBase_BP_classes.hpp"
#include "DoorBase_BP_parameters.hpp"


namespace SDK
{

// Function DoorBase_BP.DoorBase_BP_C.ExecuteUbergraph_DoorBase_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADoorBase_BP_C::ExecuteUbergraph_DoorBase_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "ExecuteUbergraph_DoorBase_BP");

	Params::DoorBase_BP_C_ExecuteUbergraph_DoorBase_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBase_BP.DoorBase_BP_C.OnEditorPostLoad
// (Event, Public, BlueprintEvent)

void ADoorBase_BP_C::OnEditorPostLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "OnEditorPostLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBase_BP.DoorBase_BP_C.PostToggled
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bToggleEnabled                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADoorBase_BP_C::PostToggled(bool bToggleEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "PostToggled");

	Params::DoorBase_BP_C_PostToggled Parms{};

	Parms.bToggleEnabled = bToggleEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBase_BP.DoorBase_BP_C.Event_SnapToState
// (Event, Public, BlueprintEvent)

void ADoorBase_BP_C::Event_SnapToState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "Event_SnapToState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorTrapDisarmed
// (Event, Public, BlueprintEvent)

void ADoorBase_BP_C::BP_OnDoorTrapDisarmed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "BP_OnDoorTrapDisarmed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorTrapActivated
// (Event, Public, BlueprintEvent)

void ADoorBase_BP_C::BP_OnDoorTrapActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "BP_OnDoorTrapActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBase_BP.DoorBase_BP_C.Event_OnResetStage
// (Event, Public, BlueprintEvent)

void ADoorBase_BP_C::Event_OnResetStage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "Event_OnResetStage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorTrappedStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bTrapped                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bFromFront                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADoorBase_BP_C::BP_OnDoorTrappedStateChanged(bool bTrapped, bool bFromFront)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "BP_OnDoorTrappedStateChanged");

	Params::DoorBase_BP_C_BP_OnDoorTrappedStateChanged Parms{};

	Parms.bTrapped = bTrapped;
	Parms.bFromFront = bFromFront;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBase_BP.DoorBase_BP_C.BP_OnActorAttachedToDoor
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADoorBase_BP_C::BP_OnActorAttachedToDoor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "BP_OnActorAttachedToDoor");

	Params::DoorBase_BP_C_BP_OnActorAttachedToDoor Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBase_BP.DoorBase_BP_C.Event_PostRegisterAllComponents
// (Event, Public, BlueprintEvent)

void ADoorBase_BP_C::Event_PostRegisterAllComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "Event_PostRegisterAllComponents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorUnhingeEvent
// (BlueprintEvent)
// Parameters:
// class ARBPawn*                          Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADoorBase_BP_C::BP_OnDoorUnhingeEvent(class ARBPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "BP_OnDoorUnhingeEvent");

	Params::DoorBase_BP_C_BP_OnDoorUnhingeEvent Parms{};

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorBarsLockingEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bLocking                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADoorBase_BP_C::BP_OnDoorBarsLockingEvent(bool bLocking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "BP_OnDoorBarsLockingEvent");

	Params::DoorBase_BP_C_BP_OnDoorBarsLockingEvent Parms{};

	Parms.bLocking = bLocking;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBase_BP.DoorBase_BP_C.BP_OnDoorBashEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARBPawn*                          Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bApplyVisualDoorDamage                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EBashDoorType                           bashType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADoorBase_BP_C::BP_OnDoorBashEvent(class ARBPawn* Pawn, bool bSuccess, bool bApplyVisualDoorDamage, EBashDoorType bashType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "BP_OnDoorBashEvent");

	Params::DoorBase_BP_C_BP_OnDoorBashEvent Parms{};

	Parms.Pawn = Pawn;
	Parms.bSuccess = bSuccess;
	Parms.bApplyVisualDoorDamage = bApplyVisualDoorDamage;
	Parms.bashType = bashType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBase_BP.DoorBase_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADoorBase_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBase_BP.DoorBase_BP_C.DisableDestructibleDoorCollision
// (Public, BlueprintCallable, BlueprintEvent)

void ADoorBase_BP_C::DisableDestructibleDoorCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "DisableDestructibleDoorCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBase_BP.DoorBase_BP_C.SetLockBarsVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADoorBase_BP_C::SetLockBarsVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "SetLockBarsVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBase_BP.DoorBase_BP_C.InitializeSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADoorBase_BP_C::InitializeSettings(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "InitializeSettings");

	Params::DoorBase_BP_C_InitializeSettings Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBase_BP.DoorBase_BP_C.GetRandomTrapIndicator
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TellIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                      Mesh                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                       RelativeTransform                                      (Parm, OutParm, IsPlainOldData, NoDestructor)

void ADoorBase_BP_C::GetRandomTrapIndicator(int32* TellIndex, class UStaticMesh** Mesh, struct FTransform* RelativeTransform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "GetRandomTrapIndicator");

	Params::DoorBase_BP_C_GetRandomTrapIndicator Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TellIndex != nullptr)
		*TellIndex = Parms.TellIndex;

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

	if (RelativeTransform != nullptr)
		*RelativeTransform = std::move(Parms.RelativeTransform);
}


// Function DoorBase_BP.DoorBase_BP_C.TryAddNewTrapTell
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFromFront                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADoorBase_BP_C::TryAddNewTrapTell(bool bFromFront)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "TryAddNewTrapTell");

	Params::DoorBase_BP_C_TryAddNewTrapTell Parms{};

	Parms.bFromFront = bFromFront;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBase_BP.DoorBase_BP_C.ClearAllTrapTells
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADoorBase_BP_C::ClearAllTrapTells()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "ClearAllTrapTells");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBase_BP.DoorBase_BP_C.GetTrapTellMaxIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   TrapTellMaxIndex                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADoorBase_BP_C::GetTrapTellMaxIndex(int32* TrapTellMaxIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "GetTrapTellMaxIndex");

	Params::DoorBase_BP_C_GetTrapTellMaxIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TrapTellMaxIndex != nullptr)
		*TrapTellMaxIndex = Parms.TrapTellMaxIndex;
}


// Function DoorBase_BP.DoorBase_BP_C.ApplyDoorCollisionTypeToDoor
// (Public, BlueprintCallable, BlueprintEvent)

void ADoorBase_BP_C::ApplyDoorCollisionTypeToDoor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "ApplyDoorCollisionTypeToDoor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBase_BP.DoorBase_BP_C.HasDestructibleDoor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADoorBase_BP_C::HasDestructibleDoor(bool* NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "HasDestructibleDoor");

	Params::DoorBase_BP_C_HasDestructibleDoor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function DoorBase_BP.DoorBase_BP_C.AddWindowCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  AttachBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADoorBase_BP_C::AddWindowCollision(class AActor* Actor, class USceneComponent* AttachBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "AddWindowCollision");

	Params::DoorBase_BP_C_AddWindowCollision Parms{};

	Parms.Actor = Actor;
	Parms.AttachBase = AttachBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBase_BP.DoorBase_BP_C.UpdatePostLoadDoorLightingSettings
// (Public, BlueprintCallable, BlueprintEvent)

void ADoorBase_BP_C::UpdatePostLoadDoorLightingSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "UpdatePostLoadDoorLightingSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBase_BP.DoorBase_BP_C.ApplyDoorLightingSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADoorBase_BP_C::ApplyDoorLightingSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "ApplyDoorLightingSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBase_BP.DoorBase_BP_C.UpdateCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bToggledOn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADoorBase_BP_C::UpdateCollision(bool bToggledOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "UpdateCollision");

	Params::DoorBase_BP_C_UpdateCollision Parms{};

	Parms.bToggledOn = bToggledOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBase_BP.DoorBase_BP_C.AllowDecals
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAllowDecals                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADoorBase_BP_C::AllowDecals(class UPrimitiveComponent* Component, bool* bAllowDecals)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "AllowDecals");

	Params::DoorBase_BP_C_AllowDecals Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);

	if (bAllowDecals != nullptr)
		*bAllowDecals = Parms.bAllowDecals;
}


// Function DoorBase_BP.DoorBase_BP_C.ApplyColorOverrides
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bConstScript                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADoorBase_BP_C::ApplyColorOverrides(bool bConstScript)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "ApplyColorOverrides");

	Params::DoorBase_BP_C_ApplyColorOverrides Parms{};

	Parms.bConstScript = bConstScript;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBase_BP.DoorBase_BP_C.FixUp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ADoorBase_BP_C::FixUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "FixUp");

	Params::DoorBase_BP_C_FixUp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function DoorBase_BP.DoorBase_BP_C.OnRep_bTrapIsConverted
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ADoorBase_BP_C::OnRep_bTrapIsConverted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "OnRep_bTrapIsConverted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DoorBase_BP.DoorBase_BP_C.SetTrapIsConverted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bConverted                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADoorBase_BP_C::SetTrapIsConverted(bool bConverted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "SetTrapIsConverted");

	Params::DoorBase_BP_C_SetTrapIsConverted Parms{};

	Parms.bConverted = bConverted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBase_BP.DoorBase_BP_C.OnHackStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHackState                              State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADoorBase_BP_C::OnHackStateChanged(EHackState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "OnHackStateChanged");

	Params::DoorBase_BP_C_OnHackStateChanged Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DoorBase_BP.DoorBase_BP_C.GetFriendlyDeviceIconLocation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          Out_location                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ADoorBase_BP_C::GetFriendlyDeviceIconLocation(struct FVector* Out_location) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DoorBase_BP_C", "GetFriendlyDeviceIconLocation");

	Params::DoorBase_BP_C_GetFriendlyDeviceIconLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Out_location != nullptr)
		*Out_location = std::move(Parms.Out_location);

	return Parms.ReturnValue;
}

}

