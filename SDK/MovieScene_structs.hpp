#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMovieSceneKeyInterpolation : uint8
{
	Auto                           = 0,
	User                           = 1,
	Break                          = 2,
	Linear                         = 3,
	Constant                       = 4,
	SmartAuto                      = 5,
	EMovieSceneKeyInterpolation_MAX = 6,
};

enum class EMovieSceneCompletionMode : uint8
{
	KeepState                      = 0,
	RestoreState                   = 1,
	ProjectDefault                 = 2,
	EMovieSceneCompletionMode_MAX  = 3,
};

enum class EMovieScenePlayerStatus : uint8
{
	Stopped                        = 0,
	Playing                        = 1,
	Scrubbing                      = 2,
	Jumping                        = 3,
	Stepping                       = 4,
	Paused                         = 5,
	MAX                            = 6,
};

enum class EMovieSceneEvaluationType : uint8
{
	FrameLocked                    = 0,
	WithSubFrames                  = 1,
	EMovieSceneEvaluationType_MAX  = 2,
};

enum class EUpdateClockSource : uint8
{
	Tick                           = 0,
	Platform                       = 1,
	Audio                          = 2,
	RelativeTimecode               = 3,
	Timecode                       = 4,
	PlayEveryFrame                 = 5,
	Custom                         = 6,
	EUpdateClockSource_MAX         = 7,
};

enum class EMovieSceneSequenceFlags : uint8
{
	None                           = 0,
	Volatile                       = 1,
	BlockingEvaluation             = 2,
	DynamicWeighting               = 4,
	InheritedFlags                 = 1,
	EMovieSceneSequenceFlags_MAX   = 5,
};

enum class EMovieSceneServerClientMask : uint8
{
	None                           = 0,
	Server                         = 1,
	Client                         = 2,
	All                            = 3,
	EMovieSceneServerClientMask_MAX = 4,
};

enum class EMovieSceneSubSectionFlags : int32
{
	None                           = 0,
	OverrideKeepState              = 1,
	OverrideRestoreState           = 2,
	IgnoreHierarchicalBias         = 4,
	BlendHierarchicalBias          = 8,
	AnyRestoreStateOverride        = 3,
	EMovieSceneSubSectionFlags_MAX = 9,
};

enum class ESectionEvaluationFlags : uint8
{
	None                           = 0,
	PreRoll                        = 1,
	PostRoll                       = 2,
	ForceKeepState                 = 4,
	ForceRestoreState              = 8,
	ESectionEvaluationFlags_MAX    = 9,
};

enum class EMovieSceneBlendType : uint8
{
	Invalid                        = 0,
	Absolute                       = 1,
	Additive                       = 2,
	Relative                       = 4,
	AdditiveFromBase               = 8,
	EMovieSceneBlendType_MAX       = 9,
};

enum class EEvaluationMethod : uint8
{
	Static                         = 0,
	Swept                          = 1,
	EEvaluationMethod_MAX          = 2,
};

enum class EMovieSceneBuiltInEasing : uint8
{
	Linear                         = 0,
	SinIn                          = 1,
	SinOut                         = 2,
	SinInOut                       = 3,
	QuadIn                         = 4,
	QuadOut                        = 5,
	QuadInOut                      = 6,
	Cubic                          = 7,
	CubicIn                        = 8,
	CubicOut                       = 9,
	CubicInOut                     = 10,
	HermiteCubicInOut              = 11,
	QuartIn                        = 12,
	QuartOut                       = 13,
	QuartInOut                     = 14,
	QuintIn                        = 15,
	QuintOut                       = 16,
	QuintInOut                     = 17,
	ExpoIn                         = 18,
	ExpoOut                        = 19,
	ExpoInOut                      = 20,
	CircIn                         = 21,
	CircOut                        = 22,
	CircInOut                      = 23,
	Custom                         = 24,
	EMovieSceneBuiltInEasing_MAX   = 25,
};

enum class EMovieSceneObjectBindingSpace : uint8
{
	Local                          = 0,
	Root                           = 1,
	Unused                         = 2,
	EMovieSceneObjectBindingSpace_MAX = 3,
};

enum class EUpdatePositionMethod : uint8
{
	Play                           = 0,
	Jump                           = 1,
	Scrub                          = 2,
	EUpdatePositionMethod_MAX      = 3,
};

enum class EMovieScenePositionType : uint8
{
	Frame                          = 0,
	Time                           = 1,
	MarkedFrame                    = 2,
	EMovieScenePositionType_MAX    = 3,
};

enum class ESpawnOwnership : uint8
{
	InnerSequence                  = 0,
	RootSequence                   = 1,
	External                       = 2,
	ESpawnOwnership_MAX            = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.ActorForWorldTransforms
struct MovieScene_ActorForWorldTransforms
{
public:
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>        Component;                                         // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneDeterminismData
struct MovieScene_MovieSceneDeterminismData
{
public:
	TArray<struct CoreUObject_FrameTime>         Fences;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bParentSequenceRequiresLowerFence;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentSequenceRequiresUpperFence;                 // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9EE[0x6];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneEmptyStruct
struct MovieScene_MovieSceneEmptyStruct
{
public:
	uint8                                        Pad_9F0[0x1];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
struct MovieScene_MovieSceneEvalTemplateBase
{
public:
	uint8                                        Pad_9F3[0x10];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceID
struct MovieScene_MovieSceneSequenceID
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackIdentifier
struct MovieScene_MovieSceneTrackIdentifier
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationKey
struct MovieScene_MovieSceneEvaluationKey
{
public:
	struct MovieScene_MovieSceneSequenceID       SequenceID;                                        // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneTrackIdentifier  TrackIdentifier;                                   // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SectionIndex;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationOperand
struct MovieScene_MovieSceneEvaluationOperand
{
public:
	struct CoreUObject_Guid                      ObjectBindingID;                                   // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneSequenceID       SequenceID;                                        // 0x10(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneKeyStruct
struct MovieScene_MovieSceneKeyStruct
{
public:
	uint8                                        Pad_A05[0x8];                                      // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
struct MovieScene_GeneratedMovieSceneKeyStruct
{
public:
	uint8                                        Pad_A0A[0x50];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
struct MovieScene_MovieSceneKeyTimeStruct : public MovieScene_MovieSceneKeyStruct
{
public:
	struct CoreUObject_FrameNumber               Time;                                              // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0E[0x1C];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieScenePropertyBinding
struct MovieScene_MovieScenePropertyBinding
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyPath;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanUseClassLookup;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A12[0x3];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionParameters
struct MovieScene_MovieSceneSectionParameters
{
public:
	struct CoreUObject_FrameNumber               StartFrameOffset;                                  // 0x0(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanLoop;                                          // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A18[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_FrameNumber               EndFrameOffset;                                    // 0x8(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               FirstLoopStartFrameOffset;                         // 0xC(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timescale;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HierarchicalBias;                                  // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieSceneSubSectionFlags        Flags;                                             // 0x18(0x4)(BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartOffset;                                       // 0x1C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrerollTime;                                       // 0x20(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostrollTime;                                      // 0x24(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
struct MovieScene_MovieSceneSegmentIdentifier
{
public:
	int32                                        IdentifierIndex;                                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.SectionEvaluationData
struct MovieScene_SectionEvaluationData
{
public:
	int32                                        ImplIndex;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               ForcedTime;                                        // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A23[0x3];                                      // Fixing Size Of Struct 
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MovieScene.MovieSceneSegment
struct MovieScene_MovieSceneSegment
{
public:
	uint8                                        Pad_A26[0x58];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
struct MovieScene_MovieSceneSequenceLoopCount
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceTickInterval
struct MovieScene_MovieSceneSequenceTickInterval
{
public:
	float                                        TickIntervalSeconds;                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EvaluationBudgetMicroseconds;                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTickWhenPaused;                                   // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRounding;                                    // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A38[0x2];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
struct MovieScene_MovieSceneSequencePlaybackSettings
{
public:
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_40 : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_A3C[0x3];                                      // Fixing Size After Last Property  
	struct MovieScene_MovieSceneSequenceLoopCount LoopCount;                                         // 0x4(0x4)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneSequenceTickInterval TickInterval;                                      // 0x8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRandomStartTime : 1;                              // Mask: 0x1, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRestoreState : 1;                                 // Mask: 0x2, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableMovementInput : 1;                         // Mask: 0x4, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableLookAtInput : 1;                           // Mask: 0x8, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHidePlayer : 1;                                   // Mask: 0x10, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHideHud : 1;                                      // Mask: 0x20, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableCameraCuts : 1;                            // Mask: 0x40, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPauseAtEnd : 1;                                   // Mask: 0x80, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritTickIntervalFromOwner : 1;                 // Mask: 0x1, PropSize: 0x10x1D(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDynamicWeighting : 1;                             // Mask: 0x2, PropSize: 0x10x1D(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4A[0x2];                                      // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneTimeTransform
struct MovieScene_MovieSceneTimeTransform
{
public:
	float                                        Timescale;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameTime                 Offset;                                            // 0x4(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieScene.MovieSceneChannel
struct MovieScene_MovieSceneChannel
{
public:
	uint8                                        Pad_A53[0x50];                                     // Fixing Size Of Struct 
};

// 0x0 (0x88 - 0x88)
// ScriptStruct MovieScene.MovieSceneKeyHandleMap
struct MovieScene_MovieSceneKeyHandleMap : public Engine_KeyHandleLookupTable
{
public:
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieScene.MovieSceneAudioTriggerChannel
struct MovieScene_MovieSceneAudioTriggerChannel : public MovieScene_MovieSceneChannel
{
public:
	TArray<struct CoreUObject_FrameNumber>       Times;                                             // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<bool>                                 Values;                                            // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneKeyHandleMap     KeyHandles;                                        // 0x70(0x88)(Transient, NativeAccessSpecifierPrivate)
};

// 0xB0 (0x100 - 0x50)
// ScriptStruct MovieScene.MovieSceneBoolChannel
struct MovieScene_MovieSceneBoolChannel : public MovieScene_MovieSceneChannel
{
public:
	TArray<struct CoreUObject_FrameNumber>       Times;                                             // 0x50(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         DefaultValue;                                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasDefaultValue;                                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A5C[0x6];                                      // Fixing Size After Last Property  
	TArray<bool>                                 Values;                                            // 0x68(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct MovieScene_MovieSceneKeyHandleMap     KeyHandles;                                        // 0x78(0x88)(Transient, Protected, NativeAccessSpecifierProtected)
};

// 0xB8 (0x108 - 0x50)
// ScriptStruct MovieScene.MovieSceneByteChannel
struct MovieScene_MovieSceneByteChannel : public MovieScene_MovieSceneChannel
{
public:
	TArray<struct CoreUObject_FrameNumber>       Times;                                             // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        DefaultValue;                                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasDefaultValue;                                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A62[0x6];                                      // Fixing Size After Last Property  
	TArray<uint8>                                Values;                                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UEnum*                                 Enum;                                              // 0x78(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneKeyHandleMap     KeyHandles;                                        // 0x80(0x88)(Transient, NativeAccessSpecifierPrivate)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneTangentData
struct MovieScene_MovieSceneTangentData
{
public:
	float                                        ArriveTangent;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangent;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArriveTangentWeight;                               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangentWeight;                                // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveTangentWeightMode       TangentWeightMode;                                 // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6A[0x3];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneDoubleValue
struct MovieScene_MovieSceneDoubleValue
{
public:
	double                                       Value;                                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneTangentData      Tangent;                                           // 0x8(0x14)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERichCurveInterpMode              InterpMode;                                        // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveTangentMode             TangentMode;                                       // 0x1D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PaddingByte;                                       // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A71[0x1];                                      // Fixing Size Of Struct 
};

// 0xC8 (0x118 - 0x50)
// ScriptStruct MovieScene.MovieSceneDoubleChannel
struct MovieScene_MovieSceneDoubleChannel : public MovieScene_MovieSceneChannel
{
public:
	enum class ERichCurveExtrapolation           PreInfinityExtrap;                                 // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveExtrapolation           PostInfinityExtrap;                                // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A74[0x6];                                      // Fixing Size After Last Property  
	TArray<struct CoreUObject_FrameNumber>       Times;                                             // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct MovieScene_MovieSceneDoubleValue> Values;                                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	double                                       DefaultValue;                                      // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasDefaultValue;                                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A7B[0x7];                                      // Fixing Size After Last Property  
	struct MovieScene_MovieSceneKeyHandleMap     KeyHandles;                                        // 0x88(0x88)(Transient, NativeAccessSpecifierPrivate)
	struct CoreUObject_FrameRate                 TickResolution;                                    // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct MovieScene.MovieSceneFloatValue
struct MovieScene_MovieSceneFloatValue
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneTangentData      Tangent;                                           // 0x4(0x14)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERichCurveInterpMode              InterpMode;                                        // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveTangentMode             TangentMode;                                       // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PaddingByte;                                       // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A85[0x1];                                      // Fixing Size Of Struct 
};

// 0xC0 (0x110 - 0x50)
// ScriptStruct MovieScene.MovieSceneFloatChannel
struct MovieScene_MovieSceneFloatChannel : public MovieScene_MovieSceneChannel
{
public:
	enum class ERichCurveExtrapolation           PreInfinityExtrap;                                 // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveExtrapolation           PostInfinityExtrap;                                // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8B[0x6];                                      // Fixing Size After Last Property  
	TArray<struct CoreUObject_FrameNumber>       Times;                                             // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct MovieScene_MovieSceneFloatValue> Values;                                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	float                                        DefaultValue;                                      // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasDefaultValue;                                  // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A8C[0x3];                                      // Fixing Size After Last Property  
	struct MovieScene_MovieSceneKeyHandleMap     KeyHandles;                                        // 0x80(0x88)(Transient, NativeAccessSpecifierPrivate)
	struct CoreUObject_FrameRate                 TickResolution;                                    // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xB0 (0x100 - 0x50)
// ScriptStruct MovieScene.MovieSceneIntegerChannel
struct MovieScene_MovieSceneIntegerChannel : public MovieScene_MovieSceneChannel
{
public:
	TArray<struct CoreUObject_FrameNumber>       Times;                                             // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        DefaultValue;                                      // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasDefaultValue;                                  // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A96[0x3];                                      // Fixing Size After Last Property  
	TArray<int32>                                Values;                                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneKeyHandleMap     KeyHandles;                                        // 0x78(0x88)(Transient, NativeAccessSpecifierPrivate)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
struct MovieScene_MovieSceneObjectPathChannelKeyValue
{
public:
	TSoftObjectPtr<class UObject>                SoftPtr;                                           // 0x0(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                               HardPtr;                                           // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xE0 (0x130 - 0x50)
// ScriptStruct MovieScene.MovieSceneObjectPathChannel
struct MovieScene_MovieSceneObjectPathChannel : public MovieScene_MovieSceneChannel
{
public:
	TSubclassOf<class UObject>                   PropertyClass;                                     // 0x50(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct CoreUObject_FrameNumber>       Times;                                             // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct MovieScene_MovieSceneObjectPathChannelKeyValue> Values;                                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneObjectPathChannelKeyValue DefaultValue;                                      // 0x78(0x30)(NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneKeyHandleMap     KeyHandles;                                        // 0xA8(0x88)(Transient, NativeAccessSpecifierPrivate)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceCompilerMaskStruct
struct MovieScene_MovieSceneSequenceCompilerMaskStruct
{
public:
	uint8                                        bHierarchy : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluationTemplate : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluationTemplateField : 1;                      // Mask: 0x4, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEntityComponentField : 1;                         // Mask: 0x8, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneCompiledSequenceFlagStruct
struct MovieScene_MovieSceneCompiledSequenceFlagStruct
{
public:
	uint8                                        bParentSequenceRequiresLowerFence : 1;             // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bParentSequenceRequiresUpperFence : 1;             // Mask: 0x2, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.EasingComponentData
struct MovieScene_EasingComponentData
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackInstanceComponent
struct MovieScene_MovieSceneTrackInstanceComponent
{
public:
	class UMovieSceneSection*                    Owner;                                             // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMovieSceneTrackInstance>  TrackInstanceClass;                                // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationHookComponent
struct MovieScene_MovieSceneEvaluationHookComponent
{
public:
	TScriptInterface<class IMovieSceneEvaluationHook> Interface;                                         // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB2[0x10];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.TrackInstanceInputComponent
struct MovieScene_TrackInstanceInputComponent
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutputIndex;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB7[0x4];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNode
struct MovieScene_MovieSceneEntitySystemGraphNode
{
public:
	uint8                                        Pad_ABA[0x20];                                     // Fixing Size After Last Property  
	class UMovieSceneEntitySystem*               System;                                            // 0x20(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNodes
struct MovieScene_MovieSceneEntitySystemGraphNodes
{
public:
	uint8                                        Pad_ABF[0x38];                                     // Fixing Size Of Struct 
};

// 0x190 (0x190 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntitySystemGraph
struct MovieScene_MovieSceneEntitySystemGraph
{
public:
	uint8                                        Pad_AC2[0xB8];                                     // Fixing Size After Last Property  
	struct MovieScene_MovieSceneEntitySystemGraphNodes Nodes;                                             // 0xB8(0x38)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_AC5[0xA0];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationHookEvent
struct MovieScene_MovieSceneEvaluationHookEvent
{
public:
	struct MovieScene_MovieSceneEvaluationHookComponent Hook;                                              // 0x0(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_ACB[0x18];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationHookEventContainer
struct MovieScene_MovieSceneEvaluationHookEventContainer
{
public:
	TArray<struct MovieScene_MovieSceneEvaluationHookEvent> Events;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationInstanceKey
struct MovieScene_MovieSceneEvaluationInstanceKey
{
public:
	uint8                                        Pad_AD5[0x4];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackInstanceInput
struct MovieScene_MovieSceneTrackInstanceInput
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD6[0x8];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackInstanceEntry
struct MovieScene_MovieSceneTrackInstanceEntry
{
public:
	class UObject*                               BoundObject;                                       // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneTrackInstance*              TrackInstance;                                     // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct MovieScene.OptionalMovieSceneBlendType
struct MovieScene_OptionalMovieSceneBlendType
{
public:
	enum class EMovieSceneBlendType              BlendType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValid;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct MovieScene.MovieSceneEvalTemplate
struct MovieScene_MovieSceneEvalTemplate : public MovieScene_MovieSceneEvalTemplateBase
{
public:
	enum class EMovieSceneCompletionMode         CompletionMode;                                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_ADE[0x3];                                      // Fixing Size After Last Property  
	TWeakObjectPtr<class UMovieSceneSection>     SourceSectionPtr;                                  // 0x14(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_ADF[0x4];                                      // Fixing Size Of Struct 
};

// 0x88 (0x88 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
struct MovieScene_MovieSceneEvalTemplatePtr
{
public:
	uint8                                        Pad_AE2[0x88];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityKey
struct MovieScene_MovieSceneEvaluationFieldEntityKey
{
public:
	TWeakObjectPtr<class UObject>                EntityOwner;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       EntityID;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntity
struct MovieScene_MovieSceneEvaluationFieldEntity
{
public:
	struct MovieScene_MovieSceneEvaluationFieldEntityKey Key;                                               // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SharedMetaDataIndex;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
struct MovieScene_MovieSceneEvaluationFieldSharedEntityMetaData
{
public:
	struct CoreUObject_Guid                      ObjectBindingID;                                   // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityMetaData
struct MovieScene_MovieSceneEvaluationFieldEntityMetaData
{
public:
	class FString                                OverrideBoundPropertyPath;                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               ForcedTime;                                        // 0x10(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateInSequencePreRoll : 1;                    // Mask: 0x1, PropSize: 0x10x15(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateInSequencePostRoll : 1;                   // Mask: 0x2, PropSize: 0x10x15(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AEF[0x2];                                      // Fixing Size Of Struct 
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityTree
struct MovieScene_MovieSceneEvaluationFieldEntityTree
{
public:
	uint8                                        Pad_AF1[0x60];                                     // Fixing Size Of Struct 
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntityComponentField
struct MovieScene_MovieSceneEntityComponentField
{
public:
	struct MovieScene_MovieSceneEvaluationFieldEntityTree PersistentEntityTree;                              // 0x0(0x60)(NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneEvaluationFieldEntityTree OneShotEntityTree;                                 // 0x60(0x60)(NativeAccessSpecifierPrivate)
	TArray<struct MovieScene_MovieSceneEvaluationFieldEntity> Entities;                                          // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct MovieScene_MovieSceneEvaluationFieldEntityMetaData> EntityMetaData;                                    // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct MovieScene_MovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;                                    // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
struct MovieScene_MovieSceneEvaluationFieldTrackPtr
{
public:
	struct MovieScene_MovieSceneSequenceID       SequenceID;                                        // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneTrackIdentifier  TrackIdentifier;                                   // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0xC - 0x8)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
struct MovieScene_MovieSceneEvaluationFieldSegmentPtr : public MovieScene_MovieSceneEvaluationFieldTrackPtr
{
public:
	struct MovieScene_MovieSceneSegmentIdentifier SegmentID;                                         // 0x8(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneFieldEntry_EvaluationTrack
struct MovieScene_MovieSceneFieldEntry_EvaluationTrack
{
public:
	struct MovieScene_MovieSceneEvaluationFieldTrackPtr TrackPtr;                                          // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       NumChildren;                                       // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AFD[0x2];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneFieldEntry_ChildTemplate
struct MovieScene_MovieSceneFieldEntry_ChildTemplate
{
public:
	uint16                                       ChildIndex;                                        // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B03[0x1];                                      // Fixing Size After Last Property  
	struct CoreUObject_FrameNumber               ForcedTime;                                        // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
struct MovieScene_MovieSceneEvaluationGroupLUTIndex
{
public:
	int32                                        NumInitPtrs;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumEvalPtrs;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationGroup
struct MovieScene_MovieSceneEvaluationGroup
{
public:
	TArray<struct MovieScene_MovieSceneEvaluationGroupLUTIndex> LUTIndices;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct MovieScene_MovieSceneFieldEntry_EvaluationTrack> TrackLUT;                                          // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct MovieScene_MovieSceneFieldEntry_ChildTemplate> SectionLUT;                                        // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
struct MovieScene_MovieSceneOrderedEvaluationKey
{
public:
	struct MovieScene_MovieSceneEvaluationKey    Key;                                               // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       SetupIndex;                                        // 0xC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       TearDownIndex;                                     // 0xE(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
struct MovieScene_MovieSceneEvaluationMetaData
{
public:
	TArray<struct MovieScene_MovieSceneSequenceID> ActiveSequences;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct MovieScene_MovieSceneOrderedEvaluationKey> ActiveEntities;                                    // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneFrameRange
struct MovieScene_MovieSceneFrameRange
{
public:
	uint8                                        Pad_B18[0x10];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationField
struct MovieScene_MovieSceneEvaluationField
{
public:
	TArray<struct MovieScene_MovieSceneFrameRange> Ranges;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct MovieScene_MovieSceneEvaluationGroup> Groups;                                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct MovieScene_MovieSceneEvaluationMetaData> MetaData;                                          // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
struct MovieScene_MovieSceneTemplateGenerationLedger
{
public:
	struct MovieScene_MovieSceneTrackIdentifier  LastTrackIdentifier;                               // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B1F[0x4];                                      // Fixing Size After Last Property  
	TMap<struct CoreUObject_Guid, struct MovieScene_MovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;                   // 0x8(0x50)(NativeAccessSpecifierPublic)
	TMap<struct CoreUObject_Guid, struct MovieScene_MovieSceneFrameRange> SubSectionRanges;                                  // 0x58(0x50)(NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSectionData
struct MovieScene_MovieSceneSubSectionData
{
public:
	TWeakObjectPtr<class UMovieSceneSubSection>  Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ObjectBindingID;                                   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B25[0x3];                                      // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
struct MovieScene_MovieSceneEvaluationTemplateSerialNumber
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
struct MovieScene_MovieSceneTrackImplementationPtr
{
public:
	uint8                                        Pad_B27[0x38];                                     // Fixing Size Of Struct 
};

// 0x78 (0x78 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTrack
struct MovieScene_MovieSceneEvaluationTrack
{
public:
	struct CoreUObject_Guid                      ObjectBindingID;                                   // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       EvaluationPriority;                                // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EEvaluationMethod                 EvaluationMethod;                                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B2C[0x1];                                      // Fixing Size After Last Property  
	TWeakObjectPtr<class UMovieSceneTrack>       SourceTrack;                                       // 0x14(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B31[0x4];                                      // Fixing Size After Last Property  
	TArray<struct MovieScene_MovieSceneEvalTemplatePtr> ChildTemplates;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneTrackImplementationPtr TrackTemplate;                                     // 0x30(0x38)(NativeAccessSpecifierPrivate)
	class FName                                  EvaluationGroup;                                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEvaluateInPreroll : 1;                            // Mask: 0x1, PropSize: 0x10x70(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEvaluateInPostroll : 1;                           // Mask: 0x2, PropSize: 0x10x70(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bTearDownPriority : 1;                             // Mask: 0x4, PropSize: 0x10x70(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B35[0x7];                                      // Fixing Size Of Struct 
};

// 0x160 (0x160 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
struct MovieScene_MovieSceneEvaluationTemplate
{
public:
	TMap<struct MovieScene_MovieSceneTrackIdentifier, struct MovieScene_MovieSceneEvaluationTrack> Tracks;                                            // 0x0(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B37[0x50];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      SequenceSignature;                                 // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;                              // 0xB0(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B3A[0x4];                                      // Fixing Size After Last Property  
	struct MovieScene_MovieSceneTemplateGenerationLedger TemplateLedger;                                    // 0xB8(0xA8)(NativeAccessSpecifierPrivate)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
struct MovieScene_MovieSceneRootEvaluationTemplateInstance
{
public:
	TWeakObjectPtr<class UMovieSceneSequence>    WeakRootSequence;                                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneCompiledDataManager*        CompiledDataManager;                               // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B3D[0x18];                                     // Fixing Size After Last Property  
	class UMovieSceneEntitySystemLinker*         EntitySystemLinker;                                // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct MovieScene_MovieSceneSequenceID, class UObject*> DirectorInstances;                                 // 0x30(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B3E[0x8];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieScenePropertySectionData
struct MovieScene_MovieScenePropertySectionData
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PropertyPath;                                      // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x38 - 0x20)
// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
struct MovieScene_MovieScenePropertySectionTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	struct MovieScene_MovieScenePropertySectionData PropertyData;                                      // 0x20(0x18)(Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneTimeWarping
struct MovieScene_MovieSceneTimeWarping
{
public:
	struct CoreUObject_FrameNumber               Start;                                             // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               End;                                               // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
struct MovieScene_MovieSceneNestedSequenceTransform
{
public:
	struct MovieScene_MovieSceneTimeTransform    LinearTransform;                                   // 0x0(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneTimeWarping      Warping;                                           // 0xC(0x8)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceTransform
struct MovieScene_MovieSceneSequenceTransform
{
public:
	struct MovieScene_MovieSceneTimeTransform    LinearTransform;                                   // 0x0(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_B46[0x4];                                      // Fixing Size After Last Property  
	TArray<struct MovieScene_MovieSceneNestedSequenceTransform> NestedTransforms;                                  // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
struct MovieScene_MovieSceneSequenceInstanceDataPtr
{
public:
	uint8                                        Pad_B48[0x18];                                     // Fixing Size Of Struct 
};

// 0x118 (0x118 - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSequenceData
struct MovieScene_MovieSceneSubSequenceData
{
public:
	struct CoreUObject_SoftObjectPath            Sequence;                                          // 0x0(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneSequenceTransform OuterToInnerTransform;                             // 0x20(0x20)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneSequenceTransform RootToSequenceTransform;                           // 0x40(0x20)(NativeAccessSpecifierPublic)
	struct CoreUObject_FrameRate                 TickResolution;                                    // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneSequenceID       DeterministicSequenceID;                           // 0x68(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFrameRange       ParentPlayRange;                                   // 0x6C(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               ParentStartFrameOffset;                            // 0x7C(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               ParentEndFrameOffset;                              // 0x80(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               ParentFirstLoopStartFrameOffset;                   // 0x84(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanLoop;                                          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B54[0x3];                                      // Fixing Size After Last Property  
	struct MovieScene_MovieSceneFrameRange       PlayRange;                                         // 0x8C(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFrameRange       FullPlayRange;                                     // 0x9C(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFrameRange       UnwarpedPlayRange;                                 // 0xAC(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFrameRange       PreRollRange;                                      // 0xBC(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFrameRange       PostRollRange;                                     // 0xCC(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	int16                                        HierarchicalBias;                                  // 0xDC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B57[0x2];                                      // Fixing Size After Last Property  
	enum class EMovieSceneSubSectionFlags        AccumulatedFlags;                                  // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5B[0x4];                                      // Fixing Size After Last Property  
	struct MovieScene_MovieSceneSequenceInstanceDataPtr InstanceData;                                      // 0xE8(0x18)(NativeAccessSpecifierPublic)
	uint8                                        Pad_B5C[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_Guid                      SubSectionSignature;                               // 0x108(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
struct MovieScene_MovieSceneSequenceHierarchyNode
{
public:
	struct MovieScene_MovieSceneSequenceID       ParentID;                                          // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B60[0x4];                                      // Fixing Size After Last Property  
	TArray<struct MovieScene_MovieSceneSequenceID> Children;                                          // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSequenceTreeEntry
struct MovieScene_MovieSceneSubSequenceTreeEntry
{
public:
	uint8                                        Pad_B63[0x18];                                     // Fixing Size Of Struct 
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSequenceTree
struct MovieScene_MovieSceneSubSequenceTree
{
public:
	uint8                                        Pad_B68[0x60];                                     // Fixing Size Of Struct 
};

// 0x118 (0x118 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
struct MovieScene_MovieSceneSequenceHierarchy
{
public:
	struct MovieScene_MovieSceneSequenceHierarchyNode RootNode;                                          // 0x0(0x18)(NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneSubSequenceTree  Tree;                                              // 0x18(0x60)(NativeAccessSpecifierPrivate)
	TMap<struct MovieScene_MovieSceneSequenceID, struct MovieScene_MovieSceneSubSequenceData> SubSequences;                                      // 0x78(0x50)(NativeAccessSpecifierPrivate)
	TMap<struct MovieScene_MovieSceneSequenceID, struct MovieScene_MovieSceneSequenceHierarchyNode> Hierarchy;                                         // 0xC8(0x50)(NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneWarpCounter
struct MovieScene_MovieSceneWarpCounter
{
public:
	TArray<uint32>                               WarpCounts;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct MovieScene.MovieSceneTrackImplementation
struct MovieScene_MovieSceneTrackImplementation : public MovieScene_MovieSceneEvalTemplateBase
{
public:
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneExpansionState
struct MovieScene_MovieSceneExpansionState
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct MovieScene.MovieSceneEditorData
struct MovieScene_MovieSceneEditorData
{
public:
	TMap<class FString, struct MovieScene_MovieSceneExpansionState> ExpansionStates;                                   // 0x0(0x50)(NativeAccessSpecifierPublic)
	TArray<class FString>                        PinnedNodes;                                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	double                                       ViewStart;                                         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ViewEnd;                                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       WorkStart;                                         // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       WorkEnd;                                           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<struct CoreUObject_FrameNumber>         MarkedFrames;                                      // 0x80(0x50)(Deprecated, NativeAccessSpecifierPublic)
	struct CoreUObject_FloatRange                WorkingRange;                                      // 0xD0(0x10)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FloatRange                ViewRange;                                         // 0xE0(0x10)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackLabels
struct MovieScene_MovieSceneTrackLabels
{
public:
	TArray<class FString>                        Strings;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneObjectBindingID
struct MovieScene_MovieSceneObjectBindingID
{
public:
	struct CoreUObject_Guid                      Guid;                                              // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        SequenceID;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ResolveParentIndex;                                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
struct MovieScene_MovieSceneObjectBindingIDs
{
public:
	TArray<struct MovieScene_MovieSceneObjectBindingID> IDs;                                               // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionGroup
struct MovieScene_MovieSceneSectionGroup
{
public:
	TArray<TWeakObjectPtr<class UMovieSceneSection>> Sections;                                          // 0x0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneMarkedFrame
struct MovieScene_MovieSceneMarkedFrame
{
public:
	struct CoreUObject_FrameNumber               FrameNumber;                                       // 0x0(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7E[0x4];                                      // Fixing Size After Last Property  
	class FString                                Label;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDeterminismFence;                               // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B82[0x7];                                      // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneBinding
struct MovieScene_MovieSceneBinding
{
public:
	struct CoreUObject_Guid                      ObjectGuid;                                        // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                BindingName;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              Tracks;                                            // 0x20(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct MovieScene.MovieSceneBindingOverrideData
struct MovieScene_MovieSceneBindingOverrideData
{
public:
	struct MovieScene_MovieSceneObjectBindingID  ObjectBindingID;                                   // 0x0(0x18)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                Object;                                            // 0x18(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridesDefault;                                 // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B87[0x7];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneBindingProxy
struct MovieScene_MovieSceneBindingProxy
{
public:
	struct CoreUObject_Guid                      BindingID;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneSequence*                   Sequence;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneDynamicBindingPayloadVariable
struct MovieScene_MovieSceneDynamicBindingPayloadVariable
{
public:
	class FString                                Value;                                             // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieScene.MovieSceneDynamicBinding
struct MovieScene_MovieSceneDynamicBinding
{
public:
	class UFunction*                             Function;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FFieldPathProperty_                          ResolveParamsProperty;                             // 0x8(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneDynamicBindingResolveParams
struct MovieScene_MovieSceneDynamicBindingResolveParams
{
public:
	class UMovieSceneSequence*                   Sequence;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ObjectBindingID;                                   // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneSequence*                   RootSequence;                                      // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneDynamicBindingResolveResult
struct MovieScene_MovieSceneDynamicBindingResolveResult
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPossessedObject;                                // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B98[0x7];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieScene.MovieSceneDynamicBindingContainer
struct MovieScene_MovieSceneDynamicBindingContainer
{
public:
	struct MovieScene_MovieSceneDynamicBinding   DynamicBinding;                                    // 0x0(0x28)(Edit, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct MovieScene.MovieScenePossessable
struct MovieScene_MovieScenePossessable
{
public:
	TArray<class FName>                          Tags;                                              // 0x0(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneDynamicBinding   DynamicBinding;                                    // 0x10(0x28)(Edit, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      Guid;                                              // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Name;                                              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Guid                      ParentGuid;                                        // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneObjectBindingID  SpawnableObjectBindingID;                          // 0x68(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
struct MovieScene_MovieSceneSectionEvalOptions
{
public:
	bool                                         bCanEditCompletionMode;                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieSceneCompletionMode         CompletionMode;                                    // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneEasingSettings
struct MovieScene_MovieSceneEasingSettings
{
public:
	int32                                        AutoEaseInDuration;                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AutoEaseOutDuration;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IMovieSceneEasingFunction> EaseIn;                                            // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bManualEaseIn;                                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA2[0x3];                                      // Fixing Size After Last Property  
	int32                                        ManualEaseInDuration;                              // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IMovieSceneEasingFunction> EaseOut;                                           // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bManualEaseOut;                                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA7[0x3];                                      // Fixing Size After Last Property  
	int32                                        ManualEaseOutDuration;                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneTimecodeSource
struct MovieScene_MovieSceneTimecodeSource
{
public:
	struct CoreUObject_Timecode                  Timecode;                                          // 0x0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
struct MovieScene_MovieSceneSequenceInstanceData
{
public:
	uint8                                        Pad_BA9[0x8];                                      // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
struct MovieScene_MovieSceneSequenceReplProperties
{
public:
	struct CoreUObject_FrameTime                 LastKnownPosition;                                 // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieScenePlayerStatus           LastKnownStatus;                                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB0[0x3];                                      // Fixing Size After Last Property  
	int32                                        LastKnownNumLoops;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastKnownSerialNumber;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequencePlaybackParams
struct MovieScene_MovieSceneSequencePlaybackParams
{
public:
	struct CoreUObject_FrameTime                 Frame;                                             // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB5[0x4];                                      // Fixing Size After Last Property  
	class FString                                MarkedFrame;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieScenePositionType           PositionType;                                      // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUpdatePositionMethod             UpdateMethod;                                      // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasJumped;                                        // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BBA[0x5];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequencePlayToParams
struct MovieScene_MovieSceneSequencePlayToParams
{
public:
	bool                                         bExclusive;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct MovieScene.MovieSceneSpawnable
struct MovieScene_MovieSceneSpawnable
{
public:
	struct CoreUObject_Transform                 SpawnTransform;                                    // 0x0(0x60)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Tags;                                              // 0x60(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                         bContinuouslyRespawn;                              // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNetAddressableName;                               // 0x71(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC6[0x6];                                      // Fixing Size After Last Property  
	struct MovieScene_MovieSceneDynamicBinding   DynamicBinding;                                    // 0x78(0x28)(Edit, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      Guid;                                              // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Name;                                              // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                               ObjectTemplate;                                    // 0xC0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct CoreUObject_Guid>              ChildPossessables;                                 // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class ESpawnOwnership                   Ownership;                                         // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BD2[0x3];                                      // Fixing Size After Last Property  
	class FName                                  LevelName;                                         // 0xDC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD3[0xC];                                      // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
struct MovieScene_MovieSceneTrackEvalOptions
{
public:
	uint8                                        bCanEvaluateNearestSection : 1;                    // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvalNearestSection : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateInPreroll : 1;                            // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateInPostroll : 1;                           // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateNearestSection : 1;                       // Mask: 0x10, PropSize: 0x10x0(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD9[0x3];                                      // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
struct MovieScene_MovieSceneTrackDisplayOptions
{
public:
	uint8                                        bShowVerticalFrames : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BDC[0x3];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackEvaluationFieldEntry
struct MovieScene_MovieSceneTrackEvaluationFieldEntry
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumberRange          Range;                                             // 0x8(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               ForcedTime;                                        // 0x18(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE1[0x1];                                      // Fixing Size After Last Property  
	int16                                        LegacySortOrder;                                   // 0x1E(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackEvaluationField
struct MovieScene_MovieSceneTrackEvaluationField
{
public:
	TArray<struct MovieScene_MovieSceneTrackEvaluationFieldEntry> Entries;                                           // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
struct MovieScene_TestMovieSceneEvalTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
};

}


