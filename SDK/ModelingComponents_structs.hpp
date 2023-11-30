#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EBakeTextureResolution : uint8
{
	Resolution16                   = 16,
	Resolution32                   = 32,
	Resolution64                   = 64,
	Resolution128                  = 128,
	Resolution256                  = 256,
	Resolution512                  = 512,
	Resolution1024                 = 1024,
	Resolution2048                 = 2048,
	Resolution4096                 = 4096,
	Resolution8192                 = 8192,
	EBakeTextureResolution_MAX     = 8193,
};

enum class EBakeTextureBitDepth : uint8
{
	ChannelBits8                   = 0,
	ChannelBits16                  = 1,
	EBakeTextureBitDepth_MAX       = 2,
};

enum class EBakeTextureSamplesPerPixel : uint8
{
	Sample1                        = 1,
	Sample4                        = 4,
	Sample16                       = 16,
	Sample64                       = 64,
	Sample256                      = 256,
	EBakeTextureSamplesPerPixel_MAX = 257,
};

enum class EGeometrySelectionElementType : uint8
{
	Vertex                         = 1,
	Edge                           = 2,
	Face                           = 4,
	EGeometrySelectionElementType_MAX = 5,
};

enum class EGeometrySelectionTopologyType : uint8
{
	Triangle                       = 1,
	Polygroup                      = 2,
	EGeometrySelectionTopologyType_MAX = 3,
};

enum class EBaseCreateFromSelectedTargetType : int32
{
	NewObject                      = 0,
	FirstInputObject               = 1,
	LastInputObject                = 2,
	EBaseCreateFromSelectedTargetType_MAX = 3,
};

enum class EUVLayoutPreviewSide : int32
{
	Left                           = 0,
	Right                          = 1,
	EUVLayoutPreviewSide_MAX       = 2,
};

enum class ESpaceCurveControlPointTransformMode : int32
{
	Shared                         = 0,
	PerVertex                      = 1,
	ESpaceCurveControlPointTransformMode_MAX = 2,
};

enum class ESpaceCurveControlPointOriginMode : int32
{
	Shared                         = 0,
	First                          = 1,
	Last                           = 2,
	ESpaceCurveControlPointOriginMode_MAX = 3,
};

enum class ESpaceCurveControlPointFalloffType : int32
{
	Linear                         = 0,
	Smooth                         = 1,
	ESpaceCurveControlPointFalloffType_MAX = 2,
};

enum class EModelingComponentsPlaneVisualizationMode : uint8
{
	SimpleGrid                     = 0,
	HierarchicalGrid               = 1,
	FixedScreenAreaGrid            = 2,
	EModelingComponentsPlaneVisualizationMode_MAX = 3,
};

enum class ECreateModelingObjectResult : uint8
{
	Ok                             = 0,
	Cancelled                      = 1,
	Failed_Unknown                 = 2,
	Failed_NoAPIFound              = 3,
	Failed_InvalidWorld            = 4,
	Failed_InvalidMesh             = 5,
	Failed_InvalidTexture          = 6,
	Failed_AssetCreationFailed     = 7,
	Failed_ActorCreationFailed     = 8,
	Failed_InvalidMaterial         = 9,
	ECreateModelingObjectResult_MAX = 10,
};

enum class ECreateMeshObjectSourceMeshType : uint8
{
	MeshDescription                = 0,
	DynamicMesh                    = 1,
	ECreateMeshObjectSourceMeshType_MAX = 2,
};

enum class ECreateObjectTypeHint : uint8
{
	Undefined                      = 0,
	StaticMesh                     = 1,
	Volume                         = 2,
	DynamicMeshActor               = 3,
	ECreateObjectTypeHint_MAX      = 4,
};

enum class EHandleSourcesMethod : uint8
{
	DeleteSources                  = 0,
	HideSources                    = 1,
	KeepSources                    = 2,
	KeepFirstSource                = 3,
	KeepLastSource                 = 4,
	EHandleSourcesMethod_MAX       = 5,
};

enum class EMultiTransformerMode : uint8
{
	DefaultGizmo                   = 1,
	QuickAxisTranslation           = 2,
	EMultiTransformerMode_MAX      = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x3 (0x3 - 0x0)
// ScriptStruct ModelingComponents.ModelingToolsAxisFilter
struct ModelingComponents_ModelingToolsAxisFilter
{
public:
	bool                                         bAxisX;                                            // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAxisY;                                            // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAxisZ;                                            // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ModelingComponents.ModelingToolsColorChannelFilter
struct ModelingComponents_ModelingToolsColorChannelFilter
{
public:
	bool                                         bRed;                                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGreen;                                            // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlue;                                             // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlpha;                                            // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ModelingComponents.RenderableTriangleVertex
struct ModelingComponents_RenderableTriangleVertex
{
public:
	struct CoreUObject_Vector                    Position;                                          // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  UV;                                                // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Normal;                                            // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     Color;                                             // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83B[0x4];                                      // Fixing Size Of Struct 
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct ModelingComponents.RenderableTriangle
struct ModelingComponents_RenderableTriangle
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct ModelingComponents_RenderableTriangleVertex Vertex0;                                           // 0x8(0x48)(NoDestructor, NativeAccessSpecifierPublic)
	struct ModelingComponents_RenderableTriangleVertex Vertex1;                                           // 0x50(0x48)(NoDestructor, NativeAccessSpecifierPublic)
	struct ModelingComponents_RenderableTriangleVertex Vertex2;                                           // 0x98(0x48)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x670 (0x670 - 0x0)
// ScriptStruct ModelingComponents.CreateMeshObjectParams
struct ModelingComponents_CreateMeshObjectParams
{
public:
	class UPrimitiveComponent*                   SourceComponent;                                   // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECreateObjectTypeHint             TypeHint;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_84D[0x7];                                      // Fixing Size After Last Property  
	TSubclassOf<class UObject>                   TypeHintClass;                                     // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TypeHintExtended;                                  // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_854[0x4];                                      // Fixing Size After Last Property  
	class UWorld*                                TargetWorld;                                       // 0x20(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_857[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x30(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BaseName;                                          // 0x90(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            Materials;                                         // 0xA0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            AssetMaterials;                                    // 0xB0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bEnableCollision;                                  // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionTraceFlag               CollisionMode;                                     // 0xC1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85E[0x5E];                                     // Fixing Size After Last Property  
	bool                                         bEnableRaytracingSupport;                          // 0x120(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateLightmapUVs;                              // 0x121(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRecomputeNormals;                           // 0x122(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRecomputeTangents;                          // 0x123(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableNanite;                                     // 0x124(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_864[0x3];                                      // Fixing Size After Last Property  
	float                                        NaniteProxyTrianglePercent;                        // 0x128(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_866[0x4];                                      // Fixing Size After Last Property  
	struct Engine_MeshNaniteSettings             NaniteSettings;                                    // 0x130(0x40)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_86A[0x500];                                    // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ModelingComponents.CreateMeshObjectResult
struct ModelingComponents_CreateMeshObjectResult
{
public:
	enum class ECreateModelingObjectResult       ResultCode;                                        // 0x0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86D[0x7];                                      // Fixing Size After Last Property  
	class AActor*                                NewActor;                                          // 0x8(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   NewComponent;                                      // 0x10(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               NewAsset;                                          // 0x18(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ModelingComponents.CreateTextureObjectParams
struct ModelingComponents_CreateTextureObjectParams
{
public:
	int32                                        TypeHintExtended;                                  // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_874[0x4];                                      // Fixing Size After Last Property  
	class UWorld*                                TargetWorld;                                       // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               StoreRelativeToObject;                             // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BaseName;                                          // 0x18(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            GeneratedTransientTexture;                         // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ModelingComponents.CreateTextureObjectResult
struct ModelingComponents_CreateTextureObjectResult
{
public:
	enum class ECreateModelingObjectResult       ResultCode;                                        // 0x0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_87F[0x7];                                      // Fixing Size After Last Property  
	class UObject*                               NewAsset;                                          // 0x8(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ModelingComponents.CreateMaterialObjectParams
struct ModelingComponents_CreateMaterialObjectParams
{
public:
	class UWorld*                                TargetWorld;                                       // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               StoreRelativeToObject;                             // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BaseName;                                          // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    MaterialToDuplicate;                               // 0x20(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ModelingComponents.CreateMaterialObjectResult
struct ModelingComponents_CreateMaterialObjectResult
{
public:
	enum class ECreateModelingObjectResult       ResultCode;                                        // 0x0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_886[0x7];                                      // Fixing Size After Last Property  
	class UObject*                               NewAsset;                                          // 0x8(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ModelingComponents.CreateActorParams
struct ModelingComponents_CreateActorParams
{
public:
	class UWorld*                                TargetWorld;                                       // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BaseName;                                          // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88C[0x8];                                      // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x20(0x60)(Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TemplateActor;                                     // 0x80(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_892[0x8];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ModelingComponents.CreateActorResult
struct ModelingComponents_CreateActorResult
{
public:
	enum class ECreateModelingObjectResult       ResultCode;                                        // 0x0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89A[0x7];                                      // Fixing Size After Last Property  
	class AActor*                                NewActor;                                          // 0x8(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


