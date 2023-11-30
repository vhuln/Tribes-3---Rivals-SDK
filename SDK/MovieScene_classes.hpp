#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBlenderSystemSupport
class IMovieSceneBlenderSystemSupport : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneBlenderSystemSupport* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBoundObjectProxy
class IMovieSceneBoundObjectProxy : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneBoundObjectProxy* GetDefaultObj();

	class UObject* BP_GetBoundObjectForSequencer(class UObject* ResolvedObject);
};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneChannelOverrideProvider
class IMovieSceneChannelOverrideProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneChannelOverrideProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneDeterminismSource
class IMovieSceneDeterminismSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneDeterminismSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneEvaluationHook
class IMovieSceneEvaluationHook : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneEvaluationHook* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneMetaDataInterface
class IMovieSceneMetaDataInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneMetaDataInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieScenePlaybackClient
class IMovieScenePlaybackClient : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieScenePlaybackClient* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneSequencePlayerObserver
class IMovieSceneSequencePlayerObserver : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneSequencePlayerObserver* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBindingOwnerInterface
class IMovieSceneBindingOwnerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneBindingOwnerInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneCachedTrack
class IMovieSceneCachedTrack : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneCachedTrack* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneEasingFunction
class IMovieSceneEasingFunction : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneEasingFunction* GetDefaultObj();

	float OnEvaluate(float Interp);
};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneKeyProxy
class IMovieSceneKeyProxy : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneKeyProxy* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneSequenceTickManagerClient
class IMovieSceneSequenceTickManagerClient : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneSequenceTickManagerClient* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class MovieScene.MovieSceneSignedObject
class UMovieSceneSignedObject : public UObject
{
public:
	uint8                                        Pad_4B5[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Guid                      Signature;                                         // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4B6[0x1C];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneSignedObject* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieScene.MovieSceneChannelOverrideContainer
class UMovieSceneChannelOverrideContainer : public UMovieSceneSignedObject
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneChannelOverrideContainer* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class MovieScene.MovieSceneSectionChannelOverrideRegistry
class UMovieSceneSectionChannelOverrideRegistry : public UObject
{
public:
	TMap<class FName, class UMovieSceneChannelOverrideContainer*> Overrides;                                         // 0x28(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneSectionChannelOverrideRegistry* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneTrackTemplateProducer
class IMovieSceneTrackTemplateProducer : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneTrackTemplateProducer* GetDefaultObj();

};

// 0x3D0 (0x3F8 - 0x28)
// Class MovieScene.MovieSceneCompiledData
class UMovieSceneCompiledData : public UObject
{
public:
	struct MovieScene_MovieSceneEvaluationTemplate EvaluationTemplate;                                // 0x28(0x160)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneSequenceHierarchy Hierarchy;                                         // 0x188(0x118)(NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneEntityComponentField EntityComponentField;                              // 0x2A0(0xF0)(NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneEvaluationField  TrackTemplateField;                                // 0x390(0x30)(NativeAccessSpecifierPrivate)
	TArray<struct CoreUObject_FrameTime>         DeterminismFences;                                 // 0x3C0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct CoreUObject_Guid                      CompiledSignature;                                 // 0x3D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Guid                      CompilerVersion;                                   // 0x3E0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneSequenceCompilerMaskStruct AccumulatedMask;                                   // 0x3F0(0x1)(NoDestructor, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneSequenceCompilerMaskStruct AllocatedMask;                                     // 0x3F1(0x1)(NoDestructor, NativeAccessSpecifierPrivate)
	enum class EMovieSceneSequenceFlags          AccumulatedFlags;                                  // 0x3F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4E7[0x5];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneCompiledData* GetDefaultObj();

};

// 0x208 (0x230 - 0x28)
// Class MovieScene.MovieSceneCompiledDataManager
class UMovieSceneCompiledDataManager : public UObject
{
public:
	uint8                                        Pad_4F2[0xB0];                                     // Fixing Size After Last Property  
	TMap<int32, struct MovieScene_MovieSceneSequenceHierarchy> Hierarchies;                                       // 0xD8(0x50)(NativeAccessSpecifierPrivate)
	TMap<int32, struct MovieScene_MovieSceneEvaluationTemplate> TrackTemplates;                                    // 0x128(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<int32, struct MovieScene_MovieSceneEvaluationField> TrackTemplateFields;                               // 0x178(0x50)(NativeAccessSpecifierPrivate)
	TMap<int32, struct MovieScene_MovieSceneEntityComponentField> EntityComponentFields;                             // 0x1C8(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_4F6[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneCompiledDataManager* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneEntityProvider
class IMovieSceneEntityProvider : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneEntityProvider* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class MovieScene.MovieSceneEntitySystem
class UMovieSceneEntitySystem : public UObject
{
public:
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_514[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneEntitySystem* GetDefaultObj();

};

// 0x28 (0x68 - 0x40)
// Class MovieScene.MovieSceneBlenderSystem
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_51D[0x28];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneBlenderSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneEntityInstantiatorSystem
class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneEntityInstantiatorSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneGenericBoundObjectInstantiator* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneBoundSceneComponentInstantiator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneValueDecomposer
class IMovieSceneValueDecomposer : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneValueDecomposer* GetDefaultObj();

};

// 0x710 (0x738 - 0x28)
// Class MovieScene.MovieSceneEntitySystemLinker
class UMovieSceneEntitySystemLinker : public UObject
{
public:
	uint8                                        Pad_544[0x278];                                    // Fixing Size After Last Property  
	struct MovieScene_MovieSceneEntitySystemGraph SystemGraph;                                       // 0x2A0(0x190)(NativeAccessSpecifierPublic)
	uint8                                        Pad_546[0x308];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneEntitySystemLinker* GetDefaultObj();

};

// 0x170 (0x1B0 - 0x40)
// Class MovieScene.MovieSceneEvalTimeSystem
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_54F[0x170];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneEvalTimeSystem* GetDefaultObj();

};

// 0x50 (0x90 - 0x40)
// Class MovieScene.MovieSceneEvaluationHookSystem
class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
{
public:
	TMap<struct MovieScene_MovieSceneEvaluationInstanceKey, struct MovieScene_MovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;                       // 0x40(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneEvaluationHookSystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
class IMovieScenePreAnimatedStateSystemInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieScenePreAnimatedStateSystemInterface* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneCachePreAnimatedStateSystem* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_57F[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneRestorePreAnimatedStateSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneRootInstantiatorSystem
class UMovieSceneRootInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneRootInstantiatorSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class MovieScene.MovieSceneSpawnablesSystem
class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneSpawnablesSystem* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class MovieScene.MovieSceneTrackInstance
class UMovieSceneTrackInstance : public UObject
{
public:
	TWeakObjectPtr<class UObject>                WeakAnimatedObject;                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsRootTrackInstance;                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_59D[0x7];                                      // Fixing Size After Last Property  
	class UMovieSceneEntitySystemLinker*         PrivateLinker;                                     // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct MovieScene_MovieSceneTrackInstanceInput> Inputs;                                            // 0x40(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneTrackInstance* GetDefaultObj();

};

// 0xB0 (0xF0 - 0x40)
// Class MovieScene.MovieSceneTrackInstanceInstantiator
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:
	uint8                                        Pad_5B3[0xB0];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneTrackInstanceInstantiator* GetDefaultObj();

};

// 0x8 (0x48 - 0x40)
// Class MovieScene.MovieSceneTrackInstanceSystem
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{
public:
	class UMovieSceneTrackInstanceInstantiator*  Instantiator;                                      // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneTrackInstanceSystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneCustomClockSource
class IMovieSceneCustomClockSource : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneCustomClockSource* GetDefaultObj();

	void OnTick(float DeltaSeconds, float InPlayRate);
	void OnStopPlaying(struct CoreUObject_QualifiedFrameTime& InStopTime);
	void OnStartPlaying(struct CoreUObject_QualifiedFrameTime& InStartTime);
	struct CoreUObject_FrameTime OnRequestCurrentTime(struct CoreUObject_QualifiedFrameTime& InCurrentTime, float InPlayRate);
};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneBuiltInEasingFunction
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	uint8                                        Pad_603[0x8];                                      // Fixing Size After Last Property  
	enum class EMovieSceneBuiltInEasing          Type;                                              // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_604[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneBuiltInEasingFunction* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneEasingExternalCurve
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	uint8                                        Pad_60A[0x8];                                      // Fixing Size After Last Property  
	class UCurveFloat*                           Curve;                                             // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneEasingExternalCurve* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.NodeAndChannelMappings
class INodeAndChannelMappings : public IInterface
{
public:

	static class UClass* StaticClass();
	static class INodeAndChannelMappings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneNodeGroup
class UMovieSceneNodeGroup : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNodeGroup* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneNodeGroupCollection
class UMovieSceneNodeGroupCollection : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNodeGroupCollection* GetDefaultObj();

};

// 0x108 (0x160 - 0x58)
// Class MovieScene.MovieScene
class UMovieScene : public UMovieSceneSignedObject
{
public:
	uint8                                        Pad_630[0x8];                                      // Fixing Size After Last Property  
	TArray<struct MovieScene_MovieSceneSpawnable> Spawnables;                                        // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct MovieScene_MovieScenePossessable> Possessables;                                      // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct MovieScene_MovieSceneBinding>  ObjectBindings;                                    // 0x80(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TMap<class FName, struct MovieScene_MovieSceneObjectBindingIDs> BindingGroups;                                     // 0x90(0x50)(NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              Tracks;                                            // 0xE0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                      CameraCutTrack;                                    // 0xF0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneFrameRange       SelectionRange;                                    // 0xF8(0x10)(NoDestructor, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneFrameRange       PlaybackRange;                                     // 0x108(0x10)(NoDestructor, NativeAccessSpecifierPrivate)
	struct CoreUObject_FrameRate                 TickResolution;                                    // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_FrameRate                 DisplayRate;                                       // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMovieSceneEvaluationType         EvaluationType;                                    // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EUpdateClockSource                ClockSource;                                       // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_63A[0x6];                                      // Fixing Size After Last Property  
	struct CoreUObject_SoftObjectPath            CustomClockSourcePath;                             // 0x130(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct MovieScene_MovieSceneMarkedFrame> MarkedFrames;                                      // 0x150(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieScene* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class MovieScene.MovieSceneBindingOverrides
class UMovieSceneBindingOverrides : public UObject
{
public:
	TArray<struct MovieScene_MovieSceneBindingOverrideData> BindingData;                                       // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_65A[0x58];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneBindingOverrides* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.BuiltInDynamicBindingResolverLibrary
class UBuiltInDynamicBindingResolverLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBuiltInDynamicBindingResolverLibrary* GetDefaultObj();

	struct MovieScene_MovieSceneDynamicBindingResolveResult ResolveToPlayerPawn(class UObject* WorldContextObject, int32 PlayerControllerIndex);
};

// 0x50 (0x78 - 0x28)
// Class MovieScene.MovieSceneFolder
class UMovieSceneFolder : public UObject
{
public:
	uint8                                        Pad_679[0x4];                                      // Fixing Size After Last Property  
	class FName                                  FolderName;                                        // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_67C[0x4];                                      // Fixing Size After Last Property  
	TArray<class UMovieSceneFolder*>             ChildFolders;                                      // 0x38(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              ChildTracks;                                       // 0x48(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class FString>                        ChildObjectBindingStrings;                         // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_681[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneFolder* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class MovieScene.MovieSceneMetaData
class UMovieSceneMetaData : public UObject
{
public:
	uint8                                        Pad_6B6[0x8];                                      // Fixing Size After Last Property  
	class FString                                Author;                                            // 0x30(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_DateTime                  Created;                                           // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Notes;                                             // 0x48(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneMetaData* GetDefaultObj();

	void SetNotes(const class FString& InNotes);
	void SetCreated(const struct CoreUObject_DateTime& InCreated);
	void SetAuthor(const class FString& InAuthor);
	class FString GetNotes();
	struct CoreUObject_DateTime GetCreated();
	class FString GetAuthor();
};

// 0x40 (0x98 - 0x58)
// Class MovieScene.MovieSceneTrack
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct MovieScene_MovieSceneTrackEvalOptions EvalOptions;                                       // 0x58(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C4[0x1];                                      // Fixing Size After Last Property  
	bool                                         bIsEvalDisabled;                                   // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_6C7[0x2];                                      // Fixing Size After Last Property  
	TArray<int32>                                RowsDisabled;                                      // 0x60(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_6CA[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Guid                      EvaluationFieldGuid;                               // 0x74(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6CC[0x4];                                      // Fixing Size After Last Property  
	struct MovieScene_MovieSceneTrackEvaluationField EvaluationField;                                   // 0x88(0x10)(ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneTrack* GetDefaultObj();

};

// 0x0 (0x98 - 0x98)
// Class MovieScene.MovieSceneNameableTrack
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNameableTrack* GetDefaultObj();

};

// 0x98 (0xF0 - 0x58)
// Class MovieScene.MovieSceneSection
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct MovieScene_MovieSceneSectionEvalOptions EvalOptions;                                       // 0x58(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_75F[0x6];                                      // Fixing Size After Last Property  
	struct MovieScene_MovieSceneEasingSettings   Easing;                                            // 0x60(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFrameRange       SectionRange;                                      // 0x98(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               PreRollFrames;                                     // 0xA8(0x4)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_FrameNumber               PostRollFrames;                                    // 0xAC(0x4)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RowIndex;                                          // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        OverlapPriority;                                   // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsActive : 1;                                     // Mask: 0x1, PropSize: 0x10xB8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsLocked : 1;                                     // Mask: 0x2, PropSize: 0x10xB8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_33 : 6;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_769[0x3];                                      // Fixing Size After Last Property  
	float                                        StartTime;                                         // 0xBC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndTime;                                           // 0xC0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PrerollTime;                                       // 0xC4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PostrollTime;                                      // 0xC8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsInfinite : 1;                                   // Mask: 0x1, PropSize: 0x10xCC(0x1)(Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_34 : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_76E[0x3];                                      // Fixing Size After Last Property  
	bool                                         bSupportsInfiniteRange;                            // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct MovieScene_OptionalMovieSceneBlendType BlendType;                                         // 0xD1(0x2)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_76F[0x1D];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneSection* GetDefaultObj();

	void SetRowIndex(int32 NewRowIndex);
	void SetPreRollFrames(int32 InPreRollFrames);
	void SetPostRollFrames(int32 InPostRollFrames);
	void SetOverlapPriority(int32 NewPriority);
	void SetIsLocked(bool bInIsLocked);
	void SetIsActive(bool bInIsActive);
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode);
	void SetColorTint(struct CoreUObject_Color& InColorTint);
	void SetBlendType(enum class EMovieSceneBlendType InBlendType);
	bool IsLocked();
	bool IsActive();
	int32 GetRowIndex();
	int32 GetPreRollFrames();
	int32 GetPostRollFrames();
	int32 GetOverlapPriority();
	enum class EMovieSceneCompletionMode GetCompletionMode();
	struct CoreUObject_Color GetColorTint();
	struct MovieScene_OptionalMovieSceneBlendType GetBlendType();
};

// 0x10 (0x68 - 0x58)
// Class MovieScene.MovieSceneSequence
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	class UMovieSceneCompiledData*               CompiledData;                                      // 0x58(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMovieSceneCompletionMode         DefaultCompletionMode;                             // 0x60(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentContextsAreSignificant;                     // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPlayableDirectly;                                 // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EMovieSceneSequenceFlags          SequenceFlags;                                     // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_79E[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneSequence* GetDefaultObj();

	struct MovieScene_MovieSceneTimecodeSource GetEarliestTimecodeSource();
	TArray<struct MovieScene_MovieSceneObjectBindingID> FindBindingsByTag(class FName InBindingName);
	struct MovieScene_MovieSceneObjectBindingID FindBindingByTag(class FName InBindingName);
};

// 0x4A0 (0x4C8 - 0x28)
// Class MovieScene.MovieSceneSequencePlayer
class UMovieSceneSequencePlayer : public UObject
{
public:
	uint8                                        Pad_90D[0x200];                                    // Fixing Size After Last Property  
	TScriptInterface<class IMovieSceneSequencePlayerObserver> Observer;                                          // 0x228(0x10)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlay;                                            // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayReverse;                                     // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStop;                                            // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPause;                                           // 0x268(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EMovieScenePlayerStatus           Status;                                            // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_90F[0x3];                                      // Fixing Size After Last Property  
	uint8                                        bReversePlayback : 1;                              // Mask: 0x1, PropSize: 0x10x28C(0x1)(Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_3C : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_911[0x3];                                      // Fixing Size After Last Property  
	class UMovieSceneSequence*                   Sequence;                                          // 0x290(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_FrameNumber               StartTime;                                         // 0x298(0x4)(Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DurationFrames;                                    // 0x29C(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DurationSubFrames;                                 // 0x2A0(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentNumLoops;                                   // 0x2A4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SerialNumber;                                      // 0x2A8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct MovieScene_MovieSceneSequencePlaybackSettings PlaybackSettings;                                  // 0x2AC(0x20)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_91D[0x4];                                      // Fixing Size After Last Property  
	struct MovieScene_MovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x2D0(0x88)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_91E[0x90];                                     // Fixing Size After Last Property  
	struct MovieScene_MovieSceneSequenceReplProperties NetSyncProps;                                      // 0x3E8(0x14)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_920[0x4];                                      // Fixing Size After Last Property  
	TScriptInterface<class IMovieScenePlaybackClient> PlaybackClient;                                    // 0x400(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMovieSceneSequenceTickManager*        TickManager;                                       // 0x410(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_923[0xB0];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneSequencePlayer* GetDefaultObj();

	void StopAtCurrentTime();
	void Stop();
	void SetWeight(double InWeight);
	void SetTimeRange(float StartTime, float Duration);
	void SetPlayRate(float PlayRate);
	void SetPlaybackPosition(const struct MovieScene_MovieSceneSequencePlaybackParams& PlaybackParams);
	void SetFrameRate(const struct CoreUObject_FrameRate& FrameRate);
	void SetFrameRange(int32 StartFrame, int32 Duration, float SubFrames);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void Scrub();
	void RPC_OnStopEvent(const struct CoreUObject_FrameTime& StoppedTime, int32 NewSerialNumber);
	void RPC_OnFinishPlaybackEvent(const struct CoreUObject_FrameTime& StoppedTime, int32 NewSerialNumber);
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, const struct CoreUObject_FrameTime& RelevantTime, int32 NewSerialNumber);
	void RestoreState();
	void RemoveWeight();
	void PlayTo(const struct MovieScene_MovieSceneSequencePlaybackParams& PlaybackParams, const struct MovieScene_MovieSceneSequencePlayToParams& PlayToParams);
	void PlayReverse();
	void PlayLooping(int32 NumLoops);
	void Play();
	void Pause();
	bool IsReversed();
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	struct CoreUObject_QualifiedFrameTime GetStartTime();
	class FString GetSequenceName(bool bAddClientInfo);
	class UMovieSceneSequence* GetSequence();
	float GetPlayRate();
	TArray<struct MovieScene_MovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
	struct CoreUObject_FrameRate GetFrameRate();
	int32 GetFrameDuration();
	struct CoreUObject_QualifiedFrameTime GetEndTime();
	struct CoreUObject_QualifiedFrameTime GetDuration();
	bool GetDisableCameraCuts();
	struct CoreUObject_QualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(const struct MovieScene_MovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};

// 0x70 (0x98 - 0x28)
// Class MovieScene.MovieSceneSequenceTickManager
class UMovieSceneSequenceTickManager : public UObject
{
public:
	uint8                                        Pad_936[0x70];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneSequenceTickManager* GetDefaultObj();

};

// 0x108 (0x1F8 - 0xF0)
// Class MovieScene.MovieSceneBoolSection
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	bool                                         DefaultValue;                                      // 0xF0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_942[0x7];                                      // Fixing Size After Last Property  
	struct MovieScene_MovieSceneBoolChannel      BoolCurve;                                         // 0xF8(0x100)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneBoolSection* GetDefaultObj();

};

// 0x18 (0x108 - 0xF0)
// Class MovieScene.MovieSceneHookSection
class UMovieSceneHookSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_94C[0x10];                                     // Fixing Size After Last Property  
	uint8                                        bRequiresRangedHook : 1;                           // Mask: 0x1, PropSize: 0x10x100(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRequiresTriggerHooks : 1;                         // Mask: 0x2, PropSize: 0x10x100(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_94F[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneHookSection* GetDefaultObj();

};

// 0x8 (0x200 - 0x1F8)
// Class MovieScene.MovieSceneSpawnSection
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:
	uint8                                        Pad_95A[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMovieSceneSpawnSection* GetDefaultObj();

};

// 0x48 (0x138 - 0xF0)
// Class MovieScene.MovieSceneSubSection
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_975[0x8];                                      // Fixing Size After Last Property  
	struct MovieScene_MovieSceneSectionParameters Parameters;                                        // 0xF8(0x28)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	float                                        StartOffset;                                       // 0x120(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Timescale;                                         // 0x124(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PrerollTime;                                       // 0x128(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        NetworkMask;                                       // 0x12C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_97A[0x3];                                      // Fixing Size After Last Property  
	class UMovieSceneSequence*                   SubSequence;                                       // 0x130(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneSubSection* GetDefaultObj();

	void SetSequence(class UMovieSceneSequence* Sequence);
	class UMovieSceneSequence* GetSequence();
};

// 0x20 (0xB8 - 0x98)
// Class MovieScene.TestMovieSceneTrack
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:
	uint8                                        Pad_980[0x8];                                      // Fixing Size After Last Property  
	bool                                         bHighPassFilter;                                   // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_982[0x7];                                      // Fixing Size After Last Property  
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0xA8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTestMovieSceneTrack* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MovieScene.TestMovieSceneSection
class UTestMovieSceneSection : public UMovieSceneSection
{
public:

	static class UClass* StaticClass();
	static class UTestMovieSceneSection* GetDefaultObj();

};

// 0x8 (0x70 - 0x68)
// Class MovieScene.TestMovieSceneSequence
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTestMovieSceneSequence* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class MovieScene.MovieSceneSubTrack
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneSubTrack* GetDefaultObj();

};

// 0x10 (0xB8 - 0xA8)
// Class MovieScene.TestMovieSceneSubTrack
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
public:
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0xA8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTestMovieSceneSubTrack* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class MovieScene.TestMovieSceneSubSection
class UTestMovieSceneSubSection : public UMovieSceneSubSection
{
public:

	static class UClass* StaticClass();
	static class UTestMovieSceneSubSection* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class MovieScene.TestMovieSceneEvalHookTrack
class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTestMovieSceneEvalHookTrack* GetDefaultObj();

};

// 0x18 (0x120 - 0x108)
// Class MovieScene.TestMovieSceneEvalHookSection
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
{
public:
	uint8                                        Pad_9BB[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTestMovieSceneEvalHookSection* GetDefaultObj();

};

// 0x20 (0xB8 - 0x98)
// Class MovieScene.MovieSceneSpawnTrack
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct CoreUObject_Guid                      ObjectGuid;                                        // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneSpawnTrack* GetDefaultObj();

};

}


