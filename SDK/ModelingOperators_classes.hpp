#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xE0 - 0xA8)
// Class ModelingOperators.RecomputeUVsToolProperties
class URecomputeUVsToolProperties : public UInteractiveToolPropertySet
{
public:
	bool                                         bEnablePolygroupSupport;                           // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0C[0x3];                                      // Fixing Size After Last Property  
	enum class ERecomputeUVsPropertiesIslandMode IslandGeneration;                                  // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERecomputeUVsPropertiesUnwrapType UnwrapType;                                        // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERecomputeUVsToolOrientationMode  AutoRotation;                                      // 0xB4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreserveIrregularity;                             // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0F[0x3];                                      // Fixing Size After Last Property  
	int32                                        SmoothingSteps;                                    // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SmoothingAlpha;                                    // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MergingDistortionThreshold;                        // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MergingAngleThreshold;                             // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERecomputeUVsPropertiesLayoutType LayoutType;                                        // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TextureResolution;                                 // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizeScale;                                    // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableUDIMLayout;                                 // 0xD8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUDIMCVAREnabled;                                  // 0xD9(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C16[0x6];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URecomputeUVsToolProperties* GetDefaultObj();

};

// 0x28 (0xD0 - 0xA8)
// Class ModelingOperators.UVLayoutProperties
class UUVLayoutProperties : public UInteractiveToolPropertySet
{
public:
	enum class EUVLayoutType                     LayoutType;                                        // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TextureResolution;                                 // 0xAC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1E[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  Translation;                                       // 0xB8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowFlips;                                       // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableUDIMLayout;                                 // 0xC9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUDIMCVAREnabled;                                  // 0xCA(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C21[0x5];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUVLayoutProperties* GetDefaultObj();

};

// 0x118 (0x140 - 0x28)
// Class ModelingOperators.RecomputeUVsOpFactory
class URecomputeUVsOpFactory : public UObject
{
public:
	uint8                                        Pad_C24[0x8];                                      // Fixing Size After Last Property  
	class URecomputeUVsToolProperties*           Settings;                                          // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C26[0x108];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URecomputeUVsOpFactory* GetDefaultObj();

};

// 0x178 (0x1A0 - 0x28)
// Class ModelingOperators.UVLayoutOperatorFactory
class UUVLayoutOperatorFactory : public UObject
{
public:
	uint8                                        Pad_C2D[0x8];                                      // Fixing Size After Last Property  
	class UUVLayoutProperties*                   Settings;                                          // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2F[0x168];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UUVLayoutOperatorFactory* GetDefaultObj();

};

}

