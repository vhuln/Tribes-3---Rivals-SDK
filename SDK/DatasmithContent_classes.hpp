#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class DatasmithContent.DatasmithObjectTemplate
class UDatasmithObjectTemplate : public UObject
{
public:
	uint8                                        Pad_1651[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UDatasmithObjectTemplate* GetDefaultObj();

};

// 0xA0 (0xD0 - 0x30)
// Class DatasmithContent.DatasmithActorTemplate
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
public:
	TSet<class FName>                            Layers;                                            // 0x30(0x50)(NativeAccessSpecifierPublic)
	TSet<class FName>                            Tags;                                              // 0x80(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithActorTemplate* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithAdditionalData
class UDatasmithAdditionalData : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDatasmithAdditionalData* GetDefaultObj();

};

// 0x78 (0x310 - 0x298)
// Class DatasmithContent.DatasmithAreaLightActor
class ADatasmithAreaLightActor : public AActor
{
public:
	enum class EComponentMobility                Mobility;                                          // 0x298(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithAreaLightActorType      LightType;                                         // 0x299(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithAreaLightActorShape     LightShape;                                        // 0x29A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1670[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Dimensions;                                        // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELightUnits                       IntensityUnits;                                    // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1671[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Temperature;                                       // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1672[0x4];                                     // Fixing Size After Last Property  
	class UTextureLightProfile*                  IESTexture;                                        // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseIESBrightness;                                 // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1673[0x3];                                     // Fixing Size After Last Property  
	float                                        IESBrightnessScale;                                // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Rotation;                                          // 0x2E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SourceRadius;                                      // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceLength;                                      // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttenuationRadius;                                 // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpotlightInnerAngle;                               // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpotlightOuterAngle;                               // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1680[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ADatasmithAreaLightActor* GetDefaultObj();

};

// 0x90 (0xC0 - 0x30)
// Class DatasmithContent.DatasmithAreaLightActorTemplate
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:
	enum class EDatasmithAreaLightActorType      LightType;                                         // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithAreaLightActorShape     LightShape;                                        // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_168C[0x6];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Dimensions;                                        // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELightUnits                       IntensityUnits;                                    // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1694[0x3];                                     // Fixing Size After Last Property  
	float                                        Temperature;                                       // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1696[0x4];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UTextureLightProfile>   IESTexture;                                        // 0x68(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseIESBrightness;                                 // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1699[0x3];                                     // Fixing Size After Last Property  
	float                                        IESBrightnessScale;                                // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Rotation;                                          // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SourceRadius;                                      // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceLength;                                      // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttenuationRadius;                                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169F[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UDatasmithAreaLightActorTemplate* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithAssetImportData
class UDatasmithAssetImportData : public UAssetImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithAssetImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithStaticMeshImportData
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithStaticMeshCADImportData
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshCADImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithSceneImportData
class UDatasmithSceneImportData : public UAssetImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithSceneImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithTranslatedSceneImportData
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithTranslatedSceneImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithCADImportSceneData
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithCADImportSceneData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithMDLSceneImportData
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithMDLSceneImportData* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class DatasmithContent.DatasmithGLTFSceneImportData
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
public:
	class FString                                Generator;                                         // 0x28(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Version;                                           // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EC[0x4];                                     // Fixing Size After Last Property  
	class FString                                Author;                                            // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                License;                                           // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Source;                                            // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithGLTFSceneImportData* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
public:
	class FString                                SourceMeshName;                                    // 0x28(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshGLTFImportData* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class DatasmithContent.DatasmithFBXSceneImportData
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{
public:
	bool                                         bGenerateLightmapUVs;                              // 0x28(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170B[0x7];                                     // Fixing Size After Last Property  
	class FString                                TexturesDir;                                       // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        IntermediateSerialization;                         // 0x40(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bColorizeMaterials;                                // 0x41(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170E[0x6];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UDatasmithFBXSceneImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithDeltaGenAssetImportData
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithDeltaGenAssetImportData* GetDefaultObj();

};

// 0x48 (0x90 - 0x48)
// Class DatasmithContent.DatasmithDeltaGenSceneImportData
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{
public:
	bool                                         bMergeNodes;                                       // 0x48(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOptimizeDuplicatedNodes;                          // 0x49(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveInvisibleNodes;                             // 0x4A(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSimplifyNodeHierarchy;                            // 0x4B(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportVar;                                        // 0x4C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1722[0x3];                                     // Fixing Size After Last Property  
	class FString                                VarPath;                                           // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportPos;                                        // 0x60(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1724[0x7];                                     // Fixing Size After Last Property  
	class FString                                PosPath;                                           // 0x68(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportTml;                                        // 0x78(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1726[0x7];                                     // Fixing Size After Last Property  
	class FString                                TmlPath;                                           // 0x80(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithDeltaGenSceneImportData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithVREDAssetImportData
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{
public:

	static class UClass* StaticClass();
	static class UDatasmithVREDAssetImportData* GetDefaultObj();

};

// 0x60 (0xA8 - 0x48)
// Class DatasmithContent.DatasmithVREDSceneImportData
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{
public:
	bool                                         bMergeNodes;                                       // 0x48(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOptimizeDuplicatedNodes;                          // 0x49(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportMats;                                       // 0x4A(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1737[0x5];                                     // Fixing Size After Last Property  
	class FString                                MatsPath;                                          // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportVar;                                        // 0x60(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCleanVar;                                         // 0x61(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173B[0x6];                                     // Fixing Size After Last Property  
	class FString                                VarPath;                                           // 0x68(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportLightInfo;                                  // 0x78(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173E[0x7];                                     // Fixing Size After Last Property  
	class FString                                LightInfoPath;                                     // 0x80(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bImportClipInfo;                                   // 0x90(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1741[0x7];                                     // Fixing Size After Last Property  
	class FString                                ClipInfoPath;                                      // 0x98(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithVREDSceneImportData* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class DatasmithContent.DatasmithAssetUserData
class UDatasmithAssetUserData : public UAssetUserData
{
public:
	TMap<class FName, class FString>             MetaData;                                          // 0x28(0x50)(Edit, BlueprintVisible, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithAssetUserData* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class DatasmithContent.DatasmithCineCameraActorTemplate
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
public:
	struct DatasmithContent_DatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;                            // 0x30(0x30)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithCineCameraActorTemplate* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class DatasmithContent.DatasmithCineCameraComponentTemplate
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct DatasmithContent_DatasmithCameraFilmbackSettingsTemplate FilmbackSettings;                                  // 0x30(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	struct DatasmithContent_DatasmithCameraLensSettingsTemplate LensSettings;                                      // 0x38(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	struct DatasmithContent_DatasmithCameraFocusSettingsTemplate FocusSettings;                                     // 0x3C(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        CurrentFocalLength;                                // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentAperture;                                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175C[0x4];                                     // Fixing Size After Last Property  
	struct DatasmithContent_DatasmithPostProcessSettingsTemplate PostProcessSettings;                               // 0x50(0x40)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithCineCameraComponentTemplate* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithContentBlueprintLibrary
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDatasmithContentBlueprintLibrary* GetDefaultObj();

	TArray<class FString> GetDatasmithUserDataValuesForKey(class UObject* Object, class FName Key, bool bPartialMatchKey);
	class FString GetDatasmithUserDataValueForKey(class UObject* Object, class FName Key, bool bPartialMatchKey);
	void GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const class FString& StringToMatch, TArray<class FName>* OutKeys, TArray<class FString>* OutValues);
	class UDatasmithAssetUserData* GetDatasmithUserData(class UObject* Object);
};

// 0x8 (0x30 - 0x28)
// Class DatasmithContent.DatasmithCustomActionBase
class UDatasmithCustomActionBase : public UObject
{
public:
	uint8                                        Pad_179F[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UDatasmithCustomActionBase* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class DatasmithContent.DatasmithDecalComponentTemplate
class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{
public:
	int32                                        SortOrder;                                         // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A8[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    DecalSize;                                         // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x50(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithDecalComponentTemplate* GetDefaultObj();

};

// 0x10 (0x2A8 - 0x298)
// Class DatasmithContent.DatasmithImportedSequencesActor
class ADatasmithImportedSequencesActor : public AActor
{
public:
	TArray<class ULevelSequence*>                ImportedSequences;                                 // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ADatasmithImportedSequencesActor* GetDefaultObj();

	void PlayLevelSequence(class ULevelSequence* SequenceToPlay);
};

// 0x0 (0x28 - 0x28)
// Class DatasmithContent.DatasmithOptionsBase
class UDatasmithOptionsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDatasmithOptionsBase* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class DatasmithContent.DatasmithCommonTessellationOptions
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{
public:
	struct DatasmithContent_DatasmithTessellationOptions Options;                                           // 0x28(0x10)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithCommonTessellationOptions* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class DatasmithContent.DatasmithImportOptions
class UDatasmithImportOptions : public UDatasmithOptionsBase
{
public:
	enum class EDatasmithImportSearchPackagePolicy SearchPackagePolicy;                               // 0x28(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;                            // 0x29(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportAssetConflictPolicy TextureConflictPolicy;                             // 0x2A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportActorPolicy       StaticMeshActorImportPolicy;                       // 0x2B(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportActorPolicy       LightImportPolicy;                                 // 0x2C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportActorPolicy       CameraImportPolicy;                                // 0x2D(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportActorPolicy       OtherActorImportPolicy;                            // 0x2E(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDatasmithImportMaterialQuality   MaterialQuality;                                   // 0x2F(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct DatasmithContent_DatasmithImportBaseOptions BaseOptions;                                       // 0x30(0x14)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct DatasmithContent_DatasmithReimportOptions ReimportOptions;                                   // 0x44(0x2)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CF[0x2];                                     // Fixing Size After Last Property  
	class FString                                Filename;                                          // 0x48(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FilePath;                                          // 0x58(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceUri;                                         // 0x68(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D2[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UDatasmithImportOptions* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class DatasmithContent.DatasmithLandscapeTemplate
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
public:
	class UMaterialInterface*                    LandscapeMaterial;                                 // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StaticLightingLOD;                                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F9[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UDatasmithLandscapeTemplate* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class DatasmithContent.DatasmithLightComponentTemplate
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	uint8                                        bVisible : 1;                                      // Mask: 0x1, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_80 : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_1802[0x3];                                     // Fixing Size After Last Property  
	uint8                                        CastShadows : 1;                                   // Mask: 0x1, PropSize: 0x10x34(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseTemperature : 1;                               // Mask: 0x2, PropSize: 0x10x34(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseIESBrightness : 1;                             // Mask: 0x4, PropSize: 0x10x34(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_81 : 5;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_1808[0x3];                                     // Fixing Size After Last Property  
	float                                        Intensity;                                         // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Temperature;                                       // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IESBrightnessScale;                                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               LightColor;                                        // 0x44(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_180C[0x4];                                     // Fixing Size After Last Property  
	class UMaterialInterface*                    LightFunctionMaterial;                             // 0x58(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureLightProfile*                  IESTexture;                                        // 0x60(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithLightComponentTemplate* GetDefaultObj();

};

// 0x168 (0x198 - 0x30)
// Class DatasmithContent.DatasmithMaterialInstanceTemplate
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
public:
	TSoftObjectPtr<class UMaterialInterface>     ParentMaterial;                                    // 0x30(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, float>                     ScalarParameterValues;                             // 0x58(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct CoreUObject_LinearColor> VectorParameterValues;                             // 0xA8(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, TSoftObjectPtr<class UTexture>> TextureParameterValues;                            // 0xF8(0x50)(UObjectWrapper, NativeAccessSpecifierPublic)
	struct DatasmithContent_DatasmithStaticParameterSetTemplate StaticParameters;                                  // 0x148(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithMaterialInstanceTemplate* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class DatasmithContent.DatasmithPointLightComponentTemplate
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	enum class ELightUnits                       IntensityUnits;                                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_181E[0x3];                                     // Fixing Size After Last Property  
	float                                        SourceRadius;                                      // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceLength;                                      // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttenuationRadius;                                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithPointLightComponentTemplate* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
public:
	struct DatasmithContent_DatasmithPostProcessSettingsTemplate Settings;                                          // 0x30(0x40)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x70(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUnbound : 1;                                      // Mask: 0x2, PropSize: 0x10x70(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1828[0xF];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UDatasmithPostProcessVolumeTemplate* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class DatasmithContent.DatasmithScene
class UDatasmithScene : public UObject
{
public:
	uint8                                        Pad_182E[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UDatasmithScene* GetDefaultObj();

};

// 0x58 (0x2F0 - 0x298)
// Class DatasmithContent.DatasmithSceneActor
class ADatasmithSceneActor : public AActor
{
public:
	class UDatasmithScene*                       Scene;                                             // 0x298(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, TSoftObjectPtr<class AActor>> RelatedActors;                                     // 0x2A0(0x50)(Edit, EditConst, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ADatasmithSceneActor* GetDefaultObj();

};

// 0xF0 (0x120 - 0x30)
// Class DatasmithContent.DatasmithSceneComponentTemplate
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:
	struct CoreUObject_Transform                 RelativeTransform;                                 // 0x30(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentMobility                Mobility;                                          // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183D[0x7];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class USceneComponent>        AttachParent;                                      // 0x98(0x28)(ExportObject, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastShadow;                                       // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183F[0x6];                                     // Fixing Size After Last Property  
	TSet<class FName>                            Tags;                                              // 0xC8(0x50)(NativeAccessSpecifierPublic)
	uint8                                        Pad_1840[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UDatasmithSceneComponentTemplate* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class DatasmithContent.DatasmithSkyLightComponentTemplate
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	enum class ESkyLightSourceType               SourceType;                                        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_184E[0x3];                                     // Fixing Size After Last Property  
	int32                                        CubemapResolution;                                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureCube*                          Cubemap;                                           // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithSkyLightComponentTemplate* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class DatasmithContent.DatasmithSpotLightComponentTemplate
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	float                                        InnerConeAngle;                                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterConeAngle;                                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithSpotLightComponentTemplate* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x38(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshComponentTemplate* GetDefaultObj();

};

// 0x78 (0xA8 - 0x30)
// Class DatasmithContent.DatasmithStaticMeshTemplate
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:
	struct DatasmithContent_DatasmithMeshSectionInfoMapTemplate SectionInfoMap;                                    // 0x30(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	int32                                        LightMapCoordinateIndex;                           // 0x80(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LightMapResolution;                                // 0x84(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct DatasmithContent_DatasmithMeshBuildSettingsTemplate> BuildSettings;                                     // 0x88(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct DatasmithContent_DatasmithStaticMaterialTemplate> StaticMaterials;                                   // 0x98(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDatasmithStaticMeshTemplate* GetDefaultObj();

};

}


