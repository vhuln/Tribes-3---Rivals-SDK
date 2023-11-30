#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class GameplayTags.BlueprintGameplayTagLibrary
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBlueprintGameplayTagLibrary* GetDefaultObj();

	bool RemoveGameplayTag(struct GameplayTags_GameplayTagContainer& TagContainer, const struct GameplayTags_GameplayTag& Tag);
	bool NotEqual_TagTag(const struct GameplayTags_GameplayTag& A, const class FString& B);
	bool NotEqual_TagContainerTagContainer(const struct GameplayTags_GameplayTagContainer& A, const class FString& B);
	bool NotEqual_GameplayTagContainer(struct GameplayTags_GameplayTagContainer& A, struct GameplayTags_GameplayTagContainer& B);
	bool NotEqual_GameplayTag(const struct GameplayTags_GameplayTag& A, const struct GameplayTags_GameplayTag& B);
	bool MatchesTag(const struct GameplayTags_GameplayTag& TagOne, const struct GameplayTags_GameplayTag& TagTwo, bool bExactMatch);
	bool MatchesAnyTags(const struct GameplayTags_GameplayTag& TagOne, struct GameplayTags_GameplayTagContainer& OtherContainer, bool bExactMatch);
	struct GameplayTags_GameplayTagContainer MakeLiteralGameplayTagContainer(const struct GameplayTags_GameplayTagContainer& Value);
	struct GameplayTags_GameplayTag MakeLiteralGameplayTag(const struct GameplayTags_GameplayTag& Value);
	struct GameplayTags_GameplayTagQuery MakeGameplayTagQuery_MatchNoTags(struct GameplayTags_GameplayTagContainer& InTags);
	struct GameplayTags_GameplayTagQuery MakeGameplayTagQuery_MatchAnyTags(struct GameplayTags_GameplayTagContainer& InTags);
	struct GameplayTags_GameplayTagQuery MakeGameplayTagQuery_MatchAllTags(struct GameplayTags_GameplayTagContainer& InTags);
	struct GameplayTags_GameplayTagQuery MakeGameplayTagQuery(const struct GameplayTags_GameplayTagQuery& TagQuery);
	struct GameplayTags_GameplayTagContainer MakeGameplayTagContainerFromTag(const struct GameplayTags_GameplayTag& SingleTag);
	struct GameplayTags_GameplayTagContainer MakeGameplayTagContainerFromArray(TArray<struct GameplayTags_GameplayTag>& GameplayTags);
	bool IsTagQueryEmpty(struct GameplayTags_GameplayTagQuery& TagQuery);
	bool IsGameplayTagValid(const struct GameplayTags_GameplayTag& GameplayTag);
	bool HasTag(struct GameplayTags_GameplayTagContainer& TagContainer, const struct GameplayTags_GameplayTag& Tag, bool bExactMatch);
	bool HasAnyTags(struct GameplayTags_GameplayTagContainer& TagContainer, struct GameplayTags_GameplayTagContainer& OtherContainer, bool bExactMatch);
	bool HasAllTags(struct GameplayTags_GameplayTagContainer& TagContainer, struct GameplayTags_GameplayTagContainer& OtherContainer, bool bExactMatch);
	bool HasAllMatchingGameplayTags(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, struct GameplayTags_GameplayTagContainer& OtherContainer);
	class FName GetTagName(struct GameplayTags_GameplayTag& GameplayTag);
	int32 GetNumGameplayTagsInContainer(struct GameplayTags_GameplayTagContainer& TagContainer);
	class FString GetDebugStringFromGameplayTagContainer(struct GameplayTags_GameplayTagContainer& TagContainer);
	class FString GetDebugStringFromGameplayTag(const struct GameplayTags_GameplayTag& GameplayTag);
	void GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, struct GameplayTags_GameplayTagQuery& GameplayTagQuery, TArray<class AActor*>* OutActors);
	bool EqualEqual_GameplayTagContainer(struct GameplayTags_GameplayTagContainer& A, struct GameplayTags_GameplayTagContainer& B);
	bool EqualEqual_GameplayTag(const struct GameplayTags_GameplayTag& A, const struct GameplayTags_GameplayTag& B);
	bool DoesTagAssetInterfaceHaveTag(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, const struct GameplayTags_GameplayTag& Tag);
	bool DoesContainerMatchTagQuery(struct GameplayTags_GameplayTagContainer& TagContainer, struct GameplayTags_GameplayTagQuery& TagQuery);
	void BreakGameplayTagContainer(struct GameplayTags_GameplayTagContainer& GameplayTagContainer, TArray<struct GameplayTags_GameplayTag>* GameplayTags);
	void AppendGameplayTagContainers(struct GameplayTags_GameplayTagContainer& InOutTagContainer, struct GameplayTags_GameplayTagContainer& InTagContainer);
	void AddGameplayTag(struct GameplayTags_GameplayTagContainer& TagContainer, const struct GameplayTags_GameplayTag& Tag);
};

// 0x0 (0x28 - 0x28)
// Class GameplayTags.GameplayTagAssetInterface
class IGameplayTagAssetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IGameplayTagAssetInterface* GetDefaultObj();

	bool HasMatchingGameplayTag(const struct GameplayTags_GameplayTag& TagToCheck);
	bool HasAnyMatchingGameplayTags(struct GameplayTags_GameplayTagContainer& TagContainer);
	bool HasAllMatchingGameplayTags(struct GameplayTags_GameplayTagContainer& TagContainer);
	void GetOwnedGameplayTags(struct GameplayTags_GameplayTagContainer* TagContainer);
};

// 0x70 (0x98 - 0x28)
// Class GameplayTags.EditableGameplayTagQuery
class UEditableGameplayTagQuery : public UObject
{
public:
	class FString                                UserDescription;                                   // 0x28(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_780[0x10];                                     // Fixing Size After Last Property  
	class UEditableGameplayTagQueryExpression*   RootExpression;                                    // 0x48(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagQuery         TagQueryExportText_Helper;                         // 0x50(0x48)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQuery* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression
class UEditableGameplayTagQueryExpression : public UObject
{
public:

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct GameplayTags_GameplayTagContainer     Tags;                                              // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AnyTagsMatch* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct GameplayTags_GameplayTagContainer     Tags;                                              // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AllTagsMatch* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	struct GameplayTags_GameplayTagContainer     Tags;                                              // 0x28(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_NoTagsMatch* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AnyExprMatch* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_AllExprMatch* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	TArray<class UEditableGameplayTagQueryExpression*> Expressions;                                       // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableGameplayTagQueryExpression_NoExprMatch* GetDefaultObj();

};

// 0x270 (0x298 - 0x28)
// Class GameplayTags.GameplayTagsManager
class UGameplayTagsManager : public UObject
{
public:
	uint8                                        Pad_7C4[0x160];                                    // Fixing Size After Last Property  
	TMap<class FName, struct GameplayTags_GameplayTagSource> TagSources;                                        // 0x188(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_7C5[0xB0];                                     // Fixing Size After Last Property  
	TArray<class UDataTable*>                    GameplayTagTables;                                 // 0x288(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UGameplayTagsManager* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.GameplayTagsList
class UGameplayTagsList : public UObject
{
public:
	class FString                                ConfigFileName;                                    // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct GameplayTags_GameplayTagTableRow> GameplayTagList;                                   // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayTagsList* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayTags.RestrictedGameplayTagsList
class URestrictedGameplayTagsList : public UObject
{
public:
	class FString                                ConfigFileName;                                    // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct GameplayTags_RestrictedGameplayTagTableRow> RestrictedGameplayTagList;                         // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URestrictedGameplayTagsList* GetDefaultObj();

};

// 0x70 (0xB8 - 0x48)
// Class GameplayTags.GameplayTagsSettings
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	bool                                         ImportTagsFromConfig;                              // 0x48(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         WarnOnInvalidTags;                                 // 0x49(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearInvalidTags;                                  // 0x4A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowEditorTagUnloading;                           // 0x4B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowGameTagUnloading;                             // 0x4C(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FastReplication;                                   // 0x4D(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E3[0x2];                                      // Fixing Size After Last Property  
	class FString                                InvalidTagCharacters;                              // 0x50(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct GameplayTags_GameplayTagCategoryRemap> CategoryRemapping;                                 // 0x60(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct CoreUObject_SoftObjectPath>    GameplayTagTableList;                              // 0x70(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct GameplayTags_GameplayTagRedirect> GameplayTagRedirects;                              // 0x80(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FName>                          CommonlyReplicatedTags;                            // 0x90(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                        NumBitsForContainerSize;                           // 0xA0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NetIndexFirstBitSegment;                           // 0xA4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct GameplayTags_RestrictedConfigInfo> RestrictedConfigFiles;                             // 0xA8(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayTagsSettings* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class GameplayTags.GameplayTagsDeveloperSettings
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{
public:
	class FString                                DeveloperConfigName;                               // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FavoriteTagSource;                                 // 0x48(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplayTagsDeveloperSettings* GetDefaultObj();

};

}


