#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TG_IntroMinus02_Seq

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LevelSequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TG_Intro-02_Seq.SequenceDirector_C
// 0x0008 (0x0040 - 0x0038)
class TG_IntroMinus02_Seq::USequenceDirector_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void SequenceEvent__ENTRYPOINTSequenceDirector_2(TScriptInterface<class IBPi_Testgate_C> Target);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(TScriptInterface<class IBPi_Testgate_C> Target);
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(TScriptInterface<class IBPi_Testgate_C> Target);
	void CloseLights(TScriptInterface<class IBPi_Testgate_C> Target);
	void Stop_Drug_Particles(TScriptInterface<class IBPi_Testgate_C> Target);
	void StartDrugParticles(TScriptInterface<class IBPi_Testgate_C> Target);
	void bpiBlurEntity();
	void StartDrugSpray();
	void StopDrugSpray();
	void CloseLight();
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass TG_Intro-02_Seq.SequenceDirector_C", true, "SequenceDirector_C">();
	}
	static class TG_IntroMinus02_Seq::USequenceDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<TG_IntroMinus02_Seq::USequenceDirector_C>();
	}
};
static_assert(alignof(TG_IntroMinus02_Seq::USequenceDirector_C) == 0x000008, "Wrong alignment on TG_IntroMinus02_Seq::USequenceDirector_C");
static_assert(sizeof(TG_IntroMinus02_Seq::USequenceDirector_C) == 0x000040, "Wrong size on TG_IntroMinus02_Seq::USequenceDirector_C");
static_assert(offsetof(TG_IntroMinus02_Seq::USequenceDirector_C, UberGraphFrame) == 0x000038, "Member 'TG_IntroMinus02_Seq::USequenceDirector_C::UberGraphFrame' has a wrong offset!");

}

