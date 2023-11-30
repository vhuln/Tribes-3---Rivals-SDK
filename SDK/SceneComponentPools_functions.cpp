#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SceneComponentPools.BasePoolComponent
// (None)

class UClass* UBasePoolComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BasePoolComponent");

	return Clss;
}


// BasePoolComponent SceneComponentPools.Default__BasePoolComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBasePoolComponent* UBasePoolComponent::GetDefaultObj()
{
	static class UBasePoolComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBasePoolComponent*>(UBasePoolComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SceneComponentPools.DecalPoolComponent
// (None)

class UClass* UDecalPoolComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DecalPoolComponent");

	return Clss;
}


// DecalPoolComponent SceneComponentPools.Default__DecalPoolComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDecalPoolComponent* UDecalPoolComponent::GetDefaultObj()
{
	static class UDecalPoolComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDecalPoolComponent*>(UDecalPoolComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SceneComponentPools.ParticleSystemPoolComponentBase
// (None)

class UClass* UParticleSystemPoolComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleSystemPoolComponentBase");

	return Clss;
}


// ParticleSystemPoolComponentBase SceneComponentPools.Default__ParticleSystemPoolComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleSystemPoolComponentBase* UParticleSystemPoolComponentBase::GetDefaultObj()
{
	static class UParticleSystemPoolComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleSystemPoolComponentBase*>(UParticleSystemPoolComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SceneComponentPools.ParticleSystemPoolComponentBase.OnPSCFinished
// (Native, Protected)
// Parameters:
// class UParticleSystemComponent*    InPSC                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UParticleSystemPoolComponentBase::OnPSCFinished(class UParticleSystemComponent* InPSC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParticleSystemPoolComponentBase", "OnPSCFinished");

	Params::UParticleSystemPoolComponentBase_OnPSCFinished_Params Parms{};

	Parms.InPSC = InPSC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SceneComponentPools.ParticleSystemPoolComponent
// (None)

class UClass* UParticleSystemPoolComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleSystemPoolComponent");

	return Clss;
}


// ParticleSystemPoolComponent SceneComponentPools.Default__ParticleSystemPoolComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleSystemPoolComponent* UParticleSystemPoolComponent::GetDefaultObj()
{
	static class UParticleSystemPoolComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleSystemPoolComponent*>(UParticleSystemPoolComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SceneComponentPools.PoolableDecalComponent
// (SceneComponent)

class UClass* UPoolableDecalComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PoolableDecalComponent");

	return Clss;
}


// PoolableDecalComponent SceneComponentPools.Default__PoolableDecalComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPoolableDecalComponent* UPoolableDecalComponent::GetDefaultObj()
{
	static class UPoolableDecalComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPoolableDecalComponent*>(UPoolableDecalComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SceneComponentPools.SceneComponentPoolStatics
// (None)

class UClass* USceneComponentPoolStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SceneComponentPoolStatics");

	return Clss;
}


// SceneComponentPoolStatics SceneComponentPools.Default__SceneComponentPoolStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class USceneComponentPoolStatics* USceneComponentPoolStatics::GetDefaultObj()
{
	static class USceneComponentPoolStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<USceneComponentPoolStatics*>(USceneComponentPoolStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UParticleSystem*             EmitterTemplate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Rotator         Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAttachLocation         LocationType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParticleSystemComponent*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UParticleSystemComponent* USceneComponentPoolStatics::SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct CoreUObject_Vector& Location, const struct CoreUObject_Rotator& Rotation, const struct CoreUObject_Vector& Scale, enum class EAttachLocation LocationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SceneComponentPoolStatics", "SpawnEmitterAttached");

	Params::USceneComponentPoolStatics_SpawnEmitterAttached_Params Parms{};

	Parms.EmitterTemplate = EmitterTemplate;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.Scale = Scale;
	Parms.LocationType = LocationType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnEmitterAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParticleSystem*             EmitterTemplate                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Rotator         Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UParticleSystemComponent*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UParticleSystemComponent* USceneComponentPoolStatics::SpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct CoreUObject_Vector& Location, const struct CoreUObject_Rotator& Rotation, const struct CoreUObject_Vector& Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SceneComponentPoolStatics", "SpawnEmitterAtLocation");

	Params::USceneComponentPoolStatics_SpawnEmitterAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.EmitterTemplate = EmitterTemplate;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAttached
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          DecalMaterial                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          DecalSize                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AttachPointName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Rotator         Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// enum class EAttachLocation         LocationType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LifeSpan                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPoolableDecalComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPoolableDecalComponent* USceneComponentPoolStatics::SpawnDecalAttached(class UMaterialInterface* DecalMaterial, const struct CoreUObject_Vector& DecalSize, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct CoreUObject_Vector& Location, const struct CoreUObject_Rotator& Rotation, enum class EAttachLocation LocationType, float LifeSpan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SceneComponentPoolStatics", "SpawnDecalAttached");

	Params::USceneComponentPoolStatics_SpawnDecalAttached_Params Parms{};

	Parms.DecalMaterial = DecalMaterial;
	Parms.DecalSize = DecalSize;
	Parms.AttachToComponent = AttachToComponent;
	Parms.AttachPointName = AttachPointName;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.LocationType = LocationType;
	Parms.LifeSpan = LifeSpan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SceneComponentPools.SceneComponentPoolStatics.SpawnDecalAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMaterialInterface*          DecalMaterial                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          DecalSize                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Vector          Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct CoreUObject_Rotator         Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              LifeSpan                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPoolableDecalComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPoolableDecalComponent* USceneComponentPoolStatics::SpawnDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct CoreUObject_Vector& DecalSize, const struct CoreUObject_Vector& Location, const struct CoreUObject_Rotator& Rotation, float LifeSpan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SceneComponentPoolStatics", "SpawnDecalAtLocation");

	Params::USceneComponentPoolStatics_SpawnDecalAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.DecalMaterial = DecalMaterial;
	Parms.DecalSize = DecalSize;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.LifeSpan = LifeSpan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedEmitters
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USceneComponentPoolStatics::ReleaseSpawnedEmitters(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SceneComponentPoolStatics", "ReleaseSpawnedEmitters");

	Params::USceneComponentPoolStatics_ReleaseSpawnedEmitters_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SceneComponentPools.SceneComponentPoolStatics.ReleaseSpawnedDecals
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USceneComponentPoolStatics::ReleaseSpawnedDecals(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SceneComponentPoolStatics", "ReleaseSpawnedDecals");

	Params::USceneComponentPoolStatics_ReleaseSpawnedDecals_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


