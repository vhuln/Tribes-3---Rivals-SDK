#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x100 - 0xE8)
// ScriptStruct DataflowNodes.FloatOverrideDataflowNode
struct DataflowNodes_FloatOverrideDataflowNode : public DataflowCore_DataflowNode
{
public:
	class FName                                  PropertyName;                                      // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  KeyName;                                           // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ValueOut;                                          // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CDC[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct DataflowNodes.SelectionSetDataflowNode
struct DataflowNodes_SelectionSetDataflowNode : public DataflowCore_DataflowNode
{
public:
	class FString                                Indices;                                           // 0xE8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                IndicesOut;                                        // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct DataflowNodes.GetSkeletalMeshDataflowNode
struct DataflowNodes_GetSkeletalMeshDataflowNode : public DataflowCore_DataflowNode
{
public:
	class USkeletalMesh*                         SkeletalMesh;                                      // 0xE8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct DataflowNodes.GetSkeletonDataflowNode
struct DataflowNodes_GetSkeletonDataflowNode : public DataflowCore_DataflowNode
{
public:
	class USkeleton*                             Skeleton;                                          // 0xE8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x108 - 0xE8)
// ScriptStruct DataflowNodes.SkeletalMeshBoneDataflowNode
struct DataflowNodes_SkeletalMeshBoneDataflowNode : public DataflowCore_DataflowNode
{
public:
	class FName                                  BoneName;                                          // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         SkeletalMesh;                                      // 0xF0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BoneIndexOut;                                      // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0xFC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF3[0x4];                                     // Fixing Size Of Struct 
};

// 0x78 (0x160 - 0xE8)
// ScriptStruct DataflowNodes.SkeletalMeshReferenceTransformDataflowNode
struct DataflowNodes_SkeletalMeshReferenceTransformDataflowNode : public DataflowCore_DataflowNode
{
public:
	class USkeletalMesh*                         SkeletalMeshIn;                                    // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BoneIndexIn;                                       // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D00[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 TransformOut;                                      // 0x100(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xF8 - 0xE8)
// ScriptStruct DataflowNodes.GetStaticMeshDataflowNode
struct DataflowNodes_GetStaticMeshDataflowNode : public DataflowCore_DataflowNode
{
public:
	class UStaticMesh*                           StaticMesh;                                        // 0xE8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


