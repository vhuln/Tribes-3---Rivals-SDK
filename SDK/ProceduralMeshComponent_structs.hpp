#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EProcMeshSliceCapOption : uint8
{
	NoCap                          = 0,
	CreateNewSectionForCap         = 1,
	UseLastSectionForCap           = 2,
	EProcMeshSliceCapOption_MAX    = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
struct ProceduralMeshComponent_ProcMeshTangent
{
public:
	struct CoreUObject_Vector                    TangentX;                                          // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipTangentY;                                     // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2889[0x7];                                     // Fixing Size Of Struct 
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
struct ProceduralMeshComponent_ProcMeshVertex
{
public:
	struct CoreUObject_Vector                    Position;                                          // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Normal;                                            // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ProceduralMeshComponent_ProcMeshTangent Tangent;                                           // 0x30(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     Color;                                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2908[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  UV0;                                               // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  UV1;                                               // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  UV2;                                               // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  UV3;                                               // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ProceduralMeshComponent.ProcMeshSection
struct ProceduralMeshComponent_ProcMeshSection
{
public:
	TArray<struct ProceduralMeshComponent_ProcMeshVertex> ProcVertexBuffer;                                  // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               ProcIndexBuffer;                                   // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       SectionLocalBox;                                   // 0x20(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnableCollision;                                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSectionVisible;                                   // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_295E[0x6];                                     // Fixing Size Of Struct 
};

}


