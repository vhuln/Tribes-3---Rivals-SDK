#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xA8 - 0xA8)
// Class InterchangeEngine.InterchangeBlueprintPipelineBase
class UInterchangeBlueprintPipelineBase : public UBlueprint
{
public:

	static class UClass* StaticClass();
	static class UInterchangeBlueprintPipelineBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InterchangeEngine.InterchangeFilePickerBase
class UInterchangeFilePickerBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInterchangeFilePickerBase* GetDefaultObj();

	bool ScriptedFilePickerForTranslatorType(enum class EInterchangeTranslatorType TranslatorType, struct InterchangeEngine_InterchangeFilePickerParameters* Parameters, TArray<class FString>* OutFilenames);
	bool ScriptedFilePickerForTranslatorAssetType(enum class EInterchangeTranslatorAssetType TranslatorAssetType, struct InterchangeEngine_InterchangeFilePickerParameters* Parameters, TArray<class FString>* OutFilenames);
};

// 0x0 (0x28 - 0x28)
// Class InterchangeEngine.InterchangePipelineConfigurationBase
class UInterchangePipelineConfigurationBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInterchangePipelineConfigurationBase* GetDefaultObj();

	enum class EInterchangePipelineConfigurationDialogResult ScriptedShowScenePipelineConfigurationDialog(TArray<struct InterchangeEngine_InterchangeStackInfo>* PipelineStacks, TArray<class UInterchangePipelineBase*>* OutPipelines, class UInterchangeSourceData* SourceData);
	enum class EInterchangePipelineConfigurationDialogResult ScriptedShowReimportPipelineConfigurationDialog(TArray<struct InterchangeEngine_InterchangeStackInfo>* PipelineStacks, TArray<class UInterchangePipelineBase*>* OutPipelines, class UInterchangeSourceData* SourceData);
	enum class EInterchangePipelineConfigurationDialogResult ScriptedShowPipelineConfigurationDialog(TArray<struct InterchangeEngine_InterchangeStackInfo>* PipelineStacks, TArray<class UInterchangePipelineBase*>* OutPipelines, class UInterchangeSourceData* SourceData);
};

// 0x208 (0x240 - 0x38)
// Class InterchangeEngine.InterchangeProjectSettings
class UInterchangeProjectSettings : public UDeveloperSettings
{
public:
	struct InterchangeEngine_InterchangeContentImportSettings ContentImportSettings;                             // 0x38(0x128)(Edit, Config, NativeAccessSpecifierPublic)
	struct InterchangeEngine_InterchangeImportSettings SceneImportSettings;                               // 0x160(0x88)(Edit, Config, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UInterchangeFilePickerBase> FilePickerClass;                                   // 0x1E8(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing; // 0x210(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BAE[0x7];                                     // Fixing Size After Last Property  
	TSoftClassPtr<class UInterchangePipelineBase> GenericPipelineClass;                              // 0x218(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangeProjectSettings* GetDefaultObj();

};

// 0x0 (0xE8 - 0xE8)
// Class InterchangeEngine.InterchangePythonPipelineBase
class UInterchangePythonPipelineBase : public UInterchangePipelineBase
{
public:

	static class UClass* StaticClass();
	static class UInterchangePythonPipelineBase* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class InterchangeEngine.InterchangePythonPipelineAsset
class UInterchangePythonPipelineAsset : public UObject
{
public:
	TSoftClassPtr<class UInterchangePythonPipelineBase> PythonClass;                                       // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangePythonPipelineBase*        GeneratedPipeline;                                 // 0x50(0x8)(Edit, ZeroConstructor, Transient, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                JsonDefaultProperties;                             // 0x58(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangePythonPipelineAsset* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class InterchangeEngine.InterchangeSceneImportAsset
class UInterchangeSceneImportAsset : public UObject
{
public:
	uint8                                        Pad_1C2D[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeSceneImportAsset* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class InterchangeEngine.InterchangeAssetImportData
class UInterchangeAssetImportData : public UAssetImportData
{
public:
	struct CoreUObject_SoftObjectPath            SceneImportAsset;                                  // 0x28(0x20)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NodeUniqueID;                                      // 0x48(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInterchangeBaseNodeContainer*         NodeContainer;                                     // 0x58(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       Pipelines;                                         // 0x60(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UInterchangeBaseNodeContainer*         TransientNodeContainer;                            // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       TransientPipelines;                                // 0x78(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FB7[0x28];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeAssetImportData* GetDefaultObj();

	void SetPipelines(TArray<class UObject*>& InPipelines);
	void SetNodeContainer(class UInterchangeBaseNodeContainer* InNodeContainer);
	class FString ScriptGetFirstFilename();
	TArray<class FString> ScriptExtractFilenames();
	TArray<class FString> ScriptExtractDisplayLabels();
	class UInterchangeBaseNode* GetStoredNode(const class FString& InNodeUniqueId);
	class UInterchangeFactoryBaseNode* GetStoredFactoryNode(const class FString& InNodeUniqueId);
	TArray<class UObject*> GetPipelines();
	int32 GetNumberOfPipelines();
	class UInterchangeBaseNodeContainer* GetNodeContainer();
};

// 0x10 (0x38 - 0x28)
// Class InterchangeEngine.InterchangePipelineStackOverride
class UInterchangePipelineStackOverride : public UObject
{
public:
	TArray<struct CoreUObject_SoftObjectPath>    OverridePipelines;                                 // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UInterchangePipelineStackOverride* GetDefaultObj();

	void AddPythonPipeline(class UInterchangePythonPipelineBase* PipelineBase);
	void AddPipeline(class UInterchangePipelineBase* PipelineBase);
	void AddBlueprintPipeline(class UInterchangeBlueprintPipelineBase* PipelineBase);
};

// 0x1B8 (0x1E0 - 0x28)
// Class InterchangeEngine.InterchangeManager
class UInterchangeManager : public UObject
{
public:
	uint8                                        Pad_2450[0xB0];                                    // Fixing Size After Last Property  
	TSet<TSubclassOf<class UObject>>             RegisteredTranslatorsClass;                        // 0xD8(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class UObject>, TSubclassOf<class UObject>> RegisteredFactoryClasses;                          // 0x128(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class UObject>, class UInterchangeWriterBase*> RegisteredWriters;                                 // 0x178(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2459[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeManager* GetDefaultObj();

	bool ImportScene(const class FString& ContentPath, class UInterchangeSourceData* SourceData, struct InterchangeEngine_ImportAssetParameters& ImportAssetParameters);
	bool ImportAsset(const class FString& ContentPath, class UInterchangeSourceData* SourceData, struct InterchangeEngine_ImportAssetParameters& ImportAssetParameters);
	class UClass* GetRegisteredFactoryClass(class UClass* ClassToMake);
	class UInterchangeManager* GetInterchangeManagerScripted();
	bool ExportScene(class UObject* World, bool bIsAutomated);
	bool ExportAsset(class UObject* Asset, bool bIsAutomated);
	class UInterchangeSourceData* CreateSourceData(const class FString& InFilename);
};

// 0x0 (0x28 - 0x28)
// Class InterchangeEngine.InterchangeMeshUtilities
class UInterchangeMeshUtilities : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInterchangeMeshUtilities* GetDefaultObj();

};

}


