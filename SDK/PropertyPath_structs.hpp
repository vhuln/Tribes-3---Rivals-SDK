#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPropertyPathTestEnum : uint8
{
	One                            = 0,
	Two                            = 1,
	Three                          = 2,
	Four                           = 3,
	EPropertyPathTestEnum_MAX      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct PropertyPath.PropertyPathSegment
struct PropertyPath_PropertyPathSegment
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ArrayIndex;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D[0x4];                                       // Fixing Size After Last Property  
	class UStruct*                               Struct;                                            // 0x10(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E[0x8];                                       // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// ScriptStruct PropertyPath.CachedPropertyPath
struct PropertyPath_CachedPropertyPath
{
public:
	TArray<struct PropertyPath_PropertyPathSegment> Segments;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F[0x8];                                       // Fixing Size After Last Property  
	class UFunction*                             CachedFunction;                                    // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20[0x18];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct PropertyPath.PropertyPathTestInnerStruct
struct PropertyPath_PropertyPathTestInnerStruct
{
public:
	float                                        Float;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Bool;                                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24[0x3];                                       // Fixing Size After Last Property  
	int32                                        Integer;                                           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct PropertyPath.PropertyPathTestStruct
struct PropertyPath_PropertyPathTestStruct
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29[0x3];                                       // Fixing Size After Last Property  
	int32                                        Integer;                                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyPathTestEnum             EnumOne;                                           // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyPathTestEnum             EnumTwo;                                           // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyPathTestEnum             EnumThree;                                         // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPropertyPathTestEnum             EnumFour;                                          // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B[0x4];                                       // Fixing Size After Last Property  
	class FString                                String;                                            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Float;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C[0x4];                                       // Fixing Size After Last Property  
	struct PropertyPath_PropertyPathTestInnerStruct InnerStruct;                                       // 0x28(0x20)(NativeAccessSpecifierPublic)
	class UPropertyPathTestObject*               InnerObject;                                       // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct PropertyPath.PropertyPathTestBed
struct PropertyPath_PropertyPathTestBed
{
public:
	class UPropertyPathTestObject*               Object;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPropertyPathTestObject*               ModifiedObject;                                    // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct PropertyPath_PropertyPathTestStruct   ModifiedStruct;                                    // 0x10(0x50)(NativeAccessSpecifierPublic)
	struct PropertyPath_PropertyPathTestStruct   DefaultStruct;                                     // 0x60(0x50)(NativeAccessSpecifierPublic)
};

}


