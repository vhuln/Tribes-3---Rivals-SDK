#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0xE8 - 0x68)
// Class TemplateSequence.TemplateSequence
class UTemplateSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class AActor>                  BoundActorClass;                                   // 0x70(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct CoreUObject_Guid, class FName>   BoundActorComponents;                              // 0x98(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTemplateSequence* GetDefaultObj();

};

// 0x0 (0xE8 - 0xE8)
// Class TemplateSequence.CameraAnimationSequence
class UCameraAnimationSequence : public UTemplateSequence
{
public:

	static class UClass* StaticClass();
	static class UCameraAnimationSequence* GetDefaultObj();

};

// 0x808 (0x830 - 0x28)
// Class TemplateSequence.CameraAnimationSequenceCameraStandIn
class UCameraAnimationSequenceCameraStandIn : public UObject
{
public:
	float                                        FieldOfView;                                       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bConstrainAspectRatio : 1;                         // Mask: 0x1, PropSize: 0x10x2C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4D : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_E4C[0x3];                                      // Fixing Size After Last Property  
	float                                        AspectRatio;                                       // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E4F[0xC];                                      // Fixing Size After Last Property  
	struct Engine_PostProcessSettings            PostProcessSettings;                               // 0x40(0x6E0)(NativeAccessSpecifierPublic)
	float                                        PostProcessBlendWeight;                            // 0x720(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CinematicCamera_CameraFilmbackSettings Filmback;                                          // 0x724(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct CinematicCamera_CameraLensSettings    LensSettings;                                      // 0x730(0x1C)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_E52[0x4];                                      // Fixing Size After Last Property  
	struct CinematicCamera_CameraFocusSettings   FocusSettings;                                     // 0x750(0x60)(NativeAccessSpecifierPublic)
	float                                        CurrentFocalLength;                                // 0x7B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentAperture;                                   // 0x7B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentFocusDistance;                              // 0x7B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5B[0x74];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCameraAnimationSequenceCameraStandIn* GetDefaultObj();

};

// 0x370 (0x398 - 0x28)
// Class TemplateSequence.CameraAnimationSequencePlayer
class UCameraAnimationSequencePlayer : public UObject
{
public:
	uint8                                        Pad_E63[0x270];                                    // Fixing Size After Last Property  
	class UObject*                               BoundObjectOverride;                               // 0x298(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSequence*                   Sequence;                                          // 0x2A0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x2A8(0x88)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E68[0x68];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCameraAnimationSequencePlayer* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class TemplateSequence.CameraAnimationSpawnableSystem
class UCameraAnimationSpawnableSystem : public UMovieSceneEntitySystem
{
public:

	static class UClass* StaticClass();
	static class UCameraAnimationSpawnableSystem* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class TemplateSequence.CameraAnimationBoundObjectInstantiator
class UCameraAnimationBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
public:

	static class UClass* StaticClass();
	static class UCameraAnimationBoundObjectInstantiator* GetDefaultObj();

};

// 0x0 (0x738 - 0x738)
// Class TemplateSequence.CameraAnimationEntitySystemLinker
class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker
{
public:

	static class UClass* StaticClass();
	static class UCameraAnimationEntitySystemLinker* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class TemplateSequence.CameraAnimationSequenceSubsystem
class UCameraAnimationSequenceSubsystem : public UWorldSubsystem
{
public:
	class UMovieSceneEntitySystemLinker*         Linker;                                            // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E82[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UCameraAnimationSequenceSubsystem* GetDefaultObj();

};

// 0x10 (0x148 - 0x138)
// Class TemplateSequence.TemplateSequenceSection
class UTemplateSequenceSection : public UMovieSceneSubSection
{
public:
	TArray<struct TemplateSequence_TemplateSectionPropertyScale> PropertyScales;                                    // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTemplateSequenceSection* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class TemplateSequence.SequenceCameraShakePattern
class USequenceCameraShakePattern : public UCameraShakePattern
{
public:
	class UCameraAnimationSequence*              Sequence;                                          // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomSegmentDuration;                             // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomSegment;                                    // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8F[0x3];                                      // Fixing Size After Last Property  
	class UCameraAnimationSequencePlayer*        Player;                                            // 0x48(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCameraAnimationSequenceCameraStandIn* CameraStandIn;                                     // 0x50(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E91[0x20];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USequenceCameraShakePattern* GetDefaultObj();

};

// 0x70 (0xB0 - 0x40)
// Class TemplateSequence.TemplateSequenceSystem
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_E98[0x70];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTemplateSequenceSystem* GetDefaultObj();

};

// 0x58 (0x98 - 0x40)
// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_EA2[0x58];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTemplateSequencePropertyScalingInstantiatorSystem* GetDefaultObj();

};

// 0x50 (0x90 - 0x40)
// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{
public:
	uint8                                        Pad_EA6[0x50];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTemplateSequencePropertyScalingEvaluatorSystem* GetDefaultObj();

};

// 0x60 (0x2F8 - 0x298)
// Class TemplateSequence.TemplateSequenceActor
class ATemplateSequenceActor : public AActor
{
public:
	uint8                                        Pad_EE3[0x8];                                      // Fixing Size After Last Property  
	struct MovieScene_MovieSceneSequencePlaybackSettings PlaybackSettings;                                  // 0x2A0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class UTemplateSequencePlayer*               SequencePlayer;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftObjectPath            TemplateSequence;                                  // 0x2C8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct TemplateSequence_TemplateSequenceBindingOverrideData BindingOverride;                                   // 0x2E8(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_EED[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ATemplateSequenceActor* GetDefaultObj();

	void SetSequence(class UTemplateSequence* InSequence);
	void SetBinding(class AActor* Actor, bool bOverridesDefault);
	class UTemplateSequence* LoadSequence();
	class UTemplateSequencePlayer* GetSequencePlayer();
	class UTemplateSequence* GetSequence();
};

// 0x8 (0x4D0 - 0x4C8)
// Class TemplateSequence.TemplateSequencePlayer
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	uint8                                        Pad_F11[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UTemplateSequencePlayer* GetDefaultObj();

	class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct MovieScene_MovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor);
};

// 0x0 (0x28 - 0x28)
// Class TemplateSequence.SequenceCameraShakeTestUtil
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USequenceCameraShakeTestUtil* GetDefaultObj();

	bool GetPostProcessBlendCache(class APlayerController* PlayerController, int32 PPIndex, struct Engine_PostProcessSettings* OutPPSettings, float* OutPPBlendWeight);
	struct Engine_MinimalViewInfo GetLastFrameCameraCachePOV(class APlayerController* PlayerController);
	struct Engine_MinimalViewInfo GetCameraCachePOV(class APlayerController* PlayerController);
};

// 0x0 (0xA8 - 0xA8)
// Class TemplateSequence.TemplateSequenceTrack
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
public:

	static class UClass* StaticClass();
	static class UTemplateSequenceTrack* GetDefaultObj();

};

}


