#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CeilingFluorescentLightBaseMinus02

#include "Basic.hpp"

#include "RBLight_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CeilingFluorescentLightBase-02.CeilingFluorescentLightBase-02_C
// 0x0020 (0x07C0 - 0x07A0)
class ACeilingFluorescentLightBaseMinus02_C : public ARBLight_BP_C
{
public:
	class UPointLightComponent*                   PointLight_Dual;                                   // 0x07A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBVolumetricFogLightComponent*         RBVolumetricFogLight;                              // 0x07A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight_Static;                                  // 0x07B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight_Movable;                                 // 0x07B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CeilingFluorescentLightBase-02_C">();
	}
	static class ACeilingFluorescentLightBaseMinus02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACeilingFluorescentLightBaseMinus02_C>();
	}
};
static_assert(alignof(ACeilingFluorescentLightBaseMinus02_C) == 0x000010, "Wrong alignment on ACeilingFluorescentLightBaseMinus02_C");
static_assert(sizeof(ACeilingFluorescentLightBaseMinus02_C) == 0x0007C0, "Wrong size on ACeilingFluorescentLightBaseMinus02_C");
static_assert(offsetof(ACeilingFluorescentLightBaseMinus02_C, PointLight_Dual) == 0x0007A0, "Member 'ACeilingFluorescentLightBaseMinus02_C::PointLight_Dual' has a wrong offset!");
static_assert(offsetof(ACeilingFluorescentLightBaseMinus02_C, RBVolumetricFogLight) == 0x0007A8, "Member 'ACeilingFluorescentLightBaseMinus02_C::RBVolumetricFogLight' has a wrong offset!");
static_assert(offsetof(ACeilingFluorescentLightBaseMinus02_C, SpotLight_Static) == 0x0007B0, "Member 'ACeilingFluorescentLightBaseMinus02_C::SpotLight_Static' has a wrong offset!");
static_assert(offsetof(ACeilingFluorescentLightBaseMinus02_C, SpotLight_Movable) == 0x0007B8, "Member 'ACeilingFluorescentLightBaseMinus02_C::SpotLight_Movable' has a wrong offset!");

}
