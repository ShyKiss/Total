#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBNPC_BP

#include "Basic.hpp"

#include "RBNPC_BP_classes.hpp"
#include "RBNPC_BP_parameters.hpp"


namespace SDK
{

// Function RBNPC_BP.RBNPC_BP_C.OnRep_SubtitleDistanceOccludedOverride
// (BlueprintCallable, BlueprintEvent)

void ARBNPC_BP_C::OnRep_SubtitleDistanceOccludedOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "OnRep_SubtitleDistanceOccludedOverride");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_BP.RBNPC_BP_C.OnRep_SubtitleDistanceOverride
// (BlueprintCallable, BlueprintEvent)

void ARBNPC_BP_C::OnRep_SubtitleDistanceOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "OnRep_SubtitleDistanceOverride");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_BP.RBNPC_BP_C.EnableLODs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARBNPC_BP_C::EnableLODs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "EnableLODs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_BP.RBNPC_BP_C.GetFaceAnimBP
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UEnemyFace_AnimBlueprint_C*       EnemyFaceAnimBP                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARBNPC_BP_C::GetFaceAnimBP(class UEnemyFace_AnimBlueprint_C** EnemyFaceAnimBP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "GetFaceAnimBP");

	Params::RBNPC_BP_C_GetFaceAnimBP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EnemyFaceAnimBP != nullptr)
		*EnemyFaceAnimBP = Parms.EnemyFaceAnimBP;
}


// Function RBNPC_BP.RBNPC_BP_C.SpawnVariatorEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ARBNPC_BP_C::SpawnVariatorEffects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "SpawnVariatorEffects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_BP.RBNPC_BP_C.SetNormalMeshVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARBNPC_BP_C::SetNormalMeshVisibility(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "SetNormalMeshVisibility");

	Params::RBNPC_BP_C_SetNormalMeshVisibility Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RBNPC_BP.RBNPC_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARBNPC_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_BP.RBNPC_BP_C.Event_PlayHitReactionEffects
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                          AttackLoc                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         EffectRotation                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void ARBNPC_BP_C::Event_PlayHitReactionEffects(const struct FVector& AttackLoc, const struct FRotator& EffectRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "Event_PlayHitReactionEffects");

	Params::RBNPC_BP_C_Event_PlayHitReactionEffects Parms{};

	Parms.AttackLoc = std::move(AttackLoc);
	Parms.EffectRotation = std::move(EffectRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RBNPC_BP.RBNPC_BP_C.Event_OnFootstep
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFootstepData                    FootstepData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ARBNPC_BP_C::Event_OnFootstep(const struct FFootstepData& FootstepData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "Event_OnFootstep");

	Params::RBNPC_BP_C_Event_OnFootstep Parms{};

	Parms.FootstepData = std::move(FootstepData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RBNPC_BP.RBNPC_BP_C.Event_OnDealtWeaponDamage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class ARBPawn*                          OtherPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          DamageLocation                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARBNPC_BP_C::Event_OnDealtWeaponDamage(class ARBPawn* OtherPawn, const struct FVector& DamageLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "Event_OnDealtWeaponDamage");

	Params::RBNPC_BP_C_Event_OnDealtWeaponDamage Parms{};

	Parms.OtherPawn = OtherPawn;
	Parms.DamageLocation = std::move(DamageLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RBNPC_BP.RBNPC_BP_C.Event_OnDealtUnarmedDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARBPawn*                          OtherPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             DamageSourceBone                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARBNPC_BP_C::Event_OnDealtUnarmedDamage(class ARBPawn* OtherPawn, class FName DamageSourceBone)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "Event_OnDealtUnarmedDamage");

	Params::RBNPC_BP_C_Event_OnDealtUnarmedDamage Parms{};

	Parms.OtherPawn = OtherPawn;
	Parms.DamageSourceBone = DamageSourceBone;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RBNPC_BP.RBNPC_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARBNPC_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_BP.RBNPC_BP_C.TestFakeBlurHead
// (BlueprintCallable, BlueprintEvent)

void ARBNPC_BP_C::TestFakeBlurHead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "TestFakeBlurHead");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_BP.RBNPC_BP_C.TestFakeBlurComplete
// (BlueprintCallable, BlueprintEvent)

void ARBNPC_BP_C::TestFakeBlurComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "TestFakeBlurComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_BP.RBNPC_BP_C.ExecuteUbergraph_RBNPC_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARBNPC_BP_C::ExecuteUbergraph_RBNPC_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "ExecuteUbergraph_RBNPC_BP");

	Params::RBNPC_BP_C_ExecuteUbergraph_RBNPC_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RBNPC_BP.RBNPC_BP_C.BroadcastWeaponAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequence*                    Sequence                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARBNPC_BP_C::BroadcastWeaponAnimation__DelegateSignature(class UAnimSequence* Sequence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_BP_C", "BroadcastWeaponAnimation__DelegateSignature");

	Params::RBNPC_BP_C_BroadcastWeaponAnimation__DelegateSignature Parms{};

	Parms.Sequence = Sequence;

	UObject::ProcessEvent(Func, &Parms);
}

}
