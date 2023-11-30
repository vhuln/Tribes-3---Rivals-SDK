#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class ChaosCaching.ChaosCacheCollection
class UChaosCacheCollection : public UObject
{
public:
	TArray<class UChaosCache*>                   Caches;                                            // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UChaosCacheCollection* GetDefaultObj();

};

// 0xB0 (0x348 - 0x298)
// Class ChaosCaching.ChaosCacheManager
class AChaosCacheManager : public AActor
{
public:
	class UChaosCacheCollection*                 CacheCollection;                                   // 0x298(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECacheMode                        CacheMode;                                         // 0x2A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStartMode                        StartMode;                                         // 0x2A1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16FA[0x2];                                     // Fixing Size After Last Property  
	float                                        StartTime;                                         // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16FD[0x8];                                     // Fixing Size After Last Property  
	TArray<struct ChaosCaching_ObservedComponent> ObservedComponents;                                // 0x2B0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16FE[0x88];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class AChaosCacheManager* GetDefaultObj();

	void TriggerComponentByCache(class FName InCacheName);
	void TriggerComponent(class UPrimitiveComponent* InComponent);
	void TriggerAll();
	void SetStartTime(float InStartTime);
	void SetCacheCollection(class UChaosCacheCollection* InCacheCollection);
	void ResetSingleTransform(int32 InIndex);
	void ResetAllComponentTransforms();
	void EnablePlaybackByCache(class FName InCacheName, bool bEnable);
	void EnablePlayback(int32 Index, bool bEnable);
};

// 0x0 (0x348 - 0x348)
// Class ChaosCaching.ChaosCachePlayer
class AChaosCachePlayer : public AChaosCacheManager
{
public:

	static class UClass* StaticClass();
	static class AChaosCachePlayer* GetDefaultObj();

};

// 0x338 (0x360 - 0x28)
// Class ChaosCaching.ChaosCache
class UChaosCache : public UObject
{
public:
	float                                        RecordedDuration;                                  // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NumRecordedFrames;                                 // 0x2C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                TrackToParticle;                                   // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct ChaosCaching_PerParticleCacheData> ParticleTracks;                                    // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ChannelCurveToParticle;                            // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, struct ChaosCaching_RichCurves> ChannelsTracks;                                    // 0x60(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct ChaosCaching_CompressedRichCurves> CompressedChannelsTracks;                          // 0xB0(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct Engine_RichCurve>   CurveData;                                         // 0x100(0x50)(NativeAccessSpecifierPublic)
	TMap<class FName, struct ChaosCaching_ParticleTransformTrack> NamedTransformTracks;                              // 0x150(0x50)(NativeAccessSpecifierPublic)
	bool                                         bCompressChannels;                                 // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1730[0x3];                                     // Fixing Size After Last Property  
	float                                        ChannelsCompressionErrorThreshold;                 // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChannelsCompressionSampleRate;                     // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1736[0x4];                                     // Fixing Size After Last Property  
	TMap<class FName, struct ChaosCaching_CacheEventTrack> EventTracks;                                       // 0x1B0(0x50)(NativeAccessSpecifierPrivate)
	struct ChaosCaching_CacheSpawnableTemplate   Spawnable;                                         // 0x200(0xD0)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPrivate)
	struct CoreUObject_Guid                      AdapterGuid;                                       // 0x2D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Version;                                           // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_173C[0x7C];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UChaosCache* GetDefaultObj();

};

// 0x28 (0x120 - 0xF8)
// Class ChaosCaching.MovieSceneChaosCacheSection
class UMovieSceneChaosCacheSection : public UMovieSceneBaseCacheSection
{
public:
	struct ChaosCaching_MovieSceneChaosCacheParams Params;                                            // 0xF8(0x28)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneChaosCacheSection* GetDefaultObj();

};

// 0x18 (0xB0 - 0x98)
// Class ChaosCaching.MovieSceneChaosCacheTrack
class UMovieSceneChaosCacheTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_175B[0x8];                                     // Fixing Size After Last Property  
	TArray<class UMovieSceneSection*>            AnimationSections;                                 // 0xA0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneChaosCacheTrack* GetDefaultObj();

};

}


