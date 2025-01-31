#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RewardRoom_DoorMinus02_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DoorBase_BP_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"
#include "OPP_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass RewardRoom_Door-02_BP.RewardRoom_Door-02_BP_C
// 0x0110 (0x1220 - 0x1110)
class ARewardRoom_DoorMinus02_BP_C final : public ADoorBase_BP_C
{
public:
	uint8                                         Pad_1104[0x4];                                     // 0x1104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_RewardRoom_DoorMinus02_BP_C;        // 0x1108(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      OnHackLightsVFXMinusLeft;                          // 0x1110(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      OnHackLightsVFXMinusRight;                         // 0x1118(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DoorHaspVFXAnchor;                                 // 0x1120(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBHackableComponent*                   RBHackable;                                        // 0x1128(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CoopSignMesh1;                                     // 0x1130(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CoopSignMesh;                                      // 0x1138(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BackDoorHaspMinus01b;                              // 0x1140(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FrontDoorHaspMinus01b;                             // 0x1148(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DoorHaspMinus01a;                                  // 0x1150(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSinglePlayerHelperComponent*         RBSinglePlayerHelper;                              // 0x1158(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          StingerBox;                                        // 0x1160(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LockRewardLightMinus01;                            // 0x1168(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LockRewardLightMinus02;                            // 0x1170(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        RewardRoomPivot;                                   // 0x1178(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BackDoorHaspMinus01c;                              // 0x1180(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FrontDoorHaspMinus01c;                             // 0x1188(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        DecalFront;                                        // 0x1190(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        DecalBack;                                         // 0x1198(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         LockPanelHinge_HingeAngle_D105B2A84BEA9AD9C39F70A4C061300D; // 0x11A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            LockPanelHinge__Direction_D105B2A84BEA9AD9C39F70A4C061300D; // 0x11A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11A5[0x3];                                     // 0x11A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     LockPanelHinge;                                    // 0x11A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bWasOpen;                                          // 0x11B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11B1[0x7];                                     // 0x11B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             DoorInteracted;                                    // 0x11B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                           RewardLightOnColor;                                // 0x11C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           RewardLightOffColor;                               // 0x11D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ARBPlayer*>                      PlayersEntered;                                    // 0x11E8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         ActivateTimeStamp;                                 // 0x11F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11FC[0x4];                                     // 0x11FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class URBHackableComponent*>           LinkedHackableComponents;                          // 0x1200(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class ARewardRoom_ButtonMinusCoop_BP_C*> LinkedRewardCoopButtons;                           // 0x1210(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void RefreshVisualHackState();
	void IsHackedDisabled(bool* Out);
	void IsActivelyBeingHacked(bool* Out);
	void UserConstructionScript();
	void LockPanelHinge__FinishedFunc();
	void LockPanelHinge__UpdateFunc();
	void BP_OnNumberOfRewardUnlockActiveChanged(int32 NumberOfRewardUnlockActive_0);
	void BP_OnRewardDoorInitialization();
	void Event_OnResetStage();
	void BndEvt__RewardRoom_DoorMinus02_BP_StingerBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__RewardRoom_DoorMinus02_BP_RBSinglePlayerHelper_K2Node_ComponentBoundEvent_1_OnSinglePlayerChangedEvent__DelegateSignature();
	void OnAnyHackStateChange(class URBHackableComponent* HackableComponent);
	void ExecuteUbergraph_RewardRoom_DoorMinus02_BP(int32 EntryPoint);
	void DoorInteracted__DelegateSignature(bool bOpen_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RewardRoom_Door-02_BP_C">();
	}
	static class ARewardRoom_DoorMinus02_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARewardRoom_DoorMinus02_BP_C>();
	}
};
static_assert(alignof(ARewardRoom_DoorMinus02_BP_C) == 0x000010, "Wrong alignment on ARewardRoom_DoorMinus02_BP_C");
static_assert(sizeof(ARewardRoom_DoorMinus02_BP_C) == 0x001220, "Wrong size on ARewardRoom_DoorMinus02_BP_C");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, UberGraphFrame_RewardRoom_DoorMinus02_BP_C) == 0x001108, "Member 'ARewardRoom_DoorMinus02_BP_C::UberGraphFrame_RewardRoom_DoorMinus02_BP_C' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, OnHackLightsVFXMinusLeft) == 0x001110, "Member 'ARewardRoom_DoorMinus02_BP_C::OnHackLightsVFXMinusLeft' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, OnHackLightsVFXMinusRight) == 0x001118, "Member 'ARewardRoom_DoorMinus02_BP_C::OnHackLightsVFXMinusRight' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, DoorHaspVFXAnchor) == 0x001120, "Member 'ARewardRoom_DoorMinus02_BP_C::DoorHaspVFXAnchor' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, RBHackable) == 0x001128, "Member 'ARewardRoom_DoorMinus02_BP_C::RBHackable' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, CoopSignMesh1) == 0x001130, "Member 'ARewardRoom_DoorMinus02_BP_C::CoopSignMesh1' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, CoopSignMesh) == 0x001138, "Member 'ARewardRoom_DoorMinus02_BP_C::CoopSignMesh' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, BackDoorHaspMinus01b) == 0x001140, "Member 'ARewardRoom_DoorMinus02_BP_C::BackDoorHaspMinus01b' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, FrontDoorHaspMinus01b) == 0x001148, "Member 'ARewardRoom_DoorMinus02_BP_C::FrontDoorHaspMinus01b' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, DoorHaspMinus01a) == 0x001150, "Member 'ARewardRoom_DoorMinus02_BP_C::DoorHaspMinus01a' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, RBSinglePlayerHelper) == 0x001158, "Member 'ARewardRoom_DoorMinus02_BP_C::RBSinglePlayerHelper' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, StingerBox) == 0x001160, "Member 'ARewardRoom_DoorMinus02_BP_C::StingerBox' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, LockRewardLightMinus01) == 0x001168, "Member 'ARewardRoom_DoorMinus02_BP_C::LockRewardLightMinus01' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, LockRewardLightMinus02) == 0x001170, "Member 'ARewardRoom_DoorMinus02_BP_C::LockRewardLightMinus02' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, RewardRoomPivot) == 0x001178, "Member 'ARewardRoom_DoorMinus02_BP_C::RewardRoomPivot' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, BackDoorHaspMinus01c) == 0x001180, "Member 'ARewardRoom_DoorMinus02_BP_C::BackDoorHaspMinus01c' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, FrontDoorHaspMinus01c) == 0x001188, "Member 'ARewardRoom_DoorMinus02_BP_C::FrontDoorHaspMinus01c' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, DecalFront) == 0x001190, "Member 'ARewardRoom_DoorMinus02_BP_C::DecalFront' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, DecalBack) == 0x001198, "Member 'ARewardRoom_DoorMinus02_BP_C::DecalBack' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, LockPanelHinge_HingeAngle_D105B2A84BEA9AD9C39F70A4C061300D) == 0x0011A0, "Member 'ARewardRoom_DoorMinus02_BP_C::LockPanelHinge_HingeAngle_D105B2A84BEA9AD9C39F70A4C061300D' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, LockPanelHinge__Direction_D105B2A84BEA9AD9C39F70A4C061300D) == 0x0011A4, "Member 'ARewardRoom_DoorMinus02_BP_C::LockPanelHinge__Direction_D105B2A84BEA9AD9C39F70A4C061300D' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, LockPanelHinge) == 0x0011A8, "Member 'ARewardRoom_DoorMinus02_BP_C::LockPanelHinge' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, bWasOpen) == 0x0011B0, "Member 'ARewardRoom_DoorMinus02_BP_C::bWasOpen' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, DoorInteracted) == 0x0011B8, "Member 'ARewardRoom_DoorMinus02_BP_C::DoorInteracted' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, RewardLightOnColor) == 0x0011C8, "Member 'ARewardRoom_DoorMinus02_BP_C::RewardLightOnColor' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, RewardLightOffColor) == 0x0011D8, "Member 'ARewardRoom_DoorMinus02_BP_C::RewardLightOffColor' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, PlayersEntered) == 0x0011E8, "Member 'ARewardRoom_DoorMinus02_BP_C::PlayersEntered' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, ActivateTimeStamp) == 0x0011F8, "Member 'ARewardRoom_DoorMinus02_BP_C::ActivateTimeStamp' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, LinkedHackableComponents) == 0x001200, "Member 'ARewardRoom_DoorMinus02_BP_C::LinkedHackableComponents' has a wrong offset!");
static_assert(offsetof(ARewardRoom_DoorMinus02_BP_C, LinkedRewardCoopButtons) == 0x001210, "Member 'ARewardRoom_DoorMinus02_BP_C::LinkedRewardCoopButtons' has a wrong offset!");

}

