#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SJ_JollyChimpMinus01_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "RBScareJumpBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SJ_JollyChimp-01_BP.SJ_JollyChimp-01_BP_C
// 0x0010 (0x0520 - 0x0510)
class ASJ_JollyChimpMinus01_BP_C final : public ARBScareJumpBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_SJ_JollyChimpMinus01_BP_C;          // 0x0508(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0510(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Spin_Chimp_Rate;                                   // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SJ_JollyChimpMinus01_BP(int32 EntryPoint);
	void Event_OnResetStage();
	void Event_OnTriggered();
	void ReceiveBeginPlay();
	void Event_OnUntriggered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SJ_JollyChimp-01_BP_C">();
	}
	static class ASJ_JollyChimpMinus01_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASJ_JollyChimpMinus01_BP_C>();
	}
};
static_assert(alignof(ASJ_JollyChimpMinus01_BP_C) == 0x000010, "Wrong alignment on ASJ_JollyChimpMinus01_BP_C");
static_assert(sizeof(ASJ_JollyChimpMinus01_BP_C) == 0x000520, "Wrong size on ASJ_JollyChimpMinus01_BP_C");
static_assert(offsetof(ASJ_JollyChimpMinus01_BP_C, UberGraphFrame_SJ_JollyChimpMinus01_BP_C) == 0x000508, "Member 'ASJ_JollyChimpMinus01_BP_C::UberGraphFrame_SJ_JollyChimpMinus01_BP_C' has a wrong offset!");
static_assert(offsetof(ASJ_JollyChimpMinus01_BP_C, SkeletalMesh) == 0x000510, "Member 'ASJ_JollyChimpMinus01_BP_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ASJ_JollyChimpMinus01_BP_C, Spin_Chimp_Rate) == 0x000518, "Member 'ASJ_JollyChimpMinus01_BP_C::Spin_Chimp_Rate' has a wrong offset!");

}

