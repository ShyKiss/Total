#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EmptyGridElement

#include "Basic.hpp"

#include "OPP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EmptyGridElement.EmptyGridElement_C
// 0x0000 (0x0268 - 0x0268)
class UEmptyGridElement_C final : public URBUserWidget
{
public:
	void IsElementEmpty(bool* bIsEmpty);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmptyGridElement_C">();
	}
	static class UEmptyGridElement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmptyGridElement_C>();
	}
};
static_assert(alignof(UEmptyGridElement_C) == 0x000008, "Wrong alignment on UEmptyGridElement_C");
static_assert(sizeof(UEmptyGridElement_C) == 0x000268, "Wrong size on UEmptyGridElement_C");

}
