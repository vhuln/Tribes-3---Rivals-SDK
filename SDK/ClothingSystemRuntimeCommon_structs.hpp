#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EClothingWindMethod_Legacy : uint8
{
	Legacy                         = 0,
	Accurate                       = 1,
	EClothingWindMethod_MAX        = 2,
};

enum class EWeightMapTargetCommon : uint8
{
	None                           = 0,
	MaxDistance                    = 1,
	BackstopDistance               = 2,
	BackstopRadius                 = 3,
	AnimDriveStiffness             = 4,
	AnimDriveDamping_DEPRECATED    = 5,
	EWeightMapTargetCommon_MAX     = 6,
};

enum class EClothMassMode : uint8
{
	UniformMass                    = 0,
	TotalMass                      = 1,
	Density                        = 2,
	MaxClothMassMode               = 3,
	EClothMassMode_MAX             = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
struct ClothingSystemRuntimeCommon_ClothConstraintSetup_Legacy
{
public:
	float                                        Stiffness;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StiffnessMultiplier;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StretchLimit;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CompressionLimit;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
struct ClothingSystemRuntimeCommon_ClothConfig_Legacy
{
public:
	enum class EClothingWindMethod_Legacy        WindMethod;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF[0x3];                                       // Fixing Size After Last Property  
	struct ClothingSystemRuntimeCommon_ClothConstraintSetup_Legacy VerticalConstraintConfig;                          // 0x4(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct ClothingSystemRuntimeCommon_ClothConstraintSetup_Legacy HorizontalConstraintConfig;                        // 0x14(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct ClothingSystemRuntimeCommon_ClothConstraintSetup_Legacy BendConstraintConfig;                              // 0x24(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct ClothingSystemRuntimeCommon_ClothConstraintSetup_Legacy ShearConstraintConfig;                             // 0x34(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        SelfCollisionRadius;                               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfCollisionStiffness;                            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SelfCollisionCullScale;                            // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Damping;                                           // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Friction;                                          // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindDragCoefficient;                               // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindLiftCoefficient;                               // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6[0x4];                                       // Fixing Size After Last Property  
	struct CoreUObject_Vector                    LinearDrag;                                        // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AngularDrag;                                       // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LinearInertiaScale;                                // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AngularInertiaScale;                               // 0xC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    CentrifugalInertiaScale;                           // 0xD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SolverFrequency;                                   // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StiffnessFrequency;                                // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB[0x4];                                       // Fixing Size After Last Property  
	struct CoreUObject_Vector                    GravityOverride;                                   // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGravityOverride;                               // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC[0x3];                                       // Fixing Size After Last Property  
	float                                        TetherStiffness;                                   // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TetherLimit;                                       // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionThickness;                                // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimDriveSpringStiffness;                          // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimDriveDamperStiffness;                          // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
struct ClothingSystemRuntimeCommon_PointWeightMap
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothTetherData
struct ClothingSystemRuntimeCommon_ClothTetherData
{
public:
	uint8                                        Pad_EF[0x10];                                      // Fixing Size Of Struct 
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
struct ClothingSystemRuntimeCommon_ClothPhysicalMeshData
{
public:
	TArray<struct CoreUObject_Vector3f>          Vertices;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector3f>          Normals;                                           // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               Indices;                                           // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<uint32, struct ClothingSystemRuntimeCommon_PointWeightMap> WeightMaps;                                        // 0x30(0x50)(Edit, NativeAccessSpecifierPublic)
	TArray<float>                                InverseMasses;                                     // 0x80(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ClothingSystemRuntimeInterface_ClothVertBoneData> BoneData;                                          // 0x90(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               SelfCollisionIndices;                              // 0xA0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ClothingSystemRuntimeCommon_ClothTetherData EuclideanTethers;                                  // 0xB0(0x10)(Edit, NativeAccessSpecifierPublic)
	struct ClothingSystemRuntimeCommon_ClothTetherData GeodesicTethers;                                   // 0xC0(0x10)(Edit, NativeAccessSpecifierPublic)
	int32                                        MaxBoneWeights;                                    // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumFixedVerts;                                     // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x148 (0x148 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
struct ClothingSystemRuntimeCommon_ClothLODDataCommon
{
public:
	struct ClothingSystemRuntimeCommon_ClothPhysicalMeshData PhysicalMeshData;                                  // 0x0(0xD8)(Edit, NativeAccessSpecifierPublic)
	struct ClothingSystemRuntimeInterface_ClothCollisionData CollisionData;                                     // 0xD8(0x40)(Edit, NativeAccessSpecifierPublic)
	bool                                         bUseMultipleInfluences;                            // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3[0x3];                                       // Fixing Size After Last Property  
	float                                        SkinningKernelRadius;                              // 0x11C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSmoothTransition;                                 // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4[0x27];                                      // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
struct ClothingSystemRuntimeCommon_ClothParameterMask_Legacy
{
public:
	class FName                                  MaskName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWeightMapTargetCommon            CurrentTarget;                                     // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5[0x3];                                       // Fixing Size After Last Property  
	float                                        MaxValue;                                          // 0xC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinValue;                                          // 0x10(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6[0x4];                                       // Fixing Size After Last Property  
	TArray<float>                                Values;                                            // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F7[0x7];                                       // Fixing Size Of Struct 
};

}


