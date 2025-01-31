#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBNPC_Imposter_BP

#include "Basic.hpp"

#include "RBNPC_Imposter_BP_classes.hpp"
#include "RBNPC_Imposter_BP_parameters.hpp"


namespace SDK
{

// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetFacePoseAsset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPoseAsset*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPoseAsset* ARBNPC_Imposter_BP_C::GetFacePoseAsset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "GetFacePoseAsset");

	Params::RBNPC_Imposter_BP_C_GetFacePoseAsset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.UpdateESOPBatteryType
// (Public, BlueprintCallable, BlueprintEvent)

void ARBNPC_Imposter_BP_C::UpdateESOPBatteryType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "UpdateESOPBatteryType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.DressCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARBNPC_Imposter_BP_C::DressCharacter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "DressCharacter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARBNPC_Imposter_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_OnTakeDamage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDamageInfo                      Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ARBNPC_Imposter_BP_C::Event_OnTakeDamage(const struct FDamageInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "Event_OnTakeDamage");

	Params::RBNPC_Imposter_BP_C_Event_OnTakeDamage Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_SetCustomization
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FRBPlayerCustomizationInfo       NewCustomization                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ARBNPC_Imposter_BP_C::Event_SetCustomization(const struct FRBPlayerCustomizationInfo& NewCustomization)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "Event_SetCustomization");

	Params::RBNPC_Imposter_BP_C_Event_SetCustomization Parms{};

	Parms.NewCustomization = std::move(NewCustomization);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.OnExtraCustomizationMeshesAddedForSlot
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMeshComponent*>   AddedExtraMeshes                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// EPlayerCustomizationSlot                Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARBNPC_Imposter_BP_C::OnExtraCustomizationMeshesAddedForSlot(const TArray<class USkeletalMeshComponent*>& AddedExtraMeshes, EPlayerCustomizationSlot Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "OnExtraCustomizationMeshesAddedForSlot");

	Params::RBNPC_Imposter_BP_C_OnExtraCustomizationMeshesAddedForSlot Parms{};

	Parms.AddedExtraMeshes = std::move(AddedExtraMeshes);
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_OnStartRagePaintState
// (BlueprintEvent)

void ARBNPC_Imposter_BP_C::Event_OnStartRagePaintState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "Event_OnStartRagePaintState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.Event_OnEndRagePaintState
// (BlueprintEvent)

void ARBNPC_Imposter_BP_C::Event_OnEndRagePaintState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "Event_OnEndRagePaintState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.ExecuteUbergraph_RBNPC_Imposter_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARBNPC_Imposter_BP_C::ExecuteUbergraph_RBNPC_Imposter_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "ExecuteUbergraph_RBNPC_Imposter_BP");

	Params::RBNPC_Imposter_BP_C_ExecuteUbergraph_RBNPC_Imposter_BP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetShadowSkeletalMeshComponentForSlot
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EPlayerCustomizationSlot                Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutFound                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* ARBNPC_Imposter_BP_C::GetShadowSkeletalMeshComponentForSlot(EPlayerCustomizationSlot Slot, bool* OutFound) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "GetShadowSkeletalMeshComponentForSlot");

	Params::RBNPC_Imposter_BP_C_GetShadowSkeletalMeshComponentForSlot Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFound != nullptr)
		*OutFound = Parms.OutFound;

	return Parms.ReturnValue;
}


// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetMainParentSkeletalMesh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* ARBNPC_Imposter_BP_C::GetMainParentSkeletalMesh() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "GetMainParentSkeletalMesh");

	Params::RBNPC_Imposter_BP_C_GetMainParentSkeletalMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetWatchComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UStaticMeshComponent*             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UStaticMeshComponent* ARBNPC_Imposter_BP_C::GetWatchComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "GetWatchComponent");

	Params::RBNPC_Imposter_BP_C_GetWatchComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetPlayerCustomizationInfo
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRBPlayerCustomizationInfo       ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FRBPlayerCustomizationInfo ARBNPC_Imposter_BP_C::GetPlayerCustomizationInfo() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "GetPlayerCustomizationInfo");

	Params::RBNPC_Imposter_BP_C_GetPlayerCustomizationInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetSkeletalMeshComponentForSlot
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EPlayerCustomizationSlot                Slot                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* ARBNPC_Imposter_BP_C::GetSkeletalMeshComponentForSlot(EPlayerCustomizationSlot Slot) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "GetSkeletalMeshComponentForSlot");

	Params::RBNPC_Imposter_BP_C_GetSkeletalMeshComponentForSlot Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function RBNPC_Imposter_BP.RBNPC_Imposter_BP_C.GetFaceFXSkeletalMeshComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* ARBNPC_Imposter_BP_C::GetFaceFXSkeletalMeshComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RBNPC_Imposter_BP_C", "GetFaceFXSkeletalMeshComponent");

	Params::RBNPC_Imposter_BP_C_GetFaceFXSkeletalMeshComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

