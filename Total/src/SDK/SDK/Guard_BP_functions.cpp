#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Guard_BP

#include "Basic.hpp"

#include "Guard_BP_classes.hpp"
#include "Guard_BP_parameters.hpp"


namespace SDK
{

// Function Guard_BP.Guard_BP_C.GetFacePoseAsset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPoseAsset*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPoseAsset* AGuard_BP_C::GetFacePoseAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Guard_BP_C", "GetFacePoseAsset");

	Params::Guard_BP_C_GetFacePoseAsset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Guard_BP.Guard_BP_C.BuildAppearance
// (Public, BlueprintCallable, BlueprintEvent)

void AGuard_BP_C::BuildAppearance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Guard_BP_C", "BuildAppearance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Guard_BP.Guard_BP_C.ChooseVoiceAndLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGuard_BP_C::ChooseVoiceAndLine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Guard_BP_C", "ChooseVoiceAndLine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Guard_BP.Guard_BP_C.PlayProximityVO
// (Public, BlueprintCallable, BlueprintEvent)

void AGuard_BP_C::PlayProximityVO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Guard_BP_C", "PlayProximityVO");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Guard_BP.Guard_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGuard_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Guard_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Guard_BP.Guard_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGuard_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Guard_BP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Guard_BP.Guard_BP_C.Event_OnResetStage
// (Event, Public, BlueprintEvent)

void AGuard_BP_C::Event_OnResetStage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Guard_BP_C", "Event_OnResetStage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Guard_BP.Guard_BP_C.BndEvt__Guard_BP_VoCollisionSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AGuard_BP_C::BndEvt__Guard_BP_VoCollisionSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Guard_BP_C", "BndEvt__Guard_BP_VoCollisionSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Guard_BP_C_BndEvt__Guard_BP_VoCollisionSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Guard_BP.Guard_BP_C.BndEvt__Guard_BP_VoCollisionSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGuard_BP_C::BndEvt__Guard_BP_VoCollisionSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Guard_BP_C", "BndEvt__Guard_BP_VoCollisionSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	Params::Guard_BP_C_BndEvt__Guard_BP_VoCollisionSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Guard_BP.Guard_BP_C.ExecuteUbergraph_Guard_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGuard_BP_C::ExecuteUbergraph_Guard_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Guard_BP_C", "ExecuteUbergraph_Guard_BP");

	Params::Guard_BP_C_ExecuteUbergraph_Guard_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

