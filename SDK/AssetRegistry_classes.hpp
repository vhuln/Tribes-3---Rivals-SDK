#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AssetRegistry.AssetRegistryHelpers
class UAssetRegistryHelpers : public UObject
{
public:

	static class UClass* StaticClass();
	static class UAssetRegistryHelpers* GetDefaultObj();

	struct CoreUObject_SoftObjectPath ToSoftObjectPath(struct CoreUObject_AssetData& InAssetData);
	struct CoreUObject_ARFilter SetFilterTagsAndValues(struct CoreUObject_ARFilter& InFilter, TArray<struct AssetRegistry_TagAndValue>& InTagsAndValues);
	bool IsValid(struct CoreUObject_AssetData& InAssetData);
	bool IsUAsset(struct CoreUObject_AssetData& InAssetData);
	bool IsRedirector(struct CoreUObject_AssetData& InAssetData);
	bool IsAssetLoaded(struct CoreUObject_AssetData& InAssetData);
	bool GetTagValue(struct CoreUObject_AssetData& InAssetData, class FName& InTagName, class FString* OutTagValue);
	class FString GetFullName(struct CoreUObject_AssetData& InAssetData);
	class FString GetExportTextName(struct CoreUObject_AssetData& InAssetData);
	class UClass* GetClass(struct CoreUObject_AssetData& InAssetData);
	void GetBlueprintAssets(struct CoreUObject_ARFilter& InFilter, TArray<struct CoreUObject_AssetData>* OutAssetData);
	TScriptInterface<class IAssetRegistry> GetAssetRegistry();
	class UObject* GetAsset(struct CoreUObject_AssetData& InAssetData);
	class UClass* FindAssetNativeClass(struct CoreUObject_AssetData& AssetData);
	struct CoreUObject_AssetData CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);
};

// 0x0 (0x28 - 0x28)
// Class AssetRegistry.AssetRegistry
class IAssetRegistry : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAssetRegistry* GetDefaultObj();

	void WaitForPackage(const class FString& PackageName);
	void WaitForCompletion();
	void UseFilterToExcludeAssets(TArray<struct CoreUObject_AssetData>& AssetDataList, struct CoreUObject_ARFilter& Filter);
	void SearchAllAssets(bool bSynchronousSearch);
	void ScanPathsSynchronous(TArray<class FString>& InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters);
	void ScanModifiedAssetFiles(TArray<class FString>& InFilePaths);
	void ScanFilesSynchronous(TArray<class FString>& InFilePaths, bool bForceRescan);
	void RunAssetsThroughFilter(TArray<struct CoreUObject_AssetData>& AssetDataList, struct CoreUObject_ARFilter& Filter);
	void PrioritizeSearchPath(const class FString& PathToPrioritize);
	bool K2_GetReferencers(class FName PackageName, struct AssetRegistry_AssetRegistryDependencyOptions& ReferenceOptions, TArray<class FName>* OutReferencers);
	bool K2_GetDependencies(class FName PackageName, struct AssetRegistry_AssetRegistryDependencyOptions& DependencyOptions, TArray<class FName>* OutDependencies);
	struct CoreUObject_AssetData K2_GetAssetByObjectPath(struct CoreUObject_SoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets);
	bool IsSearchAsync();
	bool IsSearchAllAssets();
	bool IsLoadingAssets();
	bool HasAssets(class FName PackagePath, bool bRecursive);
	void GetSubPaths(const class FString& InBasePath, TArray<class FString>* OutPathList, bool bInRecurse);
	void GetDerivedClassNames(TArray<struct CoreUObject_TopLevelAssetPath>& ClassNames, TSet<struct CoreUObject_TopLevelAssetPath>& ExcludedClassNames, TSet<struct CoreUObject_TopLevelAssetPath>* OutDerivedClassNames);
	bool GetAssetsByPaths(const TArray<class FName>& PackagePaths, TArray<struct CoreUObject_AssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
	bool GetAssetsByPath(class FName PackagePath, TArray<struct CoreUObject_AssetData>* OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
	bool GetAssetsByPackageName(class FName PackageName, TArray<struct CoreUObject_AssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets);
	bool GetAssetsByClass(const struct CoreUObject_TopLevelAssetPath& ClassPathName, TArray<struct CoreUObject_AssetData>* OutAssetData, bool bSearchSubClasses);
	bool GetAssets(struct CoreUObject_ARFilter& Filter, TArray<struct CoreUObject_AssetData>* OutAssetData, bool bSkipARFilteredAssets);
	struct CoreUObject_AssetData GetAssetByObjectPath(class FName ObjectPath, bool bIncludeOnlyOnDiskAssets);
	bool GetAncestorClassNames(const struct CoreUObject_TopLevelAssetPath& ClassPathName, TArray<struct CoreUObject_TopLevelAssetPath>* OutAncestorClassNames);
	void GetAllCachedPaths(TArray<class FString>* OutPathList);
	bool GetAllAssets(TArray<struct CoreUObject_AssetData>* OutAssetData, bool bIncludeOnlyOnDiskAssets);
};

// 0xD50 (0xD78 - 0x28)
// Class AssetRegistry.AssetRegistryImpl
class UAssetRegistryImpl : public UObject
{
public:
	uint8                                        Pad_9E5[0xD50];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UAssetRegistryImpl* GetDefaultObj();

};

}


