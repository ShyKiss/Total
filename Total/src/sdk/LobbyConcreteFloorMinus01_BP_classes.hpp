#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyConcreteFloorMinus01_BP

#include "Basic.hpp"

#include "GrayBoxMat_ENU_structs.hpp"
#include "Floor_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass LobbyConcreteFloor-01_BP.LobbyConcreteFloor-01_BP_C
// 0x0008 (0x0438 - 0x0430)
class ALobbyConcreteFloorMinus01_BP_C final : public AFloor_BP_C
{
public:
	EGrayBoxMat_ENU                               FloorMaterials;                                    // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGrayBoxMat_ENU                               CeilingMaterials;                                  // 0x0431(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseOverwriteMaterials;                             // 0x0432(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LobbyConcreteFloor-01_BP_C">();
	}
	static class ALobbyConcreteFloorMinus01_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobbyConcreteFloorMinus01_BP_C>();
	}
};
static_assert(alignof(ALobbyConcreteFloorMinus01_BP_C) == 0x000008, "Wrong alignment on ALobbyConcreteFloorMinus01_BP_C");
static_assert(sizeof(ALobbyConcreteFloorMinus01_BP_C) == 0x000438, "Wrong size on ALobbyConcreteFloorMinus01_BP_C");
static_assert(offsetof(ALobbyConcreteFloorMinus01_BP_C, FloorMaterials) == 0x000430, "Member 'ALobbyConcreteFloorMinus01_BP_C::FloorMaterials' has a wrong offset!");
static_assert(offsetof(ALobbyConcreteFloorMinus01_BP_C, CeilingMaterials) == 0x000431, "Member 'ALobbyConcreteFloorMinus01_BP_C::CeilingMaterials' has a wrong offset!");
static_assert(offsetof(ALobbyConcreteFloorMinus01_BP_C, UseOverwriteMaterials) == 0x000432, "Member 'ALobbyConcreteFloorMinus01_BP_C::UseOverwriteMaterials' has a wrong offset!");

}
