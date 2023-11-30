#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKismetProceduralMeshLibrary* GetDefaultObj();

	void SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct CoreUObject_Vector& PlanePosition, const struct CoreUObject_Vector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent** OutOtherHalfProcMesh, enum class EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);
	void GetSectionFromStaticMesh(class UStaticMesh* InMesh, int32 LODIndex, int32 SectionIndex, TArray<struct CoreUObject_Vector>* Vertices, TArray<int32>* Triangles, TArray<struct CoreUObject_Vector>* Normals, TArray<struct CoreUObject_Vector2D>* UVs, TArray<struct ProceduralMeshComponent_ProcMeshTangent>* Tangents);
	void GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int32 SectionIndex, TArray<struct CoreUObject_Vector>* Vertices, TArray<int32>* Triangles, TArray<struct CoreUObject_Vector>* Normals, TArray<struct CoreUObject_Vector2D>* UVs, TArray<struct ProceduralMeshComponent_ProcMeshTangent>* Tangents);
	void GenerateBoxMesh(const struct CoreUObject_Vector& BoxRadius, TArray<struct CoreUObject_Vector>* Vertices, TArray<int32>* Triangles, TArray<struct CoreUObject_Vector>* Normals, TArray<struct CoreUObject_Vector2D>* UVs, TArray<struct ProceduralMeshComponent_ProcMeshTangent>* Tangents);
	void CreateGridMeshWelded(int32 NumX, int32 NumY, TArray<int32>* Triangles, TArray<struct CoreUObject_Vector>* Vertices, TArray<struct CoreUObject_Vector2D>* UVs, float GridSpacing);
	void CreateGridMeshTriangles(int32 NumX, int32 NumY, bool bWinding, TArray<int32>* Triangles);
	void CreateGridMeshSplit(int32 NumX, int32 NumY, TArray<int32>* Triangles, TArray<struct CoreUObject_Vector>* Vertices, TArray<struct CoreUObject_Vector2D>* UVs, TArray<struct CoreUObject_Vector2D>* UV1s, float GridSpacing);
	void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int32 LODIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision);
	void ConvertQuadToTriangles(TArray<int32>& Triangles, int32 Vert0, int32 Vert1, int32 Vert2, int32 Vert3);
	void CalculateTangentsForMesh(TArray<struct CoreUObject_Vector>& Vertices, TArray<int32>& Triangles, TArray<struct CoreUObject_Vector2D>& UVs, TArray<struct CoreUObject_Vector>* Normals, TArray<struct ProceduralMeshComponent_ProcMeshTangent>* Tangents);
};

// 0x88 (0x630 - 0x5A8)
// Class ProceduralMeshComponent.ProceduralMeshComponent
class UProceduralMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_2744[0x8];                                     // Fixing Size After Last Property  
	bool                                         bUseComplexAsSimpleCollision;                      // 0x5B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAsyncCooking;                                  // 0x5B1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2762[0x6];                                     // Fixing Size After Last Property  
	class UBodySetup*                            ProcMeshBodySetup;                                 // 0x5B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct ProceduralMeshComponent_ProcMeshSection> ProcMeshSections;                                  // 0x5C0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct Engine_KConvexElem>            CollisionConvexElems;                              // 0x5D0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct CoreUObject_BoxSphereBounds           LocalBounds;                                       // 0x5E0(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x618(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2799[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UProceduralMeshComponent* GetDefaultObj();

	void UpdateMeshSection_LinearColor(int32 SectionIndex, TArray<struct CoreUObject_Vector>& Vertices, TArray<struct CoreUObject_Vector>& Normals, TArray<struct CoreUObject_Vector2D>& UV0, TArray<struct CoreUObject_Vector2D>& UV1, TArray<struct CoreUObject_Vector2D>& UV2, TArray<struct CoreUObject_Vector2D>& UV3, TArray<struct CoreUObject_LinearColor>& VertexColors, TArray<struct ProceduralMeshComponent_ProcMeshTangent>& Tangents, bool bSRGBConversion);
	void UpdateMeshSection(int32 SectionIndex, TArray<struct CoreUObject_Vector>& Vertices, TArray<struct CoreUObject_Vector>& Normals, TArray<struct CoreUObject_Vector2D>& UV0, TArray<struct CoreUObject_Color>& VertexColors, TArray<struct ProceduralMeshComponent_ProcMeshTangent>& Tangents);
	void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
	bool IsMeshSectionVisible(int32 SectionIndex);
	int32 GetNumSections();
	void CreateMeshSection_LinearColor(int32 SectionIndex, TArray<struct CoreUObject_Vector>& Vertices, TArray<int32>& Triangles, TArray<struct CoreUObject_Vector>& Normals, TArray<struct CoreUObject_Vector2D>& UV0, TArray<struct CoreUObject_Vector2D>& UV1, TArray<struct CoreUObject_Vector2D>& UV2, TArray<struct CoreUObject_Vector2D>& UV3, TArray<struct CoreUObject_LinearColor>& VertexColors, TArray<struct ProceduralMeshComponent_ProcMeshTangent>& Tangents, bool bCreateCollision, bool bSRGBConversion);
	void CreateMeshSection(int32 SectionIndex, TArray<struct CoreUObject_Vector>& Vertices, TArray<int32>& Triangles, TArray<struct CoreUObject_Vector>& Normals, TArray<struct CoreUObject_Vector2D>& UV0, TArray<struct CoreUObject_Color>& VertexColors, TArray<struct ProceduralMeshComponent_ProcMeshTangent>& Tangents, bool bCreateCollision);
	void ClearMeshSection(int32 SectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(const TArray<struct CoreUObject_Vector>& ConvexVerts);
};

}


