#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShadowyDame_QuestGiver_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BaseAnimatedQuestGiver_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ShadowyDame_QuestGiver_BP.ShadowyDame_QuestGiver_BP_C
// 0x0048 (0x0500 - 0x04B8)
class AShadowyDame_QuestGiver_BP_C final : public ABaseAnimatedQuestGiver_BP_C
{
public:
	class USkeletalMeshComponent*                 ESOP;                                              // 0x04B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ESOP_Lever;                                        // 0x04C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ESOP_Battery;                                      // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBObjectiveActorComponent*             RBObjectiveActor;                                  // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Doris_Set;                                         // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   BookMinus01;                                       // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cigarette;                                         // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Ngr_CigarSmk;                                      // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLightingChannels                      Lighting_Channels;                                 // 0x04F8(0x0001)(Edit, BlueprintVisible, NoDestructor)

public:
	void SetLightChannels();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShadowyDame_QuestGiver_BP_C">();
	}
	static class AShadowyDame_QuestGiver_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AShadowyDame_QuestGiver_BP_C>();
	}
};
static_assert(alignof(AShadowyDame_QuestGiver_BP_C) == 0x000008, "Wrong alignment on AShadowyDame_QuestGiver_BP_C");
static_assert(sizeof(AShadowyDame_QuestGiver_BP_C) == 0x000500, "Wrong size on AShadowyDame_QuestGiver_BP_C");
static_assert(offsetof(AShadowyDame_QuestGiver_BP_C, ESOP) == 0x0004B8, "Member 'AShadowyDame_QuestGiver_BP_C::ESOP' has a wrong offset!");
static_assert(offsetof(AShadowyDame_QuestGiver_BP_C, ESOP_Lever) == 0x0004C0, "Member 'AShadowyDame_QuestGiver_BP_C::ESOP_Lever' has a wrong offset!");
static_assert(offsetof(AShadowyDame_QuestGiver_BP_C, ESOP_Battery) == 0x0004C8, "Member 'AShadowyDame_QuestGiver_BP_C::ESOP_Battery' has a wrong offset!");
static_assert(offsetof(AShadowyDame_QuestGiver_BP_C, RBObjectiveActor) == 0x0004D0, "Member 'AShadowyDame_QuestGiver_BP_C::RBObjectiveActor' has a wrong offset!");
static_assert(offsetof(AShadowyDame_QuestGiver_BP_C, Doris_Set) == 0x0004D8, "Member 'AShadowyDame_QuestGiver_BP_C::Doris_Set' has a wrong offset!");
static_assert(offsetof(AShadowyDame_QuestGiver_BP_C, BookMinus01) == 0x0004E0, "Member 'AShadowyDame_QuestGiver_BP_C::BookMinus01' has a wrong offset!");
static_assert(offsetof(AShadowyDame_QuestGiver_BP_C, Cigarette) == 0x0004E8, "Member 'AShadowyDame_QuestGiver_BP_C::Cigarette' has a wrong offset!");
static_assert(offsetof(AShadowyDame_QuestGiver_BP_C, Ngr_CigarSmk) == 0x0004F0, "Member 'AShadowyDame_QuestGiver_BP_C::Ngr_CigarSmk' has a wrong offset!");
static_assert(offsetof(AShadowyDame_QuestGiver_BP_C, Lighting_Channels) == 0x0004F8, "Member 'AShadowyDame_QuestGiver_BP_C::Lighting_Channels' has a wrong offset!");

}
