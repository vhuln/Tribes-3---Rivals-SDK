#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameplayContainerMatchType : uint8
{
	Any                            = 0,
	All                            = 1,
	EGameplayContainerMatchType_MAX = 2,
};

enum class EGameplayTagQueryExprType : uint8
{
	Undefined                      = 0,
	AnyTagsMatch                   = 1,
	AllTagsMatch                   = 2,
	NoTagsMatch                    = 3,
	AnyExprMatch                   = 4,
	AllExprMatch                   = 5,
	NoExprMatch                    = 6,
	EGameplayTagQueryExprType_MAX  = 7,
};

enum class EGameplayTagSourceType : uint8
{
	Native                         = 0,
	DefaultTagList                 = 1,
	TagList                        = 2,
	RestrictedTagList              = 3,
	DataTable                      = 4,
	Invalid                        = 5,
	EGameplayTagSourceType_MAX     = 6,
};

enum class EGameplayTagSelectionType : uint8
{
	None                           = 0,
	NonRestrictedOnly              = 1,
	RestrictedOnly                 = 2,
	All                            = 3,
	EGameplayTagSelectionType_MAX  = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayTags.GameplayTag
struct GameplayTags_GameplayTag
{
public:
	class FName                                  TagName;                                           // 0x0(0x8)(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.GameplayTagContainer
struct GameplayTags_GameplayTagContainer
{
public:
	TArray<struct GameplayTags_GameplayTag>      GameplayTags;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, Protected, NativeAccessSpecifierProtected)
	TArray<struct GameplayTags_GameplayTag>      ParentTags;                                        // 0x10(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayTags.GameplayTagQuery
struct GameplayTags_GameplayTagQuery
{
public:
	int32                                        TokenStreamVersion;                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_815[0x4];                                      // Fixing Size After Last Property  
	TArray<struct GameplayTags_GameplayTag>      TagDictionary;                                     // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint8>                                QueryTokenStream;                                  // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                UserDescription;                                   // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                AutoDescription;                                   // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayTags.GameplayTagContainerNetSerializerSerializationHelper
struct GameplayTags_GameplayTagContainerNetSerializerSerializationHelper
{
public:
	TArray<struct GameplayTags_GameplayTag>      GameplayTags;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
struct GameplayTags_GameplayTagCreationWidgetHelper
{
public:
	uint8                                        Pad_820[0x1];                                      // Fixing Size Of Struct 
};

// 0x0 (0x10 - 0x10)
// ScriptStruct GameplayTags.GameplayTagContainerNetSerializerConfig
struct GameplayTags_GameplayTagContainerNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x0 (0x10 - 0x10)
// ScriptStruct GameplayTags.GameplayTagNetSerializerConfig
struct GameplayTags_GameplayTagNetSerializerConfig : public IrisCore_NetSerializerConfig
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayTags.GameplayTagRedirect
struct GameplayTags_GameplayTagRedirect
{
public:
	class FName                                  OldTagName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewTagName;                                        // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct GameplayTags.GameplayTagTableRow
struct GameplayTags_GameplayTagTableRow : public Engine_TableRowBase
{
public:
	class FName                                  Tag;                                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DevComment;                                        // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
struct GameplayTags_RestrictedGameplayTagTableRow : public GameplayTags_GameplayTagTableRow
{
public:
	bool                                         bAllowNonRestrictedChildren;                       // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83D[0x7];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.GameplayTagSource
struct GameplayTags_GameplayTagSource
{
public:
	class FName                                  SourceName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayTagSourceType            SourceType;                                        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_847[0x7];                                      // Fixing Size After Last Property  
	class UGameplayTagsList*                     SourceTagList;                                     // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URestrictedGameplayTagsList*           SourceRestrictedTagList;                           // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayTags.GameplayTagNode
struct GameplayTags_GameplayTagNode
{
public:
	uint8                                        Pad_84F[0x50];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.GameplayTagCategoryRemap
struct GameplayTags_GameplayTagCategoryRemap
{
public:
	class FString                                BaseCategory;                                      // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        RemapCategories;                                   // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.RestrictedConfigInfo
struct GameplayTags_RestrictedConfigInfo
{
public:
	class FString                                RestrictedConfigName;                              // 0x0(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Owners;                                            // 0x10(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
};

}


