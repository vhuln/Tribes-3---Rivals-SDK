#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class RallyHereStart.IconInfo
class UIconInfo : public UObject
{
public:

	static class UClass* StaticClass();
	static class UIconInfo* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class RallyHereStart.ImageIconInfo
class UImageIconInfo : public UIconInfo
{
public:
	struct CoreUObject_SoftObjectPath            IconImage;                                         // 0x28(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               IconTint;                                          // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UImageIconInfo* GetDefaultObj();

};

// 0x68 (0x98 - 0x30)
// Class RallyHereStart.ItemCollection
class UItemCollection : public UPrimaryDataAsset
{
public:
	struct Engine_PrimaryAssetRules              Rules;                                             // 0x30(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_25F[0x4];                                      // Fixing Size After Last Property  
	struct GameplayTags_GameplayTagQuery         CollectionQuery;                                   // 0x40(0x48)(Edit, NativeAccessSpecifierPublic)
	class FName                                  PrimaryAssetType;                                  // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_260[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UItemCollection* GetDefaultObj();

};

// 0x2B0 (0x780 - 0x4D0)
// Class RallyHereStart.PInv_AssetManager
class UPInv_AssetManager : public UAssetManager
{
public:
	uint8                                        Pad_268[0xA0];                                     // Fixing Size After Last Property  
	bool                                         bHasCompletedInitialAssetScan;                     // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_26B[0x1EF];                                    // Fixing Size After Last Property  
	bool                                         bIsQuickCook;                                      // 0x760(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_26C[0x7];                                      // Fixing Size After Last Property  
	TArray<class FString>                        AdditionalQuickCookPrimaryAssets;                  // 0x768(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class FName                                  CookProfile;                                       // 0x778(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPInv_AssetManager* GetDefaultObj();

};

// 0x130 (0x168 - 0x38)
// Class RallyHereStart.PInv_AssetManagerSettings
class UPInv_AssetManagerSettings : public UDeveloperSettings
{
public:
	bool                                         bQuickCook;                                        // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27C[0x7];                                      // Fixing Size After Last Property  
	TArray<class FName>                          PrimaryTypesToIgnoreQuickCook;                     // 0x40(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TSet<class FName>                            QuickCookTypeIgnoreSet;                            // 0x50(0x50)(Transient, NativeAccessSpecifierPublic)
	TArray<class FString>                        PrimaryAssetsToIgnoreQuickCook;                    // 0xA0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TSet<struct CoreUObject_PrimaryAssetId>      QuickCookAssetIgnoreSet;                           // 0xB0(0x50)(Transient, NativeAccessSpecifierPublic)
	TSet<struct CoreUObject_PrimaryAssetType>    QuickCookAssetIngoreSetTypes;                      // 0x100(0x50)(Transient, NativeAccessSpecifierPublic)
	TArray<class FString>                        PrimaryAssetsToIncludeQuickCook;                   // 0x150(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FName                                  CookProfile;                                       // 0x160(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPInv_AssetManagerSettings* GetDefaultObj();

};

// 0x138 (0x168 - 0x30)
// Class RallyHereStart.PlatformInventoryItem
class UPlatformInventoryItem : public UPrimaryDataAsset
{
public:
	class FText                                  ItemDisplayName;                                   // 0x30(0x18)(Edit, DisableEditOnInstance, DuplicateTransient, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	class FText                                  ItemDescription;                                   // 0x48(0x18)(Edit, DisableEditOnInstance, DuplicateTransient, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	class FString                                FriendlySearchName;                                // 0x60(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, DuplicateTransient, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OnlyDisplayAcqusitionIfWhitelisted;                // 0x70(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_372[0x7];                                      // Fixing Size After Last Property  
	struct GameplayTags_GameplayTagContainer     CollectionContainer;                               // 0x78(0x20)(Edit, Config, DisableEditOnInstance, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	bool                                         CanOwnMultiple;                                    // 0x98(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_374[0x3];                                      // Fixing Size After Last Property  
	struct RallyHereIntegration_RH_ItemId        ItemId;                                            // 0x9C(0x14)(Edit, DisableEditOnInstance, DuplicateTransient, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsOwnableInventoryItem;                            // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_376[0x7];                                      // Fixing Size After Last Property  
	TArray<struct RallyHereIntegration_RH_LootId> DisplayableLootIds;                                // 0xB8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UIconInfo*                             ItemIconInfo;                                      // 0xC8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct RallyHereStart_IconReference>  Icons;                                             // 0xD0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EExternalSkuSource, class FString> ExternalProductSkus;                               // 0xE0(0x50)(Edit, Config, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<struct RallyHereIntegration_RH_LootId> BlackListedLootIds;                                // 0x130(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_37A[0x28];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPlatformInventoryItem* GetDefaultObj();

	bool ShouldDisplayToUser(struct RallyHereIntegration_RH_LootId& LootId);
	void SetItemName(class FText NewItemDisplayName);
	void SetItemDescription(class FText NewItemDescription);
	void SetFriendlySearchName(const class FString& InFriendlyName);
	void SetCollectionContainer(struct GameplayTags_GameplayTagContainer& InContainer);
	bool IsItemTempDisabled();
	bool IsItemDisabled(bool bIncludeTempDisabled);
	void GetTextureAsync(TSoftObjectPtr<class UTexture2D>* Texture, FDelegateProperty_& IconLoadedEvent);
	class FString GetItemNameAsString();
	class FText GetItemName();
	struct RallyHereIntegration_RH_ItemId GetItemId();
	class UIconInfo* GetItemIconInfo();
	class FString GetItemDescriptionAsString();
	class FText GetItemDescription();
	TSoftObjectPtr<class UPlatformInventoryItem> GetItemByFriendlyName(const class FString& InFriendlyName);
	bool GetIconInfoByName(class FName IconType, class UIconInfo** Icon);
	class FString GetFriendlySearchName();
	struct GameplayTags_GameplayTagContainer GetCollectionContainer();
	void BLUEPRINT_IsRented(class URH_PlayerInfo* PlayerInfo, FDelegateProperty_& Delegate);
	void BLUEPRINT_IsOwned(class URH_PlayerInfo* PlayerInfo, FDelegateProperty_& Delegate);
	void BLUEPRINT_GetQuantityOwned(class URH_PlayerInfo* PlayerInfo, FDelegateProperty_& Delegate);
	void BLUEPRINT_CanOwnMore(class URH_PlayerInfo* PlayerInfo, FDelegateProperty_& Delegate);
};

// 0x58 (0x80 - 0x28)
// Class RallyHereStart.RH_PlatformStoreAssetOwnershipHelper
class URH_PlatformStoreAssetOwnershipHelper : public UObject
{
public:
	uint8                                        Pad_385[0x50];                                     // Fixing Size After Last Property  
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_PlatformStoreAssetOwnershipHelper* GetDefaultObj();

};

// 0x28 (0x190 - 0x168)
// Class RallyHereStart.PlatformStoreAsset
class UPlatformStoreAsset : public UPlatformInventoryItem
{
public:
	struct RallyHereIntegration_RH_LootId        LootId;                                            // 0x168(0x14)(Edit, DisableEditOnInstance, DuplicateTransient, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391[0x4];                                      // Fixing Size After Last Property  
	TArray<class URH_PlatformStoreAssetOwnershipHelper*> PendingOwnershipRequests;                          // 0x180(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPlatformStoreAsset* GetDefaultObj();

	struct RallyHereIntegration_RH_LootId GetLootId();
};

// 0x78 (0xA0 - 0x28)
// Class RallyHereStart.PlayerExperienceGlobals
class UPlayerExperienceGlobals : public UObject
{
public:
	bool                                         Enabled;                                           // 0x28(0x1)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A2[0x7];                                      // Fixing Size After Last Property  
	struct CoreUObject_SoftClassPath             PlayerExperienceGlobalsClassName;                  // 0x30(0x20)(ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             MatchTrackerClassName;                             // 0x50(0x20)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerExp_MatchTracker*               ActiveMatchTracker;                                // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             MatchReportSenderClassName;                        // 0x78(0x20)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerExp_MatchReportSender*          MatchReportSender;                                 // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UPlayerExperienceGlobals* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class RallyHereStart.PlayerExp_MatchReportSender
class UPlayerExp_MatchReportSender : public UObject
{
public:
	bool                                         bInitialized;                                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3C4[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPlayerExp_MatchReportSender* GetDefaultObj();

};

// 0x278 (0x2A0 - 0x28)
// Class RallyHereStart.PlayerExp_MatchTracker
class UPlayerExp_MatchTracker : public UObject
{
public:
	TSubclassOf<class UPlayerExp_PlayerTracker>  PlayerTrackerClass;                                // 0x28(0x8)(ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HostName;                                          // 0x30(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                SessionId;                                         // 0x40(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                InstanceId;                                        // 0x50(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                AllocationId;                                      // 0x60(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Region;                                            // 0x70(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UGameInstance>          OwningGameInstance;                                // 0x80(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPlayerExp_PlayerTracker*>      Players;                                           // 0x88(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D4[0x50];                                     // Fixing Size After Last Property  
	bool                                         bInitialized;                                      // 0xE8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3D7[0x7];                                      // Fixing Size After Last Property  
	class UClass*                                LoadedPlayerTrackerClass;                          // 0xF0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMatchInProgress;                                  // 0xF8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3DA[0x7];                                      // Fixing Size After Last Property  
	double                                       MatchStartTimeSeconds;                             // 0x100(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       MatchEndTime;                                      // 0x108(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       MatchDuration;                                     // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_DateTime                  MatchStartTime;                                    // 0x118(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoStartMatch;                                   // 0x120(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoSendReportOnMatchEnded;                       // 0x121(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         MatchIsFubar;                                      // 0x122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E0[0x5];                                      // Fixing Size After Last Property  
	class FString                                FubarReason;                                       // 0x128(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct RallyHereStart_PlayerExp_StatAccumulator FrameTimeStats;                                    // 0x138(0xC8)(Protected, NativeAccessSpecifierProtected)
	double                                       LastTime;                                          // 0x200(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E3[0x10];                                     // Fixing Size After Last Property  
	class UPlayerExp_MatchReportSender*          MatchReportSender;                                 // 0x218(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E5[0x50];                                     // Fixing Size After Last Property  
	TWeakObjectPtr<class AGameModeBase>          ActiveGameMode;                                    // 0x270(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E6[0x28];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UPlayerExp_MatchTracker* GetDefaultObj();

};

// 0x2B0 (0x350 - 0xA0)
// Class RallyHereStart.PlayerExp_PlayerComponent
class UPlayerExp_PlayerComponent : public UActorComponent
{
public:
	struct RallyHereStart_PlayerExp_StatAccumulator FrameTimeStats;                                    // 0xA0(0xC8)(Transient, NativeAccessSpecifierPublic)
	double                                       StatUpdateTime;                                    // 0x168(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_PlayerExp_StatAccumulator PingStats;                                         // 0x170(0xC8)(Transient, NativeAccessSpecifierPublic)
	int32                                        NumHitchesDetected;                                // 0x238(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumServerCorrections;                              // 0x23C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InTotalPackets;                                    // 0x240(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InTotalPacketsLost;                                // 0x244(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutTotalPackets;                                   // 0x248(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutTotalPacketsLost;                               // 0x24C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UPlayerExp_PlayerTracker> OwningPlayerTracker;                               // 0x250(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       LastTime;                                          // 0x258(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct RallyHereStart_PlayerExp_StatAccumulator FrameTimeStats_Period;                             // 0x260(0xC8)(Transient, Protected, NativeAccessSpecifierProtected)
	int32                                        NumHitchesDetected_Period;                         // 0x328(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        UpdateToServerPeriod;                              // 0x32C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimeUntilNextAccumulation;                         // 0x330(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRecordNetCorrections;                             // 0x334(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_415[0x3];                                      // Fixing Size After Last Property  
	float                                        LastNetCorrectionTimeStamp;                        // 0x338(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        RequiredNumSamplesForHitchDetection;               // 0x33C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       HitchDetectionThreshold;                           // 0x340(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayerController*                     CachedPCOwner;                                     // 0x348(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPlayerExp_PlayerComponent* GetDefaultObj();

	void ServerFrameTimeUpdate(struct RallyHereStart_PlayerExp_StatAccumulator& InFrameTimeStats, int32 InHitchesDetected);
};

// 0x218 (0x240 - 0x28)
// Class RallyHereStart.PlayerExp_PlayerTracker
class UPlayerExp_PlayerTracker : public UObject
{
public:
	TWeakObjectPtr<class APlayerController>      PlayerController;                                  // 0x28(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       TimeConnected;                                     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       LastConnectedTimestamp;                            // 0x38(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Ipv4_address;                                      // 0x40(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Ipv6_address;                                      // 0x50(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  OnlinePlatformName;                                // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Connections;                                       // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Disconnections;                                    // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ConnectionTimeouts;                                // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        InTotalPackets;                                    // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        InTotalPacketsLost;                                // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OutTotalPackets;                                   // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        OutTotalPacketsLost;                               // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_42E[0x4];                                      // Fixing Size After Last Property  
	struct RallyHereStart_PlayerExp_StatAccumulator PingStats;                                         // 0x88(0xC8)(Protected, NativeAccessSpecifierProtected)
	struct RallyHereStart_PlayerExp_StatAccumulator FrameTimeStats;                                    // 0x150(0xC8)(Protected, NativeAccessSpecifierProtected)
	int32                                        NumHitchesDetected;                                // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumServerCorrections;                              // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UPlayerExp_PlayerComponent> PlayerComponentClass;                              // 0x220(0x8)(ZeroConstructor, Config, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UPlayerExp_PlayerComponent> ActivePlayerComponent;                             // 0x228(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x230(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPlayerExp_PlayerTracker* GetDefaultObj();

};

// 0x50 (0x1B8 - 0x168)
// Class RallyHereStart.RHActivity
class URHActivity : public UPlatformInventoryItem
{
public:
	struct RallyHereIntegration_RH_ItemId        RequiredItemId;                                    // 0x168(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct RallyHereIntegration_RH_LootId        ProgressLootId;                                    // 0x17C(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class URHActivityInstance>     ActivityInstanceClass;                             // 0x190(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHActivity* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class RallyHereStart.RHActivityInstance
class URHActivityInstance : public UObject
{
public:
	TWeakObjectPtr<class ARHPlayerController>    OwningController;                                  // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHActivity*                           Activity;                                          // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_444[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHActivityInstance* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class RallyHereStart.RHAnalogStickFilter
class URHAnalogStickFilter : public UObject
{
public:
	enum class EAnalogStickType                  StickType;                                         // 0x28(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44F[0x7];                                      // Fixing Size After Last Property  
	class URHPlayerInput*                        PlayerInput;                                       // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHAnalogStickFilter* GetDefaultObj();

};

// 0xA0 (0x570 - 0x4D0)
// Class RallyHereStart.RH_AssetManager
class URH_AssetManager : public UAssetManager
{
public:
	TMap<int32, struct CoreUObject_PrimaryAssetId> ItemIdMap;                                         // 0x4D0(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<int32, class URH_ItemAsset*>            ItemAssetMap;                                      // 0x520(0x50)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URH_AssetManager* GetDefaultObj();

};

// 0x90 (0xC0 - 0x30)
// Class RallyHereStart.RH_ItemAsset
class URH_ItemAsset : public UPrimaryDataAsset
{
public:
	int32                                        ItemId;                                            // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, DuplicateTransient, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Enabled;                                           // 0x34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Transient;                                         // 0x35(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45F[0x2];                                      // Fixing Size After Last Property  
	struct GameplayTags_GameplayTagContainer     GameplayTags;                                      // 0x38(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, DuplicateTransient, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x58(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, DuplicateTransient, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x70(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, DuplicateTransient, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x88(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, DuplicateTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxStackSize;                                      // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IncrementLootId;                                   // 0xB4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DecrementLootId;                                   // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_460[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_ItemAsset* GetDefaultObj();

};

// 0x58 (0x330 - 0x2D8)
// Class RallyHereStart.RHAsyncImage
class URHAsyncImage : public UImage
{
public:
	class UWidget*                               WaitingWidget;                                     // 0x2D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnAsyncImageLoadStarted;                           // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAsyncImageLoadComplete;                          // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAsyncImageLoadCanceled;                          // 0x300(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAsyncImageBrushChanged;                          // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              MaterialToUse;                                     // 0x320(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialParameter;                                 // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHAsyncImage* GetDefaultObj();

	void ShowWaitingWidget();
	void SetWaitingWidget(class UWidget* InWaitingWidget);
	void SetMaterialToUse(class UMaterialInstanceDynamic* InMID);
	void SetBrushFromTextureOnItem(class UPlatformInventoryItem* Item, TSoftObjectPtr<class UTexture2D> Texture, bool bMatchSize);
	void SetBrushFromSoftPath(struct CoreUObject_SoftObjectPath& SoftPath, bool bMatchSize);
	void SetBrushFromPathOnItem(class UPlatformInventoryItem* Item, struct CoreUObject_SoftObjectPath& Path, bool bMatchSize);
	void SetBrushFromItemIcon(class UPlatformInventoryItem* Item, bool bMatchSize);
	void SetBrushFromIconInfo(class UIconInfo* IconInfo, bool bMatchSize);
	bool IsCurrentlyAsyncLoading();
	void HideWaitingWidget();
};

// 0x8 (0x170 - 0x168)
// Class RallyHereStart.RHAvatar
class URHAvatar : public UPlatformInventoryItem
{
public:
	class UIconInfo*                             LargeAvatarIconInfo;                               // 0x168(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHAvatar* GetDefaultObj();

	class UIconInfo* GetLargeAvatarInfo();
};

// 0x10 (0x178 - 0x168)
// Class RallyHereStart.RHBanner
class URHBanner : public UPlatformInventoryItem
{
public:
	class UIconInfo*                             SmallBannerIconInfo;                               // 0x168(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UIconInfo*                             LargeBannerIconInfo;                               // 0x170(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHBanner* GetDefaultObj();

	class UIconInfo* GetSmallBannerInfo();
	class UIconInfo* GetLargeBannerInfo();
};

// 0x10 (0x38 - 0x28)
// Class RallyHereStart.RHBattlepassRewardItem
class URHBattlepassRewardItem : public UObject
{
public:
	class URHStoreItem*                          Item;                                              // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBattlepassTrackType              Track;                                             // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52D[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHBattlepassRewardItem* GetDefaultObj();

	int32 GetRewardLevel();
};

// 0x20 (0x48 - 0x28)
// Class RallyHereStart.RHBattlepassLevel
class URHBattlepassLevel : public UObject
{
public:
	int32                                        LevelNumber;                                       // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StartXp;                                           // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EndXp;                                             // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_540[0x4];                                      // Fixing Size After Last Property  
	TArray<class URHBattlepassRewardItem*>       RewardItems;                                       // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHBattlepassLevel* GetDefaultObj();

	int32 GetXPSpan();
};

// 0x8 (0x170 - 0x168)
// Class RallyHereStart.RHEvent
class URHEvent : public UPlatformInventoryItem
{
public:
	uint8                                        Pad_55C[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHEvent* GetDefaultObj();

	int32 GetRemainingSeconds(class UObject* WorldContextObject);
};

// 0xA0 (0x210 - 0x170)
// Class RallyHereStart.RHBattlepass
class URHBattlepass : public URHEvent
{
public:
	struct RallyHereIntegration_RH_ItemId        ProgressItemId;                                    // 0x170(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstantUnlockRewardVendorId;                       // 0x184(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FreeRewardVendorId;                                // 0x188(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PremiumRewardVendorId;                             // 0x18C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PurchaseVendorId;                                  // 0x190(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_LootId        PassPurchaseLootId;                                // 0x194(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_LootId        LevelPurchaseLootId;                               // 0x1A8(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_LootId        MatchProgressLootId;                               // 0x1BC(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        XpTableId;                                         // 0x1D0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5F3[0x4];                                      // Fixing Size After Last Property  
	class UIconInfo*                             FreeIconInfo;                                      // 0x1D8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UIconInfo*                             PremiumIconInfo;                                   // 0x1E0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URHBattlepassLevel*>            CachedBattlepassLevels;                            // 0x1E8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class URHBattlepassRewardItem*>       CachedInstantUnlocks;                              // 0x1F8(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         RewardsFullyLoaded;                                // 0x208(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         InstantUnlocksFullyLoaded;                         // 0x209(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5FD[0x6];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHBattlepass* GetDefaultObj();

	class UIconInfo* GetPremiumIconInfo();
	TArray<class URHBattlepassLevel*> GetLevels(class UObject* WorldContextObject);
	int32 GetLevelCount(class UObject* WorldContextObject);
	TArray<class URHBattlepassRewardItem*> GetInstantUnlockRewards(class UObject* WorldContextObject);
	class UIconInfo* GetFreeIconInfo();
	class URHBattlepassLevel* GetBattlepassLevel(int32 LevelNumber);
	void BLUEPRINT_GetTotalXpProgress(class URH_PlayerInfo* PlayerInfo, FDelegateProperty_& Delegate);
	void BLUEPRINT_GetCurrentLevel(class URH_PlayerInfo* PlayerInfo, FDelegateProperty_& Delegate);
};

// 0x290 (0x550 - 0x2C0)
// Class RallyHereStart.RHWidget
class URHWidget : public UUserWidget
{
public:
	bool                                         bIsUIOnlyWidget;                                   // 0x2C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsExclusiveMenuWidget;                            // 0x2C1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_971[0x6];                                      // Fixing Size After Last Property  
	class UTickAnimationManager*                 TickAnimations;                                    // 0x2C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FDelegateProperty_                           ViewportEvent;                                     // 0x2D0(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnNavigateBack;                                    // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTextureLoadComplete;                             // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNavigateUpFailed;                                // 0x300(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNavigateDownFailed;                              // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNavigateLeftFailed;                              // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNavigateRightFailed;                             // 0x330(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFocusGroupNavigateUpFailed;                      // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFocusGroupNavigateDownFailed;                    // 0x350(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFocusGroupNavigateLeftFailed;                    // 0x360(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFocusGroupNavigateRightFailed;                   // 0x370(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHideSequenceFinished;                            // 0x380(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnShowSequenceFinished;                            // 0x390(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGamepadHovered;                                  // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMouseEntered;                                    // 0x3B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ARHHUDCommon>           MyHud;                                             // 0x3C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  MyRouteName;                                       // 0x3C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CloseOnLogout;                                     // 0x3D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsComponent;                                       // 0x3D1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         StartsHidden;                                      // 0x3D2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         InputComponentUsesWidgetPriority;                  // 0x3D3(0x1)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         UsesBlocker;                                       // 0x3D4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         BlockerClickToClose;                               // 0x3D5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         EnableGameStateSetNotify;                          // 0x3D6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_983[0x9];                                      // Fixing Size After Last Property  
	TSoftObjectPtr<class UTexture2D>             LoadedTexture;                                     // 0x3E0(0x28)(BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_986[0x130];                                    // Fixing Size After Last Property  
	class URHMobileLayoutSequencePlayer*         MobileLayoutSequencePlayer;                        // 0x538(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      MobileLayoutAnim;                                  // 0x540(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bMobileLayoutActive;                               // 0x548(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        RegisterForHudBinding : 1;                         // Mask: 0x1, PropSize: 0x10x549(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_98B[0x6];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHWidget* GetDefaultObj();

	void UpdateRegistrationToInputManager(class UWidget* Widget, int32 FocusGroup, class UWidget* Up, class UWidget* Down, class UWidget* Left, class UWidget* Right);
	void UnregisterWidgetFromInputManager(class UWidget* Widget);
	void UnregisterFocusGroup(int32 FocusGroup);
	void UninitializeWidget();
	void UnbindFromViewportSizeChange();
	void TriggerGlobalInvalidate();
	void ToggleMobileLayout(enum class ERH_INPUT_STATE InputState);
	bool SwapViewRoute(class FName RouteName, class FName SwapTargetRoute, bool ForceTransition);
	void StopTickAnimation(class FName AnimName);
	void StartShowSequence(class FName FromRoute, class FName ToRoute);
	void StartHideSequence(class FName FromRoute, class FName ToRoute);
	void SkipToEndTickAnimation(class FName AnimName);
	void ShowWidget();
	bool ShouldUseMobileLayout();
	void SetRouteName(class FName RouteName);
	void SetPendingRouteData(class FName RouteName, class UObject* Data);
	void SetFocusToWidgetOfGroup(int32 FocusGroup, class URHWidget* Widget);
	class UWidget* SetFocusToThis();
	void SetFocusToGroup(int32 FocusGroup, bool KeepLastFocus);
	void SetDefaultFocusForGroup(class UWidget* Widget, int32 FocusGroup);
	void SetContextHoldReleaseAction(class FName ContextName, FDelegateProperty_& UpdateCallback, FDelegateProperty_& EventCallback);
	void SetContextCycleAction(class FName ContextName, FDelegateProperty_& EventCallback);
	void SetContextAction(class FName ContextName, FDelegateProperty_& EventCallback);
	void SetAllAnimationsPlaybackSpeed(float PlaybackSpeed);
	void ResumeTickAnimation(class FName AnimName);
	bool RemoveViewRoute(class FName RouteName, bool ForceTransition);
	bool RemoveTopViewRoute(bool ForceTransition);
	void RemoveTickAnimation(class FName AnimName);
	void RegisterWidgetToInputManager(class UWidget* Widget, int32 FocusGroup, class UWidget* Up, class UWidget* Down, class UWidget* Left, class UWidget* Right);
	void PlayTickAnimation(class FName AnimName);
	void PauseTickAnimation(class FName AnimName);
	void OnShownFinished();
	void OnShown();
	void OnHudInitComplete();
	void OnHudBindingReady();
	void OnHide();
	void OnGamepadUnhover();
	void OnGamepadHover();
	void OnExitMobileLayout();
	void OnEnterMobileLayout();
	void NavigateUpFailure();
	void NavigateRightFailure();
	void NavigateLeftFailure();
	void NavigateDownFailure();
	bool NavigateConfirmPressed();
	void NavigateConfirmCancelled();
	bool NavigateConfirm();
	bool NavigateBackPressed();
	void NavigateBackCancelled();
	bool NavigateBack();
	void NativeFocusGroupNavigateUpFailure(int32 FocusGroup, class URHWidget* Widget);
	void NativeFocusGroupNavigateRightFailure(int32 FocusGroup, class URHWidget* Widget);
	void NativeFocusGroupNavigateLeftFailure(int32 FocusGroup, class URHWidget* Widget);
	void NativeFocusGroupNavigateDownFailure(int32 FocusGroup, class URHWidget* Widget);
	bool IsTopViewRoute();
	bool IsFocusEnabled();
	void InitializeWidgetNavigation();
	void InitializeWidgetButtonListeners();
	void InitializeWidget();
	void InitializeTickAnimations();
	void InheritFocusGroupFromWidget(int32 TargetFocusGroupNum, class URHWidget* SourceWidget, int32 SourceFocusGroupNum);
	void HudInitComplete();
	void HudBindingReady();
	void HideWidget();
	class URHViewManager* GetViewManager();
	bool GetUsesBlocker();
	bool GetTickAnimationInfo(class FName AnimName, struct RallyHereStart_TickAnimationParams* OutAnimParams);
	bool GetPendingRouteData(class FName RouteName, class UObject** Data);
	class APlayerController* GetNormalOwningPlayer();
	class URHWidget* GetNextWidgetInGridFocusGroup(int32 FocusGroupNum);
	bool GetIsComponent();
	struct SlateCore_Geometry GetGeometryFromLastTick();
	bool GetCurrentFocusGroup(int32* OutFocusGroup);
	class UWidget* GetCurrentFocusForGroup(int32 FocusGroup);
	bool GetBlockerClickToClose();
	class APlayerController* GetActivePlayerController();
	void GameStateSet(class AGameStateBase* GameState);
	void GamepadUnhover();
	void GamepadHover();
	struct UMG_EventReply GamepadButtonUp(const struct InputCore_Key& Button);
	struct UMG_EventReply GamepadButtonDown(const struct InputCore_Key& Button);
	void FocusGroupNavigateUpFailure(int32 FocusGroup);
	void FocusGroupNavigateRightFailure(int32 FocusGroup);
	void FocusGroupNavigateLeftFailure(int32 FocusGroup);
	void FocusGroupNavigateDownFailure(int32 FocusGroup);
	bool ExplicitNavigateUp();
	bool ExplicitNavigateRight();
	bool ExplicitNavigateLeft();
	bool ExplicitNavigateDown();
	void DisplayGenericPopup(const class FString& STitle, const class FString& SDesc);
	void DisplayGenericError(const class FString& SDesc);
	void ClearNavigationInputThrottle();
	void ClearContextAction(class FName ContextName);
	void ClearAllContextActions();
	bool CanCloseOnLogout();
	void CallOnShowSequenceFinished();
	void CallOnHideSequenceFinished();
	void BindToViewportSizeChange(FDelegateProperty_& InViewportEvent);
	void BindToInputManager(int32 DefaultFocusGroup);
	void AsyncLoadTexture2D(TSoftObjectPtr<class UTexture2D> Texture2DRef);
	bool AddViewRoute(class FName RouteName, bool ClearRouteStack, bool ForceTransition, class UObject* Data);
	void AddTickAnimation(class FName AnimName, float Duration, FDelegateProperty_& UpdateEvent, FDelegateProperty_& FinishedEvent);
	void AddContextActions(const TArray<class FName>& ContextNames);
	void AddContextAction(class FName ContextName, class FText FormatAdditive);
};

// 0x20 (0x570 - 0x550)
// Class RallyHereStart.RHProgressMeterWidgetBase
class URHProgressMeterWidgetBase : public URHWidget
{
public:
	uint8                                        Pad_A3D[0x20];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHProgressMeterWidgetBase* GetDefaultObj();

	void SetDeltaAnimationParams(float BasePercent, float DeltaPercent, float AnimTime);
	void PlayDeltaAnimation(float StartDelay);
	void OnDeltaAnimationTicked();
	void OnDeltaAnimationStarted();
	void OnDeltaAnimationFinished(bool bLevelChange);
	bool IsPlayingDeltaAnimation();
	void EnableDeltaAnimation();
	void ApplyMeterPercentages_Raw(float BasePercent, float DeltaPercent);
	void ApplyMeterPercentages(float BasePercent, float DeltaPercent);
};

// 0x0 (0x570 - 0x570)
// Class RallyHereStart.RHBattlepassRewardsTrackSegment
class URHBattlepassRewardsTrackSegment : public URHProgressMeterWidgetBase
{
public:

	static class UClass* StaticClass();
	static class URHBattlepassRewardsTrackSegment* GetDefaultObj();

	void UpdateFromRewardItem(class URHBattlepass* Battlepass, class URHBattlepassRewardItem* BattlepassRewardItem, class URH_PlayerInfo* PlayerInfo);
	struct CoreUObject_LinearColor GetStandardBackgroundColor();
	struct CoreUObject_LinearColor GetPremiumBackgroundColor();
	struct CoreUObject_LinearColor GetBattlePassPremiumColor();
	struct CoreUObject_LinearColor GetBattlePassFreeColor();
	void ApplySegmentProgress(float ProgressPercent);
	void ApplySegmentMeterColor(const struct CoreUObject_LinearColor& MeterColor);
	void ApplySegmentLabel(class FText& LabelText);
	void ApplySegmentBackgroundColor(const struct CoreUObject_LinearColor& BackgroundColor);
};

// 0x30 (0x580 - 0x550)
// Class RallyHereStart.RHBattlepassTrackWidget
class URHBattlepassTrackWidget : public URHWidget
{
public:
	int32                                        CurrentPage;                                       // 0x550(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumPages;                                          // 0x554(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URHWidget*>                     ItemButtons;                                       // 0x558(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class URHBattlepass*                         Battlepass;                                        // 0x568(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URHBattlepassRewardItem*>       RewardItems;                                       // 0x570(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHBattlepassTrackWidget* GetDefaultObj();

	void SetBattlepass(class URHBattlepass* Battlepass);
	void GetRewardItemsForPage(int32 Index, TArray<class URHBattlepassRewardItem*>* RewardItems);
};

// 0x8 (0x558 - 0x550)
// Class RallyHereStart.RHBattlepassWidget
class URHBattlepassWidget : public URHWidget
{
public:
	class URHBattlepass*                         DisplayedBattlepass;                               // 0x550(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHBattlepassWidget* GetDefaultObj();

	void ShowPurchaseBattlepassTiers(int32 TierCount);
	void ShowPurchaseBattlepass();
};

// 0x0 (0x28 - 0x28)
// Class RallyHereStart.RH_BlueprintLibrary
class URH_BlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URH_BlueprintLibrary* GetDefaultObj();

	class URHS_PlayerInfoSubsystem* GetPlayerInfoSubsystem(class UObject* WorldContextObject);
	class URH_SettingsSubsystem* GetLocalSettingsSubsystem(class UObject* WorldContextObject);
	class URH_LocalPlayerSubsystem* GetLocalPlayerSubsystem(class UObject* WorldContextObject);
	class URHS_PlayerInventory* GetLocalPlayerInventory(class UObject* WorldContextObject);
	class URH_PlayerInfo* GetLocalPlayerInfo(class UObject* WorldContextObject);
};

// 0x10 (0x178 - 0x168)
// Class RallyHereStart.RHBorder
class URHBorder : public UPlatformInventoryItem
{
public:
	class UIconInfo*                             SmallBorderIconInfo;                               // 0x168(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UIconInfo*                             LargeBorderIconInfo;                               // 0x170(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHBorder* GetDefaultObj();

	class UIconInfo* GetSmallBorderInfo();
	class UIconInfo* GetLargeBorderInfo();
};

// 0x20 (0x58 - 0x38)
// Class RallyHereStart.RHBoxDeadZoneFilter
class URHBoxDeadZoneFilter : public URHAnalogStickFilter
{
public:
	struct CoreUObject_Vector2D                  InnerDeadZone;                                     // 0x38(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Vector2D                  OuterDeadZone;                                     // 0x48(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHBoxDeadZoneFilter* GetDefaultObj();

};

// 0x0 (0x1A8 - 0x1A8)
// Class RallyHereStart.RHCanvasPanel
class URHCanvasPanel : public UCanvasPanel
{
public:

	static class UClass* StaticClass();
	static class URHCanvasPanel* GetDefaultObj();

	void PlaceWidgetUnder(class UUserWidget* BottomWidget, class UUserWidget* TopWidget);
};

// 0x8 (0x40 - 0x38)
// Class RallyHereStart.RHCircleDeadZoneFilter
class URHCircleDeadZoneFilter : public URHAnalogStickFilter
{
public:
	float                                        DeadZoneRadius;                                    // 0x38(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CardinalDeadZoneHalfWidth;                         // 0x3C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHCircleDeadZoneFilter* GetDefaultObj();

};

// 0x60 (0x5B0 - 0x550)
// Class RallyHereStart.RHContextBar
class URHContextBar : public URHWidget
{
public:
	TSubclassOf<class URHContextBarPrompt>       PromptWidgetClass;                                 // 0x550(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct SlateCore_Margin                      LeftPromptMargin;                                  // 0x558(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct SlateCore_Margin                      CenterPromptMargin;                                // 0x568(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct SlateCore_Margin                      RightPromptMargin;                                 // 0x578(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        LeftContainer;                                     // 0x588(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        CenterContainer;                                   // 0x590(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        RightContainer;                                    // 0x598(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URHContextBarPrompt*>           PromptPool;                                        // 0x5A0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHContextBar* GetDefaultObj();

	void RefreshContextBar();
};

// 0x10 (0x560 - 0x550)
// Class RallyHereStart.RHContextBarPrompt
class URHContextBarPrompt : public URHWidget
{
public:
	class UContextActionData*                    ContextActionData;                                 // 0x550(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsPoolable;                                        // 0x558(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B6C[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHContextBarPrompt* GetDefaultObj();

	void OnInputStateChanged(enum class ERH_INPUT_STATE InputState);
	void OnContextActionUpdated(class UContextActionData* InData);
	void HandleInputStateChanged(enum class ERH_INPUT_STATE InputState);
	class UContextActionData* GetContextActionData();
};

// 0x60 (0x5B0 - 0x550)
// Class RallyHereStart.RHContextMenu
class URHContextMenu : public URHWidget
{
public:
	FMulticastInlineDelegateProperty_            OnContextOptionsUpdated;                           // 0x550(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnReportPlayer;                                    // 0x560(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnContextOptionCompleted;                          // 0x570(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	enum class EPlayerContextMenuContext         MenuContext;                                       // 0x580(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowReportPlayer;                                // 0x581(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BC2[0x6];                                      // Fixing Size After Last Property  
	class URH_RHFriendAndPlatformFriend*         CurrentFriend;                                     // 0x588(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URHContextMenuButton*>          ContextMenuButtons;                                // 0x590(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	enum class EViewSide                         MenuViewSide;                                      // 0x5A0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BC7[0x3];                                      // Fixing Size After Last Property  
	int32                                        CachedQueuedOrInMatch;                             // 0x5A4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCachedReportedPlayer;                             // 0x5A8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BCC[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHContextMenu* GetDefaultObj();

	void SetOptionsVisibility();
	struct CoreUObject_Vector2D SetMenuPosition(class URHWidget* WidgetToMove, const struct SlateCore_Margin& WidgetPadding, enum class EViewSide Side, float MenuWidth, float MenuHeight);
	void SetCurrentFriend(class URH_RHFriendAndPlatformFriend* Friend);
	void RemoveRHFriend();
	void RemoveContextMenuButton(class URHContextMenuButton* ContextButton);
	bool OnOptionSelected(enum class EPlayerContextOptions ContextOption);
	void HandleOnQueueStatusChange(enum class ERH_MatchStatus QueueStatus);
	class URHQueueDataFactory* GetQueueDataFactory();
	class URHPartyManager* GetPartyManager();
	class URHContextMenuButton* GetContextButtonByEnum(enum class EPlayerContextOptions ContextOption);
	void ClearAllContextMenuButton();
	void AddContextMenuButton(class URHContextMenuButton* ContextButton);
};

// 0x8 (0x558 - 0x550)
// Class RallyHereStart.RHContextMenuButton
class URHContextMenuButton : public URHWidget
{
public:
	enum class EPlayerContextOptions             ContextOption;                                     // 0x550(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF9[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHContextMenuButton* GetDefaultObj();

	void SetContextOption(enum class EPlayerContextOptions Context);
	void HandleVisibility(bool IsVisibility);
	void HandleActive(bool IsActive);
	enum class EPlayerContextOptions GetContextOption();
};

// 0x40 (0x1A8 - 0x168)
// Class RallyHereStart.RHCurrency
class URHCurrency : public UPlatformInventoryItem
{
public:
	bool                                         IsDLCVoucher;                                      // 0x168(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1B[0x3];                                      // Fixing Size After Last Property  
	int32                                        SortOrder;                                         // 0x16C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             CurrencyDataByQtyTable;                            // 0x170(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UIconInfo*                             FullSplashIconInfo;                                // 0x198(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UIconInfo*                             SmallIconIconInfo;                                 // 0x1A0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHCurrency* GetDefaultObj();

	class UIconInfo* GetSmallIcon();
	class UIconInfo* GetFullSplash();
	bool GetCurrencyDataForQuantity(int32 Quantity, struct RallyHereStart_CurrencyImageRow* Data);
};

// 0x0 (0x550 - 0x550)
// Class RallyHereStart.RHCurrencyDisplay
class URHCurrencyDisplay : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class URHCurrencyDisplay* GetDefaultObj();

	void SetInventoryCountOnText(struct RallyHereIntegration_RH_ItemId& ItemId, class UTextBlock* TextBlock);
	void SetCurrentDisplayByItem(class URHStoreItem* StoreItem);
};

// 0x8 (0x558 - 0x550)
// Class RallyHereStart.RHCustomBrowser
class URHCustomBrowser : public URHWidget
{
public:
	TSubclassOf<class URHCustomBrowserEntry>     BrowserEntryWidgetClass;                           // 0x550(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHCustomBrowser* GetDefaultObj();

	void HandleSearchResultReceived(const TArray<class URH_SessionView*>& CustomSessions);
	class URHQueueDataFactory* GetQueueDataFactory();
	class UPanelWidget* GetBrowserEntriesContainer();
	void DisplayResult(TArray<class URH_SessionView*>& CustomSessions);
};

// 0x8 (0x558 - 0x550)
// Class RallyHereStart.RHCustomBrowserEntry
class URHCustomBrowserEntry : public URHWidget
{
public:
	uint8                                        Pad_C78[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHCustomBrowserEntry* GetDefaultObj();

	void SetCustomGameInfo(class URH_SessionView* InSession);
	bool JoinGame();
	class URHQueueDataFactory* GetQueueDataFactory();
	int32 GetPlayerCount();
	int32 GetMaxPlayerCount();
	class FString GetGameDisplayName();
};

// 0xD8 (0x628 - 0x550)
// Class RallyHereStart.RHCustomGameLobby
class URHCustomGameLobby : public URHWidget
{
public:
	uint8                                        Pad_CF8[0x10];                                     // Fixing Size After Last Property  
	int32                                        NumTeamPlayers;                                    // 0x560(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumSpectators;                                     // 0x564(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class URHCustomLobbyPlayer>      LobbyPlayerWidgetClass;                            // 0x568(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<int32, class UPanelWidget*>             TeamNumToTeamPanelMap;                             // 0x570(0x50)(BlueprintVisible, ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int32                                        SpectatorTeamNum;                                  // 0x5C0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CFD[0x4];                                      // Fixing Size After Last Property  
	TMap<int32, struct RallyHereStart_CustomLobbyTeam> TeamNumToTeamStructMap;                            // 0x5C8(0x50)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FName                                  MassInviteRouteName;                               // 0x618(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CFF[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHCustomGameLobby* GetDefaultObj();

	void ToggleLocalPlayerSpectate();
	void SetUpTeamPlayerWidgets();
	void PopulateLobbyWithSessionData();
	void OpenMassInviteView(int32 InTeamToInviteTo);
	bool MassInvite_ShouldShowPlayer(class URH_RHFriendAndPlatformFriend* PlayerInfo);
	enum class ERHInviteSelectResult MassInvite_Select(class URH_RHFriendAndPlatformFriend* PlayerInfo);
	bool MassInvite_IsSelected(class URH_RHFriendAndPlatformFriend* PlayerInfo);
	void MassInvite_Close();
	bool IsLocalPlayerSpectator();
	void HandlePlayerSwapTeam(const struct CoreUObject_Guid& PlayerUuid, int32 CurrentTeam);
	void HandlePlayerClicked(const struct RallyHereStart_RH_CustomMatchMember& MatchMember, class URHCustomLobbyPlayer* PlayerWidget);
	void HandleMapChanged();
	void HandleBackContextAction();
	class URHQueueDataFactory* GetQueueDataFactory();
	class URH_JoinedSession* GetCustomMatchSession();
};

// 0x58 (0x5A8 - 0x550)
// Class RallyHereStart.RHCustomLobbyPlayer
class URHCustomLobbyPlayer : public URHWidget
{
public:
	bool                                         bHiddenWhenEmpty;                                  // 0x550(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2D[0x3];                                      // Fixing Size After Last Property  
	int32                                        AssociatedTeam;                                    // 0x554(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D31[0x30];                                     // Fixing Size After Last Property  
	struct RallyHereStart_RH_CustomMatchMember   MatchMemberInfo;                                   // 0x588(0x20)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHCustomLobbyPlayer* GetDefaultObj();

	void SwapTeam();
	void SetMatchMember(const struct RallyHereStart_RH_CustomMatchMember& InMatchMember);
	void SetEmpty();
	void PlayerClicked();
	class URHQueueDataFactory* GetQueueDataFactory();
	bool GetCanLocalPlayerKick();
	bool GetCanLocalPlayerControl();
	void EmptyClicked();
};

// 0x10 (0x560 - 0x550)
// Class RallyHereStart.RHCustomMapSelect
class URHCustomMapSelect : public URHWidget
{
public:
	TSubclassOf<class URHMapButton>              MapButtonClass;                                    // 0x550(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MaxColumn;                                         // 0x558(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D44[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHCustomMapSelect* GetDefaultObj();

	void HandleOnMapButtonSelected(class FName MapName);
	class UUniformGridPanel* GetMapGrid();
};

// 0x10 (0x38 - 0x28)
// Class RallyHereStart.RHDataFactory
class URHDataFactory : public UObject
{
public:
	class ARHHUDCommon*                          MyHud;                                             // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D4F[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHDataFactory* GetDefaultObj();

	bool IsLoggedIn();
};

// 0xD8 (0x100 - 0x28)
// Class RallyHereStart.RHDataSocialCategory
class URHDataSocialCategory : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnPlayersUpdated;                                  // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHeaderUpdated;                                   // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMessageUpdated;                                  // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_DA9[0x98];                                     // Fixing Size After Last Property  
	TArray<class URHDataSocialPlayer*>           SortedPlayerList;                                  // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URHDataSocialCategory* GetDefaultObj();

	bool TryConsumeOpenOnUpdate();
	void SetOpenOnUpdate(bool Value);
	void SetMessageText(bool bProcessing, class FText& MessageText);
	void SetHeaderText(class FText& Header);
	int32 Num();
	bool IsProcessing();
	class FString GetSectionSubtype();
	TArray<class URHDataSocialPlayer*> GetPlayerList();
	class FText GetMessageText();
	class FText GetHeaderText();
	uint8 BP_GetSectionValue();
};

// 0x18 (0x40 - 0x28)
// Class RallyHereStart.RHDataSocialPlayer
class URHDataSocialPlayer : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnRhDataUpdate;                                    // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class URH_RHFriendAndPlatformFriend*         Friend;                                            // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URHDataSocialPlayer* GetDefaultObj();

	void RHSocialRHPlayerUpdate__DelegateSignature(class URH_RHFriendAndPlatformFriend* Friend);
	bool IsValid();
	class URH_RHFriendAndPlatformFriend* GetFriend();
};

// 0x10 (0x10B0 - 0x10A0)
// Class RallyHereStart.RHEditableTextBox
class URHEditableTextBox : public UEditableTextBox
{
public:
	FDelegateProperty_                           OnKeyDown;                                         // 0x10A0(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHEditableTextBox* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class RallyHereStart.RHEventManager
class URHEventManager : public UObject
{
public:
	struct CoreUObject_SoftObjectPath            EventManagerDataTableClassName;                    // 0x28(0x20)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            EventsDataDT;                                      // 0x48(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DEA[0x8];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHEventManager* GetDefaultObj();

	class URHEvent* GetEventByTag(class FName EventTag);
};

// 0x28 (0x2E8 - 0x2C0)
// Class RallyHereStart.RHFloatTickLerpWidgetBase
class URHFloatTickLerpWidgetBase : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnLerpComplete;                                    // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        LerpTime;                                          // 0x2D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LerpPower;                                         // 0x2D4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E32[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHFloatTickLerpWidgetBase* GetDefaultObj();

	void SetTargetValue(float Value);
	void SetLerpTime(float Time);
	void SetLerpPower(float Power);
	bool IsLerping();
	float GetCurrentValue();
	void ForceCurrentValue(float Value);
	void DisplayForValue(float Value);
};

// 0x10 (0x1108 - 0x10F8)
// Class RallyHereStart.RHGameEngine
class URHGameEngine : public UGameEngine
{
public:
	uint8                                        Pad_E3B[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHGameEngine* GetDefaultObj();

};

// 0x110 (0x498 - 0x388)
// Class RallyHereStart.RHHUDCommon
class ARHHUDCommon : public AHUD
{
public:
	FMulticastInlineDelegateProperty_            OnPreferredRegionUpdated;                          // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInputStateChanged;                               // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class URHLoginDataFactory*                   LoginDataFactory;                                  // 0x3A8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHSettingsDataFactory*                SettingsFactory;                                   // 0x3B0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHPartyManager*                       PartyManager;                                      // 0x3B8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHInputManager*                       InputManager;                                      // 0x3C0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHViewManager*                        ViewManager;                                       // 0x3C8(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class URHInputManager>           InputManagerClass;                                 // 0x3D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1062[0x8];                                     // Fixing Size After Last Property  
	class UDataTable*                            ColorPaletteDT;                                    // 0x3E0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            FontPaletteDT;                                     // 0x3E8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHUISoundTheme*                       SoundTheme;                                        // 0x3F0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1068[0x20];                                    // Fixing Size After Last Property  
	class UInputAction*                          AcceptPressedAction;                               // 0x418(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          AcceptReleasedAction;                              // 0x420(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          CancelPressedAction;                               // 0x428(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          CancelReleasedAction;                              // 0x430(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          HoldToConfirmAction;                               // 0x438(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          HoldToCancelAction;                                // 0x440(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          NavigateUpAction;                                  // 0x448(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          NavigateDownAction;                                // 0x450(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          NavigateRightAction;                               // 0x458(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          NavigateLeftAction;                                // 0x460(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputMappingContext*                  HUDMappingContext;                                 // 0x468(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnHudBindingReady;                                 // 0x470(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHudInitComplete;                                 // 0x480(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_107C[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ARHHUDCommon* GetDefaultObj();

	void UIX_ReportServer();
	void SimulateKeyInput(const struct InputCore_Key& Key);
	void ShowErrorPopup(class FText ErrorMsg);
	bool ShouldShowCrossplayIconForPlayerState(class ARHPlayerState* PlayerState);
	bool ShouldShowCrossplayIconForPlayer(struct CoreUObject_Guid& PlayerId);
	void SetViewManager(class URHViewManager* InViewManager);
	void SetUseNewUIFeatures(bool UseNewFeatures);
	void SetUIFocus();
	void SetPreferredRegionId(const class FString& RegionId);
	void SetNavigationEnabled(bool Enabled);
	void SetHudInitComplete();
	void ReturnToLobby();
	void PrintToLog(class FText InText);
	void OnRegionsUpdated(class URH_MatchmakingBrowserCache* MatchingBrowserCache);
	void OnQuit();
	bool OnNavigateBack();
	void OnLogout();
	void OnInvalidVoucherOrder(class URHStoreItem* StoreItem);
	void OnConfirmQuit();
	void OnConfirmLogout();
	bool MutePlayer(struct CoreUObject_Guid& PlayerUuid, bool Mute);
	void LogErrorMessage(class FText ErrorMsg);
	bool IsSamePlatformAsLocalPlayer(struct CoreUObject_Guid& PlayerId);
	bool IsMuted(struct CoreUObject_Guid& PlayerUuid);
	bool IsLobbyHUD();
	bool IsHudReadyForBinding();
	bool IsHudInitComplete();
	bool IsCrossplayEnabled();
	void InputStateChangePassthrough(enum class ERH_INPUT_STATE InputState);
	void HudBindingReady();
	void HandleControllerDisconnect();
	class URHViewManager* GetViewManager();
	class URHUISessionManager* GetUISessionManager();
	class URHSettingsDataFactory* GetSettingsDataFactory();
	void GetRegionList(TMap<class FString, class FText>* OutRegionIdToNameMap);
	bool GetPreferredRegionId(class FString* OutRegionId);
	class URHPopupManager* GetPopupManager();
	class URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem();
	class APlayerController* GetPlayerControllerOwner();
	struct CoreUObject_PlatformUserId GetPlatformUserId();
	class URHPartyManager* GetPartyManager();
	struct CoreOnline_UniqueNetIdWrapper GetOSSUniqueId();
	class URHOrderManager* GetOrderManager();
	class URH_PlayerInfo* GetOrCreatePlayerInfo(struct CoreUObject_Guid& PlayerUuid);
	class UInputAction* GetNavigateUpAction();
	class UInputAction* GetNavigateRightAction();
	class UInputAction* GetNavigateLeftAction();
	class UInputAction* GetNavigateDownAction();
	class URHLoginDataFactory* GetLoginDataFactory();
	class URH_LocalPlayerSubsystem* GetLocalPlayerSubsystem();
	class URHLoadoutDataFactory* GetLoadoutDataFactory();
	class URHStoreItemHelper* GetItemHelper();
	class URHInputManager* GetInputManager();
	class UInputMappingContext* GetHUDMappingContext();
	class UInputAction* GetHoldToConfirmAction();
	class UInputAction* GetHoldToCancelAction();
	class URH_GameInstanceSubsystem* GetGameInstanceSubsystem();
	bool GetFont(class FName FontName, struct SlateCore_SlateFontInfo* ReturnFont);
	TArray<class UPanelWidget*> GetFocusableWidgetContainers();
	enum class ERH_INPUT_STATE GetCurrentInputState();
	bool GetColor(class FName ColorName, struct CoreUObject_LinearColor* ReturnColor);
	class UInputAction* GetCancelReleasedAction();
	class UInputAction* GetCancelPressedAction();
	class UInputAction* GetAcceptReleasedAction();
	class UInputAction* GetAcceptPressedAction();
	void EvaluateFocus();
	void DisplayGenericPopup(const class FString& STitle, const class FString& SDesc);
	void DisplayGenericError(const class FString& SDesc);
	void ConfirmReportServer();
	void ApplySafeFrameScale(float SafeFrameScale);
};

// 0x10 (0x4A8 - 0x498)
// Class RallyHereStart.RHGameHUD
class ARHGameHUD : public ARHHUDCommon
{
public:
	TSubclassOf<class URHWidget>                 GameHUDWidgetClass;                                // 0x498(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHWidget*                             GameHUDWidget;                                     // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ARHGameHUD* GetDefaultObj();

	void OnGameHUDWidgetCreated();
};

// 0x190 (0x350 - 0x1C0)
// Class RallyHereStart.RHGameInstance
class URHGameInstance : public UGameInstance
{
public:
	uint8                                        Pad_10F1[0x50];                                    // Fixing Size After Last Property  
	bool                                         bLogoffOnAppSuspend;                               // 0x210(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLogoffOnAppResume;                                // 0x211(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F3[0x5E];                                    // Fixing Size After Last Property  
	class URHOrderManager*                       OrderManager;                                      // 0x270(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URHStoreItemHelper*                    StoreItemHelper;                                   // 0x278(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URHJsonDataFactory*                    JsonDataFactory;                                   // 0x280(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URHPushNotificationManager*            PushNotificationManager;                           // 0x288(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URHLoadoutDataFactory*                 LoadoutDataFactory;                                // 0x290(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URHUISessionManager*                   UISessionManager;                                  // 0x298(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URHLootBoxManager*                     LootBoxManager;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URHEventManager*                       EventManager;                                      // 0x2A8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10F9[0xA0];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHGameInstance* GetDefaultObj();

	class URHStoreItemHelper* GetStoreItemHelper();
	class URHLootBoxManager* GetLootBoxManager();
	class URHLoadoutDataFactory* GetLoadoutDataFactory();
	class URHEventManager* GetEventManager();
	void EndLoadingScreen(class UWorld* World);
	void BeginLoadingScreen(const class FString& MapName);
};

// 0x110 (0x490 - 0x380)
// Class RallyHereStart.RHGameModeBase
class ARHGameModeBase : public AGameMode
{
public:
	uint8                                        Pad_1124[0x60];                                    // Fixing Size After Last Property  
	float                                        MatchEndReturnToLobbyDelay;                        // 0x3E0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MatchSpindownDelay;                                // 0x3E4(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_112B[0x8];                                     // Fixing Size After Last Property  
	class FString                                SonyActivityId;                                    // 0x3F0(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                SonyActivityIdNetworkedMatch;                      // 0x400(0x10)(Edit, ZeroConstructor, Config, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SonyMatchOwnerNetTimeout;                          // 0x410(0x4)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_112E[0x4];                                     // Fixing Size After Last Property  
	struct RallyHereStart_RHSonyMatchData        SonyMatchData;                                     // 0x418(0x40)(Protected, NativeAccessSpecifierProtected)
	TArray<struct Engine_UniqueNetIdRepl>        SonyIneligibleMatchOwners;                         // 0x458(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1130[0x10];                                    // Fixing Size After Last Property  
	TArray<struct RallyHereStart_RHInactivePlayerStateEntry> RHInactivePlayerArray;                             // 0x478(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	bool                                         bGlobalDisableAIBackfill;                          // 0x488(0x1)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAllowAIBackfill;                                  // 0x489(0x1)(Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasPerformedInitialAIBackfill;                    // 0x48A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1138[0x5];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ARHGameModeBase* GetDefaultObj();

	void InactivePlayerStateDestroyed(class AActor* InActor);
	void FinalShutdown();
	void FinalizeMatchEnded();
	float CalculateMatchCloseness();
};

// 0x8 (0x30 - 0x28)
// Class RallyHereStart.RHGamepadLookSpeedManager
class URHGamepadLookSpeedManager : public UObject
{
public:
	class ARHPlayerController*                   PlayerController;                                  // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHGamepadLookSpeedManager* GetDefaultObj();

};

// 0xF0 (0x120 - 0x30)
// Class RallyHereStart.RHGamepadCurvedLookSpeedManager
class URHGamepadCurvedLookSpeedManager : public URHGamepadLookSpeedManager
{
public:
	bool                                         bUseBaseVelocity;                                  // 0x30(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11B6[0x7];                                     // Fixing Size After Last Property  
	class UCurveVector*                          LookBaseVelocityCurve;                             // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector2D                  BoostThreshold;                                    // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector2D                  BoostMultiplier;                                   // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BoostAcceleration;                                 // 0x60(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_11B7[0x4];                                     // Fixing Size After Last Property  
	class UCurveVector*                          MouseLookMaxVelocityCurve;                         // 0x68(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveVector*                          MouseLookMaxVelocityADSCurve;                      // 0x70(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector2D                  BaseLookRateScale;                                 // 0x78(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TurnRateMultiplier;                                // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LookUpRateMultiplier;                              // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveVector*                          MouseLookAccelerationCurve;                        // 0x90(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveVector*                          MouseLookAccelerationADSCurve;                     // 0x98(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, class UCurveVector*>       TestBaseVelocityCurves;                            // 0xA0(0x50)(Edit, DisableEditOnInstance, AdvancedDisplay, Protected, NativeAccessSpecifierProtected)
	struct CoreUObject_Vector2D                  LastRotationVelocityScale;                         // 0xF0(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Vector2D                  PrevInput;                                         // 0x100(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_Vector2D                  CurrentTurnSpeed;                                  // 0x110(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URHGamepadCurvedLookSpeedManager* GetDefaultObj();

	void SetOuterDeadZone(float NewZoneX, float NewZoneY);
	void SetBoostMultiplier(float NewBoostX, float NewBoostY);
	void SetBoostAcceleration(float NewAccel);
	void SetBaseVelocityCurve(class FName TestCurveName);
	void PrintLookSpeedParameters();
};

// 0x10 (0x560 - 0x550)
// Class RallyHereStart.RHGamepadPromptWidget
class URHGamepadPromptWidget : public URHWidget
{
public:
	uint8                                        Pad_128F[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHGamepadPromptWidget* GetDefaultObj();

	void SetContext(const struct RallyHereStart_ButtonPromptContext& PromptContext);
	void PushContext(const struct RallyHereStart_ButtonPromptContext& PromptContext);
	bool PopContext(struct RallyHereStart_ButtonPromptContext* OutContext);
	void ClearAllContext();
	void ApplyContext(const struct RallyHereStart_ButtonPromptContext& Context);
};

// 0x8 (0x318 - 0x310)
// Class RallyHereStart.RHGameState
class ARHGameState : public AGameState
{
public:
	TSubclassOf<class ARH_LoadoutManager>        LoadoutManagerClass;                               // 0x310(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ARHGameState* GetDefaultObj();

};

// 0x1C8 (0x1F0 - 0x28)
// Class RallyHereStart.RHSettingsSaveGame
class URHSettingsSaveGame : public USaveGame
{
public:
	TMap<class FName, class FString>             SavedSettingsConfig;                               // 0x28(0x50)(NativeAccessSpecifierPublic)
	class FString                                SavedDisplayLanguage;                              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class FName>                            SavedLocalActions;                                 // 0x88(0x50)(NativeAccessSpecifierPublic)
	class FString                                SavedSelectedRegion;                               // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LastWhatsNewVersion;                               // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A7[0x4];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereIntegration_RH_LootId> SavedTransientOrderIds;                            // 0xF0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<class FName>                            SavedViewedNewsPanelIds;                           // 0x100(0x50)(NativeAccessSpecifierPublic)
	TSet<struct RallyHereIntegration_RH_LootId>  SavedRecentlySeenStoreItemLootIds;                 // 0x150(0x50)(NativeAccessSpecifierPublic)
	TSet<struct RallyHereIntegration_RH_ItemId>  SavedSeenAcquiredItemIds;                          // 0x1A0(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHSettingsSaveGame* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class RallyHereStart.RHGameUserSettingsDefault
class URHGameUserSettingsDefault : public UObject
{
public:
	TArray<struct RallyHereStart_SettingConfigPair> SettingsConfig;                                    // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHGameUserSettingsDefault* GetDefaultObj();

};

// 0x3A8 (0x4F0 - 0x148)
// Class RallyHereStart.RHGameUserSettings
class URHGameUserSettings : public UGameUserSettings
{
public:
	uint8                                        Pad_12FA[0x38];                                    // Fixing Size After Last Property  
	int32                                        SettingsVersionMajor;                              // 0x180(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SettingsVersionMinor;                              // 0x184(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EGamepadIcons                     GamepadIconSet;                                    // 0x188(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12FE[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_IntPoint                  DefaultScreenResolution;                           // 0x18C(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_IntPoint                  SavedScreenResolution;                             // 0x194(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1300[0x6C];                                    // Fixing Size After Last Property  
	class FString                                SavedDisplayLanguage;                              // 0x208(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                SavedSelectedRegion;                               // 0x218(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LastWhatsNewVersion;                               // 0x228(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1302[0x4];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereIntegration_RH_LootId> SavedTransientOrderIds;                            // 0x230(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TSet<class FName>                            SavedViewedNewsPanelIds;                           // 0x240(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	TSet<struct RallyHereIntegration_RH_LootId>  SavedRecentlySeenStoreItemLootIds;                 // 0x290(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	TSet<struct RallyHereIntegration_RH_ItemId>  SavedSeenAcquiredItemIds;                          // 0x2E0(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, class FString>             SavedSettingsConfig;                               // 0x330(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	TSet<class FName>                            SavedLocalActions;                                 // 0x380(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1306[0xF0];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnGamepadIconSetSettingsApplied;                   // 0x4C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLocalSettingSaved;                               // 0x4D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSettingApplied;                                  // 0x4E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHGameUserSettings* GetDefaultObj();

	void SaveLocalAction(class FName& Name);
	bool IsLocalActionSaved(class FName& Name);
	bool GetUseQuickCast();
	bool GetTextChatEnabled();
	float GetSafeFrameScale();
	bool GetQuipsEnabled();
	enum class EMuteMode GetMuteMode();
	enum class ECrosshairSize GetCrosshairSize();
	bool GetCommunicationsEnabled();
	enum class EColorVisionDeficiency GetColorCorrection();
};

// 0x18 (0x568 - 0x550)
// Class RallyHereStart.RHGameWidget
class URHGameWidget : public URHWidget
{
public:
	class UDataTable*                            GameViewTable;                                     // 0x550(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_132C[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHGameWidget* GetDefaultObj();

	void HandleScoreboardPressed();
	TArray<struct RallyHereStart_StickyWidgetData> GetStickyWidgetDataForViewManager();
	TArray<class UCanvasPanel*> GetPanelsForViewManager();
};

// 0x0 (0x550 - 0x550)
// Class RallyHereStart.RHHomeScreenWidget
class URHHomeScreenWidget : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class URHHomeScreenWidget* GetDefaultObj();

	void CheckForOnShownEvents();
};

// 0x0 (0x28 - 0x28)
// Class RallyHereStart.RHHUDInterface
class IRHHUDInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IRHHUDInterface* GetDefaultObj();

	void SetSafeFrameScale(float SafeFrameScale);
	void SetHUDVisible(bool bVisible);
	void ReceivedGameModeClass(TSubclassOf<class AGameModeBase> GameModeClass);
	void OnToggleHUD();
	void OnLoadRoute(class FName Route, bool ForceTransition);
	TScriptInterface<class IRHSettingsCallbackInterface> GetSettingsCallbackInterface();
	void CreateGameRuleWidget(const struct RallyHereStart_RHWidgetInfoParams& WidgetInfoParams);
	void BroadcastWidgetMessage(class FName Message);
	void BindEventToWidgetMessages(FDelegateProperty_& Callback);
};

// 0xC8 (0xF0 - 0x28)
// Class RallyHereStart.ContextActionData
class UContextActionData : public UObject
{
public:
	uint8                                        Pad_13AA[0x8];                                     // Fixing Size After Last Property  
	class FName                                  RowName;                                           // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  FormatAdditive;                                    // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct RallyHereStart_ContextAction          RowData;                                           // 0x50(0x58)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnContextAction;                                   // 0xA8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnCycleAction;                                     // 0xB8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnHoldActionUpdate;                                // 0xC8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnHoldReleaseAction;                               // 0xD8(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B1[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UContextActionData* GetDefaultObj();

	void TriggerHoldReleaseContextAction(enum class EContextActionHoldReleaseState Status);
	void TriggerCycleContextActionPrev();
	void TriggerCycleContextActionNext();
	void TriggerCycleContextAction(bool bNext);
	void TriggerContextAction();
	void StartTriggerHoldAction();
	void ClearTriggerHoldAction();
};

// 0x200 (0x228 - 0x28)
// Class RallyHereStart.RHInputManager
class URHInputManager : public UObject
{
public:
	TMap<class URHWidget*, struct RallyHereStart_RHInputFocusDetails> InputFocusData;                                    // 0x28(0x50)(ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_144E[0x20];                                    // Fixing Size After Last Property  
	TMap<class URHWidget*, class URHWidget*>     FocusGroupsInheritedBy;                            // 0x98(0x50)(ExportObject, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<class URHWidget*, class URHWidget*>     FocusGroupsInheritedByReverse;                     // 0xE8(0x50)(ExportObject, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1455[0x8];                                     // Fixing Size After Last Property  
	class UEnhancedInputComponent*               InputComponent;                                    // 0x140(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1458[0x3C];                                    // Fixing Size After Last Property  
	class FName                                  GlobalRouteName;                                   // 0x184(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_145B[0x4];                                     // Fixing Size After Last Property  
	class UInputMappingContext*                  ContextualMappingContext;                          // 0x190(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_SoftObjectPath            ContextActionDataTableClassName;                   // 0x198(0x20)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            ContextActionDT;                                   // 0x1B8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct RallyHereStart_RouteContextInfo> RouteContextInfoMap;                               // 0x1C0(0x50)(Protected, NativeAccessSpecifierProtected)
	class FName                                  ActiveRoute;                                       // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          OverrideRouteStack;                                // 0x218(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHInputManager* GetDefaultObj();

	void SetLastInputType(enum class ERHLastInputType NewLastInputType);
	void SetInputActions(const TArray<class UContextActionData*>& ActionData);
	void SetContextHoldReleaseAction(class FName Route, class FName ContextName, FDelegateProperty_& UpdateCallback, FDelegateProperty_& EventCallback);
	void SetContextCycleAction(class FName Route, class FName ContextName, FDelegateProperty_& EventCallback);
	void SetContextAction(class FName Route, class FName ContextName, FDelegateProperty_& EventCallback);
	void SetActiveRoute(class FName Route);
	bool RemoveOverrideRoute(class FName Route);
	void PushOverrideRoute(class FName Route);
	class FName PopOverrideRoute();
	void HandleModeChange(enum class ERH_INPUT_STATE Mode);
	bool GetFocusedWidget(class URHWidget* ParentWidget, class UWidget** FocusWidget);
	class FName GetCurrentRoute();
	class FName GetCurrentContextRoute();
	bool GetButtonForInputAction(class UInputAction* Action, struct InputCore_Key* Button, bool IsGamepadKey);
	bool GetAllButtonsForInputAction(class UInputAction* Action, TArray<struct InputCore_Key>* Buttons);
	void ClearOverrideRouteStack();
	void ClearNavInputThrottled();
	void ClearNavInputDebouncedThrottled();
	void ClearContextAction(class FName Route, class FName ContextName);
	void ClearAllContextActions(class FName Route);
	void AddContextActions(class FName Route, const TArray<class FName>& ContextNames);
	void AddContextAction(class FName Route, class FName ContextName, class FText FormatAdditive);
};

// 0x60 (0x88 - 0x28)
// Class RallyHereStart.RHJsonData
class URHJsonData : public UObject
{
public:
	class FName                                  UniqueID;                                          // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AssociatedLootId;                                  // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_147D[0x4];                                     // Fixing Size After Last Property  
	TArray<int32>                                HideIfItemOwned;                                   // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ShowIfItemOwned;                                   // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         HideIfOwned;                                       // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1482[0x3];                                     // Fixing Size After Last Property  
	int32                                        MinLevel;                                          // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLevel;                                          // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1485[0x14];                                    // Fixing Size After Last Property  
	bool                                         ShowSteam;                                         // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowEpic;                                          // 0x79(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowPS4;                                           // 0x7A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowPS5;                                           // 0x7B(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowXB1;                                           // 0x7C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowXSX;                                           // 0x7D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowNX;                                            // 0x7E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowIOS;                                           // 0x7F(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowAndroid;                                       // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_148B[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHJsonData* GetDefaultObj();

};

// 0x88 (0xB0 - 0x28)
// Class RallyHereStart.RH_PlayerShouldShowPanelsHelper
class URH_PlayerShouldShowPanelsHelper : public UObject
{
public:
	uint8                                        Pad_1492[0x78];                                    // Fixing Size After Last Property  
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHJsonDataFactory*                    JsonDataFactory;                                   // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_PlayerShouldShowPanelsHelper* GetDefaultObj();

};

// 0x80 (0xA8 - 0x28)
// Class RallyHereStart.RH_PlayerInventoryCountHelper
class URH_PlayerInventoryCountHelper : public UObject
{
public:
	uint8                                        Pad_1497[0x78];                                    // Fixing Size After Last Property  
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_PlayerInventoryCountHelper* GetDefaultObj();

};

// 0x240 (0x278 - 0x38)
// Class RallyHereStart.RHJsonDataFactory
class URHJsonDataFactory : public URHDataFactory
{
public:
	TMap<class FString, class UTexture2DDynamic*> MapFilePathToTexture;                              // 0x38(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, TWeakObjectPtr<class UTexture2DDynamic>> FilePathToWeakTexture;                             // 0x88(0x50)(UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_14A8[0x58];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            JsonPanelUpdated;                                  // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_14AC[0xA0];                                    // Fixing Size After Last Property  
	TMap<class URH_PlayerInfo*, struct RallyHereStart_RHJsonDataWrapper> CachedJsonDataByPlayer;                            // 0x1E0(0x50)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	struct CoreUObject_SoftObjectPath            PlayerProgressionXpClass;                          // 0x230(0x20)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class URHProgression>         PlayerXpProgression;                               // 0x250(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URHJsonDataFactory* GetDefaultObj();

	void HandleJsonReady(class URHLandingPanelJSONHandler* PHandler);
	void HandleImagesReady(class URHLandingPanelJSONHandler* PHandler);
};

// 0x128 (0x150 - 0x28)
// Class RallyHereStart.RHLandingPanelJSONHandler
class URHLandingPanelJSONHandler : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnJsonReady;                                       // 0x28(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnImagesDownloaded;                                // 0x38(0x10)(ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B6[0xB8];                                    // Fixing Size After Last Property  
	TMap<class FString, class UTexture2DDynamic*> MapFilePathToTexture;                              // 0x100(0x50)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URHLandingPanelJSONHandler* GetDefaultObj();

	void RequestNewJson();
};

// 0x40 (0x68 - 0x28)
// Class RallyHereStart.RH_PlayerLoadoutItem
class URH_PlayerLoadoutItem : public UObject
{
public:
	class FString                                LoadoutItemId;                                     // 0x28(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_ItemId        ItemId;                                            // 0x38(0x14)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x4C(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SortOrder;                                         // 0x50(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemValueId;                                       // 0x54(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  CreationDate;                                      // 0x58(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  LastModifiedTimestamp;                             // 0x60(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_PlayerLoadoutItem* GetDefaultObj();

	void SetSortOrder(int32 InSortOrder);
	void SetLoadoutItemId(const class FString& InLoadoutItemId);
	void SetLastModifiedTime(const struct CoreUObject_DateTime& InLastModifiedTime);
	void SetItemValueId(int32 InItemValueId);
	void SetItemId(struct RallyHereIntegration_RH_ItemId& InItemId);
	void SetCreationDate(const struct CoreUObject_DateTime& InCreationDate);
	void SetCount(int32 InCount);
	int32 GetSortOrder();
	class FString GetLoadoutItemId();
	struct CoreUObject_DateTime GetLastModifiedTime();
	int32 GetItemValueId();
	struct RallyHereIntegration_RH_ItemId GetItemId();
	struct CoreUObject_DateTime GetCreationDate();
	int32 GetCount();
};

// 0x188 (0x1B0 - 0x28)
// Class RallyHereStart.RH_PlayerLoadout
class URH_PlayerLoadout : public UObject
{
public:
	uint8                                        Pad_15AD[0xE8];                                    // Fixing Size After Last Property  
	class FString                                LoadoutId;                                         // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        V;                                                 // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TypeValueId;                                       // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SortOrder;                                         // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B2[0x4];                                     // Fixing Size After Last Property  
	class FString                                Name;                                              // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  CreationDate;                                      // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  LastModifiedTimestamp;                             // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URH_PlayerLoadoutItem*>         Items;                                             // 0x150(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<enum class ERHLoadoutSlotTypes, class UPlatformInventoryItem*> DefaultItems;                                      // 0x160(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_PlayerLoadout* GetDefaultObj();

	bool LocalEquipItemToSlot(class UPlatformInventoryItem* Item, enum class ERHLoadoutSlotTypes LoadoutSlot);
	bool IsItemEquippedInSlot(class UPlatformInventoryItem* Item, enum class ERHLoadoutSlotTypes LoadoutSlot);
	int32 GetV();
	int32 GetType();
	int32 GetSortOrder();
	class FString GetName();
	class FString GetLoadoutId();
	struct CoreUObject_DateTime GetLastModifiedTime();
	TArray<class URH_PlayerLoadoutItem*> GetItems();
	bool GetEquippedItemInSlot(FDelegateProperty_ Event, enum class ERHLoadoutSlotTypes LoadoutSlot);
	TMap<enum class ERHLoadoutSlotTypes, class UPlatformInventoryItem*> GetDefaultItems();
	struct CoreUObject_DateTime GetCreationDate();
};

// 0x128 (0x150 - 0x28)
// Class RallyHereStart.RHLoadoutDataFactory
class URHLoadoutDataFactory : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnPlayerLoadoutsUpdated;                           // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftObjectPath            AccountDefaultLoadoutsDataTableClassName;          // 0x38(0x20)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            AccountDefaultsDT;                                 // 0x58(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class URH_PlayerInfo*, struct RallyHereStart_RHPlayerLoadoutsWrapper> PlayerLoadouts;                                    // 0x60(0x50)(BlueprintVisible, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<enum class ERHLoadoutSlotTypes, class UPlatformInventoryItem*> DefaultLoadoutItems;                               // 0xB0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_162F[0x50];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHLoadoutDataFactory* GetDefaultObj();

	class URHLoadoutDataFactory* GetRHLoadoutDataFactory(class UObject* WorldContextObject);
	class UPlatformInventoryItem* GetDefaultItemForLoadoutSlotType(enum class ERHLoadoutSlotTypes SlotType);
	void BLUEPRINT_SetPlayerLoadoutSettings(class URH_PlayerInfo* PlayerInfo, TArray<class URH_PlayerLoadout*>& Loadouts, FDelegateProperty_& Delegate);
	void BLUEPRINT_RequestPlayerLoadoutSettings(class URH_PlayerInfo* PlayerInfo, struct CoreUObject_Timespan& StaleThreshold, bool bForceRefresh, FDelegateProperty_& Delegate);
	void BLUEPRINT_RequestPlayerLoadoutSettingByLoadoutType(class URH_PlayerInfo* PlayerInfo, enum class ERHLoadoutTypes LoadoutType, bool bCreateIfNeeded, struct CoreUObject_Timespan& StaleThreshold, bool bForceRefresh, FDelegateProperty_& Delegate);
};

// 0x130 (0x3C8 - 0x298)
// Class RallyHereStart.RH_LoadoutManager
class ARH_LoadoutManager : public AActor
{
public:
	FMulticastInlineDelegateProperty_            LoadoutUpdatedEvent;                               // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic)
	TArray<struct RallyHereStart_RH_Loadout>     R_Loadouts;                                        // 0x2A8(0x10)(Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected)
	TArray<struct RallyHereStart_RH_Loadout>     PlayerLoadouts;                                    // 0x2B8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct RallyHereStart_RH_LoadoutItem> OverflowItems;                                     // 0x2C8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class URH_LoadoutConfigAsset*>        ConfigAssets;                                      // 0x2D8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         ClientAuthority;                                   // 0x2E8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_168A[0x7];                                     // Fixing Size After Last Property  
	TArray<TSoftObjectPtr<class URH_LoadoutConfigAsset>> SoftConfigAssets;                                  // 0x2F0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_168B[0xC0];                                    // Fixing Size After Last Property  
	TWeakObjectPtr<class ARHPlayerController>    WeakOwningPlayer;                                  // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class ARH_LoadoutManager* GetDefaultObj();

	void SetLoadoutActiveIndex(const class FString& LoadoutType, int32 Index);
	void SaveLoadouts();
	void OnSettingsUpdated();
	void OnSettingsLoaded();
	void OnRep_Loadouts();
	void OnPlayerInfoReady(class URHS_PlayerInfo* PlayerInfo);
	void OnInventoryUpdated(TArray<int32>& ItemIds);
	void OnInventoryLoaded();
	void OnConfigLoaded();
	bool IsValidItemForSlot(int32 ItemId, struct RallyHereStart_RH_LoadoutSlot& LoadoutSlot);
};

// 0x68 (0x98 - 0x30)
// Class RallyHereStart.RH_LoadoutConfigAsset
class URH_LoadoutConfigAsset : public UDataAsset
{
public:
	struct RallyHereStart_RH_LoadoutConfigData   ConfigData;                                        // 0x30(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct RallyHereStart_RH_LoadoutSlotConfig> SlotConfig;                                        // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_LoadoutConfigAsset* GetDefaultObj();

};

// 0x50 (0x4E8 - 0x498)
// Class RallyHereStart.RHLobbyHUD
class ARHLobbyHUD : public ARHHUDCommon
{
public:
	uint8                                        Pad_1714[0x8];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnMinuteTimerUpdate;                               // 0x4A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1716[0x10];                                    // Fixing Size After Last Property  
	class URH_PlayerInfo*                        LoggedInPlayerInfo;                                // 0x4C0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URHQueueDataFactory*                   QueueDataFactory;                                  // 0x4C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1717[0x8];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnTriggerBlockerChange;                            // 0x4D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ARHLobbyHUD* GetDefaultObj();

	void ShowPopupConfirmation(class FText Message, enum class ESocialMessageType MessageType);
	void OnNotEnoughCurrency(class URHStorePurchaseRequest* PurchaseRequest);
	bool IsPlayerMuted(class URH_PlayerInfo* PlayerData);
	void HandleMatchStatusUpdated(enum class ERH_MatchStatus MatchStatus);
	void HandleLoginUserChange();
	void HandleLoginStateChange(enum class ERHLoginState LoginState);
	void HandleDenyPartyInvitation();
	void HandleAcceptPartyInvitation();
	class URHQueueDataFactory* GetQueueDataFactory();
	class URHLobbyWidget* GetLobbyWidget();
	class URHJsonDataFactory* GetJsonDataFactory();
	class UPlatformInventoryItem* GetDefaultPlayerAccountItem(enum class ERHLoadoutSlotTypes ItemSlot);
	void ForceMinuteTimerUpdate();
	void ForceEulaAccept();
};

// 0x0 (0x550 - 0x550)
// Class RallyHereStart.RHLobbyWidget
class URHLobbyWidget : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class URHLobbyWidget* GetDefaultObj();

};

// 0x120 (0x158 - 0x38)
// Class RallyHereStart.RHLoginDataFactory
class URHLoginDataFactory : public URHDataFactory
{
public:
	FMulticastInlineDelegateProperty_            OnLoginUserChanged;                                // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoginStateChanged;                               // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoginError;                                      // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1805[0x8];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnControllerDisconnected;                          // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bAllowLoginDuringPartialInstall;                   // 0x80(0x1)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1809[0x7];                                     // Fixing Size After Last Property  
	class UDataTable*                            ErrorMsgsDT;                                       // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnLoginsLimitedChanged;                            // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_180B[0x60];                                    // Fixing Size After Last Property  
	class FString                                SavedCredentialPrefix;                             // 0x100(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_180D[0x38];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnLoginWaitQueueMessage;                           // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHLoginDataFactory* GetDefaultObj();

	void UIX_TriggerAutoLogin();
	void UIX_OnSubmitLogin(const class FString& UserName, const class FString& Password);
	void UIX_OnSubmitAutoLogin(struct CoreUObject_PlatformUserId& PlatformId);
	void UIX_OnSignInWithGoogle(struct CoreUObject_PlatformUserId& PlatformId);
	void UIX_OnSignInWithApple(struct CoreUObject_PlatformUserId& PlatformId);
	void UIX_OnLinkExistingAccount(const class FString& UserName, const class FString& Password);
	void UIX_OnLinkDecline();
	void UIX_OnEulaDecline();
	void UIX_OnEulaAccept();
	void UIX_OnChangeUserAccount();
	void UIX_OnCancelLogin();
	void TriggerAutoLogin();
	bool ShouldDisplayDisconnectError();
	void RecordLoginState(enum class ERHLoginState NewState);
	void LoginEvent_ShowAgreements(bool bNeedsEULA, bool bNeedsTOS, bool bNeedsPP);
	void LoginEvent_Queued(uint32 QueuePosition, uint32 QueueSize, uint32 QueueEstimatedWait);
	void LoginEvent_LoginRequested();
	void LoginEvent_LoggedIn();
	void LoginEvent_FailedClient(class FText ErrorMsg);
	bool LoadEULAFile(class FString* SaveText);
	void HandlePlayerLoggedOut();
	void HandleControllerPairingChange(const struct CoreUObject_InputDeviceId& InputDeviceId, const struct CoreUObject_PlatformUserId& NewUserPlatformId, const struct CoreUObject_PlatformUserId& OldUserPlatformId);
	void HandleControllerConnectionChange(enum class EInputDeviceConnectionState NewConnectionState, const struct CoreUObject_PlatformUserId& PlatformUserId, const struct CoreUObject_InputDeviceId& InputDeviceId);
	class URH_LocalPlayerLoginSubsystem* GetRH_LocalPlayerLoginSubsystem();
	bool GetLastDisconnectReason(class FText* ErrorMsg);
	bool GetCurrentPlayerName(class FText* NameText);
	bool GetCurrentPlayerId(class FText* ID);
	enum class ERHLoginState GetCurrentLoginState();
	bool AreLoginsLimited();
	bool AllowUserSwitching();
};

// 0x0 (0x28 - 0x28)
// Class RallyHereStart.RHViewRedirecter
class URHViewRedirecter : public UObject
{
public:

	static class UClass* StaticClass();
	static class URHViewRedirecter* GetDefaultObj();

	bool ShouldRedirect(class ARHHUDCommon* HUD, class FName Route, class UObject** SceneData);
};

// 0x0 (0x28 - 0x28)
// Class RallyHereStart.RHRedirectToLoginViewRedirector
class URHRedirectToLoginViewRedirector : public URHViewRedirecter
{
public:

	static class UClass* StaticClass();
	static class URHRedirectToLoginViewRedirector* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class RallyHereStart.RHLoginExistingBase
class URHLoginExistingBase : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class URHLoginExistingBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class RallyHereStart.RHLoginInventoryCheckViewRedirector
class URHLoginInventoryCheckViewRedirector : public URHViewRedirecter
{
public:

	static class UClass* StaticClass();
	static class URHLoginInventoryCheckViewRedirector* GetDefaultObj();

};

// 0x8 (0x558 - 0x550)
// Class RallyHereStart.RHLoginInventoryCheck
class URHLoginInventoryCheck : public URHWidget
{
public:
	uint8                                        Pad_1847[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHLoginInventoryCheck* GetDefaultObj();

	void CancelLogin();
};

// 0x8 (0x170 - 0x168)
// Class RallyHereStart.RHLootBox
class URHLootBox : public UPlatformInventoryItem
{
public:
	int32                                        LootBoxVendorId;                                   // 0x168(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1851[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHLootBox* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class RallyHereStart.RHLootBoxDetails
class URHLootBoxDetails : public UObject
{
public:
	class URHStoreItem*                          LootBox;                                           // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URHLootBoxContents*>            Contents;                                          // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHLootBoxDetails* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class RallyHereStart.RHLootBoxContents
class URHLootBoxContents : public UObject
{
public:
	int32                                        LootTableId;                                       // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1868[0x4];                                     // Fixing Size After Last Property  
	TArray<TSoftObjectPtr<class URHStoreItem>>   BundleContents;                                    // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_186A[0x50];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHLootBoxContents* GetDefaultObj();

	TArray<class FText> GetContentsFilterOptions();
};

// 0xF0 (0x118 - 0x28)
// Class RallyHereStart.RHLootBoxManager
class URHLootBoxManager : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnLootBoxOpenStarted;                              // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLootBoxOpenFailed;                               // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLootBoxContentsReceived;                         // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDisplayLootBoxIntro;                             // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDisplayLootBoxIntroAndOpen;                      // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLootBoxLeave;                                    // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLootBoxOpenSequenceCompleted;                    // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct RallyHereIntegration_RH_LootId> LootBoxLootIds;                                    // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class URHStoreItemHelper*                    StoreItemHelper;                                   // 0xA8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHGameInstance*                       GameInstance;                                      // 0xB0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_188A[0x8];                                     // Fixing Size After Last Property  
	TMap<struct RallyHereIntegration_RH_LootId, class URHLootBoxDetails*> UnopenedLootBoxIdToContents;                       // 0xC0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	int32                                        LootBoxsVendorId;                                  // 0x110(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LootBoxsRedemptionVendorId;                        // 0x114(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHLootBoxManager* GetDefaultObj();

	void OnStoreVendorsLoaded(bool bSuccess);
	class FText GetContentCategoryName(enum class ELootBoxContentsCategories Category);
	void CallOnLootBoxOpeningSequenceComplete();
};

// 0x18 (0x568 - 0x550)
// Class RallyHereStart.RHMapButton
class URHMapButton : public URHWidget
{
public:
	FMulticastInlineDelegateProperty_            OnMapButtonClicked;                                // 0x550(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FName                                  MapName;                                           // 0x560(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHMapButton* GetDefaultObj();

	void SetSelected(bool bSelected);
	void SetMap(class FName InMapName);
	void OnButtonClicked();
	bool GetMapDetails(struct RallyHereStart_RHMapDetails* OutMapDetails);
};

// 0x50 (0x78 - 0x28)
// Class RallyHereStart.RHDataMassInviteBase
class URHDataMassInviteBase : public UObject
{
public:
	class FText                                  Title;                                             // 0x28(0x18)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class FText                                  ButtonLabel;                                       // 0x40(0x18)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnShouldShow;                                      // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnClose;                                           // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHDataMassInviteBase* GetDefaultObj();

};

// 0x20 (0x98 - 0x78)
// Class RallyHereStart.RHDataIndividualInviteSetup
class URHDataIndividualInviteSetup : public URHDataMassInviteBase
{
public:
	FDelegateProperty_                           OnGetIsSelected;                                   // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnSelect;                                          // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHDataIndividualInviteSetup* GetDefaultObj();

	class URHDataIndividualInviteSetup* SetCallbacks(FDelegateProperty_ GetIsSelected, FDelegateProperty_ Select, FDelegateProperty_ ShouldShowPlayer, FDelegateProperty_ Close);
	enum class ERHInviteSelectResult RHInviteSelect__DelegateSignature(class URH_RHFriendAndPlatformFriend* PlayerInfo);
	bool RHInviteGetIsSelected__DelegateSignature(class URH_RHFriendAndPlatformFriend* PlayerInfo);
};

// 0x10 (0x88 - 0x78)
// Class RallyHereStart.RHDataBatchInviteSetup
class URHDataBatchInviteSetup : public URHDataMassInviteBase
{
public:
	FDelegateProperty_                           OnSelect;                                          // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHDataBatchInviteSetup* GetDefaultObj();

	class URHDataBatchInviteSetup* SetCallbacks(FDelegateProperty_ Select, FDelegateProperty_ ShouldShowPlayer, FDelegateProperty_ Cancel);
	void RHBatchSelect__DelegateSignature(const TArray<class URH_RHFriendAndPlatformFriend*>& Friends);
};

// 0x50 (0x5A0 - 0x550)
// Class RallyHereStart.RHMassInviteModal
class URHMassInviteModal : public URHWidget
{
public:
	TArray<class URH_RHFriendAndPlatformFriend*> SelectedFriends;                                   // 0x550(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class URHDataMassInviteBase>  RouteData;                                         // 0x560(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URH_RHFriendAndPlatformFriend*> FriendResults;                                     // 0x568(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class URH_RHFriendAndPlatformFriend*> SearchResult;                                      // 0x578(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A3E[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHMassInviteModal* GetDefaultObj();

	bool UpdateRouteData();
	enum class ERHInviteSelectResult SelectPlayer(class URH_RHFriendAndPlatformFriend* Friend);
	void RHInviteReceivePlayers__DelegateSignature(TArray<class URH_RHFriendAndPlatformFriend*>& PlayerAndPlatformInfos);
	void RequestFriends(FDelegateProperty_ OnReceivePlayers);
	void OnSearchResultUpdated(TArray<class URH_RHFriendAndPlatformFriend*>& ResultPlayers);
	bool GetShouldSelect(class URH_RHFriendAndPlatformFriend* Friend);
	void DoSearch(class FText SearchTerm);
	void CloseScreen(enum class ERHInviteCloseAction CloseAction);
};

// 0x0 (0x550 - 0x550)
// Class RallyHereStart.RHMatchIdWidget
class URHMatchIdWidget : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class URHMatchIdWidget* GetDefaultObj();

	class FText GetShortMatchId();
	class FText GetLongMatchId();
};

// 0x38 (0x588 - 0x550)
// Class RallyHereStart.RHMatchInvitationModal
class URHMatchInvitationModal : public URHWidget
{
public:
	uint8                                        Pad_1AA1[0x10];                                    // Fixing Size After Last Property  
	struct Engine_TimerHandle                    InvitationExpireTimeout;                           // 0x560(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AA2[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHMatchInvitationModal* GetDefaultObj();

	void OnInvitationExpired();
	class URH_FriendSubsystem* GetRH_LocalPlayerFriendSubsystem();
	class URHQueueDataFactory* GetQueueDataFactory();
	float GetInvitationTotalTimeToExpire();
	float GetInvitationTimeRemaining();
	void DeclineInvite();
	void CloseScreen();
	void AcceptInviteDefault();
	void AcceptInvite(int32 MapId);
};

// 0x58 (0x5A8 - 0x550)
// Class RallyHereStart.RHMediaPlayerWidget
class URHMediaPlayerWidget : public URHWidget
{
public:
	class UDataTable*                            PlaylistDataTable;                                 // 0x550(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftObjectPath            PlaylistDataTableClassName;                        // 0x558(0x20)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ABC[0x10];                                    // Fixing Size After Last Property  
	bool                                         bOnlyWatchFirstEntry;                              // 0x588(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ABD[0x1F];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHMediaPlayerWidget* GetDefaultObj();

	void UIX_SkipEntry();
	void OnShouldShowPromptChanged(bool bCanSkipEntry);
	void OnReadyForPlayback(class UPlatformMediaSource* PlatformMediaSource);
	void OnEndLoadingMedia();
	void OnBeginLoadingMedia();
	bool IsCurrentEntrySkippable();
};

// 0x0 (0x338 - 0x338)
// Class RallyHereStart.RHMobileLayoutSequencePlayer
class URHMobileLayoutSequencePlayer : public UUMGSequencePlayer
{
public:

	static class UClass* StaticClass();
	static class URHMobileLayoutSequencePlayer* GetDefaultObj();

};

// 0x40 (0x590 - 0x550)
// Class RallyHereStart.RHNavTabWidget
class URHNavTabWidget : public URHWidget
{
public:
	FMulticastInlineDelegateProperty_            OnNavTabSelected;                                  // 0x550(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNavTabUnselected;                                // 0x560(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	bool                                         bSelected;                                         // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisabled;                                         // 0x571(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF4[0x6];                                     // Fixing Size After Last Property  
	class FText                                  NavText;                                           // 0x578(0x18)(Edit, BlueprintVisible, ExposeOnSpawn, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHNavTabWidget* GetDefaultObj();

	void UnselectNavTab();
	void SetSelected(bool bNewSelected);
	void SetDisabled(bool bNewDisabled);
	void SelectNavTab();
	bool IsSelected();
	bool IsDisabled();
};

// 0x60 (0xE8 - 0x88)
// Class RallyHereStart.RHNewsRotatorData
class URHNewsRotatorData : public URHJsonData
{
public:
	class UTexture2DDynamic*                     Image;                                             // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Header;                                            // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0xA8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ENewsActions                      PanelAction;                                       // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AFE[0x7];                                     // Fixing Size After Last Property  
	class FString                                ActionDetails;                                     // 0xC8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AFF[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHNewsRotatorData* GetDefaultObj();

};

// 0x18 (0x568 - 0x550)
// Class RallyHereStart.RHNewsRotatorWidget
class URHNewsRotatorWidget : public URHWidget
{
public:
	class FString                                JsonSection;                                       // 0x550(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TimePerSection;                                    // 0x560(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B3E[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHNewsRotatorWidget* GetDefaultObj();

	void OnNewsPanelClicked(class URHNewsRotatorData* Panel);
	void OnJsonChanged(const class FString& JsonName);
	class URHJsonDataFactory* GetJsonDataFactory();
	void BLUEPRINT_GetPanelDataAsync(FDelegateProperty_& Delegate);
	void BLUEPRINT_CheckShouldShowPanels(const TArray<class URHNewsRotatorData*>& Panels, FDelegateProperty_& Delegate);
};

// 0x8 (0x90 - 0x88)
// Class RallyHereStart.RHNewStartMenuData
class URHNewStartMenuData : public URHJsonData
{
public:
	class UTexture2DDynamic*                     Image;                                             // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHNewStartMenuData* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class RallyHereStart.RHNewStartMenuWidget
class URHNewStartMenuWidget : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class URHNewStartMenuWidget* GetDefaultObj();

	class URHJsonDataFactory* GetJsonDataFactory();
	void BLUEPRINT_CheckIsNewsAvailable(FDelegateProperty_& Delegate);
};

// 0x10 (0x38 - 0x28)
// Class RallyHereStart.OrderItemData
class UOrderItemData : public UObject
{
public:
	class URHStoreItem*                          StoreItem;                                         // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B65[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class UOrderItemData* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class RallyHereStart.RHOrder
class URHOrder : public UObject
{
public:
	enum class ERHOrderType                      OrderType;                                         // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B71[0x7];                                     // Fixing Size After Last Property  
	TArray<class UOrderItemData*>                OrderItems;                                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B72[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHOrder* GetDefaultObj();

	void SortOrderItemsBySortOrder();
	bool IsPurchase();
	bool IsBundleOrder();
};

// 0x78 (0xA0 - 0x28)
// Class RallyHereStart.RHOrderManager
class URHOrderManager : public UObject
{
public:
	uint8                                        Pad_1B87[0x8];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnOrderReady;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B89[0x10];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnOrderSuccess;                                    // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOrderFailed;                                     // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class URHOrder*>                      QueuedOrders;                                      // 0x70(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class URHOrder*                              PendingOrder;                                      // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHStoreItemHelper*                    StoreItemHelper;                                   // 0x88(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct RallyHereStart_RH_ActiveOrderWatch> ActiveOrderWatches;                                // 0x90(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHOrderManager* GetDefaultObj();

	class URHOrder* GetNextOrder();
	void CreateOrderForItem(class URHStoreItem* StoreItem, class URH_PlayerInfo* PlayerInfo);
};

// 0x10 (0x38 - 0x28)
// Class RallyHereStart.RHOrderViewRedirector
class URHOrderViewRedirector : public URHViewRedirecter
{
public:
	TArray<enum class ERHOrderType>              ValidOrderTypes;                                   // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHOrderViewRedirector* GetDefaultObj();

};

// 0x58 (0x5A8 - 0x550)
// Class RallyHereStart.RHOrderModal
class URHOrderModal : public URHWidget
{
public:
	class UDataTable*                            HeaderOverridesTable;                              // 0x550(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct RallyHereIntegration_RH_LootId, class FText> HeaderOverridesFromJson;                           // 0x558(0x50)(Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHOrderModal* GetDefaultObj();

	class URHOrderManager* GetOrderManager();
	class FText GetHeaderText(class URHOrder* Order);
};

// 0x0 (0x28 - 0x28)
// Class RallyHereStart.RHTabValidator
class URHTabValidator : public UObject
{
public:

	static class UClass* StaticClass();
	static class URHTabValidator* GetDefaultObj();

	bool IsValidTab();
};

// 0x68 (0x5B8 - 0x550)
// Class RallyHereStart.RHOverlayTabEntryWidget
class URHOverlayTabEntryWidget : public URHWidget
{
public:
	enum class ERHOverlayTabState                TabState;                                          // 0x550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C04[0x3];                                     // Fixing Size After Last Property  
	class FName                                  MyViewName;                                        // 0x554(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C07[0x4];                                     // Fixing Size After Last Property  
	struct RallyHereStart_OverlayTabViewRow      MyViewInfo;                                        // 0x560(0x30)(Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnActiveViewRequested;                             // 0x590(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFocusToViewRequested;                            // 0x5A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UButton*                               HitTarget;                                         // 0x5B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHOverlayTabEntryWidget* GetDefaultObj();

	void SetViewName(class FName InViewName);
	void SetViewInfo(const struct RallyHereStart_OverlayTabViewRow& InViewInfo);
	void SetTabState(enum class ERHOverlayTabState InTabState);
	void HandleViewFocused();
	void HandleUnhovered();
	void HandleTabsFocused();
	void HandleInputStateChanged(enum class ERH_INPUT_STATE InputState);
	void HandleHovered();
	void HandleClicked();
	void HandleActiveViewChanged(class FName ActiveView);
	struct RallyHereStart_OverlayTabViewRow GetViewInfo();
	enum class ERHOverlayTabState GetTabState();
	void DisplayViewInfo();
	void DisplayTabState();
};

// 0x10 (0x38 - 0x28)
// Class RallyHereStart.RHOverlayTabHubRouteData
class URHOverlayTabHubRouteData : public UObject
{
public:
	class FName                                  RedirectViewName;                                  // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHWidget*                             LandingWidgetInView;                               // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHOverlayTabHubRouteData* GetDefaultObj();

};

// 0xA8 (0x5F8 - 0x550)
// Class RallyHereStart.RHOverlayTabHubBase
class URHOverlayTabHubBase : public URHWidget
{
public:
	class FName                                  CurrentViewName;                                   // 0x550(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C6D[0x58];                                    // Fixing Size After Last Property  
	int32                                        TabEntriesFocusGroup;                              // 0x5B0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C70[0x4];                                     // Fixing Size After Last Property  
	class UDataTable*                            ViewsTable;                                        // 0x5B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          ViewNames;                                         // 0x5C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1C76[0x10];                                    // Fixing Size After Last Property  
	class UWidgetSwitcher*                       ViewSwitcher;                                      // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPanelWidget*                          TabContainer;                                      // 0x5E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class URHWidget>                 SoftTabWidgetClass;                                // 0x5F0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHOverlayTabHubBase* GetDefaultObj();

	void SetFocusToView(class URHWidget* InitialFocusedWidget);
	void SetFocusToTabs();
	void OnViewChanged();
	void OnViewAdded(class FName ViewName, const struct RallyHereStart_OverlayTabViewRow& ViewInfo, class URHOverlayTabEntryWidget* TabEntry, class URHWidget* ViewWidget);
	void OnTabsFocused();
	void HandleFocusToViewRequested(class FName ViewName);
	void HandleBackContextAction();
	void HandleActiveViewRequested(class FName ViewName);
	TArray<class URHWidget*> GetViewWidgets();
	TArray<class URHOverlayTabEntryWidget*> GetTabEntries();
	class URHOverlayTabHubRouteData* GetLandingInfo();
	class URHWidget* GetCurrentViewWidget();
	void CreateAllViews();
	void ChangeView(class FName ViewName);
	void AddView(class FName ViewName, const struct RallyHereStart_OverlayTabViewRow& ViewInfo);
};

// 0x1C8 (0x1F0 - 0x28)
// Class RallyHereStart.RHPartyManager
class URHPartyManager : public UObject
{
public:
	class ARHHUDCommon*                          MyHud;                                             // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnPartyDataUpdated;                                // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyLocalPlayerLeft;                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyLocalPlayerPromoted;                        // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyMemberPromoted;                             // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyMemberDataUpdated;                          // 0x70(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPendingPartyMemberDataAdded;                     // 0x80(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPendingPartyMemberAccepted;                      // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyMemberRemoved;                              // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyMemberLeft;                                 // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyDisbanded;                                  // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyInvitationError;                            // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyInvitationSent;                             // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyInvitationReceived;                         // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyInvitationAccepted;                         // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyInvitationRejected;                         // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyInvitationExpired;                          // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyInfoUpdated;                                // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyMemberStatusChanged;                        // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct RallyHereStart_RH_PartyMemberData> PartyMembers;                                      // 0x150(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class URH_PlayerInfo*                        PartyInviter;                                      // 0x160(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                LastInviteSentErrorMessage;                        // 0x168(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DF0[0x4];                                     // Fixing Size After Last Property  
	int32                                        MaxPartySize;                                      // 0x17C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                RHSessionType;                                     // 0x180(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_JoinedSession*                     PartySession;                                      // 0x190(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1DFB[0x38];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnPartyMemberReadyUpdated;                         // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPartyLocalPlayerRemoved;                         // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHPartyManager* GetDefaultObj();

	void UIX_PromoteMemberToLeader(struct CoreUObject_Guid& PlayerId);
	void UIX_PlayerKickedFromParty();
	void UIX_LeaveParty();
	void UIX_KickMemberFromParty(struct CoreUObject_Guid& PlayerId);
	void UIX_InviteMemberToParty(struct CoreUObject_Guid& PlayerId);
	void UIX_DisbandParty();
	void UIX_DenyPartyInvitation();
	void UIX_AcceptPartyInvitation();
	void SetSelectedQueueId(const class FString& QueueId);
	void SetReady(bool bReady);
	bool SetPartyMemberReady(struct CoreUObject_Guid& PlayerId, bool bIsReady);
	void SetPartyInfo(const class FString& Key, const class FString& Value);
	void PartyPromoteResponse();
	void PartyLeaveResponse();
	void PartyKickResponse();
	bool IsReady();
	bool IsPlayerInParty(struct CoreUObject_Guid& PlayerId);
	bool IsPartyReady();
	bool IsPartyMaxed();
	bool IsLeader();
	bool IsInParty();
	bool HasInvitePrivileges(struct CoreUObject_Guid& PlayerId);
	void HandlePreferredRegionUpdated();
	class FString GetSelectedQueueId();
	class FString GetRHSessionType();
	class URH_JoinedSession* GetPartySession();
	TArray<struct RallyHereStart_RH_PartyMemberData> GetPartyMembers();
	int32 GetPartyMemberCount();
	struct RallyHereStart_RH_PartyMemberData GetPartyMemberByID(struct CoreUObject_Guid& PlayerId);
	bool GetPartyLeader(struct RallyHereAPI_RHAPI_SessionPlayer* OutPlayer);
	class URH_PlayerInfo* GetPartyInviter();
	enum class ERH_PartyInviteRightsMode GetPartyInviteMode();
	class FString GetPartyInfo(const class FString& Key);
	int32 GetMaxPartyMembers();
	bool CheckPartyMemberIsLeader(struct CoreUObject_Guid& PlayerId);
	void BroadcastPartyInvitationError(class FText InvitationError);
};

// 0x10 (0x560 - 0x550)
// Class RallyHereStart.RHPartyManagerWidgetBase
class URHPartyManagerWidgetBase : public URHWidget
{
public:
	TArray<struct RallyHereStart_RH_PartyMemberData> CachedDisplayedPartyMembers;                       // 0x550(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHPartyManagerWidgetBase* GetDefaultObj();

	void RefreshFromPartyData();
	void HandlePartyMemberUpdateByName(class FText PlayerName);
	void HandlePartyMemberUpdateByInfo(class URH_PlayerInfo* PlayerInfo);
	void HandlePartyMemberUpdateById(struct CoreUObject_Guid& PlayerId);
	void HandlePartyMemberDataUpdated(const struct RallyHereStart_RH_PartyMemberData& MemberData);
	class URH_PlayerInfo* GetSuggestedInvite();
	class URHPartyManager* GetPartyManager();
	TArray<struct RallyHereStart_RH_PartyMemberData> GetCachedDisplayedPartyMembers();
	void ApplyPartyData(TArray<struct RallyHereStart_RH_PartyMemberData>& PartyMembers);
	void ApplyEmptyPartyData();
};

// 0x8 (0x558 - 0x550)
// Class RallyHereStart.RHPlayerCardModuleBase
class URHPlayerCardModuleBase : public URHWidget
{
public:
	class URH_RHFriendAndPlatformFriend*         AssignedFriend;                                    // 0x550(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHPlayerCardModuleBase* GetDefaultObj();

	void View_SetFriend(class URH_RHFriendAndPlatformFriend* Friend);
	void OnRHFriendSet(class URH_RHFriendAndPlatformFriend* Friend);
};

// 0x1A0 (0x9F8 - 0x858)
// Class RallyHereStart.RHPlayerController
class ARHPlayerController : public APlayerController
{
public:
	struct CoreUObject_Guid                      RHPlayerUuid;                                      // 0x858(0x10)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UInputComponent>           InputComponentClass;                               // 0x868(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            PlayerInfoReadyEvent;                              // 0x870(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            LoadoutManagerSetEvent;                            // 0x880(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerInventoryReadyEvent;                         // 0x890(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SettingsSubsystemReadyEvent;                       // 0x8A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class URHS_PlayerInfo>        WeakPlayerInfo;                                    // 0x8B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class URHS_PlayerInventory>   WeakPlayerInventory;                               // 0x8B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class URH_SettingsSubsystem>  WeakSettingsSubsystem;                             // 0x8C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ARH_LoadoutManager*                    R_LoadoutManager;                                  // 0x8C8(0x8)(Net, ZeroConstructor, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FE6[0xD8];                                    // Fixing Size After Last Property  
	class FString                                SonyMatchId;                                       // 0x9A8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                SonyActivityId;                                    // 0x9B8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESonyMatchState                   SonyMatchState;                                    // 0x9C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESonyMatchState                   QueuedSonyMatchState;                              // 0x9C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsSonyMatchOwner;                                 // 0x9CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsEligibleSonyMatchOwner;                         // 0x9CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsExclusiveSonyMatchOwner;                        // 0x9CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FEF[0x13];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnHudBindingReady;                                 // 0x9E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF2[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ARHPlayerController* GetDefaultObj();

	void UIX_FlushPressedKeys();
	void ServerUpdateSonyMatchOwnerEligibility(bool bIsEligible);
	void ServerUpdateSonyMatchData(const class FString& InMatchId);
	void OnRep_LoadoutManager();
	void OnPlayerInfoReady(class URHS_PlayerInfo* PlayerInfo);
	void OnGameStateSet(class AGameStateBase* GameStateBase);
	bool IsHudBindingReady();
	class URH_SettingsSubsystem* GetSettingsSubsystem();
	struct CoreUObject_Guid GetRHPlayerUuid();
	class URHS_PlayerInventory* GetPlayerInventory();
	class URHS_PlayerInfo* GetPlayerInfo();
	class ARH_LoadoutManager* GetLoadoutManager();
	void CreateLoadoutManager(TSubclassOf<class ARH_LoadoutManager>& LoadoutManagerClass);
	void ClientUpdateSonyMatchData(const class FString& InMatchId, const class FString& InActivityId);
	void ClientCheckSonyMatchOwnerEligibility();
};

// 0x50 (0x78 - 0x28)
// Class RallyHereStart.RH_PlayerCosmeticOwnershipHelper
class URH_PlayerCosmeticOwnershipHelper : public UObject
{
public:
	uint8                                        Pad_2005[0x48];                                    // Fixing Size After Last Property  
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_PlayerCosmeticOwnershipHelper* GetDefaultObj();

};

// 0x10 (0x560 - 0x550)
// Class RallyHereStart.RHPlayerCosmeticWidget
class URHPlayerCosmeticWidget : public URHWidget
{
public:
	TArray<class URH_PlayerCosmeticOwnershipHelper*> PendingOwnershipRequests;                          // 0x550(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHPlayerCosmeticWidget* GetDefaultObj();

	bool GetItemsForSlot(FDelegateProperty_ Event, enum class ERHLoadoutSlotTypes SlotType);
};

// 0x30 (0x580 - 0x550)
// Class RallyHereStart.RHPlayerInfoDisplay
class URHPlayerInfoDisplay : public URHWidget
{
public:
	class URH_PlayerInfo*                        MyPlayerInfo;                                      // 0x550(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_SoftObjectPath            PlayerProgressionXpClass;                          // 0x558(0x20)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URHProgression*                        PlayerXpProgression;                               // 0x578(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URHPlayerInfoDisplay* GetDefaultObj();

	void SetPlayerInfo(class URH_PlayerInfo* PlayerInfo);
	void RHUpdateFriends(class URH_RHFriendAndPlatformFriend* Friend);
	void OnPlayerProgressionLoaded();
	void OnPlayerPresenceUpdated(class URH_PlayerPresence* PlayerPresence);
	void OnPartyMemberChanged(struct CoreUObject_Guid& PlayerUuid);
	void OnGetPlayerPlatformPresenceResponse(bool bSuccessful, class URH_PlayerPresence* NewPresence, FDelegateProperty_ Delegate);
	void OnGetPlayerPlatformPlatformsResponse(bool bSuccess, TArray<class URH_PlayerPlatformInfo*>& Platforms, FDelegateProperty_ Delegate);
	class URHProgression* GetPlayerXpProgression();
	void GetPlayerPlatform(FDelegateProperty_& Delegate);
	void BLUEPRINT_GetPlayerLevel(FDelegateProperty_& Delegate);
};

// 0x50 (0x78 - 0x28)
// Class RallyHereStart.RHPlayerInputDefault
class URHPlayerInputDefault : public UObject
{
public:
	TArray<struct RallyHereStart_SettingConfigPair> SettingsConfig;                                    // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct RallyHereStart_RHInputActionNameTypePair> InputActionNameTypePairs;                          // 0x38(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct RallyHereStart_RHInputActionTiedNames> InputActionTiedNames;                              // 0x48(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct RallyHereStart_RHCustomInputActionKey> CustomInputActionKeys;                             // 0x58(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct RallyHereStart_RHCustomInputAxisKey> CustomInputAxisKeys;                               // 0x68(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHPlayerInputDefault* GetDefaultObj();

};

// 0x338 (0xB28 - 0x7F0)
// Class RallyHereStart.RHPlayerInput
class URHPlayerInput : public UEnhancedPlayerInput
{
public:
	TMap<class FName, class FString>             SavedSettingsConfig;                               // 0x7F0(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_20DE[0xF0];                                    // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  GamepadLookAcceleration;                           // 0x930(0x10)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinMouseSenseScaling;                              // 0x940(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxMouseSenseScaling;                              // 0x944(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnKeyMappingsUpdated;                              // 0x948(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class FName, struct RallyHereStart_RHCustomInputActionKeyMappings> CustomActionKeyMappings;                           // 0x958(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_20E7[0x50];                                    // Fixing Size After Last Property  
	TMap<class FName, struct RallyHereStart_RHCustomInputAxisKeyMappings> CustomAxisKeyMappings;                             // 0x9F8(0x50)(Config, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_20EB[0x50];                                    // Fixing Size After Last Property  
	TSubclassOf<class URHAnalogStickFilter>      LeftAnalogStickFilterClass;                        // 0xA98(0x8)(ZeroConstructor, Config, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class URHAnalogStickFilter>      RightAnalogStickFilterClass;                       // 0xAA0(0x8)(ZeroConstructor, Config, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20F1[0x20];                                    // Fixing Size After Last Property  
	float                                        KeyMouseSwitchDelta;                               // 0xAC8(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20F3[0x4];                                     // Fixing Size After Last Property  
	float                                        GamepadSwitchDelta;                                // 0xAD0(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_20F5[0x4];                                     // Fixing Size After Last Property  
	class URHAnalogStickFilter*                  LeftAnalogStickFilter;                             // 0xAD8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20F6[0x18];                                    // Fixing Size After Last Property  
	class URHAnalogStickFilter*                  RightAnalogStickFilter;                            // 0xAF8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20F7[0x28];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHPlayerInput* GetDefaultObj();

	bool DoesInputTypeSupportChords(enum class EInputType InputType);
};

// 0x18 (0x368 - 0x350)
// Class RallyHereStart.RHPlayerState
class ARHPlayerState : public APlayerState
{
public:
	int32                                        RHPlayerId;                                        // 0x350(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_Guid                      RHPlayerUuid;                                      // 0x354(0x10)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2129[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ARHPlayerState* GetDefaultObj();

	struct CoreUObject_Guid GetRHPlayerUuid();
	int32 GetRHPlayerId();
	class URH_PlayerInfo* GetPlayerInfo(class ARHHUDCommon* HUD);
};

// 0x160 (0x6B0 - 0x550)
// Class RallyHereStart.RHPopupManager
class URHPopupManager : public URHWidget
{
public:
	uint8                                        Pad_2164[0x10];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnTimerExpired;                                    // 0x560(0x10)(ZeroConstructor, InstancedReference, BlueprintCallable, NativeAccessSpecifierPublic)
	bool                                         bUsesPopupQueue;                                   // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewPopupsShowOverCurrent;                         // 0x571(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2169[0x6];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereStart_RHPopupConfig>  PopupQueue;                                        // 0x578(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	int32                                        M_nPopupId;                                        // 0x588(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_216A[0x10C];                                   // Fixing Size After Last Property  
	class FText                                  CommittedText;                                     // 0x698(0x18)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHPopupManager* GetDefaultObj();

	void ShowPopup(const struct RallyHereStart_RHPopupConfig& PopupData);
	void RemovePopup(int32 PopupId);
	void OnPopupResponse(int32 NPopupId, int32 NResponseIndex);
	void OnPopupCanceled();
	void NextPopup();
	void HidePopup();
	void CloseUnimportantPopups();
	void CloseAllPopups();
	int32 AddPopup(struct RallyHereStart_RHPopupConfig& PopupData);
};

// 0x0 (0x550 - 0x550)
// Class RallyHereStart.RHPortalOffersWidget
class URHPortalOffersWidget : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class URHPortalOffersWidget* GetDefaultObj();

	TArray<class URHStoreItem*> GetPortalOfferItems();
	class URHStoreItemHelper* GetItemHelper();
};

// 0x0 (0x550 - 0x550)
// Class RallyHereStart.RHPriceTag
class URHPriceTag : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class URHPriceTag* GetDefaultObj();

	void SetPriceTag(class URHStoreItemPrice* StoreItemPrice, class URHStoreItem* StoreItem);
};

// 0x8 (0x170 - 0x168)
// Class RallyHereStart.RHProgression
class URHProgression : public UPlatformInventoryItem
{
public:
	int32                                        ProgressionXpTableId;                              // 0x168(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B3[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHProgression* GetDefaultObj();

	float GetProgressionLevelPercent(class UObject* WorldContextObject, int32 ProgressAmount);
	int32 GetProgressionLevel(class UObject* WorldContextObject, int32 ProgressAmount);
};

// 0x30 (0x58 - 0x28)
// Class RallyHereStart.RHPurchaseData
class URHPurchaseData : public UObject
{
public:
	class URHStoreItem*                          StoreItem;                                         // 0x28(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PurchaseQuantity;                                  // 0x30(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21BC[0x4];                                     // Fixing Size After Last Property  
	class FString                                ExternalTransactionId;                             // 0x38(0x10)(BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PurchaseCompletedCallback;                         // 0x48(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHPurchaseData* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class RallyHereStart.RHStoreSectionItemWithPurchaseData
class URHStoreSectionItemWithPurchaseData : public URHPurchaseData
{
public:
	class URHStoreSectionItem*                   StoreSectionItem;                                  // 0x58(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHStoreSectionItemWithPurchaseData* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class RallyHereStart.RHStoreItemWithPurchaseData
class URHStoreItemWithPurchaseData : public URHPurchaseData
{
public:

	static class UClass* StaticClass();
	static class URHStoreItemWithPurchaseData* GetDefaultObj();

};

// 0x8 (0x60 - 0x58)
// Class RallyHereStart.RHStoreItemWithBattlepassData
class URHStoreItemWithBattlepassData : public URHPurchaseData
{
public:
	class URHBattlepass*                         BattlepassItem;                                    // 0x58(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHStoreItemWithBattlepassData* GetDefaultObj();

};

// 0x18 (0x568 - 0x550)
// Class RallyHereStart.RHPurchaseConfirmationWidget
class URHPurchaseConfirmationWidget : public URHWidget
{
public:
	class URHStoreItem*                          PurchaseItem;                                      // 0x550(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PurchaseQuantity;                                  // 0x558(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_21F7[0x4];                                     // Fixing Size After Last Property  
	class URHPurchaseData*                       PurchaseRequestData;                               // 0x560(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHPurchaseConfirmationWidget* GetDefaultObj();

	void PromptAlreadyPurchasing();
	void OnPurchaseComplete(bool bCompletedPurchase);
	class URHStoreItemHelper* GetStoreItemHelper();
	void BLUEPRINT_TryChangePurchaseQuantity(int32 QuantityChangeAmount, FDelegateProperty_& Delegate);
	void BLUEPRINT_CanChangePurchaseQuantity(int32 QuantityChangeAmount, FDelegateProperty_& Delegate);
};

// 0x0 (0x550 - 0x550)
// Class RallyHereStart.RHPurchaseModal
class URHPurchaseModal : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class URHPurchaseModal* GetDefaultObj();

	void SetupBindings();
	void HandleShowPurchaseModal(class URHStoreItem* Item, class URHStoreItemPrice* Price);
	class URHStoreItemHelper* GetStoreItemHelper();
};

// 0x30 (0xB8 - 0x88)
// Class RallyHereStart.RHJsonPushNotification
class URHJsonPushNotification : public URHJsonData
{
public:
	class FString                                Header;                                            // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Body;                                              // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ActivationEvent;                                   // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHJsonPushNotification* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class RallyHereStart.RHPushNotificationManager
class URHPushNotificationManager : public UObject
{
public:
	class URHJsonDataFactory*                    JsonDataFactory;                                   // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                JsonPanel;                                         // 0x30(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URHJsonPushNotification*>       Notifications;                                     // 0x40(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	enum class ERHPushNotificationState          State;                                             // 0x50(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNotificationPermissionGranted;                    // 0x51(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2236[0x6];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHPushNotificationManager* GetDefaultObj();

	void HandleRegisteredForUserNotifications(int32 Types);
	void HandleRegisteredForRemoteNotifications(const TArray<uint8>& InToken);
	void HandleJsonReady(const class FString& JsonName);
};

// 0x320 (0x348 - 0x28)
// Class RallyHereStart.RHQueueDataFactory
class URHQueueDataFactory : public UObject
{
public:
	uint8                                        Pad_243C[0x10];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnQueueJoined;                                     // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueueLeft;                                       // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueueStatusChange;                               // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQueueDataUpdated;                                // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetQueueId;                                      // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSetMatchmakingAttributes;                        // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMatchStatusUpdatedError;                         // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCustomMatchJoined;                               // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCustomMatchDataChanged;                          // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCustomMatchMapChanged;                           // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCustomMatchLeft;                                 // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCustomSearchResultReceived;                      // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bCheckForAutoRejoin;                               // 0xF8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2443[0x7];                                     // Fixing Size After Last Property  
	class FString                                RHSessionType;                                     // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                SessionLeaderNameFieldName;                        // 0x110(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_JoinedSession*                     CustomMatchSession;                                // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct RallyHereStart_RH_CustomMatchMember> CustomMatchMembers;                                // 0x128(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2447[0x38];                                    // Fixing Size After Last Property  
	TArray<class FString>                        QueueIds;                                          // 0x170(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class FString                                DefaultQueueId;                                    // 0x180(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                SelectedQueueId;                                   // 0x190(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct RallyHereStart_RHMatchmakingAttributes SelectedMatchmakingAttributes;                     // 0x1A0(0x140)(Protected, NativeAccessSpecifierProtected)
	float                                        QueueUpdatePollInterval;                           // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_244A[0x4];                                     // Fixing Size After Last Property  
	struct Engine_TimerHandle                    QueueUpdateTimerHandle;                            // 0x2E8(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_244E[0x8];                                     // Fixing Size After Last Property  
	class UDataTable*                            QueueDetailsDT;                                    // 0x2F8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            MapsDetailsDT;                                     // 0x300(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct CoreUObject_SoftObjectPath            QueuesDataTableClassName;                          // 0x308(0x20)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct CoreUObject_SoftObjectPath            MapsDataTableClassName;                            // 0x328(0x20)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URHQueueDataFactory* GetDefaultObj();

	void StartCustomMatch(bool bDedicatedInstance);
	bool SetSelectedQueueId(const class FString& QueueId);
	bool SetSelectedMatchmakingAttributes(struct RallyHereStart_RHMatchmakingAttributes& Attributes);
	void SetPlayerTeamCustomMatch(struct CoreUObject_Guid& PlayerId, int32 TeamId);
	void SetMapForCustomMatch(class FName MapRowName);
	void PromoteToCustomMatchHost(struct CoreUObject_Guid& PlayerId);
	bool LeaveQueue();
	bool LeaveMatch();
	void LeaveCustomMatchSession();
	void KickFromCustomMatch(struct CoreUObject_Guid& PlayerId);
	bool JoinSelectedQueue();
	bool JoinQueue(const class FString& QueueId, struct RallyHereStart_RHMatchmakingAttributes& Attributes);
	bool JoinCustomMatchSession(class URH_SessionView* InSession);
	bool IsQueueActive(const class FString& QueueId);
	bool IsPlayerCustomLobbyLeader(struct CoreUObject_Guid& PlayerUuid);
	bool IsLocalPlayerCustomLobbyLeader();
	bool IsInQueue();
	bool IsInCustomMatch();
	bool IsCustomInvitePending(struct CoreUObject_Guid& PlayerId);
	bool IsCustomGameSession(class URH_SessionView* PSession);
	void InviteToCustomMatch(struct CoreUObject_Guid& PlayerId, int32 TeamNum);
	void HandleConfirmPromoteCustomPlayer();
	void HandleConfirmLeaveCustomLobby();
	void HandleConfirmKickCustomPlayer();
	void HandleCancelPromoteCustomPlayer();
	void HandleCancelKickCustomPlayer();
	float GetTimeInQueueSeconds();
	int32 GetTeamMemberCount(int32 TeamId);
	class FString GetSelectedQueueId();
	void GetSelectedMatchmakingAttributes(struct RallyHereStart_RHMatchmakingAttributes* Attributes);
	class FName GetSelectedCustomMap();
	TArray<class URH_MatchmakingQueueInfo*> GetQueues();
	class URH_MatchmakingQueueInfo* GetQueueInfoById(const class FString& QueueId);
	bool GetQueueDetailsByQueueId(const class FString& QueueId, struct RallyHereStart_RHQueueDetails* QueueDetails);
	bool GetQueueDetailsByQueue(class URH_MatchmakingQueueInfo* Queue, struct RallyHereStart_RHQueueDetails* QueueDetails);
	int32 GetPlayerTeamId(struct CoreUObject_Guid& PlayerId);
	class UDataTable* GetMapsDetailsDT();
	bool GetMapDetailsFromRowName(class FName MapRowName, struct RallyHereStart_RHMapDetails* OutMapDetails);
	class URH_JoinedSession* GetCustomMatchSession();
	TArray<struct RallyHereStart_RH_CustomMatchMember> GetCustomMatchMembers();
	enum class ERH_MatchStatus GetCurrentQueueMatchState();
	void DoSearchForCustomGames();
	void DeclineMatchRejoin();
	void DeclineMatchInvite();
	void CreateCustomMatchSession();
	bool CanQueue();
	bool CanLocalPlayerPromoteCustomLobbyPlayer(struct CoreUObject_Guid& PlayerId);
	bool CanLocalPlayerKickCustomLobbyPlayer(struct CoreUObject_Guid& PlayerId);
	bool CanLocalPlayerControlCustomLobbyPlayer(struct CoreUObject_Guid& PlayerId);
	bool AttemptRejoinMatch();
	void AcceptMatchRejoin();
	void AcceptMatchInvite();
};

// 0x10 (0x560 - 0x550)
// Class RallyHereStart.RHQueuedMessageWidget
class URHQueuedMessageWidget : public URHWidget
{
public:
	uint8                                        Pad_24BB[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHQueuedMessageWidget* GetDefaultObj();

	void QueueMessage(class FText Message);
	bool GetNextMessage(class FText* Message);
};

// 0x0 (0x550 - 0x550)
// Class RallyHereStart.RHQueueWidgetBase
class URHQueueWidgetBase : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class URHQueueWidgetBase* GetDefaultObj();

	void UpdateQueueSelection();
	void UpdateQueuePermissions();
	bool UIX_AttemptRejoinMatch();
	bool UIX_AttemptLeaveMatch();
	bool UIX_AttemptJoinSelectedQueue();
	bool UIX_AttemptCancelQueue();
	void SetupReadyForQueueing();
	void SetupBindings();
	bool SetCurrentlySelectedQueue(const class FString& QueueId);
	void ReceiveMatchStatusUpdate(enum class ERH_MatchStatus CurrentMatchStatus);
	void OnSelectedQueueUpdate(class URH_MatchmakingQueueInfo* CurrentSelectedQueue);
	void OnQueueStateUpdate(enum class ERH_MatchStatus CurrentMatchStatus);
	void OnQueuePermissionUpdate(bool CanQueue);
	void OnControlQueuePermissionUpdate(bool CanControl);
	bool IsValidQueue(const class FString& QueueId);
	void HandleSelectedQueueIdSet();
	void HandlePartyMemberRemoved(struct CoreUObject_Guid& PartyMemberId);
	void HandlePartyMemberDataUpdated(const struct RallyHereStart_RH_PartyMemberData& PartyMember);
	void HandleMatchStatusUpdate(enum class ERH_MatchStatus MatchStatus);
	void HandleConfirmLeaveQueue();
	TArray<class URH_MatchmakingQueueInfo*> GetQueues();
	void GetQueuePermissions(bool* CanControl, bool* CanQueue);
	class URH_MatchmakingQueueInfo* GetQueueInfoById(const class FString& QueueId);
	class URHQueueDataFactory* GetQueueDataFactory();
	class URHPartyManager* GetPartyManager();
	class URH_MatchmakingQueueInfo* GetCurrentlySelectedQueue();
};

// 0x10 (0x560 - 0x550)
// Class RallyHereStart.RHQueueTimerWidgetBase
class URHQueueTimerWidgetBase : public URHQueueWidgetBase
{
public:
	uint8                                        Pad_2676[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHQueueTimerWidgetBase* GetDefaultObj();

	void OnUpdateQueueTimerState(enum class EQueueTimerState State);
	void OnUpdateQueueTime(float TimeSecs);
	float GetQueueTime_TotalSecs();
	int32 GetQueueTime_PartSecs();
	int32 GetQueueTime_PartMins();
	int32 GetQueueTime_PartHours();
	enum class EQueueTimerState GetCurrentTimerState();
};

// 0x30 (0x580 - 0x550)
// Class RallyHereStart.RHQuickPlay
class URHQuickPlay : public URHWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectedQueueChanged;                            // 0x550(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         CanCurrentlyJoinQueue;                             // 0x560(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanControlQueue;                                   // 0x561(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2852[0x6];                                     // Fixing Size After Last Property  
	class FString                                DefaultSelectedQueueId;                            // 0x568(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ReadyForQueueing;                                  // 0x578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2856[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHQuickPlay* GetDefaultObj();

	void UpdateQueuePermissions();
	void SetupReadyForQueueing();
	void SetupBindings();
	bool SetCurrentlySelectedQueue(const class FString& QueueId);
	void ReceiveMatchStatusUpdate(enum class ERH_MatchStatus CurrentMatchStatus);
	void OnQueuePermissionChanged(bool CanQueue);
	void OnControlQueuePermissionChanged(bool CanControl);
	bool IsValidQueue(const class FString& QueueId);
	void HandlePartyMemberDataUpdated(const struct RallyHereStart_RH_PartyMemberData& PartyMember);
	TArray<class URH_MatchmakingQueueInfo*> GetQueues();
	class URH_MatchmakingQueueInfo* GetQueueInfoById(const class FString& QueueId);
	class URHQueueDataFactory* GetQueueDataFactory();
	class URHPartyManager* GetPartyManager();
	class FString GetDefaultSelectedQueueId();
	class URH_MatchmakingQueueInfo* GetCurrentlySelectedQueue();
};

// 0x18 (0x568 - 0x550)
// Class RallyHereStart.RHQuickPlayWidget
class URHQuickPlayWidget : public URHQueueWidgetBase
{
public:
	uint8                                        Pad_28D0[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHQuickPlayWidget* GetDefaultObj();

	void UpdateState();
	void SetIsPendingQueueUpdate(bool IsPending);
	void OnUpdateQuickPlayState(enum class EQuickPlayQueueState QueueState);
	void OnUpdateQuickPlayCanPlay(bool CanPlay);
	void OnUpdateQueueTimeElapsed(float TimeElapsed);
	void OnUpdatePenaltyTimeLeft(int32 TimeLeft);
	bool IsPendingQueueUpdate();
	enum class EQuickPlayQueueState GetSelectedQueueState();
	bool GetGameModeDisplayName(class FText* GameModeDisplayName);
	enum class EQuickPlayQueueState GetCurrentQuickPlayState();
};

// 0x18 (0x568 - 0x550)
// Class RallyHereStart.RHRedeemCodeScreenBase
class URHRedeemCodeScreenBase : public URHWidget
{
public:
	uint8                                        Pad_2929[0x18];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHRedeemCodeScreenBase* GetDefaultObj();

	void RedeemCode(const class FString& Code);
	void OnRedeemCodeSubmit();
	void OnRedeemCodeResult(bool Success, class FText& Error);
	bool IsPendingServerReply();
};

// 0x0 (0x28 - 0x28)
// Class RallyHereStart.RHRegionSelectModalViewRedirector
class URHRegionSelectModalViewRedirector : public URHViewRedirecter
{
public:

	static class UClass* StaticClass();
	static class URHRegionSelectModalViewRedirector* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class RallyHereStart.RHRegionSelectModal
class URHRegionSelectModal : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class URHRegionSelectModal* GetDefaultObj();

};

// 0x8 (0x1B8 - 0x1B0)
// Class RallyHereStart.RHSafeZone
class URHSafeZone : public USafeZone
{
public:
	bool                                         bBorderLeft;                                       // 0x1B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBorderRight;                                      // 0x1B1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBorderTop;                                        // 0x1B2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBorderBottom;                                     // 0x1B3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceDrawBorders;                                 // 0x1B4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2956[0x3];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHSafeZone* GetDefaultObj();

	void SetBorderSides(bool bInBorderLeft, bool bInBorderRight, bool bInBorderTop, bool bInBorderBottom);
};

// 0x0 (0x1B0 - 0x1B0)
// Class RallyHereStart.RHUnsafeZone
class URHUnsafeZone : public USafeZone
{
public:

	static class UClass* StaticClass();
	static class URHUnsafeZone* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class RallyHereStart.RHSettingsCallbackInterface
class IRHSettingsCallbackInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IRHSettingsCallbackInterface* GetDefaultObj();

	bool GetSettingAsInt(class FName Name, int32* OutInt);
	bool GetSettingAsFloat(class FName Name, float* OutFloat);
	bool GetSettingAsBool(class FName Name, bool* OutBool);
	void BindSettingCallbacks(class FName Name, struct RallyHereStart_SettingDelegateStruct& SettingDelegateStruct);
};

// 0x0 (0x28 - 0x28)
// Class RallyHereStart.RHSettingsCallbackStatics
class URHSettingsCallbackStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URHSettingsCallbackStatics* GetDefaultObj();

	TScriptInterface<class IRHSettingsCallbackInterface> GetLocalSettingsCallbackInterfaceFromPlayer(class APlayerController* InPlayer);
	TScriptInterface<class IRHSettingsCallbackInterface> GetLocalSettingsCallbackInterface(class UObject* WorldContextObject);
	bool GetLocalSettingAsIntFromPlayer(class FName Name, int32* OutInt, class APlayerController* InPlayer);
	bool GetLocalSettingAsInt(class FName Name, int32* OutInt, class UObject* WorldContextObject);
	bool GetLocalSettingAsFloatFromPlayer(class FName Name, float* OutFloat, class APlayerController* InPlayer);
	bool GetLocalSettingAsFloat(class FName Name, float* OutFloat, class UObject* WorldContextObject);
	bool GetLocalSettingAsBoolFromPlayer(class FName Name, bool* OutBool, class APlayerController* InPlayer);
	bool GetLocalSettingAsBool(class FName Name, bool* OutBool, class UObject* WorldContextObject);
	void BindSettingCallbackToPlayer(class FName Name, struct RallyHereStart_SettingDelegateStruct& SettingDelegateStruct, class APlayerController* InPlayer);
	void BindSettingCallback(class FName Name, struct RallyHereStart_SettingDelegateStruct& SettingDelegateStruct, class UObject* WorldContextObject);
};

// 0x20 (0x570 - 0x550)
// Class RallyHereStart.RHSettingsContainer
class URHSettingsContainer : public URHWidget
{
public:
	TArray<class URHSettingsWidget*>             SettingsWidgets;                                   // 0x550(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class URHSettingsPreview*                    AssociatePreviewWidget;                            // 0x560(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHSettingsContainerConfigAsset*       ContainerConfigAsset;                              // 0x568(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHSettingsContainer* GetDefaultObj();

	void SetContainerConfig(class URHSettingsContainerConfigAsset* InContainerConfig);
	void OnShowSettingsWidget(class URHSettingsWidget* SettingsWidget);
	void OnHideSettingsWidget(class URHSettingsWidget* SettingsWidget);
	void OnContainerConfigSet();
	class FText GetWidgetContainerTitle();
	class URHSettingsPreview* GetWidgetContainerPreview();
	class FText GetWidgetContainerDescription();
	TArray<class URHSettingsWidget*> GetSettingsWidgets();
	void AddSettingsWidget(class URHSettingsWidget* SettingsWidget);
	void AddPreviewWidget(class URHSettingsPreview* PreviewWidget);
};

// 0x10 (0x40 - 0x30)
// Class RallyHereStart.RHSettingsColorOptionsAsset
class URHSettingsColorOptionsAsset : public UDataAsset
{
public:
	TArray<struct RallyHereStart_ColorOptions>   ColorOptions;                                      // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHSettingsColorOptionsAsset* GetDefaultObj();

};

// 0x110 (0x140 - 0x30)
// Class RallyHereStart.RHSettingsContainerConfigAsset
class URHSettingsContainerConfigAsset : public UDataAsset
{
public:
	bool                                         bIsAvailableOffline;                               // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_RHAllowedPlatformTypes AllowedPlatformTypes;                              // 0x31(0xA)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct RallyHereStart_RHRequiredInputTypes   RequiredInputTypes;                                // 0x3B(0x3)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ACF[0x2];                                     // Fixing Size After Last Property  
	class FString                                RequiredExperiment;                                // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePreview;                                       // 0x50(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD1[0x7];                                     // Fixing Size After Last Property  
	TSubclassOf<class URHSettingsPreview>        PreviewWidget;                                     // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct RallyHereStart_RHSettingsWidgetConfig> WidgetConfigs;                                     // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  SettingName;                                       // 0x70(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<class FString, class FText>             SettingNameByPlatform;                             // 0x88(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  SettingDescription;                                // 0xD8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<class FString, class FText>             SettingDescriptionByPlatform;                      // 0xF0(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHSettingsContainerConfigAsset* GetDefaultObj();

	class FText GetSettingName();
	class FText GetSettingDescription();
};

// 0x78 (0xA8 - 0x30)
// Class RallyHereStart.RHSettingsSectionConfigAsset
class URHSettingsSectionConfigAsset : public UDataAsset
{
public:
	TArray<struct RallyHereStart_RHSettingsGroupConfig> SettingsGroups;                                    // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Heading;                                           // 0x40(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<class FString, class FText>             HeadingByPlatform;                                 // 0x58(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHSettingsSectionConfigAsset* GetDefaultObj();

	class FText GetHeading();
};

// 0x78 (0xA8 - 0x30)
// Class RallyHereStart.RHSettingsPageConfigAsset
class URHSettingsPageConfigAsset : public UDataAsset
{
public:
	TArray<class URHSettingsSectionConfigAsset*> SettingsSectionConfigs;                            // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  PageName;                                          // 0x40(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TMap<class FString, class FText>             HeadingByPlatform;                                 // 0x58(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHSettingsPageConfigAsset* GetDefaultObj();

	class FText GetPageName();
};

// 0x10 (0x40 - 0x30)
// Class RallyHereStart.RHSettingsMenuConfigAsset
class URHSettingsMenuConfigAsset : public UDataAsset
{
public:
	TArray<class URHSettingsPageConfigAsset*>    SettingsPageConfigs;                               // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHSettingsMenuConfigAsset* GetDefaultObj();

};

// 0x340 (0x378 - 0x38)
// Class RallyHereStart.RHSettingsDataFactory
class URHSettingsDataFactory : public URHDataFactory
{
public:
	uint8                                        Pad_2C59[0x8];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnSettingsReceivedFromPlayerAccount;               // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C5B[0xA0];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnKeyBindSettingsApplied;                          // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnKeyBindSettingsSaved;                            // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct RallyHereStart_RHSettingPropertyId> BoolSettingPropertyIds;                            // 0x110(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C5F[0x50];                                    // Fixing Size After Last Property  
	TArray<struct RallyHereStart_RHSettingPropertyId> IntSettingPropertyIds;                             // 0x170(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C65[0x50];                                    // Fixing Size After Last Property  
	TArray<struct RallyHereStart_RHSettingPropertyId> FloatSettingPropertyIds;                           // 0x1D0(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C69[0xB0];                                    // Fixing Size After Last Property  
	TSoftObjectPtr<class URHSettingsMenuConfigAsset> SettingsMenuConfigAsset;                           // 0x290(0x28)(Edit, Config, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C6D[0x10];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnDisplayLanguageApplied;                          // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDisplayLanguageSaved;                            // 0x2D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnScreenResolutionApplied;                         // 0x2E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnScreenResolutionSaved;                           // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSettingValueChanged;                             // 0x308(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<int32, struct RallyHereStart_RHSettingConfigSet> StoredCaseSets;                                    // 0x318(0x50)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_2C79[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHSettingsDataFactory* GetDefaultObj();

	bool SetSelectedRegion(const class FString& RegionId);
	void SaveSettings();
	void SaveSettingAsInt(class FName Name);
	void SaveSettingAsFloat(class FName Name);
	void SaveSettingAsBool(class FName Name);
	void SaveScreenResolution();
	void SaveLanguage();
	void SaveKeyBindings();
	void RevertScreenResolution();
	void RevertPlayerPreferences();
	void RevertLanguageToDefault();
	void RevertKeyBindings();
	bool OnSettingChanged(class FName SettingId, int32 SettingValue);
	bool IsUserLoggedIn();
	class FString GetSelectedRegion();
	struct CoreUObject_IntPoint GetScreenResolution();
	class URHPlayerInput* GetRHPlayerInput();
	void GetDefaultRHInputActionKeys(class FName& Name, enum class EInputType InputType, TArray<struct RallyHereStart_RHInputActionKey>* OutKeys);
	void GetDefaultInputAxisKeys(class FName& Name, enum class EInputType InputType, float Scale, TArray<struct InputCore_Key>* OutKeys);
	void GetDefaultInputActionKeys(class FName& Name, enum class EInputType InputType, TArray<struct InputCore_Key>* OutKeys);
	void GetCustomRHInputActionKeys(class FName Name, enum class EInputType InputType, TArray<struct RallyHereStart_RHInputActionKey>* OutKeys);
	void GetCustomInputAxisKeys(class FName Name, enum class EInputType InputType, float Scale, TArray<struct InputCore_Key>* OutKeys);
	void GetCustomInputActionKeys(class FName Name, enum class EInputType InputType, TArray<struct InputCore_Key>* OutKeys);
	class FString GetCurrentLanguage();
	TArray<class FString> GetAvailableLanguages();
	void ApplySettingAsInt(class FName Name, int32 Value);
	void ApplySettingAsFloat(class FName Name, float Value);
	void ApplySettingAsBool(class FName Name, bool Value);
	void ApplyScreenResolution(const struct CoreUObject_IntPoint& ScreenResolution);
	void ApplyLanguage(const class FString& LanguageCulture);
};

// 0x30 (0x580 - 0x550)
// Class RallyHereStart.RHSettingsGroup
class URHSettingsGroup : public URHWidget
{
public:
	TArray<class URHSettingsContainer*>          SettingsContainers;                                // 0x550(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class URHSettingsContainer>      SettingsContainerClass;                            // 0x560(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct RallyHereStart_RHSettingsGroupConfig  GroupConfig;                                       // 0x568(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHSettingsGroup* GetDefaultObj();

	void OnShowContainer(class URHSettingsContainer* SettingsContainer);
	void OnHideContainer(class URHSettingsContainer* SettingsContainer);
	void OnGroupConfigSet();
	TArray<class URHSettingsContainer*> GetSettingsContainers();
	void AddSubSettingsContainerWidget(class URHSettingsContainer* SettingsContainer);
	void AddMainSettingsContainerWidget(class URHSettingsContainer* SettingsContainer);
};

// 0xF0 (0x118 - 0x28)
// Class RallyHereStart.RHSettingsInfoBase
class URHSettingsInfoBase : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnSettingValueChanged;                             // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSettingPreviewChanged;                           // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bIsAutoApplied;                                    // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsAutoSaved;                                      // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3081[0x86];                                    // Fixing Size After Last Property  
	TArray<class FText>                          TextOptions;                                       // 0xD0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnTextOptionsChanged;                              // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	float                                        MinValue;                                          // 0xF0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxValue;                                          // 0xF4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideDisplayRange;                             // 0xF8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3096[0x3];                                     // Fixing Size After Last Property  
	float                                        MinDisplayValue;                                   // 0xFC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDisplayValue;                                   // 0x100(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        StepValue;                                         // 0x104(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRoundValue;                                       // 0x108(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_30A4[0x3];                                     // Fixing Size After Last Property  
	float                                        RoundToNearest;                                    // 0x10C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsPercent;                                        // 0x110(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_30A8[0x3];                                     // Fixing Size After Last Property  
	int32                                        AppliedValueOffset;                                // 0x114(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHSettingsInfoBase* GetDefaultObj();

	void UpdateTextOptions(TArray<class FText>& NewOptions);
	bool SetPreviewValueInt(int32 InInt);
	bool SetPreviewValueFloat(float InFloat);
	bool SetPreviewValueBool(bool InBool);
	bool SetDesiredValueKeyBind(const struct RallyHereStart_RHKeyBind& InKeyBind);
	bool SetDesiredValueInt(int32 InInt);
	bool SetDesiredValueFloat(float InFloat);
	bool SetDesiredValueBool(bool InBool);
	bool SaveKeyBindValue(const struct RallyHereStart_RHKeyBind& InKeyBind);
	bool SaveIntValue(int32 InInt);
	bool SaveFloatValue(float InFloat);
	bool SaveBoolValue(bool InBool);
	void Save();
	float RoundToNearestValueFloat(float ValueToRound);
	void RevertSettingToDefault();
	void Revert();
	void ResetPreview();
	void OnValueKeyBindSaved(const struct RallyHereStart_RHKeyBind& SavedKeyBind);
	void OnValueKeyBindApplied(const struct RallyHereStart_RHKeyBind& AppliedKeyBind);
	void OnValueIntSaved(int32 SavedInt);
	void OnValueIntApplied(int32 AppliedInt);
	void OnValueFloatSaved(float SavedFloat);
	void OnValueFloatApplied(float AppliedFloat);
	void OnValueBoolSaved(bool SavedBool);
	void OnValueBoolApplied(bool AppliedBool);
	bool IsValidValueKeyBind(const struct RallyHereStart_RHKeyBind& InKey);
	bool IsValidValueInt(int32 InInt);
	bool IsValidValueFloat(float InFloat);
	bool IsValidValueBool(bool InBool);
	bool IsDirty();
	void InitializeValue();
	struct RallyHereStart_RHKeyBind GetValueKeyBind();
	int32 GetValueInt();
	float GetValueFloat();
	bool GetValueBool();
	TArray<class FText> GetTextOptions();
	class FText GetTextOption(int32 Index);
	float GetStep();
	enum class ERHSettingType GetSettingType();
	float GetRoundToNearest();
	bool GetRound();
	class ARHHUDCommon* GetRHHUD();
	int32 GetPreviewValueInt();
	float GetPreviewValueFloat();
	bool GetPreviewValueBool();
	int32 GetNumTextOptions();
	float GetMinDisplay();
	float GetMin();
	float GetMaxDisplay();
	float GetMax();
	bool GetIsPercent();
	struct RallyHereStart_RHKeyBind GetDirtyValueKeyBind();
	int32 GetDirtyValueInt();
	float GetDirtyValueFloat();
	bool GetDirtyValueBool();
	int32 GetAppliedValueOffset();
	struct RallyHereStart_RHKeyBind FixupInvalidKeyBind(const struct RallyHereStart_RHKeyBind& InKey);
	int32 FixupInvalidInt(int32 InInt);
	float FixupInvalidFloat(float InFloat);
	bool FixupInvalidBool(bool InBool);
	bool CanRevert();
	bool ApplyPreviewIntValue(int32 InInt);
	bool ApplyPreviewFloatValue(float InFloat);
	bool ApplyPreviewBoolValue(bool InBool);
	void ApplyPreview();
	bool ApplyKeyBindValue(const struct RallyHereStart_RHKeyBind& InKeyBind);
	bool ApplyIntValue(int32 InInt);
	bool ApplyFloatValue(float InFloat);
	bool ApplyBoolValue(bool InBool);
	void Apply();
};

// 0x0 (0x118 - 0x118)
// Class RallyHereStart.RHSettingsInfo_AutoSelectQuality
class URHSettingsInfo_AutoSelectQuality : public URHSettingsInfoBase
{
public:

	static class UClass* StaticClass();
	static class URHSettingsInfo_AutoSelectQuality* GetDefaultObj();

};

// 0x20 (0x138 - 0x118)
// Class RallyHereStart.RHSettingsInfo_Binding
class URHSettingsInfo_Binding : public URHSettingsInfoBase
{
public:
	struct RallyHereStart_RHKeyBindInfo          PrimaryKeyBindInfo;                                // 0x118(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct RallyHereStart_RHKeyBindInfo          GamepadKeyBindInfo;                                // 0x128(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHSettingsInfo_Binding* GetDefaultObj();

	void OnSettingsReceivedFromPlayerAccount();
	void OnKeyBindingsSaved(class FName Name);
	void OnKeyBindingsApplied(class FName Name);
};

// 0x0 (0x118 - 0x118)
// Class RallyHereStart.RHSettingsInfo_Brightness
class URHSettingsInfo_Brightness : public URHSettingsInfoBase
{
public:

	static class UClass* StaticClass();
	static class URHSettingsInfo_Brightness* GetDefaultObj();

	void OnSettingSaved();
	void OnSettingApplied();
	class URHSettingsDataFactory* GetRHSettingsDataFactory();
};

// 0x0 (0x118 - 0x118)
// Class RallyHereStart.RHSettingsInfo_Button
class URHSettingsInfo_Button : public URHSettingsInfoBase
{
public:

	static class UClass* StaticClass();
	static class URHSettingsInfo_Button* GetDefaultObj();

	void OnButtonClicked();
};

// 0x0 (0x118 - 0x118)
// Class RallyHereStart.RHSettingsInfo_GamepadIconSet
class URHSettingsInfo_GamepadIconSet : public URHSettingsInfoBase
{
public:

	static class UClass* StaticClass();
	static class URHSettingsInfo_GamepadIconSet* GetDefaultObj();

};

// 0x10 (0x128 - 0x118)
// Class RallyHereStart.RHSettingsInfo_Generic
class URHSettingsInfo_Generic : public URHSettingsInfoBase
{
public:
	enum class ERHSettingType                    RHSettingType;                                     // 0x118(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31C5[0x3];                                     // Fixing Size After Last Property  
	class FName                                  Name;                                              // 0x11C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_31C6[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHSettingsInfo_Generic* GetDefaultObj();

	void OnSettingSaved();
	void OnSettingApplied();
	class URHSettingsDataFactory* GetRHSettingsDataFactory();
};

// 0x0 (0x118 - 0x118)
// Class RallyHereStart.RHSettingsInfo_MuteAudio
class URHSettingsInfo_MuteAudio : public URHSettingsInfoBase
{
public:

	static class UClass* StaticClass();
	static class URHSettingsInfo_MuteAudio* GetDefaultObj();

};

// 0x0 (0x118 - 0x118)
// Class RallyHereStart.RHSettingsInfo_Region
class URHSettingsInfo_Region : public URHSettingsInfoBase
{
public:

	static class UClass* StaticClass();
	static class URHSettingsInfo_Region* GetDefaultObj();

	void OnPreferredRegionUpdated();
};

// 0x10 (0x128 - 0x118)
// Class RallyHereStart.RHSettingsInfo_Resolution
class URHSettingsInfo_Resolution : public URHSettingsInfoBase
{
public:
	uint8                                        Pad_3245[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHSettingsInfo_Resolution* GetDefaultObj();

	void OnScreenResolutionSaved(const struct CoreUObject_IntPoint& SavedScreenResolution);
	void OnScreenResolutionApplied(const struct CoreUObject_IntPoint& AppliedScreenResolution);
};

// 0x28 (0x578 - 0x550)
// Class RallyHereStart.RHSettingsMenu
class URHSettingsMenu : public URHWidget
{
public:
	struct RallyHereStart_RHSettingsState        SettingsState;                                     // 0x550(0x5)(Transient, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_331B[0x3];                                     // Fixing Size After Last Property  
	TArray<class URHSettingsPage*>               SettingsPages;                                     // 0x558(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class URHSettingsPage>           SettingsPageClass;                                 // 0x568(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHSettingsMenuConfigAsset*            MenuConfigAsset;                                   // 0x570(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHSettingsMenu* GetDefaultObj();

	void SaveSettings();
	void RevertSettings();
	void RebuildNavigation();
	void OnShowPage(class URHSettingsPage* SettingsPage);
	void OnSaveSettings();
	void OnRevertSettings();
	void OnMenuConfigSet();
	void OnHidePage(class URHSettingsPage* SettingsPage);
	void OnConfirmExit(bool ShouldSaveSettings);
	void GetSettingsWidgetsForPage(class URHSettingsPage* Page, TArray<class URHSettingsWidget*>* OutSettingsWidgets, TArray<class URHWidget*>* OutSettingsWidgetsAsRH, bool bReset);
	TArray<class URHSettingsPage*> GetSettingsPages();
	void ConfirmRevertSettings();
	void CheckSavePendingChanges();
	void AddSettingsPageWidget(class URHSettingsPage* SettingsPage);
};

// 0x20 (0x570 - 0x550)
// Class RallyHereStart.RHSettingsPage
class URHSettingsPage : public URHWidget
{
public:
	TArray<class URHSettingsSection*>            SettingsSections;                                  // 0x550(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class URHSettingsSection>        SettingsSectionClass;                              // 0x560(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHSettingsPageConfigAsset*            PageConfigAsset;                                   // 0x568(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHSettingsPage* GetDefaultObj();

	void OnShowSection(class URHSettingsSection* SettingsSection);
	void OnPageConfigSet();
	void OnHideSection(class URHSettingsSection* SettingsSection);
	TArray<class URHSettingsSection*> GetSettingsSections();
	class UScrollBox* GetScrollBox();
	void AddSettingsSectionWidget(class URHSettingsSection* SettingsSection);
};

// 0x18 (0x568 - 0x550)
// Class RallyHereStart.RHSettingsPreview
class URHSettingsPreview : public URHWidget
{
public:
	FMulticastInlineDelegateProperty_            OnPreviewValueChanged;                             // 0x550(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class URHSettingsInfoBase*                   SettingsInfo;                                      // 0x560(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHSettingsPreview* GetDefaultObj();

	void HandleOnValueChanged(bool ChangedExternally);
	void HandleOnPreviewValueChanged();
};

// 0x20 (0x570 - 0x550)
// Class RallyHereStart.RHSettingsSection
class URHSettingsSection : public URHWidget
{
public:
	TArray<class URHSettingsGroup*>              SettingsGroups;                                    // 0x550(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class URHSettingsGroup>          SettingsGroupClass;                                // 0x560(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHSettingsSectionConfigAsset*         SectionConfigAsset;                                // 0x568(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHSettingsSection* GetDefaultObj();

	void OnShowGroup(class URHSettingsGroup* SettingsGroup);
	void OnSectionConfigSet();
	void OnHideGroup(class URHSettingsGroup* SettingsGroup);
	TArray<class URHSettingsGroup*> GetSettingsGroups();
	void AddSettingsGroupWidget(class URHSettingsGroup* SettingsGroup);
};

// 0xA0 (0xC8 - 0x28)
// Class RallyHereStart.RH_SettingsSubsystem
class URH_SettingsSubsystem : public UObject
{
public:
	uint8                                        Pad_3481[0x48];                                    // Fixing Size After Last Property  
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FString, struct RallyHereAPI_RHAPI_SettingData> PendingLoadoutSettings;                            // 0x78(0x50)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URH_SettingsSubsystem* GetDefaultObj();

	void OnSetLoadoutSettingsResponse(bool Success, struct RallyHereIntegration_RH_PlayerSettingsDataWrapper* Response);
	void OnGetLoadoutSettingsResponse(bool Success, struct RallyHereIntegration_RH_PlayerSettingsDataWrapper* Response);
	bool AreLoadoutsRequested();
	bool AreLoadoutsLoaded();
};

// 0x58 (0x5A8 - 0x550)
// Class RallyHereStart.RHSettingsWidget
class URHSettingsWidget : public URHWidget
{
public:
	struct RallyHereStart_RHSettingsWidgetConfig WidgetConfig;                                      // 0x550(0x10)(BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class FText                                  WidgetContainerTitle;                              // 0x560(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  WidgetContainerDescription;                        // 0x578(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                         bHasPreview;                                       // 0x590(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_352D[0x7];                                     // Fixing Size After Last Property  
	class URHSettingsPreview*                    WidgetContainerPreviewWidget;                      // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHSettingsInfoBase*                   SettingsInfo;                                      // 0x5A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHSettingsWidget* GetDefaultObj();

	void SaveSetting();
	void RevertSetting();
	void OnWidgetSettingsInfoSet();
	void OnWidgetContainerTitleSet();
	void OnWidgetContainerPreviewSet();
	void OnWidgetContainerDescriptionSet();
	void OnWidgetConfigSet();
	void OnSettingsInfoValueChanged(bool bChangedExternally);
	void OnInputAttached(bool bGamepadAttached, bool bMouseAttached);
	bool IsSaved();
	bool IsApplied();
	bool HasPreview();
	class URHSettingsInfoBase* GetSettingsInfo();
	bool CanGamepadNavigate();
	void ApplySetting();
};

// 0x0 (0x138 - 0x138)
// Class RallyHereStart.RHShippingConsole
class URHShippingConsole : public UConsole
{
public:

	static class UClass* StaticClass();
	static class URHShippingConsole* GetDefaultObj();

};

// 0x60 (0x5B0 - 0x550)
// Class RallyHereStart.RHSocialPanelBase
class URHSocialPanelBase : public URHWidget
{
public:
	FMulticastInlineDelegateProperty_            OnDataReady;                                       // 0x550(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerCardClicked;                               // 0x560(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSocialHeaderClicked;                             // 0x570(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class UTreeView*                             TreeView;                                          // 0x580(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URHSocialOverlay*                      DataSource;                                        // 0x588(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35AA[0x10];                                    // Fixing Size After Last Property  
	TArray<class URHDataSocialCategory*>         CategoriesList;                                    // 0x5A0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URHSocialPanelBase* GetDefaultObj();

	void UpdateListData();
	void SetupTreeView(class UTreeView* List);
	void SetDataSource(class URHSocialOverlay* Source);
	void OnDataChange(TArray<struct RallyHereStart_RHSocialOverlaySectionInfo>& Sections);
	class UTreeView* GetTreeView();
	void GetSubListFromData(class UObject* Source, TArray<class UObject*>* Out_List);
	class URHSocialOverlay* GetDataSource();
};

// 0x18 (0x5C8 - 0x5B0)
// Class RallyHereStart.RHSocialFriendsPanel
class URHSocialFriendsPanel : public URHSocialPanelBase
{
public:
	TArray<class URHDataSocialCategory*>         CategoryData;                                      // 0x5B0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)
	class URHSocialOverlay*                      Parent;                                            // 0x5C0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URHSocialFriendsPanel* GetDefaultObj();

};

// 0xD0 (0x620 - 0x550)
// Class RallyHereStart.RHSocialOverlay
class URHSocialOverlay : public URHWidget
{
public:
	FMulticastInlineDelegateProperty_            OnDataChanged;                                     // 0x550(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        OSSFriendsListRefreshInterval;                     // 0x560(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3605[0x4];                                     // Fixing Size After Last Property  
	TArray<class URHDataSocialCategory*>         CategoriesList;                                    // 0x568(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3608[0x8];                                     // Fixing Size After Last Property  
	TMap<TWeakObjectPtr<class URH_RHFriendAndPlatformFriend>, struct RallyHereStart_RHSocialOverlaySectionInfo> PlayerCategoryMap;                                 // 0x580(0x50)(NativeAccessSpecifierPrivate)
	TArray<TWeakObjectPtr<class URH_RHFriendAndPlatformFriend>> PlayersToUpdate;                                   // 0x5D0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_360C[0x10];                                    // Fixing Size After Last Property  
	TArray<class URHDataSocialPlayer*>           UnusedEntries;                                     // 0x5F0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FString>                        SessionsTypesToDisplay;                            // 0x600(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	uint8                                        Pad_360D[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHSocialOverlay* GetDefaultObj();

	void RepopulateAll();
	void PlayTransition(class UWidgetAnimation* Animation, bool TransitionOut);
	void OnPartyMemberChanged(struct CoreUObject_Guid& PlayerUuid);
	void OnFriendsReceived();
	void HandleUpdatePlayers();
	void HandleLogInUserChanged();
	TArray<class URHDataSocialCategory*> GetData();
	class URHDataSocialCategory* GetCategory(const struct RallyHereStart_RHSocialOverlaySectionInfo& Section);
	TArray<class URHDataSocialCategory*> GetCategories(const TArray<enum class ERHSocialOverlaySection>& Categories);
};

// 0x40 (0x5F0 - 0x5B0)
// Class RallyHereStart.RHSocialSearchPanel
class URHSocialSearchPanel : public URHSocialPanelBase
{
public:
	FMulticastInlineDelegateProperty_            OnOpen;                                            // 0x5B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnClose;                                           // 0x5C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        VisiblePlayerCount;                                // 0x5D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3649[0x1C];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHSocialSearchPanel* GetDefaultObj();

	void OnSearchComplete(class FText& SearchTerm, class FText& Error, TArray<class URHDataSocialPlayer*>& Results);
	void OnOverlayClosed();
	class FText GetActiveSearchTerm();
	void DoSearch(class FText SearchTerm);
};

// 0x0 (0x550 - 0x550)
// Class RallyHereStart.RHSocialWidgetBase
class URHSocialWidgetBase : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class URHSocialWidgetBase* GetDefaultObj();

	void RHUpdateFriends(TArray<class URH_RHFriendAndPlatformFriend*>& UpdatedFriends);
	void HandleSpecificPartyIdDataUpdated(struct CoreUObject_Guid& PlayerId);
	void HandleSpecificPartyDataUpdated(const struct RallyHereStart_RH_PartyMemberData& PartyMember);
	void HandleSpecificPartyDataAdded(const struct RallyHereStart_RH_PartyMemberData& PartyMember);
	void HandlePartyDataUpdated();
	void HandleFriendDataUpdated();
	class URHPartyManager* GetPartyManager();
	int32 GetOnlineFriendCount();
	int32 GetIncomingInvitesCount();
};

// 0x18 (0x1E0 - 0x1C8)
// Class RallyHereStart.RHSortableGridPanel
class URHSortableGridPanel : public UGridPanel
{
public:
	enum class EOrientation                      Orientation;                                       // 0x1C8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B8[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           OnSortCompareChildrenEvent;                        // 0x1CC(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B9[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHSortableGridPanel* GetDefaultObj();

	bool SortChildrenComparator__DelegateSignature(class UWidget* LHS, class UWidget* RHS);
	void SortChildren();
	class UGridSlot* AddChildAutoLayout(class UWidget* Content);
};

// 0x10 (0x1B8 - 0x1A8)
// Class RallyHereStart.RHSortableVerticalBox
class URHSortableVerticalBox : public UVerticalBox
{
public:
	FDelegateProperty_                           OnSortCompareChildrenEvent;                        // 0x1A8(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHSortableVerticalBox* GetDefaultObj();

	bool SortChildrenComparator__DelegateSignature(class UWidget* LHS, class UWidget* RHS);
	void SortChildren();
};

// 0x8 (0x260 - 0x258)
// Class RallyHereStart.RHS_PlayerInfo
class URHS_PlayerInfo : public URH_PlayerInfo
{
public:
	class URH_SettingsSubsystem*                 SettingsSubsystem;                                 // 0x258(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHS_PlayerInfo* GetDefaultObj();

	class URH_SettingsSubsystem* GetSettingsSubsystem();
	class URHS_PlayerInventory* GetRHSPlayerInventory();
};

// 0x10 (0x138 - 0x128)
// Class RallyHereStart.RHS_PlayerInfoSubsystem
class URHS_PlayerInfoSubsystem : public URH_PlayerInfoSubsystem
{
public:
	uint8                                        Pad_370E[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHS_PlayerInfoSubsystem* GetDefaultObj();

	void OnPlayerLogin(class AGameModeBase* InGameMode, class APlayerController* InPlayerController);
	void OnLocalLogin(class ULocalPlayer* LocalPlayer);
};

// 0x88 (0xB0 - 0x28)
// Class RallyHereStart.RHStatsMgr
class URHStatsMgr : public UObject
{
public:
	struct RallyHereIntegration_RH_LootId        PlayerXpLootId;                                    // 0x28(0x14)(Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct RallyHereIntegration_RH_LootId        BattlepassXpLootId;                                // 0x3C(0x14)(Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3731[0x60];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHStatsMgr* GetDefaultObj();

	struct RallyHereIntegration_RH_LootId GetPlayerXpLootId();
	struct RallyHereIntegration_RH_LootId GetBattlepassXpLootId();
};

// 0x0 (0x168 - 0x168)
// Class RallyHereStart.RH_Coupon
class URH_Coupon : public UPlatformInventoryItem
{
public:

	static class UClass* StaticClass();
	static class URH_Coupon* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class RallyHereStart.RHStorePurchaseRequest
class URHStorePurchaseRequest : public UObject
{
public:
	struct RallyHereIntegration_RH_LootId        LootTableItemId;                                   // 0x28(0x14)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VendorId;                                          // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PriceInUI;                                         // 0x40(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_374D[0x4];                                     // Fixing Size After Last Property  
	class UPlatformInventoryItem*                CurrencyType;                                      // 0x48(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x50(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocationId;                                        // 0x54(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExternalTransactionId;                             // 0x58(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_ItemId        CouponId;                                          // 0x68(0x14)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkipCurrencyAmountValidation;                      // 0x7C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_375B[0x3];                                     // Fixing Size After Last Property  
	class URH_PlayerInfo*                        RequestingPlayerInfo;                              // 0x80(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class URHStoreItemHelper>     PItemHelper;                                       // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHStorePurchaseRequest* GetDefaultObj();

	void SubmitPurchaseRequest(FDelegateProperty_& Delegate);
};

// 0xB0 (0xD8 - 0x28)
// Class RallyHereStart.RHPortalOffer
class URHPortalOffer : public UObject
{
public:
	class FString                                SKU;                                               // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PreSaleCost;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3766[0x4];                                     // Fixing Size After Last Property  
	class FText                                  DisplayPreSaleCost;                                // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        Cost;                                              // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3767[0x4];                                     // Fixing Size After Last Property  
	class FText                                  DisplayCost;                                       // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  CurrencyCode;                                      // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x90(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Desc;                                              // 0xA8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ShortDesc;                                         // 0xC0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHPortalOffer* GetDefaultObj();

	int32 GetDiscountPercentage();
};

// 0x38 (0x60 - 0x28)
// Class RallyHereStart.RHStoreItemPrice
class URHStoreItemPrice : public UObject
{
public:
	int32                                        PreSalePrice;                                      // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPlatformInventoryItem> CurrencyType;                                      // 0x30(0x28)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class URHStoreItemHelper>     PItemHelper;                                       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHStoreItemPrice* GetDefaultObj();

	int32 GetPriceWithCoupon(class URHStoreItem* Coupon);
	int32 GetDiscountPercentage();
	void BLUEPRINT_CanAfford(class URH_PlayerInfo* PlayerInfo, FDelegateProperty_& Delegate, int32 Quantity, class URHStoreItem* Coupon);
};

// 0x88 (0xB0 - 0x28)
// Class RallyHereStart.RHStoreItem
class URHStoreItem : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnPriceSetDirty;                                   // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPortalPurchaseSubmitted;                         // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3962[0x20];                                    // Fixing Size After Last Property  
	TWeakObjectPtr<class URHStoreItemHelper>     PItemHelper;                                       // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UPlatformInventoryItem> InventoryItem;                                     // 0x70(0x28)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHPortalOffer*                        PortalOffer;                                       // 0x98(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URH_GetOwnedCouponsAsyncTaskHelper*> GetOwnedCouponsTaskHelpers;                        // 0xA0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHStoreItem* GetDefaultObj();

	void UIX_ShowPurchaseConfirmation(class URHStoreItemPrice* PPrice);
	bool ShouldDisplayToUser();
	void PurchaseFromPortal();
	bool IsOnSale();
	bool IsActive();
	bool HasPortalOffer();
	int32 GetVendorId();
	int32 GetUIHint();
	int32 GetSortOrder();
	class URHStorePurchaseRequest* GetPurchaseRequest();
	TArray<class URHStoreItemPrice*> GetPrices();
	class URHStoreItemPrice* GetPrice(TSoftObjectPtr<class UPlatformInventoryItem> NCurrencyType);
	class URHPortalOffer* GetPortalOffer();
	class FText GetName();
	int32 GetLootQuantity();
	struct RallyHereIntegration_RH_LootId GetLootId();
	struct RallyHereIntegration_RH_ItemId GetItemId();
	enum class ERHAPI_InventoryOperation GetInventoryOperation();
	TSoftObjectPtr<class UPlatformInventoryItem> GetInventoryItem();
	class UIconInfo* GetIconInfo();
	class FText GetFormattedNameDisplay(int32 ExternalQuantity);
	class FText GetFormattedDescDisplay();
	class URHStoreItem* GetDLCForVoucher();
	class FText GetDescription();
	int32 GetBundleId();
	bool GetBundledContents(TArray<class URHStoreItem*>* ContainedItems);
	int32 GetBestDiscount();
	void ConfirmGotoPortalOffer();
	bool BundleContainsItemId(struct RallyHereIntegration_RH_ItemId& NItemId, bool bSearchSubContainers);
	void BLUEPRINT_IsRented(class URH_PlayerInfo* PlayerInfo, FDelegateProperty_& Delegate);
	void BLUEPRINT_IsOwned(class URH_PlayerInfo* PlayerInfo, FDelegateProperty_& Delegate);
	void BLUEPRINT_GetQuantityOwned(class URH_PlayerInfo* PlayerInfo, FDelegateProperty_& Delegate);
	void BLUEPRINT_GetCouponsForPrice(class URHStoreItemPrice* Price, class URH_PlayerInfo* PlayerInfo, FDelegateProperty_& Delegate);
	void BLUEPRINT_GetBestCouponForPrice(class URHStoreItemPrice* Price, class URH_PlayerInfo* PlayerInfo, FDelegateProperty_& Delegate);
	void BLUEPRINT_CanOwnMore(class URH_PlayerInfo* PlayerInfo, FDelegateProperty_& Delegate);
	void BLUEPRINT_CanAfford(class URH_PlayerInfo* PlayerInfo, class URHStoreItemPrice* Price, FDelegateProperty_& Delegate, int32 Quantity);
};

// 0x288 (0x2B0 - 0x28)
// Class RallyHereStart.RHStoreItemHelper
class URHStoreItemHelper : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnPurchaseItem;                                    // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPurchasePortalItem;                              // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNotEnoughCurrency;                               // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReceiveXpTables;                                 // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnReceivePricePoints;                              // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPortalOffersReceived;                            // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPendingPurchaseReceived;                         // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A69[0x10];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnPurchaseSubmitted;                               // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         StoreVendorsLoaded;                                // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A6D[0x7];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnStoreItemsReady;                                 // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class URH_GetAllAffordableItemsHelper*> GetOwnershipTrackers;                              // 0xD0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A70[0x10];                                    // Fixing Size After Last Property  
	TMap<class FString, class URHStoreItem*>     SkuToStoreItem;                                    // 0xF0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct RallyHereIntegration_RH_LootId, class URHStoreItem*> StoreItems;                                        // 0x140(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A71[0xA0];                                    // Fixing Size After Last Property  
	class FName                                  StoreOSS;                                          // 0x230(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         XpTablesLoaded;                                    // 0x238(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         InventoryBucketUseRuleSetsLoaded;                  // 0x239(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         PricePointsLoaded;                                 // 0x23A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         PortalOffersLoaded;                                // 0x23B(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         BaseStoreVendorsLoaded;                            // 0x23C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsQueryingPortalOffers;                            // 0x23D(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3A75[0x2];                                     // Fixing Size After Last Property  
	class UGameInstance*                         GameInstance;                                      // 0x240(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PortalOffersVendorId;                              // 0x248(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        StoreVendorId;                                     // 0x24C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        GameCurrencyVendorId;                              // 0x250(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DailyRotationVendorId;                             // 0x254(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CouponVendorId;                                    // 0x258(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        EpicVoucherVendorId;                               // 0x25C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ValveVoucherVendorId;                              // 0x260(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NintendoVoucherVendorId;                           // 0x264(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MicrosoftVoucherVendorId;                          // 0x268(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SonyVoucherVendorId;                               // 0x26C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct RallyHereIntegration_RH_ItemId        FreeCurrencyItemId;                                // 0x270(0x14)(BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct RallyHereIntegration_RH_ItemId        PremiumCurrencyItemId;                             // 0x284(0x14)(BlueprintVisible, BlueprintReadOnly, Config, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHCurrency*                           PremiumCurrencyItem;                               // 0x298(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URHCurrency*                           FreeCurrencyItem;                                  // 0x2A0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_PurchaseAsyncTaskHelper*           PurchaseTaskHelper;                                // 0x2A8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHStoreItemHelper* GetDefaultObj();

	void UIX_CompletePurchaseItem(class URHStorePurchaseRequest* PurchaseRequest, FDelegateProperty_& Delegate);
	void RedeemDLCVoucher(class URHStoreItem* DLCVoucher, class URH_PlayerInfo* PlayerInfo, FDelegateProperty_& Delegate);
	void OnXpTablesUpdated(bool Success);
	void OnPricePointsUpdated(bool Success);
	void OnInventoryBucketUseRuleSetsUpdated(bool Success);
	void OnEntitlementResult(TArray<struct RallyHereAPI_RHAPI_PlayerOrder>& OrderResults, class URH_PlayerInfo* PlayerInfo);
	bool HasPendingPurchase();
	bool GetXpTable(int32 XpTableId, struct RallyHereAPI_RHAPI_XpTable* XpTable);
	TArray<class URHStoreItem*> GetStoreItemsForVendor(int32 NVendorId, bool bIncludeInactiveItems, bool bSearchSubContainers);
	TArray<class URHStoreItem*> GetStoreItemsAndQuantitiesForVendor(int32 NVendorId, bool bIncludeInactiveItems, bool bSearchSubContainers, TMap<struct RallyHereIntegration_RH_LootId, int32>* QuantityMap, int32 ExternalQuantity);
	class URHStoreItem* GetStoreItemForVendor(int32 NVendorId, struct RallyHereIntegration_RH_LootId& NLootItemId);
	class URHStoreItem* GetStoreItem(struct RallyHereIntegration_RH_LootId& LootId);
	class URHCurrency* GetPremiumCurrencyItem();
	TArray<class URHStorePurchaseRequest*> GetPendingPurchaseData();
	class URHCurrency* GetFreeCurrencyItem();
	class URHCurrency* GetCurrencyItem(struct RallyHereIntegration_RH_ItemId& ItemId);
	void ExitInGameStoreUI();
	void EnterInGameStoreUI();
	bool DoesPortalHaveOffers();
	bool CheckEmptyInGameStore(class UObject* WorldContextObject);
	void BLUEPRINT_RequestVendorData(const TArray<int32>& VendorIds, FDelegateProperty_& Delegate);
	bool AreXpTablesLoaded();
	bool ArePricePointsLoaded();
	bool ArePortalOffersLoaded();
	bool AreInventoryBucketUseRuleSetsLoaded();
};

// 0x38 (0x60 - 0x28)
// Class RallyHereStart.RH_PurchaseAsyncTaskHelper
class URH_PurchaseAsyncTaskHelper : public UObject
{
public:
	uint8                                        Pad_3A93[0x8];                                     // Fixing Size After Last Property  
	class URH_CatalogSubsystem*                  CatalogSubsystem;                                  // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHStoreItemHelper*                    StoreItemHelper;                                   // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A94[0x10];                                    // Fixing Size After Last Property  
	TArray<class URHStorePurchaseRequest*>       PurchaseRequests;                                  // 0x50(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_PurchaseAsyncTaskHelper* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class RallyHereStart.RH_GetOwnedCouponsAsyncTaskHelper
class URH_GetOwnedCouponsAsyncTaskHelper : public UObject
{
public:
	uint8                                        Pad_3A9A[0x18];                                    // Fixing Size After Last Property  
	class URH_PlayerInventory*                   PlayerInventory;                                   // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URHStoreItem*>                  ItemsToCheck;                                      // 0x48(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class URHStoreItem*>                  OwnedItems;                                        // 0x58(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_GetOwnedCouponsAsyncTaskHelper* GetDefaultObj();

};

// 0xC0 (0xE8 - 0x28)
// Class RallyHereStart.RH_GetAllAffordableItemsHelper
class URH_GetAllAffordableItemsHelper : public UObject
{
public:
	uint8                                        Pad_3AA0[0x28];                                    // Fixing Size After Last Property  
	TArray<class URHStoreItem*>                  PurchaseItems;                                     // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class URHStoreItem*>                  CurrencyItems;                                     // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_CatalogSubsystem*                  CatalogSubsystem;                                  // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHStoreItemHelper*                    StoreItemHelper;                                   // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class URHStoreItem*, class URHStoreItemPrice*> ItemsToCheck;                                      // 0x88(0x50)(Transient, NativeAccessSpecifierPublic)
	TArray<class URHStoreItem*>                  AffordableItems;                                   // 0xD8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_GetAllAffordableItemsHelper* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class RallyHereStart.RHStorePanelItem
class URHStorePanelItem : public UObject
{
public:
	class URHStoreItem*                          StoreItem;                                         // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsNew;                                             // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisplaySaleTag;                                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasBeenSeen;                                       // 0x32(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AAD[0x5];                                     // Fixing Size After Last Property  
	class FText                                  CustomBannerText;                                  // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHStorePanelItem* GetDefaultObj();

	bool IsOnSale();
};

// 0x28 (0x50 - 0x28)
// Class RallyHereStart.RHStoreSectionItem
class URHStoreSectionItem : public UObject
{
public:
	TArray<class URHStorePanelItem*>             StorePanelItems;                                   // 0x28(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Column;                                            // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Row;                                               // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStoreItemWidgetType              WidgetType;                                        // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ABE[0x7];                                     // Fixing Size After Last Property  
	class URHStorePanelItem*                     CurrentlyViewedItem;                               // 0x48(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHStoreSectionItem* GetDefaultObj();

	bool HasUnseenItems();
};

// 0x38 (0x60 - 0x28)
// Class RallyHereStart.RHStoreSection
class URHStoreSection : public UObject
{
public:
	TArray<class URHStoreSectionItem*>           SectionItems;                                      // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EStoreSectionTypes                SectionType;                                       // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD4[0x27];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHStoreSection* GetDefaultObj();

	bool HasUnseenItems();
	class FText GetSectionHeader();
	int32 GetSecondsRemaining();
};

// 0x0 (0x550 - 0x550)
// Class RallyHereStart.RHStoreWidget
class URHStoreWidget : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class URHStoreWidget* GetDefaultObj();

	void OnPricePointsReveived();
	void OnPortalOffersReceived();
	bool HasAllRequiredStoreInformation();
	TArray<class URHStoreSection*> GetStoreLayout(int32* ErrorCode);
	class URHStoreItemHelper* GetStoreItemHelper();
};

// 0xE8 (0x220 - 0x138)
// Class RallyHereStart.RHS_PlayerInventory
class URHS_PlayerInventory : public URH_PlayerInventory
{
public:
	FMulticastInlineDelegateProperty_            InventoryLoadedEvent;                              // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            InventoryUpdatedEvent;                             // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            InventoryAssetsLoadedEvent;                        // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B4E[0x18];                                    // Fixing Size After Last Property  
	TMap<struct CoreUObject_Guid, struct RallyHereStart_RHS_PendingInventoryOrder> PendingInventoryOrders;                            // 0x180(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<int32, struct RallyHereStart_RHS_ItemCountUpdatedEvents> ItemCountUpdatedEvents;                            // 0x1D0(0x50)(ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHS_PlayerInventory* GetDefaultObj();

	void OnInventoryLoaded(bool Success);
	bool IsInventoryRequested();
	bool IsInventoryOwned(int32 ItemId);
	bool IsInventoryLoaded();
	bool IsInventoryItemExpired(int32& ItemId);
	bool IsInventoryAssetsLoaded();
	TArray<struct RallyHereIntegration_RH_ItemInventory> GetInventoryWithTags(struct GameplayTags_GameplayTagContainer& Tags);
	TArray<struct RallyHereIntegration_RH_ItemInventory> GetInventoryWithTag(struct GameplayTags_GameplayTag& Tag);
	int32 GetInventoryTimeRemaining(int32& ItemId);
	void GetInventoryItemIds(TArray<int32>* ItemIds);
	TArray<struct RallyHereIntegration_RH_ItemInventory> GetInventoryForItem(int32 ItemId);
	bool GetInventoryForInventoryId(struct CoreUObject_Guid& InventoryId, struct RallyHereIntegration_RH_ItemInventory* InventoryItem);
	int32 GetInventoryCount(int32& ItemId);
	void BindItemCountUpdated(int32& ItemId, FDelegateProperty_& Event);
};

// 0x10 (0x560 - 0x550)
// Class RallyHereStart.RHTabScreenWidget
class URHTabScreenWidget : public URHWidget
{
public:
	uint8                                        Pad_3B5E[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHTabScreenWidget* GetDefaultObj();

	void HandleScoreboardReleased();
	void ClearScoreboard();
	void AddPlayerToScoreboard(int32 TeamNum, const class FString& PlayerName);
};

// 0x18 (0x180 - 0x168)
// Class RallyHereStart.RHTitle
class URHTitle : public UPlatformInventoryItem
{
public:
	class FText                                  TitleText;                                         // 0x168(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHTitle* GetDefaultObj();

};

// 0x40 (0x590 - 0x550)
// Class RallyHereStart.RHToastNotificationWidgetBase
class URHToastNotificationWidgetBase : public URHWidget
{
public:
	FMulticastInlineDelegateProperty_            OnToastReceived;                                   // 0x550(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        MaxToastNotification;                              // 0x560(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentToastCount;                                 // 0x564(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsBusy;                                            // 0x568(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3BDB[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereStart_ToastData>      ToastQueue;                                        // 0x570(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct RallyHereStart_ToastData>      PostMatchToasts;                                   // 0x580(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URHToastNotificationWidgetBase* GetDefaultObj();

	void StoreToastQueue(const struct RallyHereStart_ToastData& ToastNotification);
	void ShowToastNotification();
	void OnToastNotificationReceived(const struct RallyHereStart_ToastData& ToastData);
	void OnFriendUpdated(class URH_RHFriendAndPlatformFriend* UpdatedFriend);
	void NotifyToastShown();
	void NotifyToastHidden();
	void HandlePartyMemberPromoted(struct CoreUObject_Guid& PlayerId);
	void HandlePartyMemberLeftGeneric();
	void HandlePartyMemberLeft(const struct RallyHereStart_RH_PartyMemberData& PartyMemberData);
	void HandlePartyMemberKick(struct CoreUObject_Guid& PlayerId);
	void HandlePartyMemberAdded(const struct RallyHereStart_RH_PartyMemberData& PartyMemberData);
	void HandlePartyLocalPlayerLeft();
	void HandlePartyInviteSent(class URH_PlayerInfo* Invitee);
	void HandlePartyInviteRejected();
	void HandlePartyInviteReceived(class URH_PlayerInfo* PartyInviter);
	void HandlePartyInviteError(class FText PlayerName);
	void HandlePartyInviteAccepted();
	void HandlePartyDisbanded();
	TArray<struct RallyHereStart_ToastData> GetPostMatchToasts();
	class URHPartyManager* GetPartyManager();
	bool GetNext(struct RallyHereStart_ToastData* NextToastNotification);
	class URH_FriendSubsystem* GetFriendSubsystem();
	void ClearPostMatchQueue();
	void ClearNotificationQueue();
};

// 0x8 (0xCD0 - 0xCC8)
// Class RallyHereStart.RHTreeView
class URHTreeView : public UTreeView
{
public:
	TWeakObjectPtr<class ARHHUDCommon>           MyHud;                                             // 0xCC8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHTreeView* GetDefaultObj();

	void UninitializeWidget();
	void NavigateSelectItem(class UObject* Item);
	bool IsItemExpanded(class UObject* Item);
	void InitializeWidget();
	int32 GetNumItemsInLayout();
	bool BP_GetEntryWidgetFromItem(class UObject* Item, class UUserWidget** OutWidget);
};

// 0x0 (0x28 - 0x28)
// Class RallyHereStart.RHUIBlueprintFunctionLibrary
class URHUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URHUIBlueprintFunctionLibrary* GetDefaultObj();

	bool UIX_ReportPlayer(class UObject* WorldContextObject, struct RallyHereStart_ReportPlayerParams& Params);
	struct RallyHereStart_ReportPlayerParams SetupReportPlayerFromGameState(int64 PlayerId, class ARHGameState* State);
	void RegisterLinearNavigation(class URHWidget* ParentWidget, const TArray<class URHWidget*>& NavWidgets, int32 FocusGroup, bool bHorizontal, bool bLooping);
	void RegisterGridNavigation(class URHWidget* ParentWidget, int32 FocusGroup, const TArray<class UWidget*>& NavWidgets, int32 GridWidth, bool NavToLastElementOnDown);
	class FText Key_GetShortDisplayName(struct InputCore_Key& Key);
	bool IsWithEditor();
	bool IsPlatformType(bool IsConsole, bool IsPC, bool IsMobile);
	bool IsAnonymousLogin(class ARHHUDCommon* PHUD);
	bool HasCinematicToPlay(class UDataTable* CinematicDataTable);
	float GetUMG_DPI_Scaling();
	class FText GetTextByPlatform(class FText& DefaultText, TMap<class FString, class FText>& PlatformTexts);
	class URHStoreItemHelper* GetStoreItemHelper(class UObject* WorldContextObject);
	class FText GetStatusMessage(enum class ERHPlayerOnlineStatus PlayerStatus);
	class FText GetPlayerStatusMessage(class UObject* WorldContextObject, class URH_PlayerInfo* PlayerInfo, class URH_LocalPlayerSubsystem* LocalPlayerSS);
	enum class ERHPlayerOnlineStatus GetPlayerOnlineStatus(class UObject* WorldContextObject, class URH_PlayerInfo* PlayerInfo, class URH_LocalPlayerSubsystem* LocalPlayerSS, bool bAllowPartyStatus, bool bAllowFriendRequestStatus);
	int32 GetPlayerCohortGroup(class URH_PlayerInfo* PlayerInfo, int32 NumberOfGroups);
	enum class ERHAPI_Platform GetPlatformIdByOSSName(class FName OSSName);
	enum class ERHAPI_Platform GetLoggedInPlatformId(class ARHHUDCommon* PHUD);
	class URH_PlayerInfo* GetLocalPlayerInfo(class ARHHUDCommon* HUD);
	class APlayerController* GetLocalPlayerController(class UObject* WorldContextObject, int32 PlayerIndex);
	class FName GetKeyName(const struct InputCore_Key& Key);
	struct InputCore_Key GetKeyForBinding(class APlayerController* PlayerController, class FName Binding, bool SecondaryKey, bool FallbackToDefault, bool IsGamepadDoubleTap);
	class ARHGameState* GetGameState(class UObject* WorldContextObject);
	enum class EGamepadIcons GetGamepadIconSet();
	struct InputCore_Key GetGamepadConfirmButton();
	struct InputCore_Key GetGamepadCancelButton();
	class FText GetFriendStatusMessage(class UObject* WorldContextObject, class URH_RHFriendAndPlatformFriend* Friend, class URH_LocalPlayerSubsystem* LocalPlayerSS);
	enum class ERHPlayerOnlineStatus GetFriendOnlineStatus(class UObject* WorldContextObject, class URH_RHFriendAndPlatformFriend* Friend, class URH_LocalPlayerSubsystem* LocalPlayerSS, bool bAllowPartyStatus, bool bAllowFriendRequestStatus);
	class URHCurrency* GetCurrencyItemByItemId(struct RallyHereIntegration_RH_ItemId& CurrencyItemId);
	class URHBattlepass* GetActiveBattlepass(class UObject* WorldContextObject);
	class URHSettingsWidget* CreateSettingsWidgetWithConfig(class ARHHUDCommon* HUD, const struct RallyHereStart_RHSettingsWidgetConfig& SettingsWidgetConfig);
	class URHSettingsWidget* CreateSettingsWidget(class ARHHUDCommon* HUD, TSubclassOf<class URHSettingsWidget>& SettingsWidgetClass);
	class URHSettingsPreview* CreateSettingsPreview(class ARHHUDCommon* HUD, TSubclassOf<class URHSettingsPreview>& SettingsPreviewClass);
	enum class ERHPlatformDisplayType ConvertPlatformTypeToDisplayType(class ARHHUDCommon* PHUD, enum class ERHAPI_Platform PlatformType);
	int32 CompareStrings(const class FString& LeftString, const class FString& RightString);
	bool CanReportServer(class UObject* WorldContextObject);
};

// 0x88 (0xB0 - 0x28)
// Class RallyHereStart.RHUISessionData
class URHUISessionData : public UObject
{
public:
	bool                                         bNeedsToShowNewsPanel;                             // 0x28(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EB6[0x7];                                     // Fixing Size After Last Property  
	TArray<class FName>                          ShownNewsPanelIds;                                 // 0x30(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	bool                                         bNeedsToRedeemVoucher;                             // 0x40(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasPlatformAchievements;                          // 0x41(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasPlatformAchievementDescriptions;               // 0x42(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAchievementIntegrationEnabled;                    // 0x43(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasFullPlayerInventory;                           // 0x44(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EB9[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  LoggedInTime;                                      // 0x48(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EBA[0x60];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHUISessionData* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class RallyHereStart.RHUISessionManager
class URHUISessionManager : public UObject
{
public:
	TMap<class URH_PlayerInfo*, class URHUISessionData*> SessionDataPerPlayer;                              // 0x28(0x50)(Transient, NativeAccessSpecifierPublic)
	int32                                        RewardRedemptionVendorId;                          // 0x78(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3EC5[0x4];                                     // Fixing Size After Last Property  
	class URHGameInstance*                       GameInstance;                                      // 0x80(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHUISessionManager* GetDefaultObj();

	void OnInventoryLoaded();
};

// 0x50 (0x78 - 0x28)
// Class RallyHereStart.RHUISoundTheme
class URHUISoundTheme : public UObject
{
public:
	TMap<class FName, struct RallyHereStart_RHSoundThemeEventMapping> SoundEventBindings;                                // 0x28(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHUISoundTheme* GetDefaultObj();

};

// 0x28 (0x578 - 0x550)
// Class RallyHereStart.RHViewItemData
class URHViewItemData : public URHWidget
{
public:
	TArray<TSoftObjectPtr<class URHStoreItem>>   StoreItems;                                        // 0x550(0x10)(BlueprintVisible, ZeroConstructor, ExposeOnSpawn, UObjectWrapper, NativeAccessSpecifierPublic)
	class UPlatformInventoryItem*                InventoryItem;                                     // 0x560(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SceneCamera;                                       // 0x568(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SceneViewModel;                                    // 0x570(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHViewItemData* GetDefaultObj();

};

// 0x0 (0x550 - 0x550)
// Class RallyHereStart.RHViewItemsWidget
class URHViewItemsWidget : public URHWidget
{
public:

	static class UClass* StaticClass();
	static class URHViewItemsWidget* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class RallyHereStart.RHGenericRouteDataObject
class URHGenericRouteDataObject : public UObject
{
public:
	class FString                                StringValue;                                       // 0x28(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IntValue;                                          // 0x38(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NameValue;                                         // 0x3C(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ED6[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHGenericRouteDataObject* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class RallyHereStart.RHViewLayer
class URHViewLayer : public UObject
{
public:
	class UCanvasPanel*                          DisplayTarget;                                     // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHViewManager*                        MyManager;                                         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EViewManagerTransitionState       CurrentTransitionState;                            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3EE9[0x7];                                     // Fixing Size After Last Property  
	TArray<class FName>                          CurrentRouteStack;                                 // 0x40(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          CurrentTransitionRouteStack;                       // 0x50(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, class URHWidget*>          RouteWidgetMap;                                    // 0x60(0x50)(ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class FName                                  DefaultRoute;                                      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3EEE[0x8];                                     // Fixing Size After Last Property  
	TMap<class FName, class UObject*>            PendingRouteData;                                  // 0xC0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	class UDataTable*                            Routes;                                            // 0x110(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHViewLayer* GetDefaultObj();

	bool IsRouteValid(class FName RouteName);
	void GoToRoute_InternalShowStep();
	void GoToRoute_HandleShowFinished(class URHWidget* Widget);
	void GoToRoute_HandleHideFinished(class URHWidget* Widget);
};

// 0xC8 (0xF0 - 0x28)
// Class RallyHereStart.RHViewManager
class URHViewManager : public UObject
{
public:
	TArray<class URHViewLayer*>                  ViewLayers;                                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, class URHWidget*>          StickyWidgetMap;                                   // 0x38(0x50)(ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnViewStateChanged;                                // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnViewStateChangeStarted;                          // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class ARHHUDCommon*                          HudRef;                                            // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCanvasPanel*>                  CanvasPanels;                                      // 0xB0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	TArray<struct RallyHereStart_StickyWidgetData> StickyWidgets;                                     // 0xC0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	class UDataTable*                            Routes;                                            // 0xD0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanBaseLayerBeEmpty;                              // 0xD8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3FD3[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereStart_ViewRouteRedirectData> AlwaysCheckRouteData;                              // 0xE0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHViewManager* GetDefaultObj();

	bool SwapRoute(class FName RouteName, class FName SwapTargetRoute, bool ForceTransition);
	void SetPendingRouteData(class FName RouteName, class UObject* Data);
	bool ReplaceRoute(class FName RouteName, bool ForceTransition, class UObject* Data);
	bool RemoveRoute(class FName RouteName, bool ForceTransition);
	bool PushRoute(class FName RouteName, bool ForceTransition, class UObject* Data);
	bool PopRoute(bool ForceTransition);
	bool IsLayerIdle(enum class EViewManagerLayer LayerType);
	bool IsEveryLayerIdle();
	bool IsBlockingOrders();
	void InitializeRoutes(class UDataTable* RouteTable);
	void Initialize();
	bool HasCompletedRedirectFlow(enum class EViewRouteRedirectionPhase RedirectPhase);
	int32 GetViewRouteCount();
	bool GetViewRoute(class FName RouteName, struct RallyHereStart_ViewRoute* ViewRoute);
	class URHWidget* GetTopViewRouteWidget();
	class FName GetTopViewRoute();
	enum class EViewManagerLayer GetTopLayer();
	bool GetPendingRouteData(class FName RouteName, class UObject** Data);
	class FName GetDefaultRouteForLayer(enum class EViewManagerLayer LayerType);
	class FName GetCurrentTransitionRoute(enum class EViewManagerLayer Layer);
	class FName GetCurrentRoute(enum class EViewManagerLayer Layer);
	bool ContainsRoute(class FName RouteName);
};

// 0x8 (0x30 - 0x28)
// Class RallyHereStart.RHViewRedirector_LocalSetting
class URHViewRedirector_LocalSetting : public URHViewRedirecter
{
public:
	class FName                                  LocalActionName;                                   // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHViewRedirector_LocalSetting* GetDefaultObj();

	bool DoesLocalSettingApply(class ARHHUDCommon* HUD);
};

// 0x70 (0x5C0 - 0x550)
// Class RallyHereStart.RHVoiceActivityWidget
class URHVoiceActivityWidget : public URHWidget
{
public:
	FMulticastInlineDelegateProperty_            VoiceAccountNamePairsUpdated;                      // 0x550(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            VoiceParticipantAdded;                             // 0x560(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            VoiceParticipantRemoved;                           // 0x570(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            VoiceParticipantUpdated;                           // 0x580(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            VoiceAudioStateChange;                             // 0x590(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_404D[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHVoiceActivityWidget* GetDefaultObj();

	void OnVoiceParticipantUpdated(const class FString& AccountId, bool bIsTalking, bool bIsMuted, const class FString& ChannelName);
	void OnVoiceParticipantRemoved(const class FString& AccountId);
	void OnVoiceParticipantAdded(const class FString& AccountId);
	class FString GetVoiceIdByPlayerUuid(struct CoreUObject_Guid& PlayerId);
	struct CoreUObject_Guid GetPlayerUuidByVoiceId(const class FString& VoiceId);
	class ARHPlayerState* GetPlayerStateByVoiceId(const class FString& VoiceId);
	class URH_PlayerInfo* GetPlayerInfoByVoiceId(const class FString& VoiceId);
};

// 0x8 (0x558 - 0x550)
// Class RallyHereStart.RHVoucherOrder
class URHVoucherOrder : public URHWidget
{
public:
	uint8                                        Pad_406E[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URHVoucherOrder* GetDefaultObj();

	void RedeemVouchers(const TArray<class URHStoreItem*>& VoucherItems, FDelegateProperty_& Delegate);
	void GetVoucherOrders(FDelegateProperty_& Delegate);
	void DisplayVoucherRedemptionFailed();
};

// 0x40 (0x68 - 0x28)
// Class RallyHereStart.RH_RedeemVouchersAsyncTaskHelper
class URH_RedeemVouchersAsyncTaskHelper : public UObject
{
public:
	uint8                                        Pad_4077[0x18];                                    // Fixing Size After Last Property  
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URHStoreItem*>                  VoucherItems;                                      // 0x48(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class URHStorePurchaseRequest*>       PurchaseRequests;                                  // 0x58(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_RedeemVouchersAsyncTaskHelper* GetDefaultObj();

};

// 0x68 (0xF0 - 0x88)
// Class RallyHereStart.RHWhatsNewPanel
class URHWhatsNewPanel : public URHJsonData
{
public:
	class FText                                  Header;                                            // 0x88(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  SubHeader;                                         // 0xA0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ENewsHeaderAlignment              HeaderAlignment;                                   // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4081[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereStart_SubPanel>       SubPanels;                                         // 0xC0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ESubPanelAlignment                Alignment;                                         // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4084[0x3];                                     // Fixing Size After Last Property  
	int32                                        BgBoxOpacity;                                      // 0xD4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2DDynamic*                     Image;                                             // 0xD8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0xE0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URHWhatsNewPanel* GetDefaultObj();

};

// 0x18 (0x568 - 0x550)
// Class RallyHereStart.RHWhatsNewModal
class URHWhatsNewModal : public URHWidget
{
public:
	int32                                        MaxPanelCount;                                     // 0x550(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_40AB[0x4];                                     // Fixing Size After Last Property  
	TArray<class URHWhatsNewPanel*>              StoredPanels;                                      // 0x558(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URHWhatsNewModal* GetDefaultObj();

	void UpdateWhatsNewPanels(const class FString& JsonName);
	void OnJsonChanged();
	int32 GetMaxPanelCount();
	class URHJsonDataFactory* GetJsonDataFactory();
	void BLUEPRINT_GetPanelDataAsync(FDelegateProperty_& Delegate);
};

// 0x50 (0x78 - 0x28)
// Class RallyHereStart.TickAnimationManager
class UTickAnimationManager : public UObject
{
public:
	TMap<class FName, struct RallyHereStart_TickAnimationParams> AnimsByName;                                       // 0x28(0x50)(ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTickAnimationManager* GetDefaultObj();

	void StopAnimation(class FName AnimName);
	void SkipToEndAnimation(class FName AnimName);
	void ResumeAnimation(class FName AnimName);
	void RemoveAnimation(class FName AnimName);
	void PlayAnimation(class FName AnimName);
	void PauseAnimation(class FName AnimName);
	bool GetAnimationInfo(class FName AnimName, struct RallyHereStart_TickAnimationParams* OutAnimParams);
	void ApplyTick(float DeltaTime);
	void AddAnimation(class FName AnimName, float Duration, FDelegateProperty_& UpdateEvent, FDelegateProperty_& FinishedEvent);
};

}


