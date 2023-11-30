#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// Class AssetTags.AssetTagsSubsystem
class UAssetTagsSubsystem : public UEngineSubsystem
{
public:

	static class UClass* StaticClass();
	static class UAssetTagsSubsystem* GetDefaultObj();

	TArray<class FName> K2_GetCollectionsContainingAsset(struct CoreUObject_SoftObjectPath& AssetPath);
	TArray<class FName> GetCollectionsContainingAssetPtr(class UObject* AssetPtr);
	TArray<class FName> GetCollectionsContainingAssetData(struct CoreUObject_AssetData& AssetData);
	TArray<class FName> GetCollectionsContainingAsset(class FName AssetPathName);
	TArray<class FName> GetCollections();
	TArray<struct CoreUObject_AssetData> GetAssetsInCollection(class FName Name);
	bool CollectionExists(class FName Name);
};

}


