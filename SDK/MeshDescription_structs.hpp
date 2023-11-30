#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EComputeNTBsOptions : uint8
{
	None                           = 0,
	Normals                        = 1,
	Tangents                       = 2,
	WeightedNTBs                   = 4,
	EComputeNTBsOptions_MAX        = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct MeshDescription.ElementID
struct MeshDescription_ElementID
{
public:
	int32                                        IDValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.VertexID
struct MeshDescription_VertexID : public MeshDescription_ElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.VertexInstanceID
struct MeshDescription_VertexInstanceID : public MeshDescription_ElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.EdgeID
struct MeshDescription_EdgeID : public MeshDescription_ElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.UVID
struct MeshDescription_UVID : public MeshDescription_ElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.TriangleID
struct MeshDescription_TriangleID : public MeshDescription_ElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.PolygonGroupID
struct MeshDescription_PolygonGroupID : public MeshDescription_ElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.PolygonID
struct MeshDescription_PolygonID : public MeshDescription_ElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.BoneID
struct MeshDescription_BoneID : public MeshDescription_ElementID
{
public:
};

}


