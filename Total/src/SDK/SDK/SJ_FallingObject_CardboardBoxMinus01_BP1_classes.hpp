#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SJ_FallingObject_CardboardBoxMinus01_BP1

#include "Basic.hpp"

#include "SJ_FallingObject_Base_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SJ_FallingObject_CardboardBox-01_BP1.SJ_FallingObject_CardboardBox-01_BP1_C
// 0x0010 (0x0590 - 0x0580)
class ASJ_FallingObject_CardboardBoxMinus01_BP1_C final : public ASJ_FallingObject_Base_BP_C
{
public:
	class UBillboardComponent*                    Billboard;                                         // 0x0580(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SJ_FallingObject_CardboardBox-01_BP1_C">();
	}
	static class ASJ_FallingObject_CardboardBoxMinus01_BP1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASJ_FallingObject_CardboardBoxMinus01_BP1_C>();
	}
};
static_assert(alignof(ASJ_FallingObject_CardboardBoxMinus01_BP1_C) == 0x000010, "Wrong alignment on ASJ_FallingObject_CardboardBoxMinus01_BP1_C");
static_assert(sizeof(ASJ_FallingObject_CardboardBoxMinus01_BP1_C) == 0x000590, "Wrong size on ASJ_FallingObject_CardboardBoxMinus01_BP1_C");
static_assert(offsetof(ASJ_FallingObject_CardboardBoxMinus01_BP1_C, Billboard) == 0x000580, "Member 'ASJ_FallingObject_CardboardBoxMinus01_BP1_C::Billboard' has a wrong offset!");

}

