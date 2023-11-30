#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESplineType : uint8
{
	BSpline                        = 0,
	Hermite                        = 1,
	Max                            = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// ScriptStruct ControlRigSpline.ControlRigSplineImpl
struct ControlRigSpline_ControlRigSplineImpl
{
public:
	uint8                                        Pad_1C1B[0x68];                                    // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ControlRigSpline.ControlRigSpline
struct ControlRigSpline_ControlRigSpline
{
public:
	uint8                                        Pad_1C2F[0x18];                                    // Fixing Size Of Struct 
};

// 0x0 (0x8 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineBase
struct ControlRigSpline_RigUnit_ControlRigSplineBase : public ControlRig_RigUnit
{
public:
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineFromPoints
struct ControlRigSpline_RigUnit_ControlRigSplineFromPoints : public ControlRigSpline_RigUnit_ControlRigSplineBase
{
public:
	TArray<struct CoreUObject_Vector>            Points;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ESplineType                       SplineMode;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClosed;                                           // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C66[0x2];                                     // Fixing Size After Last Property  
	int32                                        SamplesPerSegment;                                 // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Compression;                                       // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stretch;                                           // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineFromTransforms
struct ControlRigSpline_RigUnit_ControlRigSplineFromTransforms : public ControlRigSpline_RigUnit_ControlRigSplineBase
{
public:
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ESplineType                       SplineMode;                                        // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClosed;                                           // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA6[0x2];                                     // Fixing Size After Last Property  
	int32                                        SamplesPerSegment;                                 // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Compression;                                       // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Stretch;                                           // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRigSpline.RigUnit_SetSplinePoints
struct ControlRigSpline_RigUnit_SetSplinePoints : public ControlRig_RigUnitMutable
{
public:
	TArray<struct CoreUObject_Vector>            Points;                                            // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x170(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF5[0x8];                                     // Fixing Size Of Struct 
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRigSpline.RigUnit_SetSplineTransforms
struct ControlRigSpline_RigUnit_SetSplineTransforms : public ControlRig_RigUnitMutable
{
public:
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x170(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D33[0x8];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_PositionFromControlRigSpline
struct ControlRigSpline_RigUnit_PositionFromControlRigSpline : public ControlRigSpline_RigUnit_ControlRigSplineBase
{
public:
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D65[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Position;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_TransformFromControlRigSpline
struct ControlRigSpline_RigUnit_TransformFromControlRigSpline : public ControlRigSpline_RigUnit_ControlRigSplineBase
{
public:
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    UpVector;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Roll;                                              // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 Transform;                                         // 0x40(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_TransformFromControlRigSpline2
struct ControlRigSpline_RigUnit_TransformFromControlRigSpline2 : public ControlRigSpline_RigUnit_ControlRigSplineBase
{
public:
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DEC[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    PrimaryAxis;                                       // 0x28(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SecondaryAxis;                                     // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E02[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x60(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_TangentFromControlRigSpline
struct ControlRigSpline_RigUnit_TangentFromControlRigSpline : public ControlRigSpline_RigUnit_ControlRigSplineBase
{
public:
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E54[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Tangent;                                           // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRigSpline.RigUnit_DrawControlRigSpline
struct ControlRigSpline_RigUnit_DrawControlRigSpline : public ControlRig_RigUnitMutable
{
public:
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x160(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               Color;                                             // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Thickness;                                         // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Detail;                                            // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_GetLengthControlRigSpline
struct ControlRigSpline_RigUnit_GetLengthControlRigSpline : public ControlRig_RigUnit
{
public:
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC9[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_GetLengthAtParamControlRigSpline
struct ControlRigSpline_RigUnit_GetLengthAtParamControlRigSpline : public ControlRig_RigUnit
{
public:
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Length;                                            // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1D0 (0x330 - 0x160)
// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurve
struct ControlRigSpline_RigUnit_FitChainToSplineCurve : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKeyCollection    Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x170(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F4C[0x3];                                     // Fixing Size After Last Property  
	float                                        Minimum;                                           // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PrimaryAxis;                                       // 0x198(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SecondaryAxis;                                     // 0x1B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PoleVectorPosition;                                // 0x1C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB1[0x3];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x1F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FBC[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x200(0x90)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_FitChainToCurve_WorkData WorkData;                                          // 0x290(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FCA[0x8];                                     // Fixing Size Of Struct 
};

// 0x1D0 (0x330 - 0x160)
// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
struct ControlRigSpline_RigUnit_FitChainToSplineCurveItemArray : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x170(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FFC[0x3];                                     // Fixing Size After Last Property  
	float                                        Minimum;                                           // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SamplingPrecision;                                 // 0x194(0x4)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PrimaryAxis;                                       // 0x198(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SecondaryAxis;                                     // 0x1B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    PoleVectorPosition;                                // 0x1C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_RigUnit_FitChainToCurve_Rotation> Rotations;                                         // 0x1E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERigVMAnimEasingType              RotationEaseType;                                  // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2028[0x3];                                     // Fixing Size After Last Property  
	float                                        Weight;                                            // 0x1F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2037[0x7];                                     // Fixing Size After Last Property  
	struct ControlRig_RigUnit_FitChainToCurve_DebugSettings DebugSettings;                                     // 0x200(0x90)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct ControlRig_RigUnit_FitChainToCurve_WorkData WorkData;                                          // 0x290(0x98)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_2048[0x8];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ControlRigSpline.RigUnit_SplineConstraint_WorkData
struct ControlRigSpline_RigUnit_SplineConstraint_WorkData
{
public:
	float                                        ChainLength;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206D[0x4];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_Transform>         ItemTransforms;                                    // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ItemSegments;                                      // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ControlRig_CachedRigElement>   CachedItems;                                       // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xB0 (0x210 - 0x160)
// ScriptStruct ControlRigSpline.RigUnit_SplineConstraint
struct ControlRigSpline_RigUnit_SplineConstraint : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x170(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EControlRigCurveAlignment         Alignment;                                         // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20C6[0x3];                                     // Fixing Size After Last Property  
	float                                        Minimum;                                           // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Maximum;                                           // 0x190(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20D3[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    PrimaryAxis;                                       // 0x198(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    SecondaryAxis;                                     // 0x1B0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20FC[0x7];                                     // Fixing Size After Last Property  
	struct ControlRigSpline_RigUnit_SplineConstraint_WorkData WorkData;                                          // 0x1D0(0x38)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_2105[0x8];                                     // Fixing Size Of Struct 
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChain
struct ControlRigSpline_RigUnit_FitSplineCurveToChain : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	struct ControlRig_RigElementKeyCollection    Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x170(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_2135[0x8];                                     // Fixing Size Of Struct 
};

// 0x30 (0x190 - 0x160)
// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
struct ControlRigSpline_RigUnit_FitSplineCurveToChainItemArray : public ControlRig_RigUnit_HighlevelBaseMutable
{
public:
	TArray<struct ControlRig_RigElementKey>      Items;                                             // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x170(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_2157[0x8];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
struct ControlRigSpline_RigUnit_ClosestParameterFromControlRigSpline : public ControlRigSpline_RigUnit_ControlRigSplineBase
{
public:
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Position;                                          // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A6[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct ControlRigSpline.RigUnit_ParameterAtPercentage
struct ControlRigSpline_RigUnit_ParameterAtPercentage : public ControlRigSpline_RigUnit_ControlRigSplineBase
{
public:
	struct ControlRigSpline_ControlRigSpline     Spline;                                            // 0x8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Percentage;                                        // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        U;                                                 // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


