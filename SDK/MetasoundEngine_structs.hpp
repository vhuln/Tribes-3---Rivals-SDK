#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMetaSoundMessageLevel : uint8
{
	Error                          = 0,
	Warning                        = 1,
	Info                           = 2,
	EMetaSoundMessageLevel_MAX     = 3,
};

enum class EMetaSoundOutputAudioFormat : uint8
{
	Mono                           = 0,
	Stereo                         = 1,
	Quad                           = 2,
	FiveDotOne                     = 3,
	SevenDotOne                    = 4,
	COUNT                          = 5,
	EMetaSoundOutputAudioFormat_MAX = 6,
};

enum class EMetaSoundBuilderResult : uint8
{
	Succeeded                      = 0,
	Failed                         = 1,
	EMetaSoundBuilderResult_MAX    = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x10 - 0x8)
// ScriptStruct MetasoundEngine.MetaSoundOutput
struct MetasoundEngine_MetaSoundOutput : public AudioExtensions_SoundGeneratorOutput
{
public:
	uint8                                        Pad_1A1A[0x8];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
struct MetasoundEngine_DefaultMetaSoundAssetAutoUpdateSettings
{
public:
	struct CoreUObject_SoftObjectPath            Metasound;                                         // 0x0(0x20)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MetasoundEngine.MetaSoundAssetDirectory
struct MetasoundEngine_MetaSoundAssetDirectory
{
public:
	struct CoreUObject_DirectoryPath             Directory;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MetasoundEngine.MetaSoundAsyncAssetDependencies
struct MetasoundEngine_MetaSoundAsyncAssetDependencies
{
public:
	uint8                                        Pad_1A36[0x8];                                     // Fixing Size After Last Property  
	class UObject*                               Metasound;                                         // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A38[0x20];                                    // Fixing Size Of Struct 
};

// 0x0 (0x20 - 0x20)
// ScriptStruct MetasoundEngine.MetaSoundBuilderNodeInputHandle
struct MetasoundEngine_MetaSoundBuilderNodeInputHandle : public MetasoundFrontend_MetasoundFrontendVertexHandle
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct MetasoundEngine.MetaSoundBuilderNodeOutputHandle
struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle : public MetasoundFrontend_MetasoundFrontendVertexHandle
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MetasoundEngine.MetaSoundNodeHandle
struct MetasoundEngine_MetaSoundNodeHandle
{
public:
	struct CoreUObject_Guid                      NodeId;                                            // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MetasoundEngine.MetaSoundBuilderOptions
struct MetasoundEngine_MetaSoundBuilderOptions
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceUniqueClassName;                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddToRegistry;                                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A55[0x6];                                     // Fixing Size After Last Property  
	TScriptInterface<class IMetaSoundDocumentInterface> ExistingMetaSound;                                 // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


