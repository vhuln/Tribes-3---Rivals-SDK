#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct Serialization.StructSerializerNumericTestStruct
struct Serialization_StructSerializerNumericTestStruct
{
public:
	int8                                         Int8;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9D[0x1];                                     // Fixing Size After Last Property  
	int16                                        Int16;                                             // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Int32;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Int64;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Uint8;                                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA1[0x1];                                     // Fixing Size After Last Property  
	uint16                                       UInt16;                                            // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Uint32;                                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       UInt64;                                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA4[0x4];                                     // Fixing Size After Last Property  
	double                                       Double;                                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct Serialization.StructSerializerBooleanTestStruct
struct Serialization_StructSerializerBooleanTestStruct
{
public:
	bool                                         BoolFalse;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BoolTrue;                                          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield0 : 1;                                     // Mask: 0x1, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield1 : 1;                                     // Mask: 0x2, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield2Set : 1;                                  // Mask: 0x4, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield3 : 1;                                     // Mask: 0x8, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield4Set : 1;                                  // Mask: 0x10, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield5Set : 1;                                  // Mask: 0x20, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield6 : 1;                                     // Mask: 0x40, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Bitfield7Set : 1;                                  // Mask: 0x80, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Serialization.StructSerializerObjectTestStruct
struct Serialization_StructSerializerObjectTestStruct
{
public:
	TSubclassOf<class UObject>                   RawClass;                                          // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   WrappedClass;                                      // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMetaData>                 SubClass;                                          // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UMetaData>               SoftClass;                                         // 0x18(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               RawObject;                                         // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WrappedObject;                                     // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UMetaData>              WeakObject;                                        // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMetaData>              SoftObject;                                        // 0x58(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             ClassPath;                                         // 0x80(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftObjectPath            ObjectPath;                                        // 0xA0(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
struct Serialization_StructSerializerBuiltinTestStruct
{
public:
	struct CoreUObject_Guid                      Guid;                                              // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x28(0x18)(NativeAccessSpecifierPublic)
	struct CoreUObject_Vector                    Vector;                                            // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CCF[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector4                   Vector4;                                           // 0x60(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Rotator;                                           // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CD2[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Quat                      Quat;                                              // 0xA0(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Color                     Color;                                             // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CD5[0xC];                                     // Fixing Size Of Struct 
};

// 0x360 (0x360 - 0x0)
// ScriptStruct Serialization.StructSerializerLWCTypesTest
struct Serialization_StructSerializerLWCTypesTest
{
public:
	struct CoreUObject_Vector                    Vector;                                            // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  Vector2D;                                          // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CD8[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector4                   Vector4;                                           // 0x30(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Matrix                    Matrix;                                            // 0x50(0x80)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Plane                     Plane;                                             // 0xD0(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat                      Quat;                                              // 0xF0(0x20)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator                   Rotator;                                           // 0x110(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CE1[0x8];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform                 Transform;                                         // 0x130(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Box                       Box;                                               // 0x190(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Box2D                     Box2D;                                             // 0x1C8(0x28)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_BoxSphereBounds           BoxSphereBounds;                                   // 0x1F0(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_OrientedBox               OrientedBox;                                       // 0x228(0x78)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Float;                                             // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CEA[0x4];                                     // Fixing Size After Last Property  
	double                                       Double;                                            // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector>            VectorArray;                                       // 0x2B0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, struct CoreUObject_Vector> StrToVec;                                          // 0x2C0(0x50)(NativeAccessSpecifierPublic)
	TSet<struct CoreUObject_Vector>              VectorSet;                                         // 0x310(0x50)(NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct Serialization.OrientedBoxFloat
struct Serialization_OrientedBoxFloat
{
public:
	struct CoreUObject_Vector3f                  Center;                                            // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector3f                  AxisX;                                             // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector3f                  AxisY;                                             // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector3f                  AxisZ;                                             // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentX;                                           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentY;                                           // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtentZ;                                           // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x220 (0x220 - 0x0)
// ScriptStruct Serialization.StructSerializerNonLWCTypesTest
struct Serialization_StructSerializerNonLWCTypesTest
{
public:
	struct CoreUObject_Vector3f                  Vector;                                            // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2f                  Vector2D;                                          // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D02[0xC];                                     // Fixing Size After Last Property  
	struct CoreUObject_Vector4f                  Vector4;                                           // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Matrix44f                 Matrix;                                            // 0x30(0x40)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Plane4f                   Plane;                                             // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Quat4f                    Quat;                                              // 0x80(0x10)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Rotator3f                 Rotator;                                           // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D09[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_Transform3f               Transform;                                         // 0xA0(0x30)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Box3f                     Box;                                               // 0xD0(0x1C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_Box2f                     Box2D;                                             // 0xEC(0x14)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct CoreUObject_BoxSphereBounds3f         BoxSphereBounds;                                   // 0x100(0x1C)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct Serialization_OrientedBoxFloat        OrientedBox;                                       // 0x11C(0x3C)(NoDestructor, NativeAccessSpecifierPublic)
	float                                        Float;                                             // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D14[0x4];                                     // Fixing Size After Last Property  
	double                                       Double;                                            // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_Vector3f>          VectorArray;                                       // 0x168(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, struct CoreUObject_Vector3f> StrToVec;                                          // 0x178(0x50)(NativeAccessSpecifierPublic)
	TSet<struct CoreUObject_Vector3f>            VectorSet;                                         // 0x1C8(0x50)(NativeAccessSpecifierPublic)
	uint8                                        Pad_1D18[0x8];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Serialization.StructSerializerByteArray
struct Serialization_StructSerializerByteArray
{
public:
	int32                                        Dummy1;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1F[0x4];                                     // Fixing Size After Last Property  
	TArray<uint8>                                ByteArray;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Dummy2;                                            // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D22[0x4];                                     // Fixing Size After Last Property  
	TArray<int8>                                 Int8Array;                                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Dummy3;                                            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D27[0x4];                                     // Fixing Size Of Struct 
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Serialization.StructSerializerArrayTestStruct
struct Serialization_StructSerializerArrayTestStruct
{
public:
	TArray<int32>                                Int32Array;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                ByteArray;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        StaticSingleElement;                               // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StaticInt32Array[0x3];                             // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StaticFloatArray[0x3];                             // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2F[0x4];                                     // Fixing Size After Last Property  
	TArray<struct CoreUObject_Vector>            VectorArray;                                       // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct Serialization_StructSerializerBuiltinTestStruct> StructArray;                                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct Serialization.StructSerializerMapTestStruct
struct Serialization_StructSerializerMapTestStruct
{
public:
	TMap<int32, class FString>                   IntToStr;                                          // 0x0(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           StrToStr;                                          // 0x50(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, struct CoreUObject_Vector> StrToVec;                                          // 0xA0(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, struct Serialization_StructSerializerBuiltinTestStruct> StrToStruct;                                       // 0xF0(0x50)(NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct Serialization.StructSerializerSetTestStruct
struct Serialization_StructSerializerSetTestStruct
{
public:
	TSet<class FString>                          StrSet;                                            // 0x0(0x50)(NativeAccessSpecifierPublic)
	TSet<int32>                                  IntSet;                                            // 0x50(0x50)(NativeAccessSpecifierPublic)
	TSet<class FName>                            NameSet;                                           // 0xA0(0x50)(NativeAccessSpecifierPublic)
	TSet<struct Serialization_StructSerializerBuiltinTestStruct> StructSet;                                         // 0xF0(0x50)(NativeAccessSpecifierPublic)
};

// 0x810 (0x810 - 0x0)
// ScriptStruct Serialization.StructSerializerTestStruct
struct Serialization_StructSerializerTestStruct
{
public:
	struct Serialization_StructSerializerNumericTestStruct Numerics;                                          // 0x0(0x30)(NoDestructor, NativeAccessSpecifierPublic)
	struct Serialization_StructSerializerBooleanTestStruct Booleans;                                          // 0x30(0x3)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D41[0x5];                                     // Fixing Size After Last Property  
	struct Serialization_StructSerializerObjectTestStruct Objects;                                           // 0x38(0xC0)(NativeAccessSpecifierPublic)
	uint8                                        Pad_1D44[0x8];                                     // Fixing Size After Last Property  
	struct Serialization_StructSerializerBuiltinTestStruct Builtins;                                          // 0x100(0xD0)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct Serialization_StructSerializerArrayTestStruct Arrays;                                            // 0x1D0(0x60)(NativeAccessSpecifierPublic)
	struct Serialization_StructSerializerMapTestStruct Maps;                                              // 0x230(0x140)(NativeAccessSpecifierPublic)
	struct Serialization_StructSerializerSetTestStruct Sets;                                              // 0x370(0x140)(NativeAccessSpecifierPublic)
	struct Serialization_StructSerializerLWCTypesTest LWCTypes;                                          // 0x4B0(0x360)(NativeAccessSpecifierPublic)
};

}


