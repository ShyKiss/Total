#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hidespot_DeskWoodMinus02_BP

#include "Basic.hpp"

#include "Hidespot_DeskMinus02_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Hidespot_DeskWood-02_BP.Hidespot_DeskWood-02_BP_C
// 0x0030 (0x0718 - 0x06E8)
class AHidespot_DeskWoodMinus02_BP_C final : public AHidespot_DeskMinus02_BP_C
{
public:
	class UStaticMeshComponent*                   DeskWoodDrawerMinus01;                             // 0x06E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DeskWoodDrawerMinus06;                             // 0x06F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DeskWoodDrawerMinus05;                             // 0x06F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DeskWoodDrawerMinus04;                             // 0x0700(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DeskWoodDrawerMinus03;                             // 0x0708(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DeskWoodDrawerMinus02;                             // 0x0710(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();
	void RandomizeDrawer(class USceneComponent* Component, int32 Seed);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Hidespot_DeskWood-02_BP_C">();
	}
	static class AHidespot_DeskWoodMinus02_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHidespot_DeskWoodMinus02_BP_C>();
	}
};
static_assert(alignof(AHidespot_DeskWoodMinus02_BP_C) == 0x000008, "Wrong alignment on AHidespot_DeskWoodMinus02_BP_C");
static_assert(sizeof(AHidespot_DeskWoodMinus02_BP_C) == 0x000718, "Wrong size on AHidespot_DeskWoodMinus02_BP_C");
static_assert(offsetof(AHidespot_DeskWoodMinus02_BP_C, DeskWoodDrawerMinus01) == 0x0006E8, "Member 'AHidespot_DeskWoodMinus02_BP_C::DeskWoodDrawerMinus01' has a wrong offset!");
static_assert(offsetof(AHidespot_DeskWoodMinus02_BP_C, DeskWoodDrawerMinus06) == 0x0006F0, "Member 'AHidespot_DeskWoodMinus02_BP_C::DeskWoodDrawerMinus06' has a wrong offset!");
static_assert(offsetof(AHidespot_DeskWoodMinus02_BP_C, DeskWoodDrawerMinus05) == 0x0006F8, "Member 'AHidespot_DeskWoodMinus02_BP_C::DeskWoodDrawerMinus05' has a wrong offset!");
static_assert(offsetof(AHidespot_DeskWoodMinus02_BP_C, DeskWoodDrawerMinus04) == 0x000700, "Member 'AHidespot_DeskWoodMinus02_BP_C::DeskWoodDrawerMinus04' has a wrong offset!");
static_assert(offsetof(AHidespot_DeskWoodMinus02_BP_C, DeskWoodDrawerMinus03) == 0x000708, "Member 'AHidespot_DeskWoodMinus02_BP_C::DeskWoodDrawerMinus03' has a wrong offset!");
static_assert(offsetof(AHidespot_DeskWoodMinus02_BP_C, DeskWoodDrawerMinus02) == 0x000710, "Member 'AHidespot_DeskWoodMinus02_BP_C::DeskWoodDrawerMinus02' has a wrong offset!");

}

