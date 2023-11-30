#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
struct GeometryCollectionTracks_MovieSceneGeometryCollectionParams
{
public:
	uint8                                        Pad_1740[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_SoftObjectPath            GeometryCollectionCache;                           // 0x8(0x20)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               StartFrameOffset;                                  // 0x28(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               EndFrameOffset;                                    // 0x2C(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1755[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0x40 - 0x38)
// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
struct GeometryCollectionTracks_MovieSceneGeometryCollectionSectionTemplateParameters : public GeometryCollectionTracks_MovieSceneGeometryCollectionParams
{
public:
	struct CoreUObject_FrameNumber               SectionStartTime;                                  // 0x38(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               SectionEndTime;                                    // 0x3C(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x60 - 0x20)
// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
struct GeometryCollectionTracks_MovieSceneGeometryCollectionSectionTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	struct GeometryCollectionTracks_MovieSceneGeometryCollectionSectionTemplateParameters Params;                                            // 0x20(0x40)(NativeAccessSpecifierPublic)
};

}


