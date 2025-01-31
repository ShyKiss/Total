#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_FX_Weapon_Shotgun_PhyxMatTag

#include "Basic.hpp"

#include "BPF_FX_Weapon_Shotgun_PhyxMatTag_classes.hpp"
#include "BPF_FX_Weapon_Shotgun_PhyxMatTag_parameters.hpp"


namespace SDK
{

// Function BPF_FX_Weapon_Shotgun_PhyxMatTag.BPF_FX_Weapon_Shotgun_PhyxMatTag_C.Weapon Shotgun Impact FX
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       OnHitResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_FX_Weapon_Shotgun_PhyxMatTag_C::Weapon_Shotgun_Impact_FX(const struct FHitResult& OnHitResult, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_FX_Weapon_Shotgun_PhyxMatTag_C", "Weapon Shotgun Impact FX");

	Params::BPF_FX_Weapon_Shotgun_PhyxMatTag_C_Weapon_Shotgun_Impact_FX Parms{};

	Parms.OnHitResult = std::move(OnHitResult);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

