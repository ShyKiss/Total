#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WallMinus01_BP

#include "Basic.hpp"

#include "WallMinus01_BP_classes.hpp"
#include "WallMinus01_BP_parameters.hpp"


namespace SDK
{

// Function Wall-01_BP.Wall-01_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWallMinus01_BP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wall-01_BP_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Wall-01_BP.Wall-01_BP_C.ExcludeStructForAutomaticCollision
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModuleMeshData>          Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWallMinus01_BP_C::ExcludeStructForAutomaticCollision(TArray<struct FModuleMeshData>& Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wall-01_BP_C", "ExcludeStructForAutomaticCollision");

	Params::WallMinus01_BP_C_ExcludeStructForAutomaticCollision Parms{};

	Parms.Array = std::move(Array);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);
}


// Function Wall-01_BP.Wall-01_BP_C.AddAutomaticBoxCollisionExcludedStaticMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWallMinus01_BP_C::AddAutomaticBoxCollisionExcludedStaticMeshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wall-01_BP_C", "AddAutomaticBoxCollisionExcludedStaticMeshes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Wall-01_BP.Wall-01_BP_C.InvertYminus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          LastLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWallMinus01_BP_C::InvertYminus(const struct FVector& LastLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wall-01_BP_C", "InvertYminus");

	Params::WallMinus01_BP_C_InvertYminus Parms{};

	Parms.LastLocation = std::move(LastLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Wall-01_BP.Wall-01_BP_C.InvertXminus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWallMinus01_BP_C::InvertXminus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wall-01_BP_C", "InvertXminus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Wall-01_BP.Wall-01_BP_C.SetInbetween
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStaticmeshArray_Stuc>    NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AWallMinus01_BP_C::SetInbetween(TArray<struct FStaticmeshArray_Stuc>& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wall-01_BP_C", "SetInbetween");

	Params::WallMinus01_BP_C_SetInbetween Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);

	NewParam = std::move(Parms.NewParam);
}


// Function Wall-01_BP.Wall-01_BP_C.Add Inbetween Row
// (Public, BlueprintCallable, BlueprintEvent)

void AWallMinus01_BP_C::Add_Inbetween_Row()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wall-01_BP_C", "Add Inbetween Row");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Wall-01_BP.Wall-01_BP_C.AddGap
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStaticmeshArray_Stuc>    NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void AWallMinus01_BP_C::AddGap(TArray<struct FStaticmeshArray_Stuc>& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wall-01_BP_C", "AddGap");

	Params::WallMinus01_BP_C_AddGap Parms{};

	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);

	NewParam = std::move(Parms.NewParam);
}


// Function Wall-01_BP.Wall-01_BP_C.SetGap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModuleMeshDataMinus02>   WallMeshes02A_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EMeshPopulateDirection                  Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumberOfInbetween                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TotalInbetweenSize                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          GapTotal                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWallMinus01_BP_C::SetGap(TArray<struct FModuleMeshDataMinus02>& WallMeshes02A_0, EMeshPopulateDirection Direction, int32* NumberOfInbetween, float* TotalInbetweenSize, struct FVector* GapTotal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wall-01_BP_C", "SetGap");

	Params::WallMinus01_BP_C_SetGap Parms{};

	Parms.WallMeshes02A_0 = std::move(WallMeshes02A_0);
	Parms.Direction = Direction;

	UObject::ProcessEvent(Func, &Parms);

	WallMeshes02A_0 = std::move(Parms.WallMeshes02A_0);

	if (NumberOfInbetween != nullptr)
		*NumberOfInbetween = Parms.NumberOfInbetween;

	if (TotalInbetweenSize != nullptr)
		*TotalInbetweenSize = Parms.TotalInbetweenSize;

	if (GapTotal != nullptr)
		*GapTotal = std::move(Parms.GapTotal);
}


// Function Wall-01_BP.Wall-01_BP_C.PushEndWallMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       WallEndMeshesTransform                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// class UStaticMesh*                      EndMesh                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          SizeLeft                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseZScale                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    UseExtreme                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   ExtremeZ                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UseOverwriteMaterial                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    UseOverwriteLightmap                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsInbetweenMesh                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWallMinus01_BP_C::PushEndWallMeshes(const struct FTransform& WallEndMeshesTransform, class UStaticMesh* EndMesh, const struct FVector& SizeLeft, bool UseZScale, bool UseExtreme, float ExtremeZ, bool UseOverwriteMaterial, bool UseOverwriteLightmap, bool IsInbetweenMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wall-01_BP_C", "PushEndWallMeshes");

	Params::WallMinus01_BP_C_PushEndWallMeshes Parms{};

	Parms.WallEndMeshesTransform = std::move(WallEndMeshesTransform);
	Parms.EndMesh = EndMesh;
	Parms.SizeLeft = std::move(SizeLeft);
	Parms.UseZScale = UseZScale;
	Parms.UseExtreme = UseExtreme;
	Parms.ExtremeZ = ExtremeZ;
	Parms.UseOverwriteMaterial = UseOverwriteMaterial;
	Parms.UseOverwriteLightmap = UseOverwriteLightmap;
	Parms.IsInbetweenMesh = IsInbetweenMesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Wall-01_BP.Wall-01_BP_C.GetStateName
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           StateA                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           StateB                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AWallMinus01_BP_C::GetStateName(class FString* StateA, class FString* StateB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wall-01_BP_C", "GetStateName");

	Params::WallMinus01_BP_C_GetStateName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StateA != nullptr)
		*StateA = std::move(Parms.StateA);

	if (StateB != nullptr)
		*StateB = std::move(Parms.StateB);

	return Parms.ReturnValue;
}


// Function Wall-01_BP.Wall-01_BP_C.WallEnd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Relative_Transform_Location                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NewSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWallMinus01_BP_C::WallEnd(const struct FVector& Relative_Transform_Location, const struct FVector& NewSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wall-01_BP_C", "WallEnd");

	Params::WallMinus01_BP_C_WallEnd Parms{};

	Parms.Relative_Transform_Location = std::move(Relative_Transform_Location);
	Parms.NewSize = std::move(NewSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Wall-01_BP.Wall-01_BP_C.setVariable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          NewSize                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWallMinus01_BP_C::SetVariable(struct FVector* NewSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wall-01_BP_C", "setVariable");

	Params::WallMinus01_BP_C_SetVariable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewSize != nullptr)
		*NewSize = std::move(Parms.NewSize);
}


// Function Wall-01_BP.Wall-01_BP_C.IsStateA
// (HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AWallMinus01_BP_C::IsStateA() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Wall-01_BP_C", "IsStateA");

	Params::WallMinus01_BP_C_IsStateA Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

