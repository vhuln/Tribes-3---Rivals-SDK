#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2F0 - 0x2F0)
// Class StaticMeshDescription.StaticMeshDescription
class UStaticMeshDescription : public UMeshDescriptionBase
{
public:

	static class UClass* StaticClass();
	static class UStaticMeshDescription* GetDefaultObj();

	void SetVertexInstanceUV(const struct MeshDescription_VertexInstanceID& VertexInstanceID, const struct CoreUObject_Vector2D& UV, int32 UVIndex);
	void SetPolygonGroupMaterialSlotName(const struct MeshDescription_PolygonGroupID& PolygonGroupID, class FName& SlotName);
	struct CoreUObject_Vector2D GetVertexInstanceUV(const struct MeshDescription_VertexInstanceID& VertexInstanceID, int32 UVIndex);
	void CreateCube(const struct CoreUObject_Vector& Center, const struct CoreUObject_Vector& HalfExtents, const struct MeshDescription_PolygonGroupID& PolygonGroup, struct MeshDescription_PolygonID* PolygonID_PlusX, struct MeshDescription_PolygonID* PolygonID_MinusX, struct MeshDescription_PolygonID* PolygonID_PlusY, struct MeshDescription_PolygonID* PolygonID_MinusY, struct MeshDescription_PolygonID* PolygonID_PlusZ, struct MeshDescription_PolygonID* PolygonID_MinusZ);
};

}


