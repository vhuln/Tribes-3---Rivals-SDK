#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERigElementType : uint8
{
	None                           = 0,
	Bone                           = 1,
	Null                           = 2,
	Space                          = 2,
	Control                        = 4,
	Curve                          = 8,
	RigidBody                      = 16,
	Reference                      = 32,
	Last                           = 64,
	All                            = 63,
	ToResetAfterConstructionEvent  = 13,
	ERigElementType_MAX            = 65,
};

enum class ERigHierarchyNotification : uint8
{
	ElementAdded                   = 0,
	ElementRemoved                 = 1,
	ElementRenamed                 = 2,
	ElementSelected                = 3,
	ElementDeselected              = 4,
	ParentChanged                  = 5,
	HierarchyReset                 = 6,
	ControlSettingChanged          = 7,
	ControlVisibilityChanged       = 8,
	ControlDrivenListChanged       = 9,
	ControlShapeTransformChanged   = 10,
	ParentWeightsChanged           = 11,
	InteractionBracketOpened       = 12,
	InteractionBracketClosed       = 13,
	ElementReordered               = 14,
	Max                            = 15,
};

enum class ERigControlTransformChannel : uint8
{
	TranslationX                   = 0,
	TranslationY                   = 1,
	TranslationZ                   = 2,
	Pitch                          = 3,
	Yaw                            = 4,
	Roll                           = 5,
	ScaleX                         = 6,
	ScaleY                         = 7,
	ScaleZ                         = 8,
	ERigControlTransformChannel_MAX = 9,
};

enum class ERigControlVisibility : uint8
{
	UserDefined                    = 0,
	BasedOnSelection               = 1,
	ERigControlVisibility_MAX      = 2,
};

enum class ERigControlAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ERigControlAxis_MAX            = 3,
};

enum class ERigControlType : uint8
{
	Bool                           = 0,
	Float                          = 1,
	Integer                        = 2,
	Vector2D                       = 3,
	Position                       = 4,
	Scale                          = 5,
	Rotator                        = 6,
	Transform                      = 7,
	TransformNoScale               = 8,
	EulerTransform                 = 9,
	ERigControlType_MAX            = 10,
};

enum class ERigControlAnimationType : uint8
{
	AnimationControl               = 0,
	AnimationChannel               = 1,
	ProxyControl                   = 2,
	VisualCue                      = 3,
	ERigControlAnimationType_MAX   = 4,
};

enum class ERigExecutionType : uint8
{
	Runtime                        = 0,
	Editing                        = 1,
	Max                            = 2,
};

enum class ERigTransformStackEntryType : uint8
{
	TransformPose                  = 0,
	ControlOffset                  = 1,
	ControlShape                   = 2,
	CurveValue                     = 3,
	ERigTransformStackEntryType_MAX = 4,
};

enum class ERigTransformType : uint8
{
	InitialLocal                   = 0,
	CurrentLocal                   = 1,
	InitialGlobal                  = 2,
	CurrentGlobal                  = 3,
	NumTransformTypes              = 4,
	ERigTransformType_MAX          = 5,
};

enum class EControlRigInteractionType : uint8
{
	None                           = 0,
	Translate                      = 1,
	Rotate                         = 2,
	Scale                          = 4,
	All                            = 7,
	EControlRigInteractionType_MAX = 8,
};

enum class EControlRigVectorKind : uint8
{
	Direction                      = 0,
	Location                       = 1,
	EControlRigVectorKind_MAX      = 2,
};

enum class EControlRigComponentSpace : uint8
{
	WorldSpace                     = 0,
	ActorSpace                     = 1,
	ComponentSpace                 = 2,
	RigSpace                       = 3,
	LocalSpace                     = 4,
	Max                            = 5,
};

enum class EControlRigComponentMapDirection : uint8
{
	Input                          = 0,
	Output                         = 1,
	EControlRigComponentMapDirection_MAX = 2,
};

enum class ETransformSpaceMode : uint8
{
	LocalSpace                     = 0,
	GlobalSpace                    = 1,
	BaseSpace                      = 2,
	BaseJoint                      = 3,
	Max                            = 4,
};

enum class ETransformGetterType : uint8
{
	Initial                        = 0,
	Current                        = 1,
	Max                            = 2,
};

enum class EControlRigTestDataPlaybackMode : uint8
{
	Live                           = 0,
	ReplayInputs                   = 1,
	GroundTruth                    = 2,
	Max                            = 3,
};

enum class ECRSimConstraintType : uint8
{
	Distance                       = 0,
	DistanceFromA                  = 1,
	DistanceFromB                  = 2,
	Plane                          = 3,
	ECRSimConstraintType_MAX       = 4,
};

enum class ECRSimPointForceType : uint8
{
	Direction                      = 0,
	ECRSimPointForceType_MAX       = 1,
};

enum class ECRSimSoftCollisionType : uint8
{
	Plane                          = 0,
	Sphere                         = 1,
	Cone                           = 2,
	ECRSimSoftCollisionType_MAX    = 3,
};

enum class EControlRigFKRigExecuteMode : uint8
{
	Replace                        = 0,
	Additive                       = 1,
	Direct                         = 2,
	Max                            = 3,
};

enum class ERigBoneType : uint8
{
	Imported                       = 0,
	User                           = 1,
	ERigBoneType_MAX               = 2,
};

enum class ERigMetadataType : uint8
{
	Bool                           = 0,
	BoolArray                      = 1,
	Float                          = 2,
	FloatArray                     = 3,
	Int32                          = 4,
	Int32Array                     = 5,
	Name                           = 6,
	NameArray                      = 7,
	Vector                         = 8,
	VectorArray                    = 9,
	Rotator                        = 10,
	RotatorArray                   = 11,
	Quat                           = 12,
	QuatArray                      = 13,
	Transform                      = 14,
	TransformArray                 = 15,
	LinearColor                    = 16,
	LinearColorArray               = 17,
	RigElementKey                  = 18,
	RigElementKeyArray             = 19,
	Invalid                        = 20,
	ERigMetadataType_MAX           = 21,
};

enum class ERigEvent : uint8
{
	None                           = 0,
	RequestAutoKey                 = 1,
	OpenUndoBracket                = 2,
	CloseUndoBracket               = 3,
	Max                            = 4,
};

enum class EControlRigSetKey : uint8
{
	DoNotCare                      = 0,
	Always                         = 1,
	Never                          = 2,
	EControlRigSetKey_MAX          = 3,
};

enum class ERigControlValueType : uint8
{
	Initial                        = 0,
	Current                        = 1,
	Minimum                        = 2,
	Maximum                        = 3,
	ERigControlValueType_MAX       = 4,
};

enum class ERigSpaceType : uint8
{
	Global                         = 0,
	Bone                           = 1,
	Control                        = 2,
	Space                          = 3,
	ERigSpaceType_MAX              = 4,
};

enum class EMovieSceneControlRigSpaceType : uint8
{
	Parent                         = 0,
	World                          = 1,
	ControlRig                     = 2,
	EMovieSceneControlRigSpaceType_MAX = 3,
};

enum class EControlRigDrawHierarchyMode : uint8
{
	Axes                           = 0,
	Max                            = 1,
};

enum class EAimMode : uint8
{
	AimAtTarget                    = 0,
	OrientToTarget                 = 1,
	MAX                            = 2,
};

enum class EApplyTransformMode : uint8
{
	Override                       = 0,
	Additive                       = 1,
	Max                            = 2,
};

enum class ERigSwitchParentMode : uint8
{
	World                          = 0,
	DefaultParent                  = 1,
	ParentItem                     = 2,
	ERigSwitchParentMode_MAX       = 3,
};

enum class EControlRigCurveAlignment : uint8
{
	Front                          = 0,
	Stretched                      = 1,
	EControlRigCurveAlignment_MAX  = 2,
};

enum class EControlRigModifyBoneMode : uint8
{
	OverrideLocal                  = 0,
	OverrideGlobal                 = 1,
	AdditiveLocal                  = 2,
	AdditiveGlobal                 = 3,
	Max                            = 4,
};

enum class EConstraintInterpType : uint8
{
	Average                        = 0,
	Shortest                       = 1,
	Max                            = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigElementKey
struct ControlRig_RigElementKey
{
public:
	enum class ERigElementType                   Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4766[0x3];                                     // Fixing Size After Last Property  
	class FName                                  Name;                                              // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct ControlRig.RigBaseElement
struct ControlRig_RigBaseElement
{
public:
	uint8                                        Pad_476A[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKey              Key;                                               // 0x8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_476B[0x4];                                     // Fixing Size After Last Property  
	class FString                                NameString;                                        // 0x18(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Index;                                             // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SubIndex;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_476D[0xA8];                                    // Fixing Size After Last Property  
	int32                                        CreatedAtInstructionIndex;                         // 0xD8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_476F[0x8];                                     // Fixing Size After Last Property  
	bool                                         bSelected;                                         // 0xE4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4770[0x3];                                     // Fixing Size Of Struct 
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigComputedTransform
struct ControlRig_RigComputedTransform
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct ControlRig.RigLocalAndGlobalTransform
struct ControlRig_RigLocalAndGlobalTransform
{
public:
	struct ControlRig_RigComputedTransform       Local;                                             // 0x0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigComputedTransform       Global;                                            // 0x60(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4773[0x10];                                    // Fixing Size Of Struct 
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct ControlRig.RigCurrentAndInitialTransform
struct ControlRig_RigCurrentAndInitialTransform
{
public:
	struct ControlRig_RigLocalAndGlobalTransform Current;                                           // 0x0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigLocalAndGlobalTransform Initial;                                           // 0xD0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1E8 (0x2D0 - 0xE8)
// ScriptStruct ControlRig.RigTransformElement
struct ControlRig_RigTransformElement : public ControlRig_RigBaseElement
{
public:
	uint8                                        Pad_4775[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_RigCurrentAndInitialTransform Pose;                                              // 0xF0(0x1A0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4776[0x40];                                    // Fixing Size Of Struct 
};

// 0x100 (0x3D0 - 0x2D0)
// ScriptStruct ControlRig.RigMultiParentElement
struct ControlRig_RigMultiParentElement : public ControlRig_RigTransformElement
{
public:
	uint8                                        Pad_4777[0x100];                                   // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.RigControlLimitEnabled
struct ControlRig_RigControlLimitEnabled
{
public:
	bool                                         bMinimum;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaximum;                                          // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x84 (0x84 - 0x0)
// ScriptStruct ControlRig.RigControlValueStorage
struct ControlRig_RigControlValueStorage
{
public:
	float                                        Float00;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float01;                                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float02;                                           // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float03;                                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float10;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float11;                                           // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float12;                                           // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float13;                                           // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float20;                                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float21;                                           // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float22;                                           // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float23;                                           // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float30;                                           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float31;                                           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float32;                                           // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float33;                                           // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float00_2;                                         // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float01_2;                                         // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float02_2;                                         // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float03_2;                                         // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float10_2;                                         // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float11_2;                                         // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float12_2;                                         // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float13_2;                                         // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float20_2;                                         // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float21_2;                                         // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float22_2;                                         // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float23_2;                                         // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float30_2;                                         // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float31_2;                                         // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float32_2;                                         // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float33_2;                                         // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValid;                                            // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_477A[0x3];                                     // Fixing Size Of Struct 
};

// 0x84 (0x84 - 0x0)
// ScriptStruct ControlRig.RigControlValue
struct ControlRig_RigControlValue
{
public:
	struct ControlRig_RigControlValueStorage     FloatStorage;                                      // 0x0(0x84)(NoDestructor, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigControlElementCustomization
struct ControlRig_RigControlElementCustomization
{
public:
	TArray<struct ControlRig_RigElementKey>      AvailableSpaces;                                   // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigElementKey>      RemovedSpaces;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1B8 (0x1B8 - 0x0)
// ScriptStruct ControlRig.RigControlSettings
struct ControlRig_RigControlSettings
{
public:
	enum class ERigControlAnimationType          AnimationType;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigControlType                   ControlType;                                       // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_477E[0x2];                                     // Fixing Size After Last Property  
	class FName                                  DisplayName;                                       // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCurve;                                          // 0xD(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4780[0x2];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigControlLimitEnabled> LimitEnabled;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4782[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigControlValue            MinimumValue;                                      // 0x24(0x84)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigControlValue            MaximumValue;                                      // 0xA8(0x84)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShapeVisible;                                     // 0x12C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigControlVisibility             ShapeVisibility;                                   // 0x12D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4783[0x2];                                     // Fixing Size After Last Property  
	class FName                                  ShapeName;                                         // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               ShapeColor;                                        // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTransientControl;                               // 0x148(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4785[0x7];                                     // Fixing Size After Last Property  
	class UEnum*                                 ControlEnum;                                       // 0x150(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigControlElementCustomization Customization;                                     // 0x158(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigElementKey>      DrivenControls;                                    // 0x178(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4787[0x10];                                    // Fixing Size After Last Property  
	bool                                         bGroupWithParentControl;                           // 0x198(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRestrictSpaceSwitching;                           // 0x199(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4788[0x6];                                     // Fixing Size After Last Property  
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0x1A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               PreferredRotationOrder;                            // 0x1B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePreferredRotationOrder;                        // 0x1B1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4789[0x6];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ControlRig.RigPreferredEulerAngles
struct ControlRig_RigPreferredEulerAngles
{
public:
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_478A[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Current;                                           // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Initial;                                           // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x540 (0x910 - 0x3D0)
// ScriptStruct ControlRig.RigControlElement
struct ControlRig_RigControlElement : public ControlRig_RigMultiParentElement
{
public:
	struct ControlRig_RigControlSettings         Settings;                                          // 0x3D0(0x1B8)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_478E[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_RigCurrentAndInitialTransform Offset;                                            // 0x590(0x1A0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigCurrentAndInitialTransform Shape;                                             // 0x730(0x1A0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigPreferredEulerAngles    PreferredEulerAngles;                              // 0x8D0(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_478F[0x8];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigInfluenceEntry
struct ControlRig_RigInfluenceEntry
{
public:
	struct ControlRig_RigElementKey              Source;                                            // 0x0(0xC)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4794[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      AffectedList;                                      // 0x10(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ControlRig.RigInfluenceMap
struct ControlRig_RigInfluenceMap
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct ControlRig_RigInfluenceEntry>  Entries;                                           // 0x8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct ControlRig_RigElementKey, int32> KeyToIndex;                                        // 0x18(0x50)(Protected, NativeAccessSpecifierProtected)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigInfluenceMapPerEvent
struct ControlRig_RigInfluenceMapPerEvent
{
public:
	TArray<struct ControlRig_RigInfluenceMap>    Maps;                                              // 0x0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, int32>                     EventToIndex;                                      // 0x10(0x50)(Protected, NativeAccessSpecifierProtected)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ControlRig.RigHierarchySettings
struct ControlRig_RigHierarchySettings
{
public:
	int32                                        ProceduralElementLimit;                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x148 - 0x8)
// ScriptStruct ControlRig.MovieSceneControlRigInstanceData
struct ControlRig_MovieSceneControlRigInstanceData : public MovieScene_MovieSceneSequenceInstanceData
{
public:
	bool                                         bAdditive;                                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyBoneFilter;                                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47A4[0x6];                                     // Fixing Size After Last Property  
	struct Engine_InputBlendPose                 BoneFilter;                                        // 0x10(0x10)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     Weight;                                            // 0x20(0x110)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneEvaluationOperand Operand;                                           // 0x130(0x14)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47A6[0x4];                                     // Fixing Size Of Struct 
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ControlRig.RigTransformStackEntry
struct ControlRig_RigTransformStackEntry
{
public:
	struct ControlRig_RigElementKey              Key;                                               // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigTransformStackEntryType       EntryType;                                         // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigTransformType                 TransformType;                                     // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47AC[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 OldTransform;                                      // 0x10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 NewTransform;                                      // 0x70(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectChildren;                                   // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47AD[0x7];                                     // Fixing Size After Last Property  
	TArray<class FString>                        Callstack;                                         // 0xD8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_47AE[0x8];                                     // Fixing Size Of Struct 
};

// 0x8 (0x2D8 - 0x2D0)
// ScriptStruct ControlRig.RigSingleParentElement
struct ControlRig_RigSingleParentElement : public ControlRig_RigTransformElement
{
public:
	uint8                                        Pad_47AF[0x8];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigElementWeight
struct ControlRig_RigElementWeight
{
public:
	float                                        Location;                                          // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rotation;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigElementParentConstraint
struct ControlRig_RigElementParentConstraint
{
public:
	uint8                                        Pad_47B2[0x90];                                    // Fixing Size Of Struct 
};

// 0x8 (0x2E0 - 0x2D8)
// ScriptStruct ControlRig.RigBoneElement
struct ControlRig_RigBoneElement : public ControlRig_RigSingleParentElement
{
public:
	enum class ERigBoneType                      BoneType;                                          // 0x2D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47B3[0x7];                                     // Fixing Size Of Struct 
};

// 0x0 (0x3D0 - 0x3D0)
// ScriptStruct ControlRig.RigNullElement
struct ControlRig_RigNullElement : public ControlRig_RigMultiParentElement
{
public:
};

// 0x8 (0xF0 - 0xE8)
// ScriptStruct ControlRig.RigCurveElement
struct ControlRig_RigCurveElement : public ControlRig_RigBaseElement
{
public:
	uint8                                        Pad_47BB[0x8];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ControlRig.RigRigidBodySettings
struct ControlRig_RigRigidBodySettings
{
public:
	float                                        Mass;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x2E0 - 0x2D8)
// ScriptStruct ControlRig.RigRigidBodyElement
struct ControlRig_RigRigidBodyElement : public ControlRig_RigSingleParentElement
{
public:
	struct ControlRig_RigRigidBodySettings       Settings;                                          // 0x2D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_47C4[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x2F0 - 0x2D8)
// ScriptStruct ControlRig.RigReferenceElement
struct ControlRig_RigReferenceElement : public ControlRig_RigSingleParentElement
{
public:
	uint8                                        Pad_47C8[0x18];                                    // Fixing Size Of Struct 
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct ControlRig.RigHierarchyCopyPasteContentPerElement
struct ControlRig_RigHierarchyCopyPasteContentPerElement
{
public:
	struct ControlRig_RigElementKey              Key;                                               // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47D1[0x4];                                     // Fixing Size After Last Property  
	class FString                                Content;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigElementKey>      Parents;                                           // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigElementWeight>   ParentWeights;                                     // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigCurrentAndInitialTransform Pose;                                              // 0x40(0x1A0)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.RigHierarchyCopyPasteContent
struct ControlRig_RigHierarchyCopyPasteContent
{
public:
	TArray<struct ControlRig_RigHierarchyCopyPasteContentPerElement> Elements;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<enum class ERigElementType>           Types;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Contents;                                          // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         LocalTransforms;                                   // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         GlobalTransforms;                                  // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x150 - 0xF0)
// ScriptStruct ControlRig.ControlRigExecuteContext
struct ControlRig_ControlRigExecuteContext : public RigVM_RigVMExecuteContext
{
public:
	uint8                                        Pad_47D9[0x60];                                    // Fixing Size Of Struct 
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit
struct ControlRig_RigUnit : public RigVM_RigVMStruct
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugBase
struct ControlRig_RigUnit_DebugBase : public ControlRig_RigUnit
{
public:
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ControlRig.RigUnitMutable
struct ControlRig_RigUnitMutable : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_47DC[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_ControlRigExecuteContext   ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};

// 0x0 (0x160 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugBaseMutable
struct ControlRig_RigUnit_DebugBaseMutable : public ControlRig_RigUnitMutable
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_HighlevelBase
struct ControlRig_RigUnit_HighlevelBase : public ControlRig_RigUnit
{
public:
};

// 0x0 (0x160 - 0x160)
// ScriptStruct ControlRig.RigUnit_HighlevelBaseMutable
struct ControlRig_RigUnit_HighlevelBaseMutable : public ControlRig_RigUnitMutable
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.StructReference
struct ControlRig_StructReference
{
public:
	uint8                                        Pad_47E0[0x8];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.ControlRigIOSettings
struct ControlRig_ControlRigIOSettings
{
public:
	bool                                         bUpdatePose;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateCurves;                                     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.ControlRigAnimNodeEventName
struct ControlRig_ControlRigAnimNodeEventName
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D8 (0x230 - 0x58)
// ScriptStruct ControlRig.AnimNode_ControlRigBase
struct ControlRig_AnimNode_ControlRigBase : public Engine_AnimNode_CustomProperty
{
public:
	struct Engine_PoseLink                       Source;                                            // 0x58(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bResetInputPoseToInitial;                          // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTransferInputPose;                                // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTransferInputCurves;                              // 0x6A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bTransferPoseInGlobalSpace;                        // 0x6B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_47E7[0x4];                                     // Fixing Size After Last Property  
	TArray<struct Engine_BoneReference>          InputBonesToTransfer;                              // 0x70(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	TArray<struct Engine_BoneReference>          OutputBonesToTransfer;                             // 0x80(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_47E8[0x170];                                   // Fixing Size After Last Property  
	TWeakObjectPtr<class UNodeMappingContainer>  NodeMappingContainer;                              // 0x200(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct ControlRig_ControlRigIOSettings       InputSettings;                                     // 0x208(0x2)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct ControlRig_ControlRigIOSettings       OutputSettings;                                    // 0x20A(0x2)(Transient, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bExecute;                                          // 0x20C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_47EB[0xB];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_ControlRigAnimNodeEventName> EventQueue;                                        // 0x218(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_47EC[0x8];                                     // Fixing Size Of Struct 
};

// 0x230 (0x460 - 0x230)
// ScriptStruct ControlRig.AnimNode_ControlRig
struct ControlRig_AnimNode_ControlRig : public ControlRig_AnimNode_ControlRigBase
{
public:
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x230(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UControlRig*                           ControlRig;                                        // 0x238(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Alpha;                                             // 0x240(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x244(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAlphaBoolEnabled : 1;                             // Mask: 0x1, PropSize: 0x10x245(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bSetRefPoseFromSkeleton : 1;                       // Mask: 0x2, PropSize: 0x10x245(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_140 : 6;                                    // Fixing Bit-Field Size  
	uint8                                        Pad_47F0[0x2];                                     // Fixing Size After Last Property  
	struct Engine_InputScaleBias                 AlphaScaleBias;                                    // 0x248(0x8)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	struct Engine_InputAlphaBoolBlend            AlphaBoolBlend;                                    // 0x250(0x48)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	class FName                                  AlphaCurveName;                                    // 0x298(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct Engine_InputScaleBiasClamp            AlphaScaleBiasClamp;                               // 0x2A0(0x30)(Edit, NoDestructor, NativeAccessSpecifierPrivate)
	TMap<class FName, class FName>               InputMapping;                                      // 0x2D0(0x50)(NativeAccessSpecifierPrivate)
	TMap<class FName, class FName>               OutputMapping;                                     // 0x320(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_47F4[0xB0];                                    // Fixing Size After Last Property  
	int32                                        LODThreshold;                                      // 0x420(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_47F6[0x3C];                                    // Fixing Size Of Struct 
};

// 0x8 (0x238 - 0x230)
// ScriptStruct ControlRig.AnimNode_ControlRig_ExternalSource
struct ControlRig_AnimNode_ControlRig_ExternalSource : public ControlRig_AnimNode_ControlRigBase
{
public:
	TWeakObjectPtr<class UControlRig>            ControlRig;                                        // 0x230(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xA8 (0x7A0 - 0x6F8)
// ScriptStruct ControlRig.ControlRigAnimInstanceProxy
struct ControlRig_ControlRigAnimInstanceProxy : public Engine_AnimInstanceProxy
{
public:
	uint8                                        Pad_47FB[0xA8];                                    // Fixing Size Of Struct 
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedElement
struct ControlRig_ControlRigComponentMappedElement
{
public:
	struct Engine_SoftComponentReference         ComponentReference;                                // 0x0(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        TransformIndex;                                    // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TransformName;                                     // 0x4C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4800[0x3];                                     // Fixing Size After Last Property  
	class FName                                  ElementName;                                       // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentMapDirection  Direction;                                         // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4801[0xF];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Offset;                                            // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentSpace         Space;                                             // 0xD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4805[0x3];                                     // Fixing Size After Last Property  
	class USceneComponent*                       SceneComponent;                                    // 0xD8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ElementIndex;                                      // 0xE0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubIndex;                                          // 0xE4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_480A[0x8];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedComponent
struct ControlRig_ControlRigComponentMappedComponent
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ElementName;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigComponentMapDirection  Direction;                                         // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_480F[0x6];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedBone
struct ControlRig_ControlRigComponentMappedBone
{
public:
	class FName                                  Source;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Target;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigComponentMappedCurve
struct ControlRig_ControlRigComponentMappedCurve
{
public:
	class FName                                  Source;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Target;                                            // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C0 (0x1C0 - 0x0)
// ScriptStruct ControlRig.ControlShapeActorCreationParam
struct ControlRig_ControlShapeActorCreationParam
{
public:
	uint8                                        Pad_4813[0x1C0];                                   // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ControlRig.ControlRigShapeDefinition
struct ControlRig_ControlRigShapeDefinition
{
public:
	class FName                                  ShapeName;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UStaticMesh>            StaticMesh;                                        // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Transform;                                         // 0x30(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4818[0x10];                                    // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.ControlRigTestDataVariable
struct ControlRig_ControlRigTestDataVariable
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CPPType;                                           // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.CachedRigElement
struct ControlRig_CachedRigElement
{
public:
	struct ControlRig_RigElementKey              Key;                                               // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       Index;                                             // 0xC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_481C[0x2];                                     // Fixing Size After Last Property  
	int32                                        ContainerVersion;                                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_481D[0xC];                                     // Fixing Size Of Struct 
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ControlRig.RigPoseElement
struct ControlRig_RigPoseElement
{
public:
	struct ControlRig_CachedRigElement           Index;                                             // 0x0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 GlobalTransform;                                   // 0x20(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 LocalTransform;                                    // 0x80(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveValue;                                        // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4820[0xC];                                     // Fixing Size Of Struct 
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigPose
struct ControlRig_RigPose
{
public:
	TArray<struct ControlRig_RigPoseElement>     Elements;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        HierarchyTopologyVersion;                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PoseHash;                                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4823[0x58];                                    // Fixing Size Of Struct 
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.ControlRigTestDataFrame
struct ControlRig_ControlRigTestDataFrame
{
public:
	double                                       AbsoluteTime;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       DeltaTime;                                         // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_ControlRigTestDataVariable> Variables;                                         // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct ControlRig_RigPose                    Pose;                                              // 0x20(0x70)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.ControlRigValidationContext
struct ControlRig_ControlRigValidationContext
{
public:
	uint8                                        Pad_4825[0x28];                                    // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.CRSimContainer
struct ControlRig_CRSimContainer
{
public:
	uint8                                        Pad_4828[0x8];                                     // Fixing Size After Last Property  
	float                                        TimeStep;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedTime;                                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeftForStep;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4829[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.CRSimLinearSpring
struct ControlRig_CRSimLinearSpring
{
public:
	int32                                        SubjectA;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubjectB;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Coefficient;                                       // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Equilibrium;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.CRSimPointConstraint
struct ControlRig_CRSimPointConstraint
{
public:
	enum class ECRSimConstraintType              Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_482D[0x3];                                     // Fixing Size After Last Property  
	int32                                        SubjectA;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SubjectB;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_482F[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    DataA;                                             // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    DataB;                                             // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.CRSimPointForce
struct ControlRig_CRSimPointForce
{
public:
	enum class ECRSimPointForceType              ForceType;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4833[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Vector;                                            // 0x8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Coefficient;                                       // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalize;                                        // 0x24(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4834[0x3];                                     // Fixing Size Of Struct 
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.CRSimSoftCollision
struct ControlRig_CRSimSoftCollision
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECRSimSoftCollisionType           ShapeType;                                         // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4836[0x3];                                     // Fixing Size After Last Property  
	float                                        MinimumDistance;                                   // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDistance;                                   // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              FalloffType;                                       // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4837[0x3];                                     // Fixing Size After Last Property  
	float                                        Coefficient;                                       // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInverted;                                         // 0x74(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4838[0xB];                                     // Fixing Size Of Struct 
};

// 0x60 (0x78 - 0x18)
// ScriptStruct ControlRig.CRSimPointContainer
struct ControlRig_CRSimPointContainer : public ControlRig_CRSimContainer
{
public:
	TArray<struct RigVM_RigVMSimPoint>           Points;                                            // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CRSimLinearSpring>  Springs;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CRSimPointForce>    Forces;                                            // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CRSimSoftCollision> CollisionVolumes;                                  // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CRSimPointConstraint> Constraints;                                       // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct RigVM_RigVMSimPoint>           PreviousStep;                                      // 0x68(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct ControlRig.ConstraintNodeData
struct ControlRig_ConstraintNodeData
{
public:
	struct CoreUObject_Transform                 RelativeParent;                                    // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_ConstraintOffset        ConstraintOffset;                                  // 0x60(0xC0)(NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  LinkedNode;                                        // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct AnimationCore_TransformConstraint> Constraints;                                       // 0x128(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_483C[0x8];                                     // Fixing Size Of Struct 
};

// 0x10 (0x88 - 0x78)
// ScriptStruct ControlRig.AnimationHierarchy
struct ControlRig_AnimationHierarchy : public AnimationCore_NodeHierarchyWithUserData
{
public:
	TArray<struct ControlRig_ConstraintNodeData> UserData;                                          // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigElement
struct ControlRig_RigElement
{
public:
	uint8                                        Pad_4840[0x8];                                     // Fixing Size After Last Property  
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4842[0x4];                                     // Fixing Size Of Struct 
};

// 0x158 (0x170 - 0x18)
// ScriptStruct ControlRig.RigBone
struct ControlRig_RigBone : public ControlRig_RigElement
{
public:
	class FName                                  ParentName;                                        // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x20(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4844[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 InitialTransform;                                  // 0x30(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 GlobalTransform;                                   // 0x90(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 LocalTransform;                                    // 0xF0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Dependents;                                        // 0x150(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	enum class ERigBoneType                      Type;                                              // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4846[0xF];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigBoneHierarchy
struct ControlRig_RigBoneHierarchy
{
public:
	TArray<struct ControlRig_RigBone>            Bones;                                             // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x348 (0x360 - 0x18)
// ScriptStruct ControlRig.RigControl
struct ControlRig_RigControl : public ControlRig_RigElement
{
public:
	enum class ERigControlType                   ControlType;                                       // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_484A[0x3];                                     // Fixing Size After Last Property  
	class FName                                  DisplayName;                                       // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParentName;                                        // 0x24(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SpaceName;                                         // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpaceIndex;                                        // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_484D[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 OffsetTransform;                                   // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigControlValue            InitialValue;                                      // 0xA0(0x84)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigControlValue            Value;                                             // 0x124(0x84)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x1A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCurve;                                          // 0x1A9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAnimatable;                                       // 0x1AA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitTranslation;                                 // 0x1AB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitRotation;                                    // 0x1AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitScale;                                       // 0x1AD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x1AE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_484F[0x1];                                     // Fixing Size After Last Property  
	struct ControlRig_RigControlValue            MinimumValue;                                      // 0x1B0(0x84)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigControlValue            MaximumValue;                                      // 0x234(0x84)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bGizmoEnabled;                                     // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGizmoVisible;                                     // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4851[0x2];                                     // Fixing Size After Last Property  
	class FName                                  GizmoName;                                         // 0x2BC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4853[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 GizmoTransform;                                    // 0x2D0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               GizmoColor;                                        // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Dependents;                                        // 0x340(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                         bIsTransientControl;                               // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4855[0x7];                                     // Fixing Size After Last Property  
	class UEnum*                                 ControlEnum;                                       // 0x358(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigControlHierarchy
struct ControlRig_RigControlHierarchy
{
public:
	TArray<struct ControlRig_RigControl>         Controls;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct ControlRig.RigCurve
struct ControlRig_RigCurve : public ControlRig_RigElement
{
public:
	float                                        Value;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4858[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigCurveContainer
struct ControlRig_RigCurveContainer
{
public:
	TArray<struct ControlRig_RigCurve>           Curves;                                            // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0xD8 (0xF0 - 0x18)
// ScriptStruct ControlRig.RigSpace
struct ControlRig_RigSpace : public ControlRig_RigElement
{
public:
	enum class ERigSpaceType                     SpaceType;                                         // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_485A[0x3];                                     // Fixing Size After Last Property  
	class FName                                  ParentName;                                        // 0x1C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_485B[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 InitialTransform;                                  // 0x30(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 LocalTransform;                                    // 0x90(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigSpaceHierarchy
struct ControlRig_RigSpaceHierarchy
{
public:
	TArray<struct ControlRig_RigSpace>           Spaces;                                            // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigHierarchyContainer
struct ControlRig_RigHierarchyContainer
{
public:
	struct ControlRig_RigBoneHierarchy           BoneHierarchy;                                     // 0x0(0x10)(NativeAccessSpecifierPublic)
	struct ControlRig_RigSpaceHierarchy          SpaceHierarchy;                                    // 0x10(0x10)(NativeAccessSpecifierPublic)
	struct ControlRig_RigControlHierarchy        ControlHierarchy;                                  // 0x20(0x10)(NativeAccessSpecifierPublic)
	struct ControlRig_RigCurveContainer          CurveContainer;                                    // 0x30(0x10)(NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ControlRig.RigHierarchyRef
struct ControlRig_RigHierarchyRef
{
public:
	uint8                                        Pad_4860[0x1];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigControlModifiedContext
struct ControlRig_RigControlModifiedContext
{
public:
	uint8                                        Pad_4863[0x18];                                    // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigElementKeyCollection
struct ControlRig_RigElementKeyCollection
{
public:
	TArray<struct ControlRig_RigElementKey>      Keys;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigEventContext
struct ControlRig_RigEventContext
{
public:
	uint8                                        Pad_4865[0x28];                                    // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigBaseMetadata
struct ControlRig_RigBaseMetadata
{
public:
	uint8                                        Pad_4868[0x10];                                    // Fixing Size After Last Property  
	class FName                                  Name;                                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERigMetadataType                  Type;                                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_486A[0xF];                                     // Fixing Size Of Struct 
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigBoolMetadata
struct ControlRig_RigBoolMetadata : public ControlRig_RigBaseMetadata
{
public:
	bool                                         Value;                                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_486B[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigBoolArrayMetadata
struct ControlRig_RigBoolArrayMetadata : public ControlRig_RigBaseMetadata
{
public:
	TArray<bool>                                 Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigFloatMetadata
struct ControlRig_RigFloatMetadata : public ControlRig_RigBaseMetadata
{
public:
	float                                        Value;                                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_486C[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigFloatArrayMetadata
struct ControlRig_RigFloatArrayMetadata : public ControlRig_RigBaseMetadata
{
public:
	TArray<float>                                Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigInt32Metadata
struct ControlRig_RigInt32Metadata : public ControlRig_RigBaseMetadata
{
public:
	int32                                        Value;                                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4872[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigInt32ArrayMetadata
struct ControlRig_RigInt32ArrayMetadata : public ControlRig_RigBaseMetadata
{
public:
	TArray<int32>                                Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ControlRig.RigNameMetadata
struct ControlRig_RigNameMetadata : public ControlRig_RigBaseMetadata
{
public:
	class FName                                  Value;                                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigNameArrayMetadata
struct ControlRig_RigNameArrayMetadata : public ControlRig_RigBaseMetadata
{
public:
	TArray<class FName>                          Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct ControlRig.RigVectorMetadata
struct ControlRig_RigVectorMetadata : public ControlRig_RigBaseMetadata
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigVectorArrayMetadata
struct ControlRig_RigVectorArrayMetadata : public ControlRig_RigBaseMetadata
{
public:
	TArray<struct CoreUObject_Vector>            Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x18 (0x40 - 0x28)
// ScriptStruct ControlRig.RigRotatorMetadata
struct ControlRig_RigRotatorMetadata : public ControlRig_RigBaseMetadata
{
public:
	struct CoreUObject_Rotator                   Value;                                             // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigRotatorArrayMetadata
struct ControlRig_RigRotatorArrayMetadata : public ControlRig_RigBaseMetadata
{
public:
	TArray<struct CoreUObject_Rotator>           Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x28 (0x50 - 0x28)
// ScriptStruct ControlRig.RigQuatMetadata
struct ControlRig_RigQuatMetadata : public ControlRig_RigBaseMetadata
{
public:
	uint8                                        Pad_4880[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x30(0x20)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigQuatArrayMetadata
struct ControlRig_RigQuatArrayMetadata : public ControlRig_RigBaseMetadata
{
public:
	TArray<struct CoreUObject_Quat>              Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x68 (0x90 - 0x28)
// ScriptStruct ControlRig.RigTransformMetadata
struct ControlRig_RigTransformMetadata : public ControlRig_RigBaseMetadata
{
public:
	uint8                                        Pad_4883[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x30(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigTransformArrayMetadata
struct ControlRig_RigTransformArrayMetadata : public ControlRig_RigBaseMetadata
{
public:
	TArray<struct CoreUObject_Transform>         Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigLinearColorMetadata
struct ControlRig_RigLinearColorMetadata : public ControlRig_RigBaseMetadata
{
public:
	struct CoreUObject_LinearColor               Value;                                             // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigLinearColorArrayMetadata
struct ControlRig_RigLinearColorArrayMetadata : public ControlRig_RigBaseMetadata
{
public:
	TArray<struct CoreUObject_LinearColor>       Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigElementKeyMetadata
struct ControlRig_RigElementKeyMetadata : public ControlRig_RigBaseMetadata
{
public:
	struct ControlRig_RigElementKey              Value;                                             // 0x28(0xC)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_488B[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x38 - 0x28)
// ScriptStruct ControlRig.RigElementKeyArrayMetadata
struct ControlRig_RigElementKeyArrayMetadata : public ControlRig_RigBaseMetadata
{
public:
	TArray<struct ControlRig_RigElementKey>      Value;                                             // 0x28(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigInfluenceEntryModifier
struct ControlRig_RigInfluenceEntryModifier
{
public:
	TArray<struct ControlRig_RigElementKey>      AffectedList;                                      // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x30 - 0x10)
// ScriptStruct ControlRig.AnimNode_ControlRigInputPose
struct ControlRig_AnimNode_ControlRigInputPose : public Engine_AnimNode_Base
{
public:
	struct Engine_PoseLink                       InputPose;                                         // 0x10(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4894[0x10];                                    // Fixing Size Of Struct 
};

// 0xA8 (0x7A0 - 0x6F8)
// ScriptStruct ControlRig.ControlRigLayerInstanceProxy
struct ControlRig_ControlRigLayerInstanceProxy : public Engine_AnimInstanceProxy
{
public:
	uint8                                        Pad_4896[0xA8];                                    // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReference
struct ControlRig_ControlRigSequenceObjectReference
{
public:
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReferences
struct ControlRig_ControlRigSequenceObjectReferences
{
public:
	TArray<struct ControlRig_ControlRigSequenceObjectReference> Array;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.ControlRigSequenceObjectReferenceMap
struct ControlRig_ControlRigSequenceObjectReferenceMap
{
public:
	TArray<struct CoreUObject_Guid>              BindingIds;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct ControlRig_ControlRigSequenceObjectReferences> References;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ControlRig.EnumParameterNameAndCurve
struct ControlRig_EnumParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneByteChannel      ParameterCurve;                                    // 0x8(0x108)(NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct ControlRig.IntegerParameterNameAndCurve
struct ControlRig_IntegerParameterNameAndCurve
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneIntegerChannel   ParameterCurve;                                    // 0x8(0x100)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.MovieSceneControlRigSpaceBaseKey
struct ControlRig_MovieSceneControlRigSpaceBaseKey
{
public:
	enum class EMovieSceneControlRigSpaceType    SpaceType;                                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4899[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKey              ControlRigElement;                                 // 0x4(0xC)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0x110 - 0x50)
// ScriptStruct ControlRig.MovieSceneControlRigSpaceChannel
struct ControlRig_MovieSceneControlRigSpaceChannel : public MovieScene_MovieSceneChannel
{
public:
	TArray<struct CoreUObject_FrameNumber>       KeyTimes;                                          // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct ControlRig_MovieSceneControlRigSpaceBaseKey> KeyValues;                                         // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct MovieScene_MovieSceneKeyHandleMap     KeyHandles;                                        // 0x70(0x88)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_489B[0x18];                                    // Fixing Size Of Struct 
};

// 0x118 (0x118 - 0x0)
// ScriptStruct ControlRig.SpaceControlNameAndChannel
struct ControlRig_SpaceControlNameAndChannel
{
public:
	class FName                                  ControlName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_MovieSceneControlRigSpaceChannel SpaceCurve;                                        // 0x8(0x110)(NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.ChannelMapInfo
struct ControlRig_ChannelMapInfo
{
public:
	int32                                        ControlIndex;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalChannelIndex;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChannelIndex;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentControlIndex;                                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ChannelTypeName;                                   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoesHaveSpace;                                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_489D[0x3];                                     // Fixing Size After Last Property  
	int32                                        SpaceChannelIndex;                                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaskIndex;                                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CategoryIndex;                                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_489F[0x8];                                     // Fixing Size After Last Property  
	TArray<uint32>                               ConstraintsIndex;                                  // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0xC0 - 0x80)
// ScriptStruct ControlRig.MovieSceneControlRigParameterTemplate
struct ControlRig_MovieSceneControlRigParameterTemplate : public MovieSceneTracks_MovieSceneParameterSectionTemplate
{
public:
	TArray<struct ControlRig_EnumParameterNameAndCurve> Enums;                                             // 0x80(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct ControlRig_IntegerParameterNameAndCurve> Integers;                                          // 0x90(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct ControlRig_SpaceControlNameAndChannel> Spaces;                                            // 0xA0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct Constraints_ConstraintAndActiveChannel> Constraints;                                       // 0xB0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.ControlRotationOrder
struct ControlRig_ControlRotationOrder
{
public:
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideSetting;                                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.ControlRigSettingsPerPinBool
struct ControlRig_ControlRigSettingsPerPinBool
{
public:
	TMap<class FString, bool>                    Values;                                            // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x230 (0x230 - 0x0)
// ScriptStruct ControlRig.RigControlCopy
struct ControlRig_RigControlCopy
{
public:
	uint8                                        Pad_48A4[0x10];                                    // Fixing Size After Last Property  
	class FName                                  Name;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigControlType                   ControlType;                                       // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48A6[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigControlValue            Value;                                             // 0x1C(0x84)(NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              ParentKey;                                         // 0xA0(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48AA[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 OffsetTransform;                                   // 0xB0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 ParentTransform;                                   // 0x110(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 LocalTransform;                                    // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 GlobalTransform;                                   // 0x1D0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.ControlRigControlPose
struct ControlRig_ControlRigControlPose
{
public:
	TArray<struct ControlRig_RigControlCopy>     CopyOfControls;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_48AB[0x50];                                    // Fixing Size Of Struct 
};

// 0x0 (0x70 - 0x70)
// ScriptStruct ControlRig.RigDispatchFactory
struct ControlRig_RigDispatchFactory : public RigVM_RigVMDispatchFactory
{
public:
};

// 0x30 (0xA0 - 0x70)
// ScriptStruct ControlRig.RigDispatch_AnimAttributeBase
struct ControlRig_RigDispatch_AnimAttributeBase : public ControlRig_RigDispatchFactory
{
public:
	uint8                                        Pad_48AC[0x30];                                    // Fixing Size Of Struct 
};

// 0x0 (0xA0 - 0xA0)
// ScriptStruct ControlRig.RigDispatch_GetAnimAttribute
struct ControlRig_RigDispatch_GetAnimAttribute : public ControlRig_RigDispatch_AnimAttributeBase
{
public:
};

// 0x0 (0xA0 - 0xA0)
// ScriptStruct ControlRig.RigDispatch_SetAnimAttribute
struct ControlRig_RigDispatch_SetAnimAttribute : public ControlRig_RigDispatch_AnimAttributeBase
{
public:
};

// 0x70 (0x78 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceWorld
struct ControlRig_RigUnit_SphereTraceWorld : public ControlRig_RigUnit
{
public:
	struct CoreUObject_Vector                    Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    End;                                               // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 Channel;                                           // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48B0[0x3];                                     // Fixing Size After Last Property  
	float                                        Radius;                                            // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHit;                                              // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48B4[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    HitLocation;                                       // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    HitNormal;                                         // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x78 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceByTraceChannel
struct ControlRig_RigUnit_SphereTraceByTraceChannel : public ControlRig_RigUnit
{
public:
	struct CoreUObject_Vector                    Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    End;                                               // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48B5[0x3];                                     // Fixing Size After Last Property  
	float                                        Radius;                                            // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHit;                                              // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48B7[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    HitLocation;                                       // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    HitNormal;                                         // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_SphereTraceByObjectTypes
struct ControlRig_RigUnit_SphereTraceByObjectTypes : public ControlRig_RigUnit
{
public:
	struct CoreUObject_Vector                    Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    End;                                               // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EObjectTypeQuery>          ObjectTypes;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHit;                                              // 0x4C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48BA[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    HitLocation;                                       // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    HitNormal;                                         // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x180 - 0x8)
// ScriptStruct ControlRig.RigUnit_Control
struct ControlRig_RigUnit_Control : public ControlRig_RigUnit
{
public:
	struct AnimationCore_EulerTransform          Transform;                                         // 0x8(0x48)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 base;                                              // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 InitTransform;                                     // 0xB0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Result;                                            // 0x110(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_TransformFilter         Filter;                                            // 0x170(0x9)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48BC[0x6];                                     // Fixing Size Of Struct 
};

// 0x60 (0x1E0 - 0x180)
// ScriptStruct ControlRig.RigUnit_Control_StaticMesh
struct ControlRig_RigUnit_Control_StaticMesh : public ControlRig_RigUnit_Control
{
public:
	struct CoreUObject_Transform                 MeshTransform;                                     // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x70 - 0x70)
// ScriptStruct ControlRig.RigDispatch_GetUserData
struct ControlRig_RigDispatch_GetUserData : public ControlRig_RigDispatchFactory
{
public:
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetupShapeLibraryFromUserData
struct ControlRig_RigUnit_SetupShapeLibraryFromUserData : public ControlRig_RigUnitMutable
{
public:
	class FString                                Namespace;                                         // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Path;                                              // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LibraryName;                                       // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReplaceExisting;                                   // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LogShapeLibraries;                                 // 0x191(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48BE[0xE];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_ShapeExists
struct ControlRig_RigUnit_ShapeExists : public ControlRig_RigUnit
{
public:
	class FName                                  ShapeName;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48BF[0x7];                                     // Fixing Size Of Struct 
};

// 0x100 (0x200 - 0x100)
// ScriptStruct ControlRig.RigUnit_DebugBezier
struct ControlRig_RigUnit_DebugBezier : public RigVM_RigVMFunction_DebugBaseMutable
{
public:
	struct RigVM_RigVMFourPointBezier            Bezier;                                            // 0x100(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinimumU;                                          // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumU;                                          // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48C0[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48C1[0xF];                                     // Fixing Size Of Struct 
};

// 0x100 (0x200 - 0x100)
// ScriptStruct ControlRig.RigUnit_DebugBezierItemSpace
struct ControlRig_RigUnit_DebugBezierItemSpace : public RigVM_RigVMFunction_DebugBaseMutable
{
public:
	struct RigVM_RigVMFourPointBezier            Bezier;                                            // 0x100(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MinimumU;                                          // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumU;                                          // 0x164(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Space;                                             // 0x180(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48C3[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48C4[0xF];                                     // Fixing Size Of Struct 
};

// 0x1E8 (0x1F0 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugHierarchy
struct ControlRig_RigUnit_DebugHierarchy : public RigVM_RigVMFunction_DebugBase
{
public:
	uint8                                        Pad_48C5[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_ControlRigExecuteContext   ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x160(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x164(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48C6[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48C7[0xF];                                     // Fixing Size Of Struct 
};

// 0x258 (0x260 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugPose
struct ControlRig_RigUnit_DebugPose : public RigVM_RigVMFunction_DebugBase
{
public:
	uint8                                        Pad_48C9[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_ControlRigExecuteContext   ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct ControlRig_RigPose                    Pose;                                              // 0x160(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x1D4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48CA[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x1F0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48CB[0xF];                                     // Fixing Size Of Struct 
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugLine
struct ControlRig_RigUnit_DebugLine : public ControlRig_RigUnit_DebugBaseMutable
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x160(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x178(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x190(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x1A4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48CD[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x1B0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48CE[0xF];                                     // Fixing Size Of Struct 
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugLineItemSpace
struct ControlRig_RigUnit_DebugLineItemSpace : public ControlRig_RigUnit_DebugBaseMutable
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x160(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x178(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x190(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Space;                                             // 0x1A4(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x1B0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48D0[0xF];                                     // Fixing Size Of Struct 
};

// 0xA0 (0x200 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugLineStrip
struct ControlRig_RigUnit_DebugLineStrip : public ControlRig_RigUnit_DebugBaseMutable
{
public:
	TArray<struct CoreUObject_Vector>            Points;                                            // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x184(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48D1[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48D2[0xF];                                     // Fixing Size Of Struct 
};

// 0xA0 (0x200 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugLineStripItemSpace
struct ControlRig_RigUnit_DebugLineStripItemSpace : public ControlRig_RigUnit_DebugBaseMutable
{
public:
	TArray<struct CoreUObject_Vector>            Points;                                            // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Space;                                             // 0x184(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48D4[0xF];                                     // Fixing Size Of Struct 
};

// 0xF0 (0x250 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugRectangle
struct ControlRig_RigUnit_DebugRectangle : public ControlRig_RigUnit_DebugBaseMutable
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x160(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x1C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x1D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x1E0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48D5[0xF];                                     // Fixing Size Of Struct 
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugRectangleItemSpace
struct ControlRig_RigUnit_DebugRectangleItemSpace : public ControlRig_RigUnit_DebugBaseMutable
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x160(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x1C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Space;                                             // 0x1D8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48D6[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x1F0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48D8[0xF];                                     // Fixing Size Of Struct 
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugArc
struct ControlRig_RigUnit_DebugArc : public ControlRig_RigUnit_DebugBaseMutable
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x160(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x1C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDegrees;                                    // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDegrees;                                    // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x1E4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48D9[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x1F0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48DA[0xF];                                     // Fixing Size Of Struct 
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugArcItemSpace
struct ControlRig_RigUnit_DebugArcItemSpace : public ControlRig_RigUnit_DebugBaseMutable
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x160(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x1C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDegrees;                                    // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDegrees;                                    // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Space;                                             // 0x1E4(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x1F0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48DE[0xF];                                     // Fixing Size Of Struct 
};

// 0x108 (0x110 - 0x8)
// ScriptStruct ControlRig.RigUnit_DebugTransform
struct ControlRig_RigUnit_DebugTransform : public ControlRig_RigUnit_DebugBase
{
public:
	uint8                                        Pad_48DF[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48E0[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x74(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x8C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48E2[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0xA0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48E3[0xF];                                     // Fixing Size Of Struct 
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugTransformMutable
struct ControlRig_RigUnit_DebugTransformMutable : public ControlRig_RigUnit_DebugBaseMutable
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x160(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48E4[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x1C4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x1DC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48E5[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x1F0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48E6[0xF];                                     // Fixing Size Of Struct 
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugTransformMutableItemSpace
struct ControlRig_RigUnit_DebugTransformMutableItemSpace : public ControlRig_RigUnit_DebugBaseMutable
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x160(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48E9[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x1C4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Space;                                             // 0x1DC(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48EA[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x1F0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48EB[0xF];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
struct ControlRig_RigUnit_DebugTransformArrayMutable_WorkData
{
public:
	TArray<struct CoreUObject_Transform>         DrawTransforms;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutable
struct ControlRig_RigUnit_DebugTransformArrayMutable : public ControlRig_RigUnit_DebugBaseMutable
{
public:
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48F2[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x174(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x18C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48F4[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x1A0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x200(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48F5[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_DebugTransformArrayMutable_WorkData WorkData;                                          // 0x208(0x10)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_48F6[0x8];                                     // Fixing Size Of Struct 
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_DebugTransformArrayMutableItemSpace
struct ControlRig_RigUnit_DebugTransformArrayMutableItemSpace : public ControlRig_RigUnit_DebugBaseMutable
{
public:
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48F9[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x184(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Space;                                             // 0x19C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48FA[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x1B0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x210(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48FB[0xF];                                     // Fixing Size Of Struct 
};

// 0x0 (0x100 - 0x100)
// ScriptStruct ControlRig.RigUnit_StartProfilingTimer
struct ControlRig_RigUnit_StartProfilingTimer : public RigVM_RigVMFunction_DebugBaseMutable
{
public:
};

// 0x30 (0x130 - 0x100)
// ScriptStruct ControlRig.RigUnit_EndProfilingTimer
struct ControlRig_RigUnit_EndProfilingTimer : public RigVM_RigVMFunction_DebugBaseMutable
{
public:
	int32                                        NumberOfMeasurements;                              // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48FE[0x4];                                     // Fixing Size After Last Property  
	class FString                                Prefix;                                            // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedTime;                                   // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MeasurementsLeft;                                  // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4901[0xF];                                     // Fixing Size Of Struct 
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugVector
struct ControlRig_RigUnit_VisualDebugVector : public ControlRig_RigUnit_DebugBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitVisualDebugPointMode      Mode;                                              // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4904[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4907[0x4];                                     // Fixing Size Of Struct 
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugVectorItemSpace
struct ControlRig_RigUnit_VisualDebugVectorItemSpace : public ControlRig_RigUnit_DebugBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitVisualDebugPointMode      Mode;                                              // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_490A[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Space;                                             // 0x3C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugQuat
struct ControlRig_RigUnit_VisualDebugQuat : public ControlRig_RigUnit_DebugBase
{
public:
	uint8                                        Pad_490B[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_490D[0x3];                                     // Fixing Size After Last Property  
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_490E[0xC];                                     // Fixing Size Of Struct 
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugQuatItemSpace
struct ControlRig_RigUnit_VisualDebugQuatItemSpace : public ControlRig_RigUnit_DebugBase
{
public:
	uint8                                        Pad_490F[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4910[0x3];                                     // Fixing Size After Last Property  
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Space;                                             // 0x3C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4911[0x8];                                     // Fixing Size Of Struct 
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugTransform
struct ControlRig_RigUnit_VisualDebugTransform : public ControlRig_RigUnit_DebugBase
{
public:
	uint8                                        Pad_4912[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4914[0x3];                                     // Fixing Size After Last Property  
	float                                        Thickness;                                         // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x7C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4915[0xC];                                     // Fixing Size Of Struct 
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_VisualDebugTransformItemSpace
struct ControlRig_RigUnit_VisualDebugTransformItemSpace : public ControlRig_RigUnit_DebugBase
{
public:
	uint8                                        Pad_4916[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4917[0x3];                                     // Fixing Size After Last Property  
	float                                        Thickness;                                         // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Space;                                             // 0x7C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4918[0x8];                                     // Fixing Size Of Struct 
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertTransform
struct ControlRig_RigUnit_ConvertTransform : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4919[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Input;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_EulerTransform          Result;                                            // 0x70(0x48)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_491A[0x8];                                     // Fixing Size Of Struct 
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertEulerTransform
struct ControlRig_RigUnit_ConvertEulerTransform : public ControlRig_RigUnit
{
public:
	struct AnimationCore_EulerTransform          Input;                                             // 0x8(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Result;                                            // 0x50(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertRotation
struct ControlRig_RigUnit_ConvertRotation : public ControlRig_RigUnit
{
public:
	struct CoreUObject_Rotator                   Input;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Result;                                            // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x40 - 0x40)
// ScriptStruct ControlRig.RigUnit_ConvertVectorRotation
struct ControlRig_RigUnit_ConvertVectorRotation : public ControlRig_RigUnit_ConvertRotation
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertQuaternion
struct ControlRig_RigUnit_ConvertQuaternion : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_491B[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Input;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Result;                                            // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_491C[0x8];                                     // Fixing Size Of Struct 
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertVectorToRotation
struct ControlRig_RigUnit_ConvertVectorToRotation : public ControlRig_RigUnit
{
public:
	struct CoreUObject_Vector                    Input;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Result;                                            // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertVectorToQuaternion
struct ControlRig_RigUnit_ConvertVectorToQuaternion : public ControlRig_RigUnit
{
public:
	struct CoreUObject_Vector                    Input;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Result;                                            // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertRotationToVector
struct ControlRig_RigUnit_ConvertRotationToVector : public ControlRig_RigUnit
{
public:
	struct CoreUObject_Rotator                   Input;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ConvertQuaternionToVector
struct ControlRig_RigUnit_ConvertQuaternionToVector : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4921[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Input;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4922[0x8];                                     // Fixing Size Of Struct 
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToSwingAndTwist
struct ControlRig_RigUnit_ToSwingAndTwist : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4924[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Input;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    TwistAxis;                                         // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4928[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Swing;                                             // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Twist;                                             // 0x70(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryFloatOp
struct ControlRig_RigUnit_BinaryFloatOp : public ControlRig_RigUnit
{
public:
	float                                        Argument0;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Argument1;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4929[0x4];                                     // Fixing Size Of Struct 
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Multiply_FloatFloat
struct ControlRig_RigUnit_Multiply_FloatFloat : public ControlRig_RigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Add_FloatFloat
struct ControlRig_RigUnit_Add_FloatFloat : public ControlRig_RigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Subtract_FloatFloat
struct ControlRig_RigUnit_Subtract_FloatFloat : public ControlRig_RigUnit_BinaryFloatOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ControlRig.RigUnit_Divide_FloatFloat
struct ControlRig_RigUnit_Divide_FloatFloat : public ControlRig_RigUnit_BinaryFloatOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_Clamp_Float
struct ControlRig_RigUnit_Clamp_Float : public ControlRig_RigUnit
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_MapRange_Float
struct ControlRig_RigUnit_MapRange_Float : public ControlRig_RigUnit
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinIn;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxIn;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinOut;                                            // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxOut;                                            // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryQuaternionOp
struct ControlRig_RigUnit_BinaryQuaternionOp : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4931[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Argument0;                                         // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Argument1;                                         // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Result;                                            // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x70 - 0x70)
// ScriptStruct ControlRig.RigUnit_MultiplyQuaternion
struct ControlRig_RigUnit_MultiplyQuaternion : public ControlRig_RigUnit_BinaryQuaternionOp
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_UnaryQuaternionOp
struct ControlRig_RigUnit_UnaryQuaternionOp : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4935[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Argument;                                          // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Result;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_InverseQuaterion
struct ControlRig_RigUnit_InverseQuaterion : public ControlRig_RigUnit_UnaryQuaternionOp
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionToAxisAndAngle
struct ControlRig_RigUnit_QuaternionToAxisAndAngle : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4937[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Argument;                                          // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Axis;                                              // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4939[0x4];                                     // Fixing Size Of Struct 
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionFromAxisAndAngle
struct ControlRig_RigUnit_QuaternionFromAxisAndAngle : public ControlRig_RigUnit
{
public:
	struct CoreUObject_Vector                    Axis;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_493C[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Result;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_QuaternionToAngle
struct ControlRig_RigUnit_QuaternionToAngle : public ControlRig_RigUnit
{
public:
	struct CoreUObject_Vector                    Axis;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Argument;                                          // 0x20(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_493F[0xC];                                     // Fixing Size Of Struct 
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryTransformOp
struct ControlRig_RigUnit_BinaryTransformOp : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4940[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Argument0;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Argument1;                                         // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Result;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_MultiplyTransform
struct ControlRig_RigUnit_MultiplyTransform : public ControlRig_RigUnit_BinaryTransformOp
{
public:
};

// 0x0 (0x130 - 0x130)
// ScriptStruct ControlRig.RigUnit_GetRelativeTransform
struct ControlRig_RigUnit_GetRelativeTransform : public ControlRig_RigUnit_BinaryTransformOp
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_BinaryVectorOp
struct ControlRig_RigUnit_BinaryVectorOp : public ControlRig_RigUnit
{
public:
	struct CoreUObject_Vector                    Argument0;                                         // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Argument1;                                         // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Multiply_VectorVector
struct ControlRig_RigUnit_Multiply_VectorVector : public ControlRig_RigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Add_VectorVector
struct ControlRig_RigUnit_Add_VectorVector : public ControlRig_RigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Subtract_VectorVector
struct ControlRig_RigUnit_Subtract_VectorVector : public ControlRig_RigUnit_BinaryVectorOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct ControlRig.RigUnit_Divide_VectorVector
struct ControlRig_RigUnit_Divide_VectorVector : public ControlRig_RigUnit_BinaryVectorOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_Distance_VectorVector
struct ControlRig_RigUnit_Distance_VectorVector : public ControlRig_RigUnit
{
public:
	struct CoreUObject_Vector                    Argument0;                                         // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Argument1;                                         // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_494C[0x4];                                     // Fixing Size Of Struct 
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.AimTarget
struct ControlRig_AimTarget
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_494D[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AlignVector;                                       // 0x70(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_494F[0x8];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_WorkData
struct ControlRig_RigUnit_AimConstraint_WorkData
{
public:
	TArray<struct AnimationCore_ConstraintData>  ConstraintData;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x1D0 - 0x160)
// ScriptStruct ControlRig.RigUnit_AimConstraint
struct ControlRig_RigUnit_AimConstraint : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAimMode                          AimMode;                                           // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAimMode                          UpMode;                                            // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4956[0x6];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    AimVector;                                         // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    UpVector;                                          // 0x188(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_AimTarget>          AimTargets;                                        // 0x1A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_AimTarget>          UpTargets;                                         // 0x1B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_AimConstraint_WorkData WorkData;                                          // 0x1C0(0x10)(NativeAccessSpecifierPublic)
};

// 0xF0 (0x250 - 0x160)
// ScriptStruct ControlRig.RigUnit_ApplyFK
struct ControlRig_RigUnit_ApplyFK : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4958[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_TransformFilter         Filter;                                            // 0x1D0(0x9)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EApplyTransformMode               ApplyTransformMode;                                // 0x1D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               ApplyTransformSpace;                               // 0x1DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_495A[0x5];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 BaseTransform;                                     // 0x1E0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BaseJoint;                                         // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_495B[0x8];                                     // Fixing Size Of Struct 
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.BlendTarget
struct ControlRig_BlendTarget
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_495D[0xC];                                     // Fixing Size Of Struct 
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct ControlRig.RigUnit_BlendTransform
struct ControlRig_RigUnit_BlendTransform : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4960[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Source;                                            // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_BlendTarget>        Targets;                                           // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Result;                                            // 0x80(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0x240 - 0x160)
// ScriptStruct ControlRig.RigUnit_GetJointTransform
struct ControlRig_RigUnit_GetJointTransform : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Joint;                                             // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformGetterType              Type;                                              // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               TransformSpace;                                    // 0x169(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4963[0x6];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 BaseTransform;                                     // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BaseJoint;                                         // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4964[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Output;                                            // 0x1E0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x310 (0x470 - 0x160)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKFK
struct ControlRig_RigUnit_TwoBoneIKFK : public ControlRig_RigUnitMutable
{
public:
	class FName                                  StartJoint;                                        // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndJoint;                                          // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PoleTarget;                                        // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spin;                                              // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4965[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 EndEffector;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IKBlend;                                           // 0x1F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4967[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 StartJointFKTransform;                             // 0x200(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Transform                 MidJointFKTransform;                               // 0x260(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Transform                 EndJointFKTransform;                               // 0x2C0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PreviousFKIKBlend;                                 // 0x320(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4968[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 StartJointIKTransform;                             // 0x330(0x60)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Transform                 MidJointIKTransform;                               // 0x390(0x60)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Transform                 EndJointIKTransform;                               // 0x3F0(0x60)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        StartJointIndex;                                   // 0x450(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MidJointIndex;                                     // 0x454(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        EndJointIndex;                                     // 0x458(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        UpperLimbLength;                                   // 0x45C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LowerLimbLength;                                   // 0x460(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsInitialized;                                    // 0x464(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_496A[0xB];                                     // Fixing Size Of Struct 
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_DrawContainerGetInstruction
struct ControlRig_RigUnit_DrawContainerGetInstruction : public ControlRig_RigUnit
{
public:
	class FName                                  InstructionName;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetColor
struct ControlRig_RigUnit_DrawContainerSetColor : public ControlRig_RigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4978[0x8];                                     // Fixing Size Of Struct 
};

// 0x10 (0x170 - 0x160)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetThickness
struct ControlRig_RigUnit_DrawContainerSetThickness : public ControlRig_RigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_497B[0x4];                                     // Fixing Size Of Struct 
};

// 0x70 (0x1D0 - 0x160)
// ScriptStruct ControlRig.RigUnit_DrawContainerSetTransform
struct ControlRig_RigUnit_DrawContainerSetTransform : public ControlRig_RigUnitMutable
{
public:
	class FName                                  InstructionName;                                   // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_497D[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ControlRig.RigUnit_BeginExecution
struct ControlRig_RigUnit_BeginExecution : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_497F[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_ControlRigExecuteContext   ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionBase
struct ControlRig_RigUnit_CollectionBase : public ControlRig_RigUnit
{
public:
};

// 0x0 (0x160 - 0x160)
// ScriptStruct ControlRig.RigUnit_CollectionBaseMutable
struct ControlRig_RigUnit_CollectionBaseMutable : public ControlRig_RigUnitMutable
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChain
struct ControlRig_RigUnit_CollectionChain : public ControlRig_RigUnit_CollectionBase
{
public:
	struct ControlRig_RigElementKey              FirstItem;                                         // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              LastItem;                                          // 0x14(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reverse;                                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4983[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKeyCollection    Collection;                                        // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChainArray
struct ControlRig_RigUnit_CollectionChainArray : public ControlRig_RigUnit_CollectionBase
{
public:
	struct ControlRig_RigElementKey              FirstItem;                                         // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              LastItem;                                          // 0x14(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reverse;                                           // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4985[0x7];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionNameSearch
struct ControlRig_RigUnit_CollectionNameSearch : public ControlRig_RigUnit_CollectionBase
{
public:
	class FName                                  PartialName;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   TypeToSearch;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_498A[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKeyCollection    Collection;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionNameSearchArray
struct ControlRig_RigUnit_CollectionNameSearchArray : public ControlRig_RigUnit_CollectionBase
{
public:
	class FName                                  PartialName;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   TypeToSearch;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_498B[0x7];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChildren
struct ControlRig_RigUnit_CollectionChildren : public ControlRig_RigUnit_CollectionBase
{
public:
	struct ControlRig_RigElementKey              Parent;                                            // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeParent;                                    // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   TypeToSearch;                                      // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4990[0x1];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKeyCollection    Collection;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionChildrenArray
struct ControlRig_RigUnit_CollectionChildrenArray : public ControlRig_RigUnit_CollectionBase
{
public:
	struct ControlRig_RigElementKey              Parent;                                            // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeParent;                                    // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   TypeToSearch;                                      // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4995[0x1];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetAll
struct ControlRig_RigUnit_CollectionGetAll : public ControlRig_RigUnit_CollectionBase
{
public:
	enum class ERigElementType                   TypeToSearch;                                      // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4997[0x7];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReplaceItems
struct ControlRig_RigUnit_CollectionReplaceItems : public ControlRig_RigUnit_CollectionBase
{
public:
	struct ControlRig_RigElementKeyCollection    Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Old;                                               // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  New;                                               // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RemoveInvalidItems;                                // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDuplicates;                                  // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_499B[0x6];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKeyCollection    Collection;                                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReplaceItemsArray
struct ControlRig_RigUnit_CollectionReplaceItemsArray : public ControlRig_RigUnit_CollectionBase
{
public:
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  Old;                                               // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  New;                                               // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RemoveInvalidItems;                                // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDuplicates;                                  // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_499C[0x6];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      Result;                                            // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionItems
struct ControlRig_RigUnit_CollectionItems : public ControlRig_RigUnit_CollectionBase
{
public:
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bAllowDuplicates;                                  // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49A5[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKeyCollection    Collection;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetItems
struct ControlRig_RigUnit_CollectionGetItems : public ControlRig_RigUnit_CollectionBase
{
public:
	struct ControlRig_RigElementKeyCollection    Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndices
struct ControlRig_RigUnit_CollectionGetParentIndices : public ControlRig_RigUnit_CollectionBase
{
public:
	struct ControlRig_RigElementKeyCollection    Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionGetParentIndicesItemArray
struct ControlRig_RigUnit_CollectionGetParentIndicesItemArray : public ControlRig_RigUnit_CollectionBase
{
public:
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionUnion
struct ControlRig_RigUnit_CollectionUnion : public ControlRig_RigUnit_CollectionBase
{
public:
	struct ControlRig_RigElementKeyCollection    A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKeyCollection    B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowDuplicates;                                  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49A7[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKeyCollection    Collection;                                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionIntersection
struct ControlRig_RigUnit_CollectionIntersection : public ControlRig_RigUnit_CollectionBase
{
public:
	struct ControlRig_RigElementKeyCollection    A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKeyCollection    B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKeyCollection    Collection;                                        // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionDifference
struct ControlRig_RigUnit_CollectionDifference : public ControlRig_RigUnit_CollectionBase
{
public:
	struct ControlRig_RigElementKeyCollection    A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKeyCollection    B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKeyCollection    Collection;                                        // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionReverse
struct ControlRig_RigUnit_CollectionReverse : public ControlRig_RigUnit_CollectionBase
{
public:
	struct ControlRig_RigElementKeyCollection    Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKeyCollection    Reversed;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionCount
struct ControlRig_RigUnit_CollectionCount : public ControlRig_RigUnit_CollectionBase
{
public:
	struct ControlRig_RigElementKeyCollection    Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49AC[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionItemAtIndex
struct ControlRig_RigUnit_CollectionItemAtIndex : public ControlRig_RigUnit_CollectionBase
{
public:
	struct ControlRig_RigElementKeyCollection    Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Item;                                              // 0x1C(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x2E0 - 0x160)
// ScriptStruct ControlRig.RigUnit_CollectionLoop
struct ControlRig_RigUnit_CollectionLoop : public ControlRig_RigUnit_CollectionBaseMutable
{
public:
	class FName                                  BlockToRun;                                        // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKeyCollection    Collection;                                        // 0x168(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Item;                                              // 0x178(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x184(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x188(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x18C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_ControlRigExecuteContext   Completed;                                         // 0x190(0x150)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_CollectionAddItem
struct ControlRig_RigUnit_CollectionAddItem : public ControlRig_RigUnit_CollectionBase
{
public:
	struct ControlRig_RigElementKeyCollection    Collection;                                        // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Item;                                              // 0x18(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49AD[0x4];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKeyCollection    Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBase
struct ControlRig_RigUnit_DynamicHierarchyBase : public ControlRig_RigUnit
{
public:
};

// 0x0 (0x160 - 0x160)
// ScriptStruct ControlRig.RigUnit_DynamicHierarchyBaseMutable
struct ControlRig_RigUnit_DynamicHierarchyBaseMutable : public ControlRig_RigUnitMutable
{
public:
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_AddParent
struct ControlRig_RigUnit_AddParent : public ControlRig_RigUnit_DynamicHierarchyBaseMutable
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Parent;                                            // 0x16C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49AF[0x8];                                     // Fixing Size Of Struct 
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetDefaultParent
struct ControlRig_RigUnit_SetDefaultParent : public ControlRig_RigUnit_DynamicHierarchyBaseMutable
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Parent;                                            // 0x16C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49B0[0x8];                                     // Fixing Size Of Struct 
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_SwitchParent
struct ControlRig_RigUnit_SwitchParent : public ControlRig_RigUnit_DynamicHierarchyBaseMutable
{
public:
	enum class ERigSwitchParentMode              Mode;                                              // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49B1[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKey              Child;                                             // 0x164(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Parent;                                            // 0x170(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainGlobal;                                   // 0x17C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49B3[0x3];                                     // Fixing Size Of Struct 
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeights
struct ControlRig_RigUnit_HierarchyGetParentWeights : public ControlRig_RigUnit_DynamicHierarchyBase
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49B4[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementWeight>   Weights;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKeyCollection    Parents;                                           // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParentWeightsArray
struct ControlRig_RigUnit_HierarchyGetParentWeightsArray : public ControlRig_RigUnit_DynamicHierarchyBase
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49B6[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementWeight>   Weights;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigElementKey>      Parents;                                           // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchySetParentWeights
struct ControlRig_RigUnit_HierarchySetParentWeights : public ControlRig_RigUnit_DynamicHierarchyBaseMutable
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49B9[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementWeight>   Weights;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x160 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchyReset
struct ControlRig_RigUnit_HierarchyReset : public ControlRig_RigUnit_DynamicHierarchyBaseMutable
{
public:
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchyImportFromSkeleton
struct ControlRig_RigUnit_HierarchyImportFromSkeleton : public ControlRig_RigUnit_DynamicHierarchyBaseMutable
{
public:
	class FName                                  Namespace;                                         // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeCurves;                                    // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49BD[0x7];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x170(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x170 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchyRemoveElement
struct ControlRig_RigUnit_HierarchyRemoveElement : public ControlRig_RigUnit_DynamicHierarchyBaseMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x16C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49BF[0x3];                                     // Fixing Size Of Struct 
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchyAddElement
struct ControlRig_RigUnit_HierarchyAddElement : public ControlRig_RigUnit_DynamicHierarchyBaseMutable
{
public:
	struct ControlRig_RigElementKey              Parent;                                            // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x16C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Item;                                              // 0x174(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x1F0 - 0x180)
// ScriptStruct ControlRig.RigUnit_HierarchyAddBone
struct ControlRig_RigUnit_HierarchyAddBone : public ControlRig_RigUnit_HierarchyAddElement
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49C2[0xF];                                     // Fixing Size Of Struct 
};

// 0x70 (0x1F0 - 0x180)
// ScriptStruct ControlRig.RigUnit_HierarchyAddNull
struct ControlRig_RigUnit_HierarchyAddNull : public ControlRig_RigUnit_HierarchyAddElement
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49C3[0xF];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_Settings
struct ControlRig_RigUnit_HierarchyAddControl_Settings
{
public:
	uint8                                        Pad_49C4[0x8];                                     // Fixing Size After Last Property  
	class FName                                  DisplayName;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
struct ControlRig_RigUnit_HierarchyAddControl_ShapeSettings
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49C6[0x3];                                     // Fixing Size After Last Property  
	class FName                                  Name;                                              // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0xC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49C7[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControl_ProxySettings
struct ControlRig_RigUnit_HierarchyAddControl_ProxySettings
{
public:
	bool                                         bIsProxy;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49C8[0x7];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      DrivenControls;                                    // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigControlVisibility             ShapeVisibility;                                   // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49C9[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
struct ControlRig_RigUnit_HierarchyAddControlFloat_LimitSettings
{
public:
	struct ControlRig_RigControlLimitEnabled     Limit;                                             // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_49CA[0x2];                                     // Fixing Size After Last Property  
	float                                        MinValue;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49CB[0x3];                                     // Fixing Size Of Struct 
};

// 0xC0 (0xD0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat_Settings
struct ControlRig_RigUnit_HierarchyAddControlFloat_Settings : public ControlRig_RigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49CE[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControlFloat_LimitSettings Limits;                                            // 0x14(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_49CF[0xC];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x30(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xB0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x68 (0x1E8 - 0x180)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlElement
struct ControlRig_RigUnit_HierarchyAddControlElement : public ControlRig_RigUnit_HierarchyAddElement
{
public:
	struct CoreUObject_Transform                 OffsetTransform;                                   // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              OffsetSpace;                                       // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49D1[0x7];                                     // Fixing Size Of Struct 
};

// 0xD8 (0x2C0 - 0x1E8)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlFloat
struct ControlRig_RigUnit_HierarchyAddControlFloat : public ControlRig_RigUnit_HierarchyAddControlElement
{
public:
	float                                        InitialValue;                                      // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49D3[0x4];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControlFloat_Settings Settings;                                          // 0x1F0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
struct ControlRig_RigUnit_HierarchyAddControlInteger_LimitSettings
{
public:
	struct ControlRig_RigControlLimitEnabled     Limit;                                             // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_49D4[0x2];                                     // Fixing Size After Last Property  
	int32                                        MinValue;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxValue;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49D6[0x3];                                     // Fixing Size Of Struct 
};

// 0xC0 (0xD0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger_Settings
struct ControlRig_RigUnit_HierarchyAddControlInteger_Settings : public ControlRig_RigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49D8[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControlInteger_LimitSettings Limits;                                            // 0x14(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_49D9[0xC];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x30(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xB0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xD8 (0x2C0 - 0x1E8)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlInteger
struct ControlRig_RigUnit_HierarchyAddControlInteger : public ControlRig_RigUnit_HierarchyAddControlElement
{
public:
	int32                                        InitialValue;                                      // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49DA[0x4];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControlInteger_Settings Settings;                                          // 0x1F0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
struct ControlRig_RigUnit_HierarchyAddControlVector2D_LimitSettings
{
public:
	struct ControlRig_RigControlLimitEnabled     LimitX;                                            // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigControlLimitEnabled     LimitY;                                            // 0x2(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_49DB[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  MinValue;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  MaxValue;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49DC[0x7];                                     // Fixing Size Of Struct 
};

// 0xF0 (0x100 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
struct ControlRig_RigUnit_HierarchyAddControlVector2D_Settings : public ControlRig_RigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigControlAxis                   PrimaryAxis;                                       // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49DE[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControlVector2D_LimitSettings Limits;                                            // 0x18(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_49DF[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x50(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xD0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x118 (0x300 - 0x1E8)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector2D
struct ControlRig_RigUnit_HierarchyAddControlVector2D : public ControlRig_RigUnit_HierarchyAddControlElement
{
public:
	struct CoreUObject_Vector2D                  InitialValue;                                      // 0x1E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49E0[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControlVector2D_Settings Settings;                                          // 0x200(0x100)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
struct ControlRig_RigUnit_HierarchyAddControlVector_LimitSettings
{
public:
	struct ControlRig_RigControlLimitEnabled     LimitX;                                            // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigControlLimitEnabled     LimitY;                                            // 0x2(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigControlLimitEnabled     LimitZ;                                            // 0x4(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_49E2[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    MinValue;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    MaxValue;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49E3[0x7];                                     // Fixing Size Of Struct 
};

// 0x100 (0x110 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector_Settings
struct ControlRig_RigUnit_HierarchyAddControlVector_Settings : public ControlRig_RigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigVMTransformSpace              InitialSpace;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPosition;                                       // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49E7[0x6];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControlVector_LimitSettings Limits;                                            // 0x18(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_49E8[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x60(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xE0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x128 (0x310 - 0x1E8)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlVector
struct ControlRig_RigUnit_HierarchyAddControlVector : public ControlRig_RigUnit_HierarchyAddControlElement
{
public:
	struct CoreUObject_Vector                    InitialValue;                                      // 0x1E8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_HierarchyAddControlVector_Settings Settings;                                          // 0x200(0x110)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
struct ControlRig_RigUnit_HierarchyAddControlRotator_LimitSettings
{
public:
	struct ControlRig_RigControlLimitEnabled     LimitPitch;                                        // 0x0(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigControlLimitEnabled     LimitYaw;                                          // 0x2(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigControlLimitEnabled     LimitRoll;                                         // 0x4(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_49E9[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Rotator                   MinValue;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   MaxValue;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDrawLimits;                                       // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49EA[0x7];                                     // Fixing Size Of Struct 
};

// 0x100 (0x110 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator_Settings
struct ControlRig_RigUnit_HierarchyAddControlRotator_Settings : public ControlRig_RigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigVMTransformSpace              InitialSpace;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49EB[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControlRotator_LimitSettings Limits;                                            // 0x18(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_49EC[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x60(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xE0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x128 (0x310 - 0x1E8)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlRotator
struct ControlRig_RigUnit_HierarchyAddControlRotator : public ControlRig_RigUnit_HierarchyAddControlElement
{
public:
	struct CoreUObject_Rotator                   InitialValue;                                      // 0x1E8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_HierarchyAddControlRotator_Settings Settings;                                          // 0x200(0x110)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xC0 (0xD0 - 0x10)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform_Settings
struct ControlRig_RigUnit_HierarchyAddControlTransform_Settings : public ControlRig_RigUnit_HierarchyAddControl_Settings
{
public:
	enum class ERigVMTransformSpace              InitialSpace;                                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49ED[0xF];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControl_ShapeSettings Shape;                                             // 0x20(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_HierarchyAddControl_ProxySettings Proxy;                                             // 0xA0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<enum class ERigControlTransformChannel> FilteredChannels;                                  // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x138 (0x320 - 0x1E8)
// ScriptStruct ControlRig.RigUnit_HierarchyAddControlTransform
struct ControlRig_RigUnit_HierarchyAddControlTransform : public ControlRig_RigUnit_HierarchyAddControlElement
{
public:
	uint8                                        Pad_49EE[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 InitialValue;                                      // 0x1F0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_HierarchyAddControlTransform_Settings Settings;                                          // 0x250(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x190 - 0x180)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelBool
struct ControlRig_RigUnit_HierarchyAddAnimationChannelBool : public ControlRig_RigUnit_HierarchyAddElement
{
public:
	bool                                         InitialValue;                                      // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MinimumValue;                                      // 0x181(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MaximumValue;                                      // 0x182(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49EF[0xD];                                     // Fixing Size Of Struct 
};

// 0x10 (0x190 - 0x180)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
struct ControlRig_RigUnit_HierarchyAddAnimationChannelFloat : public ControlRig_RigUnit_HierarchyAddElement
{
public:
	float                                        InitialValue;                                      // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumValue;                                      // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumValue;                                      // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49F0[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x190 - 0x180)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
struct ControlRig_RigUnit_HierarchyAddAnimationChannelInteger : public ControlRig_RigUnit_HierarchyAddElement
{
public:
	int32                                        InitialValue;                                      // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimumValue;                                      // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaximumValue;                                      // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49F1[0x4];                                     // Fixing Size Of Struct 
};

// 0x30 (0x1B0 - 0x180)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
struct ControlRig_RigUnit_HierarchyAddAnimationChannelVector2D : public ControlRig_RigUnit_HierarchyAddElement
{
public:
	struct CoreUObject_Vector2D                  InitialValue;                                      // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  MinimumValue;                                      // 0x190(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  MaximumValue;                                      // 0x1A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x1D0 - 0x180)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelVector
struct ControlRig_RigUnit_HierarchyAddAnimationChannelVector : public ControlRig_RigUnit_HierarchyAddElement
{
public:
	struct CoreUObject_Vector                    InitialValue;                                      // 0x180(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    MinimumValue;                                      // 0x198(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    MaximumValue;                                      // 0x1B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49F2[0x8];                                     // Fixing Size Of Struct 
};

// 0x50 (0x1D0 - 0x180)
// ScriptStruct ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
struct ControlRig_RigUnit_HierarchyAddAnimationChannelRotator : public ControlRig_RigUnit_HierarchyAddElement
{
public:
	struct CoreUObject_Rotator                   InitialValue;                                      // 0x180(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   MinimumValue;                                      // 0x198(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   MaximumValue;                                      // 0x1B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_49F6[0x8];                                     // Fixing Size Of Struct 
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetShapeSettings
struct ControlRig_RigUnit_HierarchyGetShapeSettings : public ControlRig_RigUnit_DynamicHierarchyBase
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49FA[0xC];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControl_ShapeSettings Settings;                                          // 0x20(0x80)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchySetShapeSettings
struct ControlRig_RigUnit_HierarchySetShapeSettings : public ControlRig_RigUnit_DynamicHierarchyBaseMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49FB[0x4];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_HierarchyAddControl_ShapeSettings Settings;                                          // 0x170(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyBase
struct ControlRig_RigUnit_HierarchyBase : public ControlRig_RigUnit
{
public:
};

// 0x0 (0x160 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchyBaseMutable
struct ControlRig_RigUnit_HierarchyBaseMutable : public ControlRig_RigUnitMutable
{
public:
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParent
struct ControlRig_RigUnit_HierarchyGetParent : public ControlRig_RigUnit_HierarchyBase
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Parent;                                            // 0x14(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedChild;                                       // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedParent;                                      // 0x40(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParents
struct ControlRig_RigUnit_HierarchyGetParents : public ControlRig_RigUnit_HierarchyBase
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeChild;                                     // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverse;                                          // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49FE[0x2];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKeyCollection    Parents;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedChild;                                       // 0x28(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKeyCollection    CachedParents;                                     // 0x48(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetParentsItemArray
struct ControlRig_RigUnit_HierarchyGetParentsItemArray : public ControlRig_RigUnit_HierarchyBase
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeChild;                                     // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReverse;                                          // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A01[0x2];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      Parents;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedChild;                                       // 0x28(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKeyCollection    CachedParents;                                     // 0x48(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetChildren
struct ControlRig_RigUnit_HierarchyGetChildren : public ControlRig_RigUnit_HierarchyBase
{
public:
	struct ControlRig_RigElementKey              Parent;                                            // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeParent;                                    // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A03[0x2];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKeyCollection    Children;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedParent;                                      // 0x28(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKeyCollection    CachedChildren;                                    // 0x48(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblings
struct ControlRig_RigUnit_HierarchyGetSiblings : public ControlRig_RigUnit_HierarchyBase
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeItem;                                      // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A08[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKeyCollection    Siblings;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedItem;                                        // 0x28(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKeyCollection    CachedSiblings;                                    // 0x48(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetSiblingsItemArray
struct ControlRig_RigUnit_HierarchyGetSiblingsItemArray : public ControlRig_RigUnit_HierarchyBase
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeItem;                                      // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A0B[0x3];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      Siblings;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedItem;                                        // 0x28(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKeyCollection    CachedSiblings;                                    // 0x48(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetPose
struct ControlRig_RigUnit_HierarchyGetPose : public ControlRig_RigUnit_HierarchyBase
{
public:
	bool                                         Initial;                                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A0C[0x6];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKeyCollection    ItemsToGet;                                        // 0x10(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigPose                    Pose;                                              // 0x20(0x70)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_HierarchyGetPoseItemArray
struct ControlRig_RigUnit_HierarchyGetPoseItemArray : public ControlRig_RigUnit_HierarchyBase
{
public:
	bool                                         Initial;                                           // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A0D[0x6];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      ItemsToGet;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigPose                    Pose;                                              // 0x20(0x70)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchySetPose
struct ControlRig_RigUnit_HierarchySetPose : public ControlRig_RigUnit_HierarchyBaseMutable
{
public:
	struct ControlRig_RigPose                    Pose;                                              // 0x160(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x1D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A12[0x6];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKeyCollection    ItemsToSet;                                        // 0x1D8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A14[0x4];                                     // Fixing Size Of Struct 
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_HierarchySetPoseItemArray
struct ControlRig_RigUnit_HierarchySetPoseItemArray : public ControlRig_RigUnit_HierarchyBaseMutable
{
public:
	struct ControlRig_RigPose                    Pose;                                              // 0x160(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x1D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A18[0x6];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      ItemsToSet;                                        // 0x1D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A19[0x4];                                     // Fixing Size Of Struct 
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseIsEmpty
struct ControlRig_RigUnit_PoseIsEmpty : public ControlRig_RigUnit_HierarchyBase
{
public:
	struct ControlRig_RigPose                    Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         IsEmpty;                                           // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A1B[0x7];                                     // Fixing Size Of Struct 
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetItems
struct ControlRig_RigUnit_PoseGetItems : public ControlRig_RigUnit_HierarchyBase
{
public:
	struct ControlRig_RigPose                    Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A1D[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKeyCollection    Items;                                             // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetItemsItemArray
struct ControlRig_RigUnit_PoseGetItemsItemArray : public ControlRig_RigUnit_HierarchyBase
{
public:
	struct ControlRig_RigPose                    Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A1F[0x7];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x120 (0x128 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetDelta
struct ControlRig_RigUnit_PoseGetDelta : public ControlRig_RigUnit_HierarchyBase
{
public:
	struct ControlRig_RigPose                    PoseA;                                             // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct ControlRig_RigPose                    PoseB;                                             // 0x78(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        PositionThreshold;                                 // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationThreshold;                                 // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleThreshold;                                    // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveThreshold;                                    // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigElementType                   ElementType;                                       // 0xF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0xF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A22[0x6];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKeyCollection    ItemsToCompare;                                    // 0x100(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PosesAreEqual;                                     // 0x110(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A23[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKeyCollection    ItemsWithDelta;                                    // 0x118(0x10)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetTransform
struct ControlRig_RigUnit_PoseGetTransform : public ControlRig_RigUnit_HierarchyBase
{
public:
	struct ControlRig_RigPose                    Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Item;                                              // 0x78(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0x85(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A24[0xA];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x90(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveValue;                                        // 0xF0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedPoseElementIndex;                            // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedPoseHash;                                    // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A25[0x4];                                     // Fixing Size Of Struct 
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetTransformArray
struct ControlRig_RigUnit_PoseGetTransformArray : public ControlRig_RigUnit_HierarchyBase
{
public:
	struct ControlRig_RigPose                    Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0x79(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A28[0x6];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_PoseGetCurve
struct ControlRig_RigUnit_PoseGetCurve : public ControlRig_RigUnit_HierarchyBase
{
public:
	struct ControlRig_RigPose                    Pose;                                              // 0x8(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  Curve;                                             // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A29[0x3];                                     // Fixing Size After Last Property  
	float                                        CurveValue;                                        // 0x84(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedPoseElementIndex;                            // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedPoseHash;                                    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2B0 (0x410 - 0x160)
// ScriptStruct ControlRig.RigUnit_PoseLoop
struct ControlRig_RigUnit_PoseLoop : public ControlRig_RigUnit_HierarchyBaseMutable
{
public:
	class FName                                  BlockToRun;                                        // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigPose                    Pose;                                              // 0x168(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Item;                                              // 0x1D8(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A2D[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 GlobalTransform;                                   // 0x1F0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 LocalTransform;                                    // 0x250(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveValue;                                        // 0x2B0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x2B4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x2B8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x2BC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_ControlRigExecuteContext   Completed;                                         // 0x2C0(0x150)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ControlRig.RigUnit_InteractionExecution
struct ControlRig_RigUnit_InteractionExecution : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4A31[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_ControlRigExecuteContext   ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ControlRig.RigUnit_InverseExecution
struct ControlRig_RigUnit_InverseExecution : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4A33[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_ControlRigExecuteContext   ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_IsInteracting
struct ControlRig_RigUnit_IsInteracting : public ControlRig_RigUnit
{
public:
	bool                                         bIsInteracting;                                    // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTranslating;                                    // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRotating;                                       // 0xA(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsScaling;                                        // 0xB(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A36[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemBase
struct ControlRig_RigUnit_ItemBase : public ControlRig_RigUnit
{
public:
};

// 0x0 (0x160 - 0x160)
// ScriptStruct ControlRig.RigUnit_ItemBaseMutable
struct ControlRig_RigUnit_ItemBaseMutable : public ControlRig_RigUnitMutable
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemExists
struct ControlRig_RigUnit_ItemExists : public ControlRig_RigUnit_ItemBase
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Exists;                                            // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A37[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x18(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemReplace
struct ControlRig_RigUnit_ItemReplace : public ControlRig_RigUnit_ItemBase
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Old;                                               // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  New;                                               // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Result;                                            // 0x24(0xC)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemEquals
struct ControlRig_RigUnit_ItemEquals : public ControlRig_RigUnit_ItemBase
{
public:
	struct ControlRig_RigElementKey              A;                                                 // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              B;                                                 // 0x14(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A3A[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemNotEquals
struct ControlRig_RigUnit_ItemNotEquals : public ControlRig_RigUnit_ItemBase
{
public:
	struct ControlRig_RigElementKey              A;                                                 // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              B;                                                 // 0x14(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A3E[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemTypeEquals
struct ControlRig_RigUnit_ItemTypeEquals : public ControlRig_RigUnit_ItemBase
{
public:
	struct ControlRig_RigElementKey              A;                                                 // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              B;                                                 // 0x14(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A40[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemTypeNotEquals
struct ControlRig_RigUnit_ItemTypeNotEquals : public ControlRig_RigUnit_ItemBase
{
public:
	struct ControlRig_RigElementKey              A;                                                 // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              B;                                                 // 0x14(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A44[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemToName
struct ControlRig_RigUnit_ItemToName : public ControlRig_RigUnit_ItemBase
{
public:
	struct ControlRig_RigElementKey              Value;                                             // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Result;                                            // 0x14(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A46[0x4];                                     // Fixing Size Of Struct 
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ControlRig.RigUnit_PrepareForExecution
struct ControlRig_RigUnit_PrepareForExecution : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4A48[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_ControlRigExecuteContext   ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x698 (0x6A0 - 0x8)
// ScriptStruct ControlRig.RigUnit_SequenceExecution
struct ControlRig_RigUnit_SequenceExecution : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4A4A[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_ControlRigExecuteContext   ExecuteContext;                                    // 0x10(0x150)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct ControlRig_ControlRigExecuteContext   A;                                                 // 0x160(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct ControlRig_ControlRigExecuteContext   B;                                                 // 0x2B0(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct ControlRig_ControlRigExecuteContext   C;                                                 // 0x400(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct ControlRig_ControlRigExecuteContext   D;                                                 // 0x550(0x150)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0xA0 (0x200 - 0x160)
// ScriptStruct ControlRig.RigUnit_AddBoneTransform
struct ControlRig_RigUnit_AddBoneTransform : public ControlRig_RigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A4E[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPostMultiply;                                     // 0x1D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1D5(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A50[0x2];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedBone;                                        // 0x1D8(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A51[0x8];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_Item
struct ControlRig_RigUnit_Item : public ControlRig_RigUnit
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A53[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct ControlRig.RigUnit_ItemArray
struct ControlRig_RigUnit_ItemArray : public ControlRig_RigUnit
{
public:
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_BoneName
struct ControlRig_RigUnit_BoneName : public ControlRig_RigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpaceName
struct ControlRig_RigUnit_SpaceName : public ControlRig_RigUnit
{
public:
	class FName                                  Space;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ControlRig.RigUnit_ControlName
struct ControlRig_RigUnit_ControlName : public ControlRig_RigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetAnimationChannelBase
struct ControlRig_RigUnit_GetAnimationChannelBase : public ControlRig_RigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Channel;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A5B[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKey              CachedChannelKey;                                  // 0x1C(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CachedChannelHash;                                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A5D[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0x38 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetBoolAnimationChannel
struct ControlRig_RigUnit_GetBoolAnimationChannel : public ControlRig_RigUnit_GetAnimationChannelBase
{
public:
	bool                                         Value;                                             // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A60[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x38 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetFloatAnimationChannel
struct ControlRig_RigUnit_GetFloatAnimationChannel : public ControlRig_RigUnit_GetAnimationChannelBase
{
public:
	float                                        Value;                                             // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A64[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0x38 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetIntAnimationChannel
struct ControlRig_RigUnit_GetIntAnimationChannel : public ControlRig_RigUnit_GetAnimationChannelBase
{
public:
	int32                                        Value;                                             // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A67[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x40 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetVector2DAnimationChannel
struct ControlRig_RigUnit_GetVector2DAnimationChannel : public ControlRig_RigUnit_GetAnimationChannelBase
{
public:
	struct CoreUObject_Vector2D                  Value;                                             // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x48 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetVectorAnimationChannel
struct ControlRig_RigUnit_GetVectorAnimationChannel : public ControlRig_RigUnit_GetAnimationChannelBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x48 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetRotatorAnimationChannel
struct ControlRig_RigUnit_GetRotatorAnimationChannel : public ControlRig_RigUnit_GetAnimationChannelBase
{
public:
	struct CoreUObject_Rotator                   Value;                                             // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x90 - 0x30)
// ScriptStruct ControlRig.RigUnit_GetTransformAnimationChannel
struct ControlRig_RigUnit_GetTransformAnimationChannel : public ControlRig_RigUnit_GetAnimationChannelBase
{
public:
	struct CoreUObject_Transform                 Value;                                             // 0x30(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x150 (0x180 - 0x30)
// ScriptStruct ControlRig.RigUnit_SetAnimationChannelBase
struct ControlRig_RigUnit_SetAnimationChannelBase : public ControlRig_RigUnit_GetAnimationChannelBase
{
public:
	struct ControlRig_ControlRigExecuteContext   ExecuteContext;                                    // 0x30(0x150)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x190 - 0x180)
// ScriptStruct ControlRig.RigUnit_SetBoolAnimationChannel
struct ControlRig_RigUnit_SetBoolAnimationChannel : public ControlRig_RigUnit_SetAnimationChannelBase
{
public:
	bool                                         Value;                                             // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A6B[0xF];                                     // Fixing Size Of Struct 
};

// 0x10 (0x190 - 0x180)
// ScriptStruct ControlRig.RigUnit_SetFloatAnimationChannel
struct ControlRig_RigUnit_SetFloatAnimationChannel : public ControlRig_RigUnit_SetAnimationChannelBase
{
public:
	float                                        Value;                                             // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A80[0xC];                                     // Fixing Size Of Struct 
};

// 0x10 (0x190 - 0x180)
// ScriptStruct ControlRig.RigUnit_SetIntAnimationChannel
struct ControlRig_RigUnit_SetIntAnimationChannel : public ControlRig_RigUnit_SetAnimationChannelBase
{
public:
	int32                                        Value;                                             // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A84[0xC];                                     // Fixing Size Of Struct 
};

// 0x10 (0x190 - 0x180)
// ScriptStruct ControlRig.RigUnit_SetVector2DAnimationChannel
struct ControlRig_RigUnit_SetVector2DAnimationChannel : public ControlRig_RigUnit_SetAnimationChannelBase
{
public:
	struct CoreUObject_Vector2D                  Value;                                             // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x1A0 - 0x180)
// ScriptStruct ControlRig.RigUnit_SetVectorAnimationChannel
struct ControlRig_RigUnit_SetVectorAnimationChannel : public ControlRig_RigUnit_SetAnimationChannelBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x180(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A8B[0x8];                                     // Fixing Size Of Struct 
};

// 0x20 (0x1A0 - 0x180)
// ScriptStruct ControlRig.RigUnit_SetRotatorAnimationChannel
struct ControlRig_RigUnit_SetRotatorAnimationChannel : public ControlRig_RigUnit_SetAnimationChannelBase
{
public:
	struct CoreUObject_Rotator                   Value;                                             // 0x180(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A8E[0x8];                                     // Fixing Size Of Struct 
};

// 0x60 (0x1E0 - 0x180)
// ScriptStruct ControlRig.RigUnit_SetTransformAnimationChannel
struct ControlRig_RigUnit_SetTransformAnimationChannel : public ControlRig_RigUnit_SetAnimationChannelBase
{
public:
	struct CoreUObject_Transform                 Value;                                             // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetBoneTransform
struct ControlRig_RigUnit_GetBoneTransform : public ControlRig_RigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A93[0xF];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedBone;                                        // 0x80(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFirstUpdate;                                      // 0xA0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A95[0xF];                                     // Fixing Size Of Struct 
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlInitialTransform
struct ControlRig_RigUnit_GetControlInitialTransform : public ControlRig_RigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A9A[0xF];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x80(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlBool
struct ControlRig_RigUnit_GetControlBool : public ControlRig_RigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AA1[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x18(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlFloat
struct ControlRig_RigUnit_GetControlFloat : public ControlRig_RigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AA7[0x4];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlInteger
struct ControlRig_RigUnit_GetControlInteger : public ControlRig_RigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntegerValue;                                      // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minimum;                                           // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Maximum;                                           // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AAD[0x4];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVector2D
struct ControlRig_RigUnit_GetControlVector2D : public ControlRig_RigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  Vector;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  Minimum;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  Maximum;                                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x40(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVector
struct ControlRig_RigUnit_GetControlVector : public ControlRig_RigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AB5[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Vector;                                            // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Minimum;                                           // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Maximum;                                           // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x60(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlRotator
struct ControlRig_RigUnit_GetControlRotator : public ControlRig_RigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AB8[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Rotator                   Rotator;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Minimum;                                           // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Maximum;                                           // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x60(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x158 (0x160 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlTransform
struct ControlRig_RigUnit_GetControlTransform : public ControlRig_RigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ABB[0xF];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Minimum;                                           // 0x80(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Maximum;                                           // 0xE0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x140(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetCurveValue
struct ControlRig_RigUnit_GetCurveValue : public ControlRig_RigUnit
{
public:
	class FName                                  Curve;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Valid;                                             // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ABF[0x3];                                     // Fixing Size After Last Property  
	float                                        Value;                                             // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedCurveIndex;                                  // 0x18(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetInitialBoneTransform
struct ControlRig_RigUnit_GetInitialBoneTransform : public ControlRig_RigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AC3[0xF];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedBone;                                        // 0x80(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetRelativeBoneTransform
struct ControlRig_RigUnit_GetRelativeBoneTransform : public ControlRig_RigUnit
{
public:
	class FName                                  bone;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AC5[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedBone;                                        // 0x80(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedSpace;                                       // 0xA0(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetRelativeTransformForItem
struct ControlRig_RigUnit_GetRelativeTransformForItem : public ControlRig_RigUnit
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChildInitial;                                     // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AC9[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKey              Parent;                                            // 0x18(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentInitial;                                    // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ACB[0xB];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 RelativeTransform;                                 // 0x30(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedChild;                                       // 0x90(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedParent;                                      // 0xB0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetSpaceTransform
struct ControlRig_RigUnit_GetSpaceTransform : public ControlRig_RigUnit
{
public:
	class FName                                  Space;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              SpaceType;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ACF[0xF];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedSpaceIndex;                                  // 0x80(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransform
struct ControlRig_RigUnit_GetTransform : public ControlRig_RigUnit
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AD2[0xA];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x80(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransformArray
struct ControlRig_RigUnit_GetTransformArray : public ControlRig_RigUnit
{
public:
	struct ControlRig_RigElementKeyCollection    Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AD5[0x6];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   CachedIndex;                                       // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetTransformItemArray
struct ControlRig_RigUnit_GetTransformItemArray : public ControlRig_RigUnit
{
public:
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AD6[0x6];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   CachedIndex;                                       // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0xA0 - 0x70)
// ScriptStruct ControlRig.RigDispatch_MetadataBase
struct ControlRig_RigDispatch_MetadataBase : public ControlRig_RigDispatchFactory
{
public:
	uint8                                        Pad_4AD7[0x30];                                    // Fixing Size Of Struct 
};

// 0x0 (0xA0 - 0xA0)
// ScriptStruct ControlRig.RigDispatch_GetMetadata
struct ControlRig_RigDispatch_GetMetadata : public ControlRig_RigDispatch_MetadataBase
{
public:
};

// 0x0 (0xA0 - 0xA0)
// ScriptStruct ControlRig.RigDispatch_SetMetadata
struct ControlRig_RigDispatch_SetMetadata : public ControlRig_RigDispatch_MetadataBase
{
public:
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_RemoveMetadata
struct ControlRig_RigUnit_RemoveMetadata : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x16C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Removed;                                           // 0x174(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ADA[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x178(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ADB[0x8];                                     // Fixing Size Of Struct 
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_RemoveAllMetadata
struct ControlRig_RigUnit_RemoveAllMetadata : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Removed;                                           // 0x16C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ADD[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x170(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_HasMetadata
struct ControlRig_RigUnit_HasMetadata : public ControlRig_RigUnit
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigMetadataType                  Type;                                              // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x1D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AE5[0x2];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadata
struct ControlRig_RigUnit_FindItemsWithMetadata : public ControlRig_RigUnit
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigMetadataType                  Type;                                              // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AEB[0x7];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetMetadataTags
struct ControlRig_RigUnit_GetMetadataTags : public ControlRig_RigUnit
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AF0[0x4];                                     // Fixing Size After Last Property  
	TArray<class FName>                          Tags;                                              // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x28(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetMetadataTag
struct ControlRig_RigUnit_SetMetadataTag : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x16C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AF5[0x4];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x178(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AF6[0x8];                                     // Fixing Size Of Struct 
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetMetadataTagArray
struct ControlRig_RigUnit_SetMetadataTagArray : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AF9[0x4];                                     // Fixing Size After Last Property  
	TArray<class FName>                          Tags;                                              // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x180(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_RemoveMetadataTag
struct ControlRig_RigUnit_RemoveMetadataTag : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x16C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Removed;                                           // 0x174(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AFA[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x178(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AFB[0x8];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_HasMetadataTag
struct ControlRig_RigUnit_HasMetadataTag : public ControlRig_RigUnit
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AFD[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_HasMetadataTagArray
struct ControlRig_RigUnit_HasMetadataTagArray : public ControlRig_RigUnit
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B00[0x4];                                     // Fixing Size After Last Property  
	TArray<class FName>                          Tags;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B01[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x30(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTag
struct ControlRig_RigUnit_FindItemsWithMetadataTag : public ControlRig_RigUnit
{
public:
	class FName                                  Tag;                                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRig.RigUnit_FindItemsWithMetadataTagArray
struct ControlRig_RigUnit_FindItemsWithMetadataTagArray : public ControlRig_RigUnit
{
public:
	TArray<class FName>                          Tags;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_FilterItemsByMetadataTags
struct ControlRig_RigUnit_FilterItemsByMetadataTags : public ControlRig_RigUnit
{
public:
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          Tags;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Inclusive;                                         // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B04[0x7];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigElementKey>      Result;                                            // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   CachedIndices;                                     // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0x200 - 0x160)
// ScriptStruct ControlRig.RigUnit_OffsetTransformForItem
struct ControlRig_RigUnit_OffsetTransformForItem : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B05[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 OffsetTransform;                                   // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B06[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x1D8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B07[0x8];                                     // Fixing Size Of Struct 
};

// 0x1A0 (0x300 - 0x160)
// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraint
struct ControlRig_RigUnit_ParentSwitchConstraint : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Subject;                                           // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKeyCollection    Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 InitialGlobalTransform;                            // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B09[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x1F0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Switched;                                          // 0x250(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B0B[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedSubject;                                     // 0x258(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedParent;                                      // 0x278(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B0D[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 RelativeOffset;                                    // 0x2A0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x300 - 0x160)
// ScriptStruct ControlRig.RigUnit_ParentSwitchConstraintArray
struct ControlRig_RigUnit_ParentSwitchConstraintArray : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Subject;                                           // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParentIndex;                                       // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigElementKey>      Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 InitialGlobalTransform;                            // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B0E[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x1F0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Switched;                                          // 0x250(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B0F[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedSubject;                                     // 0x258(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedParent;                                      // 0x278(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B10[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 RelativeOffset;                                    // 0x2A0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct ControlRig.RigUnit_ProjectTransformToNewParent
struct ControlRig_RigUnit_ProjectTransformToNewParent : public ControlRig_RigUnit
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bChildInitial;                                     // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B12[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKey              OldParent;                                         // 0x18(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOldParentInitial;                                 // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B13[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKey              NewParent;                                         // 0x28(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewParentInitial;                                 // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B14[0xB];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x40(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedChild;                                       // 0xA0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedOldParent;                                   // 0xC0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedNewParent;                                   // 0xE0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_PropagateTransform
struct ControlRig_RigUnit_PropagateTransform : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecomputeGlobal;                                  // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyToChildren;                                  // 0x16D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x16E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B1A[0x1];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x170(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_SendEvent
struct ControlRig_RigUnit_SendEvent : public ControlRig_RigUnitMutable
{
public:
	enum class ERigEvent                         Event;                                             // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B1E[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKey              Item;                                              // 0x164(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OffsetInSeconds;                                   // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x174(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyDuringInteraction;                            // 0x175(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B1F[0xA];                                     // Fixing Size Of Struct 
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetBoneInitialTransform
struct ControlRig_RigUnit_SetBoneInitialTransform : public ControlRig_RigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B20[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Result;                                            // 0x1D0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x231(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B22[0x6];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedBone;                                        // 0x238(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B23[0x8];                                     // Fixing Size Of Struct 
};

// 0x60 (0x1C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetBoneRotation
struct ControlRig_RigUnit_SetBoneRotation : public ControlRig_RigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B26[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Rotation;                                          // 0x170(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B29[0x3];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B2C[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedBone;                                        // 0x1A0(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetBoneTransform
struct ControlRig_RigUnit_SetBoneTransform : public ControlRig_RigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B2F[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Result;                                            // 0x1D0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B32[0x3];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B34[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedBone;                                        // 0x240(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x1B0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetBoneTranslation
struct ControlRig_RigUnit_SetBoneTranslation : public ControlRig_RigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Translation;                                       // 0x168(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B38[0x3];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B3C[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedBone;                                        // 0x190(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlColor
struct ControlRig_RigUnit_GetControlColor : public ControlRig_RigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlColor
struct ControlRig_RigUnit_SetControlColor : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x178(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B43[0x8];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlDrivenList
struct ControlRig_RigUnit_GetControlDrivenList : public ControlRig_RigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigElementKey>      Driven;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlDrivenList
struct ControlRig_RigUnit_SetControlDrivenList : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigElementKey>      Driven;                                            // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x178(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B50[0x8];                                     // Fixing Size Of Struct 
};

// 0xA0 (0x200 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlOffset
struct ControlRig_RigUnit_SetControlOffset : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B54[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Offset;                                            // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B57[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x1D8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B59[0x8];                                     // Fixing Size Of Struct 
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetShapeTransform
struct ControlRig_RigUnit_GetShapeTransform : public ControlRig_RigUnit
{
public:
	class FName                                  Control;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x70(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetShapeTransform
struct ControlRig_RigUnit_SetShapeTransform : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B5B[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x1D0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlBool
struct ControlRig_RigUnit_SetControlBool : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B5E[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x170(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlBool_Entry
struct ControlRig_RigUnit_SetMultiControlBool_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolValue;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B63[0x3];                                     // Fixing Size Of Struct 
};

// 0x20 (0x180 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetMultiControlBool
struct ControlRig_RigUnit_SetMultiControlBool : public ControlRig_RigUnitMutable
{
public:
	TArray<struct ControlRig_RigUnit_SetMultiControlBool_Entry> Entries;                                           // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   CachedControlIndices;                              // 0x170(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlFloat
struct ControlRig_RigUnit_SetControlFloat : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x170(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat_Entry
struct ControlRig_RigUnit_SetMultiControlFloat_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatValue;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetMultiControlFloat
struct ControlRig_RigUnit_SetMultiControlFloat : public ControlRig_RigUnitMutable
{
public:
	TArray<struct ControlRig_RigUnit_SetMultiControlFloat_Entry> Entries;                                           // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B77[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_CachedRigElement>   CachedControlIndices;                              // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B7A[0x8];                                     // Fixing Size Of Struct 
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlInteger
struct ControlRig_RigUnit_SetControlInteger : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Weight;                                            // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntegerValue;                                      // 0x16C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x170(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger_Entry
struct ControlRig_RigUnit_SetMultiControlInteger_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntegerValue;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetMultiControlInteger
struct ControlRig_RigUnit_SetMultiControlInteger : public ControlRig_RigUnitMutable
{
public:
	TArray<struct ControlRig_RigUnit_SetMultiControlInteger_Entry> Entries;                                           // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B82[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_CachedRigElement>   CachedControlIndices;                              // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B83[0x8];                                     // Fixing Size Of Struct 
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlVector2D
struct ControlRig_RigUnit_SetControlVector2D : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B84[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Vector;                                            // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x180(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D_Entry
struct ControlRig_RigUnit_SetMultiControlVector2D_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  Vector;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetMultiControlVector2D
struct ControlRig_RigUnit_SetMultiControlVector2D : public ControlRig_RigUnitMutable
{
public:
	TArray<struct ControlRig_RigUnit_SetMultiControlVector2D_Entry> Entries;                                           // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B8B[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_CachedRigElement>   CachedControlIndices;                              // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B8C[0x8];                                     // Fixing Size Of Struct 
};

// 0x50 (0x1B0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlVector
struct ControlRig_RigUnit_SetControlVector : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B8D[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Vector;                                            // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B8E[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x190(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x1B0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlRotator
struct ControlRig_RigUnit_SetControlRotator : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B8F[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Rotator                   Rotator;                                           // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B90[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x190(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator_Entry
struct ControlRig_RigUnit_SetMultiControlRotator_Entry
{
public:
	class FName                                  Control;                                           // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Rotator;                                           // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B91[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetMultiControlRotator
struct ControlRig_RigUnit_SetMultiControlRotator : public ControlRig_RigUnitMutable
{
public:
	TArray<struct ControlRig_RigUnit_SetMultiControlRotator_Entry> Entries;                                           // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B92[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_CachedRigElement>   CachedControlIndices;                              // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B93[0x8];                                     // Fixing Size Of Struct 
};

// 0xA0 (0x200 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlTransform
struct ControlRig_RigUnit_SetControlTransform : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Control;                                           // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B94[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B95[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x1D8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B96[0x8];                                     // Fixing Size Of Struct 
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_GetControlVisibility
struct ControlRig_RigUnit_GetControlVisibility : public ControlRig_RigUnit
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x8(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B97[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedControlIndex;                                // 0x18(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetControlVisibility
struct ControlRig_RigUnit_SetControlVisibility : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B98[0x4];                                     // Fixing Size After Last Property  
	class FString                                Pattern;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B9A[0x7];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_CachedRigElement>   CachedControlIndices;                              // 0x188(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B9B[0x8];                                     // Fixing Size Of Struct 
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetCurveValue
struct ControlRig_RigUnit_SetCurveValue : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Curve;                                             // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B9C[0x4];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedCurveIndex;                                  // 0x170(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetRelativeBoneTransform
struct ControlRig_RigUnit_SetRelativeBoneTransform : public ControlRig_RigUnitMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B9E[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedBone;                                        // 0x1D8(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedSpaceIndex;                                  // 0x1F8(0x20)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BA0[0x8];                                     // Fixing Size Of Struct 
};

// 0xD0 (0x230 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetRelativeTransformForItem
struct ControlRig_RigUnit_SetRelativeTransformForItem : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Parent;                                            // 0x16C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentInitial;                                    // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BA3[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BA5[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedChild;                                       // 0x1E8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedParent;                                      // 0x208(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BA6[0x8];                                     // Fixing Size Of Struct 
};

// 0x80 (0x1E0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetRelativeTranslationForItem
struct ControlRig_RigUnit_SetRelativeTranslationForItem : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Parent;                                            // 0x16C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentInitial;                                    // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BA8[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Value;                                             // 0x180(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x198(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x19C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BAA[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedChild;                                       // 0x1A0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedParent;                                      // 0x1C0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x1F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetRelativeRotationForItem
struct ControlRig_RigUnit_SetRelativeRotationForItem : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              Parent;                                            // 0x16C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentInitial;                                    // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BAD[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x180(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BAE[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedChild;                                       // 0x1A8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedParent;                                      // 0x1C8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BAF[0x8];                                     // Fixing Size Of Struct 
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetSpaceInitialTransform
struct ControlRig_RigUnit_SetSpaceInitialTransform : public ControlRig_RigUnitMutable
{
public:
	class FName                                  SpaceName;                                         // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BB2[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Result;                                            // 0x1D0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BB3[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedSpaceIndex;                                  // 0x238(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BB4[0x8];                                     // Fixing Size Of Struct 
};

// 0xA0 (0x200 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetSpaceTransform
struct ControlRig_RigUnit_SetSpaceTransform : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Space;                                             // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BB5[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              SpaceType;                                         // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BB6[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedSpaceIndex;                                  // 0x1D8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BB7[0x8];                                     // Fixing Size Of Struct 
};

// 0xA0 (0x200 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetTransform
struct ControlRig_RigUnit_SetTransform : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x16D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BB9[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BBA[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x1D8(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BBB[0x8];                                     // Fixing Size Of Struct 
};

// 0x50 (0x1B0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetTranslation
struct ControlRig_RigUnit_SetTranslation : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x16D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BBC[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Value;                                             // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x18C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BBE[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x190(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x1C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetRotation
struct ControlRig_RigUnit_SetRotation : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x16D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BC5[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x170(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x194(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BC7[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x198(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BC8[0x8];                                     // Fixing Size Of Struct 
};

// 0x50 (0x1B0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetScale
struct ControlRig_RigUnit_SetScale : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x16D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BCB[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Scale;                                             // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x18C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BCD[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           CachedIndex;                                       // 0x190(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetTransformArray
struct ControlRig_RigUnit_SetTransformArray : public ControlRig_RigUnitMutable
{
public:
	struct ControlRig_RigElementKeyCollection    Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x171(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BD2[0x6];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x18C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BD4[0x3];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_CachedRigElement>   CachedIndex;                                       // 0x190(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x1A0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SetTransformItemArray
struct ControlRig_RigUnit_SetTransformItemArray : public ControlRig_RigUnitMutable
{
public:
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              Space;                                             // 0x170(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitial;                                          // 0x171(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BD6[0x6];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x18C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BD7[0x3];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_CachedRigElement>   CachedIndex;                                       // 0x190(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_UnsetCurveValue
struct ControlRig_RigUnit_UnsetCurveValue : public ControlRig_RigUnitMutable
{
public:
	class FName                                  Curve;                                             // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedCurveIndex;                                  // 0x168(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4BDB[0x8];                                     // Fixing Size Of Struct 
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Transform
struct ControlRig_RigUnit_ToWorldSpace_Transform : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4BDD[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 World;                                             // 0x70(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Transform
struct ControlRig_RigUnit_ToRigSpace_Transform : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4BE0[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Global;                                            // 0x70(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Location
struct ControlRig_RigUnit_ToWorldSpace_Location : public ControlRig_RigUnit
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    World;                                             // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Location
struct ControlRig_RigUnit_ToRigSpace_Location : public ControlRig_RigUnit
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Global;                                            // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToWorldSpace_Rotation
struct ControlRig_RigUnit_ToWorldSpace_Rotation : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4BE5[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      World;                                             // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct ControlRig.RigUnit_ToRigSpace_Rotation
struct ControlRig_RigUnit_ToRigSpace_Rotation : public ControlRig_RigUnit
{
public:
	uint8                                        Pad_4BE7[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Global;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics_BoneTarget
struct ControlRig_RigUnit_BoneHarmonics_BoneTarget
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_Harmonics_TargetItem
struct ControlRig_RigUnit_Harmonics_TargetItem
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x0(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics_WorkData
struct ControlRig_RigUnit_BoneHarmonics_WorkData
{
public:
	TArray<struct ControlRig_CachedRigElement>   CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    WaveTime;                                          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_BoneHarmonics
struct ControlRig_RigUnit_BoneHarmonics : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	TArray<struct ControlRig_RigUnit_BoneHarmonics_BoneTarget> Bones;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    WaveSpeed;                                         // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    WaveFrequency;                                     // 0x188(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    WaveAmplitude;                                     // 0x1A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    WaveOffset;                                        // 0x1B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    WaveNoise;                                         // 0x1D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              WaveEase;                                          // 0x1E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BE9[0x3];                                     // Fixing Size After Last Property  
	float                                        WaveMinimum;                                       // 0x1EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMaximum;                                       // 0x1F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x1F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BEA[0x2];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_BoneHarmonics_WorkData WorkData;                                          // 0x1F8(0x28)(Transient, NativeAccessSpecifierPublic)
};

// 0xC0 (0x220 - 0x160)
// ScriptStruct ControlRig.RigUnit_ItemHarmonics
struct ControlRig_RigUnit_ItemHarmonics : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	TArray<struct ControlRig_RigUnit_Harmonics_TargetItem> Targets;                                           // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    WaveSpeed;                                         // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    WaveFrequency;                                     // 0x188(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    WaveAmplitude;                                     // 0x1A0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    WaveOffset;                                        // 0x1B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    WaveNoise;                                         // 0x1D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              WaveEase;                                          // 0x1E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BEC[0x3];                                     // Fixing Size After Last Property  
	float                                        WaveMinimum;                                       // 0x1EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMaximum;                                       // 0x1F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x1F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BED[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_BoneHarmonics_WorkData WorkData;                                          // 0x1F8(0x28)(Transient, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Reach
struct ControlRig_RigUnit_ChainHarmonics_Reach
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BEE[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ReachTarget;                                       // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ReachAxis;                                         // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachMinimum;                                      // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReachMaximum;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              ReachEase;                                         // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BEF[0x7];                                     // Fixing Size Of Struct 
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Wave
struct ControlRig_RigUnit_ChainHarmonics_Wave
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BF1[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    WaveFrequency;                                     // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    WaveAmplitude;                                     // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    WaveOffset;                                        // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    WaveNoise;                                         // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMinimum;                                       // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveMaximum;                                       // 0x6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              WaveEase;                                          // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BF2[0x7];                                     // Fixing Size Of Struct 
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_Pendulum
struct ControlRig_RigUnit_ChainHarmonics_Pendulum
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BF4[0x3];                                     // Fixing Size After Last Property  
	float                                        PendulumStiffness;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PendulumGravity;                                   // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumBlend;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumDrag;                                      // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumMinimum;                                   // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PendulumMaximum;                                   // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              PendulumEase;                                      // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BF6[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    UnwindAxis;                                        // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnwindMinimum;                                     // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnwindMaximum;                                     // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics_WorkData
struct ControlRig_RigUnit_ChainHarmonics_WorkData
{
public:
	struct CoreUObject_Vector                    Time;                                              // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   Items;                                             // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Ratio;                                             // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            LocalTip;                                          // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            PendulumTip;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            PendulumPosition;                                  // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            PendulumVelocity;                                  // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            HierarchyLine;                                     // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            VelocityLines;                                     // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x2D0 (0x430 - 0x160)
// ScriptStruct ControlRig.RigUnit_ChainHarmonics
struct ControlRig_RigUnit_ChainHarmonics : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	class FName                                  ChainRoot;                                         // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Speed;                                             // 0x168(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_ChainHarmonics_Reach Reach;                                             // 0x180(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_ChainHarmonics_Wave Wave;                                              // 0x1C8(0x78)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_RuntimeFloatCurve              WaveCurve;                                         // 0x240(0x88)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_ChainHarmonics_Pendulum Pendulum;                                          // 0x2C8(0x58)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BF9[0xF];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 DrawWorldOffset;                                   // 0x330(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_ChainHarmonics_WorkData WorkData;                                          // 0x390(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BFA[0x8];                                     // Fixing Size Of Struct 
};

// 0x2D0 (0x430 - 0x160)
// ScriptStruct ControlRig.RigUnit_ChainHarmonicsPerItem
struct ControlRig_RigUnit_ChainHarmonicsPerItem : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKey              ChainRoot;                                         // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BFB[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Speed;                                             // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_ChainHarmonics_Reach Reach;                                             // 0x188(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_ChainHarmonics_Wave Wave;                                              // 0x1D0(0x78)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_RuntimeFloatCurve              WaveCurve;                                         // 0x248(0x88)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_ChainHarmonics_Pendulum Pendulum;                                          // 0x2D0(0x58)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BFC[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 DrawWorldOffset;                                   // 0x330(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_ChainHarmonics_WorkData WorkData;                                          // 0x390(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BFE[0x8];                                     // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimBone_Target
struct ControlRig_RigUnit_AimBone_Target
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C00[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Axis;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Target;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             Kind;                                              // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C01[0x3];                                     // Fixing Size After Last Property  
	class FName                                  Space;                                             // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C02[0x4];                                     // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimItem_Target
struct ControlRig_RigUnit_AimItem_Target
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C03[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Axis;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Target;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             Kind;                                              // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C04[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKey              Space;                                             // 0x3C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimBone_DebugSettings
struct ControlRig_RigUnit_AimBone_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C05[0x3];                                     // Fixing Size After Last Property  
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C06[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x228 (0x230 - 0x8)
// ScriptStruct ControlRig.RigUnit_AimBoneMath
struct ControlRig_RigUnit_AimBoneMath : public ControlRig_RigUnit_HighlevelBase
{
public:
	uint8                                        Pad_4C08[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 InputTransform;                                    // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_AimItem_Target     Primary;                                           // 0x70(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_AimItem_Target     Secondary;                                         // 0xB8(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C0A[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Result;                                            // 0x110(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_AimBone_DebugSettings DebugSettings;                                     // 0x170(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           PrimaryCachedSpace;                                // 0x1E0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           SecondaryCachedSpace;                              // 0x200(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C0B[0xF];                                     // Fixing Size Of Struct 
};

// 0x180 (0x2E0 - 0x160)
// ScriptStruct ControlRig.RigUnit_AimBone
struct ControlRig_RigUnit_AimBone : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_AimBone_Target     Primary;                                           // 0x168(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_AimBone_Target     Secondary;                                         // 0x1B0(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C0F[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_AimBone_DebugSettings DebugSettings;                                     // 0x200(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedBoneIndex;                                   // 0x270(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           PrimaryCachedSpace;                                // 0x290(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           SecondaryCachedSpace;                              // 0x2B0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C13[0xF];                                     // Fixing Size Of Struct 
};

// 0x190 (0x2F0 - 0x160)
// ScriptStruct ControlRig.RigUnit_AimItem
struct ControlRig_RigUnit_AimItem : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C14[0x4];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_AimItem_Target     Primary;                                           // 0x170(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_AimItem_Target     Secondary;                                         // 0x1B8(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x200(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C16[0xC];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_AimBone_DebugSettings DebugSettings;                                     // 0x210(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedItem;                                        // 0x280(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           PrimaryCachedSpace;                                // 0x2A0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           SecondaryCachedSpace;                              // 0x2C0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C19[0xF];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_WorldUp
struct ControlRig_RigUnit_AimConstraint_WorldUp
{
public:
	struct CoreUObject_Vector                    Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             Kind;                                              // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C1A[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKey              Space;                                             // 0x1C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_AimConstraint_AdvancedSettings
struct ControlRig_RigUnit_AimConstraint_AdvancedSettings
{
public:
	struct ControlRig_RigUnit_AimBone_DebugSettings DebugSettings;                                     // 0x0(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrderForFilter;                            // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C1D[0xF];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.ConstraintParent
struct ControlRig_ConstraintParent
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x0(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x160 (0x2C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_AimConstraintLocalSpaceOffset
struct ControlRig_RigUnit_AimConstraintLocalSpaceOffset : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_FilterOptionPerAxis     Filter;                                            // 0x16D(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AimAxis;                                           // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    UpAxis;                                            // 0x188(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_AimConstraint_WorldUp WorldUp;                                           // 0x1A0(0x28)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_ConstraintParent>   Parents;                                           // 0x1C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C23[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_AimConstraint_AdvancedSettings AdvancedSettings;                                  // 0x1E0(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C26[0x4];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           WorldUpSpaceCache;                                 // 0x268(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           ChildCache;                                        // 0x288(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   ParentCaches;                                      // 0x2A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C28[0x7];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimit
struct ControlRig_RigUnit_CCDIK_RotationLimit
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Limit;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_RotationLimitPerItem
struct ControlRig_RigUnit_CCDIK_RotationLimitPerItem
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x0(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Limit;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigUnit_CCDIK_WorkData
struct ControlRig_RigUnit_CCDIK_WorkData
{
public:
	TArray<struct AnimationCore_CCDIKChainLink>  Chain;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   CachedItems;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                RotationLimitIndex;                                // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                RotationLimitsPerItem;                             // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedEffector;                                    // 0x40(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_CCDIK
struct ControlRig_RigUnit_CCDIK : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EffectorBone;                                      // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 EffectorTransform;                                 // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartFromTail;                                    // 0x1DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C32[0x3];                                     // Fixing Size After Last Property  
	float                                        BaseRotationLimit;                                 // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C34[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigUnit_CCDIK_RotationLimit> RotationLimits;                                    // 0x1E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C35[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_CCDIK_WorkData     WorkData;                                          // 0x200(0x60)(NativeAccessSpecifierPublic)
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_CCDIKPerItem
struct ControlRig_RigUnit_CCDIKPerItem : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKeyCollection    Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 EffectorTransform;                                 // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartFromTail;                                    // 0x1DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C38[0x3];                                     // Fixing Size After Last Property  
	float                                        BaseRotationLimit;                                 // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C3A[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                                    // 0x1E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C3B[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_CCDIK_WorkData     WorkData;                                          // 0x200(0x60)(NativeAccessSpecifierPublic)
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_CCDIKItemArray
struct ControlRig_RigUnit_CCDIKItemArray : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 EffectorTransform;                                 // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartFromTail;                                    // 0x1DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C3F[0x3];                                     // Fixing Size After Last Property  
	float                                        BaseRotationLimit;                                 // 0x1E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C40[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigUnit_CCDIK_RotationLimitPerItem> RotationLimits;                                    // 0x1E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C41[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_CCDIK_WorkData     WorkData;                                          // 0x200(0x60)(NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_DistributeRotation_Rotation
struct ControlRig_RigUnit_DistributeRotation_Rotation
{
public:
	struct CoreUObject_Quat                      Rotation;                                          // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C42[0xC];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ControlRig.RigUnit_DistributeRotation_WorkData
struct ControlRig_RigUnit_DistributeRotation_WorkData
{
public:
	TArray<struct ControlRig_CachedRigElement>   CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationA;                                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationB;                                     // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemRotationT;                                     // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         ItemLocalTransforms;                               // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x1E0 - 0x160)
// ScriptStruct ControlRig.RigUnit_DistributeRotation
struct ControlRig_RigUnit_DistributeRotation : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C44[0x3];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C45[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_DistributeRotation_WorkData WorkData;                                          // 0x190(0x50)(Transient, NativeAccessSpecifierPublic)
};

// 0x80 (0x1E0 - 0x160)
// ScriptStruct ControlRig.RigUnit_DistributeRotationForCollection
struct ControlRig_RigUnit_DistributeRotationForCollection : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKeyCollection    Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C48[0x3];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_DistributeRotation_WorkData WorkData;                                          // 0x188(0x50)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C49[0x8];                                     // Fixing Size Of Struct 
};

// 0x80 (0x1E0 - 0x160)
// ScriptStruct ControlRig.RigUnit_DistributeRotationForItemArray
struct ControlRig_RigUnit_DistributeRotationForItemArray : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigUnit_DistributeRotation_Rotation> Rotations;                                         // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C4A[0x3];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_DistributeRotation_WorkData WorkData;                                          // 0x188(0x50)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C4B[0x8];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ControlRig.RigUnit_FABRIK_WorkData
struct ControlRig_RigUnit_FABRIK_WorkData
{
public:
	TArray<struct AnimationCore_FABRIKChainLink> Chain;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   CachedItems;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedEffector;                                    // 0x20(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0x230 - 0x160)
// ScriptStruct ControlRig.RigUnit_FABRIK
struct ControlRig_RigUnit_FABRIK : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EffectorBone;                                      // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 EffectorTransform;                                 // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C4E[0x3];                                     // Fixing Size After Last Property  
	int32                                        MaxIterations;                                     // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_FABRIK_WorkData    WorkData;                                          // 0x1E0(0x40)(Transient, NativeAccessSpecifierPublic)
	bool                                         bSetEffectorTransform;                             // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C4F[0xF];                                     // Fixing Size Of Struct 
};

// 0xD0 (0x230 - 0x160)
// ScriptStruct ControlRig.RigUnit_FABRIKPerItem
struct ControlRig_RigUnit_FABRIKPerItem : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKeyCollection    Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 EffectorTransform;                                 // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C51[0x3];                                     // Fixing Size After Last Property  
	int32                                        MaxIterations;                                     // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_FABRIK_WorkData    WorkData;                                          // 0x1E0(0x40)(Transient, NativeAccessSpecifierPublic)
	bool                                         bSetEffectorTransform;                             // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C52[0xF];                                     // Fixing Size Of Struct 
};

// 0xD0 (0x230 - 0x160)
// ScriptStruct ControlRig.RigUnit_FABRIKItemArray
struct ControlRig_RigUnit_FABRIKItemArray : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 EffectorTransform;                                 // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C54[0x3];                                     // Fixing Size After Last Property  
	int32                                        MaxIterations;                                     // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_FABRIK_WorkData    WorkData;                                          // 0x1E0(0x40)(Transient, NativeAccessSpecifierPublic)
	bool                                         bSetEffectorTransform;                             // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C55[0xF];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_Rotation
struct ControlRig_RigUnit_FitChainToCurve_Rotation
{
public:
	struct CoreUObject_Quat                      Rotation;                                          // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C58[0xC];                                     // Fixing Size Of Struct 
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_DebugSettings
struct ControlRig_RigUnit_FitChainToCurve_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C59[0x3];                                     // Fixing Size After Last Property  
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               CurveColor;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               SegmentsColor;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C5C[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x30(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve_WorkData
struct ControlRig_RigUnit_FitChainToCurve_WorkData
{
public:
	float                                        ChainLength;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C5E[0x4];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_Vector>            ItemPositions;                                     // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemSegments;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            CurvePositions;                                    // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                CurveSegments;                                     // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   CachedItems;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationA;                                     // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ItemRotationB;                                     // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemRotationT;                                     // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         ItemLocalTransforms;                               // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x220 (0x380 - 0x160)
// ScriptStruct ControlRig.RigUnit_FitChainToCurve
struct ControlRig_RigUnit_FitChainToCurve : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RigVM_RigVMFourPointBezier            Bezier;                                            // 0x170(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C68[0x3];                                     // Fixing Size After Last Property  
	float                                        Minimum;                                           // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PrimaryAxis;                                       // 0x1E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SecondaryAxis;                                     // 0x1F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PoleVectorPosition;                                // 0x210(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C6D[0x3];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C6F[0xF];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x250(0x90)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_FitChainToCurve_WorkData WorkData;                                          // 0x2E0(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C70[0x8];                                     // Fixing Size Of Struct 
};

// 0x220 (0x380 - 0x160)
// ScriptStruct ControlRig.RigUnit_FitChainToCurvePerItem
struct ControlRig_RigUnit_FitChainToCurvePerItem : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKeyCollection    Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RigVM_RigVMFourPointBezier            Bezier;                                            // 0x170(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C72[0x3];                                     // Fixing Size After Last Property  
	float                                        Minimum;                                           // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PrimaryAxis;                                       // 0x1E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SecondaryAxis;                                     // 0x1F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PoleVectorPosition;                                // 0x210(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C74[0x3];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C76[0xF];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x250(0x90)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_FitChainToCurve_WorkData WorkData;                                          // 0x2E0(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C77[0x8];                                     // Fixing Size Of Struct 
};

// 0x220 (0x380 - 0x160)
// ScriptStruct ControlRig.RigUnit_FitChainToCurveItemArray
struct ControlRig_RigUnit_FitChainToCurveItemArray : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct RigVM_RigVMFourPointBezier            Bezier;                                            // 0x170(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x1D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C7B[0x3];                                     // Fixing Size After Last Property  
	float                                        Minimum;                                           // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x1D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0x1DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PrimaryAxis;                                       // 0x1E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SecondaryAxis;                                     // 0x1F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PoleVectorPosition;                                // 0x210(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x228(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x238(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C7E[0x3];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C7F[0xF];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x250(0x90)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_FitChainToCurve_WorkData WorkData;                                          // 0x2E0(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C80[0x8];                                     // Fixing Size Of Struct 
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_PerBone
struct ControlRig_RigUnit_ModifyBoneTransforms_PerBone
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C81[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms_WorkData
struct ControlRig_RigUnit_ModifyTransforms_WorkData
{
public:
	TArray<struct ControlRig_CachedRigElement>   CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms_WorkData
struct ControlRig_RigUnit_ModifyBoneTransforms_WorkData : public ControlRig_RigUnit_ModifyTransforms_WorkData
{
public:
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_ModifyBoneTransforms
struct ControlRig_RigUnit_ModifyBoneTransforms : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	TArray<struct ControlRig_RigUnit_ModifyBoneTransforms_PerBone> BoneToModify;                                      // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMinimum;                                     // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMaximum;                                     // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigModifyBoneMode         Mode;                                              // 0x17C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C84[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_ModifyBoneTransforms_WorkData WorkData;                                          // 0x180(0x10)(Transient, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms_PerItem
struct ControlRig_RigUnit_ModifyTransforms_PerItem
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x0(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C86[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_ModifyTransforms
struct ControlRig_RigUnit_ModifyTransforms : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	TArray<struct ControlRig_RigUnit_ModifyTransforms_PerItem> ItemToModify;                                      // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMinimum;                                     // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightMaximum;                                     // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigModifyBoneMode         Mode;                                              // 0x17C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C89[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_ModifyTransforms_WorkData WorkData;                                          // 0x180(0x10)(Transient, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK_WorkData
struct ControlRig_RigUnit_MultiFABRIK_WorkData
{
public:
	uint8                                        Pad_4C8B[0x68];                                    // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK_EndEffector
struct ControlRig_RigUnit_MultiFABRIK_EndEffector
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0x200 - 0x160)
// ScriptStruct ControlRig.RigUnit_MultiFABRIK
struct ControlRig_RigUnit_MultiFABRIK : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	class FName                                  RootBone;                                          // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigUnit_MultiFABRIK_EndEffector> Effectors;                                         // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x17C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C91[0x3];                                     // Fixing Size After Last Property  
	int32                                        MaxIterations;                                     // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C92[0x4];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_MultiFABRIK_WorkData WorkData;                                          // 0x188(0x68)(Transient, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x1F0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C94[0xF];                                     // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ControlRig.RigUnit_SlideChain_WorkData
struct ControlRig_RigUnit_SlideChain_WorkData
{
public:
	float                                        ChainLength;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C95[0x4];                                     // Fixing Size After Last Property  
	TArray<float>                                ItemSegments;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   CachedItems;                                       // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         BlendedTransforms;                                 // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x1C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SlideChain
struct ControlRig_RigUnit_SlideChain : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlideAmount;                                       // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x174(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C97[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_SlideChain_WorkData WorkData;                                          // 0x178(0x48)(Transient, NativeAccessSpecifierPublic)
};

// 0x60 (0x1C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SlideChainPerItem
struct ControlRig_RigUnit_SlideChainPerItem : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKeyCollection    Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SlideAmount;                                       // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x174(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C9A[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_SlideChain_WorkData WorkData;                                          // 0x178(0x48)(Transient, NativeAccessSpecifierPublic)
};

// 0x60 (0x1C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_SlideChainItemArray
struct ControlRig_RigUnit_SlideChainItemArray : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SlideAmount;                                       // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x174(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C9D[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_SlideChain_WorkData WorkData;                                          // 0x178(0x48)(Transient, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.RegionScaleFactors
struct ControlRig_RegionScaleFactors
{
public:
	float                                        PositiveWidth;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NegativeWidth;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PositiveHeight;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NegativeHeight;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ControlRig.SphericalRegion
struct ControlRig_SphericalRegion
{
public:
	uint8                                        Pad_4C9E[0x14];                                    // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ControlRig.SphericalPoseReaderDebugSettings
struct ControlRig_SphericalPoseReaderDebugSettings
{
public:
	bool                                         bDrawDebug;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDraw2D;                                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawLocalAxes;                                    // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CA0[0x1];                                     // Fixing Size After Last Property  
	float                                        DebugScale;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DebugSegments;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugThickness;                                    // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A0 (0x300 - 0x160)
// ScriptStruct ControlRig.RigUnit_SphericalPoseReader
struct ControlRig_RigUnit_SphericalPoseReader : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	float                                        OutputParam;                                       // 0x160(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              DriverItem;                                        // 0x164(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    DriverAxis;                                        // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    RotationOffset;                                    // 0x188(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActiveRegionSize;                                  // 0x1A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RegionScaleFactors         ActiveRegionScaleFactors;                          // 0x1A4(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        FalloffSize;                                       // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RegionScaleFactors         FalloffRegionScaleFactors;                         // 0x1B8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         FlipWidthScaling;                                  // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FlipHeightScaling;                                 // 0x1C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CA8[0x2];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKey              OptionalParentItem;                                // 0x1CC(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_SphericalPoseReaderDebugSettings Debug;                                             // 0x1D8(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_SphericalRegion            InnerRegion;                                       // 0x1E8(0x14)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_SphericalRegion            OuterRegion;                                       // 0x1FC(0x14)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    DriverNormal;                                      // 0x210(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Driver2D;                                          // 0x228(0x18)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           DriverCache;                                       // 0x240(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           OptionalParentCache;                               // 0x260(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 LocalDriverTransformInit;                          // 0x280(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    CachedRotationOffset;                              // 0x2E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCachedInitTransforms;                             // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CAE[0x7];                                     // Fixing Size Of Struct 
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_SpringIK_DebugSettings
struct ControlRig_RigUnit_SpringIK_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CAF[0x3];                                     // Fixing Size After Last Property  
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CB1[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct ControlRig.RigUnit_SpringIK_WorkData
struct ControlRig_RigUnit_SpringIK_WorkData
{
public:
	TArray<struct ControlRig_CachedRigElement>   CachedBones;                                       // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedPoleVector;                                  // 0x10(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_CRSimPointContainer        Simulation;                                        // 0x40(0x78)(NativeAccessSpecifierPublic)
};

// 0x1D0 (0x330 - 0x160)
// ScriptStruct ControlRig.RigUnit_SpringIK
struct ControlRig_RigUnit_SpringIK : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HierarchyStrength;                                 // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectorStrength;                                  // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectorRatio;                                     // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootStrength;                                      // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RootRatio;                                         // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damping;                                           // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PoleVector;                                        // 0x188(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipPolePlane;                                    // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x1A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CB3[0x2];                                     // Fixing Size After Last Property  
	class FName                                  PoleVectorSpace;                                   // 0x1A4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CB4[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    PrimaryAxis;                                       // 0x1B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SecondaryAxis;                                     // 0x1C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLiveSimulation;                                   // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CB6[0x3];                                     // Fixing Size After Last Property  
	int32                                        Iterations;                                        // 0x1E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLimitLocalPosition;                               // 0x1E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CB8[0x6];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_SpringIK_DebugSettings DebugSettings;                                     // 0x1F0(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_SpringIK_WorkData  WorkData;                                          // 0x270(0xB8)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CB9[0x8];                                     // Fixing Size Of Struct 
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.ConstraintTarget
struct ControlRig_ConstraintTarget
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x0(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x64(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_TransformFilter         Filter;                                            // 0x65(0x9)(Edit, BlueprintVisible, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CBB[0x2];                                     // Fixing Size Of Struct 
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ControlRig.RigUnit_TransformConstraint_WorkData
struct ControlRig_RigUnit_TransformConstraint_WorkData
{
public:
	TArray<struct AnimationCore_ConstraintData>  ConstraintData;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<int32, int32>                           ConstraintDataToTargets;                           // 0x10(0x50)(NativeAccessSpecifierPublic)
};

// 0xF0 (0x250 - 0x160)
// ScriptStruct ControlRig.RigUnit_TransformConstraint
struct ControlRig_RigUnit_TransformConstraint : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	class FName                                  bone;                                              // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               BaseTransformSpace;                                // 0x168(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CC9[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 BaseTransform;                                     // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BaseBone;                                          // 0x1D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_ConstraintTarget>   Targets;                                           // 0x1D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseInitialTransforms;                             // 0x1E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CCB[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_TransformConstraint_WorkData WorkData;                                          // 0x1F0(0x60)(Transient, NativeAccessSpecifierPrivate)
};

// 0x100 (0x260 - 0x160)
// ScriptStruct ControlRig.RigUnit_TransformConstraintPerItem
struct ControlRig_RigUnit_TransformConstraintPerItem : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKey              Item;                                              // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformSpaceMode               BaseTransformSpace;                                // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CCD[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 BaseTransform;                                     // 0x170(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              BaseItem;                                          // 0x1D0(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CCE[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_ConstraintTarget>   Targets;                                           // 0x1E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseInitialTransforms;                             // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CCF[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_TransformConstraint_WorkData WorkData;                                          // 0x1F8(0x60)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4CD0[0x8];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.RigUnit_ParentConstraint_AdvancedSettings
struct ControlRig_RigUnit_ParentConstraint_AdvancedSettings
{
public:
	enum class EConstraintInterpType             InterpolationType;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrderForFilter;                            // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x1C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_ParentConstraint
struct ControlRig_RigUnit_ParentConstraint : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_TransformFilter         Filter;                                            // 0x16D(0x9)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CD1[0x2];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_ConstraintParent>   Parents;                                           // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_ParentConstraint_AdvancedSettings AdvancedSettings;                                  // 0x188(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CD2[0x2];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           ChildCache;                                        // 0x190(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   ParentCaches;                                      // 0x1B0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_PositionConstraint
struct ControlRig_RigUnit_PositionConstraint : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_FilterOptionPerAxis     Filter;                                            // 0x16D(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_ConstraintParent>   Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CD6[0xC];                                     // Fixing Size Of Struct 
};

// 0x60 (0x1C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
struct ControlRig_RigUnit_PositionConstraintLocalSpaceOffset : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_FilterOptionPerAxis     Filter;                                            // 0x16D(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_ConstraintParent>   Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CDB[0x4];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           ChildCache;                                        // 0x188(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   ParentCaches;                                      // 0x1A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CDD[0x8];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ControlRig.RigUnit_RotationConstraint_AdvancedSettings
struct ControlRig_RigUnit_RotationConstraint_AdvancedSettings
{
public:
	enum class EConstraintInterpType             InterpolationType;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrderForFilter;                            // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_RotationConstraint
struct ControlRig_RigUnit_RotationConstraint : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_FilterOptionPerAxis     Filter;                                            // 0x16D(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_ConstraintParent>   Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;                                  // 0x180(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CE3[0x2];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CE4[0x8];                                     // Fixing Size Of Struct 
};

// 0x60 (0x1C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
struct ControlRig_RigUnit_RotationConstraintLocalSpaceOffset : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_FilterOptionPerAxis     Filter;                                            // 0x16D(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_ConstraintParent>   Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_RotationConstraint_AdvancedSettings AdvancedSettings;                                  // 0x180(0x2)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CEF[0x2];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           ChildCache;                                        // 0x188(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   ParentCaches;                                      // 0x1A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CF2[0x8];                                     // Fixing Size Of Struct 
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRig.RigUnit_ScaleConstraint
struct ControlRig_RigUnit_ScaleConstraint : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_FilterOptionPerAxis     Filter;                                            // 0x16D(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_ConstraintParent>   Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CFD[0xC];                                     // Fixing Size Of Struct 
};

// 0x60 (0x1C0 - 0x160)
// ScriptStruct ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
struct ControlRig_RigUnit_ScaleConstraintLocalSpaceOffset : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKey              Child;                                             // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x16C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_FilterOptionPerAxis     Filter;                                            // 0x16D(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_ConstraintParent>   Parents;                                           // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D06[0x4];                                     // Fixing Size After Last Property  
	struct ControlRig_CachedRigElement           ChildCache;                                        // 0x188(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   ParentCaches;                                      // 0x1A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D09[0x8];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ControlRig.RigUnit_TwistBones_WorkData
struct ControlRig_RigUnit_TwistBones_WorkData
{
public:
	TArray<struct ControlRig_CachedRigElement>   CachedItems;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemRatios;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         ItemTransforms;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x1E0 - 0x160)
// ScriptStruct ControlRig.RigUnit_TwistBones
struct ControlRig_RigUnit_TwistBones : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	class FName                                  StartBone;                                         // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EndBone;                                           // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    TwistAxis;                                         // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PoleAxis;                                          // 0x188(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              TwistEaseType;                                     // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D16[0x3];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x1A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D19[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_TwistBones_WorkData WorkData;                                          // 0x1B0(0x30)(Transient, NativeAccessSpecifierPublic)
};

// 0x80 (0x1E0 - 0x160)
// ScriptStruct ControlRig.RigUnit_TwistBonesPerItem
struct ControlRig_RigUnit_TwistBonesPerItem : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKeyCollection    Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    TwistAxis;                                         // 0x170(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PoleAxis;                                          // 0x188(0x18)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              TwistEaseType;                                     // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D1C[0x3];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x1A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D1D[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_TwistBones_WorkData WorkData;                                          // 0x1B0(0x30)(Transient, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
struct ControlRig_RigUnit_TwoBoneIKSimple_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D20[0x3];                                     // Fixing Size After Last Property  
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D21[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1F0 (0x350 - 0x160)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimple
struct ControlRig_RigUnit_TwoBoneIKSimple : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	class FName                                  BoneA;                                             // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneB;                                             // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EffectorBone;                                      // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D23[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Effector;                                          // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PrimaryAxis;                                       // 0x1E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SecondaryAxis;                                     // 0x1F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondaryAxisWeight;                               // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D26[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    PoleVector;                                        // 0x218(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x230(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D27[0x3];                                     // Fixing Size After Last Property  
	class FName                                  PoleVectorSpace;                                   // 0x234(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0x23C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D28[0x3];                                     // Fixing Size After Last Property  
	float                                        StretchStartRatio;                                 // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneALength;                                       // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneBLength;                                       // 0x250(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x254(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D29[0xB];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                                     // 0x260(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedBoneAIndex;                                  // 0x2D0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedBoneBIndex;                                  // 0x2F0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedEffectorBoneIndex;                           // 0x310(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedPoleVectorSpaceIndex;                        // 0x330(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x200 (0x360 - 0x160)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimplePerItem
struct ControlRig_RigUnit_TwoBoneIKSimplePerItem : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKey              ItemA;                                             // 0x160(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              ItemB;                                             // 0x16C(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_RigElementKey              EffectorItem;                                      // 0x178(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D2B[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Effector;                                          // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PrimaryAxis;                                       // 0x1F0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SecondaryAxis;                                     // 0x208(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondaryAxisWeight;                               // 0x220(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D2C[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    PoleVector;                                        // 0x228(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlRigVectorKind             PoleVectorKind;                                    // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D2D[0x3];                                     // Fixing Size After Last Property  
	struct ControlRig_RigElementKey              PoleVectorSpace;                                   // 0x244(0xC)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D2E[0x3];                                     // Fixing Size After Last Property  
	float                                        StretchStartRatio;                                 // 0x254(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemALength;                                       // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ItemBLength;                                       // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D2F[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_TwoBoneIKSimple_DebugSettings DebugSettings;                                     // 0x270(0x70)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedItemAIndex;                                  // 0x2E0(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedItemBIndex;                                  // 0x300(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedEffectorItemIndex;                           // 0x320(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRig_CachedRigElement           CachedPoleVectorSpaceIndex;                        // 0x340(0x20)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleVectors
struct ControlRig_RigUnit_TwoBoneIKSimpleVectors : public ControlRig_RigUnit_HighlevelBase
{
public:
	struct CoreUObject_Vector                    Root;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PoleVector;                                        // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Effector;                                          // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D35[0x3];                                     // Fixing Size After Last Property  
	float                                        StretchStartRatio;                                 // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneALength;                                       // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneBLength;                                       // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D37[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Elbow;                                             // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x198 (0x1A0 - 0x8)
// ScriptStruct ControlRig.RigUnit_TwoBoneIKSimpleTransforms
struct ControlRig_RigUnit_TwoBoneIKSimpleTransforms : public ControlRig_RigUnit_HighlevelBase
{
public:
	uint8                                        Pad_4D38[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Root;                                              // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PoleVector;                                        // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D39[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Effector;                                          // 0x90(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PrimaryAxis;                                       // 0xF0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SecondaryAxis;                                     // 0x108(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondaryAxisWeight;                               // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableStretch;                                    // 0x124(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D3E[0x3];                                     // Fixing Size After Last Property  
	float                                        StretchStartRatio;                                 // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchMaximumRatio;                               // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneALength;                                       // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneBLength;                                       // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D3F[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Elbow;                                             // 0x140(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_DebugSettings
struct ControlRig_RigUnit_PointSimulation_DebugSettings
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D40[0x3];                                     // Fixing Size After Last Property  
	float                                        Scale;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionScale;                                    // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawPointsAsSpheres;                              // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D41[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_BoneTarget
struct ControlRig_RigUnit_PointSimulation_BoneTarget
{
public:
	class FName                                  bone;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TranslationPoint;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PrimaryAimPoint;                                   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SecondaryAimPoint;                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ControlRig.RigUnit_PointSimulation_WorkData
struct ControlRig_RigUnit_PointSimulation_WorkData
{
public:
	struct ControlRig_CRSimPointContainer        Simulation;                                        // 0x0(0x78)(NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   BoneIndices;                                       // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x210 (0x310 - 0x100)
// ScriptStruct ControlRig.RigUnit_PointSimulation
struct ControlRig_RigUnit_PointSimulation : public RigVM_RigVMFunction_SimBaseMutable
{
public:
	TArray<struct RigVM_RigVMSimPoint>           Points;                                            // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CRSimLinearSpring>  Links;                                             // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CRSimPointForce>    Forces;                                            // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CRSimSoftCollision> CollisionVolumes;                                  // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SimulatedStepsPerSecond;                           // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMSimPointIntegrateType       IntegratorType;                                    // 0x144(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D44[0x3];                                     // Fixing Size After Last Property  
	float                                        VerletBlend;                                       // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D45[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ControlRig_RigUnit_PointSimulation_BoneTarget> BoneTargets;                                       // 0x150(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	bool                                         bLimitLocalPosition;                               // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x161(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D46[0x6];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    PrimaryAimAxis;                                    // 0x168(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SecondaryAimAxis;                                  // 0x180(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D47[0x8];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_PointSimulation_DebugSettings DebugSettings;                                     // 0x1A0(0x80)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct RigVM_RigVMFourPointBezier            Bezier;                                            // 0x220(0x60)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_PointSimulation_WorkData WorkData;                                          // 0x280(0x88)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D48[0x8];                                     // Fixing Size Of Struct 
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterp
struct ControlRig_RigUnit_SpringInterp : public RigVM_RigVMFunction_SimBase
{
public:
	float                                        Current;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Target;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalDamping;                                   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_FloatSpringState               SpringState;                                       // 0x20(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D4B[0x4];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpVector
struct ControlRig_RigUnit_SpringInterpVector : public RigVM_RigVMFunction_SimBase
{
public:
	struct CoreUObject_Vector                    Current;                                           // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Target;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stiffness;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalDamping;                                   // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D4D[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_VectorSpringState              SpringState;                                       // 0x60(0x38)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpV2
struct ControlRig_RigUnit_SpringInterpV2 : public RigVM_RigVMFunction_SimBase
{
public:
	float                                        Target;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalDamping;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Force;                                             // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCurrentInput;                                  // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D4E[0x3];                                     // Fixing Size After Last Property  
	float                                        Current;                                           // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetVelocityAmount;                              // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitializeFromTarget;                             // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D50[0x3];                                     // Fixing Size After Last Property  
	float                                        Result;                                            // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Velocity;                                          // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimulatedResult;                                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_FloatSpringState               SpringState;                                       // 0x34(0xC)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE8 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpVectorV2
struct ControlRig_RigUnit_SpringInterpVectorV2 : public RigVM_RigVMFunction_SimBase
{
public:
	struct CoreUObject_Vector                    Target;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalDamping;                                   // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Force;                                             // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCurrentInput;                                  // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D53[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Current;                                           // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetVelocityAmount;                              // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitializeFromTarget;                             // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D54[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Velocity;                                          // 0x80(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SimulatedResult;                                   // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_VectorSpringState              SpringState;                                       // 0xB0(0x38)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct ControlRig.RigUnit_SpringInterpQuaternionV2
struct ControlRig_RigUnit_SpringInterpQuaternionV2 : public RigVM_RigVMFunction_SimBase
{
public:
	uint8                                        Pad_4D58[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Target;                                            // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CriticalDamping;                                   // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Torque;                                            // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCurrentInput;                                  // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D5A[0xF];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Current;                                           // 0x60(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetVelocityAmount;                              // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInitializeFromTarget;                             // 0x84(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D5B[0xB];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Result;                                            // 0x90(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AngularVelocity;                                   // 0xB0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D5E[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      SimulatedResult;                                   // 0xD0(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_QuaternionSpringState          SpringState;                                       // 0xF0(0x40)(NoDestructor, NativeAccessSpecifierPublic)
};

}


