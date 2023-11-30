#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPathFollowingResult : uint8
{
	Success                        = 0,
	Blocked                        = 1,
	OffPath                        = 2,
	Aborted                        = 3,
	Skipped_DEPRECATED             = 4,
	Invalid                        = 5,
	EPathFollowingResult_MAX       = 6,
};

enum class EEnvQueryStatus : uint8
{
	Processing                     = 0,
	Success                        = 1,
	Failed                         = 2,
	Aborted                        = 3,
	OwnerLost                      = 4,
	MissingParam                   = 5,
	EEnvQueryStatus_MAX            = 6,
};

enum class EAIOptionFlag : uint8
{
	Default                        = 0,
	Enable                         = 1,
	Disable                        = 2,
	MAX                            = 3,
};

enum class EFAIDistanceType : uint8
{
	Distance3D                     = 0,
	Distance2D                     = 1,
	DistanceZ                      = 2,
	MAX                            = 3,
};

enum class EPawnActionAbortState : uint8
{
	NeverStarted                   = 0,
	NotBeingAborted                = 1,
	MarkPendingAbort               = 2,
	LatentAbortInProgress          = 3,
	AbortDone                      = 4,
	MAX                            = 5,
};

enum class EPawnActionResult : uint8
{
	NotStarted                     = 0,
	InProgress                     = 1,
	Success                        = 2,
	Failed                         = 3,
	Aborted                        = 4,
	EPawnActionResult_MAX          = 5,
};

enum class EPawnActionEventType : uint8
{
	Invalid                        = 0,
	FailedToStart                  = 1,
	InstantAbort                   = 2,
	FinishedAborting               = 3,
	FinishedExecution              = 4,
	Push                           = 5,
	EPawnActionEventType_MAX       = 6,
};

enum class EAIRequestPriority : uint8
{
	SoftScript                     = 0,
	Logic                          = 1,
	HardScript                     = 2,
	Reaction                       = 3,
	Ultimate                       = 4,
	MAX                            = 5,
};

enum class EAILockSource : uint8
{
	Animation                      = 0,
	Logic                          = 1,
	Script                         = 2,
	Gameplay                       = 3,
	MAX                            = 4,
};

enum class EGenericAICheck : uint8
{
	Less                           = 0,
	LessOrEqual                    = 1,
	Equal                          = 2,
	NotEqual                       = 3,
	GreaterOrEqual                 = 4,
	Greater                        = 5,
	IsTrue                         = 6,
	MAX                            = 7,
};

enum class EBasicKeyOperation : uint8
{
	Set                            = 0,
	NotSet                         = 1,
	EBasicKeyOperation_MAX         = 2,
};

enum class EArithmeticKeyOperation : uint8
{
	Equal                          = 0,
	NotEqual                       = 1,
	Less                           = 2,
	LessOrEqual                    = 3,
	Greater                        = 4,
	GreaterOrEqual                 = 5,
	EArithmeticKeyOperation_MAX    = 6,
};

enum class ETextKeyOperation : uint8
{
	Equal                          = 0,
	NotEqual                       = 1,
	Contain                        = 2,
	NotContain                     = 3,
	ETextKeyOperation_MAX          = 4,
};

enum class EEnvTestPurpose : uint8
{
	Filter                         = 0,
	Score                          = 1,
	FilterAndScore                 = 2,
	EEnvTestPurpose_MAX            = 3,
};

enum class EEnvTestFilterType : uint8
{
	Minimum                        = 0,
	Maximum                        = 1,
	Range                          = 2,
	Match                          = 3,
	EEnvTestFilterType_MAX         = 4,
};

enum class EEnvTestScoreEquation : uint8
{
	Linear                         = 0,
	Square                         = 1,
	InverseLinear                  = 2,
	SquareRoot                     = 3,
	Constant                       = 4,
	EEnvTestScoreEquation_MAX      = 5,
};

enum class EEnvTestWeight : uint8
{
	None                           = 0,
	Square                         = 1,
	Inverse                        = 2,
	Unused                         = 3,
	Constant                       = 4,
	Skip                           = 5,
	EEnvTestWeight_MAX             = 6,
};

enum class EEnvTestCost : uint8
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	EEnvTestCost_MAX               = 3,
};

enum class EEnvTestFilterOperator : uint8
{
	AllPass                        = 0,
	AnyPass                        = 1,
	EEnvTestFilterOperator_MAX     = 2,
};

enum class EEnvTestScoreOperator : uint8
{
	AverageScore                   = 0,
	MinScore                       = 1,
	MaxScore                       = 2,
	Multiply                       = 3,
	EEnvTestScoreOperator_MAX      = 4,
};

enum class EEnvQueryRunMode : uint8
{
	SingleResult                   = 0,
	RandomBest5Pct                 = 1,
	RandomBest25Pct                = 2,
	AllMatching                    = 3,
	EEnvQueryRunMode_MAX           = 4,
};

enum class EEnvQueryParam : uint8
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	EEnvQueryParam_MAX             = 3,
};

enum class EAIParamType : uint8
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	MAX                            = 3,
};

enum class EEnvQueryTrace : uint8
{
	None                           = 0,
	Navigation                     = 1,
	GeometryByChannel              = 2,
	GeometryByProfile              = 3,
	NavigationOverLedges           = 4,
	EEnvQueryTrace_MAX             = 5,
};

enum class EEnvTraceShape : uint8
{
	Line                           = 0,
	Box                            = 1,
	Sphere                         = 2,
	Capsule                        = 3,
	EEnvTraceShape_MAX             = 4,
};

enum class EEnvOverlapShape : uint8
{
	Box                            = 0,
	Sphere                         = 1,
	Capsule                        = 2,
	EEnvOverlapShape_MAX           = 3,
};

enum class EEnvDirection : uint8
{
	TwoPoints                      = 0,
	Rotation                       = 1,
	EEnvDirection_MAX              = 2,
};

enum class EEnvQueryTestClamping : uint8
{
	None                           = 0,
	SpecifiedValue                 = 1,
	FilterThreshold                = 2,
	EEnvQueryTestClamping_MAX      = 3,
};

enum class ETeamAttitude : uint8
{
	Friendly                       = 0,
	Neutral                        = 1,
	Hostile                        = 2,
	ETeamAttitude_MAX              = 3,
};

enum class EPawnSubActionTriggeringPolicy : uint8
{
	CopyBeforeTriggering           = 0,
	ReuseInstances                 = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2,
};

enum class EPawnActionFailHandling : uint8
{
	RequireSuccess                 = 0,
	IgnoreFailure                  = 1,
	EPawnActionFailHandling_MAX    = 2,
};

enum class EPawnActionMoveMode : uint8
{
	UsePathfinding                 = 0,
	StraightLine                   = 1,
	EPawnActionMoveMode_MAX        = 2,
};

enum class EBTNodeResult : uint8
{
	Succeeded                      = 0,
	Failed                         = 1,
	Aborted                        = 2,
	InProgress                     = 3,
	EBTNodeResult_MAX              = 4,
};

enum class EBTFlowAbortMode : uint8
{
	None                           = 0,
	LowerPriority                  = 1,
	Self                           = 2,
	Both                           = 3,
	EBTFlowAbortMode_MAX           = 4,
};

enum class EBTChildIndex : uint8
{
	FirstNode                      = 0,
	TaskNode                       = 1,
	EBTChildIndex_MAX              = 2,
};

enum class EBTDecoratorLogic : uint8
{
	Invalid                        = 0,
	Test                           = 1,
	And                            = 2,
	Or                             = 3,
	Not                            = 4,
	EBTDecoratorLogic_MAX          = 5,
};

enum class EBTParallelMode : uint8
{
	AbortBackground                = 0,
	WaitForBackground              = 1,
	EBTParallelMode_MAX            = 2,
};

enum class EBTBlackboardRestart : uint8
{
	ValueChange                    = 0,
	ResultChange                   = 1,
	EBTBlackboardRestart_MAX       = 2,
};

enum class EBlackBoardEntryComparison : uint8
{
	Equal                          = 0,
	NotEqual                       = 1,
	EBlackBoardEntryComparison_MAX = 2,
};

enum class EPathExistanceQueryType : uint8
{
	NavmeshRaycast2D               = 0,
	HierarchicalQuery              = 1,
	RegularPathFinding             = 2,
	EPathExistanceQueryType_MAX    = 3,
};

enum class EEQSNormalizationType : uint8
{
	Absolute                       = 0,
	RelativeToScores               = 1,
	EEQSNormalizationType_MAX      = 2,
};

enum class EEnvQueryHightlightMode : uint8
{
	All                            = 0,
	Best5Pct                       = 1,
	Best25Pct                      = 2,
	EEnvQueryHightlightMode_MAX    = 3,
};

enum class EPointOnCircleSpacingMethod : uint8
{
	BySpaceBetween                 = 0,
	ByNumberOfPoints               = 1,
	EPointOnCircleSpacingMethod_MAX = 2,
};

enum class EEnvTestDistance : uint8
{
	Distance3D                     = 0,
	Distance2D                     = 1,
	DistanceZ                      = 2,
	DistanceAbsoluteZ              = 3,
	EEnvTestDistance_MAX           = 4,
};

enum class EEnvTestDot : uint8
{
	Dot3D                          = 0,
	Dot2D                          = 1,
	EEnvTestDot_MAX                = 2,
};

enum class EEnvTestPathfinding : uint8
{
	PathExist                      = 0,
	PathCost                       = 1,
	PathLength                     = 2,
	EEnvTestPathfinding_MAX        = 3,
};

enum class EPathFollowingStatus : uint8
{
	Idle                           = 0,
	Waiting                        = 1,
	Paused                         = 2,
	Moving                         = 3,
	EPathFollowingStatus_MAX       = 4,
};

enum class EPathFollowingAction : uint8
{
	Error                          = 0,
	NoMove                         = 1,
	DirectMove                     = 2,
	PartialPath                    = 3,
	PathToGoal                     = 4,
	EPathFollowingAction_MAX       = 5,
};

enum class EPathFollowingRequestResult : uint8
{
	Failed                         = 0,
	AlreadyAtGoal                  = 1,
	RequestSuccessful              = 2,
	EPathFollowingRequestResult_MAX = 3,
};

enum class EAISenseNotifyType : uint8
{
	OnEveryPerception              = 0,
	OnPerceptionChange             = 1,
	EAISenseNotifyType_MAX         = 2,
};

enum class EAITaskPriority : uint8
{
	Lowest                         = 0,
	Low                            = 64,
	AutonomousAI                   = 127,
	High                           = 192,
	Ultimate                       = 254,
	EAITaskPriority_MAX            = 255,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// ScriptStruct AIModule.AIStimulus
struct AIModule_AIStimulus
{
public:
	float                                        Age;                                               // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ExpirationAge;                                     // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Strength;                                          // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4791[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    StimulusLocation;                                  // 0x10(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ReceiverLocation;                                  // 0x28(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x40(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4793[0xC];                                     // Fixing Size After Last Property  
	uint8                                        BitPad_139 : 1;                                    // Fixing Bit-Field Size  
	uint8                                        bSuccessfullySensed : 1;                           // Mask: 0x2, PropSize: 0x10x54(0x1)(BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4796[0x3];                                     // Fixing Size Of Struct 
};

// 0x68 (0x68 - 0x0)
// ScriptStruct AIModule.ActorPerceptionUpdateInfo
struct AIModule_ActorPerceptionUpdateInfo
{
public:
	int32                                        TargetId;                                          // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                 Target;                                            // 0x4(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4798[0x4];                                     // Fixing Size After Last Property  
	struct AIModule_AIStimulus                   Stimulus;                                          // 0x10(0x58)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.AIRequestID
struct AIModule_AIRequestID
{
public:
	uint32                                       RequestID;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AIModule.AIMoveRequest
struct AIModule_AIMoveRequest
{
public:
	TWeakObjectPtr<class AActor>                 GoalActor;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_47B4[0x48];                                    // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AIModule.IntervalCountdown
struct AIModule_IntervalCountdown
{
public:
	float                                        Interval;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47B6[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AIModule.EnvNamedValue
struct AIModule_EnvNamedValue
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIParamType                      ParamType;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47BA[0x3];                                     // Fixing Size After Last Property  
	float                                        Value;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AIModule.EnvDirection
struct AIModule_EnvDirection
{
public:
	TSubclassOf<class UEnvQueryContext>          LineFrom;                                          // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          LineTo;                                            // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UEnvQueryContext>          Rotation;                                          // 0x10(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvDirection                     DirMode;                                           // 0x18(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47BE[0x7];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AIModule.EnvTraceData
struct AIModule_EnvTraceData
{
public:
	int32                                        VersionNum;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47C1[0x4];                                     // Fixing Size After Last Property  
	TSubclassOf<class UNavigationQueryFilter>    NavigationFilter;                                  // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProjectDown;                                       // 0x10(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ProjectUp;                                         // 0x14(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentX;                                           // 0x18(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentY;                                           // 0x1C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentZ;                                           // 0x20(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostProjectionVerticalOffset;                      // 0x24(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 SerializedChannel;                                 // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47C3[0x2];                                     // Fixing Size After Last Property  
	class FName                                  TraceProfileName;                                  // 0x2C(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvTraceShape                    TraceShape;                                        // 0x34(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvQueryTrace                    TraceMode;                                         // 0x35(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47C6[0x2];                                     // Fixing Size After Last Property  
	uint8                                        bTraceComplex : 1;                                 // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnlyBlockingHits : 1;                             // Mask: 0x2, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanTraceOnNavMesh : 1;                            // Mask: 0x4, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanTraceOnGeometry : 1;                           // Mask: 0x8, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanDisableTrace : 1;                              // Mask: 0x10, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCanProjectDown : 1;                               // Mask: 0x20, PropSize: 0x10x38(0x1)(Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47C9[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AIModule.EnvOverlapData
struct AIModule_EnvOverlapData
{
public:
	float                                        ExtentX;                                           // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentY;                                           // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentZ;                                           // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47CC[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ShapeOffset;                                       // 0x10(0x18)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 OverlapChannel;                                    // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEnvOverlapShape                  OverlapShape;                                      // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47CF[0x2];                                     // Fixing Size After Last Property  
	uint8                                        bOnlyBlockingHits : 1;                             // Mask: 0x1, PropSize: 0x10x2C(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverlapComplex : 1;                               // Mask: 0x2, PropSize: 0x10x2C(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSkipOverlapQuerier : 1;                           // Mask: 0x4, PropSize: 0x10x2C(0x1)(Edit, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47D0[0x3];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AIModule.EnvQueryResult
struct AIModule_EnvQueryResult
{
public:
	uint8                                        Pad_47D2[0x10];                                    // Fixing Size After Last Property  
	TSubclassOf<class UEnvQueryItemType>         ItemType;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47D3[0x14];                                    // Fixing Size After Last Property  
	int32                                        OptionIndex;                                       // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QueryID;                                           // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47D4[0xC];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AIModule.BlackboardKeySelector
struct AIModule_BlackboardKeySelector
{
public:
	TArray<class UBlackboardKeyType*>            AllowedTypes;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	class FName                                  SelectedKeyName;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UBlackboardKeyType>        SelectedKeyType;                                   // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectedKeyID;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bNoneIsAllowedValue : 1;                           // Mask: 0x1, PropSize: 0x10x24(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_47D6[0x3];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AIModule.AIDynamicParam
struct AIModule_AIDynamicParam
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAIParamType                      ParamType;                                         // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47DA[0x3];                                     // Fixing Size After Last Property  
	float                                        Value;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AIModule_BlackboardKeySelector        BBKey;                                             // 0x10(0x28)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
struct AIModule_EQSParametrizedQueryExecutionRequest
{
public:
	class UEnvQuery*                             QueryTemplate;                                     // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct AIModule_AIDynamicParam>       QueryConfig;                                       // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct AIModule_BlackboardKeySelector        EQSQueryBlackboardKey;                             // 0x18(0x28)(Edit, NativeAccessSpecifierPublic)
	enum class EEnvQueryRunMode                  RunMode;                                           // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47E2[0x3];                                     // Fixing Size After Last Property  
	uint8                                        bUseBBKeyForQueryTemplate : 1;                     // Mask: 0x1, PropSize: 0x10x44(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47E5[0x3];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// ScriptStruct AIModule.GenericTeamId
struct AIModule_GenericTeamId
{
public:
	uint8                                        TeamId;                                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.SimpleIndexedHandleBase
struct AIModule_SimpleIndexedHandleBase
{
public:
	uint8                                        Pad_47EA[0x4];                                     // Fixing Size Of Struct 
};

// 0x4 (0x8 - 0x4)
// ScriptStruct AIModule.IndexedHandleBase
struct AIModule_IndexedHandleBase : public AIModule_SimpleIndexedHandleBase
{
public:
	uint8                                        Pad_47EE[0x4];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.CompactIndexedHandleBase
struct AIModule_CompactIndexedHandleBase
{
public:
	uint8                                        Pad_47F1[0x4];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.SequentialIDBase
struct AIModule_SequentialIDBase
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIModule.PawnActionEvent
struct AIModule_PawnActionEvent
{
public:
	class UPawnAction*                           Action;                                            // 0x0(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47F2[0x10];                                    // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AIModule.PawnActionStack
struct AIModule_PawnActionStack
{
public:
	class UPawnAction*                           TopAction;                                         // 0x0(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIModule.BehaviorTreeTemplateInfo
struct AIModule_BehaviorTreeTemplateInfo
{
public:
	class UBehaviorTree*                         Asset;                                             // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBTCompositeNode*                      Template;                                          // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47F8[0x8];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIModule.BlackboardEntry
struct AIModule_BlackboardEntry
{
public:
	class FName                                  EntryName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlackboardKeyType*                    KeyType;                                           // 0x8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInstanceSynced : 1;                               // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47F9[0x7];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.BTDecoratorLogic
struct AIModule_BTDecoratorLogic
{
public:
	enum class EBTDecoratorLogic                 Operation;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47FA[0x1];                                     // Fixing Size After Last Property  
	uint16                                       Number;                                            // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AIModule.BTCompositeChild
struct AIModule_BTCompositeChild
{
public:
	class UBTCompositeNode*                      ChildComposite;                                    // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBTTaskNode*                           ChildTask;                                         // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UBTDecorator*>                  Decorators;                                        // 0x10(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct AIModule_BTDecoratorLogic>     DecoratorOps;                                      // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AIModule.AIDataProviderValue
struct AIModule_AIDataProviderValue
{
public:
	uint8                                        Pad_47FE[0x10];                                    // Fixing Size After Last Property  
	class UAIDataProvider*                       DataBinding;                                       // 0x10(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DataField;                                         // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct AIModule.AIDataProviderTypedValue
struct AIModule_AIDataProviderTypedValue : public AIModule_AIDataProviderValue
{
public:
	TSubclassOf<class UObject>                   PropertyType;                                      // 0x20(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4802[0x8];                                     // Fixing Size Of Struct 
};

// 0x10 (0x30 - 0x20)
// ScriptStruct AIModule.AIDataProviderStructValue
struct AIModule_AIDataProviderStructValue : public AIModule_AIDataProviderValue
{
public:
	uint8                                        Pad_4806[0x10];                                    // Fixing Size Of Struct 
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AIModule.AIDataProviderIntValue
struct AIModule_AIDataProviderIntValue : public AIModule_AIDataProviderTypedValue
{
public:
	int32                                        DefaultValue;                                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_480B[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AIModule.AIDataProviderFloatValue
struct AIModule_AIDataProviderFloatValue : public AIModule_AIDataProviderTypedValue
{
public:
	float                                        DefaultValue;                                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_480D[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0x38 - 0x30)
// ScriptStruct AIModule.AIDataProviderBoolValue
struct AIModule_AIDataProviderBoolValue : public AIModule_AIDataProviderTypedValue
{
public:
	bool                                         DefaultValue;                                      // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4810[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AIModule.EnvQueryManagerConfig
struct AIModule_EnvQueryManagerConfig
{
public:
	float                                        MaxAllowedTestingTime;                             // 0x0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTestQueriesUsingBreadth;                          // 0x4(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4811[0x3];                                     // Fixing Size After Last Property  
	int32                                        QueryCountWarningThreshold;                        // 0x8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4812[0x4];                                     // Fixing Size After Last Property  
	double                                       QueryCountWarningInterval;                         // 0x10(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ExecutionTimeWarningSeconds;                       // 0x18(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       HandlingResultTimeWarningSeconds;                  // 0x20(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       GenerationTimeWarningSeconds;                      // 0x28(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct AIModule.EnvQueryRequest
struct AIModule_EnvQueryRequest
{
public:
	class UEnvQuery*                             QueryTemplate;                                     // 0x0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObject*                               Owner;                                             // 0x8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWorld*                                World;                                             // 0x10(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4816[0x50];                                    // Fixing Size Of Struct 
};

// 0x180 (0x180 - 0x0)
// ScriptStruct AIModule.EnvQueryInstanceCache
struct AIModule_EnvQueryInstanceCache
{
public:
	class UEnvQuery*                             Template;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4819[0x178];                                   // Fixing Size Of Struct 
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AIModule.CrowdAvoidanceConfig
struct AIModule_CrowdAvoidanceConfig
{
public:
	float                                        VelocityBias;                                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DesiredVelocityWeight;                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentVelocityWeight;                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SideBiasWeight;                                    // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactTimeWeight;                                  // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactTimeRange;                                   // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CustomPatternIdx;                                  // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AdaptiveDivisions;                                 // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AdaptiveRings;                                     // 0x1A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AdaptiveDepth;                                     // 0x1B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
struct AIModule_CrowdAvoidanceSamplingPattern
{
public:
	TArray<float>                                Angles;                                            // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Radii;                                             // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct AIModule.RecastGraphWrapper
struct AIModule_RecastGraphWrapper
{
public:
	class ARecastNavMesh*                        RecastNavMeshActor;                                // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_481F[0xB0];                                    // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
struct AIModule_ActorPerceptionBlueprintInfo
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct AIModule_AIStimulus>           LastSensedStimuli;                                 // 0x8(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bIsHostile : 1;                                    // Mask: 0x1, PropSize: 0x10x18(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4822[0x7];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct AIModule.AISenseAffiliationFilter
struct AIModule_AISenseAffiliationFilter
{
public:
	uint8                                        bDetectEnemies : 1;                                // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDetectNeutrals : 1;                               // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDetectFriendlies : 1;                             // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4824[0x3];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AIModule.AIDamageEvent
struct AIModule_AIDamageEvent
{
public:
	float                                        Amount;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4826[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    HitLocation;                                       // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamagedActor;                                      // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AIModule.AINoiseEvent
struct AIModule_AINoiseEvent
{
public:
	uint8                                        Pad_482A[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    NoiseLocation;                                     // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Loudness;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_482B[0x8];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIModule.AIPredictionEvent
struct AIModule_AIPredictionEvent
{
public:
	class AActor*                                Requestor;                                         // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                PredictedActor;                                    // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_482E[0x8];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AIModule.AISightEvent
struct AIModule_AISightEvent
{
public:
	uint8                                        Pad_4830[0x8];                                     // Fixing Size After Last Property  
	class AActor*                                SeenActor;                                         // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Observer;                                          // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AIModule.AITeamStimulusEvent
struct AIModule_AITeamStimulusEvent
{
public:
	uint8                                        Pad_4832[0x40];                                    // Fixing Size After Last Property  
	class AActor*                                Broadcaster;                                       // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AActor*                                Enemy;                                             // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AIModule.AITouchEvent
struct AIModule_AITouchEvent
{
public:
	uint8                                        Pad_4835[0x18];                                    // Fixing Size After Last Property  
	class AActor*                                TouchReceiver;                                     // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x20(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


