#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xA0 - 0x28)
// Class LevelSequence.DefaultLevelSequenceInstanceData
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	uint8                                        Pad_0[0x8];                                        // Fixing Size After Last Property  
	class AActor*                                TransformOriginActor;                              // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1[0x8];                                        // Fixing Size After Last Property  
	struct CoreUObject_Transform                 TransformOrigin;                                   // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDefaultLevelSequenceInstanceData* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class LevelSequence.AnimSequenceLevelSequenceLink
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{
public:
	struct CoreUObject_Guid                      SkelTrackGuid;                                     // 0x28(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftObjectPath            PathToLevelSequence;                               // 0x38(0x20)(BlueprintVisible, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimSequenceLevelSequenceLink* GetDefaultObj();

};

// 0x1B8 (0x220 - 0x68)
// Class LevelSequence.LevelSequence
class ULevelSequence : public UMovieSceneSequence
{
public:
	uint8                                        Pad_5[0x8];                                        // Fixing Size After Last Property  
	class UMovieScene*                           MovieScene;                                        // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct LevelSequence_LevelSequenceObjectReferenceMap ObjectReferences;                                  // 0x78(0x50)(Protected, NativeAccessSpecifierProtected)
	struct LevelSequence_LevelSequenceBindingReferences BindingReferences;                                 // 0xC8(0xF0)(Protected, NativeAccessSpecifierProtected)
	TMap<class FString, struct LevelSequence_LevelSequenceObject> PossessedObjects;                                  // 0x1B8(0x50)(Deprecated, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UObject>                   DirectorClass;                                     // 0x208(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x210(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ULevelSequence* GetDefaultObj();

	void RemoveMetaDataByClass(TSubclassOf<class UObject> InClass);
	class UObject* FindOrAddMetaDataByClass(TSubclassOf<class UObject> InClass);
	class UObject* FindMetaDataByClass(TSubclassOf<class UObject> InClass);
	class UObject* CopyMetaData(class UObject* InMetaData);
};

// 0x0 (0x28 - 0x28)
// Class LevelSequence.LevelSequenceBurnInInitSettings
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULevelSequenceBurnInInitSettings* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class LevelSequence.LevelSequenceBurnInOptions
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                         bUseBurnIn;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B[0x7];                                        // Fixing Size After Last Property  
	struct CoreUObject_SoftClassPath             BurnInClass;                                       // 0x30(0x20)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInInitSettings*      Settings;                                          // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnInOptions* GetDefaultObj();

	void SetBurnIn(const struct CoreUObject_SoftClassPath& InBurnInClass);
};

// 0xA0 (0x338 - 0x298)
// Class LevelSequence.LevelSequenceActor
class ALevelSequenceActor : public AActor
{
public:
	uint8                                        Pad_3E[0x18];                                      // Fixing Size After Last Property  
	struct MovieScene_MovieSceneSequencePlaybackSettings PlaybackSettings;                                  // 0x2B0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class ULevelSequencePlayer*                  SequencePlayer;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                        LevelSequenceAsset;                                // 0x2D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct LevelSequence_LevelSequenceCameraSettings CameraSettings;                                    // 0x2E0(0x2)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Pad_40[0x6];                                       // Fixing Size After Last Property  
	class ULevelSequenceBurnInOptions*           BurnInOptions;                                     // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneBindingOverrides*           BindingOverrides;                                  // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x1, PropSize: 0x10x2F8(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideInstanceData : 1;                         // Mask: 0x2, PropSize: 0x10x2F8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReplicatePlayback : 1;                            // Mask: 0x4, PropSize: 0x10x2F8(0x1)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2 : 5;                                      // Fixing Bit-Field Size  
	uint8                                        Pad_43[0x7];                                       // Fixing Size After Last Property  
	class UObject*                               DefaultInstanceData;                               // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnIn*                  BurnInInstance;                                    // 0x308(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowBurnin;                                       // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_44[0x7];                                       // Fixing Size After Last Property  
	struct Engine_WorldPartitionResolveData      WorldPartitionResolveData;                         // 0x318(0x20)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ALevelSequenceActor* GetDefaultObj();

	void ShowBurnin();
	void SetSequence(class ULevelSequence* InSequence);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetBindingByTag(class FName BindingTag, TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
	void SetBinding(const struct MovieScene_MovieSceneObjectBindingID& Binding, TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct MovieScene_MovieSceneObjectBindingID& Binding);
	void RemoveBindingByTag(class FName Tag, class AActor* Actor);
	void RemoveBinding(const struct MovieScene_MovieSceneObjectBindingID& Binding, class AActor* Actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	void HideBurnin();
	class ULevelSequencePlayer* GetSequencePlayer();
	class ULevelSequence* GetSequence();
	TArray<struct MovieScene_MovieSceneObjectBindingID> FindNamedBindings(class FName Tag);
	struct MovieScene_MovieSceneObjectBindingID FindNamedBinding(class FName Tag);
	void AddBindingByTag(class FName BindingTag, class AActor* Actor, bool bAllowBindingsFromAsset);
	void AddBinding(const struct MovieScene_MovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};

// 0x0 (0x338 - 0x338)
// Class LevelSequence.ReplicatedLevelSequenceActor
class AReplicatedLevelSequenceActor : public ALevelSequenceActor
{
public:

	static class UClass* StaticClass();
	static class AReplicatedLevelSequenceActor* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class LevelSequence.LevelSequenceAnimSequenceLink
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{
public:
	TArray<struct LevelSequence_LevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;                                 // 0x28(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULevelSequenceAnimSequenceLink* GetDefaultObj();

};

// 0xD0 (0x390 - 0x2C0)
// Class LevelSequence.LevelSequenceBurnIn
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct LevelSequence_LevelSequencePlayerSnapshot FrameInformation;                                  // 0x2C0(0xC8)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x388(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ULevelSequenceBurnIn* GetDefaultObj();

	void SetSettings(class UObject* InSettings);
	TSubclassOf<class ULevelSequenceBurnInInitSettings> GetSettingsClass();
};

// 0x10 (0x38 - 0x28)
// Class LevelSequence.LevelSequenceDirector
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                  Player;                                            // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubSequenceID;                                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MovieScenePlayerIndex;                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULevelSequenceDirector* GetDefaultObj();

	void OnCreated();
	class UMovieSceneSequence* GetSequence();
	struct CoreUObject_QualifiedFrameTime GetRootSequenceTime();
	struct CoreUObject_QualifiedFrameTime GetMasterSequenceTime();
	struct CoreUObject_QualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(const struct MovieScene_MovieSceneObjectBindingID& ObjectBinding);
	class UObject* GetBoundObject(const struct MovieScene_MovieSceneObjectBindingID& ObjectBinding);
	TArray<class AActor*> GetBoundActors(const struct MovieScene_MovieSceneObjectBindingID& ObjectBinding);
	class AActor* GetBoundActor(const struct MovieScene_MovieSceneObjectBindingID& ObjectBinding);
};

// 0x0 (0xA8 - 0xA8)
// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:

	static class UClass* StaticClass();
	static class ULegacyLevelSequenceDirectorBlueprint* GetDefaultObj();

};

// 0x140 (0x608 - 0x4C8)
// Class LevelSequence.LevelSequencePlayer
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	FMulticastInlineDelegateProperty_            OnCameraCut;                                       // 0x4C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_61[0x130];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ULevelSequencePlayer* GetDefaultObj();

	class UCameraComponent* GetActiveCameraComponent();
	class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct MovieScene_MovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
};

// 0x30 (0x68 - 0x38)
// Class LevelSequence.LevelSequenceProjectSettings
class ULevelSequenceProjectSettings : public UDeveloperSettings
{
public:
	bool                                         bDefaultLockEngineToDisplayRate;                   // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_62[0x7];                                       // Fixing Size After Last Property  
	class FString                                DefaultDisplayRate;                                // 0x40(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultTickResolution;                             // 0x50(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUpdateClockSource                DefaultClockSource;                                // 0x60(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_64[0x7];                                       // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ULevelSequenceProjectSettings* GetDefaultObj();

};

// 0x28 (0x2C0 - 0x298)
// Class LevelSequence.LevelSequenceMediaController
class ALevelSequenceMediaController : public AActor
{
public:
	uint8                                        Pad_68[0x8];                                       // Fixing Size After Last Property  
	class ALevelSequenceActor*                   Sequence;                                          // 0x2A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaComponent*                       MediaComponent;                                    // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ServerStartTimeSeconds;                            // 0x2B0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6A[0xC];                                       // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ALevelSequenceMediaController* GetDefaultObj();

	void SynchronizeToServer(float DesyncThresholdSeconds);
	void Play();
	void OnRep_ServerStartTimeSeconds();
	class ALevelSequenceActor* GetSequence();
	class UMediaComponent* GetMediaComponent();
};

}


