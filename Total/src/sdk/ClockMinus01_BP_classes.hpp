#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ClockMinus01_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "RBStationnaryActor_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Clock-01_BP.Clock-01_BP_C
// 0x0050 (0x02A8 - 0x0258)
class AClockMinus01_BP_C final : public ARBStationnaryActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   CloclNeedle_SecondsMinus01;                        // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CloclNeedle_MinutesMinus01;                        // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CloclNeedle_HoursMinus01;                          // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSoundComponent*                      RBSound;                                           // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ClockMesh;                                         // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartTime;                                         // 0x0288(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InitialTime;                                       // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseCustomStartTime;                               // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C92[0x3];                                     // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         TotalTimeSeconds;                                  // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Clock_Rotation;                                    // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StartOn;                                           // 0x02A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void Set_Time(bool IgnoreServerTime);
	void IncrementTime();
	void UpdateRotations();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void StartClock(bool IgnoreServerTime);
	void StopClock();
	void ExecuteUbergraph_ClockMinus01_BP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Clock-01_BP_C">();
	}
	static class AClockMinus01_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AClockMinus01_BP_C>();
	}
};
static_assert(alignof(AClockMinus01_BP_C) == 0x000008, "Wrong alignment on AClockMinus01_BP_C");
static_assert(sizeof(AClockMinus01_BP_C) == 0x0002A8, "Wrong size on AClockMinus01_BP_C");
static_assert(offsetof(AClockMinus01_BP_C, UberGraphFrame) == 0x000258, "Member 'AClockMinus01_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AClockMinus01_BP_C, CloclNeedle_SecondsMinus01) == 0x000260, "Member 'AClockMinus01_BP_C::CloclNeedle_SecondsMinus01' has a wrong offset!");
static_assert(offsetof(AClockMinus01_BP_C, CloclNeedle_MinutesMinus01) == 0x000268, "Member 'AClockMinus01_BP_C::CloclNeedle_MinutesMinus01' has a wrong offset!");
static_assert(offsetof(AClockMinus01_BP_C, CloclNeedle_HoursMinus01) == 0x000270, "Member 'AClockMinus01_BP_C::CloclNeedle_HoursMinus01' has a wrong offset!");
static_assert(offsetof(AClockMinus01_BP_C, RBSound) == 0x000278, "Member 'AClockMinus01_BP_C::RBSound' has a wrong offset!");
static_assert(offsetof(AClockMinus01_BP_C, ClockMesh) == 0x000280, "Member 'AClockMinus01_BP_C::ClockMesh' has a wrong offset!");
static_assert(offsetof(AClockMinus01_BP_C, StartTime) == 0x000288, "Member 'AClockMinus01_BP_C::StartTime' has a wrong offset!");
static_assert(offsetof(AClockMinus01_BP_C, InitialTime) == 0x000294, "Member 'AClockMinus01_BP_C::InitialTime' has a wrong offset!");
static_assert(offsetof(AClockMinus01_BP_C, bUseCustomStartTime) == 0x000298, "Member 'AClockMinus01_BP_C::bUseCustomStartTime' has a wrong offset!");
static_assert(offsetof(AClockMinus01_BP_C, TotalTimeSeconds) == 0x00029C, "Member 'AClockMinus01_BP_C::TotalTimeSeconds' has a wrong offset!");
static_assert(offsetof(AClockMinus01_BP_C, Clock_Rotation) == 0x0002A0, "Member 'AClockMinus01_BP_C::Clock_Rotation' has a wrong offset!");
static_assert(offsetof(AClockMinus01_BP_C, StartOn) == 0x0002A4, "Member 'AClockMinus01_BP_C::StartOn' has a wrong offset!");

}
