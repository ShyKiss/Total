#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyCell_StatBoard

#include "Basic.hpp"

#include "Slate_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LobbyCell_StatBoard.LobbyCell_StatBoard_C
// 0x0018 (0x0278 - 0x0260)
class ULobbyCell_StatBoard_C final : public UUserWidget
{
public:
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_TXT;                                          // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Stat_TXT;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetCollapsed(bool bCollapsed);
	void SetJustification(bool bRight);
	void UpdateStat(const class FText& InName, const class FText& InStat);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LobbyCell_StatBoard_C">();
	}
	static class ULobbyCell_StatBoard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULobbyCell_StatBoard_C>();
	}
};
static_assert(alignof(ULobbyCell_StatBoard_C) == 0x000008, "Wrong alignment on ULobbyCell_StatBoard_C");
static_assert(sizeof(ULobbyCell_StatBoard_C) == 0x000278, "Wrong size on ULobbyCell_StatBoard_C");
static_assert(offsetof(ULobbyCell_StatBoard_C, HorizontalBox_0) == 0x000260, "Member 'ULobbyCell_StatBoard_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(ULobbyCell_StatBoard_C, Name_TXT) == 0x000268, "Member 'ULobbyCell_StatBoard_C::Name_TXT' has a wrong offset!");
static_assert(offsetof(ULobbyCell_StatBoard_C, Stat_TXT) == 0x000270, "Member 'ULobbyCell_StatBoard_C::Stat_TXT' has a wrong offset!");

}
