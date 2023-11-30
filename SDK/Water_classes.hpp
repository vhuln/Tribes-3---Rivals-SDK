#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x630 - 0x628)
// Class Water.WaterBodyMeshComponent
class UWaterBodyMeshComponent : public UStaticMeshComponent
{
public:
	uint8                                        Pad_1020[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWaterBodyMeshComponent* GetDefaultObj();

};

// 0x0 (0x630 - 0x630)
// Class Water.WaterBodyStaticMeshComponent
class UWaterBodyStaticMeshComponent : public UWaterBodyMeshComponent
{
public:

	static class UClass* StaticClass();
	static class UWaterBodyStaticMeshComponent* GetDefaultObj();

};

// 0x168 (0x208 - 0xA0)
// Class Water.BuoyancyComponent
class UBuoyancyComponent : public UActorComponent
{
public:
	TArray<struct Water_SphericalPontoon>        Pontoons;                                          // 0xA0(0x10)(ZeroConstructor, Deprecated, ContainsInstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEnteredWaterDelegate;                            // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnExitedWaterDelegate;                             // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct Water_BuoyancyData                    BuoyancyData;                                      // 0xD0(0x90)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UWaterBodyComponent*>           CurrentWaterBodyComponents;                        // 0x160(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UPrimitiveComponent*                   SimulatingComponent;                               // 0x170(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_111F[0x90];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UBuoyancyComponent* GetDefaultObj();

	void OnPontoonExitedWater(struct Water_SphericalPontoon& Pontoon);
	void OnPontoonEnteredWater(struct Water_SphericalPontoon& Pontoon);
	bool IsOverlappingWaterBody();
	bool IsInWaterBody();
	void GetLastWaterSurfaceInfo(struct CoreUObject_Vector* OutWaterPlaneLocation, struct CoreUObject_Vector* OutWaterPlaneNormal, struct CoreUObject_Vector* OutWaterSurfacePosition, float* OutWaterDepth, int32* OutWaterBodyIdx, struct CoreUObject_Vector* OutWaterVelocity);
	TArray<class UWaterBodyComponent*> GetCurrentWaterBodyComponents();
};

// 0xC8 (0x360 - 0x298)
// Class Water.BuoyancyManager
class ABuoyancyManager : public AActor
{
public:
	uint8                                        Pad_1152[0x50];                                    // Fixing Size After Last Property  
	TArray<class UBuoyancyComponent*>            BuoyancyComponents;                                // 0x2E8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1154[0x68];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ABuoyancyManager* GetDefaultObj();

	bool GetBuoyancyComponentManager(class UObject* WorldContextObject, class ABuoyancyManager** Manager);
};

// 0x8 (0x200 - 0x1F8)
// Class Water.EnvQueryTest_InsideWaterBody
class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
{
public:
	bool                                         bIncludeWaves;                                     // 0x1F8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimpleWaves;                                      // 0x1F9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreExclusionVolumes;                           // 0x1FA(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_116A[0x5];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UEnvQueryTest_InsideWaterBody* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.GerstnerWaterWaveGeneratorBase
class UGerstnerWaterWaveGeneratorBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveGeneratorBase* GetDefaultObj();

	void GenerateGerstnerWaves(TArray<struct Water_GerstnerWave>* OutWaves);
};

// 0x38 (0x60 - 0x28)
// Class Water.GerstnerWaterWaveGeneratorSimple
class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
{
public:
	int32                                        NumWaves;                                          // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed;                                              // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Randomness;                                        // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinWavelength;                                     // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWavelength;                                     // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WavelengthFalloff;                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinAmplitude;                                      // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAmplitude;                                      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AmplitudeFalloff;                                  // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindAngleDeg;                                      // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionAngularSpreadDeg;                         // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmallWaveSteepness;                                // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LargeWaveSteepness;                                // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SteepnessFalloff;                                  // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveGeneratorSimple* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Water.GerstnerWaterWaveGeneratorSpectrum
class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
{
public:
	enum class EWaveSpectrumType                 SpectrumType;                                      // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11D0[0x7];                                     // Fixing Size After Last Property  
	TArray<struct Water_GerstnerWaveOctave>      Octaves;                                           // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveGeneratorSpectrum* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.WaterWavesBase
class UWaterWavesBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UWaterWavesBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.WaterWaves
class UWaterWaves : public UWaterWavesBase
{
public:

	static class UClass* StaticClass();
	static class UWaterWaves* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Water.GerstnerWaterWaves
class UGerstnerWaterWaves : public UWaterWaves
{
public:
	class UGerstnerWaterWaveGeneratorBase*       GerstnerWaveGenerator;                             // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Water_GerstnerWave>            GerstnerWaves;                                     // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        MaxWaveHeight;                                     // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11F8[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGerstnerWaterWaves* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class Water.GerstnerWaterWaveSubsystem
class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_1209[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UGerstnerWaterWaveSubsystem* GetDefaultObj();

};

// 0x20 (0x590 - 0x570)
// Class Water.LakeCollisionComponent
class ULakeCollisionComponent : public UPrimitiveComponent
{
public:
	class UBodySetup*                            CachedBodySetup;                                   // 0x570(0x8)(ZeroConstructor, NoDestructor, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Vector                    BoxExtent;                                         // 0x578(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ULakeCollisionComponent* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Water.NiagaraDataInterfaceWater
class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{
public:
	class UWaterBodyComponent*                   SourceBodyComponent;                               // 0x38(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceWater* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.NiagaraWaterFunctionLibrary
class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraWaterFunctionLibrary* GetDefaultObj();

	void SetWaterBodyComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UWaterBodyComponent* WaterBodyComponent);
	void SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class AWaterBody* WaterBody);
};

// 0x40 (0x5B0 - 0x570)
// Class Water.OceanCollisionComponent
class UOceanCollisionComponent : public UPrimitiveComponent
{
public:
	class UBodySetup*                            CachedBodySetup;                                   // 0x570(0x8)(ZeroConstructor, NoDestructor, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1275[0x38];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UOceanCollisionComponent* GetDefaultObj();

};

// 0x0 (0x5B0 - 0x5B0)
// Class Water.OceanBoxCollisionComponent
class UOceanBoxCollisionComponent : public UBoxComponent
{
public:

	static class UClass* StaticClass();
	static class UOceanBoxCollisionComponent* GetDefaultObj();

};

// 0x50 (0x2E8 - 0x298)
// Class Water.WaterBody
class AWaterBody : public AActor
{
public:
	uint8                                        Pad_1317[0x8];                                     // Fixing Size After Last Property  
	class UWaterSplineComponent*                 SplineComp;                                        // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWaterSplineMetadata*                  WaterSplineMetadata;                               // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWaterBodyComponent*                   WaterBodyComponent;                                // 0x2B0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        WaterBodyIndex;                                    // 0x2B8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWaterBodyType                    WaterBodyType;                                     // 0x2BC(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1320[0x3];                                     // Fixing Size After Last Property  
	class UWaterWavesBase*                       WaterWaves;                                        // 0x2C0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWaterBodyInfoMeshComponent*           WaterInfoMeshComponent;                            // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWaterBodyInfoMeshComponent*           DilatedWaterInfoMeshComponent;                     // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UWaterBodyStaticMeshComponent*> WaterBodyStaticMeshComponents;                     // 0x2D8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AWaterBody* GetDefaultObj();

	void SetWaterWaves(class UWaterWavesBase* InWaterWaves);
	void SetWaterMaterial(class UMaterialInterface* InMaterial);
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
	struct CoreUObject_Vector GetWaterVelocityVectorAtSplineInputKey(float InKey);
	float GetWaterVelocityAtSplineInputKey(float InKey);
	class UWaterSplineComponent* GetWaterSpline();
	class UMaterialInstanceDynamic* GetWaterMaterialInstance();
	enum class EWaterBodyType GetWaterBodyType();
	class UWaterBodyComponent* GetWaterBodyComponent();
	class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
	TArray<class AWaterBodyIsland*> GetIslands();
	TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
	float GetAudioIntensityAtSplineInputKey(float InKey);
};

// 0x0 (0x28 - 0x28)
// Class Water.WaterBodyGenerator
class UWaterBodyGenerator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UWaterBodyGenerator* GetDefaultObj();

};

// 0xFA0 (0x1510 - 0x570)
// Class Water.WaterBodyComponent
class UWaterBodyComponent : public UPrimitiveComponent
{
public:
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x570(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetWaveMaskDepth;                               // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxWaveHeightOffset;                               // 0x57C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Water_UnderwaterPostProcessSettings   UnderwaterPostProcessSettings;                     // 0x580(0x700)(Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct Water_WaterCurveSettings              CurveSettings;                                     // 0xC80(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    WaterMaterial;                                     // 0xCA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    WaterHLODMaterial;                                 // 0xCA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    WaterStaticMeshMaterial;                           // 0xCB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    UnderwaterPostProcessMaterial;                     // 0xCB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    WaterInfoMaterial;                                 // 0xCC0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Water_WaterBodyHeightmapSettings      WaterHeightmapSettings;                            // 0xCC8(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ShapeDilation;                                     // 0xD48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionHeightOffset;                             // 0xD4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectsLandscape;                                 // 0xD50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1453[0x7];                                     // Fixing Size After Last Property  
	struct Water_WaterBodyStaticMeshSettings     StaticMeshSettings;                                // 0xD58(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        WaterBodyIndex;                                    // 0xD68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, IsPlainOldData, NonTransactional, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_145C[0x4];                                     // Fixing Size After Last Property  
	class UStaticMesh*                           WaterMeshOverride;                                 // 0xD70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAlwaysGenerateWaterMeshTiles;                     // 0xD78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1462[0x3];                                     // Fixing Size After Last Property  
	int32                                        OverlapMaterialPriority;                           // 0xD7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWaterSplineMetadata*                  WaterSplineMetadata;                               // 0xD80(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              WaterMID;                                          // 0xD88(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              WaterStaticMeshMID;                                // 0xD90(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              UnderwaterPostProcessMID;                          // 0xD98(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              WaterInfoMID;                                      // 0xDA0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class AWaterBodyIsland>> WaterBodyIslands;                                  // 0xDA8(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class AWaterBodyExclusionVolume>> WaterBodyExclusionVolumes;                         // 0xDB8(0x10)(Edit, ZeroConstructor, EditConst, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ALandscapeProxy>        Landscape;                                         // 0xDC8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class AWaterZone>             OwningWaterZone;                                   // 0xDD0(0x28)(Edit, DisableEditOnTemplate, EditConst, AdvancedDisplay, Protected, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class AWaterZone>             WaterZoneOverride;                                 // 0xDF8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, AdvancedDisplay, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Engine_PostProcessSettings            CurrentPostProcessSettings;                        // 0xE20(0x6E0)(Transient, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UNavAreaBase>              WaterNavAreaClass;                                 // 0x1500(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       FixedWaterDepth;                                   // 0x1508(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWaterBodyComponent* GetDefaultObj();

	void SetWaterZoneOverride(TSoftObjectPtr<class AWaterZone>& InWaterZoneOverride);
	void SetWaterAndUnderWaterPostProcessMaterial(class UMaterialInterface* InWaterMaterial, class UMaterialInterface* InUnderWaterPostProcessMaterial);
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
	class UWaterWavesBase* GetWaterWaves();
	float GetWaterVelocityAtSplineInputKey(float InKey);
	void GetWaterSurfaceInfoAtLocation(struct CoreUObject_Vector& InLocation, struct CoreUObject_Vector* OutWaterSurfaceLocation, struct CoreUObject_Vector* OutWaterSurfaceNormal, struct CoreUObject_Vector* OutWaterVelocity, float* OutWaterDepth, bool bIncludeDepth);
	class UMaterialInstanceDynamic* GetWaterStaticMeshMaterialInstance();
	class UWaterSplineComponent* GetWaterSpline();
	class UMaterialInstanceDynamic* GetWaterMaterialInstance();
	class UMaterialInterface* GetWaterMaterial();
	class UMaterialInstanceDynamic* GetWaterLODMaterialInstance();
	class UMaterialInstanceDynamic* GetWaterInfoMaterialInstance();
	class AWaterBody* GetWaterBodyActor();
	class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
	TArray<class UPrimitiveComponent*> GetStandardRenderableComponents();
	class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
	float GetMaxWaveHeight();
	TArray<class AWaterBodyIsland*> GetIslands();
	TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
	TArray<class UPrimitiveComponent*> GetCollisionComponents(bool bInOnlyEnabledComponents);
};

// 0x8 (0x30 - 0x28)
// Class Water.CustomMeshGenerator
class UCustomMeshGenerator : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                  MeshComp;                                          // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCustomMeshGenerator* GetDefaultObj();

};

// 0x0 (0x2E8 - 0x2E8)
// Class Water.WaterBodyCustom
class AWaterBodyCustom : public AWaterBody
{
public:

	static class UClass* StaticClass();
	static class AWaterBodyCustom* GetDefaultObj();

};

// 0x10 (0x1520 - 0x1510)
// Class Water.WaterBodyCustomComponent
class UWaterBodyCustomComponent : public UWaterBodyComponent
{
public:
	class UStaticMeshComponent*                  MeshComp;                                          // 0x1510(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14A0[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWaterBodyCustomComponent* GetDefaultObj();

};

// 0x18 (0x2F8 - 0x2E0)
// Class Water.WaterBodyExclusionVolume
class AWaterBodyExclusionVolume : public APhysicsVolume
{
public:
	bool                                         bExcludeAllOverlappingWaterBodies;                 // 0x2E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14A9[0x7];                                     // Fixing Size After Last Property  
	TArray<class AWaterBody*>                    WaterBodiesToExclude;                              // 0x2E8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AWaterBodyExclusionVolume* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.WaterBodyHLODBuilder
class UWaterBodyHLODBuilder : public UHLODBuilder
{
public:

	static class UClass* StaticClass();
	static class UWaterBodyHLODBuilder* GetDefaultObj();

};

// 0x0 (0x630 - 0x630)
// Class Water.WaterBodyInfoMeshComponent
class UWaterBodyInfoMeshComponent : public UWaterBodyMeshComponent
{
public:

	static class UClass* StaticClass();
	static class UWaterBodyInfoMeshComponent* GetDefaultObj();

};

// 0x10 (0x2A8 - 0x298)
// Class Water.WaterBodyIsland
class AWaterBodyIsland : public AActor
{
public:
	uint8                                        Pad_14D6[0x8];                                     // Fixing Size After Last Property  
	class UWaterSplineComponent*                 SplineComp;                                        // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AWaterBodyIsland* GetDefaultObj();

	class UWaterSplineComponent* GetWaterSpline();
};

// 0x18 (0x40 - 0x28)
// Class Water.LakeGenerator
class ULakeGenerator : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                  LakeMeshComp;                                      // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBoxComponent*                         LakeCollisionComp;                                 // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULakeCollisionComponent*               LakeCollision;                                     // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULakeGenerator* GetDefaultObj();

};

// 0x0 (0x2E8 - 0x2E8)
// Class Water.WaterBodyLake
class AWaterBodyLake : public AWaterBody
{
public:

	static class UClass* StaticClass();
	static class AWaterBodyLake* GetDefaultObj();

};

// 0x10 (0x1520 - 0x1510)
// Class Water.WaterBodyLakeComponent
class UWaterBodyLakeComponent : public UWaterBodyComponent
{
public:
	class UStaticMeshComponent*                  LakeMeshComp;                                      // 0x1510(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULakeCollisionComponent*               LakeCollision;                                     // 0x1518(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWaterBodyLakeComponent* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Water.OceanGenerator
class UOceanGenerator : public UWaterBodyGenerator
{
public:
	TArray<class UOceanBoxCollisionComponent*>   CollisionBoxes;                                    // 0x28(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UOceanCollisionComponent*>      CollisionHullSets;                                 // 0x38(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOceanGenerator* GetDefaultObj();

};

// 0x0 (0x2E8 - 0x2E8)
// Class Water.WaterBodyOcean
class AWaterBodyOcean : public AWaterBody
{
public:

	static class UClass* StaticClass();
	static class AWaterBodyOcean* GetDefaultObj();

};

// 0x60 (0x1570 - 0x1510)
// Class Water.WaterBodyOceanComponent
class UWaterBodyOceanComponent : public UWaterBodyComponent
{
public:
	TArray<class UOceanBoxCollisionComponent*>   CollisionBoxes;                                    // 0x1510(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UOceanCollisionComponent*>      CollisionHullSets;                                 // 0x1520(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector                    CollisionExtents;                                  // 0x1530(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector2D                  OceanExtents;                                      // 0x1548(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector2D                  SavedZoneLocation;                                 // 0x1558(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeightOffset;                                      // 0x1568(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1514[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWaterBodyOceanComponent* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Water.RiverGenerator
class URiverGenerator : public UWaterBodyGenerator
{
public:
	TArray<class USplineMeshComponent*>          SplineMeshComponents;                              // 0x28(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URiverGenerator* GetDefaultObj();

};

// 0x0 (0x2E8 - 0x2E8)
// Class Water.WaterBodyRiver
class AWaterBodyRiver : public AWaterBody
{
public:

	static class UClass* StaticClass();
	static class AWaterBodyRiver* GetDefaultObj();

};

// 0x30 (0x1540 - 0x1510)
// Class Water.WaterBodyRiverComponent
class UWaterBodyRiverComponent : public UWaterBodyComponent
{
public:
	TArray<class USplineMeshComponent*>          SplineMeshComponents;                              // 0x1510(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    LakeTransitionMaterial;                            // 0x1520(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              LakeTransitionMID;                                 // 0x1528(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    OceanTransitionMaterial;                           // 0x1530(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              OceanTransitionMID;                                // 0x1538(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, NoDestructor, Protected, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UWaterBodyRiverComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Water.WaterBrushActorInterface
class IWaterBrushActorInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IWaterBrushActorInterface* GetDefaultObj();

};

// 0x128 (0x6D0 - 0x5A8)
// Class Water.WaterMeshComponent
class UWaterMeshComponent : public UMeshComponent
{
public:
	int32                                        ForceCollapseDensityLevel;                         // 0x5A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1544[0x4];                                     // Fixing Size After Last Property  
	class UMaterialInterface*                    FarDistanceMaterial;                               // 0x5B0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FarDistanceMeshExtent;                             // 0x5B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TileSize;                                          // 0x5BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_IntPoint                  ExtentInTiles;                                     // 0x5C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_154A[0x98];                                    // Fixing Size After Last Property  
	TSet<class UMaterialInterface*>              UsedMaterials;                                     // 0x660(0x50)(Transient, TextExportTransient, NonPIEDuplicateTransient, UObjectWrapper, NativeAccessSpecifierPrivate)
	bool                                         bUseFarMeshWithoutOcean;                           // 0x6B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_154C[0xF];                                     // Fixing Size After Last Property  
	int32                                        TessellationFactor;                                // 0x6C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LODScale;                                          // 0x6C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_154E[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWaterMeshComponent* GetDefaultObj();

	bool IsEnabled();
};

// 0x90 (0xC8 - 0x38)
// Class Water.WaterRuntimeSettings
class UWaterRuntimeSettings : public UDeveloperSettings
{
public:
	enum class ECollisionChannel                 CollisionChannelForWaterTraces;                    // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1556[0x7];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UMaterialParameterCollection> MaterialParameterCollection;                       // 0x40(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaterBodyIconWorldZOffset;                         // 0x68(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DefaultWaterCollisionProfileName;                  // 0x6C(0x8)(Edit, ZeroConstructor, Config, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1557[0x4];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UMaterialInterface>     DefaultWaterInfoMaterial;                          // 0x78(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UWaterBodyRiverComponent>  WaterBodyRiverComponentClass;                      // 0xA0(0x8)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UWaterBodyLakeComponent>   WaterBodyLakeComponentClass;                       // 0xA8(0x8)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UWaterBodyOceanComponent>  WaterBodyOceanComponentClass;                      // 0xB0(0x8)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UWaterBodyCustomComponent> WaterBodyCustomComponentClass;                     // 0xB8(0x8)(Edit, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bWarnOnMismatchOceanExtent;                        // 0xC0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_155C[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWaterRuntimeSettings* GetDefaultObj();

};

// 0x20 (0x690 - 0x670)
// Class Water.WaterSplineComponent
class UWaterSplineComponent : public USplineComponent
{
public:
	struct Water_WaterSplineCurveDefaults        WaterSplineDefaults;                               // 0x670(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct Water_WaterSplineCurveDefaults        PreviousWaterSplineDefaults;                       // 0x680(0x10)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWaterSplineComponent* GetDefaultObj();

	void K2_SynchronizeAndBroadcastDataChange();
};

// 0x78 (0xA0 - 0x28)
// Class Water.WaterSplineMetadata
class UWaterSplineMetadata : public USplineMetadata
{
public:
	struct CoreUObject_InterpCurveFloat          Depth;                                             // 0x28(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_InterpCurveFloat          WaterVelocityScalar;                               // 0x40(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_InterpCurveFloat          RiverWidth;                                        // 0x58(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_InterpCurveFloat          AudioIntensity;                                    // 0x70(0x18)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_InterpCurveVector         WaterVelocity;                                     // 0x88(0x18)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaterSplineMetadata* GetDefaultObj();

};

// 0xD0 (0x110 - 0x40)
// Class Water.WaterSubsystem
class UWaterSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_1685[0x38];                                    // Fixing Size After Last Property  
	class ABuoyancyManager*                      BuoyancyManager;                                   // 0x78(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCameraUnderwaterStateChanged;                    // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnWaterScalabilityChanged;                         // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UStaticMesh*                           DefaultRiverMesh;                                  // 0xA0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           DefaultLakeMesh;                                   // 0xA8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1691[0x28];                                    // Fixing Size After Last Property  
	class UMaterialParameterCollection*          MaterialParameterCollection;                       // 0xD8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1692[0x30];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UWaterSubsystem* GetDefaultObj();

	void SetOceanFloodHeight(float InFloodHeight);
	void PrintToWaterLog(const class FString& Message, bool bWarning);
	bool IsWaterRenderingEnabled();
	bool IsUnderwaterPostProcessEnabled();
	bool IsShallowWaterSimulationEnabled();
	float GetWaterTimeSeconds();
	float GetSmoothedWorldTimeSeconds();
	int32 GetShallowWaterSimulationRenderTargetSize();
	int32 GetShallowWaterMaxImpulseForces();
	int32 GetShallowWaterMaxDynamicForces();
	float GetOceanTotalHeight();
	float GetOceanFloodHeight();
	float GetOceanBaseHeight();
	float GetCameraUnderwaterDepth();
};

// 0x8 (0x30 - 0x28)
// Class Water.WaterWavesAsset
class UWaterWavesAsset : public UObject
{
public:
	class UWaterWaves*                           WaterWaves;                                        // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaterWavesAsset* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Water.WaterWavesAssetReference
class UWaterWavesAssetReference : public UWaterWavesBase
{
public:
	class UWaterWavesAsset*                      WaterWavesAsset;                                   // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UWaterWavesAssetReference* GetDefaultObj();

};

// 0x90 (0x328 - 0x298)
// Class Water.WaterZone
class AWaterZone : public AActor
{
public:
	class UTextureRenderTarget2D*                WaterInfoTexture;                                  // 0x298(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class UWaterBodyComponent>> OwnedWaterBodies;                                  // 0x2A0(0x10)(Edit, ExportObject, ZeroConstructor, Transient, EditConst, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct CoreUObject_IntPoint                  RenderTargetResolution;                            // 0x2B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWaterMeshComponent*                   WaterMesh;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Vector2D                  ZoneExtent;                                        // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CaptureZOffset;                                    // 0x2D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHalfPrecisionTexture;                             // 0x2D4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16DC[0x3];                                     // Fixing Size After Last Property  
	int32                                        VelocityBlurRadius;                                // 0x2D8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        OverlapPriority;                                   // 0x2DC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnableLocalOnlyTessellation;                      // 0x2E0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16E3[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    LocalTessellationExtent;                           // 0x2E8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16E4[0x28];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AWaterZone* GetDefaultObj();

};

}


