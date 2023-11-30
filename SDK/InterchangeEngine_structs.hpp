#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EInterchangePipelineConfigurationDialogResult : uint8
{
	Cancel                         = 0,
	Import                         = 1,
	ImportAll                      = 2,
	EInterchangePipelineConfigurationDialogResult_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct InterchangeEngine.InterchangeFilePickerParameters
struct InterchangeEngine_InterchangeFilePickerParameters
{
public:
	bool                                         bAllowMultipleFiles;                               // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2528[0x7];                                     // Fixing Size After Last Property  
	class FText                                  Title;                                             // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FString                                DefaultPath;                                       // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct InterchangeEngine.InterchangeStackInfo
struct InterchangeEngine_InterchangeStackInfo
{
public:
	class FName                                  StackName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UInterchangePipelineBase*>      Pipelines;                                         // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct InterchangeEngine.InterchangeTranslatorPipelines
struct InterchangeEngine_InterchangeTranslatorPipelines
{
public:
	TSoftClassPtr<class UInterchangeTranslatorBase> Translator;                                        // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_SoftObjectPath>    Pipelines;                                         // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct InterchangeEngine.InterchangePipelineStack
struct InterchangeEngine_InterchangePipelineStack
{
public:
	TArray<struct CoreUObject_SoftObjectPath>    Pipelines;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct InterchangeEngine_InterchangeTranslatorPipelines> PerTranslatorPipelines;                            // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct InterchangeEngine.InterchangeImportSettings
struct InterchangeEngine_InterchangeImportSettings
{
public:
	TMap<class FName, struct InterchangeEngine_InterchangePipelineStack> PipelineStacks;                                    // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
	class FName                                  DefaultPipelineStack;                              // 0x50(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UInterchangePipelineConfigurationBase> PipelineConfigurationDialogClass;                  // 0x58(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowPipelineStacksConfigurationDialog;            // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2603[0x7];                                     // Fixing Size Of Struct 
};

// 0xA0 (0x128 - 0x88)
// ScriptStruct InterchangeEngine.InterchangeContentImportSettings
struct InterchangeEngine_InterchangeContentImportSettings : public InterchangeEngine_InterchangeImportSettings
{
public:
	TMap<enum class EInterchangeTranslatorAssetType, class FName> DefaultPipelineStackOverride;                      // 0x88(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<enum class EInterchangeTranslatorAssetType, bool> ShowPipelineStacksConfigurationDialogOverride;     // 0xD8(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct InterchangeEngine.PropertyData
struct InterchangeEngine_PropertyData
{
public:
	uint8                                        Pad_264E[0x18];                                    // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct InterchangeEngine.ImportAssetParameters
struct InterchangeEngine_ImportAssetParameters
{
public:
	class UObject*                               ReimportAsset;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReimportSourceIndex;                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAutomated;                                      // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFollowRedirectors;                                // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_269F[0x2];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_SoftObjectPath>    OverridePipelines;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnAssetDone;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26C7[0x10];                                    // Fixing Size After Last Property  
	FDelegateProperty_                           OnAssetsImportDone;                                // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26D7[0x10];                                    // Fixing Size After Last Property  
	FDelegateProperty_                           OnSceneObjectDone;                                 // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26E5[0x10];                                    // Fixing Size After Last Property  
	FDelegateProperty_                           OnSceneImportDone;                                 // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26EC[0x10];                                    // Fixing Size Of Struct 
};

}


