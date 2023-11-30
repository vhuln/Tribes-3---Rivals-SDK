#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x620 (0x710 - 0xF0)
// Class TakeMovieScene.MovieSceneTakeSection
class UMovieSceneTakeSection : public UMovieSceneSection
{
public:
	struct MovieScene_MovieSceneIntegerChannel   HoursCurve;                                        // 0xF0(0x100)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneIntegerChannel   MinutesCurve;                                      // 0x1F0(0x100)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneIntegerChannel   SecondsCurve;                                      // 0x2F0(0x100)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneIntegerChannel   FramesCurve;                                       // 0x3F0(0x100)(NativeAccessSpecifierPublic)
	struct MovieScene_MovieSceneFloatChannel     SubFramesCurve;                                    // 0x4F0(0x110)(NativeAccessSpecifierPublic)
	struct MovieSceneTracks_MovieSceneStringChannel Slate;                                             // 0x600(0x110)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneTakeSection* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class TakeMovieScene.MovieSceneTakeSettings
class UMovieSceneTakeSettings : public UObject
{
public:
	class FString                                HoursName;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MinutesName;                                       // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SecondsName;                                       // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FramesName;                                        // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubFramesName;                                     // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SlateName;                                         // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneTakeSettings* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class TakeMovieScene.MovieSceneTakeTrack
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneTakeTrack* GetDefaultObj();

};

}


