#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CeilingLightBulbBase

#include "Basic.hpp"

#include "RBLight_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CeilingLightBulbBase.CeilingLightBulbBase_C
// 0x0020 (0x0790 - 0x0770)
class ACeilingLightBulbBase_C : public ARBLight_BP_C
{
public:
	class URBVolumetricFogLightComponent*         RBVolumetricFogLight;                              // 0x0770(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_Dual;                                   // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSpotLightComponent*                  RBSpotLight_Movable;                               // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBSpotLightComponent*                  RBSpotLight_Static;                                // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CeilingLightBulbBase_C">();
	}
	static class ACeilingLightBulbBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACeilingLightBulbBase_C>();
	}
};
static_assert(alignof(ACeilingLightBulbBase_C) == 0x000010, "Wrong alignment on ACeilingLightBulbBase_C");
static_assert(sizeof(ACeilingLightBulbBase_C) == 0x000790, "Wrong size on ACeilingLightBulbBase_C");
static_assert(offsetof(ACeilingLightBulbBase_C, RBVolumetricFogLight) == 0x000770, "Member 'ACeilingLightBulbBase_C::RBVolumetricFogLight' has a wrong offset!");
static_assert(offsetof(ACeilingLightBulbBase_C, PointLight_Dual) == 0x000778, "Member 'ACeilingLightBulbBase_C::PointLight_Dual' has a wrong offset!");
static_assert(offsetof(ACeilingLightBulbBase_C, RBSpotLight_Movable) == 0x000780, "Member 'ACeilingLightBulbBase_C::RBSpotLight_Movable' has a wrong offset!");
static_assert(offsetof(ACeilingLightBulbBase_C, RBSpotLight_Static) == 0x000788, "Member 'ACeilingLightBulbBase_C::RBSpotLight_Static' has a wrong offset!");

}

