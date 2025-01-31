#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TG_RorchachMinus01_FlassSeq

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LevelSequence_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TG_Rorchach-01_FlassSeq.SequenceDirector_C
// 0x0008 (0x0040 - 0x0038)
class TG_RorchachMinus01_FlassSeq::USequenceDirector_C final : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0038(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void SequenceEvent__ENTRYPOINTSequenceDirector_0(class AEmitter* SmokeCorridor400_PS);
	void SmokeCorridor400_PS_Event_0(class AEmitter* SmokeCorridor400_PS);
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BlueprintGeneratedClass TG_Rorchach-01_FlassSeq.SequenceDirector_C", true, "SequenceDirector_C">();
	}
	static class TG_RorchachMinus01_FlassSeq::USequenceDirector_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<TG_RorchachMinus01_FlassSeq::USequenceDirector_C>();
	}
};
static_assert(alignof(TG_RorchachMinus01_FlassSeq::USequenceDirector_C) == 0x000008, "Wrong alignment on TG_RorchachMinus01_FlassSeq::USequenceDirector_C");
static_assert(sizeof(TG_RorchachMinus01_FlassSeq::USequenceDirector_C) == 0x000040, "Wrong size on TG_RorchachMinus01_FlassSeq::USequenceDirector_C");
static_assert(offsetof(TG_RorchachMinus01_FlassSeq::USequenceDirector_C, UberGraphFrame) == 0x000038, "Member 'TG_RorchachMinus01_FlassSeq::USequenceDirector_C::UberGraphFrame' has a wrong offset!");

}

