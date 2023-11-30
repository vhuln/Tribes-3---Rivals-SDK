#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
struct GeometryCacheTracks_MovieSceneGeometryCacheParams
{
public:
	class UGeometryCache*                        GeometryCacheAsset;                                // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               FirstLoopStartFrameOffset;                         // 0x8(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               StartFrameOffset;                                  // 0xC(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               EndFrameOffset;                                    // 0x10(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReverse : 1;                                      // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5F : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_115A[0x3];                                     // Fixing Size After Last Property  
	float                                        StartOffset;                                       // 0x1C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndOffset;                                         // 0x20(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_117A[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_SoftObjectPath            GeometryCache;                                     // 0x28(0x20)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x50 - 0x48)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
struct GeometryCacheTracks_MovieSceneGeometryCacheSectionTemplateParameters : public GeometryCacheTracks_MovieSceneGeometryCacheParams
{
public:
	struct CoreUObject_FrameNumber               SectionStartTime;                                  // 0x48(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               SectionEndTime;                                    // 0x4C(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x70 - 0x20)
// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
struct GeometryCacheTracks_MovieSceneGeometryCacheSectionTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	struct GeometryCacheTracks_MovieSceneGeometryCacheSectionTemplateParameters Params;                                            // 0x20(0x50)(NativeAccessSpecifierPublic)
};

}


