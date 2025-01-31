#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SJ_FallingObject_FrameMinus01_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SJ_FallingObject_Base_BP_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SJ_FallingObject_Frame-01_BP.SJ_FallingObject_Frame-01_BP_C
// 0x0020 (0x05A0 - 0x0580)
class ASJ_FallingObject_FrameMinus01_BP_C final : public ASJ_FallingObject_Base_BP_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SJ_FallingObject_FrameMinus01_BP_C; // 0x0580(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0588(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem;                                    // 0x0590(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          bGlassBroken;                                      // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_SJ_FallingObject_FrameMinus01_BP(int32 EntryPoint);
	void Event_OnResetStage();
	void HitGround();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SJ_FallingObject_Frame-01_BP_C">();
	}
	static class ASJ_FallingObject_FrameMinus01_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASJ_FallingObject_FrameMinus01_BP_C>();
	}
};
static_assert(alignof(ASJ_FallingObject_FrameMinus01_BP_C) == 0x000010, "Wrong alignment on ASJ_FallingObject_FrameMinus01_BP_C");
static_assert(sizeof(ASJ_FallingObject_FrameMinus01_BP_C) == 0x0005A0, "Wrong size on ASJ_FallingObject_FrameMinus01_BP_C");
static_assert(offsetof(ASJ_FallingObject_FrameMinus01_BP_C, UberGraphFrame_SJ_FallingObject_FrameMinus01_BP_C) == 0x000580, "Member 'ASJ_FallingObject_FrameMinus01_BP_C::UberGraphFrame_SJ_FallingObject_FrameMinus01_BP_C' has a wrong offset!");
static_assert(offsetof(ASJ_FallingObject_FrameMinus01_BP_C, Billboard) == 0x000588, "Member 'ASJ_FallingObject_FrameMinus01_BP_C::Billboard' has a wrong offset!");
static_assert(offsetof(ASJ_FallingObject_FrameMinus01_BP_C, ParticleSystem) == 0x000590, "Member 'ASJ_FallingObject_FrameMinus01_BP_C::ParticleSystem' has a wrong offset!");
static_assert(offsetof(ASJ_FallingObject_FrameMinus01_BP_C, bGlassBroken) == 0x000598, "Member 'ASJ_FallingObject_FrameMinus01_BP_C::bGlassBroken' has a wrong offset!");

}

