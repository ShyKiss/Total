#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FX_ENV_WindGustField_Slow

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "OPP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FX_ENV_WindGustField_Slow.BP_FX_ENV_WindGustField_Slow_C
// 0x0078 (0x02C0 - 0x0248)
class ABP_FX_ENV_WindGustField_Slow_C final : public ARBClientOnlyActor
{
public:
	class UNiagaraComponent*                      WindPtc;                                           // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EmitterSizeAlt;                                    // 0x0258(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WindDirection;                                     // 0x0264(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindSpeedMulti;                                    // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindGustRateAlt;                                   // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LeafEmitterOffset;                                 // 0x0278(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LeafEmitterSizeAlt;                                // 0x0284(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FallingDebrisRa;                                   // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LeafKillzoneOffset;                                // 0x0294(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           WindeColor;                                        // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindAlpha;                                         // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GustSize;                                          // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FallingDebrisRate_backup;                          // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FX_ENV_WindGustField_Slow_C">();
	}
	static class ABP_FX_ENV_WindGustField_Slow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FX_ENV_WindGustField_Slow_C>();
	}
};
static_assert(alignof(ABP_FX_ENV_WindGustField_Slow_C) == 0x000008, "Wrong alignment on ABP_FX_ENV_WindGustField_Slow_C");
static_assert(sizeof(ABP_FX_ENV_WindGustField_Slow_C) == 0x0002C0, "Wrong size on ABP_FX_ENV_WindGustField_Slow_C");
static_assert(offsetof(ABP_FX_ENV_WindGustField_Slow_C, WindPtc) == 0x000248, "Member 'ABP_FX_ENV_WindGustField_Slow_C::WindPtc' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_WindGustField_Slow_C, DefaultSceneRoot) == 0x000250, "Member 'ABP_FX_ENV_WindGustField_Slow_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_WindGustField_Slow_C, EmitterSizeAlt) == 0x000258, "Member 'ABP_FX_ENV_WindGustField_Slow_C::EmitterSizeAlt' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_WindGustField_Slow_C, WindDirection) == 0x000264, "Member 'ABP_FX_ENV_WindGustField_Slow_C::WindDirection' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_WindGustField_Slow_C, WindSpeedMulti) == 0x000270, "Member 'ABP_FX_ENV_WindGustField_Slow_C::WindSpeedMulti' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_WindGustField_Slow_C, WindGustRateAlt) == 0x000274, "Member 'ABP_FX_ENV_WindGustField_Slow_C::WindGustRateAlt' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_WindGustField_Slow_C, LeafEmitterOffset) == 0x000278, "Member 'ABP_FX_ENV_WindGustField_Slow_C::LeafEmitterOffset' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_WindGustField_Slow_C, LeafEmitterSizeAlt) == 0x000284, "Member 'ABP_FX_ENV_WindGustField_Slow_C::LeafEmitterSizeAlt' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_WindGustField_Slow_C, FallingDebrisRa) == 0x000290, "Member 'ABP_FX_ENV_WindGustField_Slow_C::FallingDebrisRa' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_WindGustField_Slow_C, LeafKillzoneOffset) == 0x000294, "Member 'ABP_FX_ENV_WindGustField_Slow_C::LeafKillzoneOffset' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_WindGustField_Slow_C, WindeColor) == 0x0002A0, "Member 'ABP_FX_ENV_WindGustField_Slow_C::WindeColor' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_WindGustField_Slow_C, WindAlpha) == 0x0002B0, "Member 'ABP_FX_ENV_WindGustField_Slow_C::WindAlpha' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_WindGustField_Slow_C, GustSize) == 0x0002B4, "Member 'ABP_FX_ENV_WindGustField_Slow_C::GustSize' has a wrong offset!");
static_assert(offsetof(ABP_FX_ENV_WindGustField_Slow_C, FallingDebrisRate_backup) == 0x0002B8, "Member 'ABP_FX_ENV_WindGustField_Slow_C::FallingDebrisRate_backup' has a wrong offset!");

}
