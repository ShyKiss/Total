#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TentacleTrap_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TentacleTrap_BP.TentacleTrap_BP_C
// 0x0078 (0x0308 - 0x0290)
class ATentacleTrap_BP_C final : public ARBHallucinationTrap
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Tentacles;                                         // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Veins;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DarkSmoke;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TL_tentaclesOut_DarkSmoke_ED01FE7840C549570378DFA4556C5E64; // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TL_tentaclesOut_Tentacles_ED01FE7840C549570378DFA4556C5E64; // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_tentaclesOut__Direction_ED01FE7840C549570378DFA4556C5E64; // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C1[0x7];                                      // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_tentaclesOut;                                   // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TL_tentaclesIn_DarkSmoke_D81415FA4663C946684B51BE7F41AE78; // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TL_tentaclesIn_Tentacles_D81415FA4663C946684B51BE7F41AE78; // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TL_tentaclesIn__Direction_D81415FA4663C946684B51BE7F41AE78; // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D9[0x7];                                      // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TL_tentaclesIn;                                    // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPendingDestroy;                                 // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E9[0x3];                                      // 0x02E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                SmokeScale;                                        // 0x02EC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TentaclesLocation;                                 // 0x02F8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void TL_tentaclesIn__FinishedFunc();
	void TL_tentaclesIn__UpdateFunc();
	void TL_tentaclesOut__FinishedFunc();
	void TL_tentaclesOut__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnAttack_Client();
	void OnBeforeDestroy_Client();
	void TentaclesIn();
	void TentaclesOut();
	void ExecuteUbergraph_TentacleTrap_BP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TentacleTrap_BP_C">();
	}
	static class ATentacleTrap_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATentacleTrap_BP_C>();
	}
};
static_assert(alignof(ATentacleTrap_BP_C) == 0x000008, "Wrong alignment on ATentacleTrap_BP_C");
static_assert(sizeof(ATentacleTrap_BP_C) == 0x000308, "Wrong size on ATentacleTrap_BP_C");
static_assert(offsetof(ATentacleTrap_BP_C, UberGraphFrame) == 0x000290, "Member 'ATentacleTrap_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATentacleTrap_BP_C, Tentacles) == 0x000298, "Member 'ATentacleTrap_BP_C::Tentacles' has a wrong offset!");
static_assert(offsetof(ATentacleTrap_BP_C, Veins) == 0x0002A0, "Member 'ATentacleTrap_BP_C::Veins' has a wrong offset!");
static_assert(offsetof(ATentacleTrap_BP_C, DarkSmoke) == 0x0002A8, "Member 'ATentacleTrap_BP_C::DarkSmoke' has a wrong offset!");
static_assert(offsetof(ATentacleTrap_BP_C, SkeletalMesh) == 0x0002B0, "Member 'ATentacleTrap_BP_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ATentacleTrap_BP_C, TL_tentaclesOut_DarkSmoke_ED01FE7840C549570378DFA4556C5E64) == 0x0002B8, "Member 'ATentacleTrap_BP_C::TL_tentaclesOut_DarkSmoke_ED01FE7840C549570378DFA4556C5E64' has a wrong offset!");
static_assert(offsetof(ATentacleTrap_BP_C, TL_tentaclesOut_Tentacles_ED01FE7840C549570378DFA4556C5E64) == 0x0002BC, "Member 'ATentacleTrap_BP_C::TL_tentaclesOut_Tentacles_ED01FE7840C549570378DFA4556C5E64' has a wrong offset!");
static_assert(offsetof(ATentacleTrap_BP_C, TL_tentaclesOut__Direction_ED01FE7840C549570378DFA4556C5E64) == 0x0002C0, "Member 'ATentacleTrap_BP_C::TL_tentaclesOut__Direction_ED01FE7840C549570378DFA4556C5E64' has a wrong offset!");
static_assert(offsetof(ATentacleTrap_BP_C, TL_tentaclesOut) == 0x0002C8, "Member 'ATentacleTrap_BP_C::TL_tentaclesOut' has a wrong offset!");
static_assert(offsetof(ATentacleTrap_BP_C, TL_tentaclesIn_DarkSmoke_D81415FA4663C946684B51BE7F41AE78) == 0x0002D0, "Member 'ATentacleTrap_BP_C::TL_tentaclesIn_DarkSmoke_D81415FA4663C946684B51BE7F41AE78' has a wrong offset!");
static_assert(offsetof(ATentacleTrap_BP_C, TL_tentaclesIn_Tentacles_D81415FA4663C946684B51BE7F41AE78) == 0x0002D4, "Member 'ATentacleTrap_BP_C::TL_tentaclesIn_Tentacles_D81415FA4663C946684B51BE7F41AE78' has a wrong offset!");
static_assert(offsetof(ATentacleTrap_BP_C, TL_tentaclesIn__Direction_D81415FA4663C946684B51BE7F41AE78) == 0x0002D8, "Member 'ATentacleTrap_BP_C::TL_tentaclesIn__Direction_D81415FA4663C946684B51BE7F41AE78' has a wrong offset!");
static_assert(offsetof(ATentacleTrap_BP_C, TL_tentaclesIn) == 0x0002E0, "Member 'ATentacleTrap_BP_C::TL_tentaclesIn' has a wrong offset!");
static_assert(offsetof(ATentacleTrap_BP_C, bIsPendingDestroy) == 0x0002E8, "Member 'ATentacleTrap_BP_C::bIsPendingDestroy' has a wrong offset!");
static_assert(offsetof(ATentacleTrap_BP_C, SmokeScale) == 0x0002EC, "Member 'ATentacleTrap_BP_C::SmokeScale' has a wrong offset!");
static_assert(offsetof(ATentacleTrap_BP_C, TentaclesLocation) == 0x0002F8, "Member 'ATentacleTrap_BP_C::TentaclesLocation' has a wrong offset!");

}

