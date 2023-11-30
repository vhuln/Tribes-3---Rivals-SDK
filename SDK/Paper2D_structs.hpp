#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESpriteCollisionMode : uint8
{
	None                           = 0,
	Use2DPhysics                   = 1,
	Use3DPhysics                   = 2,
	ESpriteCollisionMode_MAX       = 3,
};

enum class ESpriteShapeType : uint8
{
	Box                            = 0,
	Circle                         = 1,
	Polygon                        = 2,
	ESpriteShapeType_MAX           = 3,
};

enum class ESpritePolygonMode : uint8
{
	SourceBoundingBox              = 0,
	TightBoundingBox               = 1,
	ShrinkWrapped                  = 2,
	FullyCustom                    = 3,
	Diced                          = 4,
	ESpritePolygonMode_MAX         = 5,
};

enum class ESpritePivotMode : uint8
{
	Top_Left                       = 0,
	Top_Center                     = 1,
	Top_Right                      = 2,
	Center_Left                    = 3,
	Center_Center                  = 4,
	Center_Right                   = 5,
	Bottom_Left                    = 6,
	Bottom_Center                  = 7,
	Bottom_Right                   = 8,
	Custom                         = 9,
	ESpritePivotMode_MAX           = 10,
};

enum class EFlipbookCollisionMode : uint8
{
	NoCollision                    = 0,
	FirstFrameCollision            = 1,
	EachFrameCollision             = 2,
	EFlipbookCollisionMode_MAX     = 3,
};

enum class EPaperSpriteAtlasPadding : uint8
{
	DilateBorder                   = 0,
	PadWithZero                    = 1,
	EPaperSpriteAtlasPadding_MAX   = 2,
};

enum class ETileMapProjectionMode : uint8
{
	Orthogonal                     = 0,
	IsometricDiamond               = 1,
	IsometricStaggered             = 2,
	HexagonalStaggered             = 3,
	ETileMapProjectionMode_MAX     = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct Paper2D.IntMargin
struct Paper2D_IntMargin
{
public:
	int32                                        Left;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Top;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Right;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Bottom;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct Paper2D.SpriteDrawCallRecord
struct Paper2D_SpriteDrawCallRecord
{
public:
	struct CoreUObject_Vector                    Destination;                                       // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              BaseTexture;                                       // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAD[0x30];                                     // Fixing Size After Last Property  
	struct CoreUObject_Color                     Color;                                             // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AAE[0xEC];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Paper2D.SpriteGeometryShape
struct Paper2D_SpriteGeometryShape
{
public:
	enum class ESpriteShapeType                  ShapeType;                                         // 0x0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB3[0x7];                                      // Fixing Size After Last Property  
	TArray<struct CoreUObject_Vector2D>          Vertices;                                          // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  BoxSize;                                           // 0x18(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  BoxPosition;                                       // 0x28(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rotation;                                          // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNegativeWinding;                                  // 0x3C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB6[0x3];                                      // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Paper2D.SpriteGeometryCollection
struct Paper2D_SpriteGeometryCollection
{
public:
	TArray<struct Paper2D_SpriteGeometryShape>   Shapes;                                            // 0x0(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class ESpritePolygonMode                GeometryType;                                      // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABB[0x3];                                      // Fixing Size After Last Property  
	int32                                        PixelsPerSubdivisionX;                             // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PixelsPerSubdivisionY;                             // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAvoidVertexMerging;                               // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC1[0x3];                                      // Fixing Size After Last Property  
	float                                        AlphaThreshold;                                    // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DetailAmount;                                      // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimplifyEpsilon;                                   // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC8[0x4];                                      // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Paper2D.SpriteAssetInitParameters
struct Paper2D_SpriteAssetInitParameters
{
public:
	uint8                                        Pad_ACC[0x40];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Paper2D.PaperFlipbookKeyFrame
struct Paper2D_PaperFlipbookKeyFrame
{
public:
	class UPaperSprite*                          Sprite;                                            // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameRun;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD0[0x4];                                      // Fixing Size Of Struct 
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Paper2D.SpriteInstanceData
struct Paper2D_SpriteInstanceData
{
public:
	struct CoreUObject_Matrix                    Transform;                                         // 0x0(0x80)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UPaperSprite*                          SourceSprite;                                      // 0x80(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     VertexColor;                                       // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIndex;                                     // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Paper2D.PaperSpriteSocket
struct Paper2D_PaperSpriteSocket
{
public:
	struct CoreUObject_Transform                 LocalTransform;                                    // 0x0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADA[0x8];                                      // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Paper2D.PaperSpriteAtlasSlot
struct Paper2D_PaperSpriteAtlasSlot
{
public:
	TSoftObjectPtr<class UPaperSprite>           SpriteRef;                                         // 0x0(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AtlasIndex;                                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        X;                                                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ADD[0x4];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Paper2D.PaperTileInfo
struct Paper2D_PaperTileInfo
{
public:
	class UPaperTileSet*                         TileSet;                                           // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PackedTileIndex;                                   // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE3[0x4];                                      // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Paper2D.PaperTileMetadata
struct Paper2D_PaperTileMetadata
{
public:
	class FName                                  UserDataName;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Paper2D_SpriteGeometryCollection      CollisionData;                                     // 0x8(0x30)(Edit, NativeAccessSpecifierPublic)
	uint8                                        TerrainMembership[0x4];                            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AE7[0x4];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Paper2D.PaperTileSetTerrain
struct Paper2D_PaperTileSetTerrain
{
public:
	class FString                                TerrainName;                                       // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CenterTileIndex;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AED[0x4];                                      // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Paper2D.PaperTerrainMaterialRule
struct Paper2D_PaperTerrainMaterialRule
{
public:
	class UPaperSprite*                          StartCap;                                          // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPaperSprite*>                  Body;                                              // 0x8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UPaperSprite*                          EndCap;                                            // 0x18(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumAngle;                                      // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumAngle;                                      // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCollision;                                  // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF3[0x3];                                      // Fixing Size After Last Property  
	float                                        CollisionOffset;                                   // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DrawOrder;                                         // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF4[0x4];                                      // Fixing Size Of Struct 
};

}


