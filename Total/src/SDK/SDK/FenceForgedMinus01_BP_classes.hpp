#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FenceForgedMinus01_BP

#include "Basic.hpp"

#include "MeshPopulateRow_BP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FenceForged-01_BP.FenceForged-01_BP_C
// 0x0020 (0x0450 - 0x0430)
class AFenceForgedMinus01_BP_C final : public AMeshPopulateRow_BP_C
{
public:
	bool                                          UseFirstPost;                                      // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseCorner;                                         // 0x0431(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseCornerOuter;                                    // 0x0432(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseEndCorner;                                      // 0x0433(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UseCorneEndOuter;                                  // 0x0434(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_435[0x3];                                      // 0x0435(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Post;                                              // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Corner;                                            // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            CornerOuter;                                       // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FenceForged-01_BP_C">();
	}
	static class AFenceForgedMinus01_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFenceForgedMinus01_BP_C>();
	}
};
static_assert(alignof(AFenceForgedMinus01_BP_C) == 0x000008, "Wrong alignment on AFenceForgedMinus01_BP_C");
static_assert(sizeof(AFenceForgedMinus01_BP_C) == 0x000450, "Wrong size on AFenceForgedMinus01_BP_C");
static_assert(offsetof(AFenceForgedMinus01_BP_C, UseFirstPost) == 0x000430, "Member 'AFenceForgedMinus01_BP_C::UseFirstPost' has a wrong offset!");
static_assert(offsetof(AFenceForgedMinus01_BP_C, UseCorner) == 0x000431, "Member 'AFenceForgedMinus01_BP_C::UseCorner' has a wrong offset!");
static_assert(offsetof(AFenceForgedMinus01_BP_C, UseCornerOuter) == 0x000432, "Member 'AFenceForgedMinus01_BP_C::UseCornerOuter' has a wrong offset!");
static_assert(offsetof(AFenceForgedMinus01_BP_C, UseEndCorner) == 0x000433, "Member 'AFenceForgedMinus01_BP_C::UseEndCorner' has a wrong offset!");
static_assert(offsetof(AFenceForgedMinus01_BP_C, UseCorneEndOuter) == 0x000434, "Member 'AFenceForgedMinus01_BP_C::UseCorneEndOuter' has a wrong offset!");
static_assert(offsetof(AFenceForgedMinus01_BP_C, Post) == 0x000438, "Member 'AFenceForgedMinus01_BP_C::Post' has a wrong offset!");
static_assert(offsetof(AFenceForgedMinus01_BP_C, Corner) == 0x000440, "Member 'AFenceForgedMinus01_BP_C::Corner' has a wrong offset!");
static_assert(offsetof(AFenceForgedMinus01_BP_C, CornerOuter) == 0x000448, "Member 'AFenceForgedMinus01_BP_C::CornerOuter' has a wrong offset!");

}

