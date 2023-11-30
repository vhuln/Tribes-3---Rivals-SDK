#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.MeshCommandChangeTarget
class IMeshCommandChangeTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshCommandChangeTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.MeshReplacementCommandChangeTarget
class IMeshReplacementCommandChangeTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshReplacementCommandChangeTarget* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.MeshVertexCommandChangeTarget
class IMeshVertexCommandChangeTarget : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMeshVertexCommandChangeTarget* GetDefaultObj();

};

// 0x68 (0x610 - 0x5A8)
// Class GeometryFramework.BaseDynamicMeshComponent
class UBaseDynamicMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_CD4[0x20];                                     // Fixing Size After Last Property  
	bool                                         bExplicitShowWireframe;                            // 0x5C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CD8[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               WireframeColor;                                    // 0x5CC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicMeshComponentColorOverrideMode ColorMode;                                         // 0x5DC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDA[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_Color                     ConstantColor;                                     // 0x5E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicMeshVertexColorTransformMode ColorSpaceMode;                                    // 0x5E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableFlatShading;                                // 0x5E5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableViewModeOverrides;                          // 0x5E6(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDD[0x1];                                      // Fixing Size After Last Property  
	class UMaterialInterface*                    OverrideRenderMaterial;                            // 0x5E8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    SecondaryRenderMaterial;                           // 0x5F0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CDE[0x1];                                      // Fixing Size After Last Property  
	bool                                         bEnableRayTracing;                                 // 0x5F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CDF[0x6];                                      // Fixing Size After Last Property  
	TArray<class UMaterialInterface*>            BaseMaterials;                                     // 0x600(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBaseDynamicMeshComponent* GetDefaultObj();

	void SetViewModeOverridesEnabled(bool bEnabled);
	void SetVertexColorSpaceTransformMode(enum class EDynamicMeshVertexColorTransformMode NewMode);
	void SetShadowsEnabled(bool bEnabled);
	void SetSecondaryRenderMaterial(class UMaterialInterface* Material);
	void SetSecondaryBuffersVisibility(bool bSetVisible);
	void SetOverrideRenderMaterial(class UMaterialInterface* Material);
	void SetEnableWireframeRenderPass(bool bEnable);
	void SetEnableRaytracing(bool bSetEnabled);
	void SetEnableFlatShading(bool bEnable);
	void SetConstantOverrideColor(const struct CoreUObject_Color& NewColor);
	void SetColorOverrideMode(enum class EDynamicMeshComponentColorOverrideMode NewMode);
	bool HasOverrideRenderMaterial(int32 K);
	bool GetViewModeOverridesEnabled();
	enum class EDynamicMeshVertexColorTransformMode GetVertexColorSpaceTransformMode();
	bool GetShadowsEnabled();
	class UMaterialInterface* GetSecondaryRenderMaterial();
	bool GetSecondaryBuffersVisibility();
	class UMaterialInterface* GetOverrideRenderMaterial(int32 MaterialIndex);
	bool GetFlatShadingEnabled();
	bool GetEnableWireframeRenderPass();
	bool GetEnableRaytracing();
	class UDynamicMesh* GetDynamicMesh();
	struct CoreUObject_Color GetConstantOverrideColor();
	enum class EDynamicMeshComponentColorOverrideMode GetColorOverrideMode();
	void ClearSecondaryRenderMaterial();
	void ClearOverrideRenderMaterial();
};

// 0x260 (0x870 - 0x610)
// Class GeometryFramework.DynamicMeshComponent
class UDynamicMeshComponent : public UBaseDynamicMeshComponent
{
public:
	uint8                                        Pad_D5D[0x8];                                      // Fixing Size After Last Property  
	class UDynamicMesh*                          MeshObject;                                        // 0x618(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D63[0x130];                                    // Fixing Size After Last Property  
	enum class EDynamicMeshComponentTangentsMode TangentsType;                                      // 0x750(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D64[0x3F];                                     // Fixing Size After Last Property  
	enum class ECollisionTraceFlag               CollisionType;                                     // 0x790(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAsyncCooking;                                  // 0x791(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableComplexCollision;                           // 0x792(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeferCollisionUpdates;                            // 0x793(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6B[0x4];                                      // Fixing Size After Last Property  
	class UBodySetup*                            MeshBodySetup;                                     // 0x798(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D6E[0x38];                                     // Fixing Size After Last Property  
	struct Engine_KAggregateGeom                 AggGeom;                                           // 0x7D8(0x78)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x850(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_D71[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UDynamicMeshComponent* GetDefaultObj();

	bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);
	void UpdateCollision(bool bOnlyIfPending);
	void SetTangentsType(enum class EDynamicMeshComponentTangentsMode NewTangentsType);
	void SetDynamicMesh(class UDynamicMesh* NewMesh);
	void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);
	void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);
	void NotifyMeshVertexAttributesModified(bool bPositions, bool bNormals, bool bUVs, bool bColors);
	void NotifyMeshModified();
	enum class EDynamicMeshComponentTangentsMode GetTangentsTypePure();
	enum class EDynamicMeshComponentTangentsMode GetTangentsType();
	void EnableComplexAsSimpleCollision();
	void ConfigureMaterialSet(TArray<class UMaterialInterface*>& NewMaterialSet);
};

// 0x18 (0x2B0 - 0x298)
// Class GeometryFramework.DynamicMeshActor
class ADynamicMeshActor : public AActor
{
public:
	class UDynamicMeshComponent*                 DynamicMeshComponent;                              // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableComputeMeshPool;                            // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DAB[0x7];                                      // Fixing Size After Last Property  
	class UDynamicMeshPool*                      DynamicMeshPool;                                   // 0x2A8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ADynamicMeshActor* GetDefaultObj();

	bool ReleaseComputeMesh(class UDynamicMesh* Mesh);
	void ReleaseAllComputeMeshes();
	class UDynamicMeshComponent* GetDynamicMeshComponent();
	class UDynamicMeshPool* GetComputeMeshPool();
	void FreeAllComputeMeshes();
	class UDynamicMesh* AllocateComputeMesh();
};

// 0x0 (0x28 - 0x28)
// Class GeometryFramework.DynamicMeshGenerator
class UDynamicMeshGenerator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UDynamicMeshGenerator* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class GeometryFramework.DynamicMesh
class UDynamicMesh : public UObject
{
public:
	uint8                                        Pad_DE8[0x48];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            MeshModifiedBPEvent;                               // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_DED[0x20];                                     // Fixing Size After Last Property  
	class UDynamicMeshGenerator*                 MeshGenerator;                                     // 0xA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableMeshGenerator;                              // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF1[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UDynamicMesh* GetDefaultObj();

	class UDynamicMesh* ResetToCube();
	class UDynamicMesh* Reset();
	bool IsEmpty();
	int32 GetTriangleCount();
};

// 0x20 (0x48 - 0x28)
// Class GeometryFramework.DynamicMeshPool
class UDynamicMeshPool : public UObject
{
public:
	TArray<class UDynamicMesh*>                  CachedMeshes;                                      // 0x28(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UDynamicMesh*>                  AllCreatedMeshes;                                  // 0x38(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDynamicMeshPool* GetDefaultObj();

	void ReturnMesh(class UDynamicMesh* Mesh);
	void ReturnAllMeshes();
	class UDynamicMesh* RequestMesh();
	void FreeAllMeshes();
};

}


