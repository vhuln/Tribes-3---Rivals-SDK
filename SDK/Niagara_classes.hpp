#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class Niagara.NDIRenderTargetVolumeSimCacheData
class UNDIRenderTargetVolumeSimCacheData : public UObject
{
public:
	class FName                                  CompressionType;                                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Niagara_NDIRenderTargetVolumeSimCacheFrame> Frames;                                            // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNDIRenderTargetVolumeSimCacheData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraConvertInPlaceUtilityBase
class UNiagaraConvertInPlaceUtilityBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraConvertInPlaceUtilityBase* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Niagara.NiagaraDataChannelReader
class UNiagaraDataChannelReader : public UObject
{
public:
	uint8                                        Pad_BE5[0x18];                                     // Fixing Size After Last Property  
	class UNiagaraDataChannelHandler*            Owner;                                             // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataChannelReader* GetDefaultObj();

	struct CoreUObject_Vector4 ReadVector4(class FName VarName, int32 Index);
	struct CoreUObject_Vector2D ReadVector2D(class FName VarName, int32 Index);
	struct CoreUObject_Vector ReadVector(class FName VarName, int32 Index);
	struct CoreUObject_Quat ReadQuat(class FName VarName, int32 Index);
	struct CoreUObject_Vector ReadPosition(class FName VarName, int32 Index);
	struct CoreUObject_LinearColor ReadLinearColor(class FName VarName, int32 Index);
	int32 ReadInt(class FName VarName, int32 Index);
	double ReadFloat(class FName VarName, int32 Index);
	bool ReadBool(class FName VarName, int32 Index);
	int32 Num();
	bool InitAccess(const struct Niagara_NiagaraDataChannelSearchParameters& SearchParams, bool bReadPrevFrameData);
};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraDataChannelWriter
class UNiagaraDataChannelWriter : public UObject
{
public:
	uint8                                        Pad_C84[0x10];                                     // Fixing Size After Last Property  
	class UNiagaraDataChannelHandler*            Owner;                                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataChannelWriter* GetDefaultObj();

	void WriteVector4(class FName VarName, int32 Index, const struct CoreUObject_Vector4& InData);
	void WriteVector2D(class FName VarName, int32 Index, const struct CoreUObject_Vector2D& InData);
	void WriteVector(class FName VarName, int32 Index, const struct CoreUObject_Vector& InData);
	void WriteSpawnInfo(class FName VarName, int32 Index, const struct Niagara_NiagaraSpawnInfo& InData);
	void WriteQuat(class FName VarName, int32 Index, const struct CoreUObject_Quat& InData);
	void WritePosition(class FName VarName, int32 Index, const struct CoreUObject_Vector& InData);
	void WriteLinearColor(class FName VarName, int32 Index, const struct CoreUObject_LinearColor& InData);
	void WriteInt(class FName VarName, int32 Index, int32 InData);
	void WriteFloat(class FName VarName, int32 Index, double InData);
	void WriteBool(class FName VarName, int32 Index, bool InData);
	int32 Num();
	bool InitWrite(const struct Niagara_NiagaraDataChannelSearchParameters& SearchParams, int32 Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU);
};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraDataChannelHandler
class UNiagaraDataChannelHandler : public UObject
{
public:
	TWeakObjectPtr<class UNiagaraDataChannel>    DataChannel;                                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraDataChannelWriter*             Writer;                                            // 0x30(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraDataChannelReader*             Reader;                                            // 0x38(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataChannelHandler* GetDefaultObj();

	class UNiagaraDataChannelWriter* GetDataChannelWriter();
	class UNiagaraDataChannelReader* GetDataChannelReader();
};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraDataChannelAsset
class UNiagaraDataChannelAsset : public UObject
{
public:
	class UNiagaraDataChannel*                   DataChannel;                                       // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraDataChannelAsset* GetDefaultObj();

};

// 0x108 (0x130 - 0x28)
// Class Niagara.NiagaraDataChannel
class UNiagaraDataChannel : public UObject
{
public:
	TArray<struct Niagara_NiagaraVariable>       Variables;                                         // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bKeepPreviousFrameData;                            // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CA9[0x7];                                      // Fixing Size After Last Property  
	struct Niagara_NiagaraDataSetCompiledData    CompiledData;                                      // 0x40(0x48)(Transient, NativeAccessSpecifierPrivate)
	struct Niagara_NiagaraDataSetCompiledData    CompiledDataGPU;                                   // 0x88(0x48)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CAC[0x60];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataChannel* GetDefaultObj();

};

// 0x0 (0x130 - 0x130)
// Class Niagara.NiagaraDataChannel_Global
class UNiagaraDataChannel_Global : public UNiagaraDataChannel
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataChannel_Global* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class Niagara.NiagaraDataChannelHandler_Global
class UNiagaraDataChannelHandler_Global : public UNiagaraDataChannelHandler
{
public:
	uint8                                        Pad_CBE[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataChannelHandler_Global* GetDefaultObj();

};

// 0x78 (0x1A8 - 0x130)
// Class Niagara.NiagaraDataChannel_Islands
class UNiagaraDataChannel_Islands : public UNiagaraDataChannel
{
public:
	enum class ENiagraDataChannel_IslandMode     Mode;                                              // 0x130(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_CCA[0x7];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    InitialExtents;                                    // 0x138(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Vector                    MaxExtents;                                        // 0x150(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Vector                    PerElementExtents;                                 // 0x168(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSoftObjectPtr<class UNiagaraSystem>> Systems;                                           // 0x180(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	int32                                        IslandPoolSize;                                    // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Niagara_NDCIslandDebugDrawSettings    DebugDrawSettings;                                 // 0x194(0x4)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraSystem*>                SystemsInternal;                                   // 0x198(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraDataChannel_Islands* GetDefaultObj();

};

// 0x30 (0x70 - 0x40)
// Class Niagara.NiagaraDataChannelHandler_Islands
class UNiagaraDataChannelHandler_Islands : public UNiagaraDataChannelHandler
{
public:
	TArray<int32>                                ActiveIslands;                                     // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<int32>                                FreeIslands;                                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct Niagara_NDCIsland>             IslandPool;                                        // 0x60(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraDataChannelHandler_Islands* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraDataInterface
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	uint8                                        Pad_CEA[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterface* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRWBase* GetDefaultObj();

};

// 0x88 (0xC0 - 0x38)
// Class Niagara.NiagaraDataInterfaceDataChannelRead
class UNiagaraDataInterfaceDataChannelRead : public UNiagaraDataInterfaceRWBase
{
public:
	class UNiagaraDataChannelAsset*              Channel;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraDataInterfaceEmitterBinding EmitterBinding;                                    // 0x40(0xC)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                         bReadCurrentFrame;                                 // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateSourceDataEveryTick;                        // 0x4D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideSpawnGroupToDataChannelIndex;             // 0x4E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CFC[0x1];                                      // Fixing Size After Last Property  
	class FName                                  SpawnInfoName;                                     // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NDIDataChannelCompiledData    CompiledData;                                      // 0x58(0x68)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceDataChannelRead* GetDefaultObj();

};

// 0xC8 (0x100 - 0x38)
// Class Niagara.NiagaraDataInterfaceDataChannelWrite
class UNiagaraDataInterfaceDataChannelWrite : public UNiagaraDataInterface
{
public:
	enum class ENiagaraDataChannelAllocationMode AllocationMode;                                    // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D0A[0x3];                                      // Fixing Size After Last Property  
	uint32                                       AllocationCount;                                   // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPublishToGame;                                    // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPublishToCPU;                                     // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPublishToGPU;                                     // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateDestinationDataEveryTick;                   // 0x43(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D0D[0x4];                                      // Fixing Size After Last Property  
	class UNiagaraDataChannelAsset*              Channel;                                           // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NDIDataChannelWriteCompiledData CompiledData;                                      // 0x50(0xB0)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceDataChannelWrite* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraMessageDataBase
class UNiagaraMessageDataBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraMessageDataBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraParameterDefinitionsBase
class UNiagaraParameterDefinitionsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraParameterDefinitionsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraRenderableMeshInterface
class INiagaraRenderableMeshInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INiagaraRenderableMeshInterface* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Niagara.NiagaraScriptSourceBase
class UNiagaraScriptSourceBase : public UObject
{
public:
	uint8                                        Pad_D23[0x20];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraScriptSourceBase* GetDefaultObj();

};

// 0x108 (0x140 - 0x38)
// Class Niagara.NiagaraSettings
class UNiagaraSettings : public UDeveloperSettings
{
public:
	bool                                         bSystemsSupportLargeWorldCoordinates;              // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnforceStrictStackTypes;                          // 0x39(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExperimentalVMEnabled;                            // 0x3A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitDeltaTime;                                   // 0x3B(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDeltaTimePerTick;                               // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftObjectPath            DefaultEffectType;                                 // 0x40(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftObjectPath            RequiredEffectType;                                // 0x60(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               PositionPinTypeColor;                              // 0x80(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FText>                          QualityLevels;                                     // 0x90(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TMap<class FString, class FText>             ComponentRendererWarningsPerClass;                 // 0xA0(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        DefaultRenderTargetFormat;                         // 0xF0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuBufferFormat           DefaultGridFormat;                                 // 0xF1(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D40[0x2];                                      // Fixing Size After Last Property  
	enum class ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting;                // 0xF4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDefaultRendererPixelCoverageMode DefaultPixelCoverageMode;                          // 0xF8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDefaultSortPrecision      DefaultSortPrecision;                              // 0xF9(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDefaultGpuTranslucentLatency DefaultGpuTranslucentLatency;                      // 0xFA(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D43[0x1];                                      // Fixing Size After Last Property  
	float                                        DefaultLightInverseExposureBlend;                  // 0xFC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISkelMesh_GpuMaxInfluences     NDISkelMesh_GpuMaxInfluences;                      // 0x100(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISkelMesh_GpuUniformSamplingFormat NDISkelMesh_GpuUniformSamplingFormat;              // 0x101(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISkelMesh_AdjacencyTriangleIndexFormat NDISkelMesh_AdjacencyTriangleIndexFormat;          // 0x102(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NDIStaticMesh_AllowDistanceFields;                 // 0x103(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D49[0x4];                                      // Fixing Size After Last Property  
	TArray<enum class ENDICollisionQuery_AsyncGpuTraceProvider> NDICollisionQuery_AsyncGpuTraceProviderOrder;      // 0x108(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                SimCacheAuxiliaryFileBasePath;                     // 0x118(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        SimCacheMaxCPUMemoryVolumetrics;                   // 0x128(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Niagara_NiagaraPlatformSetRedirect> PlatformSetRedirects;                              // 0x130(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSimCacheCustomStorageInterface
class INiagaraSimCacheCustomStorageInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INiagaraSimCacheCustomStorageInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraValidationRuleSet
class UNiagaraValidationRuleSet : public UObject
{
public:
	TArray<class UNiagaraValidationRule*>        ValidationRules;                                   // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraValidationRuleSet* GetDefaultObj();

};

// 0x48 (0x80 - 0x38)
// Class Niagara.NiagaraDataInterfaceActorComponent
class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface
{
public:
	enum class ENDIActorComponentSourceMode      SourceMode;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6D[0x3];                                      // Fixing Size After Last Property  
	int32                                        LocalPlayerIndex;                                  // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class AActor>                 SourceActor;                                       // 0x40(0x18)(Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraUserParameterBinding   ActorOrComponentParameter;                         // 0x58(0x20)(Edit, NativeAccessSpecifierPublic)
	bool                                         bRequireCurrentFrameData;                          // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D76[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceActorComponent* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceAsyncGpuTrace
class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface
{
public:
	int32                                        MaxTracesPerParticle;                              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRetraces;                                       // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDICollisionQuery_AsyncGpuTraceProvider TraceProvider;                                     // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D7C[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAsyncGpuTrace* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceDebugDraw
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{
public:
	uint32                                       OverrideMaxLineInstances;                          // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D86[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceDebugDraw* GetDefaultObj();

};

// 0x70 (0xA8 - 0x38)
// Class Niagara.NiagaraDataInterfaceDynamicMesh
class UNiagaraDataInterfaceDynamicMesh : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_D91[0x8];                                      // Fixing Size After Last Property  
	TArray<struct Niagara_NiagaraDynamicMeshSection> Sections;                                          // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct Niagara_NiagaraDynamicMeshMaterial> Materials;                                         // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumVertices;                                       // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumTexCoords;                                      // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasColors;                                        // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasTangentBasis;                                  // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearTrianglesPerFrame;                           // 0x6A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D94[0x5];                                      // Fixing Size After Last Property  
	struct CoreUObject_Box                       DefaultBounds;                                     // 0x70(0x38)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceDynamicMesh* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceEmitterProperties
class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface
{
public:
	struct Niagara_NiagaraDataInterfaceEmitterBinding EmitterBinding;                                    // 0x38(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9D[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceEmitterProperties* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceGBuffer
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGBuffer* GetDefaultObj();

};

// 0x70 (0xA8 - 0x38)
// Class Niagara.NiagaraDataInterfacePhysicsAsset
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{
public:
	class UPhysicsAsset*                         DefaultSource;                                     // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AActor>                 SoftSourceActor;                                   // 0x40(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraUserParameterBinding   MeshUserParameter;                                 // 0x68(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAD[0x20];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfacePhysicsAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraPhysicsAssetDICollectorInterface
class INiagaraPhysicsAssetDICollectorInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INiagaraPhysicsAssetDICollectorInterface* GetDefaultObj();

};

// 0xF0 (0x128 - 0x38)
// Class Niagara.NiagaraDataInterfaceSceneCapture2D
class UNiagaraDataInterfaceSceneCapture2D : public UNiagaraDataInterface
{
public:
	enum class ENDISceneCapture2DSourceMode      SourceMode;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC9[0x7];                                      // Fixing Size After Last Property  
	struct Niagara_NiagaraUserParameterBinding   SceneCaptureUserParameter;                         // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)
	bool                                         bAutoMoveWithComponent;                            // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISceneCapture2DOffsetMode      AutoMoveOffsetLocationMode;                        // 0x61(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCB[0x6];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    AutoMoveOffsetLocation;                            // 0x68(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISceneCapture2DOffsetMode      AutoMoveOffsetRotationMode;                        // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCC[0x7];                                      // Fixing Size After Last Property  
	struct CoreUObject_Rotator                   AutoMoveOffsetRotation;                            // 0x88(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESceneCaptureSource               ManagedCaptureSource;                              // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DCF[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_IntPoint                  ManagedTextureSize;                                // 0xA4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        ManagedTextureFormat;                              // 0xAC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraProjectionMode             ManagedProjectionType;                             // 0xAD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD1[0x2];                                      // Fixing Size After Last Property  
	float                                        ManagedFOVAngle;                                   // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ManagedOrthoWidth;                                 // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bManagedCaptureEveryFrame;                         // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bManagedCaptureOnMovement;                         // 0xB9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD7[0x6];                                      // Fixing Size After Last Property  
	TArray<class AActor*>                        ManagedShowOnlyActors;                             // 0xC0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDB[0x8];                                      // Fixing Size After Last Property  
	TMap<uint64, class USceneCaptureComponent2D*> ManagedCaptureComponents;                          // 0xD8(0x50)(ExportObject, Transient, DuplicateTransient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSceneCapture2D* GetDefaultObj();

	void SetSceneCapture2DManagedShowOnlyActors(class UNiagaraComponent* NiagaraSystem, class FName ParameterName, const TArray<class AActor*>& ShowOnlyActors);
};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraDataInterfaceSimCacheReader
class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface
{
public:
	struct Niagara_NiagaraUserParameterBinding   SimCacheBinding;                                   // 0x38(0x20)(Edit, NativeAccessSpecifierPublic)
	class UNiagaraSimCache*                      SimCache;                                          // 0x58(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EmitterBinding;                                    // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSimCacheReader* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceSimpleCounter
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterfaceRWBase
{
public:
	enum class ENiagaraGpuSyncMode               GpuSyncMode;                                       // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialValue;                                      // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSimpleCounter* GetDefaultObj();

};

// 0x98 (0xD0 - 0x38)
// Class Niagara.NiagaraDataInterfaceStaticMesh
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	enum class ENDIStaticMesh_SourceMode         SourceMode;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E48[0x7];                                      // Fixing Size After Last Property  
	class UStaticMesh*                           DefaultMesh;                                       // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AActor>                 SoftSourceActor;                                   // 0x48(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  SourceComponent;                                   // 0x70(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Niagara_NDIStaticMeshSectionFilter    SectionFilter;                                     // 0x78(0x10)(Edit, NativeAccessSpecifierPublic)
	bool                                         bCaptureTransformsPerFrame;                        // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePhysicsBodyVelocity;                           // 0x89(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSamplingFromStreamingLODs;                   // 0x8A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E50[0x1];                                      // Fixing Size After Last Property  
	int32                                        LODIndex;                                          // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraUserParameterBinding   LODIndexUserParameter;                             // 0x90(0x20)(Edit, NativeAccessSpecifierPublic)
	int32                                        InstanceIndex;                                     // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E53[0x4];                                      // Fixing Size After Last Property  
	TArray<class FName>                          FilteredSockets;                                   // 0xB8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_E54[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceStaticMesh* GetDefaultObj();

	void SetNiagaraStaticMeshDIInstanceIndex(class UNiagaraComponent* NiagaraSystem, class FName UserParameterName, int32 NewInstanceIndex);
	void OnSourceEndPlay(class AActor* InSource, enum class EEndPlayReason Reason);
};

// 0x70 (0xA8 - 0x38)
// Class Niagara.NiagaraDataInterfaceUObjectPropertyReader
class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface
{
public:
	enum class ENDIObjectPropertyReaderSourceMode SourceMode;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7B[0x7];                                      // Fixing Size After Last Property  
	struct Niagara_NiagaraUserParameterBinding   UObjectParameterBinding;                           // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)
	TArray<struct Niagara_NiagaraUObjectPropertyReaderRemap> PropertyRemap;                                     // 0x60(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AActor>                 SourceActor;                                       // 0x70(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   SourceActorComponentClass;                         // 0x98(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E7F[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceUObjectPropertyReader* GetDefaultObj();

	void SetUObjectReaderPropertyRemap(class UNiagaraComponent* NiagaraComponent, class FName UserParameterName, class FName GraphName, class FName RemapName);
};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceVirtualTexture
class UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface
{
public:
	class URuntimeVirtualTexture*                Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraUserParameterBinding   TextureUserParameter;                              // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVirtualTexture* GetDefaultObj();

};

// 0x10 (0x100 - 0xF0)
// Class Niagara.MovieSceneNiagaraSystemSpawnSection
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;                              // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;                           // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;                                // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraAgeUpdateMode             AgeUpdateMode;                                     // 0xFC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAllowScalability;                                 // 0xFD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E99[0x2];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraSystemSpawnSection* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class Niagara.MovieSceneNiagaraTrack
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraTrack* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class Niagara.MovieSceneNiagaraSystemTrack
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:
	uint8                                        Pad_EBB[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraSystemTrack* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class Niagara.MovieSceneNiagaraParameterTrack
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct Niagara_NiagaraVariable               Parameter;                                         // 0xA8(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraParameterTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class Niagara.MovieSceneNiagaraBoolParameterTrack
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_ED2[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraBoolParameterTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class Niagara.MovieSceneNiagaraColorParameterTrack
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_EDA[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraColorParameterTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class Niagara.MovieSceneNiagaraFloatParameterTrack
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_EE8[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraFloatParameterTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_EFF[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraIntegerParameterTrack* GetDefaultObj();

};

// 0x10 (0xD8 - 0xC8)
// Class Niagara.MovieSceneNiagaraVectorParameterTrack
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_F09[0x8];                                      // Fixing Size After Last Property  
	int32                                        ChannelsUsed;                                      // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F0A[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraVectorParameterTrack* GetDefaultObj();

};

// 0x10 (0x2A8 - 0x298)
// Class Niagara.NiagaraActor
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bDestroyOnSystemFinish : 1;                        // Mask: 0x1, PropSize: 0x10x2A0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F30[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ANiagaraActor* GetDefaultObj();

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
	void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
	bool GetDestroyOnSystemFinish();
};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraBakerOutput
class UNiagaraBakerOutput : public UObject
{
public:
	class FString                                OutputName;                                        // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraBakerOutput* GetDefaultObj();

};

// 0x68 (0xA0 - 0x38)
// Class Niagara.NiagaraBakerOutputSimCache
class UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput
{
public:
	class FString                                SimCacheAssetPathFormat;                           // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraSimCacheCreateParameters CreateParameters;                                  // 0x48(0x58)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraBakerOutputSimCache* GetDefaultObj();

};

// 0x68 (0xA0 - 0x38)
// Class Niagara.NiagaraBakerOutputTexture2D
class UNiagaraBakerOutputTexture2D : public UNiagaraBakerOutput
{
public:
	struct Niagara_NiagaraBakerTextureSource     SourceBinding;                                     // 0x38(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bGenerateAtlas : 1;                                // Mask: 0x1, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGenerateFrames : 1;                               // Mask: 0x2, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExportFrames : 1;                                 // Mask: 0x4, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSetTextureAddressX : 1;                           // Mask: 0x8, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSetTextureAddressY : 1;                           // Mask: 0x10, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_52 : 3;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_F4F[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_IntPoint                  FrameSize;                                         // 0x54(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_IntPoint                  AtlasTextureSize;                                  // 0x5C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F55[0x8];                                      // Fixing Size After Last Property  
	enum class ETextureAddress                   TextureAddressX;                                   // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   TextureAddressY;                                   // 0x6D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F59[0x2];                                      // Fixing Size After Last Property  
	class FString                                AtlasAssetPathFormat;                              // 0x70(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FramesAssetPathFormat;                             // 0x80(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FramesExportPathFormat;                            // 0x90(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraBakerOutputTexture2D* GetDefaultObj();

};

// 0x50 (0x88 - 0x38)
// Class Niagara.NiagaraBakerOutputVolumeTexture
class UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput
{
public:
	struct Niagara_NiagaraBakerTextureSource     SourceBinding;                                     // 0x38(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bGenerateAtlas : 1;                                // Mask: 0x1, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGenerateFrames : 1;                               // Mask: 0x2, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExportFrames : 1;                                 // Mask: 0x4, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_53 : 5;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_F64[0x7];                                      // Fixing Size After Last Property  
	class FString                                AtlasAssetPathFormat;                              // 0x58(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FramesAssetPathFormat;                             // 0x68(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FramesExportPathFormat;                            // 0x78(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraBakerOutputVolumeTexture* GetDefaultObj();

};

// 0x1C8 (0x1F0 - 0x28)
// Class Niagara.NiagaraBakerSettings
class UNiagaraBakerSettings : public UObject
{
public:
	float                                        StartSeconds;                                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationSeconds;                                   // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FramesPerSecond;                                   // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPreviewLooping : 1;                               // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_54 : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_F78[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_IntPoint                  FramesPerDimension;                                // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraBakerOutput*>           Outputs;                                           // 0x40(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct Niagara_NiagaraBakerCameraSettings> CameraSettings;                                    // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        CurrentCameraIndex;                                // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BakeQualityLevel;                                  // 0x64(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRenderComponentOnly : 1;                          // Mask: 0x1, PropSize: 0x10x6C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_55 : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_F83[0x3];                                      // Fixing Size After Last Property  
	TArray<struct Niagara_NiagaraBakerTextureSettings> OutputTextures;                                    // 0x70(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	enum class ENiagaraBakerViewMode             CameraViewportMode;                                // 0x80(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8C[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    CameraViewportLocation[0x7];                       // 0x88(0xA8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   CameraViewportRotation[0x7];                       // 0x130(0xA8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CameraOrbitDistance;                               // 0x1D8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraFOV;                                         // 0x1DC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraOrthoWidth;                                  // 0x1E0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseCameraAspectRatio : 1;                         // Mask: 0x1, PropSize: 0x10x1E4(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_56 : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_F97[0x3];                                      // Fixing Size After Last Property  
	float                                        CameraAspectRatio;                                 // 0x1E8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9A[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraBakerSettings* GetDefaultObj();

};

// 0x2A0 (0x810 - 0x570)
// Class Niagara.NiagaraComponent
class UNiagaraComponent : public UFXSystemComponent
{
public:
	class UNiagaraSystem*                        Asset;                                             // 0x570(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraTickBehavior              TickBehavior;                                      // 0x578(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_144A[0x3];                                     // Fixing Size After Last Property  
	int32                                        RandomSeedOffset;                                  // 0x57C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Niagara_NiagaraUserRedirectionParameterStore OverrideParameters;                                // 0x580(0xD8)(NativeAccessSpecifierPrivate)
	uint8                                        bForceSolo : 1;                                    // Mask: 0x1, PropSize: 0x10x658(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEnableGpuComputeDebug : 1;                        // Mask: 0x2, PropSize: 0x10x658(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideWarmupSettings : 1;                       // Mask: 0x4, PropSize: 0x10x658(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_6F : 5;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_1451[0x3];                                     // Fixing Size After Last Property  
	int32                                        WarmupTickCount;                                   // 0x65C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WarmupTickDelta;                                   // 0x660(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1456[0x34];                                    // Fixing Size After Last Property  
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x698(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bRenderingEnabled : 1;                             // Mask: 0x2, PropSize: 0x10x698(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAutoManageAttachment : 1;                         // Mask: 0x4, PropSize: 0x10x698(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoAttachWeldSimulatedBodies : 1;                // Mask: 0x8, PropSize: 0x10x698(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_72 : 4;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_145F[0x3];                                     // Fixing Size After Last Property  
	float                                        MaxTimeBeforeForceUpdateTransform;                 // 0x69C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1461[0x1];                                     // Fixing Size After Last Property  
	enum class ENiagaraOcclusionQueryMode        OcclusionQueryMode;                                // 0x6A1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1465[0x6];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnSystemFinished;                                  // 0x6A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>        AutoAttachParent;                                  // 0x6B8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AutoAttachSocketName;                              // 0x6C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachLocationRule;                            // 0x6C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachRotationRule;                            // 0x6C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachScaleRule;                               // 0x6CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1472[0x9];                                     // Fixing Size After Last Property  
	uint8                                        BitPad_73 : 4;                                     // Fixing Bit-Field Size  
	uint8                                        bAllowScalability : 1;                             // Mask: 0x10, PropSize: 0x10x6D4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_74 : 3;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_1475[0x12B];                                   // Fixing Size After Last Property  
	class UNiagaraSimCache*                      SimCache;                                          // 0x800(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraCullProxyComponent*            CullProxy;                                         // 0x808(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraComponent* GetDefaultObj();

	void SetVariableVec4(class FName InVariableName, struct CoreUObject_Vector4& InValue);
	void SetVariableVec3(class FName InVariableName, const struct CoreUObject_Vector& InValue);
	void SetVariableVec2(class FName InVariableName, const struct CoreUObject_Vector2D& InValue);
	void SetVariableTextureRenderTarget(class FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);
	void SetVariableTexture(class FName InVariableName, class UTexture* Texture);
	void SetVariableStaticMesh(class FName InVariableName, class UStaticMesh* InValue);
	void SetVariableQuat(class FName InVariableName, struct CoreUObject_Quat& InValue);
	void SetVariablePosition(class FName InVariableName, const struct CoreUObject_Vector& InValue);
	void SetVariableObject(class FName InVariableName, class UObject* Object);
	void SetVariableMatrix(class FName InVariableName, struct CoreUObject_Matrix& InValue);
	void SetVariableMaterial(class FName InVariableName, class UMaterialInterface* Object);
	void SetVariableLinearColor(class FName InVariableName, struct CoreUObject_LinearColor& InValue);
	void SetVariableInt(class FName InVariableName, int32 InValue);
	void SetVariableFloat(class FName InVariableName, float InValue);
	void SetVariableBool(class FName InVariableName, bool InValue);
	void SetVariableActor(class FName InVariableName, class AActor* Actor);
	void SetTickBehavior(enum class ENiagaraTickBehavior NewTickBehavior);
	void SetSystemFixedBounds(const struct CoreUObject_Box& LocalBounds);
	void SetSimCache(class UNiagaraSimCache* SimCache, bool bResetSystem);
	void SetSeekDelta(float InSeekDelta);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetRandomSeedOffset(int32 NewRandomSeedOffset);
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance);
	void SetPaused(bool bInPaused);
	void SetOcclusionQueryMode(enum class ENiagaraOcclusionQueryMode Mode);
	void SetNiagaraVariableVec4(const class FString& InVariableName, struct CoreUObject_Vector4& InValue);
	void SetNiagaraVariableVec3(const class FString& InVariableName, const struct CoreUObject_Vector& InValue);
	void SetNiagaraVariableVec2(const class FString& InVariableName, const struct CoreUObject_Vector2D& InValue);
	void SetNiagaraVariableQuat(const class FString& InVariableName, struct CoreUObject_Quat& InValue);
	void SetNiagaraVariablePosition(const class FString& InVariableName, const struct CoreUObject_Vector& InValue);
	void SetNiagaraVariableObject(const class FString& InVariableName, class UObject* Object);
	void SetNiagaraVariableMatrix(const class FString& InVariableName, struct CoreUObject_Matrix& InValue);
	void SetNiagaraVariableLinearColor(const class FString& InVariableName, struct CoreUObject_LinearColor& InValue);
	void SetNiagaraVariableInt(const class FString& InVariableName, int32 InValue);
	void SetNiagaraVariableFloat(const class FString& InVariableName, float InValue);
	void SetNiagaraVariableBool(const class FString& InVariableName, bool InValue);
	void SetNiagaraVariableActor(const class FString& InVariableName, class AActor* Actor);
	void SetMaxSimTime(float InMaxTime);
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);
	void SetGpuComputeDebug(bool bEnableDebug);
	void SetForceSolo(bool bInForceSolo);
	void SetForceLocalPlayerEffect(bool bIsPlayerEffect);
	void SetEmitterFixedBounds(class FName EmitterName, const struct CoreUObject_Box& LocalBounds);
	void SetDesiredAge(float InDesiredAge);
	void SetCustomTimeDilation(float Dilation);
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
	void SetAutoDestroy(bool bInAutoDestroy);
	void SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);
	void SetAllowScalability(bool bAllow);
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SeekToDesiredAge(float InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	void InitForPerformanceBaseline();
	enum class ENiagaraTickBehavior GetTickBehavior();
	struct CoreUObject_Box GetSystemFixedBounds();
	class UNiagaraSimCache* GetSimCache();
	float GetSeekDelta();
	int32 GetRandomSeedOffset();
	bool GetPreviewLODDistanceEnabled();
	float GetPreviewLODDistance();
	enum class ENiagaraOcclusionQueryMode GetOcclusionQueryMode();
	TArray<struct CoreUObject_Vector> GetNiagaraParticleValueVec3_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
	TArray<struct CoreUObject_Vector> GetNiagaraParticlePositions_DebugOnly(const class FString& InEmitterName);
	float GetMaxSimTime();
	bool GetLockDesiredAgeDeltaTimeToSeekDelta();
	bool GetForceSolo();
	bool GetForceLocalPlayerEffect();
	struct CoreUObject_Box GetEmitterFixedBounds(class FName EmitterName);
	float GetDesiredAge();
	class UNiagaraDataInterface* GetDataInterface(const class FString& Name);
	float GetCustomTimeDilation();
	class UNiagaraSystem* GetAsset();
	bool GetAllowScalability();
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void ClearSystemFixedBounds();
	void ClearSimCache(bool bResetSystem);
	void ClearEmitterFixedBounds(class FName EmitterName);
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);
};

// 0x58 (0x80 - 0x28)
// Class Niagara.NiagaraComponentPool
class UNiagaraComponentPool : public UObject
{
public:
	TMap<class UNiagaraSystem*, struct Niagara_NCPool> WorldParticleSystemPools;                          // 0x28(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_14B4[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraComponentPool* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class Niagara.NiagaraRendererProperties
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	struct Niagara_NiagaraPlatformSet            Platforms;                                         // 0x28(0x30)(Edit, NativeAccessSpecifierPublic)
	int32                                        SortOrderHint;                                     // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererMotionVectorSetting MotionVectorSetting;                               // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding RendererEnabledBinding;                            // 0x60(0x38)(Edit, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowInCullProxies;                               // 0x99(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14BB[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      OuterEmitterVersion;                               // 0x9C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14BE[0x14];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraRendererProperties* GetDefaultObj();

};

// 0x110 (0x1D0 - 0xC0)
// Class Niagara.NiagaraComponentRendererProperties
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{
public:
	TSubclassOf<class USceneComponent>           ComponentType;                                     // 0xC0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ComponentCountLimit;                               // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14CB[0x4];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraVariableAttributeBinding EnabledBinding;                                    // 0xD0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding RendererVisibilityTagBinding;                      // 0x108(0x38)(Edit, NativeAccessSpecifierPublic)
	bool                                         bAssignComponentsOnParticleID;                     // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreateComponentFirstParticleFrame;                // 0x141(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyActivateNewlyAquiredComponents;               // 0x142(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D2[0x1];                                     // Fixing Size After Last Property  
	int32                                        RendererVisibility;                                // 0x144(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TemplateComponent;                                 // 0x148(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Niagara_NiagaraComponentPropertyBinding> PropertyBindings;                                  // 0x150(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_14DB[0x70];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraComponentRendererProperties* GetDefaultObj();

};

// 0x10 (0x820 - 0x810)
// Class Niagara.NiagaraCullProxyComponent
class UNiagaraCullProxyComponent : public UNiagaraComponent
{
public:
	TArray<struct Niagara_NiagaraCulledComponentInfo> Instances;                                         // 0x810(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraCullProxyComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDataChannelLibrary
class UNiagaraDataChannelLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataChannelLibrary* GetDefaultObj();

	class UNiagaraDataChannelWriter* WriteToNiagaraDataChannel(class UObject* WorldContextObject, class UNiagaraDataChannelAsset* Channel, const struct Niagara_NiagaraDataChannelSearchParameters& SearchParams, int32 Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU);
	class UNiagaraDataChannelReader* ReadFromNiagaraDataChannel(class UObject* WorldContextObject, class UNiagaraDataChannelAsset* Channel, const struct Niagara_NiagaraDataChannelSearchParameters& SearchParams, bool bReadPreviousFrame);
	class UNiagaraDataChannelHandler* GetNiagaraDataChannel(class UObject* WorldContextObject, class UNiagaraDataChannelAsset* Channel);
};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterface2DArrayTexture
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraUserParameterBinding   TextureUserParameter;                              // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterface2DArrayTexture* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase
{
public:
	uint8                                        Pad_153F[0x8];                                     // Fixing Size After Last Property  
	enum class ENiagaraGpuSyncMode               GpuSyncMode;                                       // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxElements;                                       // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArray* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{
public:
	TArray<float>                                FloatData;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat2
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct CoreUObject_Vector2f>          InternalFloatData;                                 // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat2* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat3
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct CoreUObject_Vector3f>          InternalFloatData;                                 // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat3* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayPosition
class UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct Niagara_NiagaraPosition>       PositionData;                                      // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayPosition* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat4
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct CoreUObject_Vector4f>          InternalFloatData;                                 // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat4* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayColor
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct CoreUObject_LinearColor>       ColorData;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayColor* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayQuat
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct CoreUObject_Quat4f>            InternalQuatData;                                  // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayQuat* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayMatrix
class UNiagaraDataInterfaceArrayMatrix : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct CoreUObject_Matrix44f>         InternalMatrixData;                                // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayMatrix* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFunctionLibrary* GetDefaultObj();

	void SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct CoreUObject_Vector& Value, bool bSizeToFit);
	void SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct CoreUObject_Vector4& Value, bool bSizeToFit);
	void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct CoreUObject_Vector4>& ArrayData);
	void SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct CoreUObject_Vector2D& Value, bool bSizeToFit);
	void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct CoreUObject_Vector2D>& ArrayData);
	void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct CoreUObject_Vector>& ArrayData);
	void SetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, int32 Value, bool bSizeToFit);
	void SetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<int32>& ArrayData);
	void SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct CoreUObject_Quat& Value, bool bSizeToFit);
	void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct CoreUObject_Quat>& ArrayData);
	void SetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct CoreUObject_Vector& Value, bool bSizeToFit);
	void SetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct CoreUObject_Vector>& ArrayData);
	void SetNiagaraArrayMatrixValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct CoreUObject_Matrix& Value, bool bSizeToFit, bool bApplyLWCRebase);
	void SetNiagaraArrayMatrix(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct CoreUObject_Matrix>& ArrayData, bool bApplyLWCRebase);
	void SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, int32 Value, bool bSizeToFit);
	void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<int32>& ArrayData);
	void SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, float Value, bool bSizeToFit);
	void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<float>& ArrayData);
	void SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct CoreUObject_LinearColor& Value, bool bSizeToFit);
	void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct CoreUObject_LinearColor>& ArrayData);
	void SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, bool& Value, bool bSizeToFit);
	void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<bool>& ArrayData);
	struct CoreUObject_Vector GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	struct CoreUObject_Vector4 GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<struct CoreUObject_Vector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	struct CoreUObject_Vector2D GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<struct CoreUObject_Vector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	TArray<struct CoreUObject_Vector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	int32 GetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<int32> GetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	struct CoreUObject_Quat GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<struct CoreUObject_Quat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	struct CoreUObject_Vector GetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<struct CoreUObject_Vector> GetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	struct CoreUObject_Matrix GetNiagaraArrayMatrixValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, bool bApplyLWCRebase);
	TArray<struct CoreUObject_Matrix> GetNiagaraArrayMatrix(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, bool bApplyLWCRebase);
	int32 GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<int32> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	float GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	struct CoreUObject_LinearColor GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<struct CoreUObject_LinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	bool GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayInt32
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{
public:
	TArray<int32>                                IntData;                                           // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayInt32* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayUInt8
class UNiagaraDataInterfaceArrayUInt8 : public UNiagaraDataInterfaceArray
{
public:
	TArray<uint8>                                InternalIntData;                                   // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayUInt8* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayBool
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{
public:
	TArray<bool>                                 BoolData;                                          // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayBool* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayNiagaraID
class UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct Niagara_NiagaraID>             IntData;                                           // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayNiagaraID* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceAudioSubmix
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                          Submix;                                            // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioSubmix* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                          Submix;                                            // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Resolution;                                        // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScopeInMilliseconds;                               // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioOscilloscope* GetDefaultObj();

};

// 0x3E8 (0x410 - 0x28)
// Class Niagara.NiagaraDataInterfaceAudioPlayerSettings
class UNiagaraDataInterfaceAudioPlayerSettings : public UObject
{
public:
	bool                                         bOverrideConcurrency;                              // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B19[0x7];                                     // Fixing Size After Last Property  
	class USoundConcurrency*                     Concurrency;                                       // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAttenuationSettings;                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B1E[0x7];                                     // Fixing Size After Last Property  
	struct Engine_SoundAttenuationSettings       AttenuationSettings;                               // 0x40(0x3D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioPlayerSettings* GetDefaultObj();

};

// 0x58 (0x90 - 0x38)
// Class Niagara.NiagaraDataInterfaceAudioPlayer
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{
public:
	class USoundBase*                            SoundToPlay;                                       // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                     Attenuation;                                       // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                     Concurrency;                                       // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ParameterNames;                                    // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraUserParameterBinding   ConfigurationUserParameter;                        // 0x60(0x20)(Edit, NativeAccessSpecifierPublic)
	bool                                         bLimitPlaysPerTick;                                // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B31[0x3];                                     // Fixing Size After Last Property  
	int32                                        MaxPlaysPerTick;                                   // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenComponentIsDestroyed;                     // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowLoopingOneShotSounds;                        // 0x89(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B32[0x6];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioPlayer* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class Niagara.NiagaraDataInterfaceAudioSpectrum
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
public:
	int32                                        Resolution;                                        // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumFrequency;                                  // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumFrequency;                                  // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseFloorDb;                                      // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioSpectrum* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceCamera
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
public:
	int32                                        PlayerControllerIndex;                             // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireCurrentFrameData;                          // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B81[0x3];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCamera* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceCollisionQuery
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_1B8A[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCollisionQuery* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class Niagara.NiagaraDataInterfaceCurveBase
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	TArray<float>                                ShaderLUT;                                         // 0x38(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        LUTMinTime;                                        // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LUTMaxTime;                                        // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LUTInvTimeRange;                                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LUTNumSamplesMinusOne;                             // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B93[0x4];                                     // Fixing Size After Last Property  
	uint8                                        bUseLUT : 1;                                       // Mask: 0x1, PropSize: 0x10x5C(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExposeCurve : 1;                                  // Mask: 0x2, PropSize: 0x10x5C(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_8E : 6;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_1B96[0x3];                                     // Fixing Size After Last Property  
	class FName                                  ExposedName;                                       // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ExposedTexture;                                    // 0x68(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCurveBase* GetDefaultObj();

};

// 0x200 (0x270 - 0x70)
// Class Niagara.NiagaraDataInterfaceColorCurve
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct Engine_RichCurve                      RedCurve;                                          // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)
	struct Engine_RichCurve                      GreenCurve;                                        // 0xF0(0x80)(Edit, NativeAccessSpecifierPublic)
	struct Engine_RichCurve                      BlueCurve;                                         // 0x170(0x80)(Edit, NativeAccessSpecifierPublic)
	struct Engine_RichCurve                      AlphaCurve;                                        // 0x1F0(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceColorCurve* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceCubeTexture
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraUserParameterBinding   TextureUserParameter;                              // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCubeTexture* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceCurlNoise
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32                                       Seed;                                              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB3[0xC];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCurlNoise* GetDefaultObj();

};

// 0x80 (0xF0 - 0x70)
// Class Niagara.NiagaraDataInterfaceCurve
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct Engine_RichCurve                      Curve;                                             // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCurve* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraParticleCallbackHandler
class INiagaraParticleCallbackHandler : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INiagaraParticleCallbackHandler* GetDefaultObj();

	void ReceiveParticleData(TArray<struct Niagara_BasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct CoreUObject_Vector& SimulationPositionOffset);
};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraDataInterfaceExport
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
public:
	struct Niagara_NiagaraUserParameterBinding   CallbackHandlerParameter;                          // 0x38(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENDIExport_GPUAllocationMode      GPUAllocationMode;                                 // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD2[0x3];                                     // Fixing Size After Last Property  
	int32                                        GPUAllocationFixedSize;                            // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GPUAllocationPerParticleSize;                      // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD5[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceExport* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceGrid2D
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
	bool                                         ClearBeforeNonIterationStage;                      // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDC[0x3];                                     // Fixing Size After Last Property  
	int32                                        NumCellsX;                                         // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCellsY;                                         // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCellsMaxAxis;                                   // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAttributes;                                     // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SetGridFromMaxAxis;                                // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BDF[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  WorldBBoxSize;                                     // 0x50(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid2D* GetDefaultObj();

};

// 0xC8 (0x128 - 0x60)
// Class Niagara.NiagaraDataInterfaceGrid2DCollection
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:
	struct Niagara_NiagaraUserParameterBinding   RenderTargetUserParameter;                         // 0x60(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuBufferFormat           OverrideBufferFormat;                              // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x1, PropSize: 0x10x81(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_8F : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_1C27[0x56];                                    // Fixing Size After Last Property  
	TMap<uint64, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                              // 0xD8(0x50)(Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid2DCollection* GetDefaultObj();

	void GetTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY);
	void GetRawTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY);
	bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32 AttributeIndex);
	bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32* TilesX, int32* TilesY);
};

// 0x20 (0x148 - 0x128)
// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection
{
public:
	class FString                                EmitterName;                                       // 0x128(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DIName;                                            // 0x138(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid2DCollectionReader* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class Niagara.NiagaraDataInterfaceGrid3D
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
	bool                                         ClearBeforeNonIterationStage;                      // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C3A[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_IntVector                 NumCells;                                          // 0x3C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CellSize;                                          // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCellsMaxAxis;                                   // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetResolutionMethod              SetResolutionMethod;                               // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C3E[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    WorldBBoxSize;                                     // 0x58(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid3D* GetDefaultObj();

};

// 0x80 (0xF0 - 0x70)
// Class Niagara.NiagaraDataInterfaceGrid3DCollection
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
public:
	int32                                        NumAttributes;                                     // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C8B[0x4];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraUserParameterBinding   RenderTargetUserParameter;                         // 0x78(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuBufferFormat           OverrideBufferFormat;                              // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x1, PropSize: 0x10x99(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C91[0x56];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid3DCollection* GetDefaultObj();

	void GetTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY, int32* SizeZ);
	void GetRawTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY, int32* SizeZ);
	bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32 AttributeIndex);
	bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32* TilesX, int32* TilesY, int32* TileZ);
};

// 0x20 (0x110 - 0xF0)
// Class Niagara.NiagaraDataInterfaceGrid3DCollectionReader
class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection
{
public:
	class FString                                EmitterName;                                       // 0xF0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DIName;                                            // 0x100(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid3DCollectionReader* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
public:
	struct CoreUObject_IntPoint                  Size;                                              // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraUserParameterBinding   RenderTargetUserParameter;                         // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceIntRenderTarget2D* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraDataInterfaceLandscape
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{
public:
	class AActor*                                SourceLandscape;                                   // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDILandscape_SourceMode          SourceMode;                                        // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB8[0x7];                                     // Fixing Size After Last Property  
	TArray<class UPhysicalMaterial*>             PhysicalMaterials;                                 // 0x48(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceLandscape* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class Niagara.NiagaraDataInterfaceMeshRendererInfo
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{
public:
	class UNiagaraMeshRendererProperties*        MeshRenderer;                                      // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CCC[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceMeshRendererInfo* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	uint32                                       MaxNeighborsPerCell;                               // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE4[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceNeighborGrid3D* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceOcclusion
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceOcclusion* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceParticleRead
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{
public:
	class FString                                EmitterName;                                       // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceParticleRead* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraDataInterfacePlatformSet
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{
public:
	struct Niagara_NiagaraPlatformSet            Platforms;                                         // 0x38(0x30)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfacePlatformSet* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class Niagara.NiagaraDataInterfaceRasterizationGrid3D
class UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	int32                                        NumAttributes;                                     // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResetValue;                                        // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D06[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRasterizationGrid3D* GetDefaultObj();

};

// 0x80 (0xB8 - 0x38)
// Class Niagara.NiagaraDataInterfaceRenderTarget2D
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
public:
	struct CoreUObject_IntPoint                  Size;                                              // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMipMapGeneration          MipMapGeneration;                                  // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMipMapGenerationType      MipMapGenerationType;                              // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    OverrideRenderTargetFilter;                        // 0x43(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10x44(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10x44(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_91 : 6;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_1D28[0x3];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraUserParameterBinding   RenderTargetUserParameter;                         // 0x48(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2A[0x50];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTarget2D* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{
public:
	struct CoreUObject_IntVector                 Size;                                              // 0x38(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    OverrideRenderTargetFilter;                        // 0x45(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10x46(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10x46(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_93 : 6;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_1D3E[0x1];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraUserParameterBinding   RenderTargetUserParameter;                         // 0x48(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTarget2DArray* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceRenderTargetCube
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{
public:
	int32                                        Size;                                              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    OverrideRenderTargetFilter;                        // 0x3D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10x3E(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10x3E(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_94 : 6;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_1D5D[0x1];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraUserParameterBinding   RenderTargetUserParameter;                         // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTargetCube* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{
public:
	uint8                                        Pad_1D6F[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_IntVector                 Size;                                              // 0x40(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    OverrideRenderTargetFilter;                        // 0x4D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10x4E(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10x4E(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_95 : 6;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_1D76[0x1];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraUserParameterBinding   RenderTargetUserParameter;                         // 0x50(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTargetVolume* GetDefaultObj();

};

// 0x40 (0x78 - 0x38)
// Class Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface
{
public:
	TArray<class FName>                          ActorTags;                                         // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ComponentTags;                                     // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class AActor>>         SourceActors;                                      // 0x58(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         OnlyUseMoveable;                                   // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseComplexCollisions;                              // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GlobalSearchAllowed;                               // 0x6A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GlobalSearchForced;                                // 0x6B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GlobalSearchFallback_Unscripted;                   // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8C[0x3];                                     // Fixing Size After Last Property  
	int32                                        MaxNumPrimitives;                                  // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8E[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRigidMeshCollisionQuery* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary
class UNiagaraDIRigidMeshCollisionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDIRigidMeshCollisionFunctionLibrary* GetDefaultObj();

	void SetSourceActors(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<class AActor*>& SourceActors);
};

// 0xC0 (0xF8 - 0x38)
// Class Niagara.NiagaraDataInterfaceSkeletalMesh
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	enum class ENDISkeletalMesh_SourceMode       SourceMode;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0A[0x7];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class AActor>                 SoftSourceActor;                                   // 0x40(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          ComponentTags;                                     // 0x68(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                SourceComponent;                                   // 0x78(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct Niagara_NiagaraUserParameterBinding   MeshUserParameter;                                 // 0x80(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENDISkeletalMesh_SkinningMode     SkinningMode;                                      // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E21[0x7];                                     // Fixing Size After Last Property  
	TArray<class FName>                          SamplingRegions;                                   // 0xA8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        WholeMeshLOD;                                      // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E25[0x4];                                     // Fixing Size After Last Property  
	TArray<class FName>                          FilteredBones;                                     // 0xC0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          FilteredSockets;                                   // 0xD0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  ExcludeBoneName;                                   // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExcludeBone : 1;                                  // Mask: 0x1, PropSize: 0x10xE8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9D : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_1E2A[0x3];                                     // Fixing Size After Last Property  
	int32                                        UvSetIndex;                                        // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireCurrentFrameData;                          // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E2D[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSkeletalMesh* GetDefaultObj();

	void OnSourceEndPlay(class AActor* InSource, enum class EEndPlayReason Reason);
};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceSparseVolumeTexture
class UNiagaraDataInterfaceSparseVolumeTexture : public UNiagaraDataInterface
{
public:
	class USparseVolumeTexture*                  SparseVolumeTexture;                               // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraUserParameterBinding   SparseVolumeTextureUserParameter;                  // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSparseVolumeTexture* GetDefaultObj();

};

// 0x80 (0xB8 - 0x38)
// Class Niagara.NiagaraDataInterfaceSpline
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                Source;                                            // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraUserParameterBinding   SplineUserParameter;                               // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)
	bool                                         bUseLUT;                                           // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E67[0x3];                                     // Fixing Size After Last Property  
	int32                                        NumLUTSteps;                                       // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E69[0x50];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSpline* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceSpriteRendererInfo
class UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface
{
public:
	class UNiagaraSpriteRendererProperties*      SpriteRenderer;                                    // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSpriteRendererInfo* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceTexture
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraUserParameterBinding   TextureUserParameter;                              // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceTexture* GetDefaultObj();

};

// 0x100 (0x170 - 0x70)
// Class Niagara.NiagaraDataInterfaceVector2DCurve
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct Engine_RichCurve                      XCurve;                                            // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)
	struct Engine_RichCurve                      YCurve;                                            // 0xF0(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVector2DCurve* GetDefaultObj();

};

// 0x200 (0x270 - 0x70)
// Class Niagara.NiagaraDataInterfaceVector4Curve
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct Engine_RichCurve                      XCurve;                                            // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)
	struct Engine_RichCurve                      YCurve;                                            // 0xF0(0x80)(Edit, NativeAccessSpecifierPublic)
	struct Engine_RichCurve                      ZCurve;                                            // 0x170(0x80)(Edit, NativeAccessSpecifierPublic)
	struct Engine_RichCurve                      WCurve;                                            // 0x1F0(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVector4Curve* GetDefaultObj();

};

// 0x180 (0x1F0 - 0x70)
// Class Niagara.NiagaraDataInterfaceVectorCurve
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct Engine_RichCurve                      XCurve;                                            // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)
	struct Engine_RichCurve                      YCurve;                                            // 0xF0(0x80)(Edit, NativeAccessSpecifierPublic)
	struct Engine_RichCurve                      ZCurve;                                            // 0x170(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVectorCurve* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceVectorField
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                          Field;                                             // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTileX;                                            // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTileY;                                            // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTileZ;                                            // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EEB[0x5];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVectorField* GetDefaultObj();

};

// 0x58 (0x90 - 0x38)
// Class Niagara.NiagaraDataInterfaceVolumeCache
class UNiagaraDataInterfaceVolumeCache : public UNiagaraDataInterface
{
public:
	class UVolumeCache*                          VolumeCache;                                       // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EFA[0x50];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVolumeCache* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceVolumeTexture
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraUserParameterBinding   TextureUserParameter;                              // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVolumeTexture* GetDefaultObj();

};

// 0x268 (0x290 - 0x28)
// Class Niagara.NiagaraDebugHUDSettings
class UNiagaraDebugHUDSettings : public UObject
{
public:
	uint8                                        Pad_1F11[0x20];                                    // Fixing Size After Last Property  
	struct Niagara_NiagaraDebugHUDSettingsData   Data;                                              // 0x48(0x248)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDebugHUDSettings* GetDefaultObj();

};

// 0x268 (0x328 - 0xC0)
// Class Niagara.NiagaraDecalRendererProperties
class UNiagaraDecalRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0xC0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraParameterBinding       MaterialParameterBinding;                          // 0xC8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xD4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F27[0x3];                                     // Fixing Size After Last Property  
	int32                                        RendererVisibility;                                // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecalScreenSizeFade;                               // 0xDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PositionBinding;                                   // 0xE0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DecalOrientationBinding;                           // 0x118(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DecalSizeBinding;                                  // 0x150(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DecalFadeBinding;                                  // 0x188(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DecalSortOrderBinding;                             // 0x1C0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DecalColorBinding;                                 // 0x1F8(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DecalVisibleBinding;                               // 0x230(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding RendererVisibilityTagBinding;                      // 0x268(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraRendererMaterialParameters MaterialParameters;                                // 0x2A0(0x50)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F44[0x38];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraDecalRendererProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEditorDataBase
class UNiagaraEditorDataBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraEditorDataBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEditorParametersAdapterBase
class UNiagaraEditorParametersAdapterBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraEditorParametersAdapterBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSignificanceHandler
class UNiagaraSignificanceHandler : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSignificanceHandler* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSignificanceHandlerDistance
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSignificanceHandlerDistance* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSignificanceHandlerAge
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSignificanceHandlerAge* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class Niagara.NiagaraEffectType
class UNiagaraEffectType : public UObject
{
public:
	bool                                         bAllowCullingForLocalPlayers;                      // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FCC[0x3];                                     // Fixing Size After Last Property  
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency;                                   // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraCullReaction              CullReaction;                                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FCF[0x4];                                     // Fixing Size After Last Property  
	class UNiagaraSignificanceHandler*           SignificanceHandler;                               // 0x38(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Niagara_NiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;                    // 0x40(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;                         // 0x50(0x10)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;                        // 0x60(0x10)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDB[0x8];                                     // Fixing Size After Last Property  
	class UNiagaraBaselineController*            PerformanceBaselineController;                     // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Niagara_NiagaraPerfBaselineStats      PerfBaselineStats;                                 // 0x80(0x10)(Config, NoDestructor, NativeAccessSpecifierPrivate)
	struct CoreUObject_Guid                      PerfBaselineVersion;                               // 0x90(0x10)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraEffectType* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class Niagara.NiagaraEmitter
class UNiagaraEmitter : public UObject
{
public:
	uint8                                        Pad_1FFB[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      ExposedVersion;                                    // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bVersioningEnabled;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FFD[0x7];                                     // Fixing Size After Last Property  
	TArray<struct Niagara_VersionedNiagaraEmitterData> VersionData;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2003[0x8];                                     // Fixing Size After Last Property  
	class FString                                UniqueEmitterName;                                 // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraEmitter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraEventReceiverEmitterAction* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32                                       NumParticles;                                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201F[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraEventReceiverEmitterAction_SpawnParticles* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraFunctionLibrary
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraFunctionLibrary* GetDefaultObj();

	class UNiagaraComponent* SpawnSystemAttachedWithParams(struct Engine_FXSystemSpawnParameters& SpawnParams);
	class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct CoreUObject_Vector& Location, const struct CoreUObject_Rotator& Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	class UNiagaraComponent* SpawnSystemAtLocationWithParams(struct Engine_FXSystemSpawnParameters& SpawnParams);
	class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct CoreUObject_Vector& Location, const struct CoreUObject_Rotator& Rotation, const struct CoreUObject_Vector& Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UVolumeTexture* Texture);
	void SetTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture* Texture);
	void SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture2DArray* Texture);
	void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName>& SamplingRegions);
	void SetSkeletalMeshDataInterfaceFilteredSockets(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName>& FilteredSockets);
	void SetSkeletalMeshDataInterfaceFilteredBones(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName>& FilteredBones);
	void SetComponentNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class UPrimitiveComponent* Primitive, int32 CollisionGroup);
	void SetActorNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class AActor* Actor, int32 CollisionGroup);
	void ReleaseNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, int32 CollisionGroup);
	void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);
	void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMesh* StaticMesh);
	void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
	class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
	int32 AcquireNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject);
};

// 0x88 (0x330 - 0x2A8)
// Class Niagara.NiagaraLensEffectBase
class ANiagaraLensEffectBase : public ANiagaraActor
{
public:
	uint8                                        Pad_227B[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 DesiredRelativeTransform;                          // 0x2B0(0x60)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BaseAuthoredFOV;                                   // 0x310(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowMultipleInstances : 1;                       // Mask: 0x1, PropSize: 0x10x314(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bResetWhenRetriggered : 1;                         // Mask: 0x2, PropSize: 0x10x314(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_A1 : 6;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_227F[0x3];                                     // Fixing Size After Last Property  
	TArray<TSubclassOf<class AActor>>            EmittersToTreatAsSame;                             // 0x318(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class APlayerCameraManager*                  OwningCameraManager;                               // 0x328(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ANiagaraLensEffectBase* GetDefaultObj();

};

// 0x1E0 (0x2A0 - 0xC0)
// Class Niagara.NiagaraLightRendererProperties
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_228A[0x3];                                     // Fixing Size After Last Property  
	uint8                                        bUseInverseSquaredFalloff : 1;                     // Mask: 0x1, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsTranslucency : 1;                          // Mask: 0x2, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlphaScalesBrightness : 1;                        // Mask: 0x4, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideInverseExposureBlend : 1;                 // Mask: 0x8, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A2 : 4;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_2291[0x3];                                     // Fixing Size After Last Property  
	float                                        RadiusScale;                                       // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultExponent;                                   // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector3f                  ColorAdd;                                          // 0xD0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InverseExposureBlend;                              // 0xDC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RendererVisibility;                                // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2297[0x4];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraVariableAttributeBinding LightRenderingEnabledBinding;                      // 0xE8(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding LightExponentBinding;                              // 0x120(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PositionBinding;                                   // 0x158(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding ColorBinding;                                      // 0x190(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding RadiusBinding;                                     // 0x1C8(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding VolumetricScatteringBinding;                       // 0x200(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding RendererVisibilityTagBinding;                      // 0x238(0x38)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B1[0x30];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraLightRendererProperties* GetDefaultObj();

};

// 0x5C8 (0x688 - 0xC0)
// Class Niagara.NiagaraMeshRendererProperties
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	TArray<struct Niagara_NiagaraMeshRendererMeshProperties> Meshes;                                            // 0xC0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSortMode                  SortMode;                                          // 0xD1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererSortPrecision     SortPrecision;                                     // 0xD2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererGpuTranslucentLatency GpuTranslucentLatency;                             // 0xD3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideMaterials : 1;                            // Mask: 0x1, PropSize: 0x10xD4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseHeterogeneousVolumes : 1;                      // Mask: 0x2, PropSize: 0x10xD4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortOnlyWhenTranslucent : 1;                      // Mask: 0x4, PropSize: 0x10xD4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSubImageBlend : 1;                                // Mask: 0x8, PropSize: 0x10xD4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableFrustumCulling : 1;                         // Mask: 0x10, PropSize: 0x10xD4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableCameraDistanceCulling : 1;                  // Mask: 0x20, PropSize: 0x10xD4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableMeshFlipbook : 1;                           // Mask: 0x40, PropSize: 0x10xD4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLockedAxisEnable : 1;                             // Mask: 0x80, PropSize: 0x10xD4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22D8[0x3];                                     // Fixing Size After Last Property  
	TArray<struct Niagara_NiagaraMeshMaterialOverride> OverrideMaterials;                                 // 0xD8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct Niagara_NiagaraMeshMICOverride> MICOverrideMaterials;                              // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  SubImageSize;                                      // 0xF8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LockedAxis;                                        // 0x108(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    MeshBoundsScale;                                   // 0x120(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMeshFacingMode            FacingMode;                                        // 0x138(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMeshLockedAxisSpace       LockedAxisSpace;                                   // 0x139(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22EB[0x2];                                     // Fixing Size After Last Property  
	float                                        MinCameraDistance;                                 // 0x13C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCameraDistance;                                 // 0x140(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       RendererVisibility;                                // 0x144(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PositionBinding;                                   // 0x148(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding ColorBinding;                                      // 0x180(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding VelocityBinding;                                   // 0x1B8(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding MeshOrientationBinding;                            // 0x1F0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding ScaleBinding;                                      // 0x228(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding SubImageIndexBinding;                              // 0x260(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DynamicMaterialBinding;                            // 0x298(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DynamicMaterial1Binding;                           // 0x2D0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DynamicMaterial2Binding;                           // 0x308(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DynamicMaterial3Binding;                           // 0x340(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding MaterialRandomBinding;                             // 0x378(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding CustomSortingBinding;                              // 0x3B0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding NormalizedAgeBinding;                              // 0x3E8(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding CameraOffsetBinding;                               // 0x420(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding RendererVisibilityTagBinding;                      // 0x458(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding MeshIndexBinding;                                  // 0x490(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraRendererMaterialParameters MaterialParameters;                                // 0x4C8(0x50)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevPositionBinding;                               // 0x518(0x38)(Transient, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevScaleBinding;                                  // 0x550(0x38)(Transient, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevMeshOrientationBinding;                        // 0x588(0x38)(Transient, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevCameraOffsetBinding;                           // 0x5C0(0x38)(Transient, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevVelocityBinding;                               // 0x5F8(0x38)(Transient, NativeAccessSpecifierPublic)
	uint32                                       MaterialParamValidMask;                            // 0x630(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2331[0x54];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraMeshRendererProperties* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class Niagara.NiagaraParameterCollectionInstance
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*           Collection;                                        // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Niagara_NiagaraVariable>       OverridenParameters;                               // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraParameterStore         ParameterStorage;                                  // 0x40(0x88)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_24B7[0x28];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraParameterCollectionInstance* GetDefaultObj();

	void SetVectorParameter(const class FString& InVariableName, const struct CoreUObject_Vector& InValue);
	void SetVector4Parameter(const class FString& InVariableName, struct CoreUObject_Vector4& InValue);
	void SetVector2DParameter(const class FString& InVariableName, const struct CoreUObject_Vector2D& InValue);
	void SetQuatParameter(const class FString& InVariableName, struct CoreUObject_Quat& InValue);
	void SetIntParameter(const class FString& InVariableName, int32 InValue);
	void SetFloatParameter(const class FString& InVariableName, float InValue);
	void SetColorParameter(const class FString& InVariableName, const struct CoreUObject_LinearColor& InValue);
	void SetBoolParameter(const class FString& InVariableName, bool InValue);
	struct CoreUObject_Vector GetVectorParameter(const class FString& InVariableName);
	struct CoreUObject_Vector4 GetVector4Parameter(const class FString& InVariableName);
	struct CoreUObject_Vector2D GetVector2DParameter(const class FString& InVariableName);
	struct CoreUObject_Quat GetQuatParameter(const class FString& InVariableName);
	int32 GetIntParameter(const class FString& InVariableName);
	float GetFloatParameter(const class FString& InVariableName);
	struct CoreUObject_LinearColor GetColorParameter(const class FString& InVariableName);
	bool GetBoolParameter(const class FString& InVariableName);
};

// 0x38 (0x60 - 0x28)
// Class Niagara.NiagaraParameterCollection
class UNiagaraParameterCollection : public UObject
{
public:
	class FName                                  Namespace;                                         // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct Niagara_NiagaraVariable>       Parameters;                                        // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialParameterCollection*          SourceMaterialCollection;                          // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraParameterCollectionInstance*   DefaultInstance;                                   // 0x48(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Guid                      CompileId;                                         // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraParameterCollection* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class Niagara.NiagaraBaselineController
class UNiagaraBaselineController : public UObject
{
public:
	float                                        TestDuration;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_260C[0x4];                                     // Fixing Size After Last Property  
	class UNiagaraEffectType*                    EffectType;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANiagaraPerfBaselineActor*             Owner;                                             // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UNiagaraSystem>         System;                                            // 0x40(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraBaselineController* GetDefaultObj();

	bool OnTickTest();
	void OnOwnerTick(float DeltaTime);
	void OnEndTest(const struct Niagara_NiagaraPerfBaselineStats& Stats);
	void OnBeginTest();
	class UNiagaraSystem* GetSystem();
};

// 0x18 (0x80 - 0x68)
// Class Niagara.NiagaraBaselineController_Basic
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{
public:
	int32                                        NumInstances;                                      // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_262F[0x4];                                     // Fixing Size After Last Property  
	TArray<class UNiagaraComponent*>             SpawnedComponents;                                 // 0x70(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraBaselineController_Basic* GetDefaultObj();

};

// 0x10 (0x2A8 - 0x298)
// Class Niagara.NiagaraPerfBaselineActor
class ANiagaraPerfBaselineActor : public AActor
{
public:
	class UNiagaraBaselineController*            Controller;                                        // 0x298(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextRenderComponent*                  Label;                                             // 0x2A0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ANiagaraPerfBaselineActor* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraPrecompileContainer
class UNiagaraPrecompileContainer : public UObject
{
public:
	TArray<class UNiagaraScript*>                Scripts;                                           // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        System;                                            // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraPrecompileContainer* GetDefaultObj();

};

// 0x0 (0x298 - 0x298)
// Class Niagara.NiagaraPreviewBase
class ANiagaraPreviewBase : public AActor
{
public:

	static class UClass* StaticClass();
	static class ANiagaraPreviewBase* GetDefaultObj();

	void SetSystem(class UNiagaraSystem* InSystem);
	void SetLabelText(class FText& InXAxisText, class FText& InYAxisText);
};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraPreviewAxis
class UNiagaraPreviewAxis : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis* GetDefaultObj();

	int32 Num();
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, class FString* OutLabelText);
};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraPreviewAxis_InterpParamBase
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	class FName                                  Param;                                             // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Count;                                             // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_26FE[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamBase* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int32                                        Min;                                               // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Max;                                               // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamInt32* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                        Min;                                               // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Max;                                               // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamFloat* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct CoreUObject_Vector2D                  Min;                                               // 0x38(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Vector2D                  Max;                                               // 0x48(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamVector2D* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct CoreUObject_Vector                    Min;                                               // 0x38(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Vector                    Max;                                               // 0x50(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamVector* GetDefaultObj();

};

// 0x48 (0x80 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	uint8                                        Pad_278D[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector4                   Min;                                               // 0x40(0x20)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Vector4                   Max;                                               // 0x60(0x20)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamVector4* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct CoreUObject_LinearColor               Min;                                               // 0x38(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_LinearColor               Max;                                               // 0x48(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamLinearColor* GetDefaultObj();

};

// 0x50 (0x2E8 - 0x298)
// Class Niagara.NiagaraPreviewGrid
class ANiagaraPreviewGrid : public AActor
{
public:
	class UNiagaraSystem*                        System;                                            // 0x298(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraPreviewGridResetMode      ResetMode;                                         // 0x2A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27CF[0x7];                                     // Fixing Size After Last Property  
	class UNiagaraPreviewAxis*                   PreviewAxisX;                                      // 0x2A8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraPreviewAxis*                   PreviewAxisY;                                      // 0x2B0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ANiagaraPreviewBase>       PreviewClass;                                      // 0x2B8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpacingX;                                          // 0x2C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpacingY;                                          // 0x2C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumX;                                              // 0x2C8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumY;                                              // 0x2CC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UChildActorComponent*>          PreviewComponents;                                 // 0x2D0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_27E1[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ANiagaraPreviewGrid* GetDefaultObj();

	void SetPaused(bool bPaused);
	void GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews);
	void DeactivatePreviews();
	void ActivatePreviews(bool bReset);
};

// 0x6A8 (0x768 - 0xC0)
// Class Niagara.NiagaraRibbonRendererProperties
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0xC0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraUserParameterBinding   MaterialUserParamBinding;                          // 0xC8(0x20)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraRibbonUVSettings       UV0Settings;                                       // 0xE8(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraRibbonUVSettings       UV1Settings;                                       // 0x110(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonFacingMode          FacingMode;                                        // 0x138(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2809[0x3];                                     // Fixing Size After Last Property  
	int32                                        MaxNumRibbons;                                     // 0x13C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonDrawDirection       DrawDirection;                                     // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonShapeMode           Shape;                                             // 0x141(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableAccurateGeometry : 1;                       // Mask: 0x1, PropSize: 0x10x142(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaterialBackfaceCulling : 1;                   // Mask: 0x2, PropSize: 0x10x142(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseGPUInit : 1;                                   // Mask: 0x4, PropSize: 0x10x142(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseConstantFactor : 1;                            // Mask: 0x8, PropSize: 0x10x142(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScreenSpaceTessellation : 1;                      // Mask: 0x10, PropSize: 0x10x142(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLinkOrderUseUniqueID : 1;                         // Mask: 0x20, PropSize: 0x10x142(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B9 : 2;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_280F[0x1];                                     // Fixing Size After Last Property  
	int32                                        WidthSegmentationCount;                            // 0x144(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiPlaneCount;                                   // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TubeSubdivisions;                                  // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct Niagara_NiagaraRibbonShapeCustomVertex> CustomVertices;                                    // 0x150(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonTessellationMode    TessellationMode;                                  // 0x160(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2820[0x3];                                     // Fixing Size After Last Property  
	float                                        CurveTension;                                      // 0x164(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TessellationFactor;                                // 0x168(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TessellationAngle;                                 // 0x16C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PositionBinding;                                   // 0x170(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding ColorBinding;                                      // 0x1A8(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding VelocityBinding;                                   // 0x1E0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding NormalizedAgeBinding;                              // 0x218(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding RibbonTwistBinding;                                // 0x250(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding RibbonWidthBinding;                                // 0x288(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding RibbonFacingBinding;                               // 0x2C0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding RibbonIdBinding;                                   // 0x2F8(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding RibbonLinkOrderBinding;                            // 0x330(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding MaterialRandomBinding;                             // 0x368(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DynamicMaterialBinding;                            // 0x3A0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DynamicMaterial1Binding;                           // 0x3D8(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DynamicMaterial2Binding;                           // 0x410(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DynamicMaterial3Binding;                           // 0x448(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding RibbonUVDistance;                                  // 0x480(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding U0OverrideBinding;                                 // 0x4B8(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding V0RangeOverrideBinding;                            // 0x4F0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding U1OverrideBinding;                                 // 0x528(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding V1RangeOverrideBinding;                            // 0x560(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraRendererMaterialParameters MaterialParameters;                                // 0x598(0x50)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevPositionBinding;                               // 0x5E8(0x38)(Transient, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevRibbonWidthBinding;                            // 0x620(0x38)(Transient, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevRibbonFacingBinding;                           // 0x658(0x38)(Transient, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevRibbonTwistBinding;                            // 0x690(0x38)(Transient, NativeAccessSpecifierPublic)
	uint32                                       MaterialParamValidMask;                            // 0x6C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284A[0x9C];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraRibbonRendererProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraScratchPadContainer
class UNiagaraScratchPadContainer : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraScratchPadContainer* GetDefaultObj();

};

// 0x3B8 (0x3E0 - 0x28)
// Class Niagara.NiagaraScript
class UNiagaraScript : public UNiagaraScriptBase
{
public:
	uint8                                        Pad_2870[0x8];                                     // Fixing Size After Last Property  
	enum class ENiagaraScriptUsage               Usage;                                             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2874[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      UsageId;                                           // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2875[0x4];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraParameterStore         RapidIterationParameters;                          // 0x48(0x88)(NativeAccessSpecifierPublic)
	struct Niagara_NiagaraScriptExecutionParameterStore ScriptExecutionParamStore;                         // 0xD0(0xA8)(NativeAccessSpecifierPrivate)
	TArray<struct Niagara_NiagaraBoundParameter> ScriptExecutionBoundParameters;                    // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct Niagara_NiagaraVMExecutableDataId     CachedScriptVMId;                                  // 0x188(0x58)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_287C[0x18];                                    // Fixing Size After Last Property  
	struct Niagara_NiagaraVMExecutableData       CachedScriptVM;                                    // 0x1F8(0x1A0)(NativeAccessSpecifierPrivate)
	TArray<class UNiagaraParameterCollection*>   CachedParameterCollectionReferences;               // 0x398(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct Niagara_NiagaraScriptResolvedDataInterfaceInfo> ResolvedDataInterfaces;                            // 0x3A8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct Niagara_NiagaraResolvedUserDataInterfaceBinding> ResolvedUserDataInterfaceBindings;                 // 0x3B8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct Niagara_NiagaraResolvedUObjectInfo> ResolvedUObjectInfos;                              // 0x3C8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2884[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraScript* GetDefaultObj();

	void RaiseOnGPUCompilationComplete();
};

// 0x1D0 (0x1F8 - 0x28)
// Class Niagara.NiagaraSimCache
class UNiagaraSimCache : public UObject
{
public:
	struct CoreUObject_Guid                      CacheGuid;                                         // 0x28(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UNiagaraSystem>         SoftNiagaraSystem;                                 // 0x38(0x28)(Edit, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartSeconds;                                      // 0x60(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DurationSeconds;                                   // 0x64(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Niagara_NiagaraSimCacheCreateParameters CreateParameters;                                  // 0x68(0x58)(NativeAccessSpecifierPrivate)
	bool                                         bNeedsReadComponentMappingRecache;                 // 0xC0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_29ED[0x7];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraSimCacheLayout         CacheLayout;                                       // 0xC8(0xC8)(NativeAccessSpecifierPrivate)
	TArray<struct Niagara_NiagaraSimCacheFrame>  CacheFrames;                                       // 0x190(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<struct Niagara_NiagaraVariableBase, class UObject*> DataInterfaceStorage;                              // 0x1A0(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_29F0[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraSimCache* GetDefaultObj();

	void ReadVectorAttribute(TArray<struct CoreUObject_Vector>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadVector4Attribute(TArray<struct CoreUObject_Vector4>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadVector2Attribute(TArray<struct CoreUObject_Vector2D>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadQuatAttributeWithRebase(TArray<struct CoreUObject_Quat>* OutValues, const struct CoreUObject_Quat& Quat, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadQuatAttribute(TArray<struct CoreUObject_Quat>* OutValues, class FName AttributeName, class FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex);
	void ReadPositionAttributeWithRebase(TArray<struct CoreUObject_Vector>* OutValues, const struct CoreUObject_Transform& Transform, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadPositionAttribute(TArray<struct CoreUObject_Vector>* OutValues, class FName AttributeName, class FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex);
	void ReadIntAttribute(TArray<int32>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadIDAttribute(TArray<struct Niagara_NiagaraID>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadFloatAttribute(TArray<float>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadColorAttribute(TArray<struct CoreUObject_LinearColor>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	bool IsEmpty();
	bool IsCacheValid();
	float GetStartSeconds();
	int32 GetNumFrames();
	int32 GetNumEmitters();
	TArray<class FName> GetEmitterNames();
	class FName GetEmitterName(int32 EmitterIndex);
	enum class ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode();
};

// 0x100 (0x130 - 0x30)
// Class Niagara.AsyncNiagaraCaptureSimCache
class UAsyncNiagaraCaptureSimCache : public UCancellableAsyncAction
{
public:
	class UNiagaraSimCache*                      CaptureSimCache;                                   // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     CaptureComponent;                                  // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            CaptureComplete;                                   // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AAE[0xE0];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAsyncNiagaraCaptureSimCache* GetDefaultObj();

	void OnCaptureComplete__DelegateSignature(bool bSuccess);
	class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(class UNiagaraSimCache* SimCache, const struct Niagara_NiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, int32 CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime);
	class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(class UNiagaraSimCache* SimCache, const struct Niagara_NiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, int32 NumFrames, int32 CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime);
	class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCache(class UNiagaraSimCache* SimCache, const struct Niagara_NiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, const struct Niagara_NiagaraSimCacheCaptureParameters& CaptureParameters, class UNiagaraSimCache** OutSimCache);
};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSimCacheFunctionLibrary
class UNiagaraSimCacheFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSimCacheFunctionLibrary* GetDefaultObj();

	class UNiagaraSimCache* CreateNiagaraSimCache(class UObject* WorldContextObject);
	bool CaptureNiagaraSimCacheImmediate(class UNiagaraSimCache* SimCache, const struct Niagara_NiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime);
};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraSimulationStageBase
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
public:
	class UNiagaraScript*                        Script;                                            // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SimulationStageName;                               // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x38(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B25[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraSimulationStageBase* GetDefaultObj();

};

// 0x1A0 (0x1E0 - 0x40)
// Class Niagara.NiagaraSimulationStageGeneric
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
public:
	struct Niagara_NiagaraVariableAttributeBinding EnabledBinding;                                    // 0x40(0x38)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraIterationSource           IterationSource;                                   // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B34[0x7];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraParameterBindingWithValue NumIterations;                                     // 0x80(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraSimStageExecuteBehavior   ExecuteBehavior;                                   // 0xA0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B3C[0x3];                                     // Fixing Size After Last Property  
	uint8                                        bDisablePartialParticleUpdate : 1;                 // Mask: 0x1, PropSize: 0x10xA4(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C0 : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_2B3D[0x3];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraVariableDataInterfaceBinding DataInterface;                                     // 0xA8(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bParticleIterationStateEnabled : 1;                // Mask: 0x1, PropSize: 0x10xC8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C1 : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_2B43[0x7];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraVariableAttributeBinding ParticleIterationStateBinding;                     // 0xD0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct CoreUObject_IntPoint                  ParticleIterationStateRange;                       // 0x108(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGpuDispatchForceLinear : 1;                       // Mask: 0x1, PropSize: 0x10x110(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideGpuDispatchNumThreads : 1;                // Mask: 0x2, PropSize: 0x10x110(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C2 : 6;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_2B4B[0x7];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraParameterBindingWithValue OverrideGpuDispatchNumThreadsX;                    // 0x118(0x20)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraParameterBindingWithValue OverrideGpuDispatchNumThreadsY;                    // 0x138(0x20)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraParameterBindingWithValue OverrideGpuDispatchNumThreadsZ;                    // 0x158(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuDispatchType           DirectDispatchType;                                // 0x178(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDirectDispatchElementType DirectDispatchElementType;                         // 0x179(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B63[0x6];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraParameterBindingWithValue ElementCountX;                                     // 0x180(0x20)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraParameterBindingWithValue ElementCountY;                                     // 0x1A0(0x20)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraParameterBindingWithValue ElementCountZ;                                     // 0x1C0(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraSimulationStageGeneric* GetDefaultObj();

};

// 0x710 (0x7D0 - 0xC0)
// Class Niagara.NiagaraSpriteRendererProperties
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0xC0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraUserParameterBinding   MaterialUserParamBinding;                          // 0xC8(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSpriteAlignment           Alignment;                                         // 0xE9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSpriteFacingMode          FacingMode;                                        // 0xEA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSortMode                  SortMode;                                          // 0xEB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MacroUVRadius;                                     // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  PivotInUVSpace;                                    // 0xF0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  SubImageSize;                                      // 0x100(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSubImageBlend : 1;                                // Mask: 0x1, PropSize: 0x10x110(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRemoveHMDRollInVR : 1;                            // Mask: 0x2, PropSize: 0x10x110(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortOnlyWhenTranslucent : 1;                      // Mask: 0x4, PropSize: 0x10x110(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableCameraDistanceCulling : 1;                  // Mask: 0x8, PropSize: 0x10x110(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C3 : 4;                                     // Fixing Bit-Field Size  
	enum class ENiagaraRendererSortPrecision     SortPrecision;                                     // 0x111(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererGpuTranslucentLatency GpuTranslucentLatency;                             // 0x112(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererPixelCoverageMode PixelCoverageMode;                                 // 0x113(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PixelCoverageBlend;                                // 0x114(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFacingCameraBlendDistance;                      // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFacingCameraBlendDistance;                      // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinCameraDistance;                                 // 0x120(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCameraDistance;                                 // 0x124(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       RendererVisibility;                                // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B99[0x4];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraVariableAttributeBinding PositionBinding;                                   // 0x130(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding ColorBinding;                                      // 0x168(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding VelocityBinding;                                   // 0x1A0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding SpriteRotationBinding;                             // 0x1D8(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding SpriteSizeBinding;                                 // 0x210(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding SpriteFacingBinding;                               // 0x248(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding SpriteAlignmentBinding;                            // 0x280(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding SubImageIndexBinding;                              // 0x2B8(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DynamicMaterialBinding;                            // 0x2F0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DynamicMaterial1Binding;                           // 0x328(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DynamicMaterial2Binding;                           // 0x360(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding DynamicMaterial3Binding;                           // 0x398(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding CameraOffsetBinding;                               // 0x3D0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding UVScaleBinding;                                    // 0x408(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PivotOffsetBinding;                                // 0x440(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding MaterialRandomBinding;                             // 0x478(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding CustomSortingBinding;                              // 0x4B0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding NormalizedAgeBinding;                              // 0x4E8(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding RendererVisibilityTagBinding;                      // 0x520(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraRendererMaterialParameters MaterialParameters;                                // 0x558(0x50)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevPositionBinding;                               // 0x5A8(0x38)(Transient, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevVelocityBinding;                               // 0x5E0(0x38)(Transient, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevSpriteRotationBinding;                         // 0x618(0x38)(Transient, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevSpriteSizeBinding;                             // 0x650(0x38)(Transient, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevSpriteFacingBinding;                           // 0x688(0x38)(Transient, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevSpriteAlignmentBinding;                        // 0x6C0(0x38)(Transient, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevCameraOffsetBinding;                           // 0x6F8(0x38)(Transient, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding PrevPivotOffsetBinding;                            // 0x730(0x38)(Transient, NativeAccessSpecifierPublic)
	uint32                                       MaterialParamValidMask;                            // 0x768(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BD0[0x64];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraSpriteRendererProperties* GetDefaultObj();

};

// 0x4A8 (0x4F0 - 0x48)
// Class Niagara.NiagaraSystem
class UNiagaraSystem : public UFXSystemAsset
{
public:
	uint8                                        bSupportLargeWorldCoordinates : 1;                 // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideCastShadow : 1;                           // Mask: 0x2, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideReceivesDecals : 1;                       // Mask: 0x4, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideRenderCustomDepth : 1;                    // Mask: 0x8, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideCustomDepthStencilValue : 1;              // Mask: 0x10, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideCustomDepthStencilWriteMask : 1;          // Mask: 0x20, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideTranslucencySortPriority : 1;             // Mask: 0x40, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideTranslucencySortDistanceOffset : 1;       // Mask: 0x80, PropSize: 0x10x48(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastShadow : 1;                                   // Mask: 0x1, PropSize: 0x10x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReceivesDecals : 1;                               // Mask: 0x2, PropSize: 0x10x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x4, PropSize: 0x10x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableExperimentalVM : 1;                        // Mask: 0x8, PropSize: 0x10x49(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C4 : 4;                                     // Fixing Bit-Field Size  
	enum class ERendererStencilMask              CustomDepthStencilWriteMask;                       // 0x4A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BFD[0x1];                                     // Fixing Size After Last Property  
	int32                                        CustomDepthStencilValue;                           // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TranslucencySortPriority;                          // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TranslucencySortDistanceOffset;                    // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDumpDebugSystemInfo;                              // 0x58(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDumpDebugEmitterInfo;                             // 0x59(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C03[0x1];                                     // Fixing Size After Last Property  
	bool                                         bRequireCurrentFrameData;                          // 0x5B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFixedBounds : 1;                                  // Mask: 0x1, PropSize: 0x10x5C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C5 : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_2C0D[0x3];                                     // Fixing Size After Last Property  
	class UNiagaraEffectType*                    EffectType;                                        // 0x60(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideScalabilitySettings;                      // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C0F[0x3];                                     // Fixing Size After Last Property  
	uint8                                        bOverrideAllowCullingForLocalPlayers : 1;          // Mask: 0x1, PropSize: 0x10x6C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowCullingForLocalPlayersOverride : 1;          // Mask: 0x2, PropSize: 0x10x6C(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_C6 : 6;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_2C15[0x3];                                     // Fixing Size After Last Property  
	struct Niagara_NiagaraSystemScalabilityOverrides SystemScalabilityOverrides;                        // 0x70(0x10)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct Niagara_NiagaraEmitterHandle>  EmitterHandles;                                    // 0x80(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                      // 0x90(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UNiagaraScript*                        SystemSpawnScript;                                 // 0xA0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraScript*                        SystemUpdateScript;                                // 0xA8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C1C[0x10];                                    // Fixing Size After Last Property  
	struct Niagara_NiagaraSystemCompiledData     SystemCompiledData;                                // 0xC0(0x240)(Protected, NativeAccessSpecifierProtected)
	struct Niagara_NiagaraUserRedirectionParameterStore ExposedParameters;                                 // 0x300(0xD8)(Protected, NativeAccessSpecifierProtected)
	struct CoreUObject_Box                       FixedBounds;                                       // 0x3D8(0x38)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoDeactivate;                                   // 0x410(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDeterminism;                                      // 0x411(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C2B[0x2];                                     // Fixing Size After Last Property  
	int32                                        RandomSeed;                                        // 0x414(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WarmupTime;                                        // 0x418(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        WarmupTickCount;                                   // 0x41C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WarmupTickDelta;                                   // 0x420(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFixedTickDelta;                                   // 0x424(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C2E[0x3];                                     // Fixing Size After Last Property  
	float                                        FixedTickDeltaTime;                                // 0x428(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNeedsGPUContextInitForDataInterfaces;             // 0x42C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C44[0xC3];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraSystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraValidationRule
class UNiagaraValidationRule : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraValidationRule* GetDefaultObj();

};

// 0x1F8 (0x2B8 - 0xC0)
// Class Niagara.NiagaraVolumeRendererProperties
class UNiagaraVolumeRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0xC0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraParameterBinding       MaterialParameterBinding;                          // 0xC8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C6B[0x4];                                     // Fixing Size After Last Property  
	int32                                        RendererVisibility;                                // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepFactor;                                        // 0xDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LightingDownsampleFactor;                          // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowStepFactor;                                  // 0xE4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowBiasFactor;                                  // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C70[0xAC];                                    // Fixing Size After Last Property  
	struct Niagara_NiagaraVariableAttributeBinding RendererVisibilityTagBinding;                      // 0x198(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding VolumeResolutionMaxAxisBinding;                    // 0x1D0(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraVariableAttributeBinding VolumeWorldSpaceSizeBinding;                       // 0x208(0x38)(Edit, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraRendererMaterialParameters MaterialParameters;                                // 0x240(0x50)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C76[0x28];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UNiagaraVolumeRendererProperties* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class Niagara.VolumeCache
class UVolumeCache : public UObject
{
public:
	class FString                                FilePath;                                          // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVolumeCacheType                  CacheType;                                         // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C85[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_IntVector                 Resolution;                                        // 0x3C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameRangeStart;                                   // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameRangeEnd;                                     // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C86[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UVolumeCache* GetDefaultObj();

};

}


