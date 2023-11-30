#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AimAssistSystem.UASAimAssistComponent
// (None)

class UClass* UUASAimAssistComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UASAimAssistComponent");

	return Clss;
}


// UASAimAssistComponent AimAssistSystem.Default__UASAimAssistComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UUASAimAssistComponent* UUASAimAssistComponent::GetDefaultObj()
{
	static class UUASAimAssistComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UUASAimAssistComponent*>(UUASAimAssistComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AimAssistSystem.UASAimAssistComponent.ShowAimAssistDebug
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::ShowAimAssistDebug(bool bShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "ShowAimAssistDebug");

	Params::UUASAimAssistComponent_ShowAimAssistDebug_Params Parms{};

	Parms.bShow = bShow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetAimAssistEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetAimAssistEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetAimAssistEnabled");

	Params::UUASAimAssistComponent_SetAimAssistEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.SetAimAssistDataAsset
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUASAimAssistConfigDataAsset*DataAsset                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::SetAimAssistDataAsset(class UUASAimAssistConfigDataAsset* DataAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "SetAimAssistDataAsset");

	Params::UUASAimAssistComponent_SetAimAssistDataAsset_Params Parms{};

	Parms.DataAsset = DataAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.OnTargetDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::OnTargetDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "OnTargetDestroyed");

	Params::UUASAimAssistComponent_OnTargetDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AimAssistSystem.UASAimAssistComponent.GetRotationToCrosshairDirection
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Vector          From                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        TraceProfileName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinDistanceToRotateToTarget                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Rotator         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct CoreUObject_Rotator UUASAimAssistComponent::GetRotationToCrosshairDirection(struct CoreUObject_Vector& From, class FName TraceProfileName, float MinDistanceToRotateToTarget, float Distance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetRotationToCrosshairDirection");

	Params::UUASAimAssistComponent_GetRotationToCrosshairDirection_Params Parms{};

	Parms.From = From;
	Parms.TraceProfileName = TraceProfileName;
	Parms.MinDistanceToRotateToTarget = MinDistanceToRotateToTarget;
	Parms.Distance = Distance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetCurrentTargetSocketLocation
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Vector          OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::GetCurrentTargetSocketLocation(struct CoreUObject_Vector* OutLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetCurrentTargetSocketLocation");

	Params::UUASAimAssistComponent_GetCurrentTargetSocketLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetCrosshairPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Vector2D        ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct CoreUObject_Vector2D UUASAimAssistComponent::GetCrosshairPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetCrosshairPosition");

	Params::UUASAimAssistComponent_GetCrosshairPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.GetControlMultipliers
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              Pitch                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Yaw                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistComponent::GetControlMultipliers(float* Pitch, float* Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "GetControlMultipliers");

	Params::UUASAimAssistComponent_GetControlMultipliers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Pitch != nullptr)
		*Pitch = Parms.Pitch;

	if (Yaw != nullptr)
		*Yaw = Parms.Yaw;

}


// Function AimAssistSystem.UASAimAssistComponent.CustomGetCurrentTargetLocation
// (Native, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Vector          OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::CustomGetCurrentTargetLocation(struct CoreUObject_Vector* OutLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "CustomGetCurrentTargetLocation");

	Params::UUASAimAssistComponent_CustomGetCurrentTargetLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	return Parms.ReturnValue;

}


// Function AimAssistSystem.UASAimAssistComponent.bIsAimAssistEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUASAimAssistComponent::bIsAimAssistEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistComponent", "bIsAimAssistEnabled");

	Params::UUASAimAssistComponent_bIsAimAssistEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AimAssistSystem.UASAimAssistConfigDataAsset
// (None)

class UClass* UUASAimAssistConfigDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UASAimAssistConfigDataAsset");

	return Clss;
}


// UASAimAssistConfigDataAsset AimAssistSystem.Default__UASAimAssistConfigDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UUASAimAssistConfigDataAsset* UUASAimAssistConfigDataAsset::GetDefaultObj()
{
	static class UUASAimAssistConfigDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UUASAimAssistConfigDataAsset*>(UUASAimAssistConfigDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class AimAssistSystem.UASAimAssistTargetComponent
// (None)

class UClass* UUASAimAssistTargetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UASAimAssistTargetComponent");

	return Clss;
}


// UASAimAssistTargetComponent AimAssistSystem.Default__UASAimAssistTargetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UUASAimAssistTargetComponent* UUASAimAssistTargetComponent::GetDefaultObj()
{
	static class UUASAimAssistTargetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UUASAimAssistTargetComponent*>(UUASAimAssistTargetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function AimAssistSystem.UASAimAssistTargetComponent.Init
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*              Mesh                                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUASAimAssistTargetComponent::Init(class UMeshComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UASAimAssistTargetComponent", "Init");

	Params::UUASAimAssistTargetComponent_Init_Params Parms{};

	Parms.Mesh = Mesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


