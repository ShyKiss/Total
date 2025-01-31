#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FluorescentLightSwitcherBaseMinus01

#include "Basic.hpp"

#include "RBLight_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FluorescentLightSwitcherBase-01.FluorescentLightSwitcherBase-01_C
// 0x0050 (0x07C0 - 0x0770)
#pragma pack(push, 0x1)
class alignas(0x10) AFluorescentLightSwitcherBaseMinus01_C : public ARBLight_BP_C
{
public:
	class URBSpotLightComponent*                  RBSpotLight_Static;                                // 0x0770(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight_Dual;                                   // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight_Movable;                                 // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   FluorescentLightMesh;                              // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	uint8                                         TubesAmount;                                       // 0x0790(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_791[0x7];                                      // 0x0791(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            OneTube;                                           // 0x0798(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            TwoTubes;                                          // 0x07A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            ThreeTubes;                                        // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            FourTubes;                                         // 0x07B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FluorescentLightSwitcherBase-01_C">();
	}
	static class AFluorescentLightSwitcherBaseMinus01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFluorescentLightSwitcherBaseMinus01_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(AFluorescentLightSwitcherBaseMinus01_C) == 0x000010, "Wrong alignment on AFluorescentLightSwitcherBaseMinus01_C");
static_assert(sizeof(AFluorescentLightSwitcherBaseMinus01_C) == 0x0007C0, "Wrong size on AFluorescentLightSwitcherBaseMinus01_C");
static_assert(offsetof(AFluorescentLightSwitcherBaseMinus01_C, RBSpotLight_Static) == 0x000770, "Member 'AFluorescentLightSwitcherBaseMinus01_C::RBSpotLight_Static' has a wrong offset!");
static_assert(offsetof(AFluorescentLightSwitcherBaseMinus01_C, PointLight_Dual) == 0x000778, "Member 'AFluorescentLightSwitcherBaseMinus01_C::PointLight_Dual' has a wrong offset!");
static_assert(offsetof(AFluorescentLightSwitcherBaseMinus01_C, SpotLight_Movable) == 0x000780, "Member 'AFluorescentLightSwitcherBaseMinus01_C::SpotLight_Movable' has a wrong offset!");
static_assert(offsetof(AFluorescentLightSwitcherBaseMinus01_C, FluorescentLightMesh) == 0x000788, "Member 'AFluorescentLightSwitcherBaseMinus01_C::FluorescentLightMesh' has a wrong offset!");
static_assert(offsetof(AFluorescentLightSwitcherBaseMinus01_C, TubesAmount) == 0x000790, "Member 'AFluorescentLightSwitcherBaseMinus01_C::TubesAmount' has a wrong offset!");
static_assert(offsetof(AFluorescentLightSwitcherBaseMinus01_C, OneTube) == 0x000798, "Member 'AFluorescentLightSwitcherBaseMinus01_C::OneTube' has a wrong offset!");
static_assert(offsetof(AFluorescentLightSwitcherBaseMinus01_C, TwoTubes) == 0x0007A0, "Member 'AFluorescentLightSwitcherBaseMinus01_C::TwoTubes' has a wrong offset!");
static_assert(offsetof(AFluorescentLightSwitcherBaseMinus01_C, ThreeTubes) == 0x0007A8, "Member 'AFluorescentLightSwitcherBaseMinus01_C::ThreeTubes' has a wrong offset!");
static_assert(offsetof(AFluorescentLightSwitcherBaseMinus01_C, FourTubes) == 0x0007B0, "Member 'AFluorescentLightSwitcherBaseMinus01_C::FourTubes' has a wrong offset!");

}

