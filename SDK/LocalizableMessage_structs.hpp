#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct LocalizableMessage.LocalizableMessageParameterEntry
struct LocalizableMessage_LocalizableMessageParameterEntry
{
public:
	class FString                                Key;                                               // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct StructUtils_InstancedStruct           Value;                                             // 0x10(0x10)(NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LocalizableMessage.LocalizableMessage
struct LocalizableMessage_LocalizableMessage
{
public:
	class FString                                Key;                                               // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultText;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct LocalizableMessage_LocalizableMessageParameterEntry> Substitutions;                                     // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LocalizableMessage.LocalizableMessageParameterInt
struct LocalizableMessage_LocalizableMessageParameterInt
{
public:
	int64                                        Value;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LocalizableMessage.LocalizableMessageParameterFloat
struct LocalizableMessage_LocalizableMessageParameterFloat
{
public:
	double                                       Value;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LocalizableMessage.LocalizableMessageParameterString
struct LocalizableMessage_LocalizableMessageParameterString
{
public:
	class FString                                Value;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LocalizableMessage.LocalizableMessageParameterMessage
struct LocalizableMessage_LocalizableMessageParameterMessage
{
public:
	struct LocalizableMessage_LocalizableMessage Value;                                             // 0x0(0x30)(NativeAccessSpecifierPublic)
};

}


