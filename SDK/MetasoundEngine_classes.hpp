#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xE0 - 0x28)
// Class MetasoundEngine.MetasoundGeneratorHandle
class UMetasoundGeneratorHandle : public UObject
{
public:
	uint8                                        Pad_10ED[0xB8];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMetasoundGeneratorHandle* GetDefaultObj();

	bool WatchOutput(class FName OutputName, FDelegateProperty_& OnOutputValueChanged, class FName AnalyzerName, class FName AnalyzerOutputName);
	void OnOutputValueChangedMulticast__DelegateSignature(class FName Name, struct MetasoundEngine_MetaSoundOutput& Output);
	class UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent);
	bool ApplyParameterPack(class UMetasoundParameterPack* Pack);
};

// 0x0 (0x28 - 0x28)
// Class MetasoundEngine.MetasoundOutputBlueprintAccess
class UMetasoundOutputBlueprintAccess : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMetasoundOutputBlueprintAccess* GetDefaultObj();

	bool IsTime(struct MetasoundEngine_MetaSoundOutput& Output);
	bool IsString(struct MetasoundEngine_MetaSoundOutput& Output);
	bool IsInt32(struct MetasoundEngine_MetaSoundOutput& Output);
	bool IsFloat(struct MetasoundEngine_MetaSoundOutput& Output);
	bool IsBool(struct MetasoundEngine_MetaSoundOutput& Output);
	float GetTimeSeconds(struct MetasoundEngine_MetaSoundOutput& Output, bool* Success);
	class FString GetString(struct MetasoundEngine_MetaSoundOutput& Output, bool* Success);
	int32 GetInt32(struct MetasoundEngine_MetaSoundOutput& Output, bool* Success);
	float GetFloat(struct MetasoundEngine_MetaSoundOutput& Output, bool* Success);
	bool GetBool(struct MetasoundEngine_MetaSoundOutput& Output, bool* Success);
};

// 0x10 (0x50 - 0x40)
// Class MetasoundEngine.MetaSoundOutputSubsystem
class UMetaSoundOutputSubsystem : public UTickableWorldSubsystem
{
public:
	TArray<class UMetasoundGeneratorHandle*>     TrackedGenerators;                                 // 0x40(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMetaSoundOutputSubsystem* GetDefaultObj();

	bool WatchOutput(class UAudioComponent* AudioComponent, class FName OutputName, FDelegateProperty_& OnOutputValueChanged, class FName AnalyzerName, class FName AnalyzerOutputName);
};

// 0x48 (0x80 - 0x38)
// Class MetasoundEngine.MetaSoundSettings
class UMetaSoundSettings : public UDeveloperSettings
{
public:
	bool                                         bAutoUpdateEnabled;                                // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_122C[0x7];                                     // Fixing Size After Last Property  
	TArray<struct MetasoundFrontend_MetasoundFrontendClassName> AutoUpdateDenylist;                                // 0x40(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct MetasoundEngine_DefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;                           // 0x50(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         bAutoUpdateLogWarningOnDroppedConnection;          // 0x60(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1232[0x7];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_DirectoryPath>     DirectoriesToRegister;                             // 0x68(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                        DenyListCacheChangeID;                             // 0x78(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1234[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMetaSoundSettings* GetDefaultObj();

};

// 0x0 (0x60 - 0x60)
// Class MetasoundEngine.MetasoundEditorGraphBase
class UMetasoundEditorGraphBase : public UEdGraph
{
public:

	static class UClass* StaticClass();
	static class UMetasoundEditorGraphBase* GetDefaultObj();

};

// 0x338 (0x360 - 0x28)
// Class MetasoundEngine.MetaSoundPatch
class UMetaSoundPatch : public UObject
{
public:
	uint8                                        Pad_1248[0x70];                                    // Fixing Size After Last Property  
	struct MetasoundFrontend_MetasoundFrontendDocument RootMetaSoundDocument;                             // 0x98(0x1C8)(Edit, Protected, NativeAccessSpecifierProtected)
	TSet<class FString>                          ReferencedAssetClassKeys;                          // 0x260(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<class UObject*>                         ReferencedAssetClassObjects;                       // 0x2B0(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSet<struct CoreUObject_SoftObjectPath>      ReferenceAssetClassCache;                          // 0x300(0x50)(Protected, NativeAccessSpecifierProtected)
	struct CoreUObject_Guid                      AssetClassID;                                      // 0x350(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMetaSoundPatch* GetDefaultObj();

};

// 0x1B0 (0x1E0 - 0x30)
// Class MetasoundEngine.MetaSoundAssetSubsystem
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_127D[0x8];                                     // Fixing Size After Last Property  
	TArray<struct MetasoundEngine_MetaSoundAsyncAssetDependencies> LoadingDependencies;                               // 0x38(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_127E[0x198];                                   // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMetaSoundAssetSubsystem* GetDefaultObj();

	void UnregisterAssetClassesInDirectories(TArray<struct MetasoundEngine_MetaSoundAssetDirectory>& Directories);
	void RegisterAssetClassesInDirectories(TArray<struct MetasoundEngine_MetaSoundAssetDirectory>& Directories);
};

// 0x38 (0x60 - 0x28)
// Class MetasoundEngine.MetaSoundBuilderBase
class UMetaSoundBuilderBase : public UObject
{
public:
	struct MetasoundFrontend_MetaSoundFrontendDocumentBuilder Builder;                                           // 0x28(0x30)(Protected, NativeAccessSpecifierProtected)
	bool                                         bIsAttached;                                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1667[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMetaSoundBuilderBase* GetDefaultObj();

	void SetNodeInputDefault(struct MetasoundEngine_MetaSoundBuilderNodeInputHandle& NodeInputHandle, struct MetasoundFrontend_MetasoundFrontendLiteral& Literal, enum class EMetaSoundBuilderResult* OutResult);
	void SetGraphInputDefault(class FName InputName, struct MetasoundFrontend_MetasoundFrontendLiteral& Literal, enum class EMetaSoundBuilderResult* OutResult);
	void RemoveNodeInputDefault(struct MetasoundEngine_MetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult* OutResult);
	void RemoveNode(struct MetasoundEngine_MetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	void RemoveInterface(class FName InterfaceName, enum class EMetaSoundBuilderResult* OutResult);
	void RemoveGraphOutput(class FName Name, enum class EMetaSoundBuilderResult* OutResult);
	void RemoveGraphInput(class FName Name, enum class EMetaSoundBuilderResult* OutResult);
	bool NodesAreConnected(struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle& OutputHandle, struct MetasoundEngine_MetaSoundBuilderNodeInputHandle& InputHandle);
	bool NodeOutputIsConnected(struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle& OutputHandle);
	bool NodeInputIsConnected(struct MetasoundEngine_MetaSoundBuilderNodeInputHandle& InputHandle);
	bool IsPreset();
	bool InterfaceIsDeclared(class FName InterfaceName);
	class UObject* GetReferencedPresetAsset();
	void GetNodeOutputData(struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle& OutputHandle, class FName* Name, class FName* DataType, enum class EMetaSoundBuilderResult* OutResult);
	struct MetasoundFrontend_MetasoundFrontendLiteral GetNodeInputDefault(struct MetasoundEngine_MetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult* OutResult);
	void GetNodeInputData(struct MetasoundEngine_MetaSoundBuilderNodeInputHandle& InputHandle, class FName* Name, class FName* DataType, enum class EMetaSoundBuilderResult* OutResult);
	struct MetasoundFrontend_MetasoundFrontendLiteral GetNodeInputClassDefault(struct MetasoundEngine_MetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult* OutResult);
	TArray<struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle> FindNodeOutputsByDataType(struct MetasoundEngine_MetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult, class FName DataType);
	TArray<struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle> FindNodeOutputs(struct MetasoundEngine_MetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	struct MetasoundEngine_MetaSoundNodeHandle FindNodeOutputParent(struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle& OutputHandle, enum class EMetaSoundBuilderResult* OutResult);
	struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle FindNodeOutputByName(struct MetasoundEngine_MetaSoundNodeHandle& NodeHandle, class FName OutputName, enum class EMetaSoundBuilderResult* OutResult);
	TArray<struct MetasoundEngine_MetaSoundBuilderNodeInputHandle> FindNodeInputsByDataType(struct MetasoundEngine_MetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult, class FName DataType);
	TArray<struct MetasoundEngine_MetaSoundBuilderNodeInputHandle> FindNodeInputs(struct MetasoundEngine_MetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	struct MetasoundEngine_MetaSoundNodeHandle FindNodeInputParent(struct MetasoundEngine_MetaSoundBuilderNodeInputHandle& InputHandle, enum class EMetaSoundBuilderResult* OutResult);
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle FindNodeInputByName(struct MetasoundEngine_MetaSoundNodeHandle& NodeHandle, class FName InputName, enum class EMetaSoundBuilderResult* OutResult);
	struct MetasoundFrontend_MetasoundFrontendVersion FindNodeClassVersion(struct MetasoundEngine_MetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	TArray<struct MetasoundEngine_MetaSoundNodeHandle> FindInterfaceOutputNodes(class FName InterfaceName, enum class EMetaSoundBuilderResult* OutResult);
	TArray<struct MetasoundEngine_MetaSoundNodeHandle> FindInterfaceInputNodes(class FName InterfaceName, enum class EMetaSoundBuilderResult* OutResult);
	struct MetasoundEngine_MetaSoundNodeHandle FindGraphOutputNode(class FName OutputName, enum class EMetaSoundBuilderResult* OutResult);
	struct MetasoundEngine_MetaSoundNodeHandle FindGraphInputNode(class FName InputName, enum class EMetaSoundBuilderResult* OutResult);
	void DisconnectNodesByInterfaceBindings(struct MetasoundEngine_MetaSoundNodeHandle& FromNodeHandle, struct MetasoundEngine_MetaSoundNodeHandle& ToNodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	void DisconnectNodes(struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle& NodeOutputHandle, struct MetasoundEngine_MetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult* OutResult);
	void DisconnectNodeOutput(struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle& NodeOutputHandle, enum class EMetaSoundBuilderResult* OutResult);
	void DisconnectNodeInput(struct MetasoundEngine_MetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult* OutResult);
	void ConvertToPreset(TScriptInterface<class IMetaSoundDocumentInterface>& ReferencedNodeClass, enum class EMetaSoundBuilderResult* OutResult);
	void ConvertFromPreset(enum class EMetaSoundBuilderResult* OutResult);
	bool ContainsNodeOutput(struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle& Output);
	bool ContainsNodeInput(struct MetasoundEngine_MetaSoundBuilderNodeInputHandle& Input);
	bool ContainsNode(struct MetasoundEngine_MetaSoundNodeHandle& Node);
	void ConnectNodesByInterfaceBindings(struct MetasoundEngine_MetaSoundNodeHandle& FromNodeHandle, struct MetasoundEngine_MetaSoundNodeHandle& ToNodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	void ConnectNodes(struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle& NodeOutputHandle, struct MetasoundEngine_MetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult* OutResult);
	void ConnectNodeOutputToGraphOutput(class FName GraphOutputName, struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle& NodeOutputHandle, enum class EMetaSoundBuilderResult* OutResult);
	TArray<struct MetasoundEngine_MetaSoundBuilderNodeInputHandle> ConnectNodeOutputsToMatchingGraphInterfaceOutputs(struct MetasoundEngine_MetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	void ConnectNodeInputToGraphInput(class FName GraphInputName, struct MetasoundEngine_MetaSoundBuilderNodeInputHandle& NodeInputHandle, enum class EMetaSoundBuilderResult* OutResult);
	TArray<struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle> ConnectNodeInputsToMatchingGraphInterfaceInputs(struct MetasoundEngine_MetaSoundNodeHandle& NodeHandle, enum class EMetaSoundBuilderResult* OutResult);
	struct MetasoundEngine_MetaSoundNodeHandle AddNodeByClassName(struct MetasoundFrontend_MetasoundFrontendClassName& ClassName, int32 MajorVersion, enum class EMetaSoundBuilderResult* OutResult);
	struct MetasoundEngine_MetaSoundNodeHandle AddNode(TScriptInterface<class IMetaSoundDocumentInterface>& NodeClass, enum class EMetaSoundBuilderResult* OutResult);
	void AddInterface(class FName InterfaceName, enum class EMetaSoundBuilderResult* OutResult);
	struct MetasoundEngine_MetaSoundBuilderNodeInputHandle AddGraphOutputNode(class FName Name, class FName DataType, const struct MetasoundFrontend_MetasoundFrontendLiteral& DefaultValue, enum class EMetaSoundBuilderResult* OutResult, bool bIsConstructorOutput);
	struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle AddGraphInputNode(class FName Name, class FName DataType, const struct MetasoundFrontend_MetasoundFrontendLiteral& DefaultValue, enum class EMetaSoundBuilderResult* OutResult, bool bIsConstructorInput);
};

// 0x0 (0x60 - 0x60)
// Class MetasoundEngine.MetaSoundPatchBuilder
class UMetaSoundPatchBuilder : public UMetaSoundBuilderBase
{
public:

	static class UClass* StaticClass();
	static class UMetaSoundPatchBuilder* GetDefaultObj();

	TScriptInterface<class IMetaSoundDocumentInterface> Build(class UObject* Parent, struct MetasoundEngine_MetaSoundBuilderOptions& Options);
};

// 0x8 (0x68 - 0x60)
// Class MetasoundEngine.MetaSoundSourceBuilder
class UMetaSoundSourceBuilder : public UMetaSoundBuilderBase
{
public:
	uint8                                        Pad_174F[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMetaSoundSourceBuilder* GetDefaultObj();

	void SetFormat(enum class EMetaSoundOutputAudioFormat OutputFormat, enum class EMetaSoundBuilderResult* OutResult);
	bool GetLiveUpdatesEnabled();
	TScriptInterface<class IMetaSoundDocumentInterface> Build(class UObject* Parent, struct MetasoundEngine_MetaSoundBuilderOptions& Options);
	void Audition(class UObject* Parent, class UAudioComponent* AudioComponent, FDelegateProperty_ OnCreateGenerator, bool bLiveUpdatesEnabled);
};

// 0xA8 (0xD8 - 0x30)
// Class MetasoundEngine.MetaSoundBuilderSubsystem
class UMetaSoundBuilderSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_19B8[0x8];                                     // Fixing Size After Last Property  
	TMap<class FName, class UMetaSoundBuilderBase*> NamedBuilders;                                     // 0x38(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, TWeakObjectPtr<class UMetaSoundBuilderBase>> AssetBuilders;                                     // 0x88(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMetaSoundBuilderSubsystem* GetDefaultObj();

	bool UnregisterSourceBuilder(class FName BuilderName);
	bool UnregisterPatchBuilder(class FName BuilderName);
	bool UnregisterBuilder(class FName BuilderName);
	void RegisterSourceBuilder(class FName BuilderName, class UMetaSoundSourceBuilder* Builder);
	void RegisterPatchBuilder(class FName BuilderName, class UMetaSoundPatchBuilder* Builder);
	void RegisterBuilder(class FName BuilderName, class UMetaSoundBuilderBase* Builder);
	bool IsInterfaceRegistered(class FName InInterfaceName);
	class UMetaSoundSourceBuilder* FindSourceBuilder(class FName BuilderName);
	class UMetaSoundPatchBuilder* FindPatchBuilder(class FName BuilderName);
	class UMetaSoundBuilderBase* FindBuilder(class FName BuilderName);
	struct MetasoundFrontend_MetasoundFrontendLiteral CreateStringMetaSoundLiteral(const class FString& Value, class FName* DataType);
	struct MetasoundFrontend_MetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(TArray<class FString>& Value, class FName* DataType);
	class UMetaSoundSourceBuilder* CreateSourcePresetBuilder(class FName BuilderName, TScriptInterface<class IMetaSoundDocumentInterface>& ReferencedSourceClass, enum class EMetaSoundBuilderResult* OutResult);
	class UMetaSoundSourceBuilder* CreateSourceBuilder(class FName BuilderName, struct MetasoundEngine_MetaSoundBuilderNodeOutputHandle* OnPlayNodeOutput, struct MetasoundEngine_MetaSoundBuilderNodeInputHandle* OnFinishedNodeInput, TArray<struct MetasoundEngine_MetaSoundBuilderNodeInputHandle>* AudioOutNodeInputs, enum class EMetaSoundBuilderResult* OutResult, enum class EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot);
	class UMetaSoundPatchBuilder* CreatePatchPresetBuilder(class FName BuilderName, TScriptInterface<class IMetaSoundDocumentInterface>& ReferencedPatchClass, enum class EMetaSoundBuilderResult* OutResult);
	class UMetaSoundPatchBuilder* CreatePatchBuilder(class FName BuilderName, enum class EMetaSoundBuilderResult* OutResult);
	struct MetasoundFrontend_MetasoundFrontendLiteral CreateObjectMetaSoundLiteral(class UObject* Value);
	struct MetasoundFrontend_MetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(TArray<class UObject*>& Value);
	struct MetasoundFrontend_MetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(struct AudioExtensions_AudioParameter& Param);
	struct MetasoundFrontend_MetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32 Value, class FName* DataType);
	struct MetasoundFrontend_MetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(TArray<int32>& Value, class FName* DataType);
	struct MetasoundFrontend_MetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value, class FName* DataType);
	struct MetasoundFrontend_MetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(TArray<float>& Value, class FName* DataType);
	struct MetasoundFrontend_MetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value, class FName* DataType);
	struct MetasoundFrontend_MetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(TArray<bool>& Value, class FName* DataType);
};

// 0x410 (0x890 - 0x480)
// Class MetasoundEngine.MetaSoundSource
class UMetaSoundSource : public USoundWaveProcedural
{
public:
	uint8                                        Pad_19FD[0x70];                                    // Fixing Size After Last Property  
	struct MetasoundFrontend_MetasoundFrontendDocument RootMetaSoundDocument;                             // 0x4F0(0x1C8)(Edit, Protected, NativeAccessSpecifierProtected)
	TSet<class FString>                          ReferencedAssetClassKeys;                          // 0x6B8(0x50)(Protected, NativeAccessSpecifierProtected)
	TSet<class UObject*>                         ReferencedAssetClassObjects;                       // 0x708(0x50)(Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSet<struct CoreUObject_SoftObjectPath>      ReferenceAssetClassCache;                          // 0x758(0x50)(Protected, NativeAccessSpecifierProtected)
	enum class EMetaSoundOutputAudioFormat       OutputFormat;                                      // 0x7A8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A10[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      AssetClassID;                                      // 0x7AC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A11[0xD4];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMetaSoundSource* GetDefaultObj();

};

}


