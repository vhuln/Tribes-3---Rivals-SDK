#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x2 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceCameraSettings
struct LevelSequence_LevelSequenceCameraSettings
{
public:
	bool                                         bOverrideAspectRatioAxisConstraint;                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAspectRatioAxisConstraint        AspectRatioAxisConstraint;                         // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
struct LevelSequence_LevelSequenceLegacyObjectReference
{
public:
	uint8                                        Pad_6B[0x20];                                      // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
struct LevelSequence_LevelSequenceObjectReferenceMap
{
public:
	uint8                                        Pad_6C[0x50];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LevelSequence.BoundActorProxy
struct LevelSequence_BoundActorProxy
{
public:
	uint8                                        Pad_6D[0x1];                                       // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
struct LevelSequence_LevelSequenceAnimSequenceLinkItem
{
public:
	struct CoreUObject_Guid                      SkelTrackGuid;                                     // 0x0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftObjectPath            PathToAnimSequence;                                // 0x10(0x20)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportTransforms;                                 // 0x30(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportMorphTargets;                               // 0x31(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportAttributeCurves;                            // 0x32(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExportMaterialCurves;                             // 0x33(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimInterpolationType            Interpolation;                                     // 0x34(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveInterpMode              CurveInterpolation;                                // 0x35(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecordInWorldSpace;                               // 0x36(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEvaluateAllSkeletalMeshComponents;                // 0x37(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReference
struct LevelSequence_LevelSequenceBindingReference
{
public:
	class FString                                PackageName;                                       // 0x0(0x10)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_SoftObjectPath            ExternalObjectPath;                                // 0x10(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ObjectPath;                                        // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
struct LevelSequence_LevelSequenceBindingReferenceArray
{
public:
	TArray<struct LevelSequence_LevelSequenceBindingReference> References;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceBindingReferences
struct LevelSequence_LevelSequenceBindingReferences
{
public:
	TMap<struct CoreUObject_Guid, struct LevelSequence_LevelSequenceBindingReferenceArray> BindingIdToReferences;                             // 0x0(0x50)(NativeAccessSpecifierPrivate)
	TSet<struct CoreUObject_Guid>                AnimSequenceInstances;                             // 0x50(0x50)(NativeAccessSpecifierPrivate)
	TSet<struct CoreUObject_Guid>                PostProcessInstances;                              // 0xA0(0x50)(NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LevelSequence.LevelSequenceObject
struct LevelSequence_LevelSequenceObject
{
public:
	TLazyObjectPtr<class UObject>                ObjectOrOwner;                                     // 0x0(0x18)(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ComponentName;                                     // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UObject>                CachedComponent;                                   // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
struct LevelSequence_LevelSequencePlayerSnapshot
{
public:
	class FString                                RootName;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_QualifiedFrameTime        RootTime;                                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_QualifiedFrameTime        SourceTime;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrentShotName;                                   // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_QualifiedFrameTime        CurrentShotLocalTime;                              // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_QualifiedFrameTime        CurrentShotSourceTime;                             // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceTimecode;                                    // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCameraComponent>       CameraComponent;                                   // 0x70(0x28)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, InstancedReference, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequence*                        ActiveShot;                                        // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneSequenceID       ShotID;                                            // 0xA0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_73[0x4];                                       // Fixing Size After Last Property  
	class FString                                MasterName;                                        // 0xA8(0x10)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_QualifiedFrameTime        MasterTime;                                        // 0xB8(0x10)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

}


