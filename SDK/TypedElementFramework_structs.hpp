#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.ScriptTypedElementHandle
struct TypedElementFramework_ScriptTypedElementHandle
{
public:
	uint8                                        Pad_569[0x8];                                      // Fixing Size Of Struct 
};

// 0x0 (0x0 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementDataStorageColumn
struct TypedElementFramework_TypedElementDataStorageColumn
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementUObjectColumn
struct TypedElementFramework_TypedElementUObjectColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	uint8                                        Pad_570[0x8];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementExternalObjectColumn
struct TypedElementFramework_TypedElementExternalObjectColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	uint8                                        Pad_572[0x8];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementDataStorageTag
struct TypedElementFramework_TypedElementDataStorageTag
{
public:
	uint8                                        Pad_575[0x1];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementWidgetConstructor
struct TypedElementFramework_TypedElementWidgetConstructor
{
public:
	uint8                                        Pad_578[0x10];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementLabelColumn
struct TypedElementFramework_TypedElementLabelColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	class FString                                Label;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementLabelHashColumn
struct TypedElementFramework_TypedElementLabelHashColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	uint64                                       LabelHash;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TypedElementFramework.ScriptTypedElementListProxy
struct TypedElementFramework_ScriptTypedElementListProxy
{
public:
	uint8                                        Pad_582[0x10];                                     // Fixing Size Of Struct 
};

// 0x0 (0x1 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementSyncBackToWorldTag
struct TypedElementFramework_TypedElementSyncBackToWorldTag : public TypedElementFramework_TypedElementDataStorageTag
{
public:
};

// 0x0 (0x1 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementSyncFromWorldTag
struct TypedElementFramework_TypedElementSyncFromWorldTag : public TypedElementFramework_TypedElementDataStorageTag
{
public:
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementRowReferenceColumn
struct TypedElementFramework_TypedElementRowReferenceColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	uint8                                        Pad_58B[0x8];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementPackagePathColumn
struct TypedElementFramework_TypedElementPackagePathColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	class FString                                Path;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct TypedElementFramework.TypedElementPackageLoadedPathColumn
struct TypedElementFramework_TypedElementPackageLoadedPathColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	uint8                                        Pad_594[0xC];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementSelectionColumn
struct TypedElementFramework_TypedElementSelectionColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	uint8                                        Pad_59E[0x1];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceColumn
struct TypedElementFramework_TypedElementSlateWidgetReferenceColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	uint8                                        Pad_5A4[0x10];                                     // Fixing Size Of Struct 
};

// 0x0 (0x1 - 0x1)
// ScriptStruct TypedElementFramework.TypedElementSlateWidgetReferenceDeletesRowTag
struct TypedElementFramework_TypedElementSlateWidgetReferenceDeletesRowTag : public TypedElementFramework_TypedElementDataStorageTag
{
public:
};

// 0x60 (0x60 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementLocalTransformColumn
struct TypedElementFramework_TypedElementLocalTransformColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	struct CoreUObject_Transform                 Transform;                                         // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementClassTypeInfoColumn
struct TypedElementFramework_TypedElementClassTypeInfoColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	uint8                                        Pad_5B4[0x8];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementScriptStructTypeInfoColumn
struct TypedElementFramework_TypedElementScriptStructTypeInfoColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	uint8                                        Pad_5B6[0x8];                                      // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementU32IntValueCacheColumn
struct TypedElementFramework_TypedElementU32IntValueCacheColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementI32IntValueCacheColumn
struct TypedElementFramework_TypedElementI32IntValueCacheColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	int32                                        Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementU64IntValueCacheColumn
struct TypedElementFramework_TypedElementU64IntValueCacheColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	uint64                                       Value;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementI64IntValueCacheColumn
struct TypedElementFramework_TypedElementI64IntValueCacheColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	int64                                        Value;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementFloatValueCacheColumn
struct TypedElementFramework_TypedElementFloatValueCacheColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	float                                        Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct TypedElementFramework.TypedElementViewportColorColumn
struct TypedElementFramework_TypedElementViewportColorColumn : public TypedElementFramework_TypedElementDataStorageColumn
{
public:
	uint8                                        SelectionOutlineColorIndex;                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


