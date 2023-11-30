#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EConstraintType : uint8
{
	Transform                      = 0,
	Aim                            = 1,
	MAX                            = 2,
};

enum class ETransformConstraintType : uint8
{
	Translation                    = 0,
	Rotation                       = 1,
	Scale                          = 2,
	Parent                         = 3,
	LookAt                         = 4,
	ETransformConstraintType_MAX   = 5,
};

enum class EEulerRotationOrder : uint8
{
	XYZ                            = 0,
	XZY                            = 1,
	YXZ                            = 2,
	YZX                            = 3,
	ZXY                            = 4,
	ZYX                            = 5,
	EEulerRotationOrder_MAX        = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct AnimationCore.Axis
struct AnimationCore_Axis
{
public:
	struct CoreUObject_Vector                    Axis;                                              // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInLocalSpace;                                     // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationCore.NodeChain
struct AnimationCore_NodeChain
{
public:
	TArray<class FName>                          Nodes;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationCore.NodeObject
struct AnimationCore_NodeObject
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParentName;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AnimationCore.NodeHierarchyData
struct AnimationCore_NodeHierarchyData
{
public:
	TArray<struct AnimationCore_NodeObject>      Nodes;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Transform>         Transforms;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     NodeNameToIndexMapping;                            // 0x20(0x50)(NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct AnimationCore.NodeHierarchyWithUserData
struct AnimationCore_NodeHierarchyWithUserData
{
public:
	uint8                                        Pad_1E5[0x8];                                      // Fixing Size After Last Property  
	struct AnimationCore_NodeHierarchyData       Hierarchy;                                         // 0x8(0x70)(Protected, NativeAccessSpecifierProtected)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct AnimationCore.CCDIKChainLink
struct AnimationCore_CCDIKChainLink
{
public:
	uint8                                        Pad_1E7[0xE0];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// ScriptStruct AnimationCore.FilterOptionPerAxis
struct AnimationCore_FilterOptionPerAxis
{
public:
	bool                                         bX;                                                // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bY;                                                // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bZ;                                                // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x9 (0x9 - 0x0)
// ScriptStruct AnimationCore.TransformFilter
struct AnimationCore_TransformFilter
{
public:
	struct AnimationCore_FilterOptionPerAxis     TranslationFilter;                                 // 0x0(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct AnimationCore_FilterOptionPerAxis     RotationFilter;                                    // 0x3(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct AnimationCore_FilterOptionPerAxis     ScaleFilter;                                       // 0x6(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xD (0xD - 0x0)
// ScriptStruct AnimationCore.ConstraintDescription
struct AnimationCore_ConstraintDescription
{
public:
	bool                                         bTranslation;                                      // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotation;                                         // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScale;                                            // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParent;                                           // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct AnimationCore_FilterOptionPerAxis     TranslationAxes;                                   // 0x4(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct AnimationCore_FilterOptionPerAxis     RotationAxes;                                      // 0x7(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct AnimationCore_FilterOptionPerAxis     ScaleAxes;                                         // 0xA(0x3)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct AnimationCore.ConstraintOffset
struct AnimationCore_ConstraintOffset
{
public:
	struct CoreUObject_Vector                    Translation;                                       // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ED[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Rotation;                                          // 0x20(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Scale;                                             // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EE[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Parent;                                            // 0x60(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AnimationCore.TransformConstraint
struct AnimationCore_TransformConstraint
{
public:
	struct AnimationCore_ConstraintDescription   Operator;                                          // 0x0(0xD)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F0[0x3];                                      // Fixing Size After Last Property  
	class FName                                  SourceNode;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  TargetNode;                                        // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F2[0x3];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationCore.ConstraintDescriptionEx
struct AnimationCore_ConstraintDescriptionEx
{
public:
	uint8                                        Pad_1F5[0x8];                                      // Fixing Size After Last Property  
	struct AnimationCore_FilterOptionPerAxis     AxesFilterOption;                                  // 0x8(0x3)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F6[0x5];                                      // Fixing Size Of Struct 
};

// 0x8 (0x18 - 0x10)
// ScriptStruct AnimationCore.TransformConstraintDescription
struct AnimationCore_TransformConstraintDescription : public AnimationCore_ConstraintDescriptionEx
{
public:
	enum class ETransformConstraintType          TransformType;                                     // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F8[0x7];                                      // Fixing Size Of Struct 
};

// 0x60 (0x70 - 0x10)
// ScriptStruct AnimationCore.AimConstraintDescription
struct AnimationCore_AimConstraintDescription : public AnimationCore_ConstraintDescriptionEx
{
public:
	struct AnimationCore_Axis                    LookAt_Axis;                                       // 0x10(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct AnimationCore_Axis                    LookUp_Axis;                                       // 0x30(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseLookUp;                                        // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD[0x7];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    LookUpTarget;                                      // 0x58(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimationCore.ConstraintDescriptor
struct AnimationCore_ConstraintDescriptor
{
public:
	enum class EConstraintType                   Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE[0xF];                                      // Fixing Size Of Struct 
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct AnimationCore.ConstraintData
struct AnimationCore_ConstraintData
{
public:
	struct AnimationCore_ConstraintDescriptor    Constraint;                                        // 0x0(0x10)(NativeAccessSpecifierPublic)
	float                                        Weight;                                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMaintainOffset;                                   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201[0xB];                                      // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Offset;                                            // 0x20(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 CurrentTransform;                                  // 0x80(0x60)(Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct AnimationCore.EulerTransform
struct AnimationCore_EulerTransform
{
public:
	struct CoreUObject_Vector                    Location;                                          // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Rotation;                                          // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Scale;                                             // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AnimationCore.FABRIKChainLink
struct AnimationCore_FABRIKChainLink
{
public:
	uint8                                        Pad_203[0x50];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AnimationCore.TransformNoScale
struct AnimationCore_TransformNoScale
{
public:
	struct CoreUObject_Vector                    Location;                                          // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Rotation;                                          // 0x20(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


