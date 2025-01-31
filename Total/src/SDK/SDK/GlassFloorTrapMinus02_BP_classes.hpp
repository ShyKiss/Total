#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GlassFloorTrapMinus02_BP

#include "Basic.hpp"

#include "GlassFloorTrap_Base_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GlassFloorTrap-02_BP.GlassFloorTrap-02_BP_C
// 0x0020 (0x02B8 - 0x0298)
class AGlassFloorTrapMinus02_BP_C final : public AGlassFloorTrap_Base_BP_C
{
public:
	class URBEditorClearanceCollisionBoxComponent* RBEditorClearanceCollisionBox;                     // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBFloorMaterialBoxComponent*           RBFloorMaterialBox1;                               // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBFloorMaterialBoxComponent*           RBFloorMaterialBox3;                               // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URBFloorMaterialBoxComponent*           RBFloorMaterialBox2;                               // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GlassFloorTrap-02_BP_C">();
	}
	static class AGlassFloorTrapMinus02_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGlassFloorTrapMinus02_BP_C>();
	}
};
static_assert(alignof(AGlassFloorTrapMinus02_BP_C) == 0x000008, "Wrong alignment on AGlassFloorTrapMinus02_BP_C");
static_assert(sizeof(AGlassFloorTrapMinus02_BP_C) == 0x0002B8, "Wrong size on AGlassFloorTrapMinus02_BP_C");
static_assert(offsetof(AGlassFloorTrapMinus02_BP_C, RBEditorClearanceCollisionBox) == 0x000298, "Member 'AGlassFloorTrapMinus02_BP_C::RBEditorClearanceCollisionBox' has a wrong offset!");
static_assert(offsetof(AGlassFloorTrapMinus02_BP_C, RBFloorMaterialBox1) == 0x0002A0, "Member 'AGlassFloorTrapMinus02_BP_C::RBFloorMaterialBox1' has a wrong offset!");
static_assert(offsetof(AGlassFloorTrapMinus02_BP_C, RBFloorMaterialBox3) == 0x0002A8, "Member 'AGlassFloorTrapMinus02_BP_C::RBFloorMaterialBox3' has a wrong offset!");
static_assert(offsetof(AGlassFloorTrapMinus02_BP_C, RBFloorMaterialBox2) == 0x0002B0, "Member 'AGlassFloorTrapMinus02_BP_C::RBFloorMaterialBox2' has a wrong offset!");

}

