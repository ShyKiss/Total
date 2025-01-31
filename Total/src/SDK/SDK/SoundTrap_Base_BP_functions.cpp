#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoundTrap_Base_BP

#include "Basic.hpp"

#include "SoundTrap_Base_BP_classes.hpp"
#include "SoundTrap_Base_BP_parameters.hpp"


namespace SDK
{

// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.GetStateName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           StateA                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           StateB                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundTrap_Base_BP_C::GetStateName(class FString* StateA, class FString* StateB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "GetStateName");

	Params::SoundTrap_Base_BP_C_GetStateName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StateA != nullptr)
		*StateA = std::move(Parms.StateA);

	if (StateB != nullptr)
		*StateB = std::move(Parms.StateB);

	return Parms.ReturnValue;
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ConstructionClearanceBoxSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASoundTrap_Base_BP_C::ConstructionClearanceBoxSize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "ConstructionClearanceBoxSize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SnapToCeiling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASoundTrap_Base_BP_C::SnapToCeiling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "SnapToCeiling");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SnapToFloor
// (Public, BlueprintCallable, BlueprintEvent)

void ASoundTrap_Base_BP_C::SnapToFloor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "SnapToFloor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SnapToGround_Internal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   GroundOffset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxRandom                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundTrap_Base_BP_C::SnapToGround_Internal(float GroundOffset, float MaxRandom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "SnapToGround_Internal");

	Params::SoundTrap_Base_BP_C_SnapToGround_Internal Parms{};

	Parms.GroundOffset = GroundOffset;
	Parms.MaxRandom = MaxRandom;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SnapToCrouch
// (Public, BlueprintCallable, BlueprintEvent)

void ASoundTrap_Base_BP_C::SnapToCrouch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "SnapToCrouch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.Editor_RopeOverlap
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOverlaps                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           OutOverlaps                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void ASoundTrap_Base_BP_C::Editor_RopeOverlap(bool* bOverlaps, class FString* OutOverlaps)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "Editor_RopeOverlap");

	Params::SoundTrap_Base_BP_C_Editor_RopeOverlap Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bOverlaps != nullptr)
		*bOverlaps = Parms.bOverlaps;

	if (OutOverlaps != nullptr)
		*OutOverlaps = std::move(Parms.OutOverlaps);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BP_MapCheck
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMapCheckType                           CheckType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutErrorMsg                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundTrap_Base_BP_C::BP_MapCheck(EMapCheckType CheckType, class FString* OutErrorMsg)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "BP_MapCheck");

	Params::SoundTrap_Base_BP_C_BP_MapCheck Parms{};

	Parms.CheckType = CheckType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutErrorMsg != nullptr)
		*OutErrorMsg = std::move(Parms.OutErrorMsg);

	return Parms.ReturnValue;
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetAnchor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASoundTrap_Base_BP_C::SetAnchor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "SetAnchor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.EnableRopePhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EnablePhysics                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundTrap_Base_BP_C::EnableRopePhysics(bool EnablePhysics)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "EnableRopePhysics");

	Params::SoundTrap_Base_BP_C_EnableRopePhysics Parms{};

	Parms.EnablePhysics = EnablePhysics;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ResetRopeToInitial
// (Public, BlueprintCallable, BlueprintEvent)

void ASoundTrap_Base_BP_C::ResetRopeToInitial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "ResetRopeToInitial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASoundTrap_Base_BP_C::SetScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "SetScale");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetGizmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASoundTrap_Base_BP_C::SetGizmo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "SetGizmo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ConstructSound
// (Public, BlueprintCallable, BlueprintEvent)

void ASoundTrap_Base_BP_C::ConstructSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "ConstructSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void ASoundTrap_Base_BP_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.OnBumped
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASoundTrap_Base_BP_C::OnBumped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "OnBumped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.OnRep_bBumped
// (BlueprintCallable, BlueprintEvent)

void ASoundTrap_Base_BP_C::OnRep_bBumped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "OnRep_bBumped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASoundTrap_Base_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.PrepareState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bStateA                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           RandomOwner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundTrap_Base_BP_C::PrepareState(bool bStateA, class AActor* RandomOwner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "PrepareState");

	Params::SoundTrap_Base_BP_C_PrepareState Parms{};

	Parms.bStateA = bStateA;
	Parms.RandomOwner = RandomOwner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bStateA                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundTrap_Base_BP_C::SetState(bool bStateA)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "SetState");

	Params::SoundTrap_Base_BP_C_SetState Parms{};

	Parms.bStateA = bStateA;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASoundTrap_Base_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BndEvt__RBRandomizableHelper_K2Node_ComponentBoundEvent_3_OnRandomStateChangedEvent__DelegateSignature
// (BlueprintEvent)

void ASoundTrap_Base_BP_C::BndEvt__RBRandomizableHelper_K2Node_ComponentBoundEvent_3_OnRandomStateChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "BndEvt__RBRandomizableHelper_K2Node_ComponentBoundEvent_3_OnRandomStateChangedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.Server_SoundTrapActivated
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASoundTrap_Base_BP_C::Server_SoundTrapActivated(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "Server_SoundTrapActivated");

	Params::SoundTrap_Base_BP_C_Server_SoundTrapActivated Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundTrap_Base_BP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "ReceiveTick");

	Params::SoundTrap_Base_BP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.SetShouldBeIgnoredForLots
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASoundTrap_Base_BP_C::SetShouldBeIgnoredForLots(bool bValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "SetShouldBeIgnoredForLots");

	Params::SoundTrap_Base_BP_C_SetShouldBeIgnoredForLots Parms{};

	Parms.bValue = bValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BP_OnHitByThrowable
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARBThrowableWeapon*               ThrowableWeapon                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundTrap_Base_BP_C::BP_OnHitByThrowable(const struct FVector& HitLocation, class ARBThrowableWeapon* ThrowableWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "BP_OnHitByThrowable");

	Params::SoundTrap_Base_BP_C_BP_OnHitByThrowable Parms{};

	Parms.HitLocation = std::move(HitLocation);
	Parms.ThrowableWeapon = ThrowableWeapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ProjectileHitSoundMulticast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SwitchName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ASoundTrap_Base_BP_C::ProjectileHitSoundMulticast(const class FString& SwitchName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "ProjectileHitSoundMulticast");

	Params::SoundTrap_Base_BP_C_ProjectileHitSoundMulticast Parms{};

	Parms.SwitchName = std::move(SwitchName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ExecuteUbergraph_SoundTrap_Base_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASoundTrap_Base_BP_C::ExecuteUbergraph_SoundTrap_Base_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "ExecuteUbergraph_SoundTrap_Base_BP");

	Params::SoundTrap_Base_BP_C_ExecuteUbergraph_SoundTrap_Base_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.IsRandomStateSet
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundTrap_Base_BP_C::IsRandomStateSet() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "IsRandomStateSet");

	Params::SoundTrap_Base_BP_C_IsRandomStateSet Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.IsStateA
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundTrap_Base_BP_C::IsStateA() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "IsStateA");

	Params::SoundTrap_Base_BP_C_IsStateA Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.ShouldBeIgnoredForLots
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASoundTrap_Base_BP_C::ShouldBeIgnoredForLots() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "ShouldBeIgnoredForLots");

	Params::SoundTrap_Base_BP_C_ShouldBeIgnoredForLots Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SoundTrap_Base_BP.SoundTrap_Base_BP_C.BP_GetCollisionCapsule
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UCapsuleComponent*                ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCapsuleComponent* ASoundTrap_Base_BP_C::BP_GetCollisionCapsule() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SoundTrap_Base_BP_C", "BP_GetCollisionCapsule");

	Params::SoundTrap_Base_BP_C_BP_GetCollisionCapsule Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

