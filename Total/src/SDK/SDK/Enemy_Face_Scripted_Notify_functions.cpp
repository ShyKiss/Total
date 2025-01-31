#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Enemy_Face_Scripted_Notify

#include "Basic.hpp"

#include "Enemy_Face_Scripted_Notify_classes.hpp"
#include "Enemy_Face_Scripted_Notify_parameters.hpp"


namespace SDK
{

// Function Enemy_Face_Scripted_Notify.Enemy_Face_Scripted_Notify_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UEnemy_Face_Scripted_Notify_C::GetNotifyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Enemy_Face_Scripted_Notify_C", "GetNotifyName");

	Params::Enemy_Face_Scripted_Notify_C_GetNotifyName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Enemy_Face_Scripted_Notify.Enemy_Face_Scripted_Notify_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEnemy_Face_Scripted_Notify_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Enemy_Face_Scripted_Notify_C", "Received_Notify");

	Params::Enemy_Face_Scripted_Notify_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Enemy_Face_Scripted_Notify.Enemy_Face_Scripted_Notify_C.FacialAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           Mesh_Comp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEnemy_Face_Scripted_Notify_C::FacialAnim(class USkeletalMeshComponent* Mesh_Comp) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Enemy_Face_Scripted_Notify_C", "FacialAnim");

	Params::Enemy_Face_Scripted_Notify_C_FacialAnim Parms{};

	Parms.Mesh_Comp = Mesh_Comp;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

