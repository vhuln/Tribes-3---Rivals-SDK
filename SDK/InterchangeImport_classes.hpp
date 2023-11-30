#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class InterchangeImport.InterchangeAnimationPayloadInterface
class IInterchangeAnimationPayloadInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterchangeAnimationPayloadInterface* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class InterchangeImport.InterchangeAnimationTrackSetFactory
class UInterchangeAnimationTrackSetFactory : public UInterchangeFactoryBase
{
public:
	uint8                                        Pad_E38[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeAnimationTrackSetFactory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InterchangeImport.InterchangeBlockedTexturePayloadInterface
class IInterchangeBlockedTexturePayloadInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterchangeBlockedTexturePayloadInterface* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeActorFactory
class UInterchangeActorFactory : public UInterchangeFactoryBase
{
public:

	static class UClass* StaticClass();
	static class UInterchangeActorFactory* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeLightActorFactory
class UInterchangeLightActorFactory : public UInterchangeActorFactory
{
public:

	static class UClass* StaticClass();
	static class UInterchangeLightActorFactory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InterchangeImport.InterchangeMeshPayloadInterface
class IInterchangeMeshPayloadInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterchangeMeshPayloadInterface* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeSceneImportAssetFactory
class UInterchangeSceneImportAssetFactory : public UInterchangeFactoryBase
{
public:

	static class UClass* StaticClass();
	static class UInterchangeSceneImportAssetFactory* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class InterchangeImport.InterchangeSceneVariantSetsFactory
class UInterchangeSceneVariantSetsFactory : public UInterchangeFactoryBase
{
public:
	uint8                                        Pad_E75[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeSceneVariantSetsFactory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InterchangeImport.InterchangeSlicedTexturePayloadInterface
class IInterchangeSlicedTexturePayloadInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterchangeSlicedTexturePayloadInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InterchangeImport.InterchangeTextureLightProfilePayloadInterface
class IInterchangeTextureLightProfilePayloadInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterchangeTextureLightProfilePayloadInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InterchangeImport.InterchangeTexturePayloadInterface
class IInterchangeTexturePayloadInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterchangeTexturePayloadInterface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class InterchangeImport.InterchangeVariantSetPayloadInterface
class IInterchangeVariantSetPayloadInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IInterchangeVariantSetPayloadInterface* GetDefaultObj();

};

// 0xD0 (0x180 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXRamp4
class UMaterialExpressionMaterialXRamp4 : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                Coordinates;                                       // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                A;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                C;                                                 // 0x128(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                D;                                                 // 0x150(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        ConstCoordinate;                                   // 0x178(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB5[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXRamp4* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeAnimSequenceFactory
class UInterchangeAnimSequenceFactory : public UInterchangeFactoryBase
{
public:

	static class UClass* StaticClass();
	static class UInterchangeAnimSequenceFactory* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class InterchangeImport.InterchangeFbxTranslator
class UInterchangeFbxTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_EDB[0x20];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeFbxTranslator* GetDefaultObj();

};

// 0x240 (0x278 - 0x38)
// Class InterchangeImport.InterchangeGLTFTranslator
class UInterchangeGLTFTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_EEA[0x240];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeGLTFTranslator* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class InterchangeImport.InterchangeMaterialXTranslator
class UInterchangeMaterialXTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_EF6[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeMaterialXTranslator* GetDefaultObj();

};

// 0x78 (0x128 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXAppend3Vector
class UMaterialExpressionMaterialXAppend3Vector : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                C;                                                 // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXAppend3Vector* GetDefaultObj();

};

// 0xA0 (0x150 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXAppend4Vector
class UMaterialExpressionMaterialXAppend4Vector : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                C;                                                 // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                D;                                                 // 0x128(0x28)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXAppend4Vector* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXBurn
class UMaterialExpressionMaterialXBurn : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Alpha;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F19[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXBurn* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXDifference
class UMaterialExpressionMaterialXDifference : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Alpha;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F2B[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXDifference* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXDisjointOver
class UMaterialExpressionMaterialXDisjointOver : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Alpha;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F3E[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXDisjointOver* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXDodge
class UMaterialExpressionMaterialXDodge : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Alpha;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F47[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXDodge* GetDefaultObj();

};

// 0xF8 (0x1A8 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXFractal3D
class UMaterialExpressionMaterialXFractal3D : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                Position;                                          // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Amplitude;                                         // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAmplitude;                                    // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4E[0x4];                                      // Fixing Size After Last Property  
	struct Engine_ExpressionInput                Octaves;                                           // 0x108(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ConstOctaves;                                      // 0x130(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F50[0x4];                                      // Fixing Size After Last Property  
	struct Engine_ExpressionInput                Lacunarity;                                        // 0x138(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstLacunarity;                                   // 0x160(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F51[0x4];                                      // Fixing Size After Last Property  
	struct Engine_ExpressionInput                Diminish;                                          // 0x168(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstDiminish;                                     // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x194(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTurbulence;                                       // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5A[0x3];                                      // Fixing Size After Last Property  
	int32                                        Levels;                                            // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutputMin;                                         // 0x1A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutputMax;                                         // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXFractal3D* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXIn
class UMaterialExpressionMaterialXIn : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Alpha;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F6E[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXIn* GetDefaultObj();

};

// 0x40 (0xF0 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXLuminance
class UMaterialExpressionMaterialXLuminance : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                Input;                                             // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               LuminanceFactors;                                  // 0xD8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMaterialXLuminanceMode           LuminanceMode;                                     // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F81[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXLuminance* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXMask
class UMaterialExpressionMaterialXMask : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Alpha;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F93[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXMask* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXMatte
class UMaterialExpressionMaterialXMatte : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Alpha;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA6[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXMatte* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXMinus
class UMaterialExpressionMaterialXMinus : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Alpha;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB3[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXMinus* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXOut
class UMaterialExpressionMaterialXOut : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Alpha;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCA[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXOut* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXOver
class UMaterialExpressionMaterialXOver : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Alpha;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FDC[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXOver* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXOverlay
class UMaterialExpressionMaterialXOverlay : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Alpha;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_101B[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXOverlay* GetDefaultObj();

};

// 0xD0 (0x180 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXPlace2D
class UMaterialExpressionMaterialXPlace2D : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                Coordinates;                                       // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Pivot;                                             // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Scale;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Offset;                                            // 0x128(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                RotationAngle;                                     // 0x150(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstRotationAngle;                                // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ConstCoordinate;                                   // 0x17C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1038[0x3];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXPlace2D* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXPlus
class UMaterialExpressionMaterialXPlus : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Alpha;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_104D[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXPlus* GetDefaultObj();

};

// 0x28 (0xD8 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXPremult
class UMaterialExpressionMaterialXPremult : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                Input;                                             // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXPremult* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXRampLeftRight
class UMaterialExpressionMaterialXRampLeftRight : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                Coordinates;                                       // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                A;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        ConstCoordinate;                                   // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10A5[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXRampLeftRight* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXRampTopBottom
class UMaterialExpressionMaterialXRampTopBottom : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                Coordinates;                                       // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                A;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        ConstCoordinate;                                   // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10BA[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXRampTopBottom* GetDefaultObj();

};

// 0xD8 (0x188 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXRemap
class UMaterialExpressionMaterialXRemap : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                Input;                                             // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                InputLow;                                          // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                InputHigh;                                         // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                TargetLow;                                         // 0x128(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                TargetHigh;                                        // 0x150(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        InputLowDefault;                                   // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InputHighDefault;                                  // 0x17C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetLowDefault;                                  // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetHighDefault;                                 // 0x184(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXRemap* GetDefaultObj();

};

// 0x58 (0x108 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXRotate2D
class UMaterialExpressionMaterialXRotate2D : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                Input;                                             // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                RotationAngle;                                     // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstRotationAngle;                                // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10EE[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXRotate2D* GetDefaultObj();

};

// 0x80 (0x130 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXScreen
class UMaterialExpressionMaterialXScreen : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                A;                                                 // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Alpha;                                             // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstAlpha;                                        // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F6[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXScreen* GetDefaultObj();

};

// 0xA8 (0x158 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXSplitLeftRight
class UMaterialExpressionMaterialXSplitLeftRight : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                Coordinates;                                       // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                A;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Center;                                            // 0x128(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstCenter;                                       // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ConstCoordinate;                                   // 0x154(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1115[0x3];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXSplitLeftRight* GetDefaultObj();

};

// 0xA8 (0x158 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXSplitTopBottom
class UMaterialExpressionMaterialXSplitTopBottom : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                Coordinates;                                       // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                A;                                                 // 0xD8(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                B;                                                 // 0x100(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	struct Engine_ExpressionInput                Center;                                            // 0x128(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        ConstCenter;                                       // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ConstCoordinate;                                   // 0x154(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1135[0x3];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXSplitTopBottom* GetDefaultObj();

};

// 0x38 (0xE8 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXSwizzle
class UMaterialExpressionMaterialXSwizzle : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                Input;                                             // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)
	class FString                                Channels;                                          // 0xD8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXSwizzle* GetDefaultObj();

};

// 0x10 (0x250 - 0x240)
// Class InterchangeImport.MaterialExpressionMaterialXTextureSampleParameterBlur
class UMaterialExpressionMaterialXTextureSampleParameterBlur : public UMaterialExpressionTextureSampleParameter2D
{
public:
	enum class EMAterialXTextureSampleBlurKernel KernelSize;                                        // 0x240(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilterSize;                                        // 0x244(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilterOffset;                                      // 0x248(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMaterialXTextureSampleBlurFilter Filter;                                            // 0x24C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1169[0x3];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXTextureSampleParameterBlur* GetDefaultObj();

};

// 0x28 (0xD8 - 0xB0)
// Class InterchangeImport.MaterialExpressionMaterialXUnpremult
class UMaterialExpressionMaterialXUnpremult : public UMaterialExpression
{
public:
	struct Engine_ExpressionInput                Input;                                             // 0xB0(0x28)(NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMaterialExpressionMaterialXUnpremult* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class InterchangeImport.InterchangeMaterialFactory
class UInterchangeMaterialFactory : public UInterchangeFactoryBase
{
public:
	uint8                                        Pad_1186[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeMaterialFactory* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class InterchangeImport.InterchangeMaterialFunctionFactory
class UInterchangeMaterialFunctionFactory : public UInterchangeFactoryBase
{
public:
	uint8                                        Pad_119A[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeMaterialFunctionFactory* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class InterchangeImport.InterchangeOBJTranslator
class UInterchangeOBJTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_11D4[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeOBJTranslator* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangePhysicsAssetFactory
class UInterchangePhysicsAssetFactory : public UInterchangeFactoryBase
{
public:

	static class UClass* StaticClass();
	static class UInterchangePhysicsAssetFactory* GetDefaultObj();

};

// 0x30 (0x60 - 0x30)
// Class InterchangeImport.InterchangeSkeletalMeshFactory
class UInterchangeSkeletalMeshFactory : public UInterchangeFactoryBase
{
public:
	uint8                                        Pad_11EE[0x30];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeSkeletalMeshFactory* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeSkeletonFactory
class UInterchangeSkeletonFactory : public UInterchangeFactoryBase
{
public:

	static class UClass* StaticClass();
	static class UInterchangeSkeletonFactory* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class InterchangeImport.InterchangeStaticMeshFactory
class UInterchangeStaticMeshFactory : public UInterchangeFactoryBase
{
public:
	uint8                                        Pad_1200[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeStaticMeshFactory* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeCineCameraActorFactory
class UInterchangeCineCameraActorFactory : public UInterchangeActorFactory
{
public:

	static class UClass* StaticClass();
	static class UInterchangeCineCameraActorFactory* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeCameraActorFactory
class UInterchangeCameraActorFactory : public UInterchangeActorFactory
{
public:

	static class UClass* StaticClass();
	static class UInterchangeCameraActorFactory* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeSkeletalMeshActorFactory
class UInterchangeSkeletalMeshActorFactory : public UInterchangeActorFactory
{
public:

	static class UClass* StaticClass();
	static class UInterchangeSkeletalMeshActorFactory* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class InterchangeImport.InterchangeStaticMeshActorFactory
class UInterchangeStaticMeshActorFactory : public UInterchangeActorFactory
{
public:

	static class UClass* StaticClass();
	static class UInterchangeStaticMeshActorFactory* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class InterchangeImport.InterchangeDDSTranslator
class UInterchangeDDSTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_122E[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeDDSTranslator* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class InterchangeImport.InterchangeIESTranslator
class UInterchangeIESTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_1237[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeIESTranslator* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class InterchangeImport.InterchangeImageWrapperTranslator
class UInterchangeImageWrapperTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_124B[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeImageWrapperTranslator* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class InterchangeImport.InterchangeJPGTranslator
class UInterchangeJPGTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_124F[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeJPGTranslator* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class InterchangeImport.InterchangePCXTranslator
class UInterchangePCXTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_125B[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangePCXTranslator* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class InterchangeImport.InterchangePSDTranslator
class UInterchangePSDTranslator : public UInterchangeTranslatorBase
{
public:
	uint8                                        Pad_1261[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangePSDTranslator* GetDefaultObj();

};

// 0x90 (0xC0 - 0x30)
// Class InterchangeImport.InterchangeTextureFactory
class UInterchangeTextureFactory : public UInterchangeFactoryBase
{
public:
	uint8                                        Pad_1273[0x90];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UInterchangeTextureFactory* GetDefaultObj();

};

}


