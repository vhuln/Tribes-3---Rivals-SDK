#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2B0 - 0x298)
// Class ApexDestruction.DestructibleActor
class ADestructibleActor : public AActor
{
public:
	class UDestructibleComponent*                DestructibleComponent;                             // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnActorFracture;                                   // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ADestructibleActor* GetDefaultObj();

};

// 0xA0 (0x990 - 0x8F0)
// Class ApexDestruction.DestructibleComponent
class UDestructibleComponent : public USkinnedMeshComponent
{
public:
	uint8                                        bFractureEffectOverride : 1;                       // Mask: 0x1, PropSize: 0x10x8F0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_58 : 7;                                     // Fixing Bit-Field Size  
	uint8                                        Pad_108F[0x7];                                     // Fixing Size After Last Property  
	TArray<struct Engine_FractureEffect>         FractureEffects;                                   // 0x8F8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEnableHardSleeping;                               // 0x908(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1096[0x3];                                     // Fixing Size After Last Property  
	float                                        LargeChunkThreshold;                               // 0x90C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnComponentFracture;                               // 0x910(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_109D[0x70];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UDestructibleComponent* GetDefaultObj();

	void SetDestructibleMesh(class UDestructibleMesh* NewMesh);
	class UDestructibleMesh* GetDestructibleMesh();
	void ApplyRadiusDamage(float BaseDamage, struct CoreUObject_Vector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage);
	void ApplyDamage(float DamageAmount, struct CoreUObject_Vector& HitLocation, struct CoreUObject_Vector& ImpulseDir, float ImpulseStrength);
};

// 0x88 (0xB0 - 0x28)
// Class ApexDestruction.DestructibleFractureSettings
class UDestructibleFractureSettings : public UObject
{
public:
	int32                                        CellSiteCount;                                     // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C1[0x4];                                     // Fixing Size After Last Property  
	struct ApexDestruction_FractureMaterial      FractureMaterialDesc;                              // 0x30(0x40)(Edit, Transient, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        RandomSeed;                                        // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C4[0x4];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_Vector>            VoronoiSites;                                      // 0x78(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        OriginalSubmeshCount;                              // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10C5[0x4];                                     // Fixing Size After Last Property  
	TArray<class UMaterialInterface*>            Materials;                                         // 0x90(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct ApexDestruction_DestructibleChunkParameters> ChunkParameters;                                   // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDestructibleFractureSettings* GetDefaultObj();

};

// 0xB8 (0x598 - 0x4E0)
// Class ApexDestruction.DestructibleMesh
class UDestructibleMesh : public USkeletalMesh
{
public:
	struct ApexDestruction_DestructibleParameters DefaultDestructibleParameters;                     // 0x4E0(0xA8)(Edit, NativeAccessSpecifierPublic)
	TArray<struct Engine_FractureEffect>         FractureEffects;                                   // 0x588(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDestructibleMesh* GetDefaultObj();

};

}


