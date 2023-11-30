#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x48 - 0x38)
// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
struct MediaCompositing_MovieSceneMediaPlayerPropertySectionTemplate : public MovieScene_MovieScenePropertySectionTemplate
{
public:
	class UMediaSource*                          MediaSource;                                       // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_FrameNumber               SectionStartFrame;                                 // 0x40(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLoop;                                             // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4BB[0x3];                                      // Fixing Size Of Struct 
};

// 0x160 (0x160 - 0x0)
// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
struct MediaCompositing_MovieSceneMediaSectionParams
{
public:
	class UMediaSoundComponent*                  MediaSoundComponent;                               // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                          MediaSource;                                       // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneObjectBindingID  MediaSourceProxy;                                  // 0x10(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MediaSourceProxyIndex;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C5[0x4];                                      // Fixing Size After Last Property  
	class UMediaTexture*                         MediaTexture;                                      // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               SectionStartFrame;                                 // 0x40(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_FrameNumber               SectionEndFrame;                                   // 0x44(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLooping;                                          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CA[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_FrameNumber               StartFrameOffset;                                  // 0x4C(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     ProxyTextureBlend;                                 // 0x50(0x110)(NativeAccessSpecifierPublic)
};

// 0x168 (0x188 - 0x20)
// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
struct MediaCompositing_MovieSceneMediaSectionTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	struct MediaCompositing_MovieSceneMediaSectionParams Params;                                            // 0x20(0x160)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMovieSceneMediaSection*               MediaSection;                                      // 0x180(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

}


