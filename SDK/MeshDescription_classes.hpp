#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C8 (0x2F0 - 0x28)
// Class MeshDescription.MeshDescriptionBase
class UMeshDescriptionBase : public UObject
{
public:
	uint8                                        Pad_DB7[0x2C8];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMeshDescriptionBase* GetDefaultObj();

	void SetVertexPosition(const struct MeshDescription_VertexID& VertexID, struct CoreUObject_Vector& Position);
	void SetPolygonVertexInstances(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_VertexInstanceID>& VertexInstanceIDs);
	void SetPolygonPolygonGroup(const struct MeshDescription_PolygonID& PolygonID, const struct MeshDescription_PolygonGroupID& PolygonGroupID);
	void ReversePolygonFacing(const struct MeshDescription_PolygonID& PolygonID);
	void ReserveNewVertices(int32 NumberOfNewVertices);
	void ReserveNewVertexInstances(int32 NumberOfNewVertexInstances);
	void ReserveNewTriangles(int32 NumberOfNewTriangles);
	void ReserveNewPolygons(int32 NumberOfNewPolygons);
	void ReserveNewPolygonGroups(int32 NumberOfNewPolygonGroups);
	void ReserveNewEdges(int32 NumberOfNewEdges);
	bool IsVertexValid(const struct MeshDescription_VertexID& VertexID);
	bool IsVertexOrphaned(const struct MeshDescription_VertexID& VertexID);
	bool IsVertexInstanceValid(const struct MeshDescription_VertexInstanceID& VertexInstanceID);
	bool IsTriangleValid(const struct MeshDescription_TriangleID& TriangleID);
	bool IsTrianglePartOfNgon(const struct MeshDescription_TriangleID& TriangleID);
	bool IsPolygonValid(const struct MeshDescription_PolygonID& PolygonID);
	bool IsPolygonGroupValid(const struct MeshDescription_PolygonGroupID& PolygonGroupID);
	bool IsEmpty();
	bool IsEdgeValid(const struct MeshDescription_EdgeID& EdgeID);
	bool IsEdgeInternalToPolygon(const struct MeshDescription_EdgeID& EdgeID, const struct MeshDescription_PolygonID& PolygonID);
	bool IsEdgeInternal(const struct MeshDescription_EdgeID& EdgeID);
	void GetVertexVertexInstances(const struct MeshDescription_VertexID& VertexID, TArray<struct MeshDescription_VertexInstanceID>* OutVertexInstanceIDs);
	struct CoreUObject_Vector GetVertexPosition(const struct MeshDescription_VertexID& VertexID);
	struct MeshDescription_EdgeID GetVertexPairEdge(const struct MeshDescription_VertexID& VertexID0, const struct MeshDescription_VertexID& VertexID1);
	struct MeshDescription_VertexID GetVertexInstanceVertex(const struct MeshDescription_VertexInstanceID& VertexInstanceID);
	struct MeshDescription_EdgeID GetVertexInstancePairEdge(const struct MeshDescription_VertexInstanceID& VertexInstanceID0, const struct MeshDescription_VertexInstanceID& VertexInstanceID1);
	struct MeshDescription_VertexInstanceID GetVertexInstanceForTriangleVertex(const struct MeshDescription_TriangleID& TriangleID, const struct MeshDescription_VertexID& VertexID);
	struct MeshDescription_VertexInstanceID GetVertexInstanceForPolygonVertex(const struct MeshDescription_PolygonID& PolygonID, const struct MeshDescription_VertexID& VertexID);
	int32 GetVertexInstanceCount();
	void GetVertexInstanceConnectedTriangles(const struct MeshDescription_VertexInstanceID& VertexInstanceID, TArray<struct MeshDescription_TriangleID>* OutConnectedTriangleIDs);
	void GetVertexInstanceConnectedPolygons(const struct MeshDescription_VertexInstanceID& VertexInstanceID, TArray<struct MeshDescription_PolygonID>* OutConnectedPolygonIDs);
	int32 GetVertexCount();
	void GetVertexConnectedTriangles(const struct MeshDescription_VertexID& VertexID, TArray<struct MeshDescription_TriangleID>* OutConnectedTriangleIDs);
	void GetVertexConnectedPolygons(const struct MeshDescription_VertexID& VertexID, TArray<struct MeshDescription_PolygonID>* OutConnectedPolygonIDs);
	void GetVertexConnectedEdges(const struct MeshDescription_VertexID& VertexID, TArray<struct MeshDescription_EdgeID>* OutEdgeIDs);
	void GetVertexAdjacentVertices(const struct MeshDescription_VertexID& VertexID, TArray<struct MeshDescription_VertexID>* OutAdjacentVertexIDs);
	void GetTriangleVertices(const struct MeshDescription_TriangleID& TriangleID, TArray<struct MeshDescription_VertexID>* OutVertexIDs);
	void GetTriangleVertexInstances(const struct MeshDescription_TriangleID& TriangleID, TArray<struct MeshDescription_VertexInstanceID>* OutVertexInstanceIDs);
	struct MeshDescription_VertexInstanceID GetTriangleVertexInstance(const struct MeshDescription_TriangleID& TriangleID, int32 Index);
	struct MeshDescription_PolygonGroupID GetTrianglePolygonGroup(const struct MeshDescription_TriangleID& TriangleID);
	struct MeshDescription_PolygonID GetTrianglePolygon(const struct MeshDescription_TriangleID& TriangleID);
	void GetTriangleEdges(const struct MeshDescription_TriangleID& TriangleID, TArray<struct MeshDescription_EdgeID>* OutEdgeIDs);
	int32 GetTriangleCount();
	void GetTriangleAdjacentTriangles(const struct MeshDescription_TriangleID& TriangleID, TArray<struct MeshDescription_TriangleID>* OutTriangleIDs);
	void GetPolygonVertices(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_VertexID>* OutVertexIDs);
	void GetPolygonVertexInstances(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_VertexInstanceID>* OutVertexInstanceIDs);
	void GetPolygonTriangles(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_TriangleID>* OutTriangleIDs);
	struct MeshDescription_PolygonGroupID GetPolygonPolygonGroup(const struct MeshDescription_PolygonID& PolygonID);
	void GetPolygonPerimeterEdges(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_EdgeID>* OutEdgeIDs);
	void GetPolygonInternalEdges(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_EdgeID>* OutEdgeIDs);
	void GetPolygonGroupPolygons(const struct MeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct MeshDescription_PolygonID>* OutPolygonIDs);
	int32 GetPolygonGroupCount();
	int32 GetPolygonCount();
	void GetPolygonAdjacentPolygons(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_PolygonID>* OutPolygonIDs);
	int32 GetNumVertexVertexInstances(const struct MeshDescription_VertexID& VertexID);
	int32 GetNumVertexInstanceConnectedTriangles(const struct MeshDescription_VertexInstanceID& VertexInstanceID);
	int32 GetNumVertexInstanceConnectedPolygons(const struct MeshDescription_VertexInstanceID& VertexInstanceID);
	int32 GetNumVertexConnectedTriangles(const struct MeshDescription_VertexID& VertexID);
	int32 GetNumVertexConnectedPolygons(const struct MeshDescription_VertexID& VertexID);
	int32 GetNumVertexConnectedEdges(const struct MeshDescription_VertexID& VertexID);
	int32 GetNumPolygonVertices(const struct MeshDescription_PolygonID& PolygonID);
	int32 GetNumPolygonTriangles(const struct MeshDescription_PolygonID& PolygonID);
	int32 GetNumPolygonInternalEdges(const struct MeshDescription_PolygonID& PolygonID);
	int32 GetNumPolygonGroupPolygons(const struct MeshDescription_PolygonGroupID& PolygonGroupID);
	int32 GetNumEdgeConnectedTriangles(const struct MeshDescription_EdgeID& EdgeID);
	int32 GetNumEdgeConnectedPolygons(const struct MeshDescription_EdgeID& EdgeID);
	void GetEdgeVertices(const struct MeshDescription_EdgeID& EdgeID, TArray<struct MeshDescription_VertexID>* OutVertexIDs);
	struct MeshDescription_VertexID GetEdgeVertex(const struct MeshDescription_EdgeID& EdgeID, int32 VertexNumber);
	int32 GetEdgeCount();
	void GetEdgeConnectedTriangles(const struct MeshDescription_EdgeID& EdgeID, TArray<struct MeshDescription_TriangleID>* OutConnectedTriangleIDs);
	void GetEdgeConnectedPolygons(const struct MeshDescription_EdgeID& EdgeID, TArray<struct MeshDescription_PolygonID>* OutConnectedPolygonIDs);
	void Empty();
	void DeleteVertexInstance(const struct MeshDescription_VertexInstanceID& VertexInstanceID, TArray<struct MeshDescription_VertexID>* OrphanedVertices);
	void DeleteVertex(const struct MeshDescription_VertexID& VertexID);
	void DeleteTriangle(const struct MeshDescription_TriangleID& TriangleID, TArray<struct MeshDescription_EdgeID>* OrphanedEdges, TArray<struct MeshDescription_VertexInstanceID>* OrphanedVertexInstances, TArray<struct MeshDescription_PolygonGroupID>* OrphanedPolygonGroupsPtr);
	void DeletePolygonGroup(const struct MeshDescription_PolygonGroupID& PolygonGroupID);
	void DeletePolygon(const struct MeshDescription_PolygonID& PolygonID, TArray<struct MeshDescription_EdgeID>* OrphanedEdges, TArray<struct MeshDescription_VertexInstanceID>* OrphanedVertexInstances, TArray<struct MeshDescription_PolygonGroupID>* OrphanedPolygonGroups);
	void DeleteEdge(const struct MeshDescription_EdgeID& EdgeID, TArray<struct MeshDescription_VertexID>* OrphanedVertices);
	void CreateVertexWithID(const struct MeshDescription_VertexID& VertexID);
	void CreateVertexInstanceWithID(const struct MeshDescription_VertexInstanceID& VertexInstanceID, const struct MeshDescription_VertexID& VertexID);
	struct MeshDescription_VertexInstanceID CreateVertexInstance(const struct MeshDescription_VertexID& VertexID);
	struct MeshDescription_VertexID CreateVertex();
	void CreateTriangleWithID(const struct MeshDescription_TriangleID& TriangleID, const struct MeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct MeshDescription_VertexInstanceID>& VertexInstanceIDs, TArray<struct MeshDescription_EdgeID>* NewEdgeIDs);
	struct MeshDescription_TriangleID CreateTriangle(const struct MeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct MeshDescription_VertexInstanceID>& VertexInstanceIDs, TArray<struct MeshDescription_EdgeID>* NewEdgeIDs);
	void CreatePolygonWithID(const struct MeshDescription_PolygonID& PolygonID, const struct MeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct MeshDescription_VertexInstanceID>* VertexInstanceIDs, TArray<struct MeshDescription_EdgeID>* NewEdgeIDs);
	void CreatePolygonGroupWithID(const struct MeshDescription_PolygonGroupID& PolygonGroupID);
	struct MeshDescription_PolygonGroupID CreatePolygonGroup();
	struct MeshDescription_PolygonID CreatePolygon(const struct MeshDescription_PolygonGroupID& PolygonGroupID, TArray<struct MeshDescription_VertexInstanceID>* VertexInstanceIDs, TArray<struct MeshDescription_EdgeID>* NewEdgeIDs);
	void CreateEdgeWithID(const struct MeshDescription_EdgeID& EdgeID, const struct MeshDescription_VertexID& VertexID0, const struct MeshDescription_VertexID& VertexID1);
	struct MeshDescription_EdgeID CreateEdge(const struct MeshDescription_VertexID& VertexID0, const struct MeshDescription_VertexID& VertexID1);
	void ComputePolygonTriangulation(const struct MeshDescription_PolygonID& PolygonID);
};

// 0x0 (0x28 - 0x28)
// Class MeshDescription.MeshDescriptionBaseBulkData
class UMeshDescriptionBaseBulkData : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMeshDescriptionBaseBulkData* GetDefaultObj();

};

}


