#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBoneModificationMode : uint8
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3,
};

enum class ERefPoseType : uint8
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2,
};

enum class EEasingFuncType : uint8
{
	Linear                         = 0,
	Sinusoidal                     = 1,
	Cubic                          = 2,
	QuadraticInOut                 = 3,
	CubicInOut                     = 4,
	HermiteCubic                   = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	CustomCurve                    = 14,
	EEasingFuncType_MAX            = 15,
};

enum class ERotationComponent : uint8
{
	EulerX                         = 0,
	EulerY                         = 1,
	EulerZ                         = 2,
	QuaternionAngle                = 3,
	SwingAngle                     = 4,
	TwistAngle                     = 5,
	ERotationComponent_MAX         = 6,
};

enum class EBlendListTransitionType : uint8
{
	StandardBlend                  = 0,
	Inertialization                = 1,
	EBlendListTransitionType_MAX   = 2,
};

enum class EAnimFunctionCallSite : int32
{
	OnInitialize                   = 0,
	OnUpdate                       = 1,
	OnBecomeRelevant               = 2,
	OnEvaluate                     = 3,
	OnInitializePostRecursion      = 4,
	OnUpdatePostRecursion          = 5,
	OnBecomeRelevantPostRecursion  = 6,
	OnEvaluatePostRecursion        = 7,
	OnStartedBlendingOut           = 8,
	OnStartedBlendingIn            = 9,
	OnFinishedBlendingOut          = 10,
	OnFinishedBlendingIn           = 11,
	EAnimFunctionCallSite_MAX      = 12,
};

enum class ELayeredBoneBlendMode : uint8
{
	BranchFilter                   = 0,
	BlendMask                      = 1,
	ELayeredBoneBlendMode_MAX      = 2,
};

enum class EModifyCurveApplyMode : uint8
{
	Add                            = 0,
	Scale                          = 1,
	Blend                          = 2,
	WeightedMovingAverage          = 3,
	RemapCurve                     = 4,
	EModifyCurveApplyMode_MAX      = 5,
};

enum class EPoseDriverType : uint8
{
	SwingAndTwist                  = 0,
	SwingOnly                      = 1,
	Translation                    = 2,
	EPoseDriverType_MAX            = 3,
};

enum class EPoseDriverSource : uint8
{
	Rotation                       = 0,
	Translation                    = 1,
	EPoseDriverSource_MAX          = 2,
};

enum class EPoseDriverOutput : uint8
{
	DrivePoses                     = 0,
	DriveCurves                    = 1,
	EPoseDriverOutput_MAX          = 2,
};

enum class ESnapshotSourceMode : uint8
{
	NamedSnapshot                  = 0,
	SnapshotPin                    = 1,
	ESnapshotSourceMode_MAX        = 2,
};

enum class ESequenceEvalReinit : uint8
{
	NoReset                        = 0,
	StartPosition                  = 1,
	ExplicitTime                   = 2,
	ESequenceEvalReinit_MAX        = 3,
};

enum class ESwapRootBone : uint8
{
	SwapRootBone_Component         = 0,
	SwapRootBone_Actor             = 1,
	SwapRootBone_None              = 2,
	SwapRootBone_MAX               = 3,
};

enum class EAnimPhysAngularConstraintType : uint8
{
	Angular                        = 0,
	Cone                           = 1,
	AnimPhysAngularConstraintType_MAX = 2,
};

enum class EAnimPhysLinearConstraintType : uint8
{
	Free                           = 0,
	Limited                        = 1,
	AnimPhysLinearConstraintType_MAX = 2,
};

enum class EAnimPhysSimSpaceType : uint8
{
	Component                      = 0,
	Actor                          = 1,
	World                          = 2,
	RootRelative                   = 3,
	BoneRelative                   = 4,
	AnimPhysSimSpaceType_MAX       = 5,
};

enum class ESphericalLimitType : uint8
{
	Inner                          = 0,
	Outer                          = 1,
	ESphericalLimitType_MAX        = 2,
};

enum class EDrivenBoneModificationMode : uint8
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	EDrivenBoneModificationMode_MAX = 3,
};

enum class EDrivenDestinationMode : uint8
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	EDrivenDestinationMode_MAX     = 3,
};

enum class EConstraintOffsetOption : uint8
{
	None                           = 0,
	Offset_RefPose                 = 1,
	EConstraintOffsetOption_MAX    = 2,
};

enum class ECopyBoneDeltaMode : uint8
{
	Accumulate                     = 0,
	Copy                           = 1,
	CopyBoneDeltaMode_MAX          = 2,
};

enum class EInterpolationBlend : uint8
{
	Linear                         = 0,
	Cubic                          = 1,
	Sinusoidal                     = 2,
	EaseInOutExponent2             = 3,
	EaseInOutExponent3             = 4,
	EaseInOutExponent4             = 5,
	EaseInOutExponent5             = 6,
	MAX                            = 7,
};

enum class ESimulationSpace : uint8
{
	ComponentSpace                 = 0,
	WorldSpace                     = 1,
	BaseBoneSpace                  = 2,
	ESimulationSpace_MAX           = 3,
};

enum class ESimulationTiming : uint8
{
	Default                        = 0,
	Synchronous                    = 1,
	Deferred                       = 2,
	ESimulationTiming_MAX          = 3,
};

enum class EScaleChainInitialLength : uint8
{
	FixedDefaultLengthValue        = 0,
	Distance                       = 1,
	ChainLength                    = 2,
	EScaleChainInitialLength_MAX   = 3,
};

enum class ESplineBoneAxis : uint8
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	ESplineBoneAxis_MAX            = 4,
};

enum class EWarpingEvaluationMode : uint8
{
	Manual                         = 0,
	Graph                          = 1,
	EWarpingEvaluationMode_MAX     = 2,
};

enum class EWarpingVectorMode : uint8
{
	ComponentSpaceVector           = 0,
	ActorSpaceVector               = 1,
	WorldSpaceVector               = 2,
	IKFootRootLocalSpaceVector     = 3,
	EWarpingVectorMode_MAX         = 4,
};

enum class ERBFSolverType : uint8
{
	Additive                       = 0,
	Interpolative                  = 1,
	ERBFSolverType_MAX             = 2,
};

enum class ERBFFunctionType : uint8
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	DefaultFunction                = 5,
	ERBFFunctionType_MAX           = 6,
};

enum class ERBFDistanceMethod : uint8
{
	Euclidean                      = 0,
	Quaternion                     = 1,
	SwingAngle                     = 2,
	TwistAngle                     = 3,
	DefaultMethod                  = 4,
	ERBFDistanceMethod_MAX         = 5,
};

enum class ERBFNormalizeMethod : uint8
{
	OnlyNormalizeAboveOne          = 0,
	AlwaysNormalize                = 1,
	NormalizeWithinMedian          = 2,
	NoNormalization                = 3,
	ERBFNormalizeMethod_MAX        = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x68 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraphBase
struct AnimGraphRuntime_AnimNode_BlendSpaceGraphBase : public Engine_AnimNode_Base
{
public:
	float                                        X;                                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Y;                                                 // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  GroupName;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15A[0x7];                                      // Fixing Size After Last Property  
	class UBlendSpace*                           BlendSpace;                                        // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct Engine_PoseLink>               SamplePoseLinks;                                   // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_15B[0x28];                                     // Fixing Size Of Struct 
};

// 0x0 (0x68 - 0x68)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraph
struct AnimGraphRuntime_AnimNode_BlendSpaceGraph : public AnimGraphRuntime_AnimNode_BlendSpaceGraphBase
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceSampleResult
struct AnimGraphRuntime_AnimNode_BlendSpaceSampleResult : public Engine_AnimNode_Root
{
public:
};

// 0xB8 (0xC8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
struct AnimGraphRuntime_AnimNode_SkeletalControlBase : public Engine_AnimNode_Base
{
public:
	struct Engine_ComponentSpacePoseLink         ComponentPose;                                     // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualAlpha;                                       // 0x24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160[0x2];                                      // Fixing Size After Last Property  
	float                                        Alpha;                                             // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_InputScaleBias                 AlphaScaleBias;                                    // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_InputAlphaBoolBlend            AlphaBoolBlend;                                    // 0x38(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_InputScaleBiasClamp            AlphaScaleBiasClamp;                               // 0x88(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_162[0x10];                                     // Fixing Size Of Struct 
};

// 0x60 (0x128 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
struct AnimGraphRuntime_AnimNode_ModifyBone : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct Engine_BoneReference                  BoneToModify;                                      // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Translation;                                       // 0xD8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Rotation;                                          // 0xF0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Scale;                                             // 0x108(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             TranslationMode;                                   // 0x120(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             RotationMode;                                      // 0x121(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             ScaleMode;                                         // 0x122(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 TranslationSpace;                                  // 0x123(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 RotationSpace;                                     // 0x124(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 ScaleSpace;                                        // 0x125(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166[0x2];                                      // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
struct AnimGraphRuntime_AnimNode_RefPose : public Engine_AnimNode_Base
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
struct AnimGraphRuntime_AnimNode_MeshSpaceRefPose : public Engine_AnimNode_Base
{
public:
};

// 0x28 (0xF0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
struct AnimGraphRuntime_AnimNode_RotationMultiplier : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct Engine_BoneReference                  TargetBone;                                        // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  SourceBone;                                        // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Multiplier;                                        // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneAxis                         RotationAxisToRefer;                               // 0xEC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAdditive;                                       // 0xED(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B[0x2];                                      // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.BlendSpaceReference
struct AnimGraphRuntime_BlendSpaceReference : public Engine_AnimNodeReference
{
public:
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
struct AnimGraphRuntime_RotationRetargetingInfo
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D[0xF];                                      // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Source;                                            // 0x10(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Target;                                            // 0x70(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERotationComponent                RotationComponent;                                 // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F[0x7];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    TwistAxis;                                         // 0xD8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAbsoluteAngle;                                 // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170[0x3];                                      // Fixing Size After Last Property  
	float                                        SourceMinimum;                                     // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMaximum;                                     // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMinimum;                                     // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMaximum;                                     // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEasingFuncType                   EasingType;                                        // 0x104(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_171[0x3];                                      // Fixing Size After Last Property  
	struct Engine_RuntimeFloatCurve              CustomCurve;                                       // 0x108(0x88)(Edit, NativeAccessSpecifierPublic)
	bool                                         bFlipEasing;                                       // 0x190(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_172[0x3];                                      // Fixing Size After Last Property  
	float                                        EasingWeight;                                      // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClamp;                                            // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173[0x7];                                      // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.PositionHistory
struct AnimGraphRuntime_PositionHistory
{
public:
	TArray<struct CoreUObject_Vector>            Positions;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Range;                                             // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_175[0x1C];                                     // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimationStateResultReference
struct AnimGraphRuntime_AnimationStateResultReference : public Engine_AnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimationStateMachineReference
struct AnimGraphRuntime_AnimationStateMachineReference : public Engine_AnimNodeReference
{
public:
};

// 0x30 (0x68 - 0x38)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayerBase
struct AnimGraphRuntime_AnimNode_BlendSpacePlayerBase : public Engine_AnimNode_AssetPlayerBase
{
public:
	uint8                                        Pad_17A[0x28];                                     // Fixing Size After Last Property  
	class UBlendSpace*                           PreviousBlendSpace;                                // 0x60(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x8 (0x70 - 0x68)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
struct AnimGraphRuntime_AnimNode_BlendSpacePlayer : public AnimGraphRuntime_AnimNode_BlendSpacePlayerBase
{
public:
	class UBlendSpace*                           BlendSpace;                                        // 0x68(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x160 (0x1D0 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
struct AnimGraphRuntime_AnimNode_AimOffsetLookAt : public AnimGraphRuntime_AnimNode_BlendSpacePlayer
{
public:
	uint8                                        Pad_17B[0xC0];                                     // Fixing Size After Last Property  
	struct Engine_PoseLink                       BasePose;                                          // 0x130(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceSocketName;                                  // 0x144(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PivotSocketName;                                   // 0x14C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    LookAtLocation;                                    // 0x158(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SocketAxis;                                        // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D[0x44];                                     // Fixing Size Of Struct 
};

// 0xB8 (0xC8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
struct AnimGraphRuntime_AnimNode_ApplyAdditive : public Engine_AnimNode_Base
{
public:
	struct Engine_PoseLink                       base;                                              // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_PoseLink                       Additive;                                          // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_InputScaleBias                 AlphaScaleBias;                                    // 0x34(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_InputAlphaBoolBlend            AlphaBoolBlend;                                    // 0x40(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_InputScaleBiasClamp            AlphaScaleBiasClamp;                               // 0x90(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_180[0x4];                                      // Fixing Size After Last Property  
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0xC5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_181[0x2];                                      // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
struct AnimGraphRuntime_BlendBoneByChannelEntry
{
public:
	struct Engine_BoneReference                  SourceBone;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  TargetBone;                                        // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bBlendTranslation;                                 // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendRotation;                                    // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendScale;                                       // 0x22(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_184[0x1];                                      // Fixing Size Of Struct 
};

// 0x58 (0x68 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
struct AnimGraphRuntime_AnimNode_BlendBoneByChannel : public Engine_AnimNode_Base
{
public:
	struct Engine_PoseLink                       A;                                                 // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_PoseLink                       B;                                                 // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct AnimGraphRuntime_BlendBoneByChannelEntry> BoneDefinitions;                                   // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_185[0x10];                                     // Fixing Size After Last Property  
	float                                        Alpha;                                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_186[0x4];                                      // Fixing Size After Last Property  
	struct Engine_InputScaleBias                 AlphaScaleBias;                                    // 0x58(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 TransformsSpace;                                   // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_187[0x7];                                      // Fixing Size Of Struct 
};

// 0x38 (0x48 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
struct AnimGraphRuntime_AnimNode_BlendListBase : public Engine_AnimNode_Base
{
public:
	TArray<struct Engine_PoseLink>               BlendPose;                                         // 0x10(0x10)(Edit, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_18A[0x28];                                     // Fixing Size Of Struct 
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
struct AnimGraphRuntime_AnimNode_BlendListByBool : public AnimGraphRuntime_AnimNode_BlendListBase
{
public:
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
struct AnimGraphRuntime_AnimNode_BlendListByEnum : public AnimGraphRuntime_AnimNode_BlendListBase
{
public:
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
struct AnimGraphRuntime_AnimNode_BlendListByInt : public AnimGraphRuntime_AnimNode_BlendListBase
{
public:
};

// 0x8 (0x78 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
struct AnimGraphRuntime_AnimNode_BlendSpaceEvaluator : public AnimGraphRuntime_AnimNode_BlendSpacePlayer
{
public:
	float                                        NormalizedTime;                                    // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTeleportToNormalizedTime;                         // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191[0x3];                                      // Fixing Size Of Struct 
};

// 0x28 (0x90 - 0x68)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer_Standalone
struct AnimGraphRuntime_AnimNode_BlendSpacePlayer_Standalone : public AnimGraphRuntime_AnimNode_BlendSpacePlayerBase
{
public:
	class FName                                  GroupName;                                         // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAnimSyncMethod                   Method;                                            // 0x71(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIgnoreForRelevancyTest;                           // 0x72(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_192[0x1];                                      // Fixing Size After Last Property  
	float                                        X;                                                 // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Y;                                                 // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PlayRate;                                          // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLoop;                                             // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bResetPlayTimeWhenBlendSpaceChanges;               // 0x81(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_194[0x2];                                      // Fixing Size After Last Property  
	float                                        StartPosition;                                     // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBlendSpace*                           BlendSpace;                                        // 0x88(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x28 (0x38 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_CallFunction
struct AnimGraphRuntime_AnimNode_CallFunction : public Engine_AnimNode_Base
{
public:
	struct Engine_PoseLink                       Source;                                            // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_195[0x14];                                     // Fixing Size After Last Property  
	enum class EAnimFunctionCallSite             CallSite;                                          // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x148 (0x158 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
struct AnimGraphRuntime_AnimNode_CopyPoseFromMesh : public Engine_AnimNode_Base
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;                               // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseAttachedParent : 1;                            // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCopyCurves : 1;                                   // Mask: 0x2, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4 : 6;                                      // Fixing Bit-Field Size  
	bool                                         bCopyCustomAttributes;                             // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMeshPose : 1;                                  // Mask: 0x1, PropSize: 0x10x1A(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5 : 7;                                      // Fixing Bit-Field Size  
	uint8                                        Pad_198[0x1];                                      // Fixing Size After Last Property  
	class FName                                  RootBoneToCopy;                                    // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199[0x134];                                    // Fixing Size Of Struct 
};

// 0x30 (0x40 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
struct AnimGraphRuntime_AnimNode_CurveSource : public Engine_AnimNode_Base
{
public:
	struct Engine_PoseLink                       SourcePose;                                        // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  SourceBinding;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C[0x4];                                      // Fixing Size After Last Property  
	TScriptInterface<class ICurveSourceInterface> CurveSource;                                       // 0x30(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xF0 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
struct AnimGraphRuntime_AnimNode_LayeredBoneBlend : public Engine_AnimNode_Base
{
public:
	struct Engine_PoseLink                       BasePose;                                          // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct Engine_PoseLink>               BlendPoses;                                        // 0x20(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ELayeredBoneBlendMode             BlendMode;                                         // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E[0x7];                                      // Fixing Size After Last Property  
	TArray<class UBlendProfile*>                 BlendMasks;                                        // 0x38(0x10)(Edit, EditFixedSize, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct Engine_InputBlendPose>         LayerSetup;                                        // 0x48(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BlendWeights;                                      // 0x58(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bMeshSpaceRotationBlend;                           // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMeshSpaceScaleBlend;                              // 0x69(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECurveBlendOption                 CurveBlendOption;                                  // 0x6A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendRootMotionBasedOnRootBone;                   // 0x6B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F[0x4];                                      // Fixing Size After Last Property  
	int32                                        LODThreshold;                                      // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A0[0x4];                                      // Fixing Size After Last Property  
	TArray<struct Engine_PerBoneBlendWeight>     PerBoneBlendWeights;                               // 0x78(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct CoreUObject_Guid                      SkeletonGuid;                                      // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Guid                      VirtualBoneGuid;                                   // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A1[0x48];                                     // Fixing Size Of Struct 
};

// 0x28 (0x38 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
struct AnimGraphRuntime_AnimNode_MakeDynamicAdditive : public Engine_AnimNode_Base
{
public:
	struct Engine_PoseLink                       base;                                              // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_PoseLink                       Additive;                                          // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bMeshSpaceAdditive;                                // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A4[0x7];                                      // Fixing Size Of Struct 
};

// 0x38 (0x48 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MirrorBase
struct AnimGraphRuntime_AnimNode_MirrorBase : public Engine_AnimNode_Base
{
public:
	struct Engine_PoseLink                       Source;                                            // 0x10(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A5[0x28];                                     // Fixing Size Of Struct 
};

// 0x0 (0x48 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_Mirror
struct AnimGraphRuntime_AnimNode_Mirror : public AnimGraphRuntime_AnimNode_MirrorBase
{
public:
};

// 0x18 (0x60 - 0x48)
// ScriptStruct AnimGraphRuntime.AnimNode_Mirror_Standalone
struct AnimGraphRuntime_AnimNode_Mirror_Standalone : public AnimGraphRuntime_AnimNode_MirrorBase
{
public:
	bool                                         bMirror;                                           // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A6[0x7];                                      // Fixing Size After Last Property  
	class UMirrorDataTable*                      MirrorDataTable;                                   // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BlendTime;                                         // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bResetChild;                                       // 0x5C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bBoneMirroring;                                    // 0x5D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCurveMirroring;                                   // 0x5E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAttributeMirroring;                               // 0x5F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x110 (0x120 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
struct AnimGraphRuntime_AnimNode_ModifyCurve : public Engine_AnimNode_Base
{
public:
	struct Engine_PoseLink                       SourcePose;                                        // 0x10(0x10)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	TMap<class FName, float>                     CurveMap;                                          // 0x20(0x50)(Edit, BlueprintVisible, EditFixedSize, NativeAccessSpecifierPublic)
	TArray<float>                                CurveValues;                                       // 0x70(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          CurveNames;                                        // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A9[0x88];                                     // Fixing Size After Last Property  
	float                                        Alpha;                                             // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModifyCurveApplyMode             ApplyMode;                                         // 0x11C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA[0x3];                                      // Fixing Size Of Struct 
};

// 0x40 (0x50 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
struct AnimGraphRuntime_AnimNode_MultiWayBlend : public Engine_AnimNode_Base
{
public:
	TArray<struct Engine_PoseLink>               Poses;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DesiredAlphas;                                     // 0x20(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AC[0x10];                                     // Fixing Size After Last Property  
	struct Engine_InputScaleBias                 AlphaScaleBias;                                    // 0x40(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAdditiveNode;                                     // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalizeAlpha;                                   // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD[0x6];                                      // Fixing Size Of Struct 
};

// 0x60 (0x98 - 0x38)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
struct AnimGraphRuntime_AnimNode_PoseHandler : public Engine_AnimNode_AssetPlayerBase
{
public:
	class UPoseAsset*                            PoseAsset;                                         // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B0[0x58];                                     // Fixing Size Of Struct 
};

// 0x38 (0xD0 - 0x98)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
struct AnimGraphRuntime_AnimNode_PoseBlendNode : public AnimGraphRuntime_AnimNode_PoseHandler
{
public:
	struct Engine_PoseLink                       SourcePose;                                        // 0x98(0x10)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 BlendOption;                                       // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B1[0x7];                                      // Fixing Size After Last Property  
	class UCurveFloat*                           CustomCurve;                                       // 0xB0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B2[0x18];                                     // Fixing Size Of Struct 
};

// 0x18 (0xB0 - 0x98)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
struct AnimGraphRuntime_AnimNode_PoseByName : public AnimGraphRuntime_AnimNode_PoseHandler
{
public:
	class FName                                  PoseName;                                          // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoseWeight;                                        // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4[0xC];                                      // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.PoseDriverTransform
struct AnimGraphRuntime_PoseDriverTransform
{
public:
	struct CoreUObject_Vector                    TargetTranslation;                                 // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   TargetRotation;                                    // 0x18(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct AnimGraphRuntime.PoseDriverTarget
struct AnimGraphRuntime_PoseDriverTarget
{
public:
	TArray<struct AnimGraphRuntime_PoseDriverTransform> BoneTransforms;                                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   TargetRotation;                                    // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TargetScale;                                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFFunctionType                  FunctionType;                                      // 0x2D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyCustomCurve;                                 // 0x2E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B7[0x1];                                      // Fixing Size After Last Property  
	struct Engine_RichCurve                      CustomCurve;                                       // 0x30(0x80)(Edit, NativeAccessSpecifierPublic)
	class FName                                  DrivenName;                                        // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B8[0x8];                                      // Fixing Size After Last Property  
	bool                                         bIsHidden;                                         // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B9[0x7];                                      // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AnimGraphRuntime.RBFParams
struct AnimGraphRuntime_RBFParams
{
public:
	int32                                        TargetDimensions;                                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFSolverType                    SolverType;                                        // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB[0x3];                                      // Fixing Size After Last Property  
	float                                        Radius;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutomaticRadius;                                  // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFFunctionType                  Function;                                          // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0xE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneAxis                         TwistAxis;                                         // 0xF(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightThreshold;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFNormalizeMethod               NormalizeMethod;                                   // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    MedianReference;                                   // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MedianMin;                                         // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MedianMax;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x1A0 - 0x98)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
struct AnimGraphRuntime_AnimNode_PoseDriver : public AnimGraphRuntime_AnimNode_PoseHandler
{
public:
	struct Engine_PoseLink                       SourcePose;                                        // 0x98(0x10)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct Engine_BoneReference>          SourceBones;                                       // 0xA8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  EvalSpaceBone;                                     // 0xB8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEvalFromRefPose;                                  // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE[0x7];                                      // Fixing Size After Last Property  
	TArray<struct Engine_BoneReference>          OnlyDriveBones;                                    // 0xD0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct AnimGraphRuntime_PoseDriverTarget> PoseTargets;                                       // 0xE0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct AnimGraphRuntime_RBFParams            RBFParams;                                         // 0xF0(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EPoseDriverSource                 DriveSource;                                       // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPoseDriverOutput                 DriveOutput;                                       // 0x129(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C0[0x42];                                     // Fixing Size After Last Property  
	int32                                        LODThreshold;                                      // 0x16C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C1[0x30];                                     // Fixing Size Of Struct 
};

// 0x80 (0x90 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
struct AnimGraphRuntime_AnimNode_PoseSnapshot : public Engine_AnimNode_Base
{
public:
	class FName                                  SnapshotName;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_PoseSnapshot                   Snapshot;                                          // 0x18(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ESnapshotSourceMode               Mode;                                              // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C4[0x3F];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
struct AnimGraphRuntime_RandomPlayerSequenceEntry
{
public:
	class UAnimSequenceBase*                     Sequence;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToPlay;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinLoopCount;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLoopCount;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPlayRate;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPlayRate;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C5[0x4];                                      // Fixing Size After Last Property  
	struct Engine_AlphaBlend                     BlendIn;                                           // 0x20(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x78 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
struct AnimGraphRuntime_AnimNode_RandomPlayer : public Engine_AnimNode_AssetPlayerRelevancyBase
{
public:
	TArray<struct AnimGraphRuntime_RandomPlayerSequenceEntry> Entries;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6[0x50];                                     // Fixing Size After Last Property  
	float                                        BlendWeight;                                       // 0x70(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShuffleMode;                                      // 0x74(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C7[0x3];                                      // Fixing Size Of Struct 
};

// 0xA0 (0xB0 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
struct AnimGraphRuntime_AnimNode_RotateRootBone : public Engine_AnimNode_Base
{
public:
	struct Engine_PoseLink                       BasePose;                                          // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_InputScaleBiasClamp            PitchScaleBiasClamp;                               // 0x28(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_InputScaleBiasClamp            YawScaleBiasClamp;                                 // 0x58(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   MeshToComponent;                                   // 0x88(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bRotateRootMotionAttribute;                        // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA[0xF];                                      // Fixing Size Of Struct 
};

// 0xA8 (0x118 - 0x70)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
struct AnimGraphRuntime_AnimNode_RotationOffsetBlendSpace : public AnimGraphRuntime_AnimNode_BlendSpacePlayer
{
public:
	struct Engine_PoseLink                       BasePose;                                          // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_InputScaleBias                 AlphaScaleBias;                                    // 0x88(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_InputAlphaBoolBlend            AlphaBoolBlend;                                    // 0x90(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_InputScaleBiasClamp            AlphaScaleBiasClamp;                               // 0xE0(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF[0x4];                                      // Fixing Size After Last Property  
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x114(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0x115(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0[0x2];                                      // Fixing Size Of Struct 
};

// 0xA8 (0x110 - 0x68)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpaceGraph
struct AnimGraphRuntime_AnimNode_RotationOffsetBlendSpaceGraph : public AnimGraphRuntime_AnimNode_BlendSpaceGraphBase
{
public:
	struct Engine_PoseLink                       BasePose;                                          // 0x68(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate)
	int32                                        LODThreshold;                                      // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Alpha;                                             // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Engine_InputScaleBias                 AlphaScaleBias;                                    // 0x80(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate)
	struct Engine_InputAlphaBoolBlend            AlphaBoolBlend;                                    // 0x88(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate)
	class FName                                  AlphaCurveName;                                    // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Engine_InputScaleBiasClamp            AlphaScaleBiasClamp;                               // 0xD8(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D2[0x4];                                      // Fixing Size After Last Property  
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x10C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAlphaBoolEnabled;                                 // 0x10D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D3[0x2];                                      // Fixing Size Of Struct 
};

// 0x8 (0x40 - 0x38)
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluatorBase
struct AnimGraphRuntime_AnimNode_SequenceEvaluatorBase : public Engine_AnimNode_AssetPlayerBase
{
public:
	uint8                                        Pad_1D4[0x8];                                      // Fixing Size Of Struct 
};

// 0x0 (0x40 - 0x40)
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
struct AnimGraphRuntime_AnimNode_SequenceEvaluator : public AnimGraphRuntime_AnimNode_SequenceEvaluatorBase
{
public:
};

// 0x28 (0x68 - 0x40)
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator_Standalone
struct AnimGraphRuntime_AnimNode_SequenceEvaluator_Standalone : public AnimGraphRuntime_AnimNode_SequenceEvaluatorBase
{
public:
	class FName                                  GroupName;                                         // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAnimSyncMethod                   Method;                                            // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIgnoreForRelevancyTest;                           // 0x4A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1D7[0x5];                                      // Fixing Size After Last Property  
	class UAnimSequenceBase*                     Sequence;                                          // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ExplicitTime;                                      // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShouldLoop;                                       // 0x5C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bTeleportToExplicitTime;                           // 0x5D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ESequenceEvalReinit               ReinitializationBehavior;                          // 0x5E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1DB[0x1];                                      // Fixing Size After Last Property  
	float                                        StartPosition;                                     // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1DC[0x4];                                      // Fixing Size Of Struct 
};

// 0x38 (0x48 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_Slot
struct AnimGraphRuntime_AnimNode_Slot : public Engine_AnimNode_Base
{
public:
	struct Engine_PoseLink                       Source;                                            // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysUpdateSourcePose;                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD[0x1F];                                     // Fixing Size Of Struct 
};

// 0x20 (0x30 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_Sync
struct AnimGraphRuntime_AnimNode_Sync : public Engine_AnimNode_Base
{
public:
	struct Engine_PoseLink                       Source;                                            // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	class FName                                  GroupName;                                         // 0x20(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAnimGroupRole                    GroupRole;                                         // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E2[0x7];                                      // Fixing Size Of Struct 
};

// 0xB8 (0xC8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
struct AnimGraphRuntime_AnimNode_TwoWayBlend : public Engine_AnimNode_Base
{
public:
	struct Engine_PoseLink                       A;                                                 // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_PoseLink                       B;                                                 // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlphaBoolEnabled : 1;                             // Mask: 0x1, PropSize: 0x10x31(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6 : 2;                                      // Fixing Bit-Field Size  
	uint8                                        bResetChildOnActivation : 1;                       // Mask: 0x8, PropSize: 0x10x31(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_7 : 4;                                      // Fixing Bit-Field Size  
	uint8                                        Pad_1E3[0x2];                                      // Fixing Size After Last Property  
	float                                        Alpha;                                             // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_InputScaleBias                 AlphaScaleBias;                                    // 0x38(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_InputAlphaBoolBlend            AlphaBoolBlend;                                    // 0x40(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_InputScaleBiasClamp            AlphaScaleBiasClamp;                               // 0x90(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8[0x8];                                      // Fixing Size Of Struct 
};

// 0x468 (0xB60 - 0x6F8)
// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
struct AnimGraphRuntime_AnimSequencerInstanceProxy : public Engine_AnimInstanceProxy
{
public:
	uint8                                        Pad_1E9[0x468];                                    // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.BlendListBaseReference
struct AnimGraphRuntime_BlendListBaseReference : public Engine_AnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.BlendSpacePlayerReference
struct AnimGraphRuntime_BlendSpacePlayerReference : public Engine_AnimNodeReference
{
public:
};

// 0x88 (0x88 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
struct AnimGraphRuntime_AnimPhysConstraintSetup
{
public:
	enum class EAnimPhysLinearConstraintType     LinearXLimitType;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysLinearConstraintType     LinearYLimitType;                                  // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysLinearConstraintType     LinearZLimitType;                                  // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB[0x5];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    LinearAxesMin;                                     // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LinearAxesMax;                                     // 0x20(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysAngularConstraintType    AngularConstraintType;                             // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysTwistAxis                TwistAxis;                                         // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysTwistAxis                AngularTargetAxis;                                 // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC[0x1];                                      // Fixing Size After Last Property  
	float                                        ConeAngle;                                         // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AngularLimitsMin;                                  // 0x40(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AngularLimitsMax;                                  // 0x58(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AngularTarget;                                     // 0x70(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
struct AnimGraphRuntime_AnimPhysPlanarLimit
{
public:
	struct Engine_BoneReference                  DrivingBone;                                       // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 PlaneTransform;                                    // 0x10(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
struct AnimGraphRuntime_AnimPhysSphericalLimit
{
public:
	struct Engine_BoneReference                  DrivingBone;                                       // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SphereLocalOffset;                                 // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LimitRadius;                                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESphericalLimitType               LimitType;                                         // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F3[0x3];                                      // Fixing Size Of Struct 
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysBodyDefinition
struct AnimGraphRuntime_AnimPhysBodyDefinition
{
public:
	struct Engine_BoneReference                  BoundBone;                                         // 0x0(0x10)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    BoxExtents;                                        // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LocalJointOffset;                                  // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimGraphRuntime_AnimPhysConstraintSetup ConstraintSetup;                                   // 0x40(0x88)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAnimPhysCollisionType            CollisionType;                                     // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F9[0x3];                                      // Fixing Size After Last Property  
	float                                        SphereCollisionRadius;                             // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x458 (0x520 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
struct AnimGraphRuntime_AnimNode_AnimDynamics : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	float                                        LinearDampingOverride;                             // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularDampingOverride;                            // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC[0xC0];                                     // Fixing Size After Last Property  
	struct Engine_BoneReference                  RelativeSpaceBone;                                 // 0x190(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  BoundBone;                                         // 0x1A0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  ChainEnd;                                          // 0x1B0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct AnimGraphRuntime_AnimPhysBodyDefinition> PhysicsBodyDefinitions;                            // 0x1C0(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    GravityOverride;                                   // 0x1D8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearSpringConstant;                              // 0x1F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularSpringConstant;                             // 0x1F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindScale;                                         // 0x1F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ComponentLinearAccScale;                           // 0x200(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ComponentLinearVelScale;                           // 0x218(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ComponentAppliedLinearAccClamp;                    // 0x230(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularBiasOverride;                               // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSolverIterationsPreUpdate;                      // 0x24C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSolverIterationsPostUpdate;                     // 0x250(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_202[0x4];                                      // Fixing Size After Last Property  
	TArray<struct AnimGraphRuntime_AnimPhysSphericalLimit> SphericalLimits;                                   // 0x258(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ExternalForce;                                     // 0x268(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct AnimGraphRuntime_AnimPhysPlanarLimit> PlanarLimits;                                      // 0x280(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EAnimPhysSimSpaceType             SimulationSpace;                                   // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_204[0x2];                                      // Fixing Size After Last Property  
	uint8                                        bUseSphericalLimits : 1;                           // Mask: 0x1, PropSize: 0x10x293(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsePlanarLimit : 1;                               // Mask: 0x2, PropSize: 0x10x293(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDoUpdate : 1;                                     // Mask: 0x4, PropSize: 0x10x293(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDoEval : 1;                                       // Mask: 0x8, PropSize: 0x10x293(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideLinearDamping : 1;                        // Mask: 0x10, PropSize: 0x10x293(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAngularBias : 1;                          // Mask: 0x20, PropSize: 0x10x293(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAngularDamping : 1;                       // Mask: 0x40, PropSize: 0x10x293(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableWind : 1;                                   // Mask: 0x80, PropSize: 0x10x293(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_8 : 1;                                      // Fixing Bit-Field Size  
	uint8                                        bUseGravityOverride : 1;                           // Mask: 0x2, PropSize: 0x10x294(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGravityOverrideInSimSpace : 1;                    // Mask: 0x4, PropSize: 0x10x294(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLinearSpring : 1;                                 // Mask: 0x8, PropSize: 0x10x294(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAngularSpring : 1;                                // Mask: 0x10, PropSize: 0x10x294(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bChain : 1;                                        // Mask: 0x20, PropSize: 0x10x294(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9 : 2;                                      // Fixing Bit-Field Size  
	uint8                                        Pad_209[0xB];                                      // Fixing Size After Last Property  
	struct AnimGraphRuntime_RotationRetargetingInfo RetargetingSettings;                               // 0x2A0(0x1A0)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A[0xE0];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AnimGraphRuntime.AngularRangeLimit
struct AnimGraphRuntime_AngularRangeLimit
{
public:
	struct CoreUObject_Vector                    LimitMin;                                          // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LimitMax;                                          // 0x18(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  bone;                                              // 0x30(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0xE8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
struct AnimGraphRuntime_AnimNode_ApplyLimits : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	TArray<struct AnimGraphRuntime_AngularRangeLimit> AngularRangeLimits;                                // 0xC8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            AngularOffsets;                                    // 0xD8(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x128 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
struct AnimGraphRuntime_AnimNode_BoneDrivenController : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct Engine_BoneReference                  SourceBone;                                        // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           DrivingCurve;                                      // 0xD8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Multiplier;                                        // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_212[0x4];                                      // Fixing Size After Last Property  
	double                                       RangeMin;                                          // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RangeMax;                                          // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RemappedMin;                                       // 0xF8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       RemappedMax;                                       // 0x100(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0x108(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  TargetBone;                                        // 0x110(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EDrivenDestinationMode            DestinationMode;                                   // 0x120(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDrivenBoneModificationMode       ModificationMode;                                  // 0x121(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentType                    SourceComponent;                                   // 0x122(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseRange : 1;                                     // Mask: 0x1, PropSize: 0x10x123(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetTranslationX : 1;                     // Mask: 0x2, PropSize: 0x10x123(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetTranslationY : 1;                     // Mask: 0x4, PropSize: 0x10x123(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetTranslationZ : 1;                     // Mask: 0x8, PropSize: 0x10x123(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetRotationX : 1;                        // Mask: 0x10, PropSize: 0x10x123(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetRotationY : 1;                        // Mask: 0x20, PropSize: 0x10x123(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetRotationZ : 1;                        // Mask: 0x40, PropSize: 0x10x123(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetScaleX : 1;                           // Mask: 0x80, PropSize: 0x10x123(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetScaleY : 1;                           // Mask: 0x1, PropSize: 0x10x124(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetScaleZ : 1;                           // Mask: 0x2, PropSize: 0x10x124(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_216[0x3];                                      // Fixing Size Of Struct 
};

// 0xF8 (0x1C0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
struct AnimGraphRuntime_AnimNode_CCDIK : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct CoreUObject_Vector                    EffectorLocation;                                  // 0xC8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 EffectorLocationSpace;                             // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_218[0xF];                                      // Fixing Size After Last Property  
	struct Engine_BoneSocketTarget               EffectorTarget;                                    // 0xF0(0x90)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  TipBone;                                           // 0x180(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  RootBone;                                          // 0x190(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x1A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartFromTail;                                    // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRotationLimit;                              // 0x1A9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_219[0x6];                                      // Fixing Size After Last Property  
	TArray<float>                                RotationLimitPerJoints;                            // 0x1B0(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AnimGraphRuntime.Constraint
struct AnimGraphRuntime_Constraint
{
public:
	struct Engine_BoneReference                  TargetBone;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EConstraintOffsetOption           OffsetOption;                                      // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformConstraintType          TransformType;                                     // 0x11(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_FilterOptionPerAxis     PerAxis;                                           // 0x12(0x3)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B[0x7];                                      // Fixing Size Of Struct 
};

// 0x40 (0x108 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
struct AnimGraphRuntime_AnimNode_Constraint : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct Engine_BoneReference                  BoneToModify;                                      // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct AnimGraphRuntime_Constraint>   ConstraintSetup;                                   // 0xD8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ConstraintWeights;                                 // 0xE8(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_21D[0x10];                                     // Fixing Size Of Struct 
};

// 0x28 (0xF0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
struct AnimGraphRuntime_AnimNode_CopyBone : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct Engine_BoneReference                  SourceBone;                                        // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  TargetBone;                                        // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCopyTranslation;                                  // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyRotation;                                     // 0xE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyScale;                                        // 0xEA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 ControlSpace;                                      // 0xEB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_221[0x4];                                      // Fixing Size Of Struct 
};

// 0x30 (0xF8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
struct AnimGraphRuntime_AnimNode_CopyBoneDelta : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct Engine_BoneReference                  SourceBone;                                        // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  TargetBone;                                        // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCopyTranslation;                                  // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyRotation;                                     // 0xE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyScale;                                        // 0xEA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECopyBoneDeltaMode                CopyMode;                                          // 0xEB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TranslationMultiplier;                             // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationMultiplier;                                // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleMultiplier;                                   // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x1F0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
struct AnimGraphRuntime_AnimNode_Fabrik : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_225[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_Transform                 EffectorTransform;                                 // 0xD0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_BoneSocketTarget               EffectorTarget;                                    // 0x130(0x90)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  TipBone;                                           // 0x1C0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  RootBone;                                          // 0x1D0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x1E0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x1E4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 EffectorTransformSpace;                            // 0x1E8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneRotationSource               EffectorRotationSource;                            // 0x1E9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_228[0x6];                                      // Fixing Size Of Struct 
};

// 0x58 (0x120 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
struct AnimGraphRuntime_AnimNode_HandIKRetargeting : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct Engine_BoneReference                  RightHandFK;                                       // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  LeftHandFK;                                        // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  RightHandIK;                                       // 0xE8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  LeftHandIK;                                        // 0xF8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct Engine_BoneReference>          IKBonesToMove;                                     // 0x108(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        HandFKWeight;                                      // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22D[0x4];                                      // Fixing Size Of Struct 
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AnimGraphRuntime.IKChainLink
struct AnimGraphRuntime_IKChainLink
{
public:
	uint8                                        Pad_230[0x70];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AnimGraphRuntime.IKChain
struct AnimGraphRuntime_IKChain
{
public:
	uint8                                        Pad_232[0x50];                                     // Fixing Size Of Struct 
};

// 0x34 (0x34 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
struct AnimGraphRuntime_AnimLegIKDefinition
{
public:
	struct Engine_BoneReference                  IKFootBone;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  FKFootBone;                                        // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumBonesInLimb;                                    // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRotationAngle;                                  // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             FootBoneForwardAxis;                               // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             HingeRotationAxis;                                 // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRotationLimit;                              // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableKneeTwistCorrection;                        // 0x2B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TwistOffsetCurveName;                              // 0x2C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimLegIKData
struct AnimGraphRuntime_AnimLegIKData
{
public:
	uint8                                        Pad_235[0xF0];                                     // Fixing Size Of Struct 
};

// 0x30 (0xF8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
struct AnimGraphRuntime_AnimNode_LegIK : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	float                                        ReachPrecision;                                    // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct AnimGraphRuntime_AnimLegIKDefinition> LegsDefinition;                                    // 0xD0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_239[0x18];                                     // Fixing Size Of Struct 
};

// 0x188 (0x250 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
struct AnimGraphRuntime_AnimNode_LookAt : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct Engine_BoneReference                  BoneToModify;                                      // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_23A[0x8];                                      // Fixing Size After Last Property  
	struct Engine_BoneSocketTarget               LookAtTarget;                                      // 0xE0(0x90)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LookAtLocation;                                    // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_Axis                    LookAt_Axis;                                       // 0x188(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseLookUpAxis;                                    // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpolationBlend               InterpolationType;                                 // 0x1A9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C[0x6];                                      // Fixing Size After Last Property  
	struct AnimationCore_Axis                    LookUp_Axis;                                       // 0x1B0(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LookAtClamp;                                       // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationTime;                                 // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationTriggerThreashold;                    // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23D[0x74];                                     // Fixing Size Of Struct 
};

// 0x60 (0x128 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
struct AnimGraphRuntime_AnimNode_ObserveBone : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct Engine_BoneReference                  BoneToObserve;                                     // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 DisplaySpace;                                      // 0xD8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRelativeToRefPose;                                // 0xD9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_240[0x6];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Translation;                                       // 0xE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Rotation;                                          // 0xF8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Scale;                                             // 0x110(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xD8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
struct AnimGraphRuntime_AnimNode_ResetRoot : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_242[0x10];                                     // Fixing Size Of Struct 
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AnimGraphRuntime.SimSpaceSettings
struct AnimGraphRuntime_SimSpaceSettings
{
public:
	float                                        WorldAlpha;                                        // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocityScaleZ;                                    // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLinearVelocity;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngularVelocity;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLinearAcceleration;                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAngularAcceleration;                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ExternalLinearDragV;                               // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ExternalLinearVelocity;                            // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ExternalAngularVelocity;                           // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x888 (0x950 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
struct AnimGraphRuntime_AnimNode_RigidBody : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	class UPhysicsAsset*                         OverridePhysicsAsset;                              // 0xC8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_248[0x128];                                    // Fixing Size After Last Property  
	struct CoreUObject_Vector                    OverrideWorldGravity;                              // 0x1F8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ExternalForce;                                     // 0x210(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ComponentLinearAccScale;                           // 0x228(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ComponentLinearVelScale;                           // 0x240(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ComponentAppliedLinearAccClamp;                    // 0x258(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimGraphRuntime_SimSpaceSettings     SimSpaceSettings;                                  // 0x270(0x60)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CachedBoundsScale;                                 // 0x2D0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  BaseBoneRef;                                       // 0x2D4(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 OverlapChannel;                                    // 0x2E4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESimulationSpace                  SimulationSpace;                                   // 0x2E5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceDisableCollisionBetweenConstraintBodies;     // 0x2E6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseExternalClothCollision;                        // 0x2E7(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24E[0x1];                                      // Fixing Size After Last Property  
	uint8                                        bEnableWorldGeometry : 1;                          // Mask: 0x1, PropSize: 0x10x2E9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideWorldGravity : 1;                         // Mask: 0x2, PropSize: 0x10x2E9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransferBoneVelocities : 1;                       // Mask: 0x4, PropSize: 0x10x2E9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFreezeIncomingPoseOnStart : 1;                    // Mask: 0x8, PropSize: 0x10x2E9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bClampLinearTranslationLimitToRefPose : 1;         // Mask: 0x10, PropSize: 0x10x2E9(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_A : 3;                                      // Fixing Bit-Field Size  
	uint8                                        Pad_24F[0x2];                                      // Fixing Size After Last Property  
	float                                        WorldSpaceMinimumScale;                            // 0x2EC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EvaluationResetTime;                               // 0x2F0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250[0x1];                                      // Fixing Size After Last Property  
	enum class ESimulationTiming                 SimulationTiming;                                  // 0x2F5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_251[0x65A];                                    // Fixing Size Of Struct 
};

// 0x78 (0x88 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
struct AnimGraphRuntime_AnimNode_ScaleChainLength : public Engine_AnimNode_Base
{
public:
	struct Engine_PoseLink                       InputPose;                                         // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DefaultChainLength;                                // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  ChainStartBone;                                    // 0x24(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  ChainEndBone;                                      // 0x34(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_255[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    TargetLocation;                                    // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_257[0x4];                                      // Fixing Size After Last Property  
	struct Engine_InputScaleBias                 AlphaScaleBias;                                    // 0x68(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EScaleChainInitialLength          ChainInitialLength;                                // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_259[0x17];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
struct AnimGraphRuntime_SplineIKCachedBoneData
{
public:
	struct Engine_BoneReference                  bone;                                              // 0x0(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        RefSkeletonIndex;                                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A8 (0x270 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
struct AnimGraphRuntime_AnimNode_SplineIK : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct Engine_BoneReference                  StartBone;                                         // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  EndBone;                                           // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESplineBoneAxis                   BoneAxis;                                          // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoCalculateSpline;                              // 0xE9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25E[0x2];                                      // Fixing Size After Last Property  
	int32                                        PointCount;                                        // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         ControlPoints;                                     // 0xF0(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Roll;                                              // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TwistStart;                                        // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TwistEnd;                                          // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_263[0x4];                                      // Fixing Size After Last Property  
	struct Engine_AlphaBlend                     TwistBlend;                                        // 0x110(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Stretch;                                           // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_267[0x128];                                    // Fixing Size Of Struct 
};

// 0xA0 (0x168 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
struct AnimGraphRuntime_AnimNode_SpringBone : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct Engine_BoneReference                  SpringBone;                                        // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	double                                       MaxDisplacement;                                   // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SpringStiffness;                                   // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SpringDamping;                                     // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ErrorResetThresh;                                  // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26E[0x6C];                                     // Fixing Size After Last Property  
	uint8                                        bLimitDisplacement : 1;                            // Mask: 0x1, PropSize: 0x10x164(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTranslateX : 1;                                   // Mask: 0x2, PropSize: 0x10x164(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTranslateY : 1;                                   // Mask: 0x4, PropSize: 0x10x164(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTranslateZ : 1;                                   // Mask: 0x8, PropSize: 0x10x164(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRotateX : 1;                                      // Mask: 0x10, PropSize: 0x10x164(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRotateY : 1;                                      // Mask: 0x20, PropSize: 0x10x164(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRotateZ : 1;                                      // Mask: 0x40, PropSize: 0x10x164(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_275[0x3];                                      // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.RotationLimit
struct AnimGraphRuntime_RotationLimit
{
public:
	struct CoreUObject_Vector                    LimitMin;                                          // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LimitMax;                                          // 0x18(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D8 (0x2A0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_Trail
struct AnimGraphRuntime_AnimNode_Trail : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_27D[0x68];                                     // Fixing Size After Last Property  
	struct Engine_BoneReference                  TrailBone;                                         // 0x130(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ChainLength;                                       // 0x140(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             ChainBoneAxis;                                     // 0x144(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInvertChainBoneAxis : 1;                          // Mask: 0x1, PropSize: 0x10x145(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLimitStretch : 1;                                 // Mask: 0x2, PropSize: 0x10x145(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLimitRotation : 1;                                // Mask: 0x4, PropSize: 0x10x145(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsePlanarLimit : 1;                               // Mask: 0x8, PropSize: 0x10x145(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bActorSpaceFakeVel : 1;                            // Mask: 0x10, PropSize: 0x10x145(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReorientParentToChild : 1;                        // Mask: 0x20, PropSize: 0x10x145(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_B : 2;                                      // Fixing Bit-Field Size  
	uint8                                        Pad_282[0x2];                                      // Fixing Size After Last Property  
	float                                        MaxDeltaTime;                                      // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RelaxationSpeedScale;                              // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_RuntimeFloatCurve              TrailRelaxationSpeed;                              // 0x150(0x88)(Edit, NativeAccessSpecifierPublic)
	struct Engine_InputScaleBiasClamp            RelaxationSpeedScaleInputProcessor;                // 0x1D8(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct AnimGraphRuntime_RotationLimit> RotationLimits;                                    // 0x208(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            RotationOffsets;                                   // 0x218(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct AnimGraphRuntime_AnimPhysPlanarLimit> PlanarLimits;                                      // 0x228(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        StretchLimit;                                      // 0x238(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_289[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    FakeVelocity;                                      // 0x240(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_BoneReference                  BaseJoint;                                         // 0x258(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LastBoneRotationAnimAlphaBlend;                    // 0x268(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C[0x34];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
struct AnimGraphRuntime_ReferenceBoneFrame
{
public:
	struct Engine_BoneReference                  bone;                                              // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct AnimationCore_Axis                    Axis;                                              // 0x10(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0x168 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
struct AnimGraphRuntime_AnimNode_TwistCorrectiveNode : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct AnimGraphRuntime_ReferenceBoneFrame   BaseFrame;                                         // 0xC8(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct AnimGraphRuntime_ReferenceBoneFrame   TwistFrame;                                        // 0xF8(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct AnimationCore_Axis                    TwistPlaneNormalAxis;                              // 0x128(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RangeMax;                                          // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMin;                                       // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMax;                                       // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CurveName;                                         // 0x154(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_295[0xC];                                      // Fixing Size Of Struct 
};

// 0x1B8 (0x280 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
struct AnimGraphRuntime_AnimNode_TwoBoneIK : public AnimGraphRuntime_AnimNode_SkeletalControlBase
{
public:
	struct Engine_BoneReference                  IKBone;                                            // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	double                                       StartStretchRatio;                                 // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MaxStretchScale;                                   // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    EffectorLocation;                                  // 0xE8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29B[0x10];                                     // Fixing Size After Last Property  
	struct Engine_BoneSocketTarget               EffectorTarget;                                    // 0x110(0x90)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    JointTargetLocation;                               // 0x1A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E[0x8];                                      // Fixing Size After Last Property  
	struct Engine_BoneSocketTarget               JointTarget;                                       // 0x1C0(0x90)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct AnimationCore_Axis                    TwistAxis;                                         // 0x250(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 EffectorLocationSpace;                             // 0x270(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 JointTargetLocationSpace;                          // 0x271(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowStretching : 1;                              // Mask: 0x1, PropSize: 0x10x272(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTakeRotationFromEffectorSpace : 1;                // Mask: 0x2, PropSize: 0x10x272(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMaintainEffectorRelRot : 1;                       // Mask: 0x4, PropSize: 0x10x272(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowTwist : 1;                                   // Mask: 0x8, PropSize: 0x10x272(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A6[0xD];                                      // Fixing Size Of Struct 
};

// 0x80 (0x80 - 0x0)
// ScriptStruct AnimGraphRuntime.IKFootPelvisPullDownSolver
struct AnimGraphRuntime_IKFootPelvisPullDownSolver
{
public:
	struct Engine_VectorRK4SpringInterpolator    PelvisAdjustmentInterp;                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A8[0x58];                                     // Fixing Size After Last Property  
	double                                       PelvisAdjustmentInterpAlpha;                       // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       PelvisAdjustmentMaxDistance;                       // 0x68(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       PelvisAdjustmentErrorTolerance;                    // 0x70(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PelvisAdjustmentMaxIter;                           // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A9[0x4];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AnimGraphRuntime.WarpingVectorValue
struct AnimGraphRuntime_WarpingVectorValue
{
public:
	enum class EWarpingVectorMode                Mode;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AE[0x7];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.LayeredBoneBlendReference
struct AnimGraphRuntime_LayeredBoneBlendReference : public Engine_AnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.LinkedAnimGraphReference
struct AnimGraphRuntime_LinkedAnimGraphReference : public Engine_AnimNodeReference
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimGraphRuntime.RBFEntry
struct AnimGraphRuntime_RBFEntry
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0xA0 - 0x10)
// ScriptStruct AnimGraphRuntime.RBFTarget
struct AnimGraphRuntime_RBFTarget : public AnimGraphRuntime_RBFEntry
{
public:
	float                                        ScaleFactor;                                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyCustomCurve;                                 // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C3[0x3];                                      // Fixing Size After Last Property  
	struct Engine_RichCurve                      CustomCurve;                                       // 0x18(0x80)(Edit, NativeAccessSpecifierPublic)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFFunctionType                  FunctionType;                                      // 0x99(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C7[0x6];                                      // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.SequenceEvaluatorReference
struct AnimGraphRuntime_SequenceEvaluatorReference : public Engine_AnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.SequencePlayerReference
struct AnimGraphRuntime_SequencePlayerReference : public Engine_AnimNodeReference
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.SkeletalControlReference
struct AnimGraphRuntime_SkeletalControlReference : public Engine_AnimNodeReference
{
public:
};

}


