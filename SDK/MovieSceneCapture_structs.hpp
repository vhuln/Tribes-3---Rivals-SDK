#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHDRCaptureGamut : uint8
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_Linear                    = 5,
	HCGM_MAX                       = 6,
};

enum class EMovieSceneCaptureProtocolState : uint8
{
	Idle                           = 0,
	Initialized                    = 1,
	Capturing                      = 2,
	Finalizing                     = 3,
	EMovieSceneCaptureProtocolState_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
struct MovieSceneCapture_CompositionGraphCapturePasses
{
public:
	TArray<class FString>                        Value;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieSceneCapture.CaptureResolution
struct MovieSceneCapture_CaptureResolution
{
public:
	int32                                        ResX;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResY;                                              // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
struct MovieSceneCapture_MovieSceneCaptureSettings
{
public:
	struct CoreUObject_DirectoryPath             OutputDirectory;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AGameModeBase>             GameModeOverride;                                  // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, Config, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutputFormat;                                      // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverwriteExisting;                                // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRelativeFrameNumbers;                          // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C8[0x2];                                      // Fixing Size After Last Property  
	int32                                        HandleFrames;                                      // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MovieExtension;                                    // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ZeroPadFrameNumbers;                               // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CE[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_FrameRate                 FrameRate;                                         // 0x44(0x8)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomFrameRate;                               // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D1[0x3];                                      // Fixing Size After Last Property  
	struct CoreUObject_FrameRate                 CustomFrameRate;                                   // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct MovieSceneCapture_CaptureResolution   Resolution;                                        // 0x58(0x8)(Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnableTextureStreaming;                           // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCinematicEngineScalability;                       // 0x61(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCinematicMode;                                    // 0x62(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMovement;                                    // 0x63(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowTurning;                                     // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowPlayer;                                       // 0x65(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowHUD;                                          // 0x66(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePathTracer;                                    // 0x67(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PathTracerSamplePerPixel;                          // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D8[0x4];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneCapture.FrameMetrics
struct MovieSceneCapture_FrameMetrics
{
public:
	float                                        TotalElapsedTime;                                  // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FrameDelta;                                        // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameNumber;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumDroppedFrames;                                  // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieSceneCapture.CapturedPixelsID
struct MovieSceneCapture_CapturedPixelsID
{
public:
	TMap<class FName, class FName>               Identifiers;                                       // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieSceneCapture.CapturedPixels
struct MovieSceneCapture_CapturedPixels
{
public:
	uint8                                        Pad_9DF[0x10];                                     // Fixing Size Of Struct 
};

}


