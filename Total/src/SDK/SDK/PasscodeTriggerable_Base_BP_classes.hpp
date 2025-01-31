#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PasscodeTriggerable_Base_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PasscodeTriggerable_Base_BP.PasscodeTriggerable_Base_BP_C
// 0x01F0 (0x0610 - 0x0420)
class APasscodeTriggerable_Base_BP_C final : public ARBTriggerable
{
public:
	uint8                                         Pad_418[0x8];                                      // 0x0418(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPasscodePad_InteractionComponent_BP_C* PasscodePad_InteractionComponent_BP;               // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PuzzleRoomMinusKeyPadMinus02;                      // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   KeyMinus04;                                        // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   KeyMinus05;                                        // 0x0440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   KeyMinus06;                                        // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   KeyMinus07;                                        // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   KeyMinus08;                                        // 0x0458(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   KeyMinus00;                                        // 0x0460(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   KeyMinus03;                                        // 0x0468(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   KeyMinusClear;                                     // 0x0470(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSimplePasscodeButtonComponent*       Button_Clear;                                      // 0x0478(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   KeyMinus02;                                        // 0x0480(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   KeyMinus09;                                        // 0x0488(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSimplePasscodeButtonComponent*       Button_3;                                          // 0x0490(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSimplePasscodeButtonComponent*       Button_0;                                          // 0x0498(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSimplePasscodeButtonComponent*       Button_9;                                          // 0x04A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSimplePasscodeButtonComponent*       Button_8;                                          // 0x04A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSimplePasscodeButtonComponent*       Button_7;                                          // 0x04B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSimplePasscodeButtonComponent*       Button_6;                                          // 0x04B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSimplePasscodeButtonComponent*       Button_5;                                          // 0x04C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSimplePasscodeButtonComponent*       Button_4;                                          // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSimplePasscodeButtonComponent*       Button_2;                                          // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   KeyMinus01;                                        // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSimplePasscodeButtonComponent*       Button_1;                                          // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PuzzleRoomMinusKeyPadButtonMinus01;                // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        ButtonRoot;                                        // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        HeadTransformRef;                                  // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBEditorClearanceCollisionBoxComponent* KeypadPuzzleBoxClearance;                          // 0x0500(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBPingComponent*                       RBPing;                                            // 0x0508(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0510(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DiodeMinus02;                                      // 0x0518(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DiodeMinus03;                                      // 0x0520(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DiodeMinus04;                                      // 0x0528(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        PuzzleBox_AnchorRef;                               // 0x0530(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   PuzzleRoomMinusKeyPadMinus01;                      // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBOutlineComponent*                    RBOutline;                                         // 0x0540(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBRandomizableHelperComponent*         RBRandomizableHelper;                              // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InteractableOwnerClearanceBoxComponent_BP;         // 0x0550(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBRoomAssociationComponent*            Room_Association;                                  // 0x0558(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSoundComponent*                      RBSound;                                           // 0x0560(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timer_Button_Press_Timeline_NewTrack_0_E4674D054AEEA0B2081AD5AC0EFDCBB7; // 0x0568(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timer_Button_Press_Timeline__Direction_E4674D054AEEA0B2081AD5AC0EFDCBB7; // 0x056C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56D[0x3];                                      // 0x056D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timer_Button_Press_Timeline;                       // 0x0570(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           Diodes;                                            // 0x0578(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	float                                         ButtonReleaseSoundTimestamp;                       // 0x0588(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_58C[0x4];                                      // 0x058C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             RightPasswordEntered;                              // 0x0590(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAkAudioEvent*                          CountdownElapsedLoopStart;                         // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          CountdownElapsedLoopStop;                          // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimerButtonPressOffset;                            // 0x05B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TimerButtonUnpressedPosition;                      // 0x05B4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TimerButtonPressedPosition;                        // 0x05C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CC[0x4];                                      // 0x05CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class AClue_TvChannel_BP_C>    LinkedTvChannel;                                   // 0x05D0(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UAkAudioEvent*                          BoxOpeningSound;                                   // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          PuzzleBoxSuccessSound;                             // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	class URBPlayerInvestigationZoneComponent* GetAssociatedInvestigationComponent();
	struct FClueData GetClue();
	bool OnWorldPopulateFinishedTimeSliced();
	bool GetStateName(class FString* StateA, class FString* StateB);
	bool FixUp();
	void PlaySuccessSounds();
	void UpdateTimerButtonLightColor(bool Enabled);
	void UpdateButtonFocus(class USceneComponent* ButtonComponent);
	void RefreshDiode(bool bFailed);
	void ButtonSound(class URBSimplePasscodeButtonComponent* Button);
	void UserConstructionScript();
	void Timer_Button_Press_Timeline__FinishedFunc();
	void Timer_Button_Press_Timeline__UpdateFunc();
	void OnWorldFullyLoaded();
	void OnWorldPopulateFinished();
	void PrepareState(bool bStateA, class AActor* RandomOwner);
	void OnPostActorsPasted(const TArray<class AActor*>& PastedActors);
	void PostAddedToLevel();
	void PostDuplicated(class AActor* DuplicationParent);
	void PostEditChange(const class FName& PropertyName);
	void PostEditMove(bool bFinished);
	void TickSelected();
	void Event_OnTriggered();
	void OnEditorPostLoad();
	void SetShouldBeIgnoredForLots(bool bValue);
	void SetState(bool bStateA);
	void Timer_Button_Press(const bool Press);
	void Event_SnapToState();
	void BndEvt__DrugPasscodeBox_Base_BP_Button_1_K2Node_ComponentBoundEvent_28_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_1_K2Node_ComponentBoundEvent_32_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_9_K2Node_ComponentBoundEvent_33_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_Clear_K2Node_ComponentBoundEvent_34_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_Clear_K2Node_ComponentBoundEvent_35_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_3_K2Node_ComponentBoundEvent_36_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_3_K2Node_ComponentBoundEvent_37_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_0_K2Node_ComponentBoundEvent_38_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_0_K2Node_ComponentBoundEvent_39_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_9_K2Node_ComponentBoundEvent_40_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_8_K2Node_ComponentBoundEvent_41_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_8_K2Node_ComponentBoundEvent_42_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_7_K2Node_ComponentBoundEvent_43_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_7_K2Node_ComponentBoundEvent_44_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_6_K2Node_ComponentBoundEvent_45_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_6_K2Node_ComponentBoundEvent_46_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_5_K2Node_ComponentBoundEvent_47_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_5_K2Node_ComponentBoundEvent_48_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_4_K2Node_ComponentBoundEvent_49_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_4_K2Node_ComponentBoundEvent_50_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_2_K2Node_ComponentBoundEvent_51_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void BndEvt__DrugPasscodeBox_Base_BP_Button_2_K2Node_ComponentBoundEvent_52_OnSimplePasscodeButtonStateChanged__DelegateSignature(class URBSimplePasscodeButtonComponent* Button);
	void SetClue(const struct FClueData& ClueData);
	void BndEvt__PasscodeTriggerable_Base_BP_PasscodePad_InteractionComponent_BP_K2Node_ComponentBoundEvent_1_OnSimplePasscodePadValidation__DelegateSignature(class URBSimplePasscodePadComponent* Pad, bool bValid);
	void BndEvt__PasscodeTriggerable_Base_BP_PasscodePad_InteractionComponent_BP_K2Node_ComponentBoundEvent_2_OnPanelEvent__DelegateSignature(class URBInteractiblePanelComponent* Panel, class ARBPawn* PawnInteracting);
	void BndEvt__PasscodeTriggerable_Base_BP_PasscodePad_InteractionComponent_BP_K2Node_ComponentBoundEvent_3_OnSimplePasscodeEvent__DelegateSignature(class URBSimplePasscodePadComponent* Pad);
	void BndEvt__PasscodeTriggerable_Base_BP_PasscodePad_InteractionComponent_BP_K2Node_ComponentBoundEvent_4_OnEnabledChanged__DelegateSignature(class URBInteractionZoneComponent* Component);
	void ExecuteUbergraph_PasscodeTriggerable_Base_BP(int32 EntryPoint);
	void RightPasswordEntered__DelegateSignature();

	bool IsRandomStateSet() const;
	bool IsStateA() const;
	bool ShouldBeIgnoredForLots() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PasscodeTriggerable_Base_BP_C">();
	}
	static class APasscodeTriggerable_Base_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APasscodeTriggerable_Base_BP_C>();
	}
};
static_assert(alignof(APasscodeTriggerable_Base_BP_C) == 0x000010, "Wrong alignment on APasscodeTriggerable_Base_BP_C");
static_assert(sizeof(APasscodeTriggerable_Base_BP_C) == 0x000610, "Wrong size on APasscodeTriggerable_Base_BP_C");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, UberGraphFrame) == 0x000420, "Member 'APasscodeTriggerable_Base_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, PasscodePad_InteractionComponent_BP) == 0x000428, "Member 'APasscodeTriggerable_Base_BP_C::PasscodePad_InteractionComponent_BP' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, PuzzleRoomMinusKeyPadMinus02) == 0x000430, "Member 'APasscodeTriggerable_Base_BP_C::PuzzleRoomMinusKeyPadMinus02' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, KeyMinus04) == 0x000438, "Member 'APasscodeTriggerable_Base_BP_C::KeyMinus04' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, KeyMinus05) == 0x000440, "Member 'APasscodeTriggerable_Base_BP_C::KeyMinus05' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, KeyMinus06) == 0x000448, "Member 'APasscodeTriggerable_Base_BP_C::KeyMinus06' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, KeyMinus07) == 0x000450, "Member 'APasscodeTriggerable_Base_BP_C::KeyMinus07' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, KeyMinus08) == 0x000458, "Member 'APasscodeTriggerable_Base_BP_C::KeyMinus08' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, KeyMinus00) == 0x000460, "Member 'APasscodeTriggerable_Base_BP_C::KeyMinus00' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, KeyMinus03) == 0x000468, "Member 'APasscodeTriggerable_Base_BP_C::KeyMinus03' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, KeyMinusClear) == 0x000470, "Member 'APasscodeTriggerable_Base_BP_C::KeyMinusClear' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Button_Clear) == 0x000478, "Member 'APasscodeTriggerable_Base_BP_C::Button_Clear' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, KeyMinus02) == 0x000480, "Member 'APasscodeTriggerable_Base_BP_C::KeyMinus02' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, KeyMinus09) == 0x000488, "Member 'APasscodeTriggerable_Base_BP_C::KeyMinus09' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Button_3) == 0x000490, "Member 'APasscodeTriggerable_Base_BP_C::Button_3' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Button_0) == 0x000498, "Member 'APasscodeTriggerable_Base_BP_C::Button_0' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Button_9) == 0x0004A0, "Member 'APasscodeTriggerable_Base_BP_C::Button_9' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Button_8) == 0x0004A8, "Member 'APasscodeTriggerable_Base_BP_C::Button_8' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Button_7) == 0x0004B0, "Member 'APasscodeTriggerable_Base_BP_C::Button_7' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Button_6) == 0x0004B8, "Member 'APasscodeTriggerable_Base_BP_C::Button_6' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Button_5) == 0x0004C0, "Member 'APasscodeTriggerable_Base_BP_C::Button_5' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Button_4) == 0x0004C8, "Member 'APasscodeTriggerable_Base_BP_C::Button_4' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Button_2) == 0x0004D0, "Member 'APasscodeTriggerable_Base_BP_C::Button_2' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, KeyMinus01) == 0x0004D8, "Member 'APasscodeTriggerable_Base_BP_C::KeyMinus01' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Button_1) == 0x0004E0, "Member 'APasscodeTriggerable_Base_BP_C::Button_1' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, PuzzleRoomMinusKeyPadButtonMinus01) == 0x0004E8, "Member 'APasscodeTriggerable_Base_BP_C::PuzzleRoomMinusKeyPadButtonMinus01' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, ButtonRoot) == 0x0004F0, "Member 'APasscodeTriggerable_Base_BP_C::ButtonRoot' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, HeadTransformRef) == 0x0004F8, "Member 'APasscodeTriggerable_Base_BP_C::HeadTransformRef' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, KeypadPuzzleBoxClearance) == 0x000500, "Member 'APasscodeTriggerable_Base_BP_C::KeypadPuzzleBoxClearance' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, RBPing) == 0x000508, "Member 'APasscodeTriggerable_Base_BP_C::RBPing' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Root) == 0x000510, "Member 'APasscodeTriggerable_Base_BP_C::Root' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, DiodeMinus02) == 0x000518, "Member 'APasscodeTriggerable_Base_BP_C::DiodeMinus02' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, DiodeMinus03) == 0x000520, "Member 'APasscodeTriggerable_Base_BP_C::DiodeMinus03' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, DiodeMinus04) == 0x000528, "Member 'APasscodeTriggerable_Base_BP_C::DiodeMinus04' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, PuzzleBox_AnchorRef) == 0x000530, "Member 'APasscodeTriggerable_Base_BP_C::PuzzleBox_AnchorRef' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, PuzzleRoomMinusKeyPadMinus01) == 0x000538, "Member 'APasscodeTriggerable_Base_BP_C::PuzzleRoomMinusKeyPadMinus01' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, RBOutline) == 0x000540, "Member 'APasscodeTriggerable_Base_BP_C::RBOutline' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, RBRandomizableHelper) == 0x000548, "Member 'APasscodeTriggerable_Base_BP_C::RBRandomizableHelper' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, InteractableOwnerClearanceBoxComponent_BP) == 0x000550, "Member 'APasscodeTriggerable_Base_BP_C::InteractableOwnerClearanceBoxComponent_BP' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Room_Association) == 0x000558, "Member 'APasscodeTriggerable_Base_BP_C::Room_Association' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, RBSound) == 0x000560, "Member 'APasscodeTriggerable_Base_BP_C::RBSound' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Timer_Button_Press_Timeline_NewTrack_0_E4674D054AEEA0B2081AD5AC0EFDCBB7) == 0x000568, "Member 'APasscodeTriggerable_Base_BP_C::Timer_Button_Press_Timeline_NewTrack_0_E4674D054AEEA0B2081AD5AC0EFDCBB7' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Timer_Button_Press_Timeline__Direction_E4674D054AEEA0B2081AD5AC0EFDCBB7) == 0x00056C, "Member 'APasscodeTriggerable_Base_BP_C::Timer_Button_Press_Timeline__Direction_E4674D054AEEA0B2081AD5AC0EFDCBB7' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Timer_Button_Press_Timeline) == 0x000570, "Member 'APasscodeTriggerable_Base_BP_C::Timer_Button_Press_Timeline' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, Diodes) == 0x000578, "Member 'APasscodeTriggerable_Base_BP_C::Diodes' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, ButtonReleaseSoundTimestamp) == 0x000588, "Member 'APasscodeTriggerable_Base_BP_C::ButtonReleaseSoundTimestamp' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, RightPasswordEntered) == 0x000590, "Member 'APasscodeTriggerable_Base_BP_C::RightPasswordEntered' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, CountdownElapsedLoopStart) == 0x0005A0, "Member 'APasscodeTriggerable_Base_BP_C::CountdownElapsedLoopStart' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, CountdownElapsedLoopStop) == 0x0005A8, "Member 'APasscodeTriggerable_Base_BP_C::CountdownElapsedLoopStop' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, TimerButtonPressOffset) == 0x0005B0, "Member 'APasscodeTriggerable_Base_BP_C::TimerButtonPressOffset' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, TimerButtonUnpressedPosition) == 0x0005B4, "Member 'APasscodeTriggerable_Base_BP_C::TimerButtonUnpressedPosition' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, TimerButtonPressedPosition) == 0x0005C0, "Member 'APasscodeTriggerable_Base_BP_C::TimerButtonPressedPosition' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, LinkedTvChannel) == 0x0005D0, "Member 'APasscodeTriggerable_Base_BP_C::LinkedTvChannel' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, BoxOpeningSound) == 0x0005F8, "Member 'APasscodeTriggerable_Base_BP_C::BoxOpeningSound' has a wrong offset!");
static_assert(offsetof(APasscodeTriggerable_Base_BP_C, PuzzleBoxSuccessSound) == 0x000600, "Member 'APasscodeTriggerable_Base_BP_C::PuzzleBoxSuccessSound' has a wrong offset!");

}

