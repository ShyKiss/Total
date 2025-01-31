#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MainMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AkAudio_structs.hpp"
#include "OPP_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass MainMenu.MainMenu_C
// 0x0060 (0x0298 - 0x0238)
class AMainMenu_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ARBMainMenuPlayerController*            MainMenuController;                                // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMusicPlaying;                                    // 0x0248(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_249[0x7];                                      // 0x0249(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBinkMediaPlayer*                       BinkMovieMinus01;                                  // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBinkMediaPlayer*                       BinkOldMovieMinus01;                               // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBinkMediaPlayer*                       BinkMovieMinus02;                                  // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    MenuSequencerMinus01_2_ExecuteUbergraph_MainMenu_RefProperty; // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                    MenuSequencerMinus02_0_ExecuteUbergraph_MainMenu_RefProperty; // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineFrancoMinus01_BP_C*                CineFrancoMinus01_BP_2_ExecuteUbergraph_MainMenu_RefProperty; // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineGooseberryMinus01_BP_C*            CineGooseberryMinus01_BP_3_ExecuteUbergraph_MainMenu_RefProperty; // 0x0280(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineFrancoMinus01_BP_C*                CineFrancoMinus01_BP2_ExecuteUbergraph_MainMenu_RefProperty; // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACineCoyleMinus01_BP_C*                 CineCoyleMinus01_BP_3_ExecuteUbergraph_MainMenu_RefProperty; // 0x0290(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MainMenu(int32 EntryPoint);
	void ForceFranco();
	void SetEventFeature();
	void ToggleXPCheck();
	void MM_ScratchClose();
	void MM_Scratch();
	void OnMainMenuStageChanged(EMainMenuState MainMenuState);
	void MM_StopCameraMinus02();
	void MM_StopCamera01();
	void MM_PlayCameraMinus02();
	void MM_PlayCamera01();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	bool OnWorldPopulateFinishedTimeSliced();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MainMenu_C">();
	}
	static class AMainMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMainMenu_C>();
	}
};
static_assert(alignof(AMainMenu_C) == 0x000008, "Wrong alignment on AMainMenu_C");
static_assert(sizeof(AMainMenu_C) == 0x000298, "Wrong size on AMainMenu_C");
static_assert(offsetof(AMainMenu_C, UberGraphFrame) == 0x000238, "Member 'AMainMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, MainMenuController) == 0x000240, "Member 'AMainMenu_C::MainMenuController' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, IsMusicPlaying) == 0x000248, "Member 'AMainMenu_C::IsMusicPlaying' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, BinkMovieMinus01) == 0x000250, "Member 'AMainMenu_C::BinkMovieMinus01' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, BinkOldMovieMinus01) == 0x000258, "Member 'AMainMenu_C::BinkOldMovieMinus01' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, BinkMovieMinus02) == 0x000260, "Member 'AMainMenu_C::BinkMovieMinus02' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, MenuSequencerMinus01_2_ExecuteUbergraph_MainMenu_RefProperty) == 0x000268, "Member 'AMainMenu_C::MenuSequencerMinus01_2_ExecuteUbergraph_MainMenu_RefProperty' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, MenuSequencerMinus02_0_ExecuteUbergraph_MainMenu_RefProperty) == 0x000270, "Member 'AMainMenu_C::MenuSequencerMinus02_0_ExecuteUbergraph_MainMenu_RefProperty' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, CineFrancoMinus01_BP_2_ExecuteUbergraph_MainMenu_RefProperty) == 0x000278, "Member 'AMainMenu_C::CineFrancoMinus01_BP_2_ExecuteUbergraph_MainMenu_RefProperty' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, CineGooseberryMinus01_BP_3_ExecuteUbergraph_MainMenu_RefProperty) == 0x000280, "Member 'AMainMenu_C::CineGooseberryMinus01_BP_3_ExecuteUbergraph_MainMenu_RefProperty' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, CineFrancoMinus01_BP2_ExecuteUbergraph_MainMenu_RefProperty) == 0x000288, "Member 'AMainMenu_C::CineFrancoMinus01_BP2_ExecuteUbergraph_MainMenu_RefProperty' has a wrong offset!");
static_assert(offsetof(AMainMenu_C, CineCoyleMinus01_BP_3_ExecuteUbergraph_MainMenu_RefProperty) == 0x000290, "Member 'AMainMenu_C::CineCoyleMinus01_BP_3_ExecuteUbergraph_MainMenu_RefProperty' has a wrong offset!");

}

