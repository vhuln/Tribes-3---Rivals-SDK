#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class GeometryScriptingCore.GeometryScriptDebug
class UGeometryScriptDebug : public UObject
{
public:
	TArray<struct GeometryScriptingCore_GeometryScriptDebugMessage> Messages;                                          // 0x28(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGeometryScriptDebug* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions
class UGeometryScriptLibrary_CollisionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_CollisionFunctions* GetDefaultObj();

	class UDynamicMesh* SetStaticMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, const struct GeometryScriptingCore_GeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug* Debug);
	void SetStaticMeshCollisionFromComponent(class UStaticMesh* StaticMeshAsset, class UPrimitiveComponent* SourceComponent, const struct GeometryScriptingCore_GeometryScriptSetSimpleCollisionOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetDynamicMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UDynamicMeshComponent* ToDynamicMeshComponent, const struct GeometryScriptingCore_GeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug* Debug);
	void ResetDynamicMeshCollision(class UDynamicMeshComponent* Component, bool bEmitTransaction, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_ContainmentFunctions* GetDefaultObj();

	class UDynamicMesh* ComputeMeshSweptHull(class UDynamicMesh* TargetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh** CopyToMeshOut, const struct CoreUObject_Transform& ProjectionFrame, const struct GeometryScriptingCore_GeometryScriptSweptHullOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputeMeshConvexHull(class UDynamicMesh* TargetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh** CopyToMeshOut, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct GeometryScriptingCore_GeometryScriptConvexHullOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputeMeshConvexDecomposition(class UDynamicMesh* TargetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh** CopyToMeshOut, const struct GeometryScriptingCore_GeometryScriptConvexDecompositionOptions& Options, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
class UGeometryScriptLibrary_ListUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_ListUtilityFunctions* GetDefaultObj();

	void SetVectorListItem(struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, int32 Index, const struct CoreUObject_Vector& NewValue, bool* bIsValidIndex);
	void SetUVListItem(struct GeometryScriptingCore_GeometryScriptUVList& UVList, int32 Index, const struct CoreUObject_Vector2D& NewUV, bool* bIsValidIndex);
	void SetScalarListItem(struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, int32 Index, double NewValue, bool* bIsValidIndex);
	void SetIndexListItem(struct GeometryScriptingCore_GeometryScriptIndexList& IndexList, int32 Index, int32 NewValue, bool* bIsValidIndex);
	void SetColorListItem(struct GeometryScriptingCore_GeometryScriptColorList& ColorList, int32 Index, const struct CoreUObject_LinearColor& NewColor, bool* bIsValidIndex);
	int32 GetVectorListLength(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList);
	int32 GetVectorListLastIndex(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList);
	struct CoreUObject_Vector GetVectorListItem(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, int32 Index, bool* bIsValidIndex);
	int32 GetUVListLength(const struct GeometryScriptingCore_GeometryScriptUVList& UVList);
	int32 GetUVListLastIndex(const struct GeometryScriptingCore_GeometryScriptUVList& UVList);
	struct CoreUObject_Vector2D GetUVListItem(const struct GeometryScriptingCore_GeometryScriptUVList& UVList, int32 Index, bool* bIsValidIndex);
	int32 GetTriangleListLength(const struct GeometryScriptingCore_GeometryScriptTriangleList& TriangleList);
	int32 GetTriangleListLastTriangle(const struct GeometryScriptingCore_GeometryScriptTriangleList& TriangleList);
	struct CoreUObject_IntVector GetTriangleListItem(const struct GeometryScriptingCore_GeometryScriptTriangleList& TriangleList, int32 Triangle, bool* bIsValidTriangle);
	int32 GetScalarListLength(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList);
	int32 GetScalarListLastIndex(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList);
	double GetScalarListItem(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, int32 Index, bool* bIsValidIndex);
	int32 GetIndexListLength(const struct GeometryScriptingCore_GeometryScriptIndexList& IndexList);
	int32 GetIndexListLastIndex(const struct GeometryScriptingCore_GeometryScriptIndexList& IndexList);
	int32 GetIndexListItem(const struct GeometryScriptingCore_GeometryScriptIndexList& IndexList, int32 Index, bool* bIsValidIndex);
	int32 GetColorListLength(const struct GeometryScriptingCore_GeometryScriptColorList& ColorList);
	int32 GetColorListLastIndex(const struct GeometryScriptingCore_GeometryScriptColorList& ColorList);
	struct CoreUObject_LinearColor GetColorListItem(const struct GeometryScriptingCore_GeometryScriptColorList& ColorList, int32 Index, bool* bIsValidIndex);
	void ExtractColorListChannels(const struct GeometryScriptingCore_GeometryScriptColorList& ColorList, struct GeometryScriptingCore_GeometryScriptVectorList* VectorList, int32 XChannelIndex, int32 YChannelIndex, int32 ZChannelIndex);
	void ExtractColorListChannel(const struct GeometryScriptingCore_GeometryScriptColorList& ColorList, struct GeometryScriptingCore_GeometryScriptScalarList* ScalarList, int32 ChannelIndex);
	void DuplicateVectorList(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, struct GeometryScriptingCore_GeometryScriptVectorList* DuplicateList);
	void DuplicateUVList(const struct GeometryScriptingCore_GeometryScriptUVList& UVList, struct GeometryScriptingCore_GeometryScriptUVList* DuplicateList);
	void DuplicateScalarList(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, struct GeometryScriptingCore_GeometryScriptScalarList* DuplicateList);
	void DuplicateIndexList(const struct GeometryScriptingCore_GeometryScriptIndexList& IndexList, struct GeometryScriptingCore_GeometryScriptIndexList* DuplicateList);
	void DuplicateColorList(const struct GeometryScriptingCore_GeometryScriptColorList& ColorList, struct GeometryScriptingCore_GeometryScriptColorList* DuplicateList);
	void ConvertVectorListToArray(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, TArray<struct CoreUObject_Vector>* VectorArray);
	void ConvertUVListToArray(const struct GeometryScriptingCore_GeometryScriptUVList& UVList, TArray<struct CoreUObject_Vector2D>* UVArray);
	void ConvertTriangleListToArray(const struct GeometryScriptingCore_GeometryScriptTriangleList& TriangleList, TArray<struct CoreUObject_IntVector>* TriangleArray);
	void ConvertScalarListToArray(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, TArray<double>* ScalarArray);
	void ConvertIndexListToArray(const struct GeometryScriptingCore_GeometryScriptIndexList& IndexList, TArray<int32>* IndexArray);
	void ConvertColorListToArray(const struct GeometryScriptingCore_GeometryScriptColorList& ColorList, TArray<struct CoreUObject_LinearColor>* ColorArray);
	void ConvertArrayToVectorList(TArray<struct CoreUObject_Vector>& VectorArray, struct GeometryScriptingCore_GeometryScriptVectorList* VectorList);
	void ConvertArrayToUVList(TArray<struct CoreUObject_Vector2D>& UVArray, struct GeometryScriptingCore_GeometryScriptUVList* UVList);
	void ConvertArrayToTriangleList(TArray<struct CoreUObject_IntVector>& TriangleArray, struct GeometryScriptingCore_GeometryScriptTriangleList* TriangleList);
	void ConvertArrayToScalarList(TArray<double>& VectorArray, struct GeometryScriptingCore_GeometryScriptScalarList* ScalarList);
	void ConvertArrayToIndexList(TArray<int32>& IndexArray, struct GeometryScriptingCore_GeometryScriptIndexList* IndexList, enum class EGeometryScriptIndexType IndexType);
	void ConvertArrayToColorList(TArray<struct CoreUObject_LinearColor>& ColorArray, struct GeometryScriptingCore_GeometryScriptColorList* ColorList);
	void ClearVectorList(struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, const struct CoreUObject_Vector& ClearValue);
	void ClearUVList(struct GeometryScriptingCore_GeometryScriptUVList& UVList, const struct CoreUObject_Vector2D& ClearUV);
	void ClearScalarList(struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, double ClearValue);
	void ClearIndexList(struct GeometryScriptingCore_GeometryScriptIndexList& IndexList, int32 ClearValue);
	void ClearColorList(struct GeometryScriptingCore_GeometryScriptColorList& ColorList, const struct CoreUObject_LinearColor& ClearColor);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_StaticMeshFunctions* GetDefaultObj();

	void GetSectionMaterialListFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, const struct GeometryScriptingCore_GeometryScriptMeshReadLOD& RequestedLOD, TArray<class UMaterialInterface*>* MaterialList, TArray<int32>* MaterialIndex, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshToStaticMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, const struct GeometryScriptingCore_GeometryScriptCopyMeshToAssetOptions& Options, const struct GeometryScriptingCore_GeometryScriptMeshWriteLOD& TargetLod, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshToSkeletalMesh(class UDynamicMesh* FromDynamicMesh, class USkeletalMesh* ToSkeletalMeshAsset, const struct GeometryScriptingCore_GeometryScriptCopyMeshToAssetOptions& Options, const struct GeometryScriptingCore_GeometryScriptMeshWriteLOD& TargetLod, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, class UDynamicMesh* ToDynamicMesh, const struct GeometryScriptingCore_GeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct GeometryScriptingCore_GeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshFromSkeletalMesh(class USkeletalMesh* FromSkeletalMeshAsset, class UDynamicMesh* ToDynamicMesh, const struct GeometryScriptingCore_GeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct GeometryScriptingCore_GeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
class UGeometryScriptLibrary_MeshBakeFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBakeFunctions* GetDefaultObj();

	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions MakeBakeTypeVertexColor();
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions MakeBakeTypeTexture(class UTexture2D* SourceTexture, int32 SourceUVLayer);
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions MakeBakeTypeTangentNormal();
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions MakeBakeTypePosition();
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions MakeBakeTypeObjectNormal();
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions MakeBakeTypeMultiTexture(TArray<class UTexture2D*>& MaterialIDSourceTextures, int32 SourceUVLayer);
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions MakeBakeTypeMaterialID();
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions MakeBakeTypeFaceNormal();
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions MakeBakeTypeCurvature(enum class EGeometryScriptBakeCurvatureTypeMode CurvatureType, enum class EGeometryScriptBakeCurvatureColorMode ColorMapping, float ColorRangeMultiplier, float MinRangeMultiplier, enum class EGeometryScriptBakeCurvatureClampMode Clamping);
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions MakeBakeTypeBentNormal(int32 OcclusionRays, float MaxDistance, float SpreadAngle);
	struct GeometryScriptingCore_GeometryScriptBakeTypeOptions MakeBakeTypeAmbientOcclusion(int32 OcclusionRays, float MaxDistance, float SpreadAngle, float BiasAngle);
	class UDynamicMesh* BakeVertex(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& TargetTransform, const struct GeometryScriptingCore_GeometryScriptBakeTargetMeshOptions& TargetOptions, class UDynamicMesh* SourceMesh, const struct CoreUObject_Transform& SourceTransform, const struct GeometryScriptingCore_GeometryScriptBakeSourceMeshOptions& SourceOptions, const struct GeometryScriptingCore_GeometryScriptBakeOutputType& BakeTypes, const struct GeometryScriptingCore_GeometryScriptBakeVertexOptions& BakeOptions, class UGeometryScriptDebug* Debug);
	struct GeometryScriptingCore_GeometryScriptRenderCaptureTextures BakeTextureFromRenderCaptures(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& TargetLocalToWorld, const struct GeometryScriptingCore_GeometryScriptBakeTargetMeshOptions& TargetOptions, const TArray<class AActor*>& SourceActors, const struct GeometryScriptingCore_GeometryScriptBakeRenderCaptureOptions& BakeOptions, class UGeometryScriptDebug* Debug);
	TArray<class UTexture2D*> BakeTexture(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& TargetTransform, const struct GeometryScriptingCore_GeometryScriptBakeTargetMeshOptions& TargetOptions, class UDynamicMesh* SourceMesh, const struct CoreUObject_Transform& SourceTransform, const struct GeometryScriptingCore_GeometryScriptBakeSourceMeshOptions& SourceOptions, TArray<struct GeometryScriptingCore_GeometryScriptBakeTypeOptions>& BakeTypes, const struct GeometryScriptingCore_GeometryScriptBakeTextureOptions& BakeOptions, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBasicEditFunctions* GetDefaultObj();

	class UDynamicMesh* SetVertexPosition(class UDynamicMesh* TargetMesh, int32 VertexID, const struct CoreUObject_Vector& NewPosition, bool* bIsValidVertex, bool bDeferChangeNotifications);
	class UDynamicMesh* SetAllMeshVertexPositions(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptVectorList& PositionList, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* DiscardMeshAttributes(class UDynamicMesh* TargetMesh, bool bDeferChangeNotifications);
	class UDynamicMesh* DeleteVerticesFromMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptIndexList& VertexList, int32* NumDeleted, bool bDeferChangeNotifications);
	class UDynamicMesh* DeleteVertexFromMesh(class UDynamicMesh* TargetMesh, int32 VertexID, bool* bWasVertexDeleted, bool bDeferChangeNotifications);
	class UDynamicMesh* DeleteTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptIndexList& TriangleList, int32* NumDeleted, bool bDeferChangeNotifications);
	class UDynamicMesh* DeleteTriangleFromMesh(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bWasTriangleDeleted, bool bDeferChangeNotifications);
	class UDynamicMesh* DeleteSelectedTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, int32* NumDeleted, bool bDeferChangeNotifications);
	class UDynamicMesh* AppendMeshTransformed(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, TArray<struct CoreUObject_Transform>& AppendTransforms, const struct CoreUObject_Transform& ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, const struct GeometryScriptingCore_GeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendMeshRepeated(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const struct CoreUObject_Transform& AppendTransform, int32 RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, const struct GeometryScriptingCore_GeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const struct CoreUObject_Transform& AppendTransform, bool bDeferChangeNotifications, const struct GeometryScriptingCore_GeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendBuffersToMesh(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptSimpleMeshBuffers& Buffers, struct GeometryScriptingCore_GeometryScriptIndexList* NewTriangleIndicesList, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AddVerticesToMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptVectorList& NewPositionsList, struct GeometryScriptingCore_GeometryScriptIndexList* NewIndicesList, bool bDeferChangeNotifications);
	class UDynamicMesh* AddVertexToMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_Vector& NewPosition, int32* NewVertexIndex, bool bDeferChangeNotifications);
	class UDynamicMesh* AddTriangleToMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_IntVector& NewTriangle, int32* NewTriangleIndex, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AddTrianglesToMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptTriangleList& NewTrianglesList, struct GeometryScriptingCore_GeometryScriptIndexList* NewIndicesList, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBoneWeightFunctions
class UGeometryScriptLibrary_MeshBoneWeightFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBoneWeightFunctions* GetDefaultObj();

	class UDynamicMesh* TransferBoneWeightsFromMesh(class UDynamicMesh* SourceMesh, class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptTransferBoneWeightsOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32 VertexID, TArray<struct GeometryScriptingCore_GeometryScriptBoneWeight>& BoneWeights, bool* bIsValidVertexID, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile);
	class UDynamicMesh* SetAllVertexBoneWeights(class UDynamicMesh* TargetMesh, TArray<struct GeometryScriptingCore_GeometryScriptBoneWeight>& BoneWeights, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile);
	class UDynamicMesh* MeshHasBoneWeights(class UDynamicMesh* TargetMesh, bool* bHasBoneWeights, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile);
	class UDynamicMesh* MeshCreateBoneWeights(class UDynamicMesh* TargetMesh, bool* bProfileExisted, bool bReplaceExistingProfile, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile);
	class UDynamicMesh* GetVertexBoneWeights(class UDynamicMesh* TargetMesh, int32 VertexID, TArray<struct GeometryScriptingCore_GeometryScriptBoneWeight>* BoneWeights, bool* bHasValidBoneWeights, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile);
	class UDynamicMesh* GetRootBoneName(class UDynamicMesh* TargetMesh, class FName* BoneName, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetMaxBoneWeightIndex(class UDynamicMesh* TargetMesh, bool* bHasBoneWeights, int32* MaxBoneIndex, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile);
	class UDynamicMesh* GetLargestVertexBoneWeight(class UDynamicMesh* TargetMesh, int32 VertexID, struct GeometryScriptingCore_GeometryScriptBoneWeight* BoneWeight, bool* bHasValidBoneWeights, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile);
	class UDynamicMesh* GetBoneInfo(class UDynamicMesh* TargetMesh, class FName BoneName, bool* bIsValidBoneName, struct GeometryScriptingCore_GeometryScriptBoneInfo* BoneInfo, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetBoneIndex(class UDynamicMesh* TargetMesh, class FName BoneName, bool* bIsValidBoneName, int32* BoneIndex, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetBoneChildren(class UDynamicMesh* TargetMesh, class FName BoneName, bool bRecursive, bool* bIsValidBoneName, TArray<struct GeometryScriptingCore_GeometryScriptBoneInfo>* ChildrenInfo, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetAllBonesInfo(class UDynamicMesh* TargetMesh, TArray<struct GeometryScriptingCore_GeometryScriptBoneInfo>* BonesInfo, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* DiscardBonesFromMesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyBonesFromMesh(class UDynamicMesh* SourceMesh, class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputeSmoothBoneWeights(class UDynamicMesh* TargetMesh, class USkeleton* Skeleton, const struct GeometryScriptingCore_GeometryScriptSmoothBoneWeightsOptions& Options, const struct GeometryScriptingCore_GeometryScriptBoneWeightProfile& Profile, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshBooleanFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyMeshSelfUnion(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelfUnionOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshPlaneSlice(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& CutFrame, const struct GeometryScriptingCore_GeometryScriptMeshPlaneSliceOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshPlaneCut(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& CutFrame, const struct GeometryScriptingCore_GeometryScriptMeshPlaneCutOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshMirror(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& MirrorFrame, const struct GeometryScriptingCore_GeometryScriptMeshMirrorOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshBoolean(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& TargetTransform, class UDynamicMesh* ToolMesh, const struct CoreUObject_Transform& ToolTransform, enum class EGeometryScriptBooleanOperation Operation, const struct GeometryScriptingCore_GeometryScriptMeshBooleanOptions& Options, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshComparisonFunctions* GetDefaultObj();

	class UDynamicMesh* MeasureDistancesBetweenMeshes(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, const struct GeometryScriptingCore_GeometryScriptMeasureMeshDistanceOptions& Options, double* MaxDistance, double* MinDistance, double* AverageDistance, double* RootMeanSqrDeviation, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* IsSameMeshAs(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, const struct GeometryScriptingCore_GeometryScriptIsSameMeshOptions& Options, bool* bIsSameMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* IsIntersectingMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& TargetTransform, class UDynamicMesh* OtherMesh, const struct CoreUObject_Transform& OtherTransform, bool* bIsIntersecting, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDecompositionFunctions* GetDefaultObj();

	class UDynamicMesh* SplitMeshByPolygroups(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32>* ComponentPolygroups, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SplitMeshByMaterialIDs(class UDynamicMesh* TargetMesh, TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32>* ComponentMaterialIDs, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SplitMeshByComponents(class UDynamicMesh* TargetMesh, TArray<class UDynamicMesh*>* ComponentMeshes, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetSubMeshFromMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh*& StoreToSubmesh, const struct GeometryScriptingCore_GeometryScriptIndexList& TriangleList, class UDynamicMesh** StoreToSubmeshOut, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshToMesh(class UDynamicMesh* CopyFromMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh** CopyToMeshOut, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshSelectionToMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh*& StoreToSubmesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UDynamicMesh** StoreToSubmeshOut, bool bAppendToExisting, bool bPreserveGroupIDs, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshDeformFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyTwistWarpToMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptTwistWarpOptions& Options, const struct CoreUObject_Transform& TwistOrientation, float TwistAngle, float TwistExtent, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyPerlinNoiseToMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct GeometryScriptingCore_GeometryScriptPerlinNoiseOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMathWarpToMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& WarpOrientation, enum class EGeometryScriptMathWarpType WarpType, const struct GeometryScriptingCore_GeometryScriptMathWarpOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyIterativeSmoothingToMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct GeometryScriptingCore_GeometryScriptIterativeMeshSmoothingOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyFlareWarpToMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptFlareWarpOptions& Options, const struct CoreUObject_Transform& FlareOrientation, float FlarePercentX, float FlarePercentY, float FlareExtent, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyDisplaceFromTextureMap(class UDynamicMesh* TargetMesh, class UTexture2D* Texture, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct GeometryScriptingCore_GeometryScriptDisplaceFromTextureOptions& Options, int32 UVLayer, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyDisplaceFromPerVertexVectors(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, float Magnitude, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyBendWarpToMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptBendWarpOptions& Options, const struct CoreUObject_Transform& BendOrientation, float BendAngle, float BendExtent, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshGeodesicFunctions
class UGeometryScriptLibrary_MeshGeodesicFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshGeodesicFunctions* GetDefaultObj();

	class UDynamicMesh* GetShortestVertexPath(class UDynamicMesh* TargetMesh, int32 StartVertexID, int32 EndVertexID, struct GeometryScriptingCore_GeometryScriptIndexList* VertexIDList, bool* bFoundErrors, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetShortestSurfacePath(class UDynamicMesh* TargetMesh, int32 StartTriangleID, const struct CoreUObject_Vector& StartBaryCoords, int32 EndTriangleID, const struct CoreUObject_Vector& EndBaryCoords, struct GeometryScriptingCore_GeometryScriptPolyPath* ShortestPath, bool* bFoundErrors, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CreateSurfacePath(class UDynamicMesh* TargetMesh, const struct CoreUObject_Vector& Direction, int32 StartTriangleID, const struct CoreUObject_Vector& StartBaryCoords, float MaxPathLength, struct GeometryScriptingCore_GeometryScriptPolyPath* SurfacePath, bool* bFoundErrors, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshMaterialFunctions* GetDefaultObj();

	class UDynamicMesh* SetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32 TriangleID, int32 MaterialID, bool* bIsValidTriangle, bool bDeferChangeNotifications);
	class UDynamicMesh* SetPolygroupMaterialID(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, int32 MaterialID, bool* bIsValidPolygroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMaterialIDOnTriangles(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptIndexList& TriangleIDList, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMaterialIDForMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptIndexList& TriangleMaterialIDList, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RemapMaterialIDs(class UDynamicMesh* TargetMesh, int32 FromMaterialID, int32 ToMaterialID, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, struct GeometryScriptingCore_GeometryScriptIndexList* TriangleIDList, class UGeometryScriptDebug* Debug);
	int32 GetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bIsValidTriangle);
	int32 GetMaxMaterialID(class UDynamicMesh* TargetMesh, bool* bHasMaterialIDs);
	class UDynamicMesh* GetMaterialIDsOfTriangles(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptIndexList& TriangleIDList, struct GeometryScriptingCore_GeometryScriptIndexList* MaterialIDList, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptIndexList* MaterialIDList, bool* bHasMaterialIDs);
	class UDynamicMesh* EnableMaterialIDs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* DeleteTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, int32* NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CompactMaterialIDs(class UDynamicMesh* TargetMesh, const TArray<class UMaterialInterface*>& SourceMaterialList, TArray<class UMaterialInterface*>* CompactedMaterialList, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ClearMaterialIDs(class UDynamicMesh* TargetMesh, int32 ClearValue, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
class UGeometryScriptLibrary_MeshModelingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshModelingFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyMeshShell(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshPolygroupBevel(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshBevelOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshOffsetFaces(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshOffsetFacesOptions& Options, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshOffset(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshLinearExtrudeFaces(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshLinearExtrudeOptions& Options, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshInsetOutsetFaces(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshInsetOutsetFacesOptions& Options, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshExtrudeOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshDuplicateFaces(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, struct GeometryScriptingCore_GeometryScriptMeshSelection* NewTriangles, const struct GeometryScriptingCore_GeometryScriptMeshEditPolygroupOptions& GroupOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshDisconnectFaces(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, bool bAllowBowtiesInOutput, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshBevelSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, enum class EGeometryScriptMeshBevelSelectionMode BevelMode, const struct GeometryScriptingCore_GeometryScriptMeshBevelSelectionOptions& BevelOptions, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshNormalsFunctions* GetDefaultObj();

	class UDynamicMesh* UpdateVertexNormal(class UDynamicMesh* TargetMesh, int32 VertexID, bool bUpdateNormal, const struct CoreUObject_Vector& NewNormal, bool bUpdateTangents, const struct CoreUObject_Vector& NewTangentX, const struct CoreUObject_Vector& NewTangentY, bool* bIsValidVertex, bool bMergeSplitValues, bool bDeferChangeNotifications);
	class UDynamicMesh* SetPerVertexNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetPerFaceNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMeshTriangleNormals(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct GeometryScriptingCore_GeometryScriptTriangle& Normals, bool* bIsValidTriangle, bool bDeferChangeNotifications);
	class UDynamicMesh* SetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptVectorList& TangentXList, const struct GeometryScriptingCore_GeometryScriptVectorList& TangentYList, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptVectorList& VertexNormalList, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RecomputeNormalsForMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct GeometryScriptingCore_GeometryScriptCalculateNormalsOptions& CalculateOptions, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RecomputeNormals(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptCalculateNormalsOptions& CalculateOptions, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetMeshPerVertexTangents(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptVectorList* TangentXList, struct GeometryScriptingCore_GeometryScriptVectorList* TangentYList, bool* bIsValidTangentSet, bool* bHasVertexIDGaps, bool bAverageSplitVertexValues);
	class UDynamicMesh* GetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptVectorList* NormalList, bool* bIsValidNormalSet, bool* bHasVertexIDGaps, bool bAverageSplitVertexValues);
	class UDynamicMesh* GetMeshHasTangents(class UDynamicMesh* TargetMesh, bool* bHasTangents, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* FlipNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* DiscardTangents(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputeTangents(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptTangentsOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputeSplitNormals(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptSplitNormalsOptions& SplitOptions, const struct GeometryScriptingCore_GeometryScriptCalculateNormalsOptions& CalculateOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AutoRepairNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
class UGeometryScriptLibrary_MeshPolygroupFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshPolygroupFunctions* GetDefaultObj();

	class UDynamicMesh* SetPolygroupForMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, int32* SetPolygroupIDOut, int32 SetPolygroupID, bool bGenerateNewPolygroup, bool bDeferChangeNotifications);
	class UDynamicMesh* SetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh, int32 NumLayers, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, struct GeometryScriptingCore_GeometryScriptIndexList& TriangleIDsOut);
	int32 GetTrianglePolygroupID(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, int32 TriangleID, bool* bIsValidTriangle);
	class UDynamicMesh* GetPolygroupIDsInMesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, struct GeometryScriptingCore_GeometryScriptIndexList& PolygroupIDsOut);
	class UDynamicMesh* GetAllTrianglePolygroupIDs(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, struct GeometryScriptingCore_GeometryScriptIndexList& PolygroupIDsOut);
	class UDynamicMesh* EnablePolygroups(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* DeleteTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, int32* NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyPolygroupsLayer(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& FromGroupLayer, const struct GeometryScriptingCore_GeometryScriptGroupLayer& ToGroupLayer, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ConvertUVIslandsToPolygroups(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, int32 UVLayer, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ConvertComponentsToPolygroups(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputePolygroupsFromPolygonDetection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32 MaxSearchRounds, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputePolygroupsFromAngleThreshold(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, float CreaseAngle, int32 MinGroupSize, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ClearPolygroups(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, int32 ClearValue, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshPrimitiveFunctions* GetDefaultObj();

	class UDynamicMesh* AppendVoronoiDiagram2D(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& VoronoiSites, const struct GeometryScriptingCore_GeometryScriptVoronoiOptions& VoronoiOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendTriangulatedPolygon(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PolygonVertices, bool bAllowSelfIntersections, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendTorus(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, const struct GeometryScriptingCore_GeometryScriptRevolveOptions& RevolveOptions, float MajorRadius, float MinorRadius, int32 MajorSteps, int32 MinorSteps, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendSweepPolyline(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PolylineVertices, TArray<struct CoreUObject_Transform>& SweepPath, TArray<float>& PolylineTexParamU, TArray<float>& SweepPathTexParamV, bool bLoop, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendSweepPolygon(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PolygonVertices, TArray<struct CoreUObject_Transform>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendSpiralRevolvePolygon(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PolygonVertices, const struct GeometryScriptingCore_GeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, float RisePerRevolution, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendSphereLatLong(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float Radius, int32 StepsPhi, int32 StepsTheta, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendSphereBox(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float Radius, int32 StepsX, int32 StepsY, int32 StepsZ, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendSimpleSweptPolygon(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PolygonVertices, TArray<struct CoreUObject_Vector>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendSimpleExtrudePolygon(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PolygonVertices, float Height, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendRoundRectangleXY(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendRoundRectangle_Compatibility_5_0(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendRevolvePolygon(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PolygonVertices, const struct GeometryScriptingCore_GeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendRevolvePath(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& PathVertices, const struct GeometryScriptingCore_GeometryScriptRevolveOptions& RevolveOptions, int32 Steps, bool bCapped, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendRectangleXY(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendRectangle_Compatibility_5_0(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendPolygonListTriangulation(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptPolygonsTriangulationOptions& TriangulationOptions, bool* bTriangulationError, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendLinearStairs(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float StepWidth, float StepHeight, float StepDepth, int32 NumSteps, bool bFloating, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendDisc(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float Radius, int32 AngleSteps, int32 SpokeSteps, float StartAngle, float EndAngle, float HoleRadius, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendDelaunayTriangulation2D(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, TArray<struct CoreUObject_Vector2D>& VertexPositions, TArray<struct CoreUObject_IntPoint>& ConstrainedEdges, const struct GeometryScriptingCore_GeometryScriptConstrainedDelaunayTriangulationOptions& TriangulationOptions, TArray<int32>* PositionsToVertexIDs, bool* bHasDuplicateVertices, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendCylinder(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float Radius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendCurvedStairs(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float StepWidth, float StepHeight, float InnerRadius, float CurveAngle, int32 NumSteps, bool bFloating, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendCone(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float BaseRadius, float TopRadius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendCapsule(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float Radius, float LineLength, int32 HemisphereSteps, int32 CircleSteps, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendBox(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, float DimensionX, float DimensionY, float DimensionZ, int32 StepsX, int32 StepsY, int32 StepsZ, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendBoundingBox(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPrimitiveOptions& PrimitiveOptions, const struct CoreUObject_Transform& Transform, const struct CoreUObject_Box& Box, int32 StepsX, int32 StepsY, int32 StepsZ, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshQueryFunctions* GetDefaultObj();

	bool IsValidVertexID(class UDynamicMesh* TargetMesh, int32 VertexID);
	bool IsValidTriangleID(class UDynamicMesh* TargetMesh, int32 TriangleID);
	struct CoreUObject_Vector GetVertexPosition(class UDynamicMesh* TargetMesh, int32 VertexID, bool* bIsValidVertex);
	int32 GetVertexCount(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* GetVertexConnectedVertices(class UDynamicMesh* TargetMesh, int32 VertexID, TArray<int32>* Vertices);
	class UDynamicMesh* GetVertexConnectedTriangles(class UDynamicMesh* TargetMesh, int32 VertexID, TArray<int32>* Triangles);
	struct CoreUObject_Box2D GetUVSetBoundingBox(class UDynamicMesh* TargetMesh, int32 UvSetIndex, bool* bIsValidUVSet, bool* bUVSetIsEmpty);
	class UDynamicMesh* GetTriangleVertexColors(class UDynamicMesh* TargetMesh, int32 TriangleID, struct CoreUObject_LinearColor* Color1, struct CoreUObject_LinearColor* Color2, struct CoreUObject_LinearColor* Color3, bool* bTriHasValidVertexColors);
	void GetTriangleUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, struct CoreUObject_Vector2D* UV1, struct CoreUObject_Vector2D* UV2, struct CoreUObject_Vector2D* UV3, bool* bHaveValidUVs);
	void GetTrianglePositions(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bIsValidTriangle, struct CoreUObject_Vector* Vertex1, struct CoreUObject_Vector* Vertex2, struct CoreUObject_Vector* Vertex3);
	class UDynamicMesh* GetTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bTriHasValidElements, struct GeometryScriptingCore_GeometryScriptTriangle* Normals, struct GeometryScriptingCore_GeometryScriptTriangle* Tangents, struct GeometryScriptingCore_GeometryScriptTriangle* BiTangents);
	class UDynamicMesh* GetTriangleNormals(class UDynamicMesh* TargetMesh, int32 TriangleID, struct CoreUObject_Vector* Normal1, struct CoreUObject_Vector* Normal2, struct CoreUObject_Vector* Normal3, bool* bTriHasValidNormals);
	struct CoreUObject_IntVector GetTriangleIndices(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bIsValidTriangle);
	struct CoreUObject_Vector GetTriangleFaceNormal(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bIsValidTriangle);
	int32 GetNumVertexIDs(class UDynamicMesh* TargetMesh);
	int32 GetNumUVSets(class UDynamicMesh* TargetMesh);
	int32 GetNumTriangleIDs(class UDynamicMesh* TargetMesh);
	int32 GetNumOpenBorderLoops(class UDynamicMesh* TargetMesh, bool* bAmbiguousTopologyFound);
	int32 GetNumOpenBorderEdges(class UDynamicMesh* TargetMesh);
	int32 GetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh);
	int32 GetNumConnectedComponents(class UDynamicMesh* TargetMesh);
	void GetMeshVolumeAreaCenter(class UDynamicMesh* TargetMesh, float* SurfaceArea, float* Volume, struct CoreUObject_Vector* CenterOfMass);
	void GetMeshVolumeArea(class UDynamicMesh* TargetMesh, float* SurfaceArea, float* Volume);
	class FString GetMeshInfoString(class UDynamicMesh* TargetMesh);
	bool GetMeshHasAttributeSet(class UDynamicMesh* TargetMesh);
	struct CoreUObject_Box GetMeshBoundingBox(class UDynamicMesh* TargetMesh);
	bool GetIsDenseMesh(class UDynamicMesh* TargetMesh);
	bool GetIsClosedMesh(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* GetInterpolatedTriangleVertexColor(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct CoreUObject_Vector& BarycentricCoords, const struct CoreUObject_LinearColor& DefaultColor, bool* bTriHasValidVertexColors, struct CoreUObject_LinearColor* InterpolatedColor);
	class UDynamicMesh* GetInterpolatedTriangleUV(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, const struct CoreUObject_Vector& BarycentricCoords, bool* bTriHasValidUVs, struct CoreUObject_Vector2D* InterpolatedUV);
	class UDynamicMesh* GetInterpolatedTrianglePosition(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct CoreUObject_Vector& BarycentricCoords, bool* bIsValidTriangle, struct CoreUObject_Vector* InterpolatedPosition);
	class UDynamicMesh* GetInterpolatedTriangleNormalTangents(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct CoreUObject_Vector& BarycentricCoords, bool* bTriHasValidElements, struct CoreUObject_Vector* InterpolatedNormal, struct CoreUObject_Vector* InterpolatedTangent, struct CoreUObject_Vector* InterpolatedBiTangent);
	class UDynamicMesh* GetInterpolatedTriangleNormal(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct CoreUObject_Vector& BarycentricCoords, bool* bTriHasValidNormals, struct CoreUObject_Vector* InterpolatedNormal);
	bool GetHasVertexIDGaps(class UDynamicMesh* TargetMesh);
	bool GetHasVertexColors(class UDynamicMesh* TargetMesh);
	bool GetHasTriangleNormals(class UDynamicMesh* TargetMesh);
	bool GetHasTriangleIDGaps(class UDynamicMesh* TargetMesh);
	bool GetHasPolygroups(class UDynamicMesh* TargetMesh);
	bool GetHasMaterialIDs(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* GetAllVertexPositions(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptVectorList* PositionList, bool bSkipGaps, bool* bHasVertexIDGaps);
	class UDynamicMesh* GetAllVertexIDs(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptIndexList* VertexIDList, bool* bHasVertexIDGaps);
	class UDynamicMesh* GetAllTriangleIndices(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptTriangleList* TriangleList, bool bSkipGaps, bool* bHasTriangleIDGaps);
	class UDynamicMesh* GetAllTriangleIDs(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptIndexList* TriangleIDList, bool* bHasTriangleIDGaps);
	class UDynamicMesh* GetAllSplitUVsAtVertex(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 VertexID, TArray<int32>* ElementIDs, TArray<struct CoreUObject_Vector2D>* ElementUVs, bool* bHaveValidUVs);
	class UDynamicMesh* ComputeTriangleBarycentricCoords(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bIsValidTriangle, const struct CoreUObject_Vector& Point, struct CoreUObject_Vector* Vertex1, struct CoreUObject_Vector* Vertex2, struct CoreUObject_Vector* Vertex3, struct CoreUObject_Vector* BarycentricCoords);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_RemeshingFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyUniformRemesh(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptRemeshOptions& RemeshOptions, const struct GeometryScriptingCore_GeometryScriptUniformRemeshOptions& UniformOptions, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshRepairFunctions* GetDefaultObj();

	class UDynamicMesh* WeldMeshEdges(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptWeldEdgesOptions& WeldOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SplitMeshBowties(class UDynamicMesh* TargetMesh, bool bMeshBowties, bool bAttributeBowties, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ResolveMeshTJunctions(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptResolveTJunctionOptions& ResolveOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RepairMeshDegenerateGeometry(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptDegenerateTriangleOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RemoveSmallComponents(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptRemoveSmallComponentOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RemoveHiddenTriangles(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptRemoveHiddenTrianglesOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* FillAllMeshHoles(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptFillHolesOptions& FillOptions, int32* NumFilledHoles, int32* NumFailedHoleFills, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CompactMesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSamplingFunctions
class UGeometryScriptLibrary_MeshSamplingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSamplingFunctions* GetDefaultObj();

	class UDynamicMesh* ComputeVertexWeightedPointSampling(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshPointSamplingOptions& Options, const struct GeometryScriptingCore_GeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, const struct GeometryScriptingCore_GeometryScriptScalarList& VertexWeights, TArray<struct CoreUObject_Transform>* Samples, TArray<double>* SampleRadii, struct GeometryScriptingCore_GeometryScriptIndexList* TriangleIDs, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputePointSampling(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshPointSamplingOptions& Options, TArray<struct CoreUObject_Transform>* Samples, struct GeometryScriptingCore_GeometryScriptIndexList* TriangleIDs, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputeNonUniformPointSampling(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshPointSamplingOptions& Options, const struct GeometryScriptingCore_GeometryScriptNonUniformPointSamplingOptions& NonUniformOptions, TArray<struct CoreUObject_Transform>* Samples, TArray<double>* SampleRadii, struct GeometryScriptingCore_GeometryScriptIndexList* TriangleIDs, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
class UGeometryScriptLibrary_MeshSelectionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionFunctions* GetDefaultObj();

	class UDynamicMesh* SelectMeshElementsWithPlane(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection, const struct CoreUObject_Vector& PlaneOrigin, const struct CoreUObject_Vector& PlaneNormal, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsInSphere(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection, const struct CoreUObject_Vector& SphereOrigin, double SphereRadius, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsInsideMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* SelectionMesh, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection, const struct CoreUObject_Transform& SelectionMeshTransform, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, double ShellDistance, double WindingThreshold, int32 MinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsInBox(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection, const struct CoreUObject_Box& Box, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsByNormalAngle(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection, const struct CoreUObject_Vector& Normal, double MaxAngleDeg, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
	class UDynamicMesh* InvertMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, struct GeometryScriptingCore_GeometryScriptMeshSelection* NewSelection, bool bOnlyToConnected);
	void GetMeshSelectionInfo(const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, enum class EGeometryScriptMeshSelectionType* SelectionType, int32* NumSelected);
	class UDynamicMesh* ExpandMeshSelectionToConnected(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, struct GeometryScriptingCore_GeometryScriptMeshSelection* NewSelection, enum class EGeometryScriptTopologyConnectionType ConnectionType);
	class UDynamicMesh* ExpandContractMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, struct GeometryScriptingCore_GeometryScriptMeshSelection* NewSelection, int32 Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours);
	void DebugPrintMeshSelection(const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, bool bDisable);
	class UDynamicMesh* CreateSelectAllMeshSelection(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection, enum class EGeometryScriptMeshSelectionType SelectionType);
	class UDynamicMesh* ConvertMeshSelectionToIndexList(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, struct GeometryScriptingCore_GeometryScriptIndexList* IndexList, enum class EGeometryScriptIndexType* ResultListType, enum class EGeometryScriptIndexType ConvertToType);
	class UDynamicMesh* ConvertMeshSelectionToIndexArray(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, TArray<int32>* IndexArray, enum class EGeometryScriptMeshSelectionType* SelectionType);
	class UDynamicMesh* ConvertMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& FromSelection, struct GeometryScriptingCore_GeometryScriptMeshSelection* ToSelection, enum class EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion);
	class UDynamicMesh* ConvertIndexSetToMeshSelection(class UDynamicMesh* TargetMesh, TSet<int32>& IndexSet, enum class EGeometryScriptMeshSelectionType SelectionType, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection);
	class UDynamicMesh* ConvertIndexListToMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptIndexList& IndexList, enum class EGeometryScriptMeshSelectionType SelectionType, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection);
	class UDynamicMesh* ConvertIndexArrayToMeshSelection(class UDynamicMesh* TargetMesh, TArray<int32>& IndexArray, enum class EGeometryScriptMeshSelectionType SelectionType, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection);
	void CombineMeshSelections(const struct GeometryScriptingCore_GeometryScriptMeshSelection& SelectionA, const struct GeometryScriptingCore_GeometryScriptMeshSelection& SelectionB, struct GeometryScriptingCore_GeometryScriptMeshSelection* ResultSelection, enum class EGeometryScriptCombineSelectionMode CombineMode);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
class UGeometryScriptLibrary_MeshSelectionQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSelectionQueryFunctions* GetDefaultObj();

	class UDynamicMesh* GetMeshSelectionBoundingBox(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, struct CoreUObject_Box* SelectionBounds, bool* bIsEmpty, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetMeshSelectionBoundaryLoops(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, TArray<struct GeometryScriptingCore_GeometryScriptIndexList>* IndexLoops, TArray<struct GeometryScriptingCore_GeometryScriptPolyPath>* PathLoops, int32* NumLoops, bool* bFoundErrors, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSimplifyFunctions* GetDefaultObj();

	class UDynamicMesh* ApplySimplifyToVertexCount(class UDynamicMesh* TargetMesh, int32 VertexCount, const struct GeometryScriptingCore_GeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplySimplifyToTriangleCount(class UDynamicMesh* TargetMesh, int32 TriangleCount, const struct GeometryScriptingCore_GeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplySimplifyToTolerance(class UDynamicMesh* TargetMesh, float Tolerance, const struct GeometryScriptingCore_GeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplySimplifyToPolygroupTopology(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPolygroupSimplifyOptions& Options, const struct GeometryScriptingCore_GeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplySimplifyToPlanar(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPlanarSimplifyOptions& Options, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
class UGeometryScriptLibrary_MeshSpatial : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSpatial* GetDefaultObj();

	class UDynamicMesh* SelectMeshElementsInBoxWithBVH(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH& QueryBVH, const struct CoreUObject_Box& QueryBox, const struct GeometryScriptingCore_GeometryScriptSpatialQueryOptions& Options, struct GeometryScriptingCore_GeometryScriptMeshSelection* Selection, enum class EGeometryScriptMeshSelectionType SelectionType, int32 MinNumTrianglePoints, class UGeometryScriptDebug* Debug);
	void ResetBVH(struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH& ResetBVH);
	class UDynamicMesh* RebuildBVHForMesh(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH& UpdateBVH, bool bOnlyIfInvalid, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* IsPointInsideMesh(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH& QueryBVH, const struct CoreUObject_Vector& QueryPoint, const struct GeometryScriptingCore_GeometryScriptSpatialQueryOptions& Options, bool* bIsInside, enum class EGeometryScriptContainmentOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* IsBVHValidForMesh(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH& TestBVH, bool* bIsValid, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* FindNearestRayIntersectionWithMesh(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH& QueryBVH, const struct CoreUObject_Vector& RayOrigin, const struct CoreUObject_Vector& RayDirection, const struct GeometryScriptingCore_GeometryScriptSpatialQueryOptions& Options, struct GeometryScriptingCore_GeometryScriptRayHitResult* HitResult, enum class EGeometryScriptSearchOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* FindNearestPointOnMesh(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH& QueryBVH, const struct CoreUObject_Vector& QueryPoint, const struct GeometryScriptingCore_GeometryScriptSpatialQueryOptions& Options, struct GeometryScriptingCore_GeometryScriptTrianglePoint* NearestResult, enum class EGeometryScriptSearchOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* BuildBVHForMesh(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptDynamicMeshBVH* OutputBVH, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
class UGeometryScriptLibrary_MeshSubdivideFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshSubdivideFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyUniformTessellation(class UDynamicMesh* TargetMesh, int32 TessellationLevel, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplySelectiveTessellation(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct GeometryScriptingCore_GeometryScriptSelectiveTessellateOptions& Options, int32 TessellationLevel, enum class ESelectiveTessellatePatternType PatternType, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyPNTessellation(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptPNTessellateOptions& Options, int32 TessellationLevel, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
class UGeometryScriptLibrary_MeshTransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshTransformFunctions* GetDefaultObj();

	class UDynamicMesh* TranslatePivotToLocation(class UDynamicMesh* TargetMesh, const struct CoreUObject_Vector& PivotLocation, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* TranslateMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct CoreUObject_Vector& Translation, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* TranslateMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_Vector& Translation, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* TransformMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct CoreUObject_Transform& Transform, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* TransformMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_Transform& Transform, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ScaleMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct CoreUObject_Vector& Scale, const struct CoreUObject_Vector& ScaleOrigin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ScaleMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_Vector& Scale, const struct CoreUObject_Vector& ScaleOrigin, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RotateMeshSelection(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct CoreUObject_Rotator& Rotation, const struct CoreUObject_Vector& RotationOrigin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RotateMesh(class UDynamicMesh* TargetMesh, const struct CoreUObject_Rotator& Rotation, const struct CoreUObject_Vector& RotationOrigin, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshUVFunctions* GetDefaultObj();

	class UDynamicMesh* TranslateMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct CoreUObject_Vector2D& Translation, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetNumUVSets(class UDynamicMesh* TargetMesh, int32 NumUVSets, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMeshUVsFromPlanarProjection(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct CoreUObject_Transform& PlaneTransform, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMeshUVsFromCylinderProjection(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct CoreUObject_Transform& CylinderTransform, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, float SplitAngle, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMeshUVsFromBoxProjection(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct CoreUObject_Transform& BoxTransform, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, int32 MinIslandTriCount, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMeshTriangleUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, const struct GeometryScriptingCore_GeometryScriptUVTriangle& UVs, bool* bIsValidTriangle, bool bDeferChangeNotifications);
	class UDynamicMesh* ScaleMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct CoreUObject_Vector2D& Scale, const struct CoreUObject_Vector2D& ScaleOrigin, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RotateMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, float RotationAngle, const struct CoreUObject_Vector2D& RotationOrigin, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RepackMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct GeometryScriptingCore_GeometryScriptRepackUVsOptions& RepackOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RecomputeMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct GeometryScriptingCore_GeometryScriptRecomputeUVsOptions& Options, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetMeshUVSizeInfo(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, double* MeshArea, double* UVArea, struct CoreUObject_Box* MeshBounds, struct CoreUObject_Box2D* UVBounds, bool* bIsValidUVSet, bool* bFoundUnsetUVs, bool bOnlyIncludeValidUVTris, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetMeshPerVertexUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, struct GeometryScriptingCore_GeometryScriptUVList* UVList, bool* bIsValidUVSet, bool* bHasVertexIDGaps, bool* bHasSplitUVs, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyUVSet(class UDynamicMesh* TargetMesh, int32 FromUVSet, int32 ToUVSet, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshUVLayerToMesh(class UDynamicMesh* CopyFromMesh, int32 UvSetIndex, class UDynamicMesh*& CopyToUVMesh, class UDynamicMesh** CopyToUVMeshOut, bool* bInvalidTopology, bool* bIsValidUVSet, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshToMeshUVLayer(class UDynamicMesh* CopyFromUVMesh, int32 ToUVSetIndex, class UDynamicMesh*& CopyToMesh, class UDynamicMesh** CopyToMeshOut, bool* bFoundTopologyErrors, bool* bIsValidUVSet, bool bOnlyUVPositions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputeMeshLocalUVParam(class UDynamicMesh* TargetMesh, const struct CoreUObject_Vector& CenterPoint, int32 CenterPointTriangleID, TArray<int32>* VertexIDs, TArray<struct CoreUObject_Vector2D>* VertexUVs, double Radius, bool bUseInterpolatedNormal, const struct CoreUObject_Vector& TangentYDirection, double UVRotationDeg, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AutoGenerateXAtlasMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct GeometryScriptingCore_GeometryScriptXAtlasOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct GeometryScriptingCore_GeometryScriptPatchBuilderOptions& Options, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshVertexColorFunctions* GetDefaultObj();

	class UDynamicMesh* SetMeshSelectionVertexColor(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, const struct CoreUObject_LinearColor& Color, const struct GeometryScriptingCore_GeometryScriptColorFlags& Flags, bool bCreateColorSeam, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMeshPerVertexColors(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptColorList& VertexColorList, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMeshConstantVertexColor(class UDynamicMesh* TargetMesh, const struct CoreUObject_LinearColor& Color, const struct GeometryScriptingCore_GeometryScriptColorFlags& Flags, bool bClearExisting, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetMeshPerVertexColors(class UDynamicMesh* TargetMesh, struct GeometryScriptingCore_GeometryScriptColorList* ColorList, bool* bIsValidColorSet, bool* bHasVertexIDGaps, bool bBlendSplitVertexValues);
	class UDynamicMesh* ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* BlurMeshVertexColors(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMeshSelection& Selection, int32 NumIterations, double Strength, enum class EGeometryScriptBlurColorMode BlurMode, const struct GeometryScriptingCore_GeometryScriptBlurMeshVertexColorsOptions& Options, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
class UGeometryScriptLibrary_MeshVoxelFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_MeshVoxelFunctions* GetDefaultObj();

	class UDynamicMesh* ApplyMeshSolidify(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptSolidifyOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshMorphology(class UDynamicMesh* TargetMesh, const struct GeometryScriptingCore_GeometryScriptMorphologyOptions& Options, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_SimplePolygonFunctions
class UGeometryScriptLibrary_SimplePolygonFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_SimplePolygonFunctions* GetDefaultObj();

	void SetPolygonVertex(struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon, int32 VertexIndex, const struct CoreUObject_Vector2D& Position, bool* bPolygonIsEmpty);
	int32 GetPolygonVertexCount(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon);
	struct CoreUObject_Vector2D GetPolygonVertex(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon, int32 VertexIndex, bool* bPolygonIsEmpty);
	struct CoreUObject_Vector2D GetPolygonTangent(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon, int32 VertexIndex, bool* bPolygonIsEmpty);
	struct CoreUObject_Box2D GetPolygonBounds(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon);
	double GetPolygonArea(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon);
	double GetPolygonArcLength(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon);
	void ConvertSplineToPolygon(class USplineComponent* Spline, struct GeometryScriptingCore_GeometryScriptSimplePolygon* Polygon, const struct GeometryScriptingCore_GeometryScriptSplineSamplingOptions& SamplingOptions, enum class EGeometryScriptAxis DropAxis);
	TArray<struct CoreUObject_Vector2D> Conv_GeometryScriptSimplePolygonToArrayOfVector2D(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon);
	TArray<struct CoreUObject_Vector> Conv_GeometryScriptSimplePolygonToArray(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon);
	struct GeometryScriptingCore_GeometryScriptSimplePolygon Conv_ArrayToGeometryScriptSimplePolygon(TArray<struct CoreUObject_Vector>& PathVertices);
	struct GeometryScriptingCore_GeometryScriptSimplePolygon Conv_ArrayOfVector2DToGeometryScriptSimplePolygon(TArray<struct CoreUObject_Vector2D>& PathVertices);
	int32 AddPolygonVertex(struct GeometryScriptingCore_GeometryScriptSimplePolygon& Polygon, const struct CoreUObject_Vector2D& Position);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_PolygonListFunctions
class UGeometryScriptLibrary_PolygonListFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_PolygonListFunctions* GetDefaultObj();

	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonsUnion(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, bool bCopyInputOnFailure);
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonsOffsets(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptions& OffsetOptions, double FirstOffset, double SecondOffset, bool* bOperationSuccess, bool bCopyInputOnFailure);
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonsOffset(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptions& OffsetOptions, double Offset, bool* bOperationSuccess, bool bCopyInputOnFailure);
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonsMorphologyOpen(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptions& OffsetOptions, double Offset, bool* bOperationSuccess, bool bCopyInputOnFailure);
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonsMorphologyClose(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptPolygonOffsetOptions& OffsetOptions, double Offset, bool* bOperationSuccess, bool bCopyInputOnFailure);
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonsIntersection(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonsToIntersect);
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonsExclusiveOr(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonsToExclusiveOr);
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList PolygonsDifference(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonsToSubtract);
	struct GeometryScriptingCore_GeometryScriptSimplePolygon GetSimplePolygon(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, bool* bValidIndices, int32 PolygonIndex, int32 HoleIndex);
	void GetPolygonVertices(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, TArray<struct CoreUObject_Vector2D>* OutVertices, bool* bValidIndices, int32 PolygonIndex, int32 HoleIndex);
	int32 GetPolygonVertexCount(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, bool* bValidIndices, int32 PolygonIndex, int32 HoleIndex);
	struct CoreUObject_Vector2D GetPolygonVertex(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, bool* bIsValidVertex, int32 VertexIndex, int32 PolygonIndex, int32 HoleIndex);
	struct CoreUObject_Box2D GetPolygonListBounds(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList);
	double GetPolygonListArea(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList);
	int32 GetPolygonHoleCount(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, bool* bValidIndex, int32 PolygonIndex);
	int32 GetPolygonCount(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList);
	struct CoreUObject_Box2D GetPolygonBounds(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, bool* bValidIndex, int32 PolygonIndex);
	double GetPolygonArea(const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, bool* bValidIndex, int32 PolygonIndex);
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList CreatePolygonsFromPathOffset(const TArray<struct CoreUObject_Vector2D>& Path, const struct GeometryScriptingCore_GeometryScriptOpenPathOffsetOptions& OffsetOptions, double Offset, bool* bOperationSuccess, bool bCopyInputOnFailure);
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList CreatePolygonsFromOpenPolyPathsOffset(const TArray<struct GeometryScriptingCore_GeometryScriptPolyPath>& PolyPaths, const struct GeometryScriptingCore_GeometryScriptOpenPathOffsetOptions& OffsetOptions, double Offset, bool* bOperationSuccess, bool bCopyInputOnFailure);
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList CreatePolygonListFromSinglePolygon(const struct GeometryScriptingCore_GeometryScriptSimplePolygon& OuterPolygon, TArray<struct GeometryScriptingCore_GeometryScriptSimplePolygon>& HolePolygons, bool bFixHoleOrientations);
	struct GeometryScriptingCore_GeometryScriptGeneralPolygonList CreatePolygonListFromSimplePolygons(TArray<struct GeometryScriptingCore_GeometryScriptSimplePolygon>& OuterPolygons);
	void AppendPolygonList(struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonsToAppend);
	int32 AddPolygonToList(struct GeometryScriptingCore_GeometryScriptGeneralPolygonList& PolygonList, const struct GeometryScriptingCore_GeometryScriptSimplePolygon& OuterPolygon, TArray<struct GeometryScriptingCore_GeometryScriptSimplePolygon>& HolePolygons, bool bFixHoleOrientations);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
class UGeometryScriptLibrary_PolyPathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_PolyPathFunctions* GetDefaultObj();

	void SampleSplineToTransforms(class USplineComponent* Spline, TArray<struct CoreUObject_Transform>* Frames, TArray<double>* FrameTimes, const struct GeometryScriptingCore_GeometryScriptSplineSamplingOptions& SamplingOptions, const struct CoreUObject_Transform& RelativeTransform, bool bIncludeScale);
	struct CoreUObject_Vector GetPolyPathVertex(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath, int32 Index, bool* bIsValidIndex);
	struct CoreUObject_Vector GetPolyPathTangent(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath, int32 Index, bool* bIsValidIndex);
	int32 GetPolyPathNumVertices(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath);
	int32 GetPolyPathLastIndex(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath);
	double GetPolyPathArcLength(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath);
	int32 GetNearestVertexIndex(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath, const struct CoreUObject_Vector& Point);
	struct GeometryScriptingCore_GeometryScriptPolyPath FlattenTo2DOnAxis(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath, enum class EGeometryScriptAxis DropAxis);
	struct GeometryScriptingCore_GeometryScriptPolyPath CreateCirclePath3D(const struct CoreUObject_Transform& Transform, float Radius, int32 NumPoints);
	struct GeometryScriptingCore_GeometryScriptPolyPath CreateCirclePath2D(const struct CoreUObject_Vector2D& Center, float Radius, int32 NumPoints);
	struct GeometryScriptingCore_GeometryScriptPolyPath CreateArcPath3D(const struct CoreUObject_Transform& Transform, float Radius, int32 NumPoints, float StartAngle, float EndAngle);
	struct GeometryScriptingCore_GeometryScriptPolyPath CreateArcPath2D(const struct CoreUObject_Vector2D& Center, float Radius, int32 NumPoints, float StartAngle, float EndAngle);
	void ConvertSplineToPolyPath(class USplineComponent* Spline, struct GeometryScriptingCore_GeometryScriptPolyPath* PolyPath, const struct GeometryScriptingCore_GeometryScriptSplineSamplingOptions& SamplingOptions);
	void ConvertPolyPathToArrayOfVector2D(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath, TArray<struct CoreUObject_Vector2D>* VertexArray);
	void ConvertPolyPathToArray(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath, TArray<struct CoreUObject_Vector>* VertexArray);
	void ConvertArrayToPolyPath(TArray<struct CoreUObject_Vector>& VertexArray, struct GeometryScriptingCore_GeometryScriptPolyPath* PolyPath);
	void ConvertArrayOfVector2DToPolyPath(TArray<struct CoreUObject_Vector2D>& VertexArray, struct GeometryScriptingCore_GeometryScriptPolyPath* PolyPath);
	TArray<struct CoreUObject_Vector2D> Conv_GeometryScriptPolyPathToArrayOfVector2D(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath);
	TArray<struct CoreUObject_Vector> Conv_GeometryScriptPolyPathToArray(const struct GeometryScriptingCore_GeometryScriptPolyPath& PolyPath);
	struct GeometryScriptingCore_GeometryScriptPolyPath Conv_ArrayToGeometryScriptPolyPath(TArray<struct CoreUObject_Vector>& PathVertices);
	struct GeometryScriptingCore_GeometryScriptPolyPath Conv_ArrayOfVector2DToGeometryScriptPolyPath(TArray<struct CoreUObject_Vector2D>& PathVertices);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
class UGeometryScriptLibrary_SceneUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_SceneUtilityFunctions* GetDefaultObj();

	void SetComponentMaterialList(class UPrimitiveComponent* Component, TArray<class UMaterialInterface*>& MaterialList, class UGeometryScriptDebug* Debug);
	class UDynamicMeshPool* CreateDynamicMeshPool();
	class UDynamicMesh* CopyMeshFromComponent(class USceneComponent* Component, class UDynamicMesh* ToDynamicMesh, const struct GeometryScriptingCore_GeometryScriptCopyMeshFromComponentOptions& Options, bool bTransformToWorld, struct CoreUObject_Transform* LocalToWorld, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyCollisionMeshesFromObject(class UObject* FromObject, class UDynamicMesh* ToDynamicMesh, bool bTransformToWorld, struct CoreUObject_Transform* LocalToWorld, enum class EGeometryScriptOutcomePins* Outcome, bool bUseComplexCollision, int32 SphereResolution, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TransformFunctions
class UGeometryScriptLibrary_TransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_TransformFunctions* GetDefaultObj();

	struct CoreUObject_Transform MakeTransformFromZAxis(const struct CoreUObject_Vector& Location, const struct CoreUObject_Vector& ZAxis);
	struct CoreUObject_Transform MakeTransformFromAxes(const struct CoreUObject_Vector& Location, const struct CoreUObject_Vector& ZAxis, const struct CoreUObject_Vector& TangentAxis, bool bTangentIsX);
	struct CoreUObject_Vector GetTransformAxisVector(const struct CoreUObject_Transform& Transform, enum class EGeometryScriptAxis Axis);
	struct CoreUObject_Ray GetTransformAxisRay(const struct CoreUObject_Transform& Transform, enum class EGeometryScriptAxis Axis);
	struct CoreUObject_Plane GetTransformAxisPlane(const struct CoreUObject_Transform& Transform, enum class EGeometryScriptAxis Axis);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RayFunctions
class UGeometryScriptLibrary_RayFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_RayFunctions* GetDefaultObj();

	struct CoreUObject_Ray MakeRayFromPoints(const struct CoreUObject_Vector& A, const struct CoreUObject_Vector& B);
	struct CoreUObject_Ray MakeRayFromPointDirection(const struct CoreUObject_Vector& Origin, const struct CoreUObject_Vector& Direction, bool bDirectionIsNormalized);
	struct CoreUObject_Ray GetTransformedRay(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Transform& Transform, bool bInvert);
	void GetRayStartEnd(const struct CoreUObject_Ray& Ray, double StartDistance, double EndDistance, struct CoreUObject_Vector* StartPoint, struct CoreUObject_Vector* EndPoint);
	bool GetRaySphereIntersection(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Vector& SphereCenter, double SphereRadius, double* Distance1, double* Distance2);
	double GetRaySegmentClosestPoint(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Vector& SegStartPoint, const struct CoreUObject_Vector& SegEndPoint, double* RayParameter, struct CoreUObject_Vector* RayPoint, struct CoreUObject_Vector* SegPoint);
	double GetRayPointDistance(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Vector& Point);
	struct CoreUObject_Vector GetRayPoint(const struct CoreUObject_Ray& Ray, double Distance);
	bool GetRayPlaneIntersection(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Plane& Plane, double* HitDistance);
	double GetRayParameter(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Vector& Point);
	double GetRayLineClosestPoint(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Vector& LineOrigin, const struct CoreUObject_Vector& LineDirection, double* RayParameter, struct CoreUObject_Vector* RayPoint, double* LineParameter, struct CoreUObject_Vector* LinePoint);
	struct CoreUObject_Vector GetRayClosestPoint(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Vector& Point);
	bool GetRayBoxIntersection(const struct CoreUObject_Ray& Ray, const struct CoreUObject_Box& Box, double* HitDistance);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_BoxFunctions
class UGeometryScriptLibrary_BoxFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_BoxFunctions* GetDefaultObj();

	bool TestPointInsideBox(const struct CoreUObject_Box& Box, const struct CoreUObject_Vector& Point, bool bConsiderOnBoxAsInside);
	bool TestBoxSphereIntersection(const struct CoreUObject_Box& Box, const struct CoreUObject_Vector& SphereCenter, double SphereRadius);
	bool TestBoxBoxIntersection(const struct CoreUObject_Box& Box1, const struct CoreUObject_Box& Box2);
	struct CoreUObject_Box MakeBoxFromCenterSize(const struct CoreUObject_Vector& Center, const struct CoreUObject_Vector& Dimensions);
	struct CoreUObject_Box MakeBoxFromCenterExtents(const struct CoreUObject_Vector& Center, const struct CoreUObject_Vector& Extents);
	struct CoreUObject_Box GetTransformedBox(const struct CoreUObject_Box& Box, const struct CoreUObject_Transform& Transform);
	struct CoreUObject_Box GetExpandedBox(const struct CoreUObject_Box& Box, const struct CoreUObject_Vector& ExpandBy);
	void GetBoxVolumeArea(const struct CoreUObject_Box& Box, double* Volume, double* SurfaceArea);
	double GetBoxPointDistance(const struct CoreUObject_Box& Box, const struct CoreUObject_Vector& Point);
	struct CoreUObject_Vector GetBoxFaceCenter(const struct CoreUObject_Box& Box, int32 FaceIndex, struct CoreUObject_Vector* FaceNormal);
	struct CoreUObject_Vector GetBoxCorner(const struct CoreUObject_Box& Box, int32 CornerIndex);
	void GetBoxCenterSize(const struct CoreUObject_Box& Box, struct CoreUObject_Vector* Center, struct CoreUObject_Vector* Dimensions);
	double GetBoxBoxDistance(const struct CoreUObject_Box& Box1, const struct CoreUObject_Box& Box2);
	struct CoreUObject_Vector FindClosestPointOnBox(const struct CoreUObject_Box& Box, const struct CoreUObject_Vector& Point, bool* bIsInside);
	struct CoreUObject_Box FindBoxBoxIntersection(const struct CoreUObject_Box& Box1, const struct CoreUObject_Box& Box2, bool* bIsIntersecting);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
class UGeometryScriptLibrary_TextureMapFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_TextureMapFunctions* GetDefaultObj();

	void SampleTextureRenderTarget2DAtUVPositions(const struct GeometryScriptingCore_GeometryScriptUVList& UVList, class UTextureRenderTarget2D* Texture, const struct GeometryScriptingCore_GeometryScriptSampleTextureOptions& SampleOptions, struct GeometryScriptingCore_GeometryScriptColorList* ColorList, class UGeometryScriptDebug* Debug);
	void SampleTexture2DAtUVPositions(const struct GeometryScriptingCore_GeometryScriptUVList& UVList, class UTexture2D* Texture, const struct GeometryScriptingCore_GeometryScriptSampleTextureOptions& SampleOptions, struct GeometryScriptingCore_GeometryScriptColorList* ColorList, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
class UGeometryScriptLibrary_VectorMathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UGeometryScriptLibrary_VectorMathFunctions* GetDefaultObj();

	struct GeometryScriptingCore_GeometryScriptScalarList VectorToScalar(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, double ConstantX, double ConstantY, double ConstantZ);
	void VectorNormalizeInPlace(struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, const struct CoreUObject_Vector& SetOnFailure);
	struct GeometryScriptingCore_GeometryScriptScalarList VectorLength(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList);
	struct GeometryScriptingCore_GeometryScriptScalarList VectorDot(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorListA, const struct GeometryScriptingCore_GeometryScriptVectorList& VectorListB);
	struct GeometryScriptingCore_GeometryScriptVectorList VectorCross(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorListA, const struct GeometryScriptingCore_GeometryScriptVectorList& VectorListB);
	void VectorBlendInPlace(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorListA, struct GeometryScriptingCore_GeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB);
	struct GeometryScriptingCore_GeometryScriptVectorList VectorBlend(const struct GeometryScriptingCore_GeometryScriptVectorList& VectorListA, const struct GeometryScriptingCore_GeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB);
	void ScalarVectorMultiplyInPlace(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, double ScalarMultiplier);
	struct GeometryScriptingCore_GeometryScriptVectorList ScalarVectorMultiply(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList, double ScalarMultiplier);
	void ScalarMultiplyInPlace(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListA, struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListB, double ConstantMultiplier);
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarMultiply(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListA, const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListB, double ConstantMultiplier);
	void ScalarInvertInPlace(struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon);
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarInvert(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon);
	void ScalarBlendInPlace(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListA, struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB);
	struct GeometryScriptingCore_GeometryScriptScalarList ScalarBlend(const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListA, const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB);
	void ConstantVectorMultiplyInPlace(double Constant, struct GeometryScriptingCore_GeometryScriptVectorList& VectorList);
	struct GeometryScriptingCore_GeometryScriptVectorList ConstantVectorMultiply(double Constant, const struct GeometryScriptingCore_GeometryScriptVectorList& VectorList);
	void ConstantScalarMultiplyInPlace(double Constant, struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList);
	struct GeometryScriptingCore_GeometryScriptScalarList ConstantScalarMultiply(double Constant, const struct GeometryScriptingCore_GeometryScriptScalarList& ScalarList);
};

}


