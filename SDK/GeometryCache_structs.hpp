#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0xC0 - 0x0)
// ScriptStruct GeometryCache.TrackRenderData
struct GeometryCache_TrackRenderData
{
public:
	uint8                                        Pad_25C5[0xC0];                                    // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo
struct GeometryCache_GeometryCacheMeshBatchInfo
{
public:
	uint8                                        Pad_25D6[0xC];                                     // Fixing Size Of Struct 
};

// 0x9 (0x9 - 0x0)
// ScriptStruct GeometryCache.GeometryCacheVertexInfo
struct GeometryCache_GeometryCacheVertexInfo
{
public:
	uint8                                        Pad_25EB[0x9];                                     // Fixing Size Of Struct 
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct GeometryCache.GeometryCacheMeshData
struct GeometryCache_GeometryCacheMeshData
{
public:
	uint8                                        Pad_2609[0xC8];                                    // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GeometryCache.NiagaraGeometryCacheMICOverride
struct GeometryCache_NiagaraGeometryCacheMICOverride
{
public:
	class UMaterialInterface*                    OriginalMaterial;                                  // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*             ReplacementMaterial;                               // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GeometryCache.NiagaraGeometryCacheReference
struct GeometryCache_NiagaraGeometryCacheReference
{
public:
	class UGeometryCache*                        GeometryCache;                                     // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Niagara_NiagaraUserParameterBinding   GeometryCacheUserParamBinding;                     // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct GeometryCache_NiagaraGeometryCacheMICOverride> MICOverrideMaterials;                              // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}


