#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FX_ENV_LabDeviceShockBurst

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FX_ENV_LabDeviceShockBurst.BP_FX_ENV_LabDeviceShockBurst_C
// 0x0050 (0x0280 - 0x0230)
class ABP_FX_ENV_LabDeviceShockBurst_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URBSoundComponent*                      RBSound;                                           // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Ngr_ShockBurst;                                    // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ShockEndLocation;                                  // 0x0250(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           MainColor;                                         // 0x025C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SparkColor;                                        // 0x026C(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PlayShockBurst();
	void ExecuteUbergraph_BP_FX_ENV_LabDeviceShockBurst(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FX_ENV_LabDeviceShockBurst_C">();
	}
	static class ABP_FX_ENV_LabDeviceShockBurst_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FX_ENV_LabDeviceShockBurst_C>();
	}
};
static_assert(alignof(ABP_FX_ENV_LabDeviceShockBurst_C) == 0x000008, "Wrong alignment on ABP_FX_ENV_LabDeviceShockBurst_C");
static_assert(sizeof(ABP_FX_ENV_LabDeviceShockBurst_C) == 0x000280, "Wrong size on ABP_FX_ENV_LabDeviceShockBurst_C");
static_assert(offsetof(ABP_FX_ENV_LabDeviceShockBurst_C, UberGraphFrame) == 0x000230, "Member 'ABP_FX_ENV_LabDeviceShockBurst_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_LabDeviceShockBurst_C, RBSound) == 0x000238, "Member 'ABP_FX_ENV_LabDeviceShockBurst_C::RBSound' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_LabDeviceShockBurst_C, Ngr_ShockBurst) == 0x000240, "Member 'ABP_FX_ENV_LabDeviceShockBurst_C::Ngr_ShockBurst' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_LabDeviceShockBurst_C, DefaultSceneRoot) == 0x000248, "Member 'ABP_FX_ENV_LabDeviceShockBurst_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_LabDeviceShockBurst_C, ShockEndLocation) == 0x000250, "Member 'ABP_FX_ENV_LabDeviceShockBurst_C::ShockEndLocation' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_LabDeviceShockBurst_C, MainColor) == 0x00025C, "Member 'ABP_FX_ENV_LabDeviceShockBurst_C::MainColor' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_LabDeviceShockBurst_C, SparkColor) == 0x00026C, "Member 'ABP_FX_ENV_LabDeviceShockBurst_C::SparkColor' has a wrong offset!");

}

