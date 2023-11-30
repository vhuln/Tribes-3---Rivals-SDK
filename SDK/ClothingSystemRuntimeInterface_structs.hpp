#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
struct ClothingSystemRuntimeInterface_ClothCollisionPrim_Sphere
{
public:
	int32                                        BoneIndex;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LocalPosition;                                     // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
struct ClothingSystemRuntimeInterface_ClothCollisionPrim_SphereConnection
{
public:
	int32                                        SphereIndices[0x2];                                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
struct ClothingSystemRuntimeInterface_ClothCollisionPrim_ConvexFace
{
public:
	struct CoreUObject_Plane                     Plane;                                             // 0x0(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                Indices;                                           // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
struct ClothingSystemRuntimeInterface_ClothCollisionPrim_Convex
{
public:
	TArray<struct ClothingSystemRuntimeInterface_ClothCollisionPrim_ConvexFace> Faces;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            SurfacePoints;                                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        BoneIndex;                                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_703[0x4];                                      // Fixing Size Of Struct 
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
struct ClothingSystemRuntimeInterface_ClothCollisionPrim_Box
{
public:
	struct CoreUObject_Vector                    LocalPosition;                                     // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_70D[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_Quat                      LocalRotation;                                     // 0x20(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    HalfExtents;                                       // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BoneIndex;                                         // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_712[0x4];                                      // Fixing Size Of Struct 
};

// 0x4C (0x4C - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
struct ClothingSystemRuntimeInterface_ClothVertBoneData
{
public:
	int32                                        NumInfluences;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       BoneIndices[0xC];                                  // 0x4(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BoneWeights[0xC];                                  // 0x1C(0x30)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
struct ClothingSystemRuntimeInterface_ClothCollisionData
{
public:
	TArray<struct ClothingSystemRuntimeInterface_ClothCollisionPrim_Sphere> Spheres;                                           // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ClothingSystemRuntimeInterface_ClothCollisionPrim_SphereConnection> SphereConnections;                                 // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ClothingSystemRuntimeInterface_ClothCollisionPrim_Convex> Convexes;                                          // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ClothingSystemRuntimeInterface_ClothCollisionPrim_Box> Boxes;                                             // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

}


