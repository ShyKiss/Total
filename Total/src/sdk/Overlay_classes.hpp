#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Overlay

#include "Basic.hpp"

#include "Overlay_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class Overlay.Overlays
// 0x0000 (0x0028 - 0x0028)
class UOverlays : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"Overlays">();
	}
	static class UOverlays* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOverlays>();
	}
};
static_assert(alignof(UOverlays) == 0x000008, "Wrong alignment on UOverlays");
static_assert(sizeof(UOverlays) == 0x000028, "Wrong size on UOverlays");

// Class Overlay.BasicOverlays
// 0x0010 (0x0038 - 0x0028)
class UBasicOverlays final : public UOverlays
{
public:
	TArray<struct FOverlayItem>                   Overlays;                                          // 0x0028(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BasicOverlays">();
	}
	static class UBasicOverlays* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBasicOverlays>();
	}
};
static_assert(alignof(UBasicOverlays) == 0x000008, "Wrong alignment on UBasicOverlays");
static_assert(sizeof(UBasicOverlays) == 0x000038, "Wrong size on UBasicOverlays");
static_assert(offsetof(UBasicOverlays, Overlays) == 0x000028, "Member 'UBasicOverlays::Overlays' has a wrong offset!");

// Class Overlay.LocalizedOverlays
// 0x0058 (0x0080 - 0x0028)
class ULocalizedOverlays final : public UOverlays
{
public:
	class UBasicOverlays*                         DefaultOverlays;                                   // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class UBasicOverlays*>    LocaleToOverlaysMap;                               // 0x0030(0x0050)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LocalizedOverlays">();
	}
	static class ULocalizedOverlays* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalizedOverlays>();
	}
};
static_assert(alignof(ULocalizedOverlays) == 0x000008, "Wrong alignment on ULocalizedOverlays");
static_assert(sizeof(ULocalizedOverlays) == 0x000080, "Wrong size on ULocalizedOverlays");
static_assert(offsetof(ULocalizedOverlays, DefaultOverlays) == 0x000028, "Member 'ULocalizedOverlays::DefaultOverlays' has a wrong offset!");
static_assert(offsetof(ULocalizedOverlays, LocaleToOverlaysMap) == 0x000030, "Member 'ULocalizedOverlays::LocaleToOverlaysMap' has a wrong offset!");

}
