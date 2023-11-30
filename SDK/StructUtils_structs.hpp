#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPropertyBagPropertyType : uint8
{
	None                           = 0,
	Bool                           = 1,
	Byte                           = 2,
	Int32                          = 3,
	Int64                          = 4,
	Float                          = 5,
	Double                         = 6,
	Name                           = 7,
	String                         = 8,
	Text                           = 9,
	Enum                           = 10,
	Struct                         = 11,
	Object                         = 12,
	SoftObject                     = 13,
	Class                          = 14,
	SoftClass                      = 15,
	Count                          = 16,
	EPropertyBagPropertyType_MAX   = 17,
};

enum class EPropertyBagContainerType : uint8
{
	None                           = 0,
	Array                          = 1,
	Count                          = 2,
	EPropertyBagContainerType_MAX  = 3,
};

enum class EPropertyBagResult : uint8
{
	Success                        = 0,
	TypeMismatch                   = 1,
	OutOfBounds                    = 2,
	PropertyNotFound               = 3,
	EPropertyBagResult_MAX         = 4,
};

enum class EPropertyBagMissingEnum : uint8
{
	Missing                        = 0,
	EPropertyBagMissingEnum_MAX    = 1,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct StructUtils.InstancedStruct
struct StructUtils_InstancedStruct
{
public:
	uint8                                        Pad_EA8[0x10];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StructUtils.InstancedStructContainer
struct StructUtils_InstancedStructContainer
{
public:
	uint8                                        Pad_EBD[0x10];                                     // Fixing Size Of Struct 
};

// 0x3 (0x3 - 0x0)
// ScriptStruct StructUtils.PropertyBagContainerTypes
struct StructUtils_PropertyBagContainerTypes
{
public:
	uint8                                        Pad_ECB[0x3];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct StructUtils.PropertyBagPropertyDescMetaData
struct StructUtils_PropertyBagPropertyDescMetaData
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct StructUtils.PropertyBagPropertyDesc
struct StructUtils_PropertyBagPropertyDesc
{
public:
	class UObject*                               ValueTypeObject;                                   // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ID;                                                // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyBagPropertyType          ValueType;                                         // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct StructUtils_PropertyBagContainerTypes ContainerTypes;                                    // 0x21(0x3)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F10[0xC];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StructUtils.InstancedPropertyBag
struct StructUtils_InstancedPropertyBag
{
public:
	struct StructUtils_InstancedStruct           Value;                                             // 0x0(0x10)(Edit, Protected, NativeAccessSpecifierProtected)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct StructUtils.PropertyBagMissingStruct
struct StructUtils_PropertyBagMissingStruct
{
public:
	uint8                                        Pad_F2A[0x1];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StructUtils.SharedStruct
struct StructUtils_SharedStruct
{
public:
	uint8                                        Pad_F34[0x10];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct StructUtils.ConstSharedStruct
struct StructUtils_ConstSharedStruct
{
public:
	uint8                                        Pad_F38[0x10];                                     // Fixing Size Of Struct 
};

}


