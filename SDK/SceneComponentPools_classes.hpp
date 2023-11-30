#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xC0 - 0xA0)
// Class SceneComponentPools.BasePoolComponent
class UBasePoolComponent : public UActorComponent
{
public:
	int32                                        MaxPoolSize;                                       // 0xA0(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartingPoolSize;                                  // 0xA4(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ComponentClassName;                                // 0xA8(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPoolOverflowHandling             OverflowType;                                      // 0xB8(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E2D[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UBasePoolComponent* GetDefaultObj();

};

// 0x78 (0x138 - 0xC0)
// Class SceneComponentPools.DecalPoolComponent
class UDecalPoolComponent : public UBasePoolComponent
{
public:
	uint8                                        Pad_E5D[0x8];                                      // Fixing Size After Last Property  
	TSubclassOf<class UPoolableDecalComponent>   PooledDecalComponentClass;                         // 0xC8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPoolableDecalComponent*>       UnusedComponentsArray;                             // 0xD0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSet<class UPoolableDecalComponent*>         UsedComponentsSet;                                 // 0xE0(0x50)(ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UPoolableDecalComponent*               PeekedDecalComponent;                              // 0x130(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDecalPoolComponent* GetDefaultObj();

};

// 0x80 (0x140 - 0xC0)
// Class SceneComponentPools.ParticleSystemPoolComponentBase
class UParticleSystemPoolComponentBase : public UBasePoolComponent
{
public:
	uint8                                        Pad_ED4[0x8];                                      // Fixing Size After Last Property  
	TSubclassOf<class UParticleSystemComponent>  PooledParticleSystemComponentClass;                // 0xC8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UParticleSystemComponent*>      UnusedComponentsArray;                             // 0xD0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSet<class UParticleSystemComponent*>        UsedComponentsSet;                                 // 0xE0(0x50)(ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UParticleSystemComponent*              PeekedParticleSystemComponent;                     // 0x130(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bClearTemplateWhenReturnedToPool;                  // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EF4[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UParticleSystemPoolComponentBase* GetDefaultObj();

	void OnPSCFinished(class UParticleSystemComponent* InPSC);
};

// 0x0 (0x140 - 0x140)
// Class SceneComponentPools.ParticleSystemPoolComponent
class UParticleSystemPoolComponent : public UParticleSystemPoolComponentBase
{
public:

	static class UClass* StaticClass();
	static class UParticleSystemPoolComponent* GetDefaultObj();

};

// 0x20 (0x320 - 0x300)
// Class SceneComponentPools.PoolableDecalComponent
class UPoolableDecalComponent : public UDecalComponent
{
public:
	uint8                                        Pad_F58[0x20];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPoolableDecalComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class SceneComponentPools.SceneComponentPoolStatics
class USceneComponentPoolStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USceneComponentPoolStatics* GetDefaultObj();

	class UParticleSystemComponent* SpawnEmitterAttached(class UParticleSystem* EmitterTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct CoreUObject_Vector& Location, const struct CoreUObject_Rotator& Rotation, const struct CoreUObject_Vector& Scale, enum class EAttachLocation LocationType);
	class UParticleSystemComponent* SpawnEmitterAtLocation(class UObject* WorldContextObject, class UParticleSystem* EmitterTemplate, const struct CoreUObject_Vector& Location, const struct CoreUObject_Rotator& Rotation, const struct CoreUObject_Vector& Scale);
	class UPoolableDecalComponent* SpawnDecalAttached(class UMaterialInterface* DecalMaterial, const struct CoreUObject_Vector& DecalSize, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct CoreUObject_Vector& Location, const struct CoreUObject_Rotator& Rotation, enum class EAttachLocation LocationType, float LifeSpan);
	class UPoolableDecalComponent* SpawnDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct CoreUObject_Vector& DecalSize, const struct CoreUObject_Vector& Location, const struct CoreUObject_Rotator& Rotation, float LifeSpan);
	void ReleaseSpawnedEmitters(class UObject* WorldContextObject);
	void ReleaseSpawnedDecals(class UObject* WorldContextObject);
};

}


