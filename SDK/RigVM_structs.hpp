#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERigVMPinDirection : uint8
{
	Input                          = 0,
	Output                         = 1,
	IO                             = 2,
	Visible                        = 3,
	Hidden                         = 4,
	Invalid                        = 5,
	ERigVMPinDirection_MAX         = 6,
};

enum class ERigVMFunctionArgumentDirection : uint8
{
	Input                          = 0,
	Output                         = 1,
	Invalid                        = 2,
	ERigVMFunctionArgumentDirection_MAX = 3,
};

enum class ERigVMTransformSpace : uint8
{
	LocalSpace                     = 0,
	GlobalSpace                    = 1,
	Max                            = 2,
};

enum class ERigVMClampSpatialMode : uint8
{
	Plane                          = 0,
	Cylinder                       = 1,
	Sphere                         = 2,
	ERigVMClampSpatialMode_MAX     = 3,
};

enum class ERigVMParameterType : uint8
{
	Input                          = 0,
	Output                         = 1,
	Invalid                        = 2,
	ERigVMParameterType_MAX        = 3,
};

enum class ERigVMOpCode : uint8
{
	Execute_0_Operands             = 0,
	Execute_1_Operands             = 1,
	Execute_2_Operands             = 2,
	Execute_3_Operands             = 3,
	Execute_4_Operands             = 4,
	Execute_5_Operands             = 5,
	Execute_6_Operands             = 6,
	Execute_7_Operands             = 7,
	Execute_8_Operands             = 8,
	Execute_9_Operands             = 9,
	Execute_10_Operands            = 10,
	Execute_11_Operands            = 11,
	Execute_12_Operands            = 12,
	Execute_13_Operands            = 13,
	Execute_14_Operands            = 14,
	Execute_15_Operands            = 15,
	Execute_16_Operands            = 16,
	Execute_17_Operands            = 17,
	Execute_18_Operands            = 18,
	Execute_19_Operands            = 19,
	Execute_20_Operands            = 20,
	Execute_21_Operands            = 21,
	Execute_22_Operands            = 22,
	Execute_23_Operands            = 23,
	Execute_24_Operands            = 24,
	Execute_25_Operands            = 25,
	Execute_26_Operands            = 26,
	Execute_27_Operands            = 27,
	Execute_28_Operands            = 28,
	Execute_29_Operands            = 29,
	Execute_30_Operands            = 30,
	Execute_31_Operands            = 31,
	Execute_32_Operands            = 32,
	Execute_33_Operands            = 33,
	Execute_34_Operands            = 34,
	Execute_35_Operands            = 35,
	Execute_36_Operands            = 36,
	Execute_37_Operands            = 37,
	Execute_38_Operands            = 38,
	Execute_39_Operands            = 39,
	Execute_40_Operands            = 40,
	Execute_41_Operands            = 41,
	Execute_42_Operands            = 42,
	Execute_43_Operands            = 43,
	Execute_44_Operands            = 44,
	Execute_45_Operands            = 45,
	Execute_46_Operands            = 46,
	Execute_47_Operands            = 47,
	Execute_48_Operands            = 48,
	Execute_49_Operands            = 49,
	Execute_50_Operands            = 50,
	Execute_51_Operands            = 51,
	Execute_52_Operands            = 52,
	Execute_53_Operands            = 53,
	Execute_54_Operands            = 54,
	Execute_55_Operands            = 55,
	Execute_56_Operands            = 56,
	Execute_57_Operands            = 57,
	Execute_58_Operands            = 58,
	Execute_59_Operands            = 59,
	Execute_60_Operands            = 60,
	Execute_61_Operands            = 61,
	Execute_62_Operands            = 62,
	Execute_63_Operands            = 63,
	Execute_64_Operands            = 64,
	Zero                           = 65,
	BoolFalse                      = 66,
	BoolTrue                       = 67,
	Copy                           = 68,
	Increment                      = 69,
	Decrement                      = 70,
	Equals                         = 71,
	NotEquals                      = 72,
	JumpAbsolute                   = 73,
	JumpForward                    = 74,
	JumpBackward                   = 75,
	JumpAbsoluteIf                 = 76,
	JumpForwardIf                  = 77,
	JumpBackwardIf                 = 78,
	ChangeType                     = 79,
	Exit                           = 80,
	BeginBlock                     = 81,
	EndBlock                       = 82,
	ArrayReset                     = 83,
	ArrayGetNum                    = 84,
	ArraySetNum                    = 85,
	ArrayGetAtIndex                = 86,
	ArraySetAtIndex                = 87,
	ArrayAdd                       = 88,
	ArrayInsert                    = 89,
	ArrayRemove                    = 90,
	ArrayFind                      = 91,
	ArrayAppend                    = 92,
	ArrayClone                     = 93,
	ArrayIterator                  = 94,
	ArrayUnion                     = 95,
	ArrayDifference                = 96,
	ArrayIntersection              = 97,
	ArrayReverse                   = 98,
	InvokeEntry                    = 99,
	JumpToBranch                   = 100,
	Execute                        = 101,
	Invalid                        = 102,
	FirstArrayOpCode               = 83,
	LastArrayOpCode                = 98,
	ERigVMOpCode_MAX               = 103,
};

enum class ERigVMCopyType : uint8
{
	Default                        = 0,
	FloatToDouble                  = 1,
	DoubleToFloat                  = 2,
	ERigVMCopyType_MAX             = 3,
};

enum class ERigVMBreakpointAction : uint8
{
	None                           = 0,
	Resume                         = 1,
	StepOver                       = 2,
	StepInto                       = 3,
	StepOut                        = 4,
	Max                            = 5,
};

enum class ERigVMDrawSettings : uint8
{
	Points                         = 0,
	Lines                          = 1,
	LineStrip                      = 2,
	DynamicMesh                    = 3,
	ERigVMDrawSettings_MAX         = 4,
};

enum class ERigVMMemoryType : uint8
{
	Work                           = 0,
	Literal                        = 1,
	External                       = 2,
	Debug                          = 3,
	Invalid                        = 4,
	ERigVMMemoryType_MAX           = 5,
};

enum class ERigVMRegisterType : uint8
{
	Plain                          = 0,
	String                         = 1,
	Name                           = 2,
	Struct                         = 3,
	Invalid                        = 4,
	ERigVMRegisterType_MAX         = 5,
};

enum class ERigVMUserWorkflowType : uint8
{
	Invalid                        = 0,
	NodeContext                    = 1,
	PinContext                     = 2,
	OnPinDefaultChanged            = 4,
	All                            = 7,
	ERigVMUserWorkflowType_MAX     = 8,
};

enum class ERigUnitDebugPointMode : uint8
{
	Point                          = 0,
	Vector                         = 1,
	Max                            = 2,
};

enum class ERigUnitDebugTransformMode : uint8
{
	Point                          = 0,
	Axes                           = 1,
	Box                            = 2,
	Max                            = 3,
};

enum class ERigUnitVisualDebugPointMode : uint8
{
	Point                          = 0,
	Vector                         = 1,
	Max                            = 2,
};

enum class ERBFKernelType : uint8
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	ERBFKernelType_MAX             = 5,
};

enum class ERBFQuatDistanceType : uint8
{
	Euclidean                      = 0,
	ArcLength                      = 1,
	SwingAngle                     = 2,
	TwistAngle                     = 3,
	ERBFQuatDistanceType_MAX       = 4,
};

enum class ERBFVectorDistanceType : uint8
{
	Euclidean                      = 0,
	Manhattan                      = 1,
	ArcLength                      = 2,
	ERBFVectorDistanceType_MAX     = 3,
};

enum class ERigVMAnimEasingType : uint8
{
	Linear                         = 0,
	QuadraticEaseIn                = 1,
	QuadraticEaseOut               = 2,
	QuadraticEaseInOut             = 3,
	CubicEaseIn                    = 4,
	CubicEaseOut                   = 5,
	CubicEaseInOut                 = 6,
	QuarticEaseIn                  = 7,
	QuarticEaseOut                 = 8,
	QuarticEaseInOut               = 9,
	QuinticEaseIn                  = 10,
	QuinticEaseOut                 = 11,
	QuinticEaseInOut               = 12,
	SineEaseIn                     = 13,
	SineEaseOut                    = 14,
	SineEaseInOut                  = 15,
	CircularEaseIn                 = 16,
	CircularEaseOut                = 17,
	CircularEaseInOut              = 18,
	ExponentialEaseIn              = 19,
	ExponentialEaseOut             = 20,
	ExponentialEaseInOut           = 21,
	ElasticEaseIn                  = 22,
	ElasticEaseOut                 = 23,
	ElasticEaseInOut               = 24,
	BackEaseIn                     = 25,
	BackEaseOut                    = 26,
	BackEaseInOut                  = 27,
	BounceEaseIn                   = 28,
	BounceEaseOut                  = 29,
	BounceEaseInOut                = 30,
	ERigVMAnimEasingType_MAX       = 31,
};

enum class ERigVMSimPointIntegrateType : uint8
{
	Verlet                         = 0,
	SemiExplicitEuler              = 1,
	ERigVMSimPointIntegrateType_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1B8 (0x1B8 - 0x0)
// ScriptStruct RigVM.RigVMExtendedExecuteContext
struct RigVM_RigVMExtendedExecuteContext
{
public:
	uint8                                        Pad_14C9[0x8];                                     // Fixing Size After Last Property  
	uint32                                       VMHash;                                            // 0x8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14CA[0x104];                                   // Fixing Size After Last Property  
	uint32                                       NumExecutions;                                     // 0x110(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14CC[0x5C];                                    // Fixing Size After Last Property  
	class URigVM*                                DeferredVMToCopy;                                  // 0x170(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14CE[0x40];                                    // Fixing Size Of Struct 
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct RigVM.RigVMDrawInstruction
struct RigVM_RigVMDrawInstruction
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMDrawSettings                PrimitiveType;                                     // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D1[0x7];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_Vector>            Positions;                                         // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D7[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x40(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D9[0x30];                                    // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RigVM.RigVMDrawContainer
struct RigVM_RigVMDrawContainer
{
public:
	uint8                                        Pad_14DC[0x8];                                     // Fixing Size After Last Property  
	TArray<struct RigVM_RigVMDrawInstruction>    Instructions;                                      // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RigVM.RigVMRuntimeSettings
struct RigVM_RigVMRuntimeSettings
{
public:
	int32                                        MaximumArraySize;                                  // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E2[0x14];                                    // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct RigVM.RigVMStruct
struct RigVM_RigVMStruct
{
public:
	uint8                                        Pad_14E6[0x8];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMDecorator
struct RigVM_RigVMDecorator : public RigVM_RigVMStruct
{
public:
	uint8                                        Pad_14EB[0x10];                                    // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RigVM.RigVMExternalVariableDef
struct RigVM_RigVMExternalVariableDef
{
public:
	uint8                                        Pad_14ED[0x28];                                    // Fixing Size Of Struct 
};

// 0x8 (0x30 - 0x28)
// ScriptStruct RigVM.RigVMExternalVariable
struct RigVM_RigVMExternalVariable : public RigVM_RigVMExternalVariableDef
{
public:
	uint8                                        Pad_14EF[0x8];                                     // Fixing Size Of Struct 
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AnimBase
struct RigVM_RigVMFunction_AnimBase : public RigVM_RigVMStruct
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_DebugBase
struct RigVM_RigVMFunction_DebugBase : public RigVM_RigVMStruct
{
public:
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct RigVM.RigVMExecuteContext
struct RigVM_RigVMExecuteContext
{
public:
	uint8                                        Pad_14F5[0xF0];                                    // Fixing Size Of Struct 
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct RigVM.RigVMStructMutable
struct RigVM_RigVMStructMutable : public RigVM_RigVMStruct
{
public:
	uint8                                        Pad_14F8[0x8];                                     // Fixing Size After Last Property  
	struct RigVM_RigVMExecuteContext             ExecuteContext;                                    // 0x10(0xF0)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};

// 0x0 (0x100 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugBaseMutable
struct RigVM_RigVMFunction_DebugBaseMutable : public RigVM_RigVMStructMutable
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBase
struct RigVM_RigVMFunction_MathBase : public RigVM_RigVMStruct
{
public:
};

// 0x0 (0x100 - 0x100)
// ScriptStruct RigVM.RigVMFunction_MathMutableBase
struct RigVM_RigVMFunction_MathMutableBase : public RigVM_RigVMStructMutable
{
public:
};

// 0x2D8 (0x2E0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_Sequence
struct RigVM_RigVMFunction_Sequence : public RigVM_RigVMStruct
{
public:
	uint8                                        Pad_14FE[0x8];                                     // Fixing Size After Last Property  
	struct RigVM_RigVMExecuteContext             ExecuteContext;                                    // 0x10(0xF0)(Edit, BlueprintVisible, Transient, NativeAccessSpecifierPublic)
	struct RigVM_RigVMExecuteContext             A;                                                 // 0x100(0xF0)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	struct RigVM_RigVMExecuteContext             B;                                                 // 0x1F0(0xF0)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct RigVM.RigVMDispatchFactory
struct RigVM_RigVMDispatchFactory
{
public:
	uint8                                        Pad_1502[0x70];                                    // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct RigVM.RigVMUnknownType
struct RigVM_RigVMUnknownType
{
public:
	uint32                                       Hash;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_SimBase
struct RigVM_RigVMFunction_SimBase : public RigVM_RigVMStruct
{
public:
};

// 0x0 (0x100 - 0x100)
// ScriptStruct RigVM.RigVMFunction_SimBaseMutable
struct RigVM_RigVMFunction_SimBaseMutable : public RigVM_RigVMStructMutable
{
public:
};

// 0x40 (0x40 - 0x0)
// ScriptStruct RigVM.RigVMGraphFunctionIdentifier
struct RigVM_RigVMGraphFunctionIdentifier
{
public:
	struct CoreUObject_SoftObjectPath            LibraryNode;                                       // 0x0(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftObjectPath            HostObject;                                        // 0x20(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct RigVM.RigVMGraphFunctionArgument
struct RigVM_RigVMGraphFunctionArgument
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DisplayName;                                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CPPType;                                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                CPPTypeObject;                                     // 0x18(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsArray;                                          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMPinDirection                Direction;                                         // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1515[0x6];                                     // Fixing Size After Last Property  
	class FString                                DefaultValue;                                      // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsConst;                                          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1517[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FText>             PathToTooltip;                                     // 0x60(0x50)(NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct RigVM.RigVMGraphFunctionHeader
struct RigVM_RigVMGraphFunctionHeader
{
public:
	struct RigVM_RigVMGraphFunctionIdentifier    LibraryPointer;                                    // 0x0(0x40)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NodeTitle;                                         // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               NodeColor;                                         // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Tooltip;                                           // 0x68(0x18)(NativeAccessSpecifierPublic)
	class FString                                Category;                                          // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Keywords;                                          // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct RigVM_RigVMGraphFunctionArgument> Arguments;                                         // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct RigVM_RigVMGraphFunctionIdentifier, uint32> Dependencies;                                      // 0xB0(0x50)(NativeAccessSpecifierPublic)
	TArray<struct RigVM_RigVMExternalVariable>   ExternalVariables;                                 // 0x100(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct RigVM.RigVMByteCodeEntry
struct RigVM_RigVMByteCodeEntry
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstructionIndex;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RigVM.RigVMBranchInfo
struct RigVM_RigVMBranchInfo
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Label;                                             // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstructionIndex;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArgumentIndex;                                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       FirstInstruction;                                  // 0x14(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       LastInstruction;                                   // 0x16(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RigVM.RigVMPredicateBranch
struct RigVM_RigVMPredicateBranch
{
public:
	uint8                                        Pad_1527[0x30];                                    // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct RigVM.RigVMByteCode
struct RigVM_RigVMByteCode
{
public:
	TArray<uint8>                                ByteCode;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        NumInstructions;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_152B[0x4];                                     // Fixing Size After Last Property  
	TArray<struct RigVM_RigVMByteCodeEntry>      Entries;                                           // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct RigVM_RigVMBranchInfo>         BranchInfos;                                       // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct RigVM_RigVMPredicateBranch>    PredicateBranches;                                 // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_152E[0x58];                                    // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct RigVM.RigVMFunctionCompilationPropertyDescription
struct RigVM_RigVMFunctionCompilationPropertyDescription
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CPPType;                                           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                CPPTypeObject;                                     // 0x18(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultValue;                                      // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RigVM.RigVMFunctionCompilationPropertyPath
struct RigVM_RigVMFunctionCompilationPropertyPath
{
public:
	int32                                        PropertyIndex;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1535[0x4];                                     // Fixing Size After Last Property  
	class FString                                HeadCPPType;                                       // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SegmentPath;                                       // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x6 (0x6 - 0x0)
// ScriptStruct RigVM.RigVMOperand
struct RigVM_RigVMOperand
{
public:
	enum class ERigVMMemoryType                  MemoryType;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_153D[0x1];                                     // Fixing Size After Last Property  
	uint16                                       RegisterIndex;                                     // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       RegisterOffset;                                    // 0x4(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x228 (0x228 - 0x0)
// ScriptStruct RigVM.RigVMFunctionCompilationData
struct RigVM_RigVMFunctionCompilationData
{
public:
	struct RigVM_RigVMByteCode                   ByteCode;                                          // 0x0(0xA0)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          FunctionNames;                                     // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct RigVM_RigVMFunctionCompilationPropertyDescription> WorkPropertyDescriptions;                          // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct RigVM_RigVMFunctionCompilationPropertyPath> WorkPropertyPathDescriptions;                      // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct RigVM_RigVMFunctionCompilationPropertyDescription> LiteralPropertyDescriptions;                       // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct RigVM_RigVMFunctionCompilationPropertyPath> LiteralPropertyPathDescriptions;                   // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct RigVM_RigVMFunctionCompilationPropertyDescription> DebugPropertyDescriptions;                         // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct RigVM_RigVMFunctionCompilationPropertyPath> DebugPropertyPathDescriptions;                     // 0x100(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct RigVM_RigVMFunctionCompilationPropertyDescription> ExternalPropertyDescriptions;                      // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct RigVM_RigVMFunctionCompilationPropertyPath> ExternalPropertyPathDescriptions;                  // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<int32, class FName>                     ExternalRegisterIndexToVariable;                   // 0x130(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, struct RigVM_RigVMOperand> Operands;                                          // 0x180(0x50)(NativeAccessSpecifierPublic)
	uint32                                       Hash;                                              // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_154F[0x54];                                    // Fixing Size Of Struct 
};

// 0x348 (0x348 - 0x0)
// ScriptStruct RigVM.RigVMGraphFunctionData
struct RigVM_RigVMGraphFunctionData
{
public:
	struct RigVM_RigVMGraphFunctionHeader        Header;                                            // 0x0(0x110)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RigVM_RigVMFunctionCompilationData    CompilationData;                                   // 0x110(0x228)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SerializedCollapsedNode;                           // 0x338(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct RigVM.RigVMGraphFunctionStore
struct RigVM_RigVMGraphFunctionStore
{
public:
	TArray<struct RigVM_RigVMGraphFunctionData>  PublicFunctions;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct RigVM_RigVMGraphFunctionData>  PrivateFunctions;                                  // 0x10(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct RigVM.RigVMMemoryStatistics
struct RigVM_RigVMMemoryStatistics
{
public:
	int32                                        RegisterCount;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataBytes;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalBytes;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct RigVM.RigVMByteCodeStatistics
struct RigVM_RigVMByteCodeStatistics
{
public:
	int32                                        InstructionCount;                                  // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataBytes;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct RigVM.RigVMStatistics
struct RigVM_RigVMStatistics
{
public:
	int32                                        BytesForCDO;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BytesPerInstance;                                  // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RigVM_RigVMMemoryStatistics           LiteralMemory;                                     // 0x8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct RigVM_RigVMMemoryStatistics           WorkMemory;                                        // 0x14(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct RigVM_RigVMMemoryStatistics           DebugMemory;                                       // 0x20(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        BytesForCaching;                                   // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RigVM_RigVMByteCodeStatistics         ByteCode;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RigVM.RigVMParameter
struct RigVM_RigVMParameter
{
public:
	enum class ERigVMParameterType               Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1560[0x3];                                     // Fixing Size After Last Property  
	class FName                                  Name;                                              // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RegisterIndex;                                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CPPType;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScriptStruct*                         ScriptStruct;                                      // 0x20(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ScriptStructPath;                                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct RigVM.RigVMBaseOp
struct RigVM_RigVMBaseOp
{
public:
	uint8                                        Pad_1564[0x1];                                     // Fixing Size Of Struct 
};

// 0x9 (0xA - 0x1)
// ScriptStruct RigVM.RigVMExecuteOp
struct RigVM_RigVMExecuteOp : public RigVM_RigVMBaseOp
{
public:
	uint8                                        Pad_1566[0x9];                                     // Fixing Size Of Struct 
};

// 0x7 (0x8 - 0x1)
// ScriptStruct RigVM.RigVMUnaryOp
struct RigVM_RigVMUnaryOp : public RigVM_RigVMBaseOp
{
public:
	uint8                                        Pad_156A[0x7];                                     // Fixing Size Of Struct 
};

// 0xD (0xE - 0x1)
// ScriptStruct RigVM.RigVMBinaryOp
struct RigVM_RigVMBinaryOp : public RigVM_RigVMBaseOp
{
public:
	uint8                                        Pad_156F[0xD];                                     // Fixing Size Of Struct 
};

// 0x13 (0x14 - 0x1)
// ScriptStruct RigVM.RigVMTernaryOp
struct RigVM_RigVMTernaryOp : public RigVM_RigVMBaseOp
{
public:
	uint8                                        Pad_1575[0x13];                                    // Fixing Size Of Struct 
};

// 0x19 (0x1A - 0x1)
// ScriptStruct RigVM.RigVMQuaternaryOp
struct RigVM_RigVMQuaternaryOp : public RigVM_RigVMBaseOp
{
public:
	uint8                                        Pad_1579[0x19];                                    // Fixing Size Of Struct 
};

// 0x1F (0x20 - 0x1)
// ScriptStruct RigVM.RigVMQuinaryOp
struct RigVM_RigVMQuinaryOp : public RigVM_RigVMBaseOp
{
public:
	uint8                                        Pad_1586[0x1F];                                    // Fixing Size Of Struct 
};

// 0x25 (0x26 - 0x1)
// ScriptStruct RigVM.RigVMSenaryOp
struct RigVM_RigVMSenaryOp : public RigVM_RigVMBaseOp
{
public:
	uint8                                        Pad_158A[0x25];                                    // Fixing Size Of Struct 
};

// 0x11 (0x12 - 0x1)
// ScriptStruct RigVM.RigVMCopyOp
struct RigVM_RigVMCopyOp : public RigVM_RigVMBaseOp
{
public:
	uint8                                        Pad_158E[0x11];                                    // Fixing Size Of Struct 
};

// 0x13 (0x14 - 0x1)
// ScriptStruct RigVM.RigVMComparisonOp
struct RigVM_RigVMComparisonOp : public RigVM_RigVMBaseOp
{
public:
	uint8                                        Pad_1590[0x13];                                    // Fixing Size Of Struct 
};

// 0x7 (0x8 - 0x1)
// ScriptStruct RigVM.RigVMJumpOp
struct RigVM_RigVMJumpOp : public RigVM_RigVMBaseOp
{
public:
	uint8                                        Pad_1594[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMJumpIfOp
struct RigVM_RigVMJumpIfOp : public RigVM_RigVMUnaryOp
{
public:
	uint8                                        Pad_1596[0x8];                                     // Fixing Size Of Struct 
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMChangeTypeOp
struct RigVM_RigVMChangeTypeOp : public RigVM_RigVMUnaryOp
{
public:
};

// 0xB (0xC - 0x1)
// ScriptStruct RigVM.RigVMInvokeEntryOp
struct RigVM_RigVMInvokeEntryOp : public RigVM_RigVMBaseOp
{
public:
	uint8                                        Pad_159C[0xB];                                     // Fixing Size Of Struct 
};

// 0x4 (0xC - 0x8)
// ScriptStruct RigVM.RigVMJumpToBranchOp
struct RigVM_RigVMJumpToBranchOp : public RigVM_RigVMUnaryOp
{
public:
	uint8                                        Pad_15A2[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RigVM.RigVMInstruction
struct RigVM_RigVMInstruction
{
public:
	uint64                                       ByteCodeIndex;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMOpCode                      OpCode;                                            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OperandAlignment;                                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A5[0x6];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RigVM.RigVMInstructionArray
struct RigVM_RigVMInstructionArray
{
public:
	TArray<struct RigVM_RigVMInstruction>        Instructions;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RigVM.RigVMBreakpoint
struct RigVM_RigVMBreakpoint
{
public:
	uint8                                        Pad_15AA[0x28];                                    // Fixing Size Of Struct 
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct RigVM.RigVMDebugInfo
struct RigVM_RigVMDebugInfo
{
public:
	uint8                                        Pad_15AB[0xF8];                                    // Fixing Size Of Struct 
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMDrawInterface
struct RigVM_RigVMDrawInterface : public RigVM_RigVMDrawContainer
{
public:
};

// 0x14 (0x14 - 0x0)
// ScriptStruct RigVM.RigVMSlice
struct RigVM_RigVMSlice
{
public:
	uint8                                        Pad_15B5[0x14];                                    // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// ScriptStruct RigVM.RigVMRegister
struct RigVM_RigVMRegister
{
public:
	enum class ERigVMRegisterType                Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BC[0x3];                                     // Fixing Size After Last Property  
	uint32                                       ByteIndex;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ElementSize;                                       // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ElementCount;                                      // 0xA(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       SliceCount;                                        // 0xC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AlignmentBytes;                                    // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C0[0x1];                                     // Fixing Size After Last Property  
	uint16                                       TrailingBytes;                                     // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C2[0x2];                                     // Fixing Size After Last Property  
	class FName                                  Name;                                              // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScriptStructIndex;                                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsArray;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDynamic;                                        // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C7[0x2];                                     // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// ScriptStruct RigVM.RigVMRegisterOffset
struct RigVM_RigVMRegisterOffset
{
public:
	TArray<int32>                                Segments;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class ERigVMRegisterType                Type;                                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15CC[0x3];                                     // Fixing Size After Last Property  
	class FName                                  CPPType;                                           // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15CF[0x4];                                     // Fixing Size After Last Property  
	class UScriptStruct*                         ScriptStruct;                                      // 0x20(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScriptStruct*                         ParentScriptStruct;                                // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ArrayIndex;                                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       ElementSize;                                       // 0x34(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_15D5[0x2];                                     // Fixing Size After Last Property  
	class FString                                CachedSegmentPath;                                 // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct RigVM.RigVMMemoryContainer
struct RigVM_RigVMMemoryContainer
{
public:
	bool                                         bUseNameMap;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMMemoryType                  MemoryType;                                        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DE[0x6];                                     // Fixing Size After Last Property  
	TArray<struct RigVM_RigVMRegister>           Registers;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct RigVM_RigVMRegisterOffset>     RegisterOffsets;                                   // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                Data;                                              // 0x28(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UScriptStruct*>                 ScriptStructs;                                     // 0x38(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     NameMap;                                           // 0x48(0x50)(Transient, NativeAccessSpecifierPublic)
	bool                                         bEncounteredErrorDuringLoad;                       // 0x98(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15E7[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RigVM.RigVMTemplateArgumentType
struct RigVM_RigVMTemplateArgumentType
{
public:
	class FName                                  CPPType;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               CPPTypeObject;                                     // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct RigVM.RigVMUserWorkflow
struct RigVM_RigVMUserWorkflow
{
public:
	uint8                                        Pad_15EA[0x8];                                     // Fixing Size After Last Property  
	class FString                                Title;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Tooltip;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERigVMUserWorkflowType            Type;                                              // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15EE[0x17];                                    // Fixing Size After Last Property  
	FDelegateProperty_                           PerformDynamicDelegate;                            // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UObject>                   OptionsClass;                                      // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AnimEasingType
struct RigVM_RigVMFunction_AnimEasingType : public RigVM_RigVMFunction_AnimBase
{
public:
	enum class ERigVMAnimEasingType              Type;                                              // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F4[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AnimEasing
struct RigVM_RigVMFunction_AnimEasing : public RigVM_RigVMFunction_AnimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              Type;                                              // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1601[0x3];                                     // Fixing Size After Last Property  
	float                                        SourceMinimum;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMaximum;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMinimum;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMaximum;                                     // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1604[0x4];                                     // Fixing Size Of Struct 
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AnimEvalRichCurve
struct RigVM_RigVMFunction_AnimEvalRichCurve : public RigVM_RigVMFunction_AnimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1606[0x4];                                     // Fixing Size After Last Property  
	struct Engine_RuntimeFloatCurve              Curve;                                             // 0x10(0x88)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
	float                                        SourceMinimum;                                     // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMaximum;                                     // 0x9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMinimum;                                     // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMaximum;                                     // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xA8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160A[0x4];                                     // Fixing Size Of Struct 
};

// 0x88 (0x90 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AnimRichCurve
struct RigVM_RigVMFunction_AnimRichCurve : public RigVM_RigVMFunction_AnimBase
{
public:
	struct Engine_RuntimeFloatCurve              Curve;                                             // 0x8(0x88)(Edit, BlueprintVisible, EditConst, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_GetDeltaTime
struct RigVM_RigVMFunction_GetDeltaTime : public RigVM_RigVMFunction_AnimBase
{
public:
	float                                        Result;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1613[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_GetWorldTime
struct RigVM_RigVMFunction_GetWorldTime : public RigVM_RigVMFunction_AnimBase
{
public:
	float                                        Year;                                              // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Month;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Day;                                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeekDay;                                           // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hours;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minutes;                                           // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds;                                           // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverallSeconds;                                    // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_FramesToSeconds
struct RigVM_RigVMFunction_FramesToSeconds : public RigVM_RigVMFunction_AnimBase
{
public:
	float                                        Frames;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Seconds;                                           // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_SecondsToFrames
struct RigVM_RigVMFunction_SecondsToFrames : public RigVM_RigVMFunction_AnimBase
{
public:
	float                                        Seconds;                                           // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frames;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0x1C0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugLineNoSpace
struct RigVM_RigVMFunction_DebugLineNoSpace : public RigVM_RigVMFunction_DebugBaseMutable
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x100(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x118(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1630[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x150(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1633[0xF];                                     // Fixing Size Of Struct 
};

// 0xA0 (0x1A0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugLineStripNoSpace
struct RigVM_RigVMFunction_DebugLineStripNoSpace : public RigVM_RigVMFunction_DebugBaseMutable
{
public:
	TArray<struct CoreUObject_Vector>            Points;                                            // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1638[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x130(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x190(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1639[0xF];                                     // Fixing Size Of Struct 
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_DebugPoint
struct RigVM_RigVMFunction_DebugPoint : public RigVM_RigVMFunction_DebugBase
{
public:
	struct CoreUObject_Vector                    Vector;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugPointMode            Mode;                                              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163E[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1642[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x50(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1643[0xF];                                     // Fixing Size Of Struct 
};

// 0xB0 (0x1B0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugPointMutable
struct RigVM_RigVMFunction_DebugPointMutable : public RigVM_RigVMFunction_DebugBaseMutable
{
public:
	struct CoreUObject_Vector                    Vector;                                            // 0x100(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugPointMode            Mode;                                              // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1647[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x11C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x12C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x134(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164B[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x140(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164F[0xF];                                     // Fixing Size Of Struct 
};

// 0xF0 (0x1F0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugRectangle
struct RigVM_RigVMFunction_DebugRectangle : public RigVM_RigVMFunction_DebugBaseMutable
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x100(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1657[0xF];                                     // Fixing Size Of Struct 
};

// 0xF0 (0x1F0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugRectangleNoSpace
struct RigVM_RigVMFunction_DebugRectangleNoSpace : public RigVM_RigVMFunction_DebugBaseMutable
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x100(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_165D[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_165F[0xF];                                     // Fixing Size Of Struct 
};

// 0x100 (0x200 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugArc
struct RigVM_RigVMFunction_DebugArc : public RigVM_RigVMFunction_DebugBaseMutable
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x100(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDegrees;                                    // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDegrees;                                    // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Space;                                             // 0x184(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166C[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166D[0xF];                                     // Fixing Size Of Struct 
};

// 0x100 (0x200 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugArcNoSpace
struct RigVM_RigVMFunction_DebugArcNoSpace : public RigVM_RigVMFunction_DebugBaseMutable
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x100(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumDegrees;                                    // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDegrees;                                    // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167C[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x190(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167D[0xF];                                     // Fixing Size Of Struct 
};

// 0xF0 (0x1F0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugTransformMutableNoSpace
struct RigVM_RigVMFunction_DebugTransformMutableNoSpace : public RigVM_RigVMFunction_DebugBaseMutable
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x100(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1683[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x164(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1687[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x180(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1689[0xF];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RigVM.RigVMFunction_DebugTransformArrayMutable_WorkData
struct RigVM_RigVMFunction_DebugTransformArrayMutable_WorkData
{
public:
	TArray<struct CoreUObject_Transform>         DrawTransforms;                                    // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0x1B0 - 0x100)
// ScriptStruct RigVM.RigVMFunction_DebugTransformArrayMutableNoSpace
struct RigVM_RigVMFunction_DebugTransformArrayMutableNoSpace : public RigVM_RigVMFunction_DebugBaseMutable
{
public:
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0x110(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigUnitDebugTransformMode        Mode;                                              // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169B[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x124(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x134(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A0[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 WorldOffset;                                       // 0x140(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A1[0xF];                                     // Fixing Size Of Struct 
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RigVM.RigVMFunction_VisualDebugVector
struct RigVM_RigVMFunction_VisualDebugVector : public RigVM_RigVMFunction_DebugBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitVisualDebugPointMode      Mode;                                              // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A8[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16AE[0x4];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_VisualDebugVectorNoSpace
struct RigVM_RigVMFunction_VisualDebugVectorNoSpace : public RigVM_RigVMFunction_DebugBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigUnitVisualDebugPointMode      Mode;                                              // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B7[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               Color;                                             // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16B8[0x4];                                     // Fixing Size Of Struct 
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_VisualDebugQuat
struct RigVM_RigVMFunction_VisualDebugQuat : public RigVM_RigVMFunction_DebugBase
{
public:
	uint8                                        Pad_16BA[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BB[0x3];                                     // Fixing Size After Last Property  
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16BD[0xC];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_VisualDebugQuatNoSpace
struct RigVM_RigVMFunction_VisualDebugQuatNoSpace : public RigVM_RigVMFunction_DebugBase
{
public:
	uint8                                        Pad_16C1[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C7[0x3];                                     // Fixing Size After Last Property  
	float                                        Thickness;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C9[0x4];                                     // Fixing Size Of Struct 
};

// 0x88 (0x90 - 0x8)
// ScriptStruct RigVM.RigVMFunction_VisualDebugTransform
struct RigVM_RigVMFunction_VisualDebugTransform : public RigVM_RigVMFunction_DebugBase
{
public:
	uint8                                        Pad_16CE[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D1[0x3];                                     // Fixing Size After Last Property  
	float                                        Thickness;                                         // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneSpace;                                         // 0x7C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D2[0xC];                                     // Fixing Size Of Struct 
};

// 0x78 (0x80 - 0x8)
// ScriptStruct RigVM.RigVMFunction_VisualDebugTransformNoSpace
struct RigVM_RigVMFunction_VisualDebugTransformNoSpace : public RigVM_RigVMFunction_DebugBase
{
public:
	uint8                                        Pad_16D5[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D7[0x3];                                     // Fixing Size After Last Property  
	float                                        Thickness;                                         // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D9[0x4];                                     // Fixing Size Of Struct 
};

// 0x110 (0x210 - 0x100)
// ScriptStruct RigVM.RigVMFunction_ForLoopCount
struct RigVM_RigVMFunction_ForLoopCount : public RigVM_RigVMStructMutable
{
public:
	class FName                                  BlockToRun;                                        // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Ratio;                                             // 0x110(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E2[0xC];                                     // Fixing Size After Last Property  
	struct RigVM_RigVMExecuteContext             Completed;                                         // 0x120(0xF0)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
};

// 0x108 (0x110 - 0x8)
// ScriptStruct RigVM.RigVMFunction_UserDefinedEvent
struct RigVM_RigVMFunction_UserDefinedEvent : public RigVM_RigVMStruct
{
public:
	uint8                                        Pad_16E6[0x8];                                     // Fixing Size After Last Property  
	struct RigVM_RigVMExecuteContext             ExecuteContext;                                    // 0x10(0xF0)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, NativeAccessSpecifierPublic)
	class FName                                  EventName;                                         // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E8[0x8];                                     // Fixing Size Of Struct 
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolBase
struct RigVM_RigVMFunction_MathBoolBase : public RigVM_RigVMFunction_MathBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolConstant
struct RigVM_RigVMFunction_MathBoolConstant : public RigVM_RigVMFunction_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16EA[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolUnaryOp
struct RigVM_RigVMFunction_MathBoolUnaryOp : public RigVM_RigVMFunction_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16ED[0x6];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolBinaryOp
struct RigVM_RigVMFunction_MathBoolBinaryOp : public RigVM_RigVMFunction_MathBoolBase
{
public:
	bool                                         A;                                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         B;                                                 // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F1[0x5];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolBinaryAggregateOp
struct RigVM_RigVMFunction_MathBoolBinaryAggregateOp : public RigVM_RigVMFunction_MathBoolBase
{
public:
	bool                                         A;                                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         B;                                                 // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16F9[0x5];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolMake
struct RigVM_RigVMFunction_MathBoolMake : public RigVM_RigVMFunction_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1706[0x7];                                     // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathBoolConstTrue
struct RigVM_RigVMFunction_MathBoolConstTrue : public RigVM_RigVMFunction_MathBoolConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathBoolConstFalse
struct RigVM_RigVMFunction_MathBoolConstFalse : public RigVM_RigVMFunction_MathBoolConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathBoolNot
struct RigVM_RigVMFunction_MathBoolNot : public RigVM_RigVMFunction_MathBoolUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathBoolAnd
struct RigVM_RigVMFunction_MathBoolAnd : public RigVM_RigVMFunction_MathBoolBinaryAggregateOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathBoolNand
struct RigVM_RigVMFunction_MathBoolNand : public RigVM_RigVMFunction_MathBoolBinaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathBoolNand2
struct RigVM_RigVMFunction_MathBoolNand2 : public RigVM_RigVMFunction_MathBoolBinaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathBoolOr
struct RigVM_RigVMFunction_MathBoolOr : public RigVM_RigVMFunction_MathBoolBinaryAggregateOp
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolEquals
struct RigVM_RigVMFunction_MathBoolEquals : public RigVM_RigVMFunction_MathBoolBase
{
public:
	bool                                         A;                                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         B;                                                 // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_171E[0x5];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolNotEquals
struct RigVM_RigVMFunction_MathBoolNotEquals : public RigVM_RigVMFunction_MathBoolBase
{
public:
	bool                                         A;                                                 // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         B;                                                 // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1723[0x5];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolToggled
struct RigVM_RigVMFunction_MathBoolToggled : public RigVM_RigVMFunction_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Toggled;                                           // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Initialized;                                       // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastValue;                                         // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1729[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolFlipFlop
struct RigVM_RigVMFunction_MathBoolFlipFlop : public RigVM_RigVMFunction_MathBoolBase
{
public:
	bool                                         StartValue;                                        // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_172B[0x3];                                     // Fixing Size After Last Property  
	float                                        Duration;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastValue;                                         // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1731[0x2];                                     // Fixing Size After Last Property  
	float                                        TimeLeft;                                          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolOnce
struct RigVM_RigVMFunction_MathBoolOnce : public RigVM_RigVMFunction_MathBoolBase
{
public:
	float                                        Duration;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastValue;                                         // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1738[0x2];                                     // Fixing Size After Last Property  
	float                                        TimeLeft;                                          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1739[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolToFloat
struct RigVM_RigVMFunction_MathBoolToFloat : public RigVM_RigVMFunction_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173F[0x3];                                     // Fixing Size After Last Property  
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathBoolToInteger
struct RigVM_RigVMFunction_MathBoolToInteger : public RigVM_RigVMFunction_MathBoolBase
{
public:
	bool                                         Value;                                             // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1745[0x3];                                     // Fixing Size After Last Property  
	int32                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathColorBase
struct RigVM_RigVMFunction_MathColorBase : public RigVM_RigVMFunction_MathBase
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathColorBinaryOp
struct RigVM_RigVMFunction_MathColorBinaryOp : public RigVM_RigVMFunction_MathColorBase
{
public:
	struct CoreUObject_LinearColor               A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathColorBinaryAggregateOp
struct RigVM_RigVMFunction_MathColorBinaryAggregateOp : public RigVM_RigVMFunction_MathColorBase
{
public:
	struct CoreUObject_LinearColor               A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathColorMake
struct RigVM_RigVMFunction_MathColorMake : public RigVM_RigVMFunction_MathColorBase
{
public:
	float                                        R;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        G;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        A;                                                 // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Result;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathColorFromFloat
struct RigVM_RigVMFunction_MathColorFromFloat : public RigVM_RigVMFunction_MathColorBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Result;                                            // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1758[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathColorFromDouble
struct RigVM_RigVMFunction_MathColorFromDouble : public RigVM_RigVMFunction_MathColorBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Result;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathColorAdd
struct RigVM_RigVMFunction_MathColorAdd : public RigVM_RigVMFunction_MathColorBinaryAggregateOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathColorSub
struct RigVM_RigVMFunction_MathColorSub : public RigVM_RigVMFunction_MathColorBinaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathColorMul
struct RigVM_RigVMFunction_MathColorMul : public RigVM_RigVMFunction_MathColorBinaryAggregateOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathColorLerp
struct RigVM_RigVMFunction_MathColorLerp : public RigVM_RigVMFunction_MathColorBase
{
public:
	struct CoreUObject_LinearColor               A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Result;                                            // 0x2C(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1766[0x4];                                     // Fixing Size Of Struct 
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleBase
struct RigVM_RigVMFunction_MathDoubleBase : public RigVM_RigVMFunction_MathBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleConstant
struct RigVM_RigVMFunction_MathDoubleConstant : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleUnaryOp
struct RigVM_RigVMFunction_MathDoubleUnaryOp : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleBinaryOp
struct RigVM_RigVMFunction_MathDoubleBinaryOp : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleBinaryAggregateOp
struct RigVM_RigVMFunction_MathDoubleBinaryAggregateOp : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleMake
struct RigVM_RigVMFunction_MathDoubleMake : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathDoubleConstPi
struct RigVM_RigVMFunction_MathDoubleConstPi : public RigVM_RigVMFunction_MathDoubleConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathDoubleConstHalfPi
struct RigVM_RigVMFunction_MathDoubleConstHalfPi : public RigVM_RigVMFunction_MathDoubleConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathDoubleConstTwoPi
struct RigVM_RigVMFunction_MathDoubleConstTwoPi : public RigVM_RigVMFunction_MathDoubleConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathDoubleConstE
struct RigVM_RigVMFunction_MathDoubleConstE : public RigVM_RigVMFunction_MathDoubleConstant
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoubleAdd
struct RigVM_RigVMFunction_MathDoubleAdd : public RigVM_RigVMFunction_MathDoubleBinaryAggregateOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoubleSub
struct RigVM_RigVMFunction_MathDoubleSub : public RigVM_RigVMFunction_MathDoubleBinaryOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoubleMul
struct RigVM_RigVMFunction_MathDoubleMul : public RigVM_RigVMFunction_MathDoubleBinaryAggregateOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoubleDiv
struct RigVM_RigVMFunction_MathDoubleDiv : public RigVM_RigVMFunction_MathDoubleBinaryOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoubleMod
struct RigVM_RigVMFunction_MathDoubleMod : public RigVM_RigVMFunction_MathDoubleBinaryOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoubleMin
struct RigVM_RigVMFunction_MathDoubleMin : public RigVM_RigVMFunction_MathDoubleBinaryAggregateOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoubleMax
struct RigVM_RigVMFunction_MathDoubleMax : public RigVM_RigVMFunction_MathDoubleBinaryAggregateOp
{
public:
};

// 0x0 (0x20 - 0x20)
// ScriptStruct RigVM.RigVMFunction_MathDoublePow
struct RigVM_RigVMFunction_MathDoublePow : public RigVM_RigVMFunction_MathDoubleBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleSqrt
struct RigVM_RigVMFunction_MathDoubleSqrt : public RigVM_RigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleNegate
struct RigVM_RigVMFunction_MathDoubleNegate : public RigVM_RigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleAbs
struct RigVM_RigVMFunction_MathDoubleAbs : public RigVM_RigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleFloor
struct RigVM_RigVMFunction_MathDoubleFloor : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179E[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleCeil
struct RigVM_RigVMFunction_MathDoubleCeil : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B1[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleRound
struct RigVM_RigVMFunction_MathDoubleRound : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B3[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleToInt
struct RigVM_RigVMFunction_MathDoubleToInt : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B7[0x4];                                     // Fixing Size Of Struct 
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleSign
struct RigVM_RigVMFunction_MathDoubleSign : public RigVM_RigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleClamp
struct RigVM_RigVMFunction_MathDoubleClamp : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Minimum;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Maximum;                                           // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleLerp
struct RigVM_RigVMFunction_MathDoubleLerp : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       T;                                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleRemap
struct RigVM_RigVMFunction_MathDoubleRemap : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SourceMinimum;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SourceMaximum;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       TargetMinimum;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       TargetMaximum;                                     // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClamp;                                            // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C5[0x7];                                     // Fixing Size After Last Property  
	double                                       Result;                                            // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleEquals
struct RigVM_RigVMFunction_MathDoubleEquals : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D4[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleNotEquals
struct RigVM_RigVMFunction_MathDoubleNotEquals : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D9[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleGreater
struct RigVM_RigVMFunction_MathDoubleGreater : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17DB[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleLess
struct RigVM_RigVMFunction_MathDoubleLess : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E3[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleGreaterEqual
struct RigVM_RigVMFunction_MathDoubleGreaterEqual : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17EA[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleLessEqual
struct RigVM_RigVMFunction_MathDoubleLessEqual : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17EF[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleIsNearlyZero
struct RigVM_RigVMFunction_MathDoubleIsNearlyZero : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Tolerance;                                         // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F6[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleIsNearlyEqual
struct RigVM_RigVMFunction_MathDoubleIsNearlyEqual : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Tolerance;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17FC[0x7];                                     // Fixing Size Of Struct 
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleDeg
struct RigVM_RigVMFunction_MathDoubleDeg : public RigVM_RigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleRad
struct RigVM_RigVMFunction_MathDoubleRad : public RigVM_RigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleSin
struct RigVM_RigVMFunction_MathDoubleSin : public RigVM_RigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleCos
struct RigVM_RigVMFunction_MathDoubleCos : public RigVM_RigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleTan
struct RigVM_RigVMFunction_MathDoubleTan : public RigVM_RigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleAsin
struct RigVM_RigVMFunction_MathDoubleAsin : public RigVM_RigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleAcos
struct RigVM_RigVMFunction_MathDoubleAcos : public RigVM_RigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleAtan
struct RigVM_RigVMFunction_MathDoubleAtan : public RigVM_RigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleLawOfCosine
struct RigVM_RigVMFunction_MathDoubleLawOfCosine : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	double                                       A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       C;                                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       AlphaAngle;                                        // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       BetaAngle;                                         // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       GammaAngle;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValid;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1816[0x7];                                     // Fixing Size Of Struct 
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathDoubleExponential
struct RigVM_RigVMFunction_MathDoubleExponential : public RigVM_RigVMFunction_MathDoubleUnaryOp
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleArraySum
struct RigVM_RigVMFunction_MathDoubleArraySum : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	TArray<double>                               Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	double                                       Sum;                                               // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDoubleArrayAverage
struct RigVM_RigVMFunction_MathDoubleArrayAverage : public RigVM_RigVMFunction_MathDoubleBase
{
public:
	TArray<double>                               Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	double                                       Average;                                           // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatBase
struct RigVM_RigVMFunction_MathFloatBase : public RigVM_RigVMFunction_MathBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatConstant
struct RigVM_RigVMFunction_MathFloatConstant : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1822[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatUnaryOp
struct RigVM_RigVMFunction_MathFloatUnaryOp : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatBinaryOp
struct RigVM_RigVMFunction_MathFloatBinaryOp : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182A[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatBinaryAggregateOp
struct RigVM_RigVMFunction_MathFloatBinaryAggregateOp : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1830[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatMake
struct RigVM_RigVMFunction_MathFloatMake : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1836[0x4];                                     // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatConstPi
struct RigVM_RigVMFunction_MathFloatConstPi : public RigVM_RigVMFunction_MathFloatConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatConstHalfPi
struct RigVM_RigVMFunction_MathFloatConstHalfPi : public RigVM_RigVMFunction_MathFloatConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatConstTwoPi
struct RigVM_RigVMFunction_MathFloatConstTwoPi : public RigVM_RigVMFunction_MathFloatConstant
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatConstE
struct RigVM_RigVMFunction_MathFloatConstE : public RigVM_RigVMFunction_MathFloatConstant
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatAdd
struct RigVM_RigVMFunction_MathFloatAdd : public RigVM_RigVMFunction_MathFloatBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatSub
struct RigVM_RigVMFunction_MathFloatSub : public RigVM_RigVMFunction_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatMul
struct RigVM_RigVMFunction_MathFloatMul : public RigVM_RigVMFunction_MathFloatBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatDiv
struct RigVM_RigVMFunction_MathFloatDiv : public RigVM_RigVMFunction_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatMod
struct RigVM_RigVMFunction_MathFloatMod : public RigVM_RigVMFunction_MathFloatBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatMin
struct RigVM_RigVMFunction_MathFloatMin : public RigVM_RigVMFunction_MathFloatBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatMax
struct RigVM_RigVMFunction_MathFloatMax : public RigVM_RigVMFunction_MathFloatBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathFloatPow
struct RigVM_RigVMFunction_MathFloatPow : public RigVM_RigVMFunction_MathFloatBinaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatSqrt
struct RigVM_RigVMFunction_MathFloatSqrt : public RigVM_RigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatNegate
struct RigVM_RigVMFunction_MathFloatNegate : public RigVM_RigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatAbs
struct RigVM_RigVMFunction_MathFloatAbs : public RigVM_RigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatFloor
struct RigVM_RigVMFunction_MathFloatFloor : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1856[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatCeil
struct RigVM_RigVMFunction_MathFloatCeil : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1858[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatRound
struct RigVM_RigVMFunction_MathFloatRound : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int;                                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_185E[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatToInt
struct RigVM_RigVMFunction_MathFloatToInt : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatSign
struct RigVM_RigVMFunction_MathFloatSign : public RigVM_RigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatClamp
struct RigVM_RigVMFunction_MathFloatClamp : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatLerp
struct RigVM_RigVMFunction_MathFloatLerp : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatRemap
struct RigVM_RigVMFunction_MathFloatRemap : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMinimum;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMaximum;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMinimum;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMaximum;                                     // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClamp;                                            // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1872[0x3];                                     // Fixing Size After Last Property  
	float                                        Result;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1873[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatEquals
struct RigVM_RigVMFunction_MathFloatEquals : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1877[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatNotEquals
struct RigVM_RigVMFunction_MathFloatNotEquals : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_187D[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatGreater
struct RigVM_RigVMFunction_MathFloatGreater : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1880[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatLess
struct RigVM_RigVMFunction_MathFloatLess : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1885[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatGreaterEqual
struct RigVM_RigVMFunction_MathFloatGreaterEqual : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1889[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatLessEqual
struct RigVM_RigVMFunction_MathFloatLessEqual : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_188C[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatIsNearlyZero
struct RigVM_RigVMFunction_MathFloatIsNearlyZero : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1891[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatIsNearlyEqual
struct RigVM_RigVMFunction_MathFloatIsNearlyEqual : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1897[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatSelectBool
struct RigVM_RigVMFunction_MathFloatSelectBool : public RigVM_RigVMFunction_MathFloatBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_189A[0x3];                                     // Fixing Size After Last Property  
	float                                        IfTrue;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IfFalse;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatDeg
struct RigVM_RigVMFunction_MathFloatDeg : public RigVM_RigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatRad
struct RigVM_RigVMFunction_MathFloatRad : public RigVM_RigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatSin
struct RigVM_RigVMFunction_MathFloatSin : public RigVM_RigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatCos
struct RigVM_RigVMFunction_MathFloatCos : public RigVM_RigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatTan
struct RigVM_RigVMFunction_MathFloatTan : public RigVM_RigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatAsin
struct RigVM_RigVMFunction_MathFloatAsin : public RigVM_RigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatAcos
struct RigVM_RigVMFunction_MathFloatAcos : public RigVM_RigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatAtan
struct RigVM_RigVMFunction_MathFloatAtan : public RigVM_RigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatLawOfCosine
struct RigVM_RigVMFunction_MathFloatLawOfCosine : public RigVM_RigVMFunction_MathFloatBase
{
public:
	float                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        C;                                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AlphaAngle;                                        // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BetaAngle;                                         // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GammaAngle;                                        // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValid;                                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CD[0x7];                                     // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathFloatExponential
struct RigVM_RigVMFunction_MathFloatExponential : public RigVM_RigVMFunction_MathFloatUnaryOp
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatArraySum
struct RigVM_RigVMFunction_MathFloatArraySum : public RigVM_RigVMFunction_MathFloatBase
{
public:
	TArray<float>                                Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Sum;                                               // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D7[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathFloatArrayAverage
struct RigVM_RigVMFunction_MathFloatArrayAverage : public RigVM_RigVMFunction_MathFloatBase
{
public:
	TArray<float>                                Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Average;                                           // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DC[0x4];                                     // Fixing Size Of Struct 
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntBase
struct RigVM_RigVMFunction_MathIntBase : public RigVM_RigVMFunction_MathBase
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntUnaryOp
struct RigVM_RigVMFunction_MathIntUnaryOp : public RigVM_RigVMFunction_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntBinaryOp
struct RigVM_RigVMFunction_MathIntBinaryOp : public RigVM_RigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18EC[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntBinaryAggregateOp
struct RigVM_RigVMFunction_MathIntBinaryAggregateOp : public RigVM_RigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F8[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntMake
struct RigVM_RigVMFunction_MathIntMake : public RigVM_RigVMFunction_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FB[0x4];                                     // Fixing Size Of Struct 
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntAdd
struct RigVM_RigVMFunction_MathIntAdd : public RigVM_RigVMFunction_MathIntBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntSub
struct RigVM_RigVMFunction_MathIntSub : public RigVM_RigVMFunction_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntMul
struct RigVM_RigVMFunction_MathIntMul : public RigVM_RigVMFunction_MathIntBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntDiv
struct RigVM_RigVMFunction_MathIntDiv : public RigVM_RigVMFunction_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntMod
struct RigVM_RigVMFunction_MathIntMod : public RigVM_RigVMFunction_MathIntBinaryOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntMin
struct RigVM_RigVMFunction_MathIntMin : public RigVM_RigVMFunction_MathIntBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntMax
struct RigVM_RigVMFunction_MathIntMax : public RigVM_RigVMFunction_MathIntBinaryAggregateOp
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct RigVM.RigVMFunction_MathIntPow
struct RigVM_RigVMFunction_MathIntPow : public RigVM_RigVMFunction_MathIntBinaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathIntNegate
struct RigVM_RigVMFunction_MathIntNegate : public RigVM_RigVMFunction_MathIntUnaryOp
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathIntAbs
struct RigVM_RigVMFunction_MathIntAbs : public RigVM_RigVMFunction_MathIntUnaryOp
{
public:
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntToFloat
struct RigVM_RigVMFunction_MathIntToFloat : public RigVM_RigVMFunction_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntToDouble
struct RigVM_RigVMFunction_MathIntToDouble : public RigVM_RigVMFunction_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1918[0x4];                                     // Fixing Size After Last Property  
	double                                       Result;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct RigVM.RigVMFunction_MathIntSign
struct RigVM_RigVMFunction_MathIntSign : public RigVM_RigVMFunction_MathIntUnaryOp
{
public:
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntClamp
struct RigVM_RigVMFunction_MathIntClamp : public RigVM_RigVMFunction_MathIntBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minimum;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Maximum;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntEquals
struct RigVM_RigVMFunction_MathIntEquals : public RigVM_RigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1921[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntNotEquals
struct RigVM_RigVMFunction_MathIntNotEquals : public RigVM_RigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1927[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntGreater
struct RigVM_RigVMFunction_MathIntGreater : public RigVM_RigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_192E[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntLess
struct RigVM_RigVMFunction_MathIntLess : public RigVM_RigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1933[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntGreaterEqual
struct RigVM_RigVMFunction_MathIntGreaterEqual : public RigVM_RigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1938[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntLessEqual
struct RigVM_RigVMFunction_MathIntLessEqual : public RigVM_RigVMFunction_MathIntBase
{
public:
	int32                                        A;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_193C[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntArraySum
struct RigVM_RigVMFunction_MathIntArraySum : public RigVM_RigVMFunction_MathIntBase
{
public:
	TArray<int32>                                Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Sum;                                               // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1944[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntArrayAverage
struct RigVM_RigVMFunction_MathIntArrayAverage : public RigVM_RigVMFunction_MathIntBase
{
public:
	TArray<int32>                                Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Average;                                           // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194E[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntToString
struct RigVM_RigVMFunction_MathIntToString : public RigVM_RigVMFunction_MathIntBase
{
public:
	int32                                        Number;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PaddedSize;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntToName
struct RigVM_RigVMFunction_MathIntToName : public RigVM_RigVMFunction_MathIntBase
{
public:
	int32                                        Number;                                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PaddedSize;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Result;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixBase
struct RigVM_RigVMFunction_MathMatrixBase : public RigVM_RigVMFunction_MathBase
{
public:
};

// 0x108 (0x110 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixUnaryOp
struct RigVM_RigVMFunction_MathMatrixUnaryOp : public RigVM_RigVMFunction_MathMatrixBase
{
public:
	uint8                                        Pad_195C[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Matrix                    Value;                                             // 0x10(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Matrix                    Result;                                            // 0x90(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x188 (0x190 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixBinaryOp
struct RigVM_RigVMFunction_MathMatrixBinaryOp : public RigVM_RigVMFunction_MathMatrixBase
{
public:
	uint8                                        Pad_1962[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Matrix                    A;                                                 // 0x10(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Matrix                    B;                                                 // 0x90(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Matrix                    Result;                                            // 0x110(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x188 (0x190 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixBinaryAggregateOp
struct RigVM_RigVMFunction_MathMatrixBinaryAggregateOp : public RigVM_RigVMFunction_MathMatrixBase
{
public:
	uint8                                        Pad_1964[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Matrix                    A;                                                 // 0x10(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Matrix                    B;                                                 // 0x90(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Matrix                    Result;                                            // 0x110(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixToTransform
struct RigVM_RigVMFunction_MathMatrixToTransform : public RigVM_RigVMFunction_MathMatrixBase
{
public:
	uint8                                        Pad_1968[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Matrix                    Value;                                             // 0x10(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Result;                                            // 0x90(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixFromTransform
struct RigVM_RigVMFunction_MathMatrixFromTransform : public RigVM_RigVMFunction_MathMatrixBase
{
public:
	uint8                                        Pad_196F[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Matrix                    Result;                                            // 0x70(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixFromTransformV2
struct RigVM_RigVMFunction_MathMatrixFromTransformV2 : public RigVM_RigVMFunction_MathMatrixBase
{
public:
	uint8                                        Pad_1970[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Matrix                    Result;                                            // 0x70(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixToVectors
struct RigVM_RigVMFunction_MathMatrixToVectors : public RigVM_RigVMFunction_MathMatrixBase
{
public:
	uint8                                        Pad_1973[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Matrix                    Value;                                             // 0x10(0x80)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Origin;                                            // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    X;                                                 // 0xA8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Y;                                                 // 0xC0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Z;                                                 // 0xD8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathMatrixFromVectors
struct RigVM_RigVMFunction_MathMatrixFromVectors : public RigVM_RigVMFunction_MathMatrixBase
{
public:
	struct CoreUObject_Vector                    Origin;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    X;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Y;                                                 // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Z;                                                 // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197D[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Matrix                    Result;                                            // 0x70(0x80)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x190 - 0x190)
// ScriptStruct RigVM.RigVMFunction_MathMatrixMul
struct RigVM_RigVMFunction_MathMatrixMul : public RigVM_RigVMFunction_MathMatrixBinaryAggregateOp
{
public:
};

// 0x0 (0x110 - 0x110)
// ScriptStruct RigVM.RigVMFunction_MathMatrixInverse
struct RigVM_RigVMFunction_MathMatrixInverse : public RigVM_RigVMFunction_MathMatrixUnaryOp
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionBase
struct RigVM_RigVMFunction_MathQuaternionBase : public RigVM_RigVMFunction_MathBase
{
public:
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionUnaryOp
struct RigVM_RigVMFunction_MathQuaternionUnaryOp : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1989[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Result;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionBinaryOp
struct RigVM_RigVMFunction_MathQuaternionBinaryOp : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1990[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Result;                                            // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionBinaryAggregateOp
struct RigVM_RigVMFunction_MathQuaternionBinaryAggregateOp : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1995[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Result;                                            // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionMake
struct RigVM_RigVMFunction_MathQuaternionMake : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	float                                        X;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        W;                                                 // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_199E[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Result;                                            // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionFromAxisAndAngle
struct RigVM_RigVMFunction_MathQuaternionFromAxisAndAngle : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	struct CoreUObject_Vector                    Axis;                                              // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A2[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Result;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionFromEuler
struct RigVM_RigVMFunction_MathQuaternionFromEuler : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	struct CoreUObject_Vector                    Euler;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19A8[0xF];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Result;                                            // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionFromRotator
struct RigVM_RigVMFunction_MathQuaternionFromRotator : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	struct CoreUObject_Rotator                   Rotator;                                           // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Result;                                            // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionFromRotatorV2
struct RigVM_RigVMFunction_MathQuaternionFromRotatorV2 : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	struct CoreUObject_Rotator                   Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Result;                                            // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionFromTwoVectors
struct RigVM_RigVMFunction_MathQuaternionFromTwoVectors : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B1[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Result;                                            // 0x40(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionToAxisAndAngle
struct RigVM_RigVMFunction_MathQuaternionToAxisAndAngle : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_19B4[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Axis;                                              // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19B6[0x4];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionScale
struct RigVM_RigVMFunction_MathQuaternionScale : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_19BD[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19BF[0xC];                                     // Fixing Size Of Struct 
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionScaleV2
struct RigVM_RigVMFunction_MathQuaternionScaleV2 : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_19C3[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Factor;                                            // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C8[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Result;                                            // 0x40(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionToEuler
struct RigVM_RigVMFunction_MathQuaternionToEuler : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_19CE[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D0[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionToRotator
struct RigVM_RigVMFunction_MathQuaternionToRotator : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_19D6[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Result;                                            // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_19D8[0x8];                                     // Fixing Size Of Struct 
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionMul
struct RigVM_RigVMFunction_MathQuaternionMul : public RigVM_RigVMFunction_MathQuaternionBinaryAggregateOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionInverse
struct RigVM_RigVMFunction_MathQuaternionInverse : public RigVM_RigVMFunction_MathQuaternionUnaryOp
{
public:
};

// 0x78 (0x80 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionSlerp
struct RigVM_RigVMFunction_MathQuaternionSlerp : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_19E1[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E6[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Result;                                            // 0x60(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionEquals
struct RigVM_RigVMFunction_MathQuaternionEquals : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_19ED[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19EF[0xF];                                     // Fixing Size Of Struct 
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionNotEquals
struct RigVM_RigVMFunction_MathQuaternionNotEquals : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_19F2[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19F5[0xF];                                     // Fixing Size Of Struct 
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionSelectBool
struct RigVM_RigVMFunction_MathQuaternionSelectBool : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19FC[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      IfTrue;                                            // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      IfFalse;                                           // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Result;                                            // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionDot
struct RigVM_RigVMFunction_MathQuaternionDot : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1A05[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      A;                                                 // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      B;                                                 // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A09[0xC];                                     // Fixing Size Of Struct 
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionUnit
struct RigVM_RigVMFunction_MathQuaternionUnit : public RigVM_RigVMFunction_MathQuaternionUnaryOp
{
public:
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionRotateVector
struct RigVM_RigVMFunction_MathQuaternionRotateVector : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1A14[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Transform;                                         // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Vector;                                            // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionGetAxis
struct RigVM_RigVMFunction_MathQuaternionGetAxis : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1A1B[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Quaternion;                                        // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             Axis;                                              // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A1D[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionSwingTwist
struct RigVM_RigVMFunction_MathQuaternionSwingTwist : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1A21[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Input;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    TwistAxis;                                         // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A25[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Swing;                                             // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Twist;                                             // 0x70(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionRotationOrder
struct RigVM_RigVMFunction_MathQuaternionRotationOrder : public RigVM_RigVMFunction_MathBase
{
public:
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A2A[0x7];                                     // Fixing Size Of Struct 
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionMakeRelative
struct RigVM_RigVMFunction_MathQuaternionMakeRelative : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1A2F[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Global;                                            // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Parent;                                            // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Local;                                             // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionMakeAbsolute
struct RigVM_RigVMFunction_MathQuaternionMakeAbsolute : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1A35[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Local;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Parent;                                            // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Global;                                            // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathQuaternionMirrorTransform
struct RigVM_RigVMFunction_MathQuaternionMirrorTransform : public RigVM_RigVMFunction_MathQuaternionBase
{
public:
	uint8                                        Pad_1A3F[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             MirrorAxis;                                        // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A43[0xE];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 CentralTransform;                                  // 0x40(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Result;                                            // 0xA0(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatWorkData
struct RigVM_RigVMFunction_MathRBFInterpolateQuatWorkData
{
public:
	uint8                                        Pad_1A49[0x90];                                    // Fixing Size Of Struct 
};

// 0x90 (0x90 - 0x0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorWorkData
struct RigVM_RigVMFunction_MathRBFInterpolateVectorWorkData
{
public:
	uint8                                        Pad_1A4B[0x90];                                    // Fixing Size Of Struct 
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateBase
struct RigVM_RigVMFunction_MathRBFInterpolateBase : public RigVM_RigVMFunction_MathBase
{
public:
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatBase
struct RigVM_RigVMFunction_MathRBFInterpolateQuatBase : public RigVM_RigVMFunction_MathRBFInterpolateBase
{
public:
	uint8                                        Pad_1A52[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Input;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFQuatDistanceType              DistanceFunction;                                  // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFKernelType                    SmoothingFunction;                                 // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A5B[0x2];                                     // Fixing Size After Last Property  
	float                                        SmoothingAngle;                                    // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalizeOutput;                                  // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A5F[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    TwistAxis;                                         // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A62[0x8];                                     // Fixing Size After Last Property  
	struct RigVM_RigVMFunction_MathRBFInterpolateQuatWorkData WorkData;                                          // 0x60(0x90)(Transient, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorBase
struct RigVM_RigVMFunction_MathRBFInterpolateVectorBase : public RigVM_RigVMFunction_MathRBFInterpolateBase
{
public:
	struct CoreUObject_Vector                    Input;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFVectorDistanceType            DistanceFunction;                                  // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFKernelType                    SmoothingFunction;                                 // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A6D[0x2];                                     // Fixing Size After Last Property  
	float                                        SmoothingRadius;                                   // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalizeOutput;                                  // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A6F[0x7];                                     // Fixing Size After Last Property  
	struct RigVM_RigVMFunction_MathRBFInterpolateVectorWorkData WorkData;                                          // 0x30(0x90)(Transient, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateQuatFloat_Target
struct RigVM_MathRBFInterpolateQuatFloat_Target
{
public:
	struct CoreUObject_Quat                      Target;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A73[0xC];                                     // Fixing Size Of Struct 
};

// 0x20 (0x110 - 0xF0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatFloat
struct RigVM_RigVMFunction_MathRBFInterpolateQuatFloat : public RigVM_RigVMFunction_MathRBFInterpolateQuatBase
{
public:
	TArray<struct RigVM_MathRBFInterpolateQuatFloat_Target> Targets;                                           // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0x100(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A78[0xC];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateQuatVector_Target
struct RigVM_MathRBFInterpolateQuatVector_Target
{
public:
	struct CoreUObject_Quat                      Target;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Value;                                             // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7C[0x8];                                     // Fixing Size Of Struct 
};

// 0x30 (0x120 - 0xF0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatVector
struct RigVM_RigVMFunction_MathRBFInterpolateQuatVector : public RigVM_RigVMFunction_MathRBFInterpolateQuatBase
{
public:
	TArray<struct RigVM_MathRBFInterpolateQuatVector_Target> Targets;                                           // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Output;                                            // 0x100(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A7F[0x8];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateQuatColor_Target
struct RigVM_MathRBFInterpolateQuatColor_Target
{
public:
	struct CoreUObject_Quat                      Target;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Value;                                             // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x110 - 0xF0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatColor
struct RigVM_RigVMFunction_MathRBFInterpolateQuatColor : public RigVM_RigVMFunction_MathRBFInterpolateQuatBase
{
public:
	TArray<struct RigVM_MathRBFInterpolateQuatColor_Target> Targets;                                           // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Output;                                            // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateQuatQuat_Target
struct RigVM_MathRBFInterpolateQuatQuat_Target
{
public:
	struct CoreUObject_Quat                      Target;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Value;                                             // 0x20(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x120 - 0xF0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatQuat
struct RigVM_RigVMFunction_MathRBFInterpolateQuatQuat : public RigVM_RigVMFunction_MathRBFInterpolateQuatBase
{
public:
	TArray<struct RigVM_MathRBFInterpolateQuatQuat_Target> Targets;                                           // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Output;                                            // 0x100(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateQuatXform_Target
struct RigVM_MathRBFInterpolateQuatXform_Target
{
public:
	struct CoreUObject_Quat                      Target;                                            // 0x0(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Value;                                             // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x160 - 0xF0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatXform
struct RigVM_RigVMFunction_MathRBFInterpolateQuatXform : public RigVM_RigVMFunction_MathRBFInterpolateQuatBase
{
public:
	TArray<struct RigVM_MathRBFInterpolateQuatXform_Target> Targets;                                           // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Output;                                            // 0x100(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateVectorFloat_Target
struct RigVM_MathRBFInterpolateVectorFloat_Target
{
public:
	struct CoreUObject_Vector                    Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A9A[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0xE0 - 0xC0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorFloat
struct RigVM_RigVMFunction_MathRBFInterpolateVectorFloat : public RigVM_RigVMFunction_MathRBFInterpolateVectorBase
{
public:
	TArray<struct RigVM_MathRBFInterpolateVectorFloat_Target> Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Output;                                            // 0xD0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A9E[0xC];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateVectorVector_Target
struct RigVM_MathRBFInterpolateVectorVector_Target
{
public:
	struct CoreUObject_Vector                    Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Value;                                             // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0xF0 - 0xC0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorVector
struct RigVM_RigVMFunction_MathRBFInterpolateVectorVector : public RigVM_RigVMFunction_MathRBFInterpolateVectorBase
{
public:
	TArray<struct RigVM_MathRBFInterpolateVectorVector_Target> Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Output;                                            // 0xD0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AA7[0x8];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateVectorColor_Target
struct RigVM_MathRBFInterpolateVectorColor_Target
{
public:
	struct CoreUObject_Vector                    Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Value;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0xE0 - 0xC0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorColor
struct RigVM_RigVMFunction_MathRBFInterpolateVectorColor : public RigVM_RigVMFunction_MathRBFInterpolateVectorBase
{
public:
	TArray<struct RigVM_MathRBFInterpolateVectorColor_Target> Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Output;                                            // 0xD0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateVectorQuat_Target
struct RigVM_MathRBFInterpolateVectorQuat_Target
{
public:
	struct CoreUObject_Vector                    Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB0[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x20(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0xF0 - 0xC0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorQuat
struct RigVM_RigVMFunction_MathRBFInterpolateVectorQuat : public RigVM_RigVMFunction_MathRBFInterpolateVectorBase
{
public:
	TArray<struct RigVM_MathRBFInterpolateVectorQuat_Target> Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Output;                                            // 0xD0(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct RigVM.MathRBFInterpolateVectorXform_Target
struct RigVM_MathRBFInterpolateVectorXform_Target
{
public:
	struct CoreUObject_Vector                    Target;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AB4[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x20(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x130 - 0xC0)
// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorXform
struct RigVM_RigVMFunction_MathRBFInterpolateVectorXform : public RigVM_RigVMFunction_MathRBFInterpolateVectorBase
{
public:
	TArray<struct RigVM_MathRBFInterpolateVectorXform_Target> Targets;                                           // 0xC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Output;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformBase
struct RigVM_RigVMFunction_MathTransformBase : public RigVM_RigVMFunction_MathBase
{
public:
};

// 0x0 (0x100 - 0x100)
// ScriptStruct RigVM.RigVMFunction_MathTransformMutableBase
struct RigVM_RigVMFunction_MathTransformMutableBase : public RigVM_RigVMFunction_MathMutableBase
{
public:
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformUnaryOp
struct RigVM_RigVMFunction_MathTransformUnaryOp : public RigVM_RigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1ABA[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Result;                                            // 0x70(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformBinaryOp
struct RigVM_RigVMFunction_MathTransformBinaryOp : public RigVM_RigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1ADF[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 A;                                                 // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 B;                                                 // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Result;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformBinaryAggregateOp
struct RigVM_RigVMFunction_MathTransformBinaryAggregateOp : public RigVM_RigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1AE7[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 A;                                                 // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 B;                                                 // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Result;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformMake
struct RigVM_RigVMFunction_MathTransformMake : public RigVM_RigVMFunction_MathTransformBase
{
public:
	struct CoreUObject_Vector                    Translation;                                       // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Rotation;                                          // 0x20(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Scale;                                             // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AEF[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Result;                                            // 0x60(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformFromEulerTransform
struct RigVM_RigVMFunction_MathTransformFromEulerTransform : public RigVM_RigVMFunction_MathTransformBase
{
public:
	struct AnimationCore_EulerTransform          EulerTransform;                                    // 0x8(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Result;                                            // 0x50(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformFromEulerTransformV2
struct RigVM_RigVMFunction_MathTransformFromEulerTransformV2 : public RigVM_RigVMFunction_MathTransformBase
{
public:
	struct AnimationCore_EulerTransform          Value;                                             // 0x8(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Result;                                            // 0x50(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformToEulerTransform
struct RigVM_RigVMFunction_MathTransformToEulerTransform : public RigVM_RigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1AFA[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_EulerTransform          Result;                                            // 0x70(0x48)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AFD[0x8];                                     // Fixing Size Of Struct 
};

// 0x0 (0x130 - 0x130)
// ScriptStruct RigVM.RigVMFunction_MathTransformMul
struct RigVM_RigVMFunction_MathTransformMul : public RigVM_RigVMFunction_MathTransformBinaryAggregateOp
{
public:
};

// 0x128 (0x130 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformMakeRelative
struct RigVM_RigVMFunction_MathTransformMakeRelative : public RigVM_RigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1B03[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Global;                                            // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Parent;                                            // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Local;                                             // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformMakeAbsolute
struct RigVM_RigVMFunction_MathTransformMakeAbsolute : public RigVM_RigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1B0A[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Local;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Parent;                                            // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Global;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x190 - 0x100)
// ScriptStruct RigVM.RigVMFunction_MathTransformAccumulateArray
struct RigVM_RigVMFunction_MathTransformAccumulateArray : public RigVM_RigVMFunction_MathTransformMutableBase
{
public:
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x100(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMTransformSpace              TargetSpace;                                       // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B14[0xF];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Root;                                              // 0x120(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0x180(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0xD0 - 0xD0)
// ScriptStruct RigVM.RigVMFunction_MathTransformInverse
struct RigVM_RigVMFunction_MathTransformInverse : public RigVM_RigVMFunction_MathTransformUnaryOp
{
public:
};

// 0x138 (0x140 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformLerp
struct RigVM_RigVMFunction_MathTransformLerp : public RigVM_RigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1B1C[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 A;                                                 // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 B;                                                 // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B20[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Result;                                            // 0xE0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x130 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformSelectBool
struct RigVM_RigVMFunction_MathTransformSelectBool : public RigVM_RigVMFunction_MathTransformBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B26[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 IfTrue;                                            // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 IfFalse;                                           // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Result;                                            // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformRotateVector
struct RigVM_RigVMFunction_MathTransformRotateVector : public RigVM_RigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1B2E[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Vector;                                            // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformTransformVector
struct RigVM_RigVMFunction_MathTransformTransformVector : public RigVM_RigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1B34[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Location;                                          // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x110 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformFromSRT
struct RigVM_RigVMFunction_MathTransformFromSRT : public RigVM_RigVMFunction_MathTransformBase
{
public:
	struct CoreUObject_Vector                    Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Rotation;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEulerRotationOrder               RotationOrder;                                     // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B3D[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Scale;                                             // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B3F[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x60(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_EulerTransform          EulerTransform;                                    // 0xC0(0x48)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B40[0x8];                                     // Fixing Size Of Struct 
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformArrayToSRT
struct RigVM_RigVMFunction_MathTransformArrayToSRT : public RigVM_RigVMFunction_MathTransformBase
{
public:
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            Translations;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Quat>              Rotations;                                         // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            Scales;                                            // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x158 (0x160 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformClampSpatially
struct RigVM_RigVMFunction_MathTransformClampSpatially : public RigVM_RigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1B47[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             Axis;                                              // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMClampSpatialMode            Type;                                              // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B4D[0x2];                                     // Fixing Size After Last Property  
	float                                        Minimum;                                           // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B50[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Space;                                             // 0x80(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B53[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               DebugColor;                                        // 0xE4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugThickness;                                    // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B55[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Result;                                            // 0x100(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x140 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathTransformMirrorTransform
struct RigVM_RigVMFunction_MathTransformMirrorTransform : public RigVM_RigVMFunction_MathTransformBase
{
public:
	uint8                                        Pad_1B56[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             MirrorAxis;                                        // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x71(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B59[0xE];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 CentralTransform;                                  // 0x80(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Result;                                            // 0xE0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorBase
struct RigVM_RigVMFunction_MathVectorBase : public RigVM_RigVMFunction_MathBase
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorUnaryOp
struct RigVM_RigVMFunction_MathVectorUnaryOp : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorBinaryOp
struct RigVM_RigVMFunction_MathVectorBinaryOp : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorBinaryAggregateOp
struct RigVM_RigVMFunction_MathVectorBinaryAggregateOp : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorMake
struct RigVM_RigVMFunction_MathVectorMake : public RigVM_RigVMFunction_MathVectorBase
{
public:
	float                                        X;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B6D[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorFromFloat
struct RigVM_RigVMFunction_MathVectorFromFloat : public RigVM_RigVMFunction_MathVectorBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B70[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorFromDouble
struct RigVM_RigVMFunction_MathVectorFromDouble : public RigVM_RigVMFunction_MathVectorBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorAdd
struct RigVM_RigVMFunction_MathVectorAdd : public RigVM_RigVMFunction_MathVectorBinaryAggregateOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorSub
struct RigVM_RigVMFunction_MathVectorSub : public RigVM_RigVMFunction_MathVectorBinaryOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorMul
struct RigVM_RigVMFunction_MathVectorMul : public RigVM_RigVMFunction_MathVectorBinaryAggregateOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorScale
struct RigVM_RigVMFunction_MathVectorScale : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Factor;                                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B7A[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorDiv
struct RigVM_RigVMFunction_MathVectorDiv : public RigVM_RigVMFunction_MathVectorBinaryOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorMod
struct RigVM_RigVMFunction_MathVectorMod : public RigVM_RigVMFunction_MathVectorBinaryOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorMin
struct RigVM_RigVMFunction_MathVectorMin : public RigVM_RigVMFunction_MathVectorBinaryAggregateOp
{
public:
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorMax
struct RigVM_RigVMFunction_MathVectorMax : public RigVM_RigVMFunction_MathVectorBinaryAggregateOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorNegate
struct RigVM_RigVMFunction_MathVectorNegate : public RigVM_RigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorAbs
struct RigVM_RigVMFunction_MathVectorAbs : public RigVM_RigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorFloor
struct RigVM_RigVMFunction_MathVectorFloor : public RigVM_RigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorCeil
struct RigVM_RigVMFunction_MathVectorCeil : public RigVM_RigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorRound
struct RigVM_RigVMFunction_MathVectorRound : public RigVM_RigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorSign
struct RigVM_RigVMFunction_MathVectorSign : public RigVM_RigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x60 (0x68 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorClamp
struct RigVM_RigVMFunction_MathVectorClamp : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Minimum;                                           // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Maximum;                                           // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorLerp
struct RigVM_RigVMFunction_MathVectorLerp : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B9E[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorRemap
struct RigVM_RigVMFunction_MathVectorRemap : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SourceMinimum;                                     // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SourceMaximum;                                     // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    TargetMinimum;                                     // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    TargetMaximum;                                     // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClamp;                                            // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA8[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorEquals
struct RigVM_RigVMFunction_MathVectorEquals : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BAF[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorNotEquals
struct RigVM_RigVMFunction_MathVectorNotEquals : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB1[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorIsNearlyZero
struct RigVM_RigVMFunction_MathVectorIsNearlyZero : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BB4[0x3];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorIsNearlyEqual
struct RigVM_RigVMFunction_MathVectorIsNearlyEqual : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tolerance;                                         // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x3C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBC[0x3];                                     // Fixing Size Of Struct 
};

// 0x50 (0x58 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorSelectBool
struct RigVM_RigVMFunction_MathVectorSelectBool : public RigVM_RigVMFunction_MathVectorBase
{
public:
	bool                                         Condition;                                         // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BBD[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    IfTrue;                                            // 0x10(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    IfFalse;                                           // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorDeg
struct RigVM_RigVMFunction_MathVectorDeg : public RigVM_RigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorRad
struct RigVM_RigVMFunction_MathVectorRad : public RigVM_RigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorLengthSquared
struct RigVM_RigVMFunction_MathVectorLengthSquared : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC5[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorLength
struct RigVM_RigVMFunction_MathVectorLength : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC9[0x4];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorDistance
struct RigVM_RigVMFunction_MathVectorDistance : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BCE[0x4];                                     // Fixing Size Of Struct 
};

// 0x0 (0x50 - 0x50)
// ScriptStruct RigVM.RigVMFunction_MathVectorCross
struct RigVM_RigVMFunction_MathVectorCross : public RigVM_RigVMFunction_MathVectorBinaryOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorDot
struct RigVM_RigVMFunction_MathVectorDot : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD1[0x4];                                     // Fixing Size Of Struct 
};

// 0x0 (0x38 - 0x38)
// ScriptStruct RigVM.RigVMFunction_MathVectorUnit
struct RigVM_RigVMFunction_MathVectorUnit : public RigVM_RigVMFunction_MathVectorUnaryOp
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorSetLength
struct RigVM_RigVMFunction_MathVectorSetLength : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BD6[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorClampLength
struct RigVM_RigVMFunction_MathVectorClampLength : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumLength;                                     // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumLength;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorMirror
struct RigVM_RigVMFunction_MathVectorMirror : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Normal;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorAngle
struct RigVM_RigVMFunction_MathVectorAngle : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BEF[0x4];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorParallel
struct RigVM_RigVMFunction_MathVectorParallel : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BF6[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorOrthogonal
struct RigVM_RigVMFunction_MathVectorOrthogonal : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BFB[0x7];                                     // Fixing Size Of Struct 
};

// 0x60 (0x60 - 0x0)
// ScriptStruct RigVM.RigVMFourPointBezier
struct RigVM_RigVMFourPointBezier
{
public:
	struct CoreUObject_Vector                    A;                                                 // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    B;                                                 // 0x18(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    C;                                                 // 0x30(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    D;                                                 // 0x48(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorBezierFourPoint
struct RigVM_RigVMFunction_MathVectorBezierFourPoint : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct RigVM_RigVMFourPointBezier            Bezier;                                            // 0x8(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        T;                                                 // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C09[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x70(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Tangent;                                           // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorMakeBezierFourPoint
struct RigVM_RigVMFunction_MathVectorMakeBezierFourPoint : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct RigVM_RigVMFourPointBezier            Bezier;                                            // 0x8(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorClampSpatially
struct RigVM_RigVMFunction_MathVectorClampSpatially : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             Axis;                                              // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMClampSpatialMode            Type;                                              // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C11[0x2];                                     // Fixing Size After Last Property  
	float                                        Minimum;                                           // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C13[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Space;                                             // 0x30(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawDebug;                                        // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C15[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               DebugColor;                                        // 0x94(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebugThickness;                                    // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0xA8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathIntersectPlane
struct RigVM_RigVMFunction_MathIntersectPlane : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Start;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Direction;                                         // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PlanePoint;                                        // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PlaneNormal;                                       // 0x50(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C24[0x4];                                     // Fixing Size Of Struct 
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathDistanceToPlane
struct RigVM_RigVMFunction_MathDistanceToPlane : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Point;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PlanePoint;                                        // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PlaneNormal;                                       // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    ClosestPointOnPlane;                               // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SignedDistance;                                    // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C28[0x4];                                     // Fixing Size Of Struct 
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorMakeRelative
struct RigVM_RigVMFunction_MathVectorMakeRelative : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Global;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Parent;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Local;                                             // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorMakeAbsolute
struct RigVM_RigVMFunction_MathVectorMakeAbsolute : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Local;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Parent;                                            // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Global;                                            // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorMirrorTransform
struct RigVM_RigVMFunction_MathVectorMirrorTransform : public RigVM_RigVMFunction_MathVectorBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             MirrorAxis;                                        // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C32[0xE];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 CentralTransform;                                  // 0x30(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C33[0x8];                                     // Fixing Size Of Struct 
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorArraySum
struct RigVM_RigVMFunction_MathVectorArraySum : public RigVM_RigVMFunction_MathVectorBase
{
public:
	TArray<struct CoreUObject_Vector>            Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Sum;                                               // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_MathVectorArrayAverage
struct RigVM_RigVMFunction_MathVectorArrayAverage : public RigVM_RigVMFunction_MathVectorBase
{
public:
	TArray<struct CoreUObject_Vector>            Array;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Average;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NoiseFloat
struct RigVM_RigVMFunction_NoiseFloat : public RigVM_RigVMFunction_MathBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Frequency;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C43[0x4];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NoiseDouble
struct RigVM_RigVMFunction_NoiseDouble : public RigVM_RigVMFunction_MathBase
{
public:
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Speed;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Frequency;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Minimum;                                           // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Maximum;                                           // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Result;                                            // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Time;                                              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NoiseVector
struct RigVM_RigVMFunction_NoiseVector : public RigVM_RigVMFunction_MathBase
{
public:
	struct CoreUObject_Vector                    Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Speed;                                             // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Frequency;                                         // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Time;                                              // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NoiseVector2
struct RigVM_RigVMFunction_NoiseVector2 : public RigVM_RigVMFunction_MathBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Speed;                                             // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Frequency;                                         // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Minimum;                                           // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Maximum;                                           // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Time;                                              // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_RandomFloat
struct RigVM_RigVMFunction_RandomFloat : public RigVM_RigVMFunction_MathBase
{
public:
	int32                                        Seed;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastResult;                                        // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastSeed;                                          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseSeed;                                          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeft;                                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C62[0x4];                                     // Fixing Size Of Struct 
};

// 0x50 (0x58 - 0x8)
// ScriptStruct RigVM.RigVMFunction_RandomVector
struct RigVM_RigVMFunction_RandomVector : public RigVM_RigVMFunction_MathBase
{
public:
	int32                                        Seed;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Result;                                            // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LastResult;                                        // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastSeed;                                          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseSeed;                                          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeLeft;                                          // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C6A[0x4];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RigVM.RigVMMirrorSettings
struct RigVM_RigVMMirrorSettings
{
public:
	enum class EAxis                             MirrorAxis;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C71[0x6];                                     // Fixing Size After Last Property  
	class FString                                SearchString;                                      // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReplaceString;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct RigVM.RigVMSimPoint
struct RigVM_RigVMSimPoint
{
public:
	float                                        Mass;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearDamping;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InheritMotion;                                     // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Position;                                          // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LinearVelocity;                                    // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_CoreBase
struct RigVM_RigVMDispatch_CoreBase : public RigVM_RigVMDispatchFactory
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayBase
struct RigVM_RigVMDispatch_ArrayBase : public RigVM_RigVMDispatch_CoreBase
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayBaseMutable
struct RigVM_RigVMDispatch_ArrayBaseMutable : public RigVM_RigVMDispatch_ArrayBase
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayMake
struct RigVM_RigVMDispatch_ArrayMake : public RigVM_RigVMDispatch_ArrayBase
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayReset
struct RigVM_RigVMDispatch_ArrayReset : public RigVM_RigVMDispatch_ArrayBaseMutable
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayGetNum
struct RigVM_RigVMDispatch_ArrayGetNum : public RigVM_RigVMDispatch_ArrayBase
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArraySetNum
struct RigVM_RigVMDispatch_ArraySetNum : public RigVM_RigVMDispatch_ArrayBaseMutable
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayGetAtIndex
struct RigVM_RigVMDispatch_ArrayGetAtIndex : public RigVM_RigVMDispatch_ArrayBase
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArraySetAtIndex
struct RigVM_RigVMDispatch_ArraySetAtIndex : public RigVM_RigVMDispatch_ArrayBaseMutable
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayAdd
struct RigVM_RigVMDispatch_ArrayAdd : public RigVM_RigVMDispatch_ArraySetAtIndex
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayInsert
struct RigVM_RigVMDispatch_ArrayInsert : public RigVM_RigVMDispatch_ArraySetAtIndex
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayRemove
struct RigVM_RigVMDispatch_ArrayRemove : public RigVM_RigVMDispatch_ArrayBaseMutable
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayReverse
struct RigVM_RigVMDispatch_ArrayReverse : public RigVM_RigVMDispatch_ArrayReset
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayFind
struct RigVM_RigVMDispatch_ArrayFind : public RigVM_RigVMDispatch_ArrayBase
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayAppend
struct RigVM_RigVMDispatch_ArrayAppend : public RigVM_RigVMDispatch_ArrayBaseMutable
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayClone
struct RigVM_RigVMDispatch_ArrayClone : public RigVM_RigVMDispatch_ArrayBase
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayUnion
struct RigVM_RigVMDispatch_ArrayUnion : public RigVM_RigVMDispatch_ArrayAppend
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayDifference
struct RigVM_RigVMDispatch_ArrayDifference : public RigVM_RigVMDispatch_ArrayBase
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayIntersection
struct RigVM_RigVMDispatch_ArrayIntersection : public RigVM_RigVMDispatch_ArrayDifference
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_ArrayIterator
struct RigVM_RigVMDispatch_ArrayIterator : public RigVM_RigVMDispatch_ArrayBaseMutable
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_Constant
struct RigVM_RigVMDispatch_Constant : public RigVM_RigVMDispatch_CoreBase
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_CoreEquals
struct RigVM_RigVMDispatch_CoreEquals : public RigVM_RigVMDispatch_CoreBase
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_CoreNotEquals
struct RigVM_RigVMDispatch_CoreNotEquals : public RigVM_RigVMDispatch_CoreEquals
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_If
struct RigVM_RigVMDispatch_If : public RigVM_RigVMDispatch_CoreBase
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_MakeStruct
struct RigVM_RigVMDispatch_MakeStruct : public RigVM_RigVMDispatch_CoreBase
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_BreakStruct
struct RigVM_RigVMDispatch_BreakStruct : public RigVM_RigVMDispatch_MakeStruct
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_Print
struct RigVM_RigVMDispatch_Print : public RigVM_RigVMDispatchFactory
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_SelectInt32
struct RigVM_RigVMDispatch_SelectInt32 : public RigVM_RigVMDispatch_CoreBase
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigVMDispatch_SwitchInt32
struct RigVM_RigVMDispatch_SwitchInt32 : public RigVM_RigVMDispatch_CoreBase
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_ControlFlowBase
struct RigVM_RigVMFunction_ControlFlowBase : public RigVM_RigVMStruct
{
public:
};

// 0x3E8 (0x3F0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_ControlFlowBranch
struct RigVM_RigVMFunction_ControlFlowBranch : public RigVM_RigVMFunction_ControlFlowBase
{
public:
	uint8                                        Pad_1CB6[0x8];                                     // Fixing Size After Last Property  
	struct RigVM_RigVMExecuteContext             ExecuteContext;                                    // 0x10(0xF0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Condition;                                         // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CB9[0xF];                                     // Fixing Size After Last Property  
	struct RigVM_RigVMExecuteContext             TURR;                                              // 0x110(0xF0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct RigVM_RigVMExecuteContext             FLASE;                                             // 0x200(0xF0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct RigVM_RigVMExecuteContext             Completed;                                         // 0x2F0(0xF0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                  BlockToRun;                                        // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CBE[0x8];                                     // Fixing Size Of Struct 
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NameBase
struct RigVM_RigVMFunction_NameBase : public RigVM_RigVMStruct
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NameConcat
struct RigVM_RigVMFunction_NameConcat : public RigVM_RigVMFunction_NameBase
{
public:
	class FName                                  A;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  B;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Result;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NameTruncate
struct RigVM_RigVMFunction_NameTruncate : public RigVM_RigVMFunction_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FromEnd;                                           // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CD4[0x3];                                     // Fixing Size After Last Property  
	class FName                                  Remainder;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Chopped;                                           // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_NameReplace
struct RigVM_RigVMFunction_NameReplace : public RigVM_RigVMFunction_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Old;                                               // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  New;                                               // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Result;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_EndsWith
struct RigVM_RigVMFunction_EndsWith : public RigVM_RigVMFunction_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Ending;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CDE[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StartsWith
struct RigVM_RigVMFunction_StartsWith : public RigVM_RigVMFunction_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Start;                                             // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE0[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_Contains
struct RigVM_RigVMFunction_Contains : public RigVM_RigVMFunction_NameBase
{
public:
	class FName                                  Name;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Search;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE8[0x7];                                     // Fixing Size Of Struct 
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringBase
struct RigVM_RigVMFunction_StringBase : public RigVM_RigVMStruct
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringConcat
struct RigVM_RigVMFunction_StringConcat : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                A;                                                 // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                B;                                                 // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringTruncate
struct RigVM_RigVMFunction_StringTruncate : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FromEnd;                                           // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFA[0x3];                                     // Fixing Size After Last Property  
	class FString                                Remainder;                                         // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Chopped;                                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringReplace
struct RigVM_RigVMFunction_StringReplace : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Old;                                               // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                New;                                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringEndsWith
struct RigVM_RigVMFunction_StringEndsWith : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Ending;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D03[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringStartsWith
struct RigVM_RigVMFunction_StringStartsWith : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Start;                                             // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D07[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringContains
struct RigVM_RigVMFunction_StringContains : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                Name;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Search;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0D[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringLength
struct RigVM_RigVMFunction_StringLength : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Length;                                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D10[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringTrimWhitespace
struct RigVM_RigVMFunction_StringTrimWhitespace : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringToUppercase
struct RigVM_RigVMFunction_StringToUppercase : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringToLowercase
struct RigVM_RigVMFunction_StringToLowercase : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringReverse
struct RigVM_RigVMFunction_StringReverse : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Reverse;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringLeft
struct RigVM_RigVMFunction_StringLeft : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D32[0x4];                                     // Fixing Size After Last Property  
	class FString                                Result;                                            // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringRight
struct RigVM_RigVMFunction_StringRight : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D37[0x4];                                     // Fixing Size After Last Property  
	class FString                                Result;                                            // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringMiddle
struct RigVM_RigVMFunction_StringMiddle : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Start;                                             // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringFind
struct RigVM_RigVMFunction_StringFind : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Search;                                            // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Found;                                             // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D46[0x3];                                     // Fixing Size After Last Property  
	int32                                        Index;                                             // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringSplit
struct RigVM_RigVMFunction_StringSplit : public RigVM_RigVMFunction_StringBase
{
public:
	class FString                                Value;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Separator;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringJoin
struct RigVM_RigVMFunction_StringJoin : public RigVM_RigVMFunction_StringBase
{
public:
	TArray<class FString>                        Values;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Separator;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_StringPadInteger
struct RigVM_RigVMFunction_StringPadInteger : public RigVM_RigVMFunction_StringBase
{
public:
	int32                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Digits;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Result;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigDispatch_ToString
struct RigVM_RigDispatch_ToString : public RigVM_RigVMDispatchFactory
{
public:
};

// 0x0 (0x70 - 0x70)
// ScriptStruct RigVM.RigDispatch_FromString
struct RigVM_RigDispatch_FromString : public RigVM_RigVMDispatchFactory
{
public:
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateBase
struct RigVM_RigVMFunction_AccumulateBase : public RigVM_RigVMFunction_SimBase
{
public:
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateFloatAdd
struct RigVM_RigVMFunction_AccumulateFloatAdd : public RigVM_RigVMFunction_AccumulateBase
{
public:
	float                                        Increment;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5C[0x3];                                     // Fixing Size After Last Property  
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5E[0x3];                                     // Fixing Size Of Struct 
};

// 0x70 (0x78 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateVectorAdd
struct RigVM_RigVMFunction_AccumulateVectorAdd : public RigVM_RigVMFunction_AccumulateBase
{
public:
	struct CoreUObject_Vector                    Increment;                                         // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    InitialValue;                                      // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D74[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AccumulatedValue;                                  // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D77[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateFloatMul
struct RigVM_RigVMFunction_AccumulateFloatMul : public RigVM_RigVMFunction_AccumulateBase
{
public:
	float                                        Multiplier;                                        // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D7C[0x3];                                     // Fixing Size After Last Property  
	float                                        Result;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D7D[0x3];                                     // Fixing Size Of Struct 
};

// 0x70 (0x78 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateVectorMul
struct RigVM_RigVMFunction_AccumulateVectorMul : public RigVM_RigVMFunction_AccumulateBase
{
public:
	struct CoreUObject_Vector                    Multiplier;                                        // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    InitialValue;                                      // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D86[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AccumulatedValue;                                  // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D96[0x7];                                     // Fixing Size Of Struct 
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateQuatMul
struct RigVM_RigVMFunction_AccumulateQuatMul : public RigVM_RigVMFunction_AccumulateBase
{
public:
	uint8                                        Pad_1DA6[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Multiplier;                                        // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      InitialValue;                                      // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipOrder;                                        // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DAF[0xE];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Result;                                            // 0x60(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      AccumulatedValue;                                  // 0x80(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB2[0xF];                                     // Fixing Size Of Struct 
};

// 0x1A8 (0x1B0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateTransformMul
struct RigVM_RigVMFunction_AccumulateTransformMul : public RigVM_RigVMFunction_AccumulateBase
{
public:
	uint8                                        Pad_1DB6[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Multiplier;                                        // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 InitialValue;                                      // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipOrder;                                        // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0xD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC2[0xE];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Result;                                            // 0xE0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 AccumulatedValue;                                  // 0x140(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC7[0xF];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateFloatLerp
struct RigVM_RigVMFunction_AccumulateFloatLerp : public RigVM_RigVMFunction_AccumulateBase
{
public:
	float                                        TargetValue;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialValue;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD5[0x3];                                     // Fixing Size After Last Property  
	float                                        Result;                                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DDC[0x7];                                     // Fixing Size Of Struct 
};

// 0x70 (0x78 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateVectorLerp
struct RigVM_RigVMFunction_AccumulateVectorLerp : public RigVM_RigVMFunction_AccumulateBase
{
public:
	struct CoreUObject_Vector                    TargetValue;                                       // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    InitialValue;                                      // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DEA[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AccumulatedValue;                                  // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF2[0x7];                                     // Fixing Size Of Struct 
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateQuatLerp
struct RigVM_RigVMFunction_AccumulateQuatLerp : public RigVM_RigVMFunction_AccumulateBase
{
public:
	uint8                                        Pad_1DFD[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      TargetValue;                                       // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      InitialValue;                                      // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DFF[0xB];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Result;                                            // 0x60(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      AccumulatedValue;                                  // 0x80(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E03[0xF];                                     // Fixing Size Of Struct 
};

// 0x1A8 (0x1B0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateTransformLerp
struct RigVM_RigVMFunction_AccumulateTransformLerp : public RigVM_RigVMFunction_AccumulateBase
{
public:
	uint8                                        Pad_1E04[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 TargetValue;                                       // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 InitialValue;                                      // 0x70(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntegrateDeltaTime;                               // 0xD4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E0B[0xB];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Result;                                            // 0xE0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 AccumulatedValue;                                  // 0x140(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E1B[0xF];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateFloatRange
struct RigVM_RigVMFunction_AccumulateFloatRange : public RigVM_RigVMFunction_AccumulateBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Minimum;                                           // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedMinimum;                                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedMaximum;                                // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E29[0x3];                                     // Fixing Size Of Struct 
};

// 0x80 (0x88 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AccumulateVectorRange
struct RigVM_RigVMFunction_AccumulateVectorRange : public RigVM_RigVMFunction_AccumulateBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Minimum;                                           // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Maximum;                                           // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AccumulatedMinimum;                                // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AccumulatedMaximum;                                // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E39[0x7];                                     // Fixing Size Of Struct 
};

// 0x70 (0x78 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AlphaInterp
struct RigVM_RigVMFunction_AlphaInterp : public RigVM_RigVMFunction_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bias;                                              // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMapRange;                                         // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E4E[0x3];                                     // Fixing Size After Last Property  
	struct Engine_InputRange                     InRange;                                           // 0x18(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_InputRange                     OutRange;                                          // 0x20(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClampResult;                                      // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E55[0x3];                                     // Fixing Size After Last Property  
	float                                        ClampMin;                                          // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampMax;                                          // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterpResult;                                     // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E5C[0x3];                                     // Fixing Size After Last Property  
	float                                        InterpSpeedIncreasing;                             // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeedDecreasing;                             // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_InputScaleBiasClamp            ScaleBiasClamp;                                    // 0x44(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E64[0x4];                                     // Fixing Size Of Struct 
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AlphaInterpVector
struct RigVM_RigVMFunction_AlphaInterpVector : public RigVM_RigVMFunction_SimBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bias;                                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMapRange;                                         // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E80[0x3];                                     // Fixing Size After Last Property  
	struct Engine_InputRange                     InRange;                                           // 0x2C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_InputRange                     OutRange;                                          // 0x34(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClampResult;                                      // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E82[0x3];                                     // Fixing Size After Last Property  
	float                                        ClampMin;                                          // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampMax;                                          // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterpResult;                                     // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E85[0x3];                                     // Fixing Size After Last Property  
	float                                        InterpSpeedIncreasing;                             // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeedDecreasing;                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E86[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_InputScaleBiasClamp            ScaleBiasClamp;                                    // 0x70(0x30)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_AlphaInterpQuat
struct RigVM_RigVMFunction_AlphaInterpQuat : public RigVM_RigVMFunction_SimBase
{
public:
	uint8                                        Pad_1E8E[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Bias;                                              // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMapRange;                                         // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E91[0x3];                                     // Fixing Size After Last Property  
	struct Engine_InputRange                     InRange;                                           // 0x3C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_InputRange                     OutRange;                                          // 0x44(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bClampResult;                                      // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E9F[0x3];                                     // Fixing Size After Last Property  
	float                                        ClampMin;                                          // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClampMax;                                          // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterpResult;                                     // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA1[0x3];                                     // Fixing Size After Last Property  
	float                                        InterpSpeedIncreasing;                             // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpSpeedDecreasing;                             // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA5[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Result;                                            // 0x70(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_InputScaleBiasClamp            ScaleBiasClamp;                                    // 0x90(0x30)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RigVM.RigVMFunction_DeltaFromPreviousFloat
struct RigVM_RigVMFunction_DeltaFromPreviousFloat : public RigVM_RigVMFunction_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Delta;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreviousValue;                                     // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cache;                                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EB1[0x7];                                     // Fixing Size Of Struct 
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_DeltaFromPreviousVector
struct RigVM_RigVMFunction_DeltaFromPreviousVector : public RigVM_RigVMFunction_SimBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Delta;                                             // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PreviousValue;                                     // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Cache;                                             // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EBD[0x7];                                     // Fixing Size Of Struct 
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_DeltaFromPreviousQuat
struct RigVM_RigVMFunction_DeltaFromPreviousQuat : public RigVM_RigVMFunction_SimBase
{
public:
	uint8                                        Pad_1F16[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Value;                                             // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Delta;                                             // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      PreviousValue;                                     // 0x50(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Cache;                                             // 0x70(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F1C[0xF];                                     // Fixing Size Of Struct 
};

// 0x198 (0x1A0 - 0x8)
// ScriptStruct RigVM.RigVMFunction_DeltaFromPreviousTransform
struct RigVM_RigVMFunction_DeltaFromPreviousTransform : public RigVM_RigVMFunction_SimBase
{
public:
	uint8                                        Pad_1F22[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Delta;                                             // 0x70(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 PreviousValue;                                     // 0xD0(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Cache;                                             // 0x130(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F34[0xF];                                     // Fixing Size Of Struct 
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RigVM.RigVMFunction_KalmanFloat
struct RigVM_RigVMFunction_KalmanFloat : public RigVM_RigVMFunction_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F43[0x4];                                     // Fixing Size After Last Property  
	TArray<float>                                Buffer;                                            // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F48[0x4];                                     // Fixing Size Of Struct 
};

// 0x50 (0x58 - 0x8)
// ScriptStruct RigVM.RigVMFunction_KalmanVector
struct RigVM_RigVMFunction_KalmanVector : public RigVM_RigVMFunction_SimBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F56[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            Buffer;                                            // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F59[0x4];                                     // Fixing Size Of Struct 
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct RigVM.RigVMFunction_KalmanTransform
struct RigVM_RigVMFunction_KalmanTransform : public RigVM_RigVMFunction_SimBase
{
public:
	uint8                                        Pad_1F62[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F65[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Result;                                            // 0x80(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         Buffer;                                            // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F75[0xC];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RigVM.RigVMFunction_Timeline
struct RigVM_RigVMFunction_Timeline : public RigVM_RigVMFunction_SimBase
{
public:
	float                                        Speed;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedValue;                                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F7F[0x3];                                     // Fixing Size Of Struct 
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RigVM.RigVMFunction_TimeLoop
struct RigVM_RigVMFunction_TimeLoop : public RigVM_RigVMFunction_SimBase
{
public:
	float                                        Speed;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Normalize;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FA3[0x3];                                     // Fixing Size After Last Property  
	float                                        Absolute;                                          // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Relative;                                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FlipFlop;                                          // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Even;                                              // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FAF[0x3];                                     // Fixing Size After Last Property  
	float                                        AccumulatedAbsolute;                               // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccumulatedRelative;                               // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumIterations;                                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInitialized;                                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB3[0x7];                                     // Fixing Size Of Struct 
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RigVM.RigVMFunction_TimeOffsetFloat
struct RigVM_RigVMFunction_TimeOffsetFloat : public RigVM_RigVMFunction_SimBase
{
public:
	float                                        Value;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsAgo;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRange;                                         // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Result;                                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB8[0x4];                                     // Fixing Size After Last Property  
	TArray<float>                                Buffer;                                            // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DeltaTimes;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RigVM.RigVMFunction_TimeOffsetVector
struct RigVM_RigVMFunction_TimeOffsetVector : public RigVM_RigVMFunction_SimBase
{
public:
	struct CoreUObject_Vector                    Value;                                             // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsAgo;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRange;                                         // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FCE[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Result;                                            // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            Buffer;                                            // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DeltaTimes;                                        // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x110 - 0x8)
// ScriptStruct RigVM.RigVMFunction_TimeOffsetTransform
struct RigVM_RigVMFunction_TimeOffsetTransform : public RigVM_RigVMFunction_SimBase
{
public:
	uint8                                        Pad_1FDA[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Value;                                             // 0x10(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SecondsAgo;                                        // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BufferSize;                                        // 0x74(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRange;                                         // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE1[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Result;                                            // 0x80(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         Buffer;                                            // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DeltaTimes;                                        // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        LastInsertIndex;                                   // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpperBound;                                        // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE3[0x8];                                     // Fixing Size Of Struct 
};

// 0xD0 (0xD8 - 0x8)
// ScriptStruct RigVM.RigVMFunction_VerletIntegrateVector
struct RigVM_RigVMFunction_VerletIntegrateVector : public RigVM_RigVMFunction_SimBase
{
public:
	struct CoreUObject_Vector                    Target;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damp;                                              // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Blend;                                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FED[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Force;                                             // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Position;                                          // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Velocity;                                          // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Acceleration;                                      // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RigVM_RigVMSimPoint                   Point;                                             // 0x90(0x40)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bInitialized;                                      // 0xD0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF4[0x7];                                     // Fixing Size Of Struct 
};

}


