#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TileMidMoldingMinus02A_BP

#include "Basic.hpp"

#include "GrayBoxMat_ENU_structs.hpp"
#include "MeshPopulate_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TileMidMolding-02A_BP.TileMidMolding-02A_BP_C
// 0x0000 (0x0420 - 0x0420)
class ATileMidMoldingMinus02A_BP_C final : public AMeshPopulate_BP_C
{
public:
	EGrayBoxMat_ENU                               Materials;                                         // 0x0419(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseOverwriteMaterials;                             // 0x041A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TileMidMolding-02A_BP_C">();
	}
	static class ATileMidMoldingMinus02A_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATileMidMoldingMinus02A_BP_C>();
	}
};
static_assert(alignof(ATileMidMoldingMinus02A_BP_C) == 0x000008, "Wrong alignment on ATileMidMoldingMinus02A_BP_C");
static_assert(sizeof(ATileMidMoldingMinus02A_BP_C) == 0x000420, "Wrong size on ATileMidMoldingMinus02A_BP_C");
static_assert(offsetof(ATileMidMoldingMinus02A_BP_C, Materials) == 0x000419, "Member 'ATileMidMoldingMinus02A_BP_C::Materials' has a wrong offset!");
static_assert(offsetof(ATileMidMoldingMinus02A_BP_C, UseOverwriteMaterials) == 0x00041A, "Member 'ATileMidMoldingMinus02A_BP_C::UseOverwriteMaterials' has a wrong offset!");

}

