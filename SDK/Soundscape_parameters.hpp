#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapePalette
struct USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundscapePalette*                    SoundscapePaletteIn;                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActiveSoundscapePalette*              SoundscapePaletteAgentsOut;                        // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1141[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapeColor
struct USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundscapeColor*                      SoundscapeColorIn;                                 // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActiveSoundscapeColor*                ActiveSoundscapeColor;                             // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1162[0x7];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// Function Soundscape.ActiveSoundscapeColorVoice.StopLimitedDurationVoice
struct UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Params
{
public:
	float                                        FadeOutTime;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Soundscape.ActiveSoundscapeColor.Stop
struct UActiveSoundscapeColor_Stop_Params
{
public:
	float                                        ColorFadeOutTime;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Soundscape.ActiveSoundscapeColor.Play
struct UActiveSoundscapeColor_Play_Params
{
public:
	float                                        ColorVolume;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ColorPitch;                                        // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ColorFadeInTime;                                   // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function Soundscape.ActiveSoundscapeColor.IsPlaying
struct UActiveSoundscapeColor_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.SetGridCenterpoint
struct USoundscapeColorPointHashMap_SetGridCenterpoint_Params
{
public:
	struct CoreUObject_Vector                    Location;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.NumColorPointsInCell
struct USoundscapeColorPointHashMap_NumColorPointsInCell_Params
{
public:
	struct CoreUObject_Vector                    Location;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              ColorPoint;                                        // 0x18(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_127C[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.InitializeHash
struct USoundscapeColorPointHashMap_InitializeHash_Params
{
public:
	float                                        HashCellSizeIn;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1291[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    GridCenterIn;                                      // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.CalculateHashIndex
struct USoundscapeColorPointHashMap_CalculateHashIndex_Params
{
public:
	struct CoreUObject_Vector                    Location;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.AddColorPointToHash
struct USoundscapeColorPointHashMap_AddColorPointToHash_Params
{
public:
	struct CoreUObject_Vector                    Location;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              ColorPoint;                                        // 0x18(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12AF[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function Soundscape.SoundscapeColorPointHashMap.AddColorPointArrayToHash
struct USoundscapeColorPointHashMap_AddColorPointArrayToHash_Params
{
public:
	TArray<struct CoreUObject_Vector>            Locations;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              ColorPoint;                                        // 0x10(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function Soundscape.SoundscapeSubsystem.SetState
struct USoundscapeSubsystem_SetState_Params
{
public:
	struct GameplayTags_GameplayTag              SoundscapeState;                                   // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function Soundscape.SoundscapeSubsystem.RemovePaletteCollection
struct USoundscapeSubsystem_RemovePaletteCollection_Params
{
public:
	class FName                                  PaletteCollectionName;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F0[0x3];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function Soundscape.SoundscapeSubsystem.RemoveColorPointCollection
struct USoundscapeSubsystem_RemoveColorPointCollection_Params
{
public:
	class FName                                  ColorPointCollectionName;                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1301[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function Soundscape.SoundscapeSubsystem.ClearState
struct USoundscapeSubsystem_ClearState_Params
{
public:
	struct GameplayTags_GameplayTag              SoundscapeState;                                   // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Soundscape.SoundscapeSubsystem.CheckColorPointDensity
struct USoundscapeSubsystem_CheckColorPointDensity_Params
{
public:
	struct CoreUObject_Vector                    Location;                                          // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              ColorPoint;                                        // 0x18(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1315[0x4];                                     // Fixing Size Of Struct 
};

// 0x60 (0x60 - 0x0)
// Function Soundscape.SoundscapeSubsystem.AddPaletteCollection
struct USoundscapeSubsystem_AddPaletteCollection_Params
{
public:
	class FName                                  PaletteCollectionName;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Soundscape_SoundscapePaletteCollection PaletteCollection;                                 // 0x8(0x50)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_131B[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function Soundscape.SoundscapeSubsystem.AddColorPointCollection
struct USoundscapeSubsystem_AddColorPointCollection_Params
{
public:
	class FName                                  ColorPointCollectionName;                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Soundscape_SoundscapeColorPointCollection ColorPointCollection;                              // 0x8(0x10)(Parm, NativeAccessSpecifierPublic)
};

}
}


