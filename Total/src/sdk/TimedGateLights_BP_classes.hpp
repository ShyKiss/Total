#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TimedGateLights_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "TimedGateLightState_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass TimedGateLights_BP.TimedGateLights_BP_C
// 0x0038 (0x0280 - 0x0248)
class ATimedGateLights_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   GreenLightBulb;                                    // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RedLightBulb;                                      // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FourLightSelectorMinus01;                          // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Open;                                              // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2746[0x3];                                     // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         WarningDuration;                                   // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimedGateLightState                          LightState;                                        // 0x0278(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void PlayAlarmSound(class UAkAudioEvent* Event);
	void OnRep_LightState();
	void SetLightState(class UStaticMeshComponent* MeshComponent, bool bOn, bool Green, bool Blinking_Red_Green, bool Blinking_Red, bool Blinking_Green);
	void SetTimedState(bool Param_Open, float Duration);
	void ExecuteUbergraph_TimedGateLights_BP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TimedGateLights_BP_C">();
	}
	static class ATimedGateLights_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATimedGateLights_BP_C>();
	}
};
static_assert(alignof(ATimedGateLights_BP_C) == 0x000008, "Wrong alignment on ATimedGateLights_BP_C");
static_assert(sizeof(ATimedGateLights_BP_C) == 0x000280, "Wrong size on ATimedGateLights_BP_C");
static_assert(offsetof(ATimedGateLights_BP_C, UberGraphFrame) == 0x000248, "Member 'ATimedGateLights_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATimedGateLights_BP_C, GreenLightBulb) == 0x000250, "Member 'ATimedGateLights_BP_C::GreenLightBulb' has a wrong offset!");
static_assert(offsetof(ATimedGateLights_BP_C, RedLightBulb) == 0x000258, "Member 'ATimedGateLights_BP_C::RedLightBulb' has a wrong offset!");
static_assert(offsetof(ATimedGateLights_BP_C, Scene) == 0x000260, "Member 'ATimedGateLights_BP_C::Scene' has a wrong offset!");
static_assert(offsetof(ATimedGateLights_BP_C, FourLightSelectorMinus01) == 0x000268, "Member 'ATimedGateLights_BP_C::FourLightSelectorMinus01' has a wrong offset!");
static_assert(offsetof(ATimedGateLights_BP_C, Open) == 0x000270, "Member 'ATimedGateLights_BP_C::Open' has a wrong offset!");
static_assert(offsetof(ATimedGateLights_BP_C, WarningDuration) == 0x000274, "Member 'ATimedGateLights_BP_C::WarningDuration' has a wrong offset!");
static_assert(offsetof(ATimedGateLights_BP_C, LightState) == 0x000278, "Member 'ATimedGateLights_BP_C::LightState' has a wrong offset!");

}
