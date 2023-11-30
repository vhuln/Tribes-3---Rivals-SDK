#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Soundscape.SoundscapeBPFunctionLibrary
class USoundscapeBPFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class USoundscapeBPFunctionLibrary* GetDefaultObj();

	bool SpawnSoundscapePalette(class UObject* WorldContextObject, class USoundscapePalette* SoundscapePaletteIn, class UActiveSoundscapePalette** SoundscapePaletteAgentsOut);
	bool SpawnSoundscapeColor(class UObject* WorldContextObject, class USoundscapeColor* SoundscapeColorIn, class UActiveSoundscapeColor** ActiveSoundscapeColor);
};

// 0xD8 (0x100 - 0x28)
// Class Soundscape.SoundscapeColor
class USoundscapeColor : public UObject
{
public:
	class USoundBase*                            Sound;                                             // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VolumeBase;                                        // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchBase;                                         // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Soundscape_SoundscapeColorModulationSettings ModulationBehavior;                                // 0x38(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct Soundscape_SoundscapeColorPlaybackSettings PlaybackBehavior;                                  // 0x68(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1190[0x4];                                     // Fixing Size After Last Property  
	struct Soundscape_SoundscapeColorSpawnSettings SpawnBehavior;                                     // 0x78(0x88)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundscapeColor* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Soundscape.ActiveSoundscapeColorVoice
class UActiveSoundscapeColorVoice : public UObject
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_TimerHandle                    TimerHandle;                                       // 0x30(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFree;                                             // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11AD[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UActiveSoundscapeColorVoice* GetDefaultObj();

	void StopLimitedDurationVoice(float FadeOutTime);
};

// 0x168 (0x190 - 0x28)
// Class Soundscape.ActiveSoundscapeColor
class UActiveSoundscapeColor : public UObject
{
public:
	class USoundBase*                            Sound;                                             // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11E2[0x8];                                     // Fixing Size After Last Property  
	struct Soundscape_SoundscapeColorModulationSettings ModulationBehavior;                                // 0x38(0x30)(NoDestructor, NativeAccessSpecifierPrivate)
	struct Soundscape_SoundscapeColorPlaybackSettings PlaybackBehavior;                                  // 0x68(0xC)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11E5[0x4];                                     // Fixing Size After Last Property  
	struct Soundscape_SoundscapeColorSpawnSettings SpawnBehavior;                                     // 0x78(0x88)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11E8[0x78];                                    // Fixing Size After Last Property  
	TArray<class UActiveSoundscapeColorVoice*>   SoundscapeColorVoicePool;                          // 0x178(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_11EB[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UActiveSoundscapeColor* GetDefaultObj();

	void UpdateSoundscapeColor();
	void Stop(float ColorFadeOutTime);
	void Play(float ColorVolume, float ColorPitch, float ColorFadeInTime);
	bool IsPlaying();
};

// 0x8 (0xA8 - 0xA0)
// Class Soundscape.SoundscapeColorPointComponent
class USoundscapeColorPointComponent : public UActorComponent
{
public:
	struct GameplayTags_GameplayTag              ColorPoint;                                        // 0xA0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundscapeColorPointComponent* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class Soundscape.SoundscapePalette
class USoundscapePalette : public UObject
{
public:
	struct GameplayTags_GameplayTagQuery         SoundscapePalettePlaybackConditions;               // 0x28(0x48)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct Soundscape_SoundscapePaletteColor> Colors;                                            // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundscapePalette* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Soundscape.ActiveSoundscapePalette
class UActiveSoundscapePalette : public UObject
{
public:
	class UWorld*                                World;                                             // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UActiveSoundscapeColor*>        ActiveSoundscapeColors;                            // 0x30(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UActiveSoundscapePalette* GetDefaultObj();

	void Stop();
	void Play();
};

// 0x70 (0xA8 - 0x38)
// Class Soundscape.SoundscapeSettings
class USoundscapeSettings : public UDeveloperSettings
{
public:
	TSet<struct CoreUObject_SoftObjectPath>      SoundscapePaletteCollection;                       // 0x38(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                         bDebugDraw;                                        // 0x88(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1227[0x3];                                     // Fixing Size After Last Property  
	float                                        LOD1ColorPointHashWidth;                           // 0x8C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LOD1ColorPointHashDistance;                        // 0x90(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LOD2ColorPointHashWidth;                           // 0x94(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LOD2ColorPointHashDistance;                        // 0x98(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LOD3ColorPointHashWidth;                           // 0x9C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActiveColorPointHashWidth;                         // 0xA0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActiveColorPointHashUpdateTimeSeconds;             // 0xA4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundscapeSettings* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class Soundscape.SoundscapeColorPointHashCellDensity
class USoundscapeColorPointHashCellDensity : public UObject
{
public:
	TMap<uint64, int32>                          ColorPointHashCellDensity;                         // 0x28(0x50)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashCellDensity* GetDefaultObj();

};

// 0x98 (0xC0 - 0x28)
// Class Soundscape.SoundscapeColorPointHashMap
class USoundscapeColorPointHashMap : public UObject
{
public:
	TMap<struct GameplayTags_GameplayTag, class USoundscapeColorPointHashCellDensity*> ColorPointHashMap;                                 // 0x28(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	float                                        HashCellSize;                                      // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        GridWidth;                                         // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int64                                        NumCells;                                          // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        HashCellFactor;                                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12C1[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    GridCenter;                                        // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Vector                    GridOriginOffset;                                  // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashMap* GetDefaultObj();

	void SetGridCenterpoint(struct CoreUObject_Vector& Location);
	int32 NumColorPointsInCell(struct CoreUObject_Vector& Location, const struct GameplayTags_GameplayTag& ColorPoint);
	void InitializeHash(float HashCellSizeIn, const struct CoreUObject_Vector& GridCenterIn);
	void ClearHash();
	uint64 CalculateHashIndex(struct CoreUObject_Vector& Location);
	bool AddColorPointToHash(struct CoreUObject_Vector& Location, const struct GameplayTags_GameplayTag& ColorPoint);
	void AddColorPointArrayToHash(TArray<struct CoreUObject_Vector>& Locations, const struct GameplayTags_GameplayTag& ColorPoint);
};

// 0x30 (0x58 - 0x28)
// Class Soundscape.SoundscapeColorPointHashMapCollection
class USoundscapeColorPointHashMapCollection : public UObject
{
public:
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD1;                             // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD2;                             // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD3;                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LOD1ColorPointHashWidth;                           // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LOD1ColorPointHashDistance;                        // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LOD2ColorPointHashWidth;                           // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LOD2ColorPointHashDistance;                        // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LOD3ColorPointHashWidth;                           // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12D4[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USoundscapeColorPointHashMapCollection* GetDefaultObj();

};

// 0x1E8 (0x218 - 0x30)
// Class Soundscape.SoundscapeSubsystem
class USoundscapeSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1326[0x8];                                     // Fixing Size After Last Property  
	TSet<class USoundscapePalette*>              LoadedPaletteCollectionSet;                        // 0x38(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	TMap<class FName, struct Soundscape_SoundscapePaletteCollection> UnloadedPaletteCollections;                        // 0x88(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1328[0x20];                                    // Fixing Size After Last Property  
	TMap<class USoundscapePalette*, class UActiveSoundscapePalette*> ActivePalettes;                                    // 0xF8(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_132A[0x8];                                     // Fixing Size After Last Property  
	TArray<class USoundscapeColorPointHashMapCollection*> ColorPointHashMapCollections;                      // 0x150(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_132B[0x60];                                    // Fixing Size After Last Property  
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD1;                             // 0x1C0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD2;                             // 0x1C8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundscapeColorPointHashMap*          ColorPointHashMapLOD3;                             // 0x1D0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundscapeColorPointHashMap*          ActiveColorPointHashMap;                           // 0x1D8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_132E[0x38];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class USoundscapeSubsystem* GetDefaultObj();

	void SetState(const struct GameplayTags_GameplayTag& SoundscapeState);
	void RestartSoundscape();
	bool RemovePaletteCollection(class FName PaletteCollectionName);
	bool RemoveColorPointCollection(class FName ColorPointCollectionName);
	void ClearState(const struct GameplayTags_GameplayTag& SoundscapeState);
	int32 CheckColorPointDensity(const struct CoreUObject_Vector& Location, const struct GameplayTags_GameplayTag& ColorPoint);
	bool AddPaletteCollection(class FName PaletteCollectionName, const struct Soundscape_SoundscapePaletteCollection& PaletteCollection);
	void AddColorPointCollection(class FName ColorPointCollectionName, const struct Soundscape_SoundscapeColorPointCollection& ColorPointCollection);
};

}


