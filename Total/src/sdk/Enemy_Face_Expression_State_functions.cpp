#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Enemy_Face_Expression_State

#include "Basic.hpp"

#include "Enemy_Face_Expression_State_classes.hpp"
#include "Enemy_Face_Expression_State_parameters.hpp"


namespace SDK
{

// Function Enemy_Face_Expression_State.Enemy_Face_Expression_State_C.ExpressionOverride
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           Mesh_Comp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ENPCSpecificGesture                     Which_Anim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsExpressing                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEnemy_Face_Expression_State_C::ExpressionOverride(class USkeletalMeshComponent* Mesh_Comp, ENPCSpecificGesture Which_Anim, bool IsExpressing) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Enemy_Face_Expression_State_C", "ExpressionOverride");

	Params::Enemy_Face_Expression_State_C_ExpressionOverride Parms{};

	Parms.Mesh_Comp = Mesh_Comp;
	Parms.Which_Anim = Which_Anim;
	Parms.IsExpressing = IsExpressing;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Enemy_Face_Expression_State.Enemy_Face_Expression_State_C.Received_NotifyEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AnimDeltaTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEnemy_Face_Expression_State_C::Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float AnimDeltaTime) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Enemy_Face_Expression_State_C", "Received_NotifyEnd");

	Params::Enemy_Face_Expression_State_C_Received_NotifyEnd Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.AnimDeltaTime = AnimDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Enemy_Face_Expression_State.Enemy_Face_Expression_State_C.Received_NotifyBegin
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AnimDeltaTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TotalDuration                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEnemy_Face_Expression_State_C::Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float AnimDeltaTime, float TotalDuration) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Enemy_Face_Expression_State_C", "Received_NotifyBegin");

	Params::Enemy_Face_Expression_State_C_Received_NotifyBegin Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;
	Parms.AnimDeltaTime = AnimDeltaTime;
	Parms.TotalDuration = TotalDuration;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Enemy_Face_Expression_State.Enemy_Face_Expression_State_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UEnemy_Face_Expression_State_C::GetNotifyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Enemy_Face_Expression_State_C", "GetNotifyName");

	Params::Enemy_Face_Expression_State_C_GetNotifyName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
