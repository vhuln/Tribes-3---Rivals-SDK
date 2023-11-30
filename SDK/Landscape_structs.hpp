#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELandscapeSetupErrors : uint8
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4,
};

enum class ERTDrawingType : uint8
{
	RTAtlas                        = 0,
	RTAtlasToNonAtlas              = 1,
	RTNonAtlasToAtlas              = 2,
	RTNonAtlas                     = 3,
	RTMips                         = 4,
	ERTDrawingType_MAX             = 5,
};

enum class EHeightmapRTType : uint8
{
	HeightmapRT_CombinedAtlas      = 0,
	HeightmapRT_CombinedNonAtlas   = 1,
	HeightmapRT_Scratch1           = 2,
	HeightmapRT_Scratch2           = 3,
	HeightmapRT_Scratch3           = 4,
	HeightmapRT_Mip1               = 5,
	HeightmapRT_Mip2               = 6,
	HeightmapRT_Mip3               = 7,
	HeightmapRT_Mip4               = 8,
	HeightmapRT_Mip5               = 9,
	HeightmapRT_Mip6               = 10,
	HeightmapRT_Mip7               = 11,
	HeightmapRT_Count              = 12,
	HeightmapRT_MAX                = 13,
};

enum class EWeightmapRTType : uint8
{
	WeightmapRT_Scratch_RGBA       = 0,
	WeightmapRT_Scratch1           = 1,
	WeightmapRT_Scratch2           = 2,
	WeightmapRT_Scratch3           = 3,
	WeightmapRT_Mip0               = 4,
	WeightmapRT_Mip1               = 5,
	WeightmapRT_Mip2               = 6,
	WeightmapRT_Mip3               = 7,
	WeightmapRT_Mip4               = 8,
	WeightmapRT_Mip5               = 9,
	WeightmapRT_Mip6               = 10,
	WeightmapRT_Mip7               = 11,
	WeightmapRT_Count              = 12,
	WeightmapRT_MAX                = 13,
};

enum class ELandscapeBlendMode : uint8
{
	LSBM_AdditiveBlend             = 0,
	LSBM_AlphaBlend                = 1,
	LSBM_MAX                       = 2,
};

enum class ELandscapeClearMode : uint8
{
	Clear_Weightmap                = 1,
	Clear_Heightmap                = 2,
	Clear_All                      = 3,
	Clear_MAX                      = 4,
};

enum class ELandscapeToolTargetType : uint8
{
	Heightmap                      = 0,
	Weightmap                      = 1,
	Visibility                     = 2,
	Invalid                        = 3,
	ELandscapeToolTargetType_MAX   = 4,
};

enum class ELandscapeGizmoType : uint8
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3,
};

enum class ELandscapeGizmoSnapType : uint8
{
	None                           = 0,
	Component                      = 1,
	Texel                          = 2,
	ELandscapeGizmoSnapType_MAX    = 3,
};

enum class EGrassScaling : uint8
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	EGrassScaling_MAX              = 3,
};

enum class ESplineModulationColorMask : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	ESplineModulationColorMask_MAX = 4,
};

enum class ELandscapeDirtyingMode : uint8
{
	Auto                           = 0,
	InLandscapeModeOnly            = 1,
	InLandscapeModeAndUserTriggeredChanges = 2,
	ELandscapeDirtyingMode_MAX     = 3,
};

enum class ELandscapeSplineMeshOrientation : uint8
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2,
};

enum class ELandscapeLayerBlendType : uint8
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3,
};

enum class ETerrainCoordMappingType : uint8
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4,
};

enum class ELandscapeCustomizedCoordType : uint8
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5,
};

enum class ELandscapeResizeMode : uint8
{
	Resample                       = 0,
	Clip                           = 1,
	Expand                         = 2,
	ELandscapeResizeMode_MAX       = 3,
};

enum class ELandscapeImportAlphamapType : uint8
{
	Additive                       = 0,
	Layered                        = 1,
	ELandscapeImportAlphamapType_MAX = 2,
};

enum class ELandscapeLayerPaintingRestriction : uint8
{
	None                           = 0,
	UseMaxLayers                   = 1,
	ExistingOnly                   = 2,
	UseComponentAllowList          = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4,
};

enum class ELandscapeLayerDisplayMode : uint8
{
	Default                        = 0,
	Alphabetical                   = 1,
	UserSpecific                   = 2,
	ELandscapeLayerDisplayMode_MAX = 3,
};

enum class ELandscapeLODFalloff : uint8
{
	Linear                         = 0,
	SquareRoot                     = 1,
	ELandscapeLODFalloff_MAX       = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeLayerBrush
struct Landscape_LandscapeLayerBrush
{
public:
	uint8                                        Pad_99A[0x1];                                      // Fixing Size Of Struct 
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Landscape.LandscapeLayer
struct Landscape_LandscapeLayer
{
public:
	struct CoreUObject_Guid                      Guid;                                              // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVisible;                                          // 0x18(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Blocked;                                           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A2[0x2];                                      // Fixing Size After Last Property  
	float                                        HeightmapAlpha;                                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeightmapAlpha;                                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeBlendMode               BlendMode;                                         // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A4[0x3];                                      // Fixing Size After Last Property  
	TArray<struct Landscape_LandscapeLayerBrush> Brushes;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend;                     // 0x38(0x50)(NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.LandscapeEditToolRenderData
struct Landscape_LandscapeEditToolRenderData
{
public:
	class UMaterialInterface*                    ToolMaterial;                                      // 0x0(0x8)(ZeroConstructor, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    GizmoMaterial;                                     // 0x8(0x8)(ZeroConstructor, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectedType;                                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DebugChannelR;                                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DebugChannelG;                                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DebugChannelB;                                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            DataTexture;                                       // 0x20(0x8)(ZeroConstructor, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            LayerContributionTexture;                          // 0x28(0x8)(ZeroConstructor, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            DirtyTexture;                                      // 0x30(0x8)(ZeroConstructor, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.WeightmapLayerAllocationInfo
struct Landscape_WeightmapLayerAllocationInfo
{
public:
	class ULandscapeLayerInfoObject*             LayerInfo;                                         // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WeightmapTextureIndex;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WeightmapTextureChannel;                           // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B6[0x6];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeComponentMaterialOverride
struct Landscape_LandscapeComponentMaterialOverride
{
public:
	struct Engine_PerPlatformInt                 LODIndex;                                          // 0x0(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C0[0x4];                                      // Fixing Size After Last Property  
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapePerLODMaterialOverride
struct Landscape_LandscapePerLODMaterialOverride
{
public:
	int32                                        LODIndex;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C6[0x4];                                      // Fixing Size After Last Property  
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Landscape.WeightmapData
struct Landscape_WeightmapData
{
public:
	TArray<class UTexture2D*>                    Textures;                                          // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct Landscape_WeightmapLayerAllocationInfo> LayerAllocations;                                  // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class ULandscapeWeightmapUsage*>      TextureUsages;                                     // 0x20(0x10)(ZeroConstructor, Transient, NonTransactional, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Landscape.HeightmapData
struct Landscape_HeightmapData
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.LandscapeLayerComponentData
struct Landscape_LandscapeLayerComponentData
{
public:
	struct Landscape_HeightmapData               HeightmapData;                                     // 0x0(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	struct Landscape_WeightmapData               WeightmapData;                                     // 0x8(0x30)(NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Landscape.GizmoSelectData
struct Landscape_GizmoSelectData
{
public:
	uint8                                        Pad_9D7[0x50];                                     // Fixing Size Of Struct 
};

// 0x1A8 (0x1A8 - 0x0)
// ScriptStruct Landscape.GrassVariety
struct Landscape_GrassVariety
{
public:
	class UStaticMesh*                           GrassMesh;                                         // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            OverrideMaterials;                                 // 0x8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct Engine_PerPlatformFloat               GrassDensity;                                      // 0x18(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DA[0x4];                                      // Fixing Size After Last Property  
	struct Engine_PerQualityLevelFloat           GrassDensityQuality;                               // 0x20(0x68)(Edit, NativeAccessSpecifierPublic)
	bool                                         bUseGrid;                                          // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DE[0x3];                                      // Fixing Size After Last Property  
	float                                        PlacementJitter;                                   // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_PerPlatformInt                 StartCullDistance;                                 // 0x90(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E2[0x4];                                      // Fixing Size After Last Property  
	struct Engine_PerQualityLevelInt             StartCullDistanceQuality;                          // 0x98(0x68)(Edit, NativeAccessSpecifierPublic)
	struct Engine_PerPlatformInt                 EndCullDistance;                                   // 0x100(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E6[0x4];                                      // Fixing Size After Last Property  
	struct Engine_PerQualityLevelInt             EndCullDistanceQuality;                            // 0x108(0x68)(Edit, NativeAccessSpecifierPublic)
	int32                                        MinLOD;                                            // 0x170(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGrassScaling                     Scaling;                                           // 0x174(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E9[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_FloatInterval             ScaleX;                                            // 0x178(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FloatInterval             ScaleY;                                            // 0x180(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FloatInterval             ScaleZ;                                            // 0x188(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RandomRotation;                                    // 0x190(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AlignToSurface;                                    // 0x191(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLandscapeLightmap;                             // 0x192(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_LightingChannels               LightingChannels;                                  // 0x193(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                         bReceivesDecals;                                   // 0x194(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAffectDistanceFieldLighting;                      // 0x195(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastDynamicShadow;                                // 0x196(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastContactShadow;                                // 0x197(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bKeepInstanceBufferCPUCopy;                        // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F4[0x3];                                      // Fixing Size After Last Property  
	uint32                                       InstanceWorldPositionOffsetDisableDistance;        // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EShadowCacheInvalidationBehavior  ShadowCacheInvalidationBehavior;                   // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F5[0x7];                                      // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
struct Landscape_LandscapeMaterialTextureStreamingInfo
{
public:
	class FName                                  TextureName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TexelFactor;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeSplineConnection
struct Landscape_LandscapeSplineConnection
{
public:
	class ULandscapeSplineSegment*               Segment;                                           // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        End : 1;                                           // Mask: 0x1, PropSize: 0x10x8(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9FF[0x7];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignControlPointData
struct Landscape_ForeignControlPointData
{
public:
	uint8                                        Pad_A01[0x1];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignSplineSegmentData
struct Landscape_ForeignSplineSegmentData
{
public:
	uint8                                        Pad_A04[0x1];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.ForeignWorldSplineData
struct Landscape_ForeignWorldSplineData
{
public:
	uint8                                        Pad_A08[0x1];                                      // Fixing Size Of Struct 
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct Landscape.LandscapeSplineInterpPoint
struct Landscape_LandscapeSplineInterpPoint
{
public:
	struct CoreUObject_Vector                    Center;                                            // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Left;                                              // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Right;                                             // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    FalloffLeft;                                       // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    FalloffRight;                                      // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LayerLeft;                                         // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LayerRight;                                        // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LayerFalloffLeft;                                  // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    LayerFalloffRight;                                 // 0xC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartEndFalloff;                                   // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A17[0x4];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Landscape.LandscapeSplineSegmentConnection
struct Landscape_LandscapeSplineSegmentConnection
{
public:
	class ULandscapeSplineControlPoint*          ControlPoint;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TangentLen;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0xC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1A[0x4];                                      // Fixing Size Of Struct 
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Landscape.LandscapeSplineMeshEntry
struct Landscape_LandscapeSplineMeshEntry
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            MaterialOverrides;                                 // 0x8(0x10)(Edit, ZeroConstructor, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        bCenterH : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_3E : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_A20[0x7];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  CenterAdjust;                                      // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleToWidth : 1;                                 // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_3F : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_A25[0x7];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Scale;                                             // 0x38(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeSplineMeshOrientation   Orientation;                                       // 0x50(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESplineMeshAxis                   ForwardAxis;                                       // 0x51(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESplineMeshAxis                   UpAxis;                                            // 0x52(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A2E[0x5];                                      // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.GrassInput
struct Landscape_GrassInput
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULandscapeGrassType*                   GrassType;                                         // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Input;                                             // 0x10(0x28)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Landscape.LayerBlendInput
struct Landscape_LayerBlendInput
{
public:
	class FName                                  LayerName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeLayerBlendType          BlendType;                                         // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A41[0x7];                                      // Fixing Size After Last Property  
	struct Engine_ExpressionInput                LayerInput;                                        // 0x10(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                HeightInput;                                       // 0x38(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        PreviewWeight;                                     // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A43[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector                    ConstLayerInput;                                   // 0x68(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ConstHeightInput;                                  // 0x80(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A44[0x4];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Landscape.LandscapeBrushParameters
struct Landscape_LandscapeBrushParameters
{
public:
	enum class ELandscapeToolTargetType          LayerType;                                         // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A49[0x7];                                      // Fixing Size After Last Property  
	class UTextureRenderTarget2D*                CombinedResult;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WeightmapLayerName;                                // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeInfoLayerSettings
struct Landscape_LandscapeInfoLayerSettings
{
public:
	class ULandscapeLayerInfoObject*             LayerInfoObj;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LayerName;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeEditorLayerSettings
struct Landscape_LandscapeEditorLayerSettings
{
public:
	uint8                                        Pad_A51[0x1];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Landscape.LandscapeLayerStruct
struct Landscape_LandscapeLayerStruct
{
public:
	class ULandscapeLayerInfoObject*             LayerInfoObj;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Landscape.LandscapeImportLayerInfo
struct Landscape_LandscapeImportLayerInfo
{
public:
	uint8                                        Pad_A55[0x1];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Landscape.LandscapeProxyMaterialOverride
struct Landscape_LandscapeProxyMaterialOverride
{
public:
	struct Engine_PerPlatformInt                 LODIndex;                                          // 0x0(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A58[0x4];                                      // Fixing Size After Last Property  
	class UMaterialInterface*                    Material;                                          // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Landscape.LandscapeTexture2DMipMap
struct Landscape_LandscapeTexture2DMipMap
{
public:
	int32                                        SizeX;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SizeY;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCompressed;                                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A5A[0x2F];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Landscape.PhysicalMaterialInput
struct Landscape_PhysicalMaterialInput
{
public:
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Input;                                             // 0x8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
};

}


