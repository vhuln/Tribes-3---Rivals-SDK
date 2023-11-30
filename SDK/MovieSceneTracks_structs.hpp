#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMovieScene3DPathSection_Axis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NEG_X                          = 3,
	NEG_Y                          = 4,
	NEG_Z                          = 5,
	MovieScene3DPathSection_MAX    = 6,
};

enum class ELevelVisibility : uint8
{
	Visible                        = 0,
	Hidden                         = 1,
	ELevelVisibility_MAX           = 2,
};

enum class EParticleKey : uint8
{
	Activate                       = 0,
	Deactivate                     = 1,
	Trigger                        = 2,
	EParticleKey_MAX               = 3,
};

enum class EFireEventsAtPosition : uint8
{
	AtStartOfEvaluation            = 0,
	AtEndOfEvaluation              = 1,
	AfterSpawn                     = 2,
	EFireEventsAtPosition_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieSceneTracks.MovieScenePreAnimatedMaterialParameters
struct MovieSceneTracks_MovieScenePreAnimatedMaterialParameters
{
public:
	class UMaterialInterface*                    PreviousMaterial;                                  // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMaterialInterface>     SoftPreviousMaterial;                              // 0x8(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
struct MovieSceneTracks_MovieSceneCameraShakeSourceTrigger
{
public:
	TSubclassOf<class UCameraShakeBase>          ShakeClass;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayScale;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraShakePlaySpace             PlaySpace;                                         // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E95[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_Rotator                   UserDefinedPlaySpace;                              // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
struct MovieSceneTracks_MovieSceneCameraShakeSourceTriggerChannel : public MovieScene_MovieSceneChannel
{
public:
	TArray<struct CoreUObject_FrameNumber>       KeyTimes;                                          // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct MovieSceneTracks_MovieSceneCameraShakeSourceTrigger> KeyValues;                                         // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneKeyHandleMap     KeyHandles;                                        // 0x70(0x88)(Transient, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieSceneTracks.PerlinNoiseParams
struct MovieSceneTracks_PerlinNoiseParams
{
public:
	float                                        Frequency;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA9[0x4];                                      // Fixing Size After Last Property  
	double                                       Amplitude;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB4[0x4];                                      // Fixing Size Of Struct 
};

// 0x18 (0x68 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneDoublePerlinNoiseChannel
struct MovieSceneTracks_MovieSceneDoublePerlinNoiseChannel : public MovieScene_MovieSceneChannel
{
public:
	struct MovieSceneTracks_PerlinNoiseParams    PerlinNoiseParams;                                 // 0x50(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
struct MovieSceneTracks_MovieSceneEventPayloadVariable
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
struct MovieSceneTracks_MovieSceneEventPtrs
{
public:
	class UFunction*                             Function;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FFieldPathProperty_                          BoundObjectProperty;                               // 0x8(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEvent
struct MovieSceneTracks_MovieSceneEvent
{
public:
	struct MovieSceneTracks_MovieSceneEventPtrs  Ptrs;                                              // 0x0(0x28)(NativeAccessSpecifierPublic)
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
struct MovieSceneTracks_MovieSceneEventChannel : public MovieScene_MovieSceneChannel
{
public:
	TArray<struct CoreUObject_FrameNumber>       KeyTimes;                                          // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct MovieSceneTracks_MovieSceneEvent> KeyValues;                                         // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneKeyHandleMap     KeyHandles;                                        // 0x70(0x88)(Transient, NativeAccessSpecifierPrivate)
};

// 0x18 (0x68 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneFloatPerlinNoiseChannel
struct MovieSceneTracks_MovieSceneFloatPerlinNoiseChannel : public MovieScene_MovieSceneChannel
{
public:
	struct MovieSceneTracks_PerlinNoiseParams    PerlinNoiseParams;                                 // 0x50(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0x110 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
struct MovieSceneTracks_MovieSceneStringChannel : public MovieScene_MovieSceneChannel
{
public:
	TArray<struct CoreUObject_FrameNumber>       Times;                                             // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FString>                        Values;                                            // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                DefaultValue;                                      // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasDefaultValue;                                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EE0[0x7];                                      // Fixing Size After Last Property  
	struct MovieScene_MovieSceneKeyHandleMap     KeyHandles;                                        // 0x88(0x88)(Transient, NativeAccessSpecifierPrivate)
};

// 0x130 (0x150 - 0x20)
// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
struct MovieSceneTracks_MovieScene3DPathSectionTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	struct MovieScene_MovieSceneObjectBindingID  PathBindingID;                                     // 0x20(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     TimingCurve;                                       // 0x38(0x110)(NativeAccessSpecifierPublic)
	enum class EMovieScene3DPathSection_Axis     FrontAxisEnum;                                     // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieScene3DPathSection_Axis     UpAxisEnum;                                        // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EFA[0x2];                                      // Fixing Size After Last Property  
	uint8                                        bFollow : 1;                                       // Mask: 0x1, PropSize: 0x10x14C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x2, PropSize: 0x10x14C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bForceUpright : 1;                                 // Mask: 0x4, PropSize: 0x10x14C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F00[0x3];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
struct MovieSceneTracks_MovieSceneActorReferenceKey
{
public:
	struct MovieScene_MovieSceneObjectBindingID  Object;                                            // 0x0(0x18)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ComponentName;                                     // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0x120 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
struct MovieSceneTracks_MovieSceneActorReferenceData : public MovieScene_MovieSceneChannel
{
public:
	TArray<struct CoreUObject_FrameNumber>       KeyTimes;                                          // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct MovieSceneTracks_MovieSceneActorReferenceKey DefaultValue;                                      // 0x60(0x28)(NoDestructor, NativeAccessSpecifierPrivate)
	TArray<struct MovieSceneTracks_MovieSceneActorReferenceKey> KeyValues;                                         // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneKeyHandleMap     KeyHandles;                                        // 0x98(0x88)(Transient, NativeAccessSpecifierPrivate)
};

// 0x138 (0x158 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
struct MovieSceneTracks_MovieSceneActorReferenceSectionTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	struct MovieScene_MovieScenePropertySectionData PropertyData;                                      // 0x20(0x18)(NativeAccessSpecifierPrivate)
	struct MovieSceneTracks_MovieSceneActorReferenceData ActorReferenceData;                                // 0x38(0x120)(NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneBaseCacheSectionTemplateParameters
struct MovieSceneTracks_MovieSceneBaseCacheSectionTemplateParameters
{
public:
	struct CoreUObject_FrameNumber               SectionStartTime;                                  // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               SectionEndTime;                                    // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
struct MovieSceneTracks_MovieSceneCameraShakeSectionData
{
public:
	TSubclassOf<class UCameraShakeBase>          ShakeClass;                                        // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayScale;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECameraShakePlaySpace             PlaySpace;                                         // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F20[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_Rotator                   UserDefinedPlaySpace;                              // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x50 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
struct MovieSceneTracks_MovieSceneCameraShakeSourceShakeSectionTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	struct MovieSceneTracks_MovieSceneCameraShakeSectionData SourceData;                                        // 0x20(0x28)(NoDestructor, NativeAccessSpecifierPrivate)
	struct CoreUObject_FrameNumber               SectionStartTime;                                  // 0x48(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_FrameNumber               SectionEndTime;                                    // 0x4C(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x40 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
struct MovieSceneTracks_MovieSceneCameraShakeSourceTriggerSectionTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	TArray<struct CoreUObject_FrameNumber>       TriggerTimes;                                      // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct MovieSceneTracks_MovieSceneCameraShakeSourceTrigger> TriggerValues;                                     // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x30 (0x50 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
struct MovieSceneTracks_MovieSceneCameraShakeSectionTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	struct MovieSceneTracks_MovieSceneCameraShakeSectionData SourceData;                                        // 0x20(0x28)(NoDestructor, NativeAccessSpecifierPrivate)
	struct CoreUObject_FrameNumber               SectionStartTime;                                  // 0x48(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F31[0x4];                                      // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
struct MovieSceneTracks_MovieSceneEventParameters
{
public:
	uint8                                        Pad_F39[0x30];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieSceneTracks.EventPayload
struct MovieSceneTracks_EventPayload
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieSceneTracks_MovieSceneEventParameters Parameters;                                        // 0x8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
struct MovieSceneTracks_MovieSceneEventSectionData : public MovieScene_MovieSceneChannel
{
public:
	TArray<struct CoreUObject_FrameNumber>       Times;                                             // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct MovieSceneTracks_EventPayload> KeyValues;                                         // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneKeyHandleMap     KeyHandles;                                        // 0x70(0x88)(Transient, NativeAccessSpecifierPrivate)
};

// 0x100 (0x120 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
struct MovieSceneTracks_MovieSceneEventSectionTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	struct MovieSceneTracks_MovieSceneEventSectionData EventData;                                         // 0x20(0xF8)(NativeAccessSpecifierPublic)
	uint8                                        bFireEventsWhenForwards : 1;                       // Mask: 0x1, PropSize: 0x10x118(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFireEventsWhenBackwards : 1;                      // Mask: 0x2, PropSize: 0x10x118(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F45[0x7];                                      // Fixing Size Of Struct 
};

// 0x130 (0x168 - 0x38)
// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
struct MovieSceneTracks_MovieSceneObjectPropertyTemplate : public MovieScene_MovieScenePropertySectionTemplate
{
public:
	struct MovieScene_MovieSceneObjectPathChannel ObjectChannel;                                     // 0x38(0x130)(NativeAccessSpecifierPrivate)
};

// 0x338 (0x338 - 0x0)
// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
struct MovieSceneTracks_VectorParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     XCurve;                                            // 0x8(0x110)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     YCurve;                                            // 0x118(0x110)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     ZCurve;                                            // 0x228(0x110)(NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
struct MovieSceneTracks_ScalarParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     ParameterCurve;                                    // 0x8(0x110)(NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
struct MovieSceneTracks_BoolParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneBoolChannel      ParameterCurve;                                    // 0x8(0x100)(NativeAccessSpecifierPublic)
};

// 0x228 (0x228 - 0x0)
// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
struct MovieSceneTracks_Vector2DParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     XCurve;                                            // 0x8(0x110)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     YCurve;                                            // 0x118(0x110)(NativeAccessSpecifierPublic)
};

// 0x448 (0x448 - 0x0)
// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
struct MovieSceneTracks_ColorParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     RedCurve;                                          // 0x8(0x110)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     GreenCurve;                                        // 0x118(0x110)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     BlueCurve;                                         // 0x228(0x110)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     AlphaCurve;                                        // 0x338(0x110)(NativeAccessSpecifierPublic)
};

// 0x998 (0x998 - 0x0)
// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
struct MovieSceneTracks_TransformParameterNameAndCurves
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     Translation[0x3];                                  // 0x8(0x330)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     Rotation[0x3];                                     // 0x338(0x330)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     Scale[0x3];                                        // 0x668(0x330)(NativeAccessSpecifierPublic)
};

// 0x60 (0x80 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
struct MovieSceneTracks_MovieSceneParameterSectionTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	TArray<struct MovieSceneTracks_ScalarParameterNameAndCurve> Scalars;                                           // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct MovieSceneTracks_BoolParameterNameAndCurve> Bools;                                             // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct MovieSceneTracks_Vector2DParameterNameAndCurves> Vector2Ds;                                         // 0x40(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct MovieSceneTracks_VectorParameterNameAndCurves> Vectors;                                           // 0x50(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct MovieSceneTracks_ColorParameterNameAndCurves> Colors;                                            // 0x60(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct MovieSceneTracks_TransformParameterNameAndCurves> Transforms;                                        // 0x70(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x0 (0x80 - 0x80)
// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
struct MovieSceneTracks_MovieSceneParticleParameterSectionTemplate : public MovieSceneTracks_MovieSceneParameterSectionTemplate
{
public:
};

// 0x0 (0x108 - 0x108)
// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
struct MovieSceneTracks_MovieSceneParticleChannel : public MovieScene_MovieSceneByteChannel
{
public:
};

// 0x108 (0x128 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
struct MovieSceneTracks_MovieSceneParticleSectionTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	struct MovieSceneTracks_MovieSceneParticleChannel ParticleKeys;                                      // 0x20(0x108)(NativeAccessSpecifierPublic)
};

// 0x100 (0x138 - 0x38)
// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
struct MovieSceneTracks_MovieSceneBoolPropertySectionTemplate : public MovieScene_MovieScenePropertySectionTemplate
{
public:
	struct MovieScene_MovieSceneBoolChannel      BoolCurve;                                         // 0x38(0x100)(Protected, NativeAccessSpecifierProtected)
};

// 0x110 (0x130 - 0x20)
// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
struct MovieSceneTracks_MovieSceneSlomoSectionTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	struct MovieScene_MovieSceneFloatChannel     SlomoCurve;                                        // 0x20(0x110)(NativeAccessSpecifierPrivate)
};

// 0x0 (0x138 - 0x138)
// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
struct MovieSceneTracks_MovieSceneVisibilitySectionTemplate : public MovieSceneTracks_MovieSceneBoolPropertySectionTemplate
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.LevelVisibilityComponentData
struct MovieSceneTracks_LevelVisibilityComponentData
{
public:
	class UMovieSceneLevelVisibilitySection*     Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneDataLayerComponentData
struct MovieSceneTracks_MovieSceneDataLayerComponentData
{
public:
	class UMovieSceneDataLayerSection*           Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneTracks.ConstraintComponentData
struct MovieSceneTracks_ConstraintComponentData
{
public:
	class FName                                  ConstraintName;                                    // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FAF[0x8];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationComponentData
struct MovieSceneTracks_MovieSceneSkeletalAnimationComponentData
{
public:
	class UMovieSceneSkeletalAnimationSection*   Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneAudioComponentData
struct MovieSceneTracks_MovieSceneAudioComponentData
{
public:
	class UMovieSceneAudioSection*               Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneAudioInputData
struct MovieSceneTracks_MovieSceneAudioInputData
{
public:
	class FName                                  FloatInputs[0x9];                                  // 0x0(0x48)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StringInput;                                       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoolInput;                                         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IntInput;                                          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
struct MovieSceneTracks_MovieScene3DLocationKeyStruct : public MovieScene_MovieSceneKeyStruct
{
public:
	struct CoreUObject_Vector                    Location;                                          // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               Time;                                              // 0x20(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD3[0x1C];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
struct MovieSceneTracks_MovieScene3DRotationKeyStruct : public MovieScene_MovieSceneKeyStruct
{
public:
	struct CoreUObject_Rotator                   Rotation;                                          // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               Time;                                              // 0x20(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FDF[0x1C];                                     // Fixing Size Of Struct 
};

// 0x28 (0x30 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
struct MovieSceneTracks_MovieScene3DScaleKeyStruct : public MovieScene_MovieSceneKeyStruct
{
public:
	struct CoreUObject_Vector3f                  Scale;                                             // 0x8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               Time;                                              // 0x14(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE7[0x18];                                     // Fixing Size Of Struct 
};

// 0x58 (0x60 - 0x8)
// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
struct MovieSceneTracks_MovieScene3DTransformKeyStruct : public MovieScene_MovieSceneKeyStruct
{
public:
	struct CoreUObject_Vector                    Location;                                          // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Rotation;                                          // 0x20(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector3f                  Scale;                                             // 0x38(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               Time;                                              // 0x44(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF6[0x18];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
struct MovieSceneTracks_MovieSceneTransformMask
{
public:
	uint32                                       Mask;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneBaseCacheParams
struct MovieSceneTracks_MovieSceneBaseCacheParams
{
public:
	uint8                                        Pad_FFF[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_FrameNumber               FirstLoopStartFrameOffset;                         // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               StartFrameOffset;                                  // 0xC(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               EndFrameOffset;                                    // 0x10(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1000[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x38 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
struct MovieSceneTracks_MovieSceneColorKeyStruct : public MovieScene_MovieSceneKeyStruct
{
public:
	struct CoreUObject_LinearColor               Color;                                             // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               Time;                                              // 0x18(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1009[0x1C];                                    // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneConsoleVariableCollection
struct MovieSceneTracks_MovieSceneConsoleVariableCollection
{
public:
	TScriptInterface<class IMovieSceneConsoleVariableTrackInterface> Interface;                                         // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyIncludeChecked;                               // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_100F[0x7];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneCVarOverrides
struct MovieSceneTracks_MovieSceneCVarOverrides
{
public:
	TMap<class FString, class FString>           ValuesByCVar;                                      // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
struct MovieSceneTracks_MovieSceneSkeletalAnimationParams
{
public:
	class UAnimSequenceBase*                     Animation;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               FirstLoopStartFrameOffset;                         // 0x8(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               StartFrameOffset;                                  // 0xC(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               EndFrameOffset;                                    // 0x10(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_57 : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_1027[0x3];                                     // Fixing Size After Last Property  
	class FName                                  SlotName;                                          // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1028[0x4];                                     // Fixing Size After Last Property  
	class UMirrorDataTable*                      MirrorDataTable;                                   // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     Weight;                                            // 0x30(0x110)(NativeAccessSpecifierPublic)
	bool                                         bSkipAnimNotifiers;                                // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceCustomMode;                                  // 0x141(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESwapRootBone                     SwapRootBone;                                      // 0x142(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1030[0x1];                                     // Fixing Size After Last Property  
	float                                        StartOffset;                                       // 0x144(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndOffset;                                         // 0x148(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1031[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneFloatVectorKeyStructBase
struct MovieSceneTracks_MovieSceneFloatVectorKeyStructBase : public MovieScene_MovieSceneKeyStruct
{
public:
	struct CoreUObject_FrameNumber               Time;                                              // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1036[0x1C];                                    // Fixing Size Of Struct 
};

// 0x8 (0x30 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector2fKeyStruct
struct MovieSceneTracks_MovieSceneVector2fKeyStruct : public MovieSceneTracks_MovieSceneFloatVectorKeyStructBase
{
public:
	struct CoreUObject_Vector2f                  Vector;                                            // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector3fKeyStruct
struct MovieSceneTracks_MovieSceneVector3fKeyStruct : public MovieSceneTracks_MovieSceneFloatVectorKeyStructBase
{
public:
	struct CoreUObject_Vector3f                  Vector;                                            // 0x28(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1052[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x40 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector4fKeyStruct
struct MovieSceneTracks_MovieSceneVector4fKeyStruct : public MovieSceneTracks_MovieSceneFloatVectorKeyStructBase
{
public:
	uint8                                        Pad_1056[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector4f                  Vector;                                            // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct MovieSceneTracks.MovieSceneDoubleVectorKeyStructBase
struct MovieSceneTracks_MovieSceneDoubleVectorKeyStructBase : public MovieScene_MovieSceneKeyStruct
{
public:
	struct CoreUObject_FrameNumber               Time;                                              // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1067[0x1C];                                    // Fixing Size Of Struct 
};

// 0x10 (0x38 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
struct MovieSceneTracks_MovieSceneVector2DKeyStruct : public MovieSceneTracks_MovieSceneDoubleVectorKeyStructBase
{
public:
	struct CoreUObject_Vector2D                  Vector;                                            // 0x28(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector3dKeyStruct
struct MovieSceneTracks_MovieSceneVector3dKeyStruct : public MovieSceneTracks_MovieSceneDoubleVectorKeyStructBase
{
public:
	struct CoreUObject_Vector3d                  Vector;                                            // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct MovieSceneTracks.MovieSceneVector4dKeyStruct
struct MovieSceneTracks_MovieSceneVector4dKeyStruct : public MovieSceneTracks_MovieSceneDoubleVectorKeyStructBase
{
public:
	uint8                                        Pad_108A[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector4d                  Vector;                                            // 0x30(0x20)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerData
struct MovieSceneTracks_MovieSceneEventTriggerData
{
public:
	struct MovieSceneTracks_MovieSceneEventPtrs  Ptrs;                                              // 0x0(0x28)(NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ObjectBindingID;                                   // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1094[0x10];                                    // Fixing Size Of Struct 
};

// 0x80 (0x80 - 0x0)
// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
struct MovieSceneTracks_MovieSceneSkeletalAnimRootMotionTrackParams
{
public:
	uint8                                        Pad_1099[0x80];                                    // Fixing Size Of Struct 
};

}


