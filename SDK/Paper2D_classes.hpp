#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x680 - 0x678)
// Class Paper2D.PaperCharacter
class APaperCharacter : public ACharacter
{
public:
	class UPaperFlipbookComponent*               Sprite;                                            // 0x678(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APaperCharacter* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class Paper2D.PaperFlipbook
class UPaperFlipbook : public UObject
{
public:
	float                                        FramesPerSecond;                                   // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5B0[0x4];                                      // Fixing Size After Last Property  
	TArray<struct Paper2D_PaperFlipbookKeyFrame> KeyFrames;                                         // 0x30(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    DefaultMaterial;                                   // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFlipbookCollisionMode            CollisionSource;                                   // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5B7[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPaperFlipbook* GetDefaultObj();

	bool IsValidKeyFrameIndex(int32 Index);
	float GetTotalDuration();
	class UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);
	class UPaperSprite* GetSpriteAtFrame(int32 FrameIndex);
	int32 GetNumKeyFrames();
	int32 GetNumFrames();
	int32 GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
};

// 0x8 (0x2A0 - 0x298)
// Class Paper2D.PaperFlipbookActor
class APaperFlipbookActor : public AActor
{
public:
	class UPaperFlipbookComponent*               RenderComponent;                                   // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APaperFlipbookActor* GetDefaultObj();

};

// 0x48 (0x5F0 - 0x5A8)
// Class Paper2D.PaperFlipbookComponent
class UPaperFlipbookComponent : public UMeshComponent
{
public:
	class UPaperFlipbook*                        SourceFlipbook;                                    // 0x5A8(0x8)(Edit, Net, ZeroConstructor, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    Material;                                          // 0x5B0(0x8)(ZeroConstructor, Deprecated, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlayRate;                                          // 0x5B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLooping : 1;                                      // Mask: 0x1, PropSize: 0x10x5BC(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bReversePlayback : 1;                              // Mask: 0x2, PropSize: 0x10x5BC(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bPlaying : 1;                                      // Mask: 0x4, PropSize: 0x10x5BC(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_31 : 5;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_702[0x3];                                      // Fixing Size After Last Property  
	float                                        AccumulatedTime;                                   // 0x5C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CachedFrameIndex;                                  // 0x5C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_LinearColor               SpriteColor;                                       // 0x5C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBodySetup*                            CachedBodySetup;                                   // 0x5D8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnFinishedPlaying;                                 // 0x5E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPaperFlipbookComponent* GetDefaultObj();

	void Stop();
	void SetSpriteColor(const struct CoreUObject_LinearColor& NewColor);
	void SetPlayRate(float NewRate);
	void SetPlaybackPositionInFrames(int32 NewFramePosition, bool bFireEvents);
	void SetPlaybackPosition(float NewPosition, bool bFireEvents);
	void SetNewTime(float NewTime);
	void SetLooping(bool bNewLooping);
	bool SetFlipbook(class UPaperFlipbook* NewFlipbook);
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	struct CoreUObject_LinearColor GetSpriteColor();
	float GetPlayRate();
	int32 GetPlaybackPositionInFrames();
	float GetPlaybackPosition();
	int32 GetFlipbookLengthInFrames();
	float GetFlipbookLength();
	float GetFlipbookFramerate();
	class UPaperFlipbook* GetFlipbook();
};

// 0x8 (0x2A0 - 0x298)
// Class Paper2D.PaperGroupedSpriteActor
class APaperGroupedSpriteActor : public AActor
{
public:
	class UPaperGroupedSpriteComponent*          RenderComponent;                                   // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APaperGroupedSpriteActor* GetDefaultObj();

};

// 0x38 (0x5E0 - 0x5A8)
// Class Paper2D.PaperGroupedSpriteComponent
class UPaperGroupedSpriteComponent : public UMeshComponent
{
public:
	TArray<class UMaterialInterface*>            InstanceMaterials;                                 // 0x5A8(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct Paper2D_SpriteInstanceData>    PerInstanceSpriteData;                             // 0x5B8(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_78D[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPaperGroupedSpriteComponent* GetDefaultObj();

	bool UpdateInstanceTransform(int32 InstanceIndex, struct CoreUObject_Transform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	bool UpdateInstanceColor(int32 InstanceIndex, const struct CoreUObject_LinearColor& NewInstanceColor, bool bMarkRenderStateDirty);
	void SortInstancesAlongAxis(const struct CoreUObject_Vector& WorldSpaceSortAxis);
	bool RemoveInstance(int32 InstanceIndex);
	bool GetInstanceTransform(int32 InstanceIndex, struct CoreUObject_Transform* OutInstanceTransform, bool bWorldSpace);
	int32 GetInstanceCount();
	void ClearInstances();
	int32 AddInstance(struct CoreUObject_Transform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, const struct CoreUObject_LinearColor& Color);
};

// 0x8 (0x30 - 0x28)
// Class Paper2D.PaperRuntimeSettings
class UPaperRuntimeSettings : public UObject
{
public:
	bool                                         bEnableSpriteAtlasGroups;                          // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableTerrainSplineEditing;                       // 0x29(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResizeSpriteDataToMatchTextures;                  // 0x2A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_798[0x5];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPaperRuntimeSettings* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class Paper2D.PaperSprite
class UPaperSprite : public UObject
{
public:
	uint8                                        Pad_79F[0x10];                                     // Fixing Size After Last Property  
	TArray<class UTexture*>                      AdditionalSourceTextures;                          // 0x38(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector2D                  BakedSourceUV;                                     // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector2D                  BakedSourceDimension;                              // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            BakedSourceTexture;                                // 0x68(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    DefaultMaterial;                                   // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    AlternateMaterial;                                 // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct Paper2D_PaperSpriteSocket>     Sockets;                                           // 0x80(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	enum class ESpriteCollisionMode              SpriteCollisionDomain;                             // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_7AB[0x3];                                      // Fixing Size After Last Property  
	float                                        PixelsPerUnrealUnit;                               // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBodySetup*                            BodySetup;                                         // 0x98(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AlternateMaterialSplitIndex;                       // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B0[0x4];                                      // Fixing Size After Last Property  
	TArray<struct CoreUObject_Vector4>           BakedRenderData;                                   // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPaperSprite* GetDefaultObj();

};

// 0x8 (0x2A0 - 0x298)
// Class Paper2D.PaperSpriteActor
class APaperSpriteActor : public AActor
{
public:
	class UPaperSpriteComponent*                 RenderComponent;                                   // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APaperSpriteActor* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Paper2D.PaperSpriteAtlas
class UPaperSpriteAtlas : public UObject
{
public:

	static class UClass* StaticClass();
	static class UPaperSpriteAtlas* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Paper2D.PaperSpriteBlueprintLibrary
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UPaperSpriteBlueprintLibrary* GetDefaultObj();

	struct SlateCore_SlateBrush MakeBrushFromSprite(class UPaperSprite* Sprite, int32 Width, int32 Height);
};

// 0x28 (0x5D0 - 0x5A8)
// Class Paper2D.PaperSpriteComponent
class UPaperSpriteComponent : public UMeshComponent
{
public:
	class UPaperSprite*                          SourceSprite;                                      // 0x5A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    MaterialOverride;                                  // 0x5B0(0x8)(ZeroConstructor, Deprecated, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_LinearColor               SpriteColor;                                       // 0x5B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_80E[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPaperSpriteComponent* GetDefaultObj();

	void SetSpriteColor(const struct CoreUObject_LinearColor& NewColor);
	bool SetSprite(class UPaperSprite* NewSprite);
	class UPaperSprite* GetSprite();
};

// 0x70 (0x98 - 0x28)
// Class Paper2D.PaperTileLayer
class UPaperTileLayer : public UObject
{
public:
	class FText                                  LayerName;                                         // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        LayerWidth;                                        // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        LayerHeight;                                       // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHiddenInGame : 1;                                 // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bLayerCollides : 1;                                // Mask: 0x2, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideCollisionThickness : 1;                   // Mask: 0x4, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideCollisionOffset : 1;                      // Mask: 0x8, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_3A : 4;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_82E[0x3];                                      // Fixing Size After Last Property  
	float                                        CollisionThicknessOverride;                        // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CollisionOffsetOverride;                           // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_LinearColor               LayerColor;                                        // 0x54(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedWidth;                                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedHeight;                                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_838[0x4];                                      // Fixing Size After Last Property  
	TArray<struct Paper2D_PaperTileInfo>         AllocatedCells;                                    // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UPaperTileSet*                         TileSet;                                           // 0x80(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<int32>                                AllocatedGrid;                                     // 0x88(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPaperTileLayer* GetDefaultObj();

};

// 0x80 (0xA8 - 0x28)
// Class Paper2D.PaperTileMap
class UPaperTileMap : public UObject
{
public:
	int32                                        MapWidth;                                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MapHeight;                                         // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TileWidth;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TileHeight;                                        // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PixelsPerUnrealUnit;                               // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SeparationPerTileX;                                // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SeparationPerTileY;                                // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SeparationPerLayer;                                // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperTileSet>          SelectedTileSet;                                   // 0x48(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPaperTileLayer*>               TileLayers;                                        // 0x78(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        CollisionThickness;                                // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpriteCollisionMode              SpriteCollisionDomain;                             // 0x8C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETileMapProjectionMode            ProjectionMode;                                    // 0x8D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_861[0x2];                                      // Fixing Size After Last Property  
	int32                                        HexSideLength;                                     // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_863[0x4];                                      // Fixing Size After Last Property  
	class UBodySetup*                            BodySetup;                                         // 0x98(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LayerNameIndex;                                    // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_868[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPaperTileMap* GetDefaultObj();

};

// 0x8 (0x2A0 - 0x298)
// Class Paper2D.PaperTileMapActor
class APaperTileMapActor : public AActor
{
public:
	class UPaperTileMapComponent*                RenderComponent;                                   // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APaperTileMapActor* GetDefaultObj();

};

// 0x58 (0x600 - 0x5A8)
// Class Paper2D.PaperTileMapComponent
class UPaperTileMapComponent : public UMeshComponent
{
public:
	int32                                        MapWidth;                                          // 0x5A8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MapHeight;                                         // 0x5AC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TileWidth;                                         // 0x5B0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TileHeight;                                        // 0x5B4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTileSet*                         DefaultLayerTileSet;                               // 0x5B8(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    Material;                                          // 0x5C0(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UPaperTileLayer*>               TileLayers;                                        // 0x5C8(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct CoreUObject_LinearColor               TileMapColor;                                      // 0x5D8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        UseSingleLayerIndex;                               // 0x5E8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseSingleLayer;                                   // 0x5EC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9B4[0x3];                                      // Fixing Size After Last Property  
	class UPaperTileMap*                         TileMap;                                           // 0x5F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B7[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPaperTileMapComponent* GetDefaultObj();

	void SetTileMapColor(const struct CoreUObject_LinearColor& NewColor);
	bool SetTileMap(class UPaperTileMap* NewTileMap);
	void SetTile(int32 X, int32 Y, int32 Layer, const struct Paper2D_PaperTileInfo& NewValue);
	void SetLayerColor(const struct CoreUObject_LinearColor& NewColor, int32 Layer);
	void SetLayerCollision(int32 Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);
	void ResizeMap(int32 NewWidthInTiles, int32 NewHeightInTiles);
	void RebuildCollision();
	bool OwnsTileMap();
	void MakeTileMapEditable();
	void GetTilePolygon(int32 TileX, int32 TileY, TArray<struct CoreUObject_Vector>* Points, int32 LayerIndex, bool bWorldSpace);
	struct CoreUObject_LinearColor GetTileMapColor();
	struct CoreUObject_Vector GetTileCornerPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace);
	struct CoreUObject_Vector GetTileCenterPosition(int32 TileX, int32 TileY, int32 LayerIndex, bool bWorldSpace);
	struct Paper2D_PaperTileInfo GetTile(int32 X, int32 Y, int32 Layer);
	void GetMapSize(int32* MapWidth, int32* MapHeight, int32* NumLayers);
	struct CoreUObject_LinearColor GetLayerColor(int32 Layer);
	void CreateNewTileMap(int32 MapWidth, int32 MapHeight, int32 TileWidth, int32 TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);
	class UPaperTileLayer* AddNewLayer();
};

// 0x80 (0xA8 - 0x28)
// Class Paper2D.PaperTileSet
class UPaperTileSet : public UObject
{
public:
	struct CoreUObject_IntPoint                  TileSize;                                          // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                            TileSheet;                                         // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UTexture*>                      AdditionalSourceTextures;                          // 0x38(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct Paper2D_IntMargin                     BorderMargin;                                      // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	struct CoreUObject_IntPoint                  PerTileSpacing;                                    // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_IntPoint                  DrawingOffset;                                     // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        WidthInTiles;                                      // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        HeightInTiles;                                     // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedWidth;                                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedHeight;                                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct Paper2D_PaperTileMetadata>     PerTileData;                                       // 0x78(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct Paper2D_PaperTileSetTerrain>   Terrains;                                          // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        TileWidth;                                         // 0x98(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TileHeight;                                        // 0x9C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Margin;                                            // 0xA0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Spacing;                                           // 0xA4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UPaperTileSet* GetDefaultObj();

};

// 0x20 (0x260 - 0x240)
// Class Paper2D.MaterialExpressionSpriteTextureSampler
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:
	bool                                         bSampleAdditionalTextures;                         // 0x240(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A00[0x3];                                      // Fixing Size After Last Property  
	int32                                        AdditionalSlotIndex;                               // 0x244(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  SlotDisplayName;                                   // 0x248(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionSpriteTextureSampler* GetDefaultObj();

};

// 0x18 (0x2B0 - 0x298)
// Class Paper2D.PaperTerrainActor
class APaperTerrainActor : public AActor
{
public:
	class USceneComponent*                       DummyRoot;                                         // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTerrainSplineComponent*          SplineComponent;                                   // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTerrainComponent*                RenderComponent;                                   // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class APaperTerrainActor* GetDefaultObj();

};

// 0x60 (0x5D0 - 0x570)
// Class Paper2D.PaperTerrainComponent
class UPaperTerrainComponent : public UPrimitiveComponent
{
public:
	class UPaperTerrainMaterial*                 TerrainMaterial;                                   // 0x570(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClosedSpline;                                     // 0x578(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFilledSpline;                                     // 0x579(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1F[0x6];                                      // Fixing Size After Last Property  
	class UPaperTerrainSplineComponent*          AssociatedSpline;                                  // 0x580(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RandomSeed;                                        // 0x588(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SegmentOverlapAmount;                              // 0x58C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               TerrainColor;                                      // 0x590(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReparamStepsPerSegment;                            // 0x5A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpriteCollisionMode              SpriteCollisionDomain;                             // 0x5A4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A28[0x3];                                      // Fixing Size After Last Property  
	float                                        CollisionThickness;                                // 0x5A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A2F[0x4];                                      // Fixing Size After Last Property  
	class UBodySetup*                            CachedBodySetup;                                   // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A30[0x18];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPaperTerrainComponent* GetDefaultObj();

	void SetTerrainColor(const struct CoreUObject_LinearColor& NewColor);
};

// 0x18 (0x48 - 0x30)
// Class Paper2D.PaperTerrainMaterial
class UPaperTerrainMaterial : public UDataAsset
{
public:
	TArray<struct Paper2D_PaperTerrainMaterialRule> Rules;                                             // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPaperSprite*                          InteriorFill;                                      // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPaperTerrainMaterial* GetDefaultObj();

};

// 0x10 (0x680 - 0x670)
// Class Paper2D.PaperTerrainSplineComponent
class UPaperTerrainSplineComponent : public USplineComponent
{
public:
	uint8                                        Pad_A50[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPaperTerrainSplineComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Paper2D.TileMapBlueprintLibrary
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTileMapBlueprintLibrary* GetDefaultObj();

	struct Paper2D_PaperTileInfo MakeTile(int32 TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);
	class FName GetTileUserData(const struct Paper2D_PaperTileInfo& Tile);
	struct CoreUObject_Transform GetTileTransform(const struct Paper2D_PaperTileInfo& Tile);
	void BreakTile(const struct Paper2D_PaperTileInfo& Tile, int32* TileIndex, class UPaperTileSet** TileSet, bool* bFlipH, bool* bFlipV, bool* bFlipD);
};

}


