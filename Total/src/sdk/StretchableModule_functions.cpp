#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StretchableModule

#include "Basic.hpp"

#include "StretchableModule_classes.hpp"
#include "StretchableModule_parameters.hpp"


namespace SDK
{

// Function StretchableModule.StretchableModule_C.MoveAnchorGizmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStretchableModule_C::MoveAnchorGizmo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "MoveAnchorGizmo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.AssingDynMatData
// (Public, BlueprintCallable, BlueprintEvent)

void AStretchableModule_C::AssingDynMatData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "AssingDynMatData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.AssignLightChannel
// (Public, BlueprintCallable, BlueprintEvent)

void AStretchableModule_C::AssignLightChannel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "AssignLightChannel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.RunConstructionScript
// (Public, BlueprintCallable, BlueprintEvent)

void AStretchableModule_C::RunConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "RunConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.CreateLibraryMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStretchableModule_C::CreateLibraryMeshes()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "CreateLibraryMeshes");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.ShuffleSpecialMeshesSeed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStaticMesh*>              _Staticmeshes                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UStaticMesh*>              SuffledSM                                              (Parm, OutParm)

void AStretchableModule_C::ShuffleSpecialMeshesSeed(TArray<class UStaticMesh*>& _Staticmeshes, TArray<class UStaticMesh*>* SuffledSM)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "ShuffleSpecialMeshesSeed");

	Params::StretchableModule_C_ShuffleSpecialMeshesSeed Parms{};

	Parms._Staticmeshes = std::move(_Staticmeshes);

	UObject::ProcessEvent(Func, &Parms);

	_Staticmeshes = std::move(Parms._Staticmeshes);

	if (SuffledSM != nullptr)
		*SuffledSM = std::move(Parms.SuffledSM);
}


// Function StretchableModule.StretchableModule_C.AssignPerLibMeshMaterialOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStretchableModule_C::AssignPerLibMeshMaterialOverride()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "AssignPerLibMeshMaterialOverride");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.ShuffleWithSeed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStretchableModule_C::ShuffleWithSeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "ShuffleWithSeed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.GetStandardStaticmeshLibrary
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStaticMesh*>              _PossibleMeshLibrary                                   (Parm, OutParm)

void AStretchableModule_C::GetStandardStaticmeshLibrary(TArray<class UStaticMesh*>* _PossibleMeshLibrary)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "GetStandardStaticmeshLibrary");

	Params::StretchableModule_C_GetStandardStaticmeshLibrary Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (_PossibleMeshLibrary != nullptr)
		*_PossibleMeshLibrary = std::move(Parms._PossibleMeshLibrary);
}


// Function StretchableModule.StretchableModule_C.GetSpecialStaticmeshLibrary
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStaticMesh*>              _PossibleMeshLibrary                                   (Parm, OutParm)

void AStretchableModule_C::GetSpecialStaticmeshLibrary(TArray<class UStaticMesh*>* _PossibleMeshLibrary)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "GetSpecialStaticmeshLibrary");

	Params::StretchableModule_C_GetSpecialStaticmeshLibrary Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (_PossibleMeshLibrary != nullptr)
		*_PossibleMeshLibrary = std::move(Parms._PossibleMeshLibrary);
}


// Function StretchableModule.StretchableModule_C.ReassignStaticMeshFromLibrary
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStretchableModule_C::ReassignStaticMeshFromLibrary()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "ReassignStaticMeshFromLibrary");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.SetStaticMeshComponent
// (Public, BlueprintCallable, BlueprintEvent)

void AStretchableModule_C::SetStaticMeshComponent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "SetStaticMeshComponent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.GetScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELockAxis                               Axis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CurrentModuleScale                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    UsingTiling                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Scale                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStretchableModule_C::GetScale(ELockAxis Axis, float CurrentModuleScale, bool UsingTiling, float* Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "GetScale");

	Params::StretchableModule_C_GetScale Parms{};

	Parms.Axis = Axis;
	Parms.CurrentModuleScale = CurrentModuleScale;
	Parms.UsingTiling = UsingTiling;

	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = Parms.Scale;
}


// Function StretchableModule.StretchableModule_C.GetOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELockAxis                               Axis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CurrentModuleScale                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxDistance                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumLoop                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsTiling                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Offset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStretchableModule_C::GetOffset(ELockAxis Axis, float CurrentModuleScale, int32 MaxDistance, int32 NumLoop, bool IsTiling, float* Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "GetOffset");

	Params::StretchableModule_C_GetOffset Parms{};

	Parms.Axis = Axis;
	Parms.CurrentModuleScale = CurrentModuleScale;
	Parms.MaxDistance = MaxDistance;
	Parms.NumLoop = NumLoop;
	Parms.IsTiling = IsTiling;

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = Parms.Offset;
}


// Function StretchableModule.StretchableModule_C.SetIsTiling
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTiling                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AStretchableModule_C::SetIsTiling(bool* IsTiling)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "SetIsTiling");

	Params::StretchableModule_C_SetIsTiling Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsTiling != nullptr)
		*IsTiling = Parms.IsTiling;
}


// Function StretchableModule.StretchableModule_C.GetFinalTranslation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Tiling                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   X                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Y                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Z                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStretchableModule_C::GetFinalTranslation(bool Tiling, float* X, float* Y, float* Z)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "GetFinalTranslation");

	Params::StretchableModule_C_GetFinalTranslation Parms{};

	Parms.Tiling = Tiling;

	UObject::ProcessEvent(Func, &Parms);

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

	if (Z != nullptr)
		*Z = Parms.Z;
}


// Function StretchableModule.StretchableModule_C.SetMaterialsToTriPlanarMapping
// (Public, BlueprintCallable, BlueprintEvent)

void AStretchableModule_C::SetMaterialsToTriPlanarMapping()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "SetMaterialsToTriPlanarMapping");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.FixTilingForAxisUsage
// (Public, BlueprintCallable, BlueprintEvent)

void AStretchableModule_C::FixTilingForAxisUsage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "FixTilingForAxisUsage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.CheckForPreviousLockAxis
// (Public, BlueprintCallable, BlueprintEvent)

void AStretchableModule_C::CheckForPreviousLockAxis()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "CheckForPreviousLockAxis");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.AddStaticMeshAtLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Relative_Transform_Scale_X                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Relative_Transform_Scale_Z                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Relative_Transform_Scale_Y                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Relative_Transform_Location_X                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Relative_Transform_Location_Y                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Relative_Transform_Location_Z                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStretchableModule_C::AddStaticMeshAtLocation(float Relative_Transform_Scale_X, float Relative_Transform_Scale_Z, float Relative_Transform_Scale_Y, float Relative_Transform_Location_X, float Relative_Transform_Location_Y, float Relative_Transform_Location_Z)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "AddStaticMeshAtLocation");

	Params::StretchableModule_C_AddStaticMeshAtLocation Parms{};

	Parms.Relative_Transform_Scale_X = Relative_Transform_Scale_X;
	Parms.Relative_Transform_Scale_Z = Relative_Transform_Scale_Z;
	Parms.Relative_Transform_Scale_Y = Relative_Transform_Scale_Y;
	Parms.Relative_Transform_Location_X = Relative_Transform_Location_X;
	Parms.Relative_Transform_Location_Y = Relative_Transform_Location_Y;
	Parms.Relative_Transform_Location_Z = Relative_Transform_Location_Z;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StretchableModule.StretchableModule_C.CreateComponents
// (Public, BlueprintCallable, BlueprintEvent)

void AStretchableModule_C::CreateComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "CreateComponents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.LimitGizmo
// (Public, BlueprintCallable, BlueprintEvent)

void AStretchableModule_C::LimitGizmo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "LimitGizmo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStretchableModule_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStretchableModule_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StretchableModule.StretchableModule_C.ExecuteUbergraph_StretchableModule
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStretchableModule_C::ExecuteUbergraph_StretchableModule(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StretchableModule_C", "ExecuteUbergraph_StretchableModule");

	Params::StretchableModule_C_ExecuteUbergraph_StretchableModule Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
