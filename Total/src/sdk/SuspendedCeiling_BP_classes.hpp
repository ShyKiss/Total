#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SuspendedCeiling_BP

#include "Basic.hpp"

#include "ModuleMeshDataMinus02_structs.hpp"
#include "MeshPopulate_Parent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SuspendedCeiling_BP.SuspendedCeiling_BP_C
// 0x0030 (0x0410 - 0x03E0)
class ASuspendedCeiling_BP_C final : public AMeshPopulate_Parent_C
{
public:
	TArray<struct FModuleMeshDataMinus02>         TileGroup;                                         // 0x03E0(0x0010)(Edit, BlueprintVisible)
	bool                                          UseRoof;                                           // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A13[0x7];                                     // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FModuleMeshDataMinus02>         TileBackGroup;                                     // 0x03F8(0x0010)(Edit, BlueprintVisible)
	bool                                          UseShadowMesh;                                     // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SuspendedCeiling_BP_C">();
	}
	static class ASuspendedCeiling_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASuspendedCeiling_BP_C>();
	}
};
static_assert(alignof(ASuspendedCeiling_BP_C) == 0x000008, "Wrong alignment on ASuspendedCeiling_BP_C");
static_assert(sizeof(ASuspendedCeiling_BP_C) == 0x000410, "Wrong size on ASuspendedCeiling_BP_C");
static_assert(offsetof(ASuspendedCeiling_BP_C, TileGroup) == 0x0003E0, "Member 'ASuspendedCeiling_BP_C::TileGroup' has a wrong offset!");
static_assert(offsetof(ASuspendedCeiling_BP_C, UseRoof) == 0x0003F0, "Member 'ASuspendedCeiling_BP_C::UseRoof' has a wrong offset!");
static_assert(offsetof(ASuspendedCeiling_BP_C, TileBackGroup) == 0x0003F8, "Member 'ASuspendedCeiling_BP_C::TileBackGroup' has a wrong offset!");
static_assert(offsetof(ASuspendedCeiling_BP_C, UseShadowMesh) == 0x000408, "Member 'ASuspendedCeiling_BP_C::UseShadowMesh' has a wrong offset!");

}
