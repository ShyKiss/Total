#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RBSwingingActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass RBSwingingActor.RBSwingingActor_C
// 0x0080 (0x02C8 - 0x0248)
class ARBSwingingActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URBPropOptimizerComponent*              RBPropOptimizer;                                   // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SwingingRoot;                                      // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         SwingMovementTimeline_NewTrack_0_E7DE4623479A4CA33C39799059D3CD79; // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            SwingMovementTimeline__Direction_E7DE4623479A4CA33C39799059D3CD79; // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3261[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     SwingMovementTimeline;                             // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SwingingRotationTimeline_NewTrack_0_2C1FDF8B44E484D899F80D8052B4C0CE; // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            SwingingRotationTimeline__Direction_2C1FDF8B44E484D899F80D8052B4C0CE; // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3262[0x3];                                     // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     SwingingRotationTimeline;                          // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rotation1;                                         // 0x0288(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               Rotation2;                                         // 0x0294(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         RotationPlayRate;                                  // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RotationUsesShortestPath;                          // 0x02A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3263[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Location1;                                         // 0x02A8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location2;                                         // 0x02B4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TranslationPlayRate;                               // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool FixUp();
	void SetInitialTransforms();
	void SetupLightingSettings();
	void HasTranslationMovement(bool* bHasMovement);
	void HasRotationMovement(bool* bHasMovement);
	void SetupCollisions();
	void SetPlayRate();
	void UserConstructionScript();
	void SwingingRotationTimeline__FinishedFunc();
	void SwingingRotationTimeline__UpdateFunc();
	void SwingMovementTimeline__FinishedFunc();
	void SwingMovementTimeline__UpdateFunc();
	void OnPostActorsPasted(const TArray<class AActor*>& PastedActors);
	void PostAddedToLevel();
	void PostDuplicated(class AActor* DuplicationParent);
	void PostEditMove(bool bFinished);
	void TickSelected();
	void ReceiveBeginPlay();
	void StartSwingingRotation();
	void OnEditorPostLoad();
	void StartSwingingLocation();
	void PostEditChange(const class FName& PropertyName);
	void ExecuteUbergraph_RBSwingingActor(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RBSwingingActor_C">();
	}
	static class ARBSwingingActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARBSwingingActor_C>();
	}
};
static_assert(alignof(ARBSwingingActor_C) == 0x000008, "Wrong alignment on ARBSwingingActor_C");
static_assert(sizeof(ARBSwingingActor_C) == 0x0002C8, "Wrong size on ARBSwingingActor_C");
static_assert(offsetof(ARBSwingingActor_C, UberGraphFrame) == 0x000248, "Member 'ARBSwingingActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, RBPropOptimizer) == 0x000250, "Member 'ARBSwingingActor_C::RBPropOptimizer' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, SwingingRoot) == 0x000258, "Member 'ARBSwingingActor_C::SwingingRoot' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, DefaultSceneRoot) == 0x000260, "Member 'ARBSwingingActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, SwingMovementTimeline_NewTrack_0_E7DE4623479A4CA33C39799059D3CD79) == 0x000268, "Member 'ARBSwingingActor_C::SwingMovementTimeline_NewTrack_0_E7DE4623479A4CA33C39799059D3CD79' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, SwingMovementTimeline__Direction_E7DE4623479A4CA33C39799059D3CD79) == 0x00026C, "Member 'ARBSwingingActor_C::SwingMovementTimeline__Direction_E7DE4623479A4CA33C39799059D3CD79' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, SwingMovementTimeline) == 0x000270, "Member 'ARBSwingingActor_C::SwingMovementTimeline' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, SwingingRotationTimeline_NewTrack_0_2C1FDF8B44E484D899F80D8052B4C0CE) == 0x000278, "Member 'ARBSwingingActor_C::SwingingRotationTimeline_NewTrack_0_2C1FDF8B44E484D899F80D8052B4C0CE' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, SwingingRotationTimeline__Direction_2C1FDF8B44E484D899F80D8052B4C0CE) == 0x00027C, "Member 'ARBSwingingActor_C::SwingingRotationTimeline__Direction_2C1FDF8B44E484D899F80D8052B4C0CE' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, SwingingRotationTimeline) == 0x000280, "Member 'ARBSwingingActor_C::SwingingRotationTimeline' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, Rotation1) == 0x000288, "Member 'ARBSwingingActor_C::Rotation1' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, Rotation2) == 0x000294, "Member 'ARBSwingingActor_C::Rotation2' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, RotationPlayRate) == 0x0002A0, "Member 'ARBSwingingActor_C::RotationPlayRate' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, RotationUsesShortestPath) == 0x0002A4, "Member 'ARBSwingingActor_C::RotationUsesShortestPath' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, Location1) == 0x0002A8, "Member 'ARBSwingingActor_C::Location1' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, Location2) == 0x0002B4, "Member 'ARBSwingingActor_C::Location2' has a wrong offset!");
static_assert(offsetof(ARBSwingingActor_C, TranslationPlayRate) == 0x0002C0, "Member 'ARBSwingingActor_C::TranslationPlayRate' has a wrong offset!");

}
