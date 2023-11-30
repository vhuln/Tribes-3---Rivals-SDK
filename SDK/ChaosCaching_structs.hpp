#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECacheMode : uint8
{
	None                           = 0,
	Play                           = 1,
	Record                         = 2,
	ECacheMode_MAX                 = 3,
};

enum class EStartMode : uint8
{
	Timed                          = 0,
	Triggered                      = 1,
	EStartMode_MAX                 = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct ChaosCaching.CacheEventBase
struct ChaosCaching_CacheEventBase
{
public:
	uint8                                        Pad_1768[0x8];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct ChaosCaching.EnableStateEvent
struct ChaosCaching_EnableStateEvent : public ChaosCaching_CacheEventBase
{
public:
	int32                                        Index;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1773[0x3];                                     // Fixing Size Of Struct 
};

// 0x88 (0x90 - 0x8)
// ScriptStruct ChaosCaching.BreakingEvent
struct ChaosCaching_BreakingEvent : public ChaosCaching_CacheEventBase
{
public:
	int32                                        Index;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_177F[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Location;                                          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Velocity;                                          // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AngularVelocity;                                   // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1787[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    BoundingBoxMin;                                    // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    BoundingBoxMax;                                    // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct ChaosCaching.CollisionEvent
struct ChaosCaching_CollisionEvent : public ChaosCaching_CacheEventBase
{
public:
	struct CoreUObject_Vector                    Location;                                          // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AccumulatedImpulse;                                // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Normal;                                            // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Velocity1;                                         // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Velocity2;                                         // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    DeltaVelocity1;                                    // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    DeltaVelocity2;                                    // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AngularVelocity1;                                  // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AngularVelocity2;                                  // 0xC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass1;                                             // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass2;                                             // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PenetrationDepth;                                  // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A3[0x4];                                     // Fixing Size Of Struct 
};

// 0x80 (0x88 - 0x8)
// ScriptStruct ChaosCaching.TrailingEvent
struct ChaosCaching_TrailingEvent : public ChaosCaching_CacheEventBase
{
public:
	int32                                        Index;                                             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A9[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector                    Location;                                          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Velocity;                                          // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    AngularVelocity;                                   // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    BoundingBoxMin;                                    // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    BoundingBoxMax;                                    // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ChaosCaching.CacheEventTrack
struct ChaosCaching_CacheEventTrack
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScriptStruct*                         Struct;                                            // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                TimeStamps;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BC[0x18];                                    // Fixing Size Of Struct 
};

// 0x170 (0x170 - 0x0)
// ScriptStruct ChaosCaching.ObservedComponent
struct ChaosCaching_ObservedComponent
{
public:
	class FName                                  CacheName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Engine_ComponentReference             ComponentRef;                                      // 0x8(0x28)(NativeAccessSpecifierPublic)
	struct Engine_SoftComponentReference         SoftComponentRef;                                  // 0x30(0x48)(Edit, NativeAccessSpecifierPublic)
	bool                                         bIsSimulating;                                     // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlaybackEnabled;                                  // 0x79(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17C6[0xF6];                                    // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ChaosCaching.ParticleTransformTrack
struct ChaosCaching_ParticleTransformTrack
{
public:
	struct Engine_RawAnimSequenceTrack           RawTransformTrack;                                 // 0x0(0x30)(NativeAccessSpecifierPublic)
	float                                        BeginOffset;                                       // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeactivateOnEnd;                                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CE[0x3];                                     // Fixing Size After Last Property  
	TArray<float>                                KeyTimestamps;                                     // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ChaosCaching.PerParticleCacheData
struct ChaosCaching_PerParticleCacheData
{
public:
	struct ChaosCaching_ParticleTransformTrack   TransformData;                                     // 0x0(0x48)(NativeAccessSpecifierPublic)
	TMap<class FName, struct Engine_RichCurve>   CurveData;                                         // 0x48(0x50)(NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct ChaosCaching.CacheSpawnableTemplate
struct ChaosCaching_CacheSpawnableTemplate
{
public:
	class UObject*                               DuplicatedTemplate;                                // 0x0(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17DE[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 InitialTransform;                                  // 0x10(0x60)(Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Transform                 ComponentTransform;                                // 0x70(0x60)(Edit, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChaosCaching.RichCurves
struct ChaosCaching_RichCurves
{
public:
	TArray<struct Engine_RichCurve>              RichCurves;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ChaosCaching.CompressedRichCurves
struct ChaosCaching_CompressedRichCurves
{
public:
	TArray<struct Engine_CompressedRichCurve>    CompressedRichCurves;                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct ChaosCaching.MovieSceneChaosCacheParams
struct ChaosCaching_MovieSceneChaosCacheParams : public MovieSceneTracks_MovieSceneBaseCacheParams
{
public:
	class UChaosCacheCollection*                 CacheCollection;                                   // 0x20(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct ChaosCaching.MovieSceneChaosCacheSectionTemplateParameters
struct ChaosCaching_MovieSceneChaosCacheSectionTemplateParameters : public MovieSceneTracks_MovieSceneBaseCacheSectionTemplateParameters
{
public:
	struct ChaosCaching_MovieSceneChaosCacheParams ChaosCacheParams;                                  // 0x8(0x28)(NativeAccessSpecifierPublic)
};

// 0x30 (0x50 - 0x20)
// ScriptStruct ChaosCaching.MovieSceneChaosCacheSectionTemplate
struct ChaosCaching_MovieSceneChaosCacheSectionTemplate : public MovieScene_MovieSceneEvalTemplate
{
public:
	struct ChaosCaching_MovieSceneChaosCacheSectionTemplateParameters Params;                                            // 0x20(0x30)(NativeAccessSpecifierPublic)
};

}


