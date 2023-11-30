#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EImpactDamageOverride : uint8
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct ApexDestruction.FractureMaterial
struct ApexDestruction_FractureMaterial
{
public:
	struct CoreUObject_Vector2D                  UVScale;                                           // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  UVOffset;                                          // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Tangent;                                           // 0x20(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UAngle;                                            // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InteriorElementIndex;                              // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ApexDestruction.DestructibleChunkParameters
struct ApexDestruction_DestructibleChunkParameters
{
public:
	bool                                         bIsSupportChunk;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoNotFracture;                                    // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoNotDamage;                                      // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDoNotCrumble;                                     // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ApexDestruction.DestructibleDepthParameters
struct ApexDestruction_DestructibleDepthParameters
{
public:
	enum class EImpactDamageOverride             ImpactDamageOverride;                              // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ApexDestruction.DestructibleParametersFlag
struct ApexDestruction_DestructibleParametersFlag
{
public:
	uint8                                        bAccumulateDamage : 1;                             // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAssetDefinedSupport : 1;                          // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWorldSupport : 1;                                 // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDebrisTimeout : 1;                                // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDebrisMaxSeparation : 1;                          // Mask: 0x10, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCrumbleSmallestChunks : 1;                        // Mask: 0x20, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAccurateRaycasts : 1;                             // Mask: 0x40, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseValidBounds : 1;                               // Mask: 0x80, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFormExtendedStructures : 1;                       // Mask: 0x1, PropSize: 0x10x1(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10FD[0x2];                                     // Fixing Size Of Struct 
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ApexDestruction.DestructibleDamageParameters
struct ApexDestruction_DestructibleDamageParameters
{
public:
	float                                        DamageThreshold;                                   // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageSpread;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableImpactDamage;                               // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1109[0x3];                                     // Fixing Size After Last Property  
	float                                        ImpactDamage;                                      // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultImpactDamageDepth;                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCustomImpactResistance;                           // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1114[0x3];                                     // Fixing Size After Last Property  
	float                                        ImpactResistance;                                  // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ApexDestruction.DestructibleDebrisParameters
struct ApexDestruction_DestructibleDebrisParameters
{
public:
	float                                        DebrisLifetimeMin;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebrisLifetimeMax;                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebrisMaxSeparationMin;                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DebrisMaxSeparationMax;                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       ValidBounds;                                       // 0x10(0x38)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ApexDestruction.DestructibleAdvancedParameters
struct ApexDestruction_DestructibleAdvancedParameters
{
public:
	float                                        DamageCap;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImpactVelocityThreshold;                           // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxChunkSpeed;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FractureImpulseScale;                              // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
struct ApexDestruction_DestructibleSpecialHierarchyDepths
{
public:
	int32                                        SupportDepth;                                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinimumFractureDepth;                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDebris;                                     // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1140[0x3];                                     // Fixing Size After Last Property  
	int32                                        DebrisDepth;                                       // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EssentialDepth;                                    // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct ApexDestruction.DestructibleParameters
struct ApexDestruction_DestructibleParameters
{
public:
	struct ApexDestruction_DestructibleDamageParameters DamageParameters;                                  // 0x0(0x1C)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1156[0x4];                                     // Fixing Size After Last Property  
	struct ApexDestruction_DestructibleDebrisParameters DebrisParameters;                                  // 0x20(0x48)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct ApexDestruction_DestructibleAdvancedParameters AdvancedParameters;                                // 0x68(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct ApexDestruction_DestructibleSpecialHierarchyDepths SpecialHierarchyDepths;                            // 0x78(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1159[0x4];                                     // Fixing Size After Last Property  
	TArray<struct ApexDestruction_DestructibleDepthParameters> DepthParameters;                                   // 0x90(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	struct ApexDestruction_DestructibleParametersFlag Flags;                                             // 0xA0(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1164[0x4];                                     // Fixing Size Of Struct 
};

}


