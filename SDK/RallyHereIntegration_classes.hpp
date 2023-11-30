#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class RallyHereIntegration.RH_SubsystemPluginBase
class URH_SubsystemPluginBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class URH_SubsystemPluginBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class RallyHereIntegration.RH_LocalPlayerSubsystemPlugin
class URH_LocalPlayerSubsystemPlugin : public URH_SubsystemPluginBase
{
public:

	static class UClass* StaticClass();
	static class URH_LocalPlayerSubsystemPlugin* GetDefaultObj();

	class URH_LocalPlayerSubsystem* GetLocalPlayerSubsystem();
	class URH_GameInstanceSubsystem* GetGameInstanceSubsystem();
};

// 0x20 (0x48 - 0x28)
// Class RallyHereIntegration.RH_AdSubsystem
class URH_AdSubsystem : public URH_LocalPlayerSubsystemPlugin
{
public:
	uint8                                        Pad_8C0[0x20];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_AdSubsystem* GetDefaultObj();

	bool GetCodesFromLocale(class FString* OutLangCode, class FString* OutCountryCode);
	class FString GetAdApiToken();
};

// 0x8 (0x3E0 - 0x3D8)
// Class RallyHereIntegration.RH_OnlineBeaconHost
class ARH_OnlineBeaconHost : public AOnlineBeaconHost
{
public:
	bool                                         bRequireBeaconAuthentication;                      // 0x3D8(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoCreateTestHost;                               // 0x3D9(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8CB[0x6];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ARH_OnlineBeaconHost* GetDefaultObj();

};

// 0x10 (0x338 - 0x328)
// Class RallyHereIntegration.RH_OnlineBeaconClient
class ARH_OnlineBeaconClient : public AOnlineBeaconClient
{
public:
	uint8                                        Pad_8D9[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class ARH_OnlineBeaconClient* GetDefaultObj();

};

// 0x0 (0x338 - 0x338)
// Class RallyHereIntegration.RH_TestBeaconClient
class ARH_TestBeaconClient : public ARH_OnlineBeaconClient
{
public:

	static class UClass* StaticClass();
	static class ARH_TestBeaconClient* GetDefaultObj();

	void TestPing();
	void ServerPing(const struct CoreUObject_DateTime& ClientTime);
	void ClientPong(const struct CoreUObject_DateTime& ClientTime);
};

// 0x0 (0x2C0 - 0x2C0)
// Class RallyHereIntegration.RH_TestBeaconHostObject
class ARH_TestBeaconHostObject : public AOnlineBeaconHostObject
{
public:

	static class UClass* StaticClass();
	static class ARH_TestBeaconHostObject* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class RallyHereIntegration.RH_CatalogItem
class URH_CatalogItem : public UObject
{
public:
	class FString                                Etag;                                              // 0x28(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemId;                                            // 0x38(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERHAPI_ItemType                   Type;                                              // 0x3C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_990[0x3];                                      // Fixing Size After Last Property  
	int32                                        RefItemId;                                         // 0x40(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AvailabilityFlags;                                 // 0x44(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        EntitledLootId;                                    // 0x48(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LevelXpTableId;                                    // 0x4C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LevelVendorId;                                     // 0x50(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CouponDiscountCurrencyItemId;                      // 0x54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CouponDiscountPercentage;                          // 0x58(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         CouponConsumeOnUse;                                // 0x5C(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_997[0x3];                                      // Fixing Size After Last Property  
	class FString                                ItemInventoryBucketUseRuleSetId;                   // 0x60(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<int32>                                CouponDiscountLoot;                                // 0x70(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URH_CatalogItem* GetDefaultObj();

	enum class ERHAPI_ItemType GetType();
	int32 GetRefItemId();
	int32 GetLevelXpTableId();
	int32 GetLevelVendorId();
	class FString GetItemInventoryBucketUseRulesetId();
	int32 GetItemId();
	int32 GetEntitledLootId();
	float GetCouponDiscountPercentage();
	TArray<int32> GetCouponDiscountLoot();
	int32 GetCouponDiscountCurrencyItemId();
	bool GetCouponConsumeOnUse();
	int32 GetAvailabilityFlags();
};

// 0x0 (0x28 - 0x28)
// Class RallyHereIntegration.RH_GameInstanceSubsystemPlugin
class URH_GameInstanceSubsystemPlugin : public URH_SubsystemPluginBase
{
public:

	static class UClass* StaticClass();
	static class URH_GameInstanceSubsystemPlugin* GetDefaultObj();

	class URH_GameInstanceSubsystem* GetGameInstanceSubsystem();
};

// 0x358 (0x380 - 0x28)
// Class RallyHereIntegration.RH_CatalogSubsystem
class URH_CatalogSubsystem : public URH_GameInstanceSubsystemPlugin
{
public:
	uint8                                        Pad_A22[0x18];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereIntegration_RHVendorGetRequest> VendorRequests;                                    // 0x40(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<int32, struct RallyHereAPI_RHAPI_XpTable> XpTables;                                          // 0x50(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TMap<int32, struct RallyHereAPI_RHAPI_Vendor> CatalogVendors;                                    // 0xA0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TMap<int32, class URH_CatalogItem*>          CatalogItems;                                      // 0xF0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TMap<int32, struct RallyHereAPI_RHAPI_Loot>  CatalogLootItems;                                  // 0x140(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TMap<int32, struct RallyHereAPI_RHAPI_TimeFrame> TimeFrames;                                        // 0x190(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct CoreUObject_Guid, struct RallyHereAPI_RHAPI_PricePoint> CatalogPricePoints;                                // 0x1E0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_A35[0x150];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_CatalogSubsystem* GetDefaultObj();

	bool GetXpTable(int32 XpTableId, struct RallyHereAPI_RHAPI_XpTable* XpTable);
	void BLUEPRINT_GetCatalogXpAll(FDelegateProperty_& Delegate);
	void BLUEPRINT_GetCatalogVendorsAll(FDelegateProperty_& Delegate);
	void BLUEPRINT_GetCatalogVendor(struct RallyHereIntegration_RHVendorGetRequest& VendorRequest);
	void BLUEPRINT_GetCatalogTimeFramesAll(FDelegateProperty_& Delegate);
	void BLUEPRINT_GetCatalogPricePointsAll(FDelegateProperty_& Delegate);
	void BLUEPRINT_GetCatalogItem(int32 ItemId, FDelegateProperty_& Delegate);
	void BLUEPRINT_GetCatalogInventoryBucketUseRuleSetsAll(FDelegateProperty_& Delegate);
	void BLUEPRINT_GetCatalogAll(FDelegateProperty_& Delegate);
};

// 0x0 (0x28 - 0x28)
// Class RallyHereIntegration.RH_CatalogBlueprintLibrary
class URH_CatalogBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URH_CatalogBlueprintLibrary* GetDefaultObj();

	bool IsCouponApplicableForLootId(class URH_CatalogItem* CouponItem, int32 LootId);
	bool IsCouponApplicableForItem(class URH_CatalogItem* CouponItem, struct RallyHereAPI_RHAPI_Loot& LootItem);
	int64 GetXpAtLevel(struct RallyHereAPI_RHAPI_XpTable& XpTable, int32 XpLevel);
	bool GetVendorItemById(struct RallyHereAPI_RHAPI_Vendor& Vendor, int32 LootId, struct RallyHereAPI_RHAPI_Loot* LootItem);
	bool GetUnitPrice(TArray<struct RallyHereAPI_RHAPI_PriceBreakpoint>& PriceBreakpoints, int32 CurrencyItemId, int32 Quantity, int32* Price);
	int32 GetLevelAtXp(struct RallyHereAPI_RHAPI_XpTable& XpTable, int64 XpPoints);
	int32 GetCouponDiscountedPrice(class URH_CatalogItem* CouponItem, int32 Price);
};

// 0xD0 (0xF8 - 0x28)
// Class RallyHereIntegration.RH_ConfigSubsystem
class URH_ConfigSubsystem : public URH_GameInstanceSubsystemPlugin
{
public:
	uint8                                        Pad_B0F[0x30];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnSettingsUpdated;                       // 0x58(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bFetchedAppSettings;                               // 0x68(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFetchedSiteSettings;                              // 0x69(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B11[0x6];                                      // Fixing Size After Last Property  
	TMap<class FString, class FString>           AppSettings;                                       // 0x70(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, Protected, NativeAccessSpecifierProtected)
	class FString                                AppSettingsETag;                                   // 0xC0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B15[0x10];                                     // Fixing Size After Last Property  
	bool                                         bAutomaticallyPollConfigurationData;               // 0xE0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutomaticallyApplyHotfixData;                     // 0xE1(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHotfixTestValue;                                  // 0xE2(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B17[0x5];                                      // Fixing Size After Last Property  
	struct RallyHereIntegration_RH_ServerTimeCache ServerTimeCache;                                   // 0xE8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URH_ConfigSubsystem* GetDefaultObj();

	bool HasFetchedSiteSettings();
	bool HasFetchedAppSettings();
	bool GetServerTimeDrift(struct CoreUObject_Timespan* Timespan);
	struct RallyHereIntegration_RH_ServerTimeCache GetServerTimeCache();
	bool GetServerTime(struct CoreUObject_DateTime* Time);
	TMap<class FString, class FString> GetAppSettings();
	bool GetAppSetting(const class FString& Key, class FString* Value);
	void BLUEPRINT_RefreshServerTimeCache(FDelegateProperty_& Delegate);
};

// 0x10 (0x38 - 0x28)
// Class RallyHereIntegration.RH_Diagnostics
class URH_Diagnostics : public UObject
{
public:
	uint8                                        Pad_B2B[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_Diagnostics* GetDefaultObj();

	void GenerateReport(struct RallyHereIntegration_RH_DiagnosticReportOptions& Options);
};

// 0x58 (0x80 - 0x28)
// Class RallyHereIntegration.RH_EntitlementSubsystem
class URH_EntitlementSubsystem : public URH_LocalPlayerSubsystemPlugin
{
public:
	uint8                                        Pad_B36[0x50];                                     // Fixing Size After Last Property  
	class FName                                  EntitlementOSSName;                                // 0x78(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URH_EntitlementSubsystem* GetDefaultObj();

};

// 0x160 (0x188 - 0x28)
// Class RallyHereIntegration.RH_FriendSubsystem
class URH_FriendSubsystem : public URH_LocalPlayerSubsystemPlugin
{
public:
	uint8                                        Pad_C43[0x18];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BLUEPRINT_FriendListUpdatedDelegate;               // 0x40(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C45[0x18];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BLUEPRINT_FriendUpdatedDelegate;                   // 0x68(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C47[0x18];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BLUEPRINT_FriendUpdateErrorDelegate;               // 0x90(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4A[0x18];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BLUEPRINT_BlockedListUpdatedDelegate;              // 0xB8(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4D[0x18];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BLUEPRINT_BlockedPlayerUpdatedDelegate;            // 0xE0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_C4E[0x18];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BLUEPRINT_BlockedPlayerUpdateErrorDelegate;        // 0x108(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class URH_RHFriendAndPlatformFriend*> Friends;                                           // 0x118(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_C50[0x60];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_FriendSubsystem* GetDefaultObj();

	void UpdateRecentPlayerForOSS(class URH_LocalPlayerSubsystem* LocalPlayerSubsystem, struct CoreUObject_Guid& PlayerUuid);
	bool IsPlayerRhBlocked(struct CoreUObject_Guid& PlayerUuid);
	bool IsPlayerPlatformBlocked(struct CoreUObject_Guid& PlayerUuid);
	bool IsPlayerBlocked(struct CoreUObject_Guid& PlayerUuid);
	bool HasFriendsCached();
	class URH_PlayerInfoSubsystem* GetRH_PlayerInfoSubsystem();
	class URH_RHFriendAndPlatformFriend* GetOrCreateFriend(class URH_PlayerInfo* PlayerInfo);
	TArray<class URH_RHFriendAndPlatformFriend*> GetFriends();
	class URH_RHFriendAndPlatformFriend* GetFriendByUuidOrPlatformId(struct CoreUObject_Guid& PlayerUuid, struct RallyHereIntegration_RH_PlayerPlatformId& PlatformPlayerId);
	class URH_RHFriendAndPlatformFriend* GetFriendByUuid(struct CoreUObject_Guid& PlayerUuid);
	class URH_RHFriendAndPlatformFriend* GetFriendByPlayerInfo(class URH_PlayerInfo* PlayerInfo);
	class URH_RHFriendAndPlatformFriend* GetFriendByPlatformId(struct RallyHereIntegration_RH_PlayerPlatformId& PlatformPlayerId);
	TArray<struct CoreUObject_Guid> GetBlocked();
	bool BLUEPRINT_UnblockPlayer(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate);
	bool BLUEPRINT_RemoveFriend(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate);
	bool BLUEPRINT_FetchFriendsList(FDelegateProperty_& Delegate);
	bool BLUEPRINT_FetchFriend(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate);
	bool BLUEPRINT_FetchBlockedPlayer(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate);
	bool BLUEPRINT_FetchBlockedList(FDelegateProperty_& Delegate);
	bool BLUEPRINT_DeleteNotes(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate);
	bool BLUEPRINT_BlockPlayer(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate);
	bool BLUEPRINT_AddNotes(struct CoreUObject_Guid& PlayerUuid, class FString& Notes, FDelegateProperty_& Delegate);
	bool BLUEPRINT_AddFriend(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate);
};

// 0x48 (0x70 - 0x28)
// Class RallyHereIntegration.RH_PlatformFriend
class URH_PlatformFriend : public UObject
{
public:
	struct RallyHereIntegration_RH_PlayerPlatformId PlayerPlatformId;                                  // 0x28(0x18)(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                DisplayName;                                       // 0x40(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                RichPresenceInfo;                                  // 0x50(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         Joinable;                                          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         PlayingGame;                                       // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         PlayingThisGame;                                   // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         Online;                                            // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         DoNotDisturb;                                      // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         Friend;                                            // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         Blocked;                                           // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         PendingFriendRequestToYou;                         // 0x67(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         PendingFriendRequestFromYou;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CD3[0x7];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_PlatformFriend* GetDefaultObj();

	bool IsPlayingThisGame();
	bool IsPlayingGame();
	bool IsOnline();
	bool IsJoinable();
	bool IsFriend();
	bool IsDND();
	bool IsBlocked();
	void Init(class URH_PlatformFriend* Other);
	bool HasPendingFriendRequestToYou();
	bool HasPendingFriendRequestFromYou();
	bool HasAnyRelationship();
	class FString GetRichPresenceInfo();
	struct RallyHereIntegration_RH_PlayerPlatformId GetPlayerPlatformId();
	class FString GetPlatformUserId();
	enum class ERHAPI_Platform GetPlatformBase();
	enum class ERHAPI_Platform GetPlatform();
	class FString GetClientDisplayName();
	void ClearFriendAndStatusInfo();
	void Clear();
};

// 0x90 (0xB8 - 0x28)
// Class RallyHereIntegration.RH_RHFriendAndPlatformFriend
class URH_RHFriendAndPlatformFriend : public UObject
{
public:
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnPresenceUpdatedDelegate;               // 0x28(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E26[0x60];                                     // Fixing Size After Last Property  
	TArray<class URH_PlatformFriend*>            PlatformFriends;                                   // 0x98(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_E27[0x10];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_RHFriendAndPlatformFriend* GetDefaultObj();

	bool RhPendingFriendRequest();
	bool RHFriendRequestSent();
	bool PendingFriendRequest();
	bool OtherIsAwaitingFriendshipResponse();
	bool OtherDeclinedFriendship();
	bool IsPlayingThisGame();
	bool IsOnline();
	bool IsDND();
	bool HaveRhRelationship();
	bool HavePlatformRelationship();
	bool HaveAnyRelationship();
	enum class EFriendshipStatus GetStatus();
	struct CoreUObject_Guid GetRHPlayerUuid();
	enum class EFriendshipStatus GetPreviousStatus();
	struct RallyHereIntegration_RH_PlayerAndPlatformInfo GetPlayerAndPlatformInfo();
	TArray<class URH_PlatformFriend*> GetPlatformFriends();
	class URH_PlatformFriend* GetPlatformFriendBase(enum class ERHAPI_Platform Platform);
	class URH_PlatformFriend* GetPlatformFriendAtIndex(int32 Index);
	class URH_PlatformFriend* GetPlatformFriend(enum class ERHAPI_Platform Platform);
	class FString GetNotes();
	struct CoreUObject_DateTime GetLastModifiedOn();
	class FString GetLastKnownDisplayName(enum class ERHAPI_Platform PreferredPlatformType);
	class URH_FriendSubsystem* GetFriendSubsystem();
	bool FriendRequestSent();
	void BLUEPRINT_GetRHPlayerUuidAsync(FDelegateProperty_& Delegate);
	void BLUEPRINT_GetLastKnownDisplayNameAsync(struct CoreUObject_Timespan& StaleThreshold, bool bForceRefresh, enum class ERHAPI_Platform PreferredPlatformType, FDelegateProperty_& Delegate);
	bool AwaitingFriendshipResponse();
	bool AreRHFriends();
	bool ArePlatformFriends();
	bool AreFriends();
	void AcknowledgeFriendUpdate();
};

// 0x10 (0x38 - 0x28)
// Class RallyHereIntegration.RH_BootstrappingSettings
class URH_BootstrappingSettings : public UObject
{
public:
	float                                        PollIntervalFinalizer;                             // 0x28(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PollLogIntervalFinalizer;                          // 0x2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPollCountFinalizer;                             // 0x30(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E47[0x4];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_BootstrappingSettings* GetDefaultObj();

};

// 0x90 (0xC0 - 0x30)
// Class RallyHereIntegration.RH_GameInstanceSubsystem
class URH_GameInstanceSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_EC6[0x10];                                     // Fixing Size After Last Property  
	TArray<class URH_GameInstanceSubsystemPlugin*> SubsystemPlugins;                                  // 0x40(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class URH_GameInstanceSessionSubsystem*      SessionSubsystem;                                  // 0x50(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_SessionBrowserCache*               SessionSearchCache;                                // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_MatchmakingBrowserCache*           MatchmakingCache;                                  // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_GameInstanceServerBootstrapper*    ServerBootstrapper;                                // 0x68(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_GameInstanceClientBootstrapper*    ClientBootstrapper;                                // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_PlayerInfoSubsystem*               PlayerInfoSubsystem;                               // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_CatalogSubsystem*                  CatalogSubsystem;                                  // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_ConfigSubsystem*                   ConfigSubsystem;                                   // 0x88(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnabled;                                          // 0x90(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableSessionBrowser;                             // 0x91(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableMatchmakingBrowser;                         // 0x92(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableGameSessions;                               // 0x93(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableServerBootstrapper;                         // 0x94(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableClientBootstrapper;                         // 0x95(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseSecurityTokenForJoining;                       // 0x96(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireImportedPlayerIdsForJoining;               // 0x97(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRequireValidPlayerIdsForJoining;                  // 0x98(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EE2[0x27];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_GameInstanceSubsystem* GetDefaultObj();

	class URH_GameInstanceSessionSubsystem* GetSessionSubsystem();
	class URH_SessionBrowserCache* GetSessionSearchCache();
	class URH_GameInstanceServerBootstrapper* GetServerBootstrapper();
	class URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem();
	class URH_MatchmakingBrowserCache* GetMatchmakingCache();
	class URH_ConfigSubsystem* GetConfigSubsystem();
	class URH_GameInstanceClientBootstrapper* GetClientBootstrapper();
	class URH_CatalogSubsystem* GetCatalogSubsystem();
	void BLUEPRINT_CustomEndpoint(struct RallyHereIntegration_RH_CustomEndpointRequestWrapper& Request, FDelegateProperty_& Delegate);
};

// 0x7C8 (0x7F0 - 0x28)
// Class RallyHereIntegration.RH_GameInstanceServerBootstrapper
class URH_GameInstanceServerBootstrapper : public URH_GameInstanceSubsystemPlugin
{
public:
	uint8                                        Pad_F53[0x10];                                     // Fixing Size After Last Property  
	enum class ERH_ServerBootstrapMode           BootstrapMode;                                     // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERH_ServerBootstrapFlowStep       BootstrapStep;                                     // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F57[0x2];                                      // Fixing Size After Last Property  
	int32                                        CurrentRecycleCount;                               // 0x3C(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F5B[0x720];                                    // Fixing Size After Last Property  
	TMap<class FString, struct RallyHereAPI_RHAPI_SessionTemplate> Templates;                                         // 0x760(0x50)(Edit, DisableEditOnTemplate, EditConst, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_F5C[0x18];                                     // Fixing Size After Last Property  
	class URH_OnlineSession*                     RHSession;                                         // 0x7C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                DefaultAutoCreateSessionType;                      // 0x7D0(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERH_ServerBootstrapMode           DefaultBootstrapMode;                              // 0x7E0(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F61[0x3];                                      // Fixing Size After Last Property  
	int32                                        MaxRecycleCount;                                   // 0x7E4(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bMultiSessionServerMode;                           // 0x7E8(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReplaceSIGTERMHandler;                            // 0x7E9(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F63[0x6];                                      // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_GameInstanceServerBootstrapper* GetDefaultObj();

	bool GetTemplate(const class FString& Type, struct RallyHereAPI_RHAPI_SessionTemplate* Template);
	class URH_SessionView* GetSessionById(const class FString& SessionId);
	class URH_OnlineSession* GetSession();
	class URH_PlatformSessionSyncer* GetPlatformSyncerByRHSessionId(const class FString& SessionId);
	class URH_PlatformSessionSyncer* GetPlatformSyncerByPlatformSessionId(struct Engine_UniqueNetIdRepl& PlatformSessionId);
	enum class ERH_ServerBootstrapFlowStep GetBootstrapStep();
	enum class ERH_ServerBootstrapMode GetBootstrapMode();
};

// 0x0 (0x28 - 0x28)
// Class RallyHereIntegration.RH_GameInstanceClientBootstrapper
class URH_GameInstanceClientBootstrapper : public URH_GameInstanceSubsystemPlugin
{
public:

	static class UClass* StaticClass();
	static class URH_GameInstanceClientBootstrapper* GetDefaultObj();

	void CreateOfflineSession();
};

// 0x40 (0x68 - 0x28)
// Class RallyHereIntegration.RH_GameInstanceSessionSubsystem
class URH_GameInstanceSessionSubsystem : public URH_GameInstanceSubsystemPlugin
{
public:
	uint8                                        Pad_105B[0x18];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnBeaconCreated;                         // 0x40(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class URH_JoinedSession*                     DesiredSession;                                    // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_JoinedSession*                     ActiveSession;                                     // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasBeenMarkedFubar;                               // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1064[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_GameInstanceSessionSubsystem* GetDefaultObj();

	bool IsReadyToJoinInstance(class URH_JoinedSession* Session, bool bLog);
	bool IsPlayerLocal(struct RallyHereAPI_RHAPI_SessionPlayer& Player);
	bool IsMarkedFubar();
	bool IsLocallyHostedSession(class URH_JoinedSession* Session);
	bool IsLocallyHostedInstance(struct RallyHereAPI_RHAPI_InstanceInfo& Instance);
	class URH_JoinedSession* GetDesiredSession();
	class URH_JoinedSession* GetActiveSession();
	void BLUEPRINT_SyncToSession(class URH_JoinedSession* SessionInfo, FDelegateProperty_& Delegate);
	void BLUEPRINT_StartLeaveInstanceFlow(bool bAlreadyDisconnected, bool bCheckDesired, FDelegateProperty_& Delegate);
	bool BLUEPRINT_StartJoinInstanceFlow(FDelegateProperty_& Delegate);
	void BLUEPRINT_MarkInstanceFubar(const class FString& Reason, FDelegateProperty_& Delegate);
};

// 0x1480 (0x14A8 - 0x28)
// Class RallyHereIntegration.RH_Integration
class URH_Integration : public UObject
{
public:
	uint8                                        Pad_10A1[0x1410];                                  // Fixing Size After Last Property  
	class FString                                ResolvedBaseUrl;                                   // 0x1438(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsBaseUrlLocked;                                  // 0x1448(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10A4[0x7];                                     // Fixing Size After Last Property  
	class FString                                ResolvedSandboxId;                                 // 0x1450(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsSandboxIdLocked;                                // 0x1460(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10AB[0x7];                                     // Fixing Size After Last Property  
	class FString                                ResolvedClientId;                                  // 0x1468(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsClientIdLocked;                                 // 0x1478(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10AE[0x7];                                     // Fixing Size After Last Property  
	class FString                                ResolvedClientSecret;                              // 0x1480(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsClientSecretLocked;                             // 0x1490(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_10B1[0x7];                                     // Fixing Size After Last Property  
	class URH_WebRequests*                       WebRequestTracker;                                 // 0x1498(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class URH_Diagnostics*                       Diagnostics;                                       // 0x14A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URH_Integration* GetDefaultObj();

};

// 0x440 (0x478 - 0x38)
// Class RallyHereIntegration.RH_IntegrationSettings
class URH_IntegrationSettings : public UDeveloperSettings
{
public:
	class FString                                BaseUrl;                                           // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientId;                                          // 0x48(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientSecret;                                      // 0x58(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_SandboxConfiguration DefaultSandboxConfiguration;                       // 0x68(0x60)(Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct RallyHereIntegration_RH_SandboxConfiguration> SandboxConfigurations;                             // 0xC8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<struct RallyHereIntegration_RH_SandboxConfiguration> SandboxURLs;                                       // 0xD8(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        BaseURLCommandLineKeys;                            // 0xE8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        SandboxCommandLineKeys;                            // 0xF8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        DefaultOSSCommandLineKeys;                         // 0x108(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        ClientIdCommandLineKeys;                           // 0x118(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        ClientSecretCommandLineKeys;                       // 0x128(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FName                                  SandboxOSSName;                                    // 0x138(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoStartSessionsAfterJoin;                       // 0x140(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10D3[0x3];                                     // Fixing Size After Last Property  
	int32                                        MaxSimultaneousRequests;                           // 0x144(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             LocalPlayerLoginSubsystemClass;                    // 0x148(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             AdSubsystemClass;                                  // 0x168(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             FriendSubsystemClass;                              // 0x188(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             LocalPlayerSessionSubsystemClass;                  // 0x1A8(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             LocalPlayerPresenceSubsystemClass;                 // 0x1C8(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             PurgeSubsystemClass;                               // 0x1E8(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             EntitlementSubsystemClass;                         // 0x208(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             GameInstanceSessionInfoSubsystemClass;             // 0x228(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             GameInstanceServerBootstrappermClass;              // 0x248(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             GameInstanceClientBootstrapperClass;               // 0x268(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             PlayerInfoSubsystemClass;                          // 0x288(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             PlayerInfoClass;                                   // 0x2A8(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             CatalogSubsystemClass;                             // 0x2C8(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             ConfigSubsystemClass;                              // 0x2E8(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             SessionBrowserCacheClass;                          // 0x308(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftClassPath             MatchmakingBrowserCacheClass;                      // 0x328(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalPlayerSubsystemSandboxing;                   // 0x348(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10F8[0x3];                                     // Fixing Size After Last Property  
	int32                                        BeginNewAdSessionPriority;                         // 0x34C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FindAdOppertunitiesPriority;                       // 0x350(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UpdateAdOppertunitiesPriority;                     // 0x354(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AuthLogoutPriority;                                // 0x358(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AuthLoginPriority;                                 // 0x35C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GetCatalogAllPriority;                             // 0x360(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GetCatalogXpAllPriority;                           // 0x364(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GetCatalogItemPriority;                            // 0x368(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GetCatalogInventoryBucketUseRuleSetsAllPriority;   // 0x36C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GetCatalogPricePointsAllPriority;                  // 0x370(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GetCatalogTimeFramesAllPriority;                   // 0x374(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GetCatalogVendorPriority;                          // 0x378(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GetCatalogVendorsAllPriority;                      // 0x37C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FetchAppSettingsPriority;                          // 0x380(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProcessPlatformEntitlementsPriority;               // 0x384(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RetrievePlatformEntitlementsPriority;              // 0x388(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FetchFriendListPriority;                           // 0x38C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FetchFriendPriority;                               // 0x390(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AddFriendPriority;                                 // 0x394(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RemoveFriendPriority;                              // 0x398(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AddFriendNotesPriority;                            // 0x39C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeleteFriendNotesPriority;                         // 0x3A0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FetchBlockedListPriority;                          // 0x3A4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FetchBlockedPlayerPriority;                        // 0x3A8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BlockUnblockPlayerPriority;                        // 0x3AC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InventoryCreateSessionPriority;                    // 0x3B0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InventoryGetSessionPriority;                       // 0x3B4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InventoryGetPriority;                              // 0x3B8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InventoryCreatePriority;                           // 0x3BC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InventoryUpdatePriority;                           // 0x3C0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InventoryCreateOrderPriority;                      // 0x3C4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InventoryGetOrdersPriority;                        // 0x3C8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NotificationPollSelfPriority;                      // 0x3CC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NotificationPollOtherPriority;                     // 0x3D0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NotificationCreatePriority;                        // 0x3D4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PresenceUpdatePriority;                            // 0x3D8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PresenceGetSelfPriority;                           // 0x3DC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PresenceGetOtherPriority;                          // 0x3E0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PresenceGetSettingsPriority;                       // 0x3E4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PurgeQueuePriority;                                // 0x3E8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PurgeGetStatusPriority;                            // 0x3EC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GetAllQueueInfoPriority;                           // 0x3F0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GetMatchmakingTemplatePriority;                    // 0x3F4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GetMapGameInfoPriority;                            // 0x3F8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RankingGetPriority;                                // 0x3FC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RankingUpdatePriority;                             // 0x400(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionPollPriority;                               // 0x404(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionJoinPriority;                               // 0x408(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionLeavePriority;                              // 0x40C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionInvitePriority;                             // 0x410(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionKickPriority;                               // 0x414(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionLeaderChangePriority;                       // 0x418(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionChangeTeamsPriority;                        // 0x41C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionLeaveQueuePriority;                         // 0x420(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionRequestInstancePriority;                    // 0x424(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionEndInstancePriority;                        // 0x428(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionStartMatchPriority;                         // 0x42C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionEndMatchPriority;                           // 0x430(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionUpdateSessionInfoPriority;                  // 0x434(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionUpdateInstanceInfoPriority;                 // 0x438(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionUpdateBrowserInfoPriority;                  // 0x43C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionDeleteBrowserInfoPriority;                  // 0x440(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionInstanceMarkFubarPriority;                  // 0x444(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionUpdateWithPlatformSessionPriority;          // 0x448(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionGetTemplatePriority;                        // 0x44C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionGetByAllocationIdPriority;                  // 0x450(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionGetBySessionIdPriority;                     // 0x454(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionGetByTypePriority;                          // 0x458(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SessionsGetOtherPriority;                          // 0x45C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SettingsGetPriority;                               // 0x460(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SettingsUpdatePriority;                            // 0x464(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        GetSiteSettingsPriority;                           // 0x468(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UsersLookupPlayerPriority;                         // 0x46C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UsersGetLinkedPlatformsPriority;                   // 0x470(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A2[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_IntegrationSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class RallyHereIntegration.RH_LocalPlayerInterface
class IRH_LocalPlayerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IRH_LocalPlayerInterface* GetDefaultObj();

};

// 0x8 (0x2B8 - 0x2B0)
// Class RallyHereIntegration.RH_LocalPlayer
class URH_LocalPlayer : public ULocalPlayer
{
public:
	uint8                                        Pad_11CB[0x8];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_LocalPlayer* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class RallyHereIntegration.RH_IpConnectionInterface
class IRH_IpConnectionInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IRH_IpConnectionInterface* GetDefaultObj();

};

// 0x20 (0x1EA8 - 0x1E88)
// Class RallyHereIntegration.RH_IpConnection
class URH_IpConnection : public UIpConnection
{
public:
	uint8                                        Pad_11DD[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_IpConnection* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class RallyHereIntegration.RH_LocalPlayerLoginSubsystem
class URH_LocalPlayerLoginSubsystem : public URH_LocalPlayerSubsystemPlugin
{
public:
	uint8                                        Pad_11EA[0x18];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnLoginComplete;                         // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FName                                  LoginOSSName;                                      // 0x50(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NicknameOSSName;                                   // 0x58(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoginAllowStoredRefreshToken;                     // 0x60(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoginDuringPartialInstall;                        // 0x61(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoginOSSRequireLoginUIFirst;                      // 0x62(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNicknameOSSRequireLoginUIFirst;                   // 0x63(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoginOSSRequireOnlinePlayToLogin;                 // 0x64(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNicknameOSSRequireOnlinePlayToLogin;              // 0x65(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoginOSSPromptAccountUpgradeIfInsufficient;       // 0x66(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNicknameOSSPromptAccountUpgradeIfInsufficient;    // 0x67(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoginOSSRequireValidUserIdForFailedLogin;         // 0x68(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNicknameOSSRequireValidUserIdForFailedLogin;      // 0x69(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLogoutAndRetryLoginIfRefreshLoginFailed;          // 0x6A(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoginOSSUseIDTokenAsPortalParentAccessToken;      // 0x6B(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoginOSSUseIDTokenAsPortalAccessToken;            // 0x6C(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResolveRallyHereBaseURLAfterOSSLogin;             // 0x6D(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11F9[0x2];                                     // Fixing Size After Last Property  
	class FString                                SavedCredentialPrefix;                             // 0x70(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        IgnoreSavedCredentialsCommandLineKeys;             // 0x80(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_11FC[0x10];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_LocalPlayerLoginSubsystem* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class RallyHereIntegration.RH_LocalPlayerPresenceSubsystem
class URH_LocalPlayerPresenceSubsystem : public URH_LocalPlayerSubsystemPlugin
{
public:
	uint8                                        Pad_1241[0x10];                                    // Fixing Size After Last Property  
	enum class ERHAPI_OnlineStatus               DesiredStatus;                                     // 0x38(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1242[0x7];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_LocalPlayerPresenceSubsystem* GetDefaultObj();

	void StopRefreshTimer();
	void StartRefreshTimer();
	void SetDesiredStatus(enum class ERHAPI_OnlineStatus NewStatus);
	bool IsRefreshTimerActive(float* TimeRemaining);
	enum class ERHAPI_OnlineStatus GetDesiredStatus();
};

// 0x88 (0xB8 - 0x30)
// Class RallyHereIntegration.RH_LocalPlayerSubsystem
class URH_LocalPlayerSubsystem : public ULocalPlayerSubsystem
{
public:
	TArray<class URH_LocalPlayerSubsystemPlugin*> SubsystemPlugins;                                  // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class URH_SandboxedSubsystemPlugin*>  SandboxedSubsystemPlugins;                         // 0x40(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class URH_LocalPlayerLoginSubsystem*         LoginSubsystem;                                    // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_AdSubsystem*                       AdSubsystem;                                       // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_FriendSubsystem*                   FriendSubsystem;                                   // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_LocalPlayerSessionSubsystem*       SessionSubsystem;                                  // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_LocalPlayerPresenceSubsystem*      PresenceSubsystem;                                 // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_PurgeSubsystem*                    PurgeSubsystem;                                    // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_EntitlementSubsystem*              EntitlementSubsystem;                              // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_PlayerInfoSubsystem*               SandboxedPlayerInfoSubsystem;                      // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1312[0x28];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_LocalPlayerSubsystem* GetDefaultObj();

	class URH_LocalPlayerSessionSubsystem* GetSessionSubsystem();
	class URH_PurgeSubsystem* GetPurgeSubsystem();
	class URH_LocalPlayerPresenceSubsystem* GetPresenceSubsystem();
	struct RallyHereIntegration_RH_PlayerPlatformId GetPlayerPlatformId();
	class URH_PlayerNotifications* GetPlayerNotifications();
	class URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem();
	class URH_LocalPlayerLoginSubsystem* GetLoginSubsystem();
	class URH_PlayerInfo* GetLocalPlayerInfo();
	class URH_FriendSubsystem* GetFriendSubsystem();
	class URH_EntitlementSubsystem* GetEntitlementSubsystem();
	class URH_AdSubsystem* GetAdSubsystem();
	void BLUEPRINT_CustomEndpoint(struct RallyHereIntegration_RH_CustomEndpointRequestWrapper& Request, FDelegateProperty_& Delegate);
};

// 0x2A0 (0x2C8 - 0x28)
// Class RallyHereIntegration.RH_LocalPlayerSessionSubsystem
class URH_LocalPlayerSessionSubsystem : public URH_LocalPlayerSubsystemPlugin
{
public:
	uint8                                        Pad_1402[0x8];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnSessionUpdatedDelegate;                // 0x30(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnSessionAddedDelegate;                  // 0x40(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnSessionRemovedDelegate;                // 0x50(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnSessionExpirationCompleteDelegate;     // 0x60(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnLoginPollSessionsCompleteDelegate;     // 0x70(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1405[0x88];                                    // Fixing Size After Last Property  
	TMap<class FString, struct RallyHereAPI_RHAPI_SessionTemplate> Templates;                                         // 0x108(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1407[0x30];                                    // Fixing Size After Last Property  
	TMap<class FString, class URH_SessionView*>  Sessions;                                          // 0x188(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	TMap<class FString, class URH_SessionView*>  ExpiringSessions;                                  // 0x1D8(0x50)(Edit, DisableEditOnTemplate, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1409[0x50];                                    // Fixing Size After Last Property  
	TMap<class FString, class URH_PlatformSessionSyncer*> PlatformSyncers;                                   // 0x278(0x50)(Edit, DisableEditOnTemplate, EditConst, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URH_LocalPlayerSessionSubsystem* GetDefaultObj();

	void StopPolling();
	void StartPolling();
	bool IsInSession(const class FString& SessionId);
	TArray<struct RallyHereAPI_RHAPI_SessionTemplate> GetTemplates();
	bool GetTemplate(const class FString& Type, struct RallyHereAPI_RHAPI_SessionTemplate* Template);
	TArray<class URH_SessionView*> GetSessionsByType(const class FString& Type);
	TArray<class URH_SessionView*> GetSessions();
	class URH_SessionView* GetSessionById(const class FString& SessionId);
	float GetPollTimeRemaining();
	class URH_PlatformSessionSyncer* GetPlatformSyncerByRHSessionId(const class FString& SessionId);
	class URH_PlatformSessionSyncer* GetPlatformSyncerByPlatformSessionId(struct Engine_UniqueNetIdRepl& PlatformSessionId);
	TArray<class URH_JoinedSession*> GetJoinedSessionsByType(const class FString& Type);
	TArray<class URH_InvitedSession*> GetInvitedSessionsByType(const class FString& Type);
	class URH_SessionView* GetFirstSessionByType(const class FString& Type);
	class URH_JoinedSession* GetFirstJoinedSessionByType(const class FString& Type);
	class URH_InvitedSession* GetFirstInvitedSessionByType(const class FString& Type);
	class URH_JoinedSession* GetFirstActiveSession();
	void ForcePollForUpdate(bool bClearETag);
	void BLUEPRINT_SearchForSessions(struct RallyHereIntegration_RH_SessionBrowserSearchParams& Params, FDelegateProperty_& Delegate);
	void BLUEPRINT_JoinSessionById(const class FString& SessionId, FDelegateProperty_& Delegate);
	void BLUEPRINT_CreateOrJoinSessionByType(struct RallyHereAPI_RHAPI_CreateOrJoinRequest& CreateParams, FDelegateProperty_& Delegate);
};

// 0x68 (0x98 - 0x30)
// Class RallyHereIntegration.RH_ClientQueueAsset
class URH_ClientQueueAsset : public UPrimaryDataAsset
{
public:
	class FString                                ID;                                                // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x40(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x58(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x70(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_ClientQueueAsset* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class RallyHereIntegration.RH_MatchmakingQueueInfo
class URH_MatchmakingQueueInfo : public UObject
{
public:
	uint8                                        Pad_1474[0x50];                                    // Fixing Size After Last Property  
	class FString                                ID;                                                // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelLock;                                         // 0x88(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinPartySize;                                      // 0x8C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPartySize;                                      // 0x90(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCustom;                                          // 0x94(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_147C[0x3];                                     // Fixing Size After Last Property  
	class URH_ClientQueueAsset*                  QueueAsset;                                        // 0x98(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_MatchmakingQueueInfo* GetDefaultObj();

	bool IsActive();
	int32 GetRankingType();
	class FString GetQueueId();
	int32 GetNumSides();
	int32 GetMinPlayersPerSide();
	int32 GetMaxQueueGroupSize();
	int32 GetMaxPlayersPerSide();
	struct CoreUObject_Guid GetMatchMakingTemplateGroupId();
};

// 0x90 (0xB8 - 0x28)
// Class RallyHereIntegration.RH_MatchmakingTemplateGroupInfo
class URH_MatchmakingTemplateGroupInfo : public UObject
{
public:
	uint8                                        Pad_14A4[0x90];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_MatchmakingTemplateGroupInfo* GetDefaultObj();

	struct CoreUObject_Guid GetTemplateGroupId();
	TSet<int32> GetRequiredItemIds();
	TArray<struct CoreUObject_Guid> GetPossibleInstanceLaunchTemplateIds();
};

// 0xB0 (0xD8 - 0x28)
// Class RallyHereIntegration.RH_InstanceLaunchTemplate
class URH_InstanceLaunchTemplate : public UObject
{
public:
	uint8                                        Pad_14CD[0xB0];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_InstanceLaunchTemplate* GetDefaultObj();

	struct CoreUObject_Guid GetInstanceLaunchTemplateId();
	struct RallyHereAPI_RHAPI_InstanceLaunchTemplate GetInfo();
	class FString GetETag();
	TMap<class FString, class FString> GetCustomData();
};

// 0x128 (0x150 - 0x28)
// Class RallyHereIntegration.RH_MatchmakingBrowserCache
class URH_MatchmakingBrowserCache : public URH_GameInstanceSubsystemPlugin
{
public:
	uint8                                        Pad_153C[0x18];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnRegionsUpdated;                                  // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class FString, class URH_MatchmakingQueueInfo*> QueueCache;                                        // 0x50(0x50)(Edit, DisableEditOnTemplate, EditConst, Protected, NativeAccessSpecifierProtected)
	TMap<struct CoreUObject_Guid, class URH_MatchmakingTemplateGroupInfo*> TemplateGroupCache;                                // 0xA0(0x50)(Edit, DisableEditOnTemplate, EditConst, Protected, NativeAccessSpecifierProtected)
	TMap<struct CoreUObject_Guid, class URH_InstanceLaunchTemplate*> InstanceLaunchTemplateCache;                       // 0xF0(0x50)(Edit, DisableEditOnTemplate, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<struct RallyHereAPI_RHAPI_SiteSettings> RegionsCache;                                      // 0x140(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URH_MatchmakingBrowserCache* GetDefaultObj();

	class URH_MatchmakingQueueInfo* GetQueue(const class FString& QueueId);
	class URH_MatchmakingTemplateGroupInfo* GetMatchmakingTemplateGroup(struct CoreUObject_Guid& TemplateGroupId);
	class URH_InstanceLaunchTemplate* GetInstanceLaunchTemplate(struct CoreUObject_Guid& InstanceLaunchTemplateId);
	TArray<struct RallyHereAPI_RHAPI_SiteSettings> GetAllRegions();
	TArray<class URH_MatchmakingQueueInfo*> GetAllQueues();
	void BLUEPRINT_SearchRegions(FDelegateProperty_& Delegate);
	void BLUEPRINT_SearchQueues(struct RallyHereIntegration_RH_QueueSearchParams& Params, FDelegateProperty_& Delegate);
	void BLUEPRINT_SearchMatchmakingTemplateGroup(struct CoreUObject_Guid& TemplateId, FDelegateProperty_& Delegate);
	void BLUEPRINT_SearchInstanceLaunchTemplate(struct CoreUObject_Guid& TemplateId, FDelegateProperty_& Delegate);
};

// 0x190 (0x1B8 - 0x28)
// Class RallyHereIntegration.RH_PlatformSessionSyncer
class URH_PlatformSessionSyncer : public UObject
{
public:
	uint8                                        Pad_157B[0x18];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnCleanupComplete;                       // 0x40(0x10)(Edit, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_157D[0x18];                                    // Fixing Size After Last Property  
	class FString                                RHSessionId;                                       // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  OSSSessionName;                                    // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERHAPI_Platform                   RHPlatform;                                        // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1583[0x137];                                   // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_PlatformSessionSyncer* GetDefaultObj();

	TScriptInterface<class IRH_SessionOwnerInterface> GetSessionOwner();
	class FString GetRHSessionId();
	class URH_JoinedSession* GetRHSession();
	bool GetPlatformSessionIdFromRHSession(struct Engine_UniqueNetIdRepl* PlatformSessionId);
};

// 0xF8 (0x120 - 0x28)
// Class RallyHereIntegration.RH_PlayerPresence
class URH_PlayerPresence : public UObject
{
public:
	bool                                         bInitialized;                                      // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_OnlineStatus               Status;                                            // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AC[0x6];                                     // Fixing Size After Last Property  
	class FString                                Message;                                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Platform;                                          // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData;                                        // 0x60(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0xB0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  LastUpdated;                                       // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Etag;                                              // 0xC8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnPresenceUpdatedDelegate;               // 0xD8(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BD[0x38];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_PlayerPresence* GetDefaultObj();

	class URH_PlayerInfo* GetPlayerInfo();
	void BLUEPRINT_RequestUpdate(bool bForceUpdate, FDelegateProperty_& Delegate);
};

// 0xE8 (0x110 - 0x28)
// Class RallyHereIntegration.RH_PlayerSessions
class URH_PlayerSessions : public UObject
{
public:
	bool                                         bInitialized;                                      // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F8[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x2C(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15FA[0x4];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  LastUpdated;                                       // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Etag;                                              // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_PlayerSessions     Sessions;                                          // 0x58(0x70)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnSessionsUpdatedDelegate;               // 0xC8(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1600[0x38];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_PlayerSessions* GetDefaultObj();

	class URH_PlayerInfo* GetPlayerInfo();
	void BLUEPRINT_RequestUpdate(bool bForceUpdate, FDelegateProperty_& Delegate);
};

// 0x28 (0x50 - 0x28)
// Class RallyHereIntegration.RH_PlayerPlatformInfo
class URH_PlayerPlatformInfo : public UObject
{
public:
	struct RallyHereIntegration_RH_PlayerPlatformId PlayerPlatformId;                                  // 0x28(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_PlayerPlatformInfo* GetDefaultObj();

	struct RallyHereIntegration_RH_PlayerPlatformId GetPlayerPlatformId();
	class FString GetPlatformUserId();
	enum class ERHAPI_Platform GetPlatform();
	class FString GetLastKnownDisplayName();
};

// 0x230 (0x258 - 0x28)
// Class RallyHereIntegration.RH_PlayerInfo
class URH_PlayerInfo : public UObject
{
public:
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnPresenceUpdatedDelegate;               // 0x28(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1849[0x18];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnSessionsUpdatedDelegate;               // 0x50(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1850[0x18];                                    // Fixing Size After Last Property  
	struct CoreUObject_Guid                      RHPlayerUuid;                                      // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FString, struct RallyHereIntegration_RH_PlayerSettingsDataWrapper> PlayerSettingsByTypeId;                            // 0x88(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<class FString, struct RallyHereIntegration_RH_PlayerSettingKeySetWrapper> PendingSettingRequestsByTypeId;                    // 0xD8(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TMap<class FString, struct RallyHereIntegration_RH_PlayerSettingsDataWrapper> SetPlayerSettingResponses;                         // 0x128(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<struct RallyHereIntegration_RH_PlayerPlatformId> LinkedPlayerPlatforms;                             // 0x178(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class URH_PlayerPresence*                    PlayerPresence;                                    // 0x188(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_PlayerSessions*                    PlayerSessions;                                    // 0x190(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_PlayerInventory*                   PlayerInventory;                                   // 0x198(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URH_PlayerNotifications*               PlayerNotifications;                               // 0x1A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<int32, struct RallyHereAPI_RHAPI_PlayerRankResponse> PlayerRankingsByRankingId;                         // 0x1A8(0x50)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_185B[0x60];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_PlayerInfo* GetDefaultObj();

	void StopStreamingNotifications(bool bClearCache);
	void StartStreamingNotifications();
	class URH_PlayerSessions* GetSessions();
	struct CoreUObject_Guid GetRHPlayerUuid();
	class URH_PlayerPresence* GetPresence();
	TArray<class URH_PlayerPlatformInfo*> GetPlayerPlatforms();
	class URH_PlayerPlatformInfo* GetPlayerPlatformInfo(struct RallyHereIntegration_RH_PlayerPlatformId& PlayerPlatformId);
	TArray<struct RallyHereIntegration_RH_PlayerPlatformId> GetPlayerPlatformIds();
	class URH_PlayerNotifications* GetPlayerNotifications();
	class URH_PlayerInventory* GetPlayerInventory();
	class URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem();
	TMap<class FString, struct RallyHereIntegration_RH_PlayerSettingsDataWrapper> GetAllStoredPlayerSettings();
	TMap<int32, struct RallyHereAPI_RHAPI_PlayerRankResponse> GetAllStoredPlayerRankings();
	void BLUEPRINT_UpdatePlayerRanking(int32 RankId, struct RallyHereAPI_RHAPI_PlayerRankUpdateRequest& RankData, FDelegateProperty_& Delegate);
	void BLUEPRINT_SetPlayerSettings(const class FString& SettingTypeId, const struct RallyHereIntegration_RH_PlayerSettingsDataWrapper& SettingsData, FDelegateProperty_& Delegate);
	void BLUEPRINT_GetPlayerSettings(const class FString& SettingTypeId, struct CoreUObject_Timespan& StaleThreshold, bool bForceRefresh, FDelegateProperty_& Delegate);
	void BLUEPRINT_GetPlayerRankings(struct CoreUObject_Timespan& StaleThreshold, bool bForceRefresh, FDelegateProperty_& Delegate);
	void BLUEPRINT_GetLinkedPlatformInfo(struct CoreUObject_Timespan& StaleThreshold, bool bForceRefresh, FDelegateProperty_& Delegate);
	void BLUEPRINT_GetLastKnownDisplayNameAsync(class URH_LocalPlayerSubsystem* LocalPlayerSubsystem, struct CoreUObject_Timespan& StaleThreshold, bool bForceRefresh, enum class ERHAPI_Platform PreferredPlatformType, FDelegateProperty_& Delegate);
	bool BLUEPRINT_GetLastKnownDisplayName(enum class ERHAPI_Platform PreferredPlatformType, class FString* OutDisplayName);
};

// 0x0 (0x28 - 0x28)
// Class RallyHereIntegration.RH_SandboxedSubsystemPlugin
class URH_SandboxedSubsystemPlugin : public URH_GameInstanceSubsystemPlugin
{
public:

	static class UClass* StaticClass();
	static class URH_SandboxedSubsystemPlugin* GetDefaultObj();

	class URH_LocalPlayerSubsystem* GetLocalPlayerSubsystem();
};

// 0x100 (0x128 - 0x28)
// Class RallyHereIntegration.RH_PlayerInfoSubsystem
class URH_PlayerInfoSubsystem : public URH_SandboxedSubsystemPlugin
{
public:
	uint8                                        Pad_193F[0x8];                                     // Fixing Size After Last Property  
	TSubclassOf<class URH_PlayerInfo>            PlayerInfoClassOverride;                           // 0x30(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<struct CoreUObject_Guid, class URH_PlayerInfo*> PlayerInfos;                                       // 0x38(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<struct RallyHereIntegration_RH_PlayerPlatformId, class URH_PlayerPlatformInfo*> PlayerPlatformInfos;                               // 0x88(0x50)(Protected, NativeAccessSpecifierProtected)
	TMap<struct RallyHereIntegration_RH_PlayerPlatformId, struct CoreUObject_Guid> PlayerPlatformIdToUuidMap;                         // 0xD8(0x50)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URH_PlayerInfoSubsystem* GetDefaultObj();

	class URH_PlayerInfo* RemovePlayerInfoFromCache(struct CoreUObject_Guid& PlayerUuid);
	class URH_PlayerPlatformInfo* GetPlayerPlatformInfo(struct RallyHereIntegration_RH_PlayerPlatformId& PlayerPlatformId);
	TMap<struct CoreUObject_Guid, class URH_PlayerInfo*> GetPlayerInfos();
	class URH_PlayerInfo* GetPlayerInfo(struct CoreUObject_Guid& PlayerUuid);
	class URH_PlayerPlatformInfo* GetOrCreatePlayerPlatformInfo(struct RallyHereIntegration_RH_PlayerPlatformId& PlayerPlatformId);
	class URH_PlayerInfo* GetOrCreatePlayerInfo(struct CoreUObject_Guid& PlayerUuid);
	class URH_PlayerInfo* FindPlayerInfoByPlatformId(struct RallyHereIntegration_RH_PlayerPlatformId& PlayerPlatformId);
	void BLUEPRINT_LookupPlayerByPlatformUserId(const struct RallyHereIntegration_RH_PlayerPlatformId& PlayerPlatformId, FDelegateProperty_& Delegate);
	void BLUEPRINT_LookupPlayer(const class FString& PlayerName, FDelegateProperty_& Delegate);
};

// 0x110 (0x138 - 0x28)
// Class RallyHereIntegration.RH_PlayerInventory
class URH_PlayerInventory : public UObject
{
public:
	uint8                                        Pad_1B64[0x10];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnInventoryCacheUpdatedBP;                         // 0x38(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B67[0x80];                                    // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_PlayerOrder> CachedOrderResults;                                // 0xC8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	class URH_PlayerOrderWatch*                  OrderWatch;                                        // 0xD8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URH_PendingOrder*>              PendingOrders;                                     // 0xE0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	struct RallyHereIntegration_RH_InventorySession InventorySession;                                  // 0xF0(0x38)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x128(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReceivedInventoryNotification;                    // 0x130(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bReceivedPendingInventoryNotification;             // 0x131(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B6A[0x6];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_PlayerInventory* GetDefaultObj();

	TArray<struct RallyHereAPI_RHAPI_PlayerOrder> GetOrderResults();
	struct RallyHereIntegration_RH_InventorySession GetCachedInventorySession();
	TArray<struct RallyHereIntegration_RH_ItemInventory> GetCachedInventoryForType(enum class ERHAPI_InventoryType& Type);
	TArray<struct RallyHereIntegration_RH_ItemInventory> GetCachedInventoryForItemsAndTypes(TArray<int32>& ItemIds, TArray<enum class ERHAPI_InventoryType>& Types);
	TArray<struct RallyHereIntegration_RH_ItemInventory> GetCachedInventoryForItems(TArray<int32>& ItemIds);
	TArray<struct RallyHereIntegration_RH_ItemInventory> GetCachedInventoryForItem(int32& ItemId);
	bool GetCachedInventoryForInventoryId(struct CoreUObject_Guid& InventoryId, struct RallyHereIntegration_RH_ItemInventory* Item);
	TArray<struct RallyHereIntegration_RH_ItemInventory> GetAllCachedInventory();
	void BLUEPRINT_UpdateInventoryWithoutClientOrderRefId(TArray<struct RallyHereIntegration_RH_UpdateInventory>& UpdateInventories, FDelegateProperty_& Delegate, enum class ERHAPI_Source Source);
	void BLUEPRINT_UpdateInventory(struct CoreUObject_Guid& ClientOrderReferenceId, TArray<struct RallyHereIntegration_RH_UpdateInventory>& UpdateInventories, FDelegateProperty_& Delegate, enum class ERHAPI_Source Source);
	void BLUEPRINT_SetOrderWatch(FDelegateProperty_& Delegate);
	void BLUEPRINT_RedeemPromoCode(const class FString& PromoCode, FDelegateProperty_& Delegate);
	void BLUEPRINT_IsInventoryItemRented(int32& ItemId, FDelegateProperty_& Delegate);
	void BLUEPRINT_IsInventoryItemOwned(int32& ItemId, FDelegateProperty_& Delegate);
	void BLUEPRINT_GetInventorySession(FDelegateProperty_& Delegate);
	void BLUEPRINT_GetInventoryCount(int32& ItemId, FDelegateProperty_& Delegate);
	void BLUEPRINT_GetInventory(const TArray<int32>& ItemIds, FDelegateProperty_& Delegate);
	void BLUEPRINT_CreatePlayerOrder(enum class ERHAPI_PlayerOrderEntryType FillType, enum class ERHAPI_Source OrderSource, TArray<class URH_PlayerOrderEntry*>& OrderEntries, FDelegateProperty_& Delegate);
	void BLUEPRINT_CreateNewPlayerOrder2(enum class ERHAPI_Source OrderSource, bool IsTransaction, TArray<class URH_PlayerOrderEntry*>& OrderEntries, FDelegateProperty_& Delegate);
	void BLUEPRINT_CreateNewPlayerOrder(enum class ERHAPI_Source OrderSource, TArray<class URH_PlayerOrderEntry*>& OrderEntries, FDelegateProperty_& Delegate);
	void BLUEPRINT_CreateInventoryWithoutClientOrderRefId(TArray<struct RallyHereIntegration_RH_CreateInventory>& CreateInventories, FDelegateProperty_& Delegate, enum class ERHAPI_Source Source);
	void BLUEPRINT_CreateInventorySessionForPlatform(enum class ERHAPI_Platform Platform, FDelegateProperty_& Delegate);
	void BLUEPRINT_CreateInventorySession(FDelegateProperty_& Delegate);
	void BLUEPRINT_CreateInventory(struct CoreUObject_Guid& ClientOrderReferenceId, TArray<struct RallyHereIntegration_RH_CreateInventory>& CreateInventories, FDelegateProperty_& Delegate, enum class ERHAPI_Source Source);
	void BLUEPRINT_ClearOrderWatch(FDelegateProperty_& Delegate);
	void BLUEPRINT_AddPendingOrdersFromEntitlementsArray(TArray<struct RallyHereAPI_RHAPI_PlatformEntitlement>* Entitlements, FDelegateProperty_& Delegate);
	void BLUEPRINT_AddPendingOrdersFromEntitlementResult(struct RallyHereAPI_RHAPI_PlatformEntitlementProcessResult& EntitlementResult, FDelegateProperty_& Delegate);
};

// 0x20 (0x48 - 0x28)
// Class RallyHereIntegration.RH_PendingOrder
class URH_PendingOrder : public UObject
{
public:
	class FString                                OrderId;                                           // 0x28(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ClientOrderRefId;                                  // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_PendingOrder* GetDefaultObj();

};

// 0x30 (0x78 - 0x48)
// Class RallyHereIntegration.RH_PendingPromoCodeOrder
class URH_PendingPromoCodeOrder : public URH_PendingOrder
{
public:
	class FString                                PromoCode;                                         // 0x48(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B8B[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_PendingPromoCodeOrder* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class RallyHereIntegration.RH_PendingInventoryUpdateOrder
class URH_PendingInventoryUpdateOrder : public URH_PendingOrder
{
public:
	uint8                                        Pad_1B90[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_PendingInventoryUpdateOrder* GetDefaultObj();

};

// 0x30 (0x78 - 0x48)
// Class RallyHereIntegration.RH_PendingPlayerOrder
class URH_PendingPlayerOrder : public URH_PendingOrder
{
public:
	uint8                                        Pad_1B9B[0x20];                                    // Fixing Size After Last Property  
	TArray<class URH_PlayerOrderEntry*>          OrderEntries;                                      // 0x68(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_PendingPlayerOrder* GetDefaultObj();

};

// 0x20 (0x68 - 0x48)
// Class RallyHereIntegration.RH_PendingOrderDetailsOrder
class URH_PendingOrderDetailsOrder : public URH_PendingOrder
{
public:
	uint8                                        Pad_1BA4[0x20];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_PendingOrderDetailsOrder* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class RallyHereIntegration.RH_PlayerOrderWatch
class URH_PlayerOrderWatch : public UObject
{
public:
	uint8                                        Pad_1BAC[0x10];                                    // Fixing Size After Last Property  
	class FString                                Cursor;                                            // 0x38(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URH_PlayerOrderWatch* GetDefaultObj();

};

// 0x2E8 (0x310 - 0x28)
// Class RallyHereIntegration.RH_PlayerOrderEntry
class URH_PlayerOrderEntry : public UObject
{
public:
	enum class ERHAPI_PlayerOrderEntryType       FillType;                                          // 0x28(0x1)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE4[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_Loot               LootItem;                                          // 0x30(0x268)(Edit, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int32                                        LootId;                                            // 0x298(0x4)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x29C(0x4)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ExternalTransactionId;                             // 0x2A0(0x10)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PriceItemId;                                       // 0x2B0(0x4)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0x2B4(0x4)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CouponItemId;                                      // 0x2B8(0x4)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE7[0x4];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData;                                        // 0x2C0(0x50)(Edit, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class URH_PlayerOrderEntry* GetDefaultObj();

	int32 GetQuantity();
	int32 GetPriceItemId();
	int32 GetPrice();
	struct RallyHereAPI_RHAPI_Loot GetLootItem();
	int32 GetLootId();
	enum class ERHAPI_PlayerOrderEntryType GetFillType();
	class FString GetExternalTransactionId();
	int32 GetCouponItemId();
};

// 0x0 (0x28 - 0x28)
// Class RallyHereIntegration.RH_InventoryBlueprintLibrary
class URH_InventoryBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URH_InventoryBlueprintLibrary* GetDefaultObj();

	void RemoveCustomDataFromItemInventory(struct RallyHereIntegration_RH_ItemInventory* ItemInventory, const class FString& Key);
	bool InitUpdateInventoryWithItemInventoryValues(const struct RallyHereIntegration_RH_UpdateInventory& UpdateInventory, struct RallyHereIntegration_RH_ItemInventory& ItemInventory);
	bool InitCreateInventoryWithItemInventoryValues(const struct RallyHereIntegration_RH_CreateInventory& CreateInventory, struct RallyHereIntegration_RH_ItemInventory& ItemInventory);
	bool GetInventoryExpiration(struct RallyHereIntegration_RH_ItemInventory& ItemInventory, struct CoreUObject_DateTime* DateTimeOut);
	class FString FindCustomDataOnItemInventory(struct RallyHereIntegration_RH_ItemInventory& ItemInventory, const class FString& Key);
	bool CheckIfInventoryExpires(struct RallyHereIntegration_RH_ItemInventory& ItemInventory);
	void AddCustomDataToItemInventory(struct RallyHereIntegration_RH_ItemInventory* ItemInventory, const class FString& Key, const class FString& Value);
};

// 0xD8 (0x100 - 0x28)
// Class RallyHereIntegration.RH_PlayerNotifications
class URH_PlayerNotifications : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnNotificationStreamedDynamic;                     // 0x28(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC2[0x68];                                    // Fixing Size After Last Property  
	enum class EFRH_NotificationPollingTypes     PollingType;                                       // 0xA0(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CC5[0x17];                                    // Fixing Size After Last Property  
	struct CoreUObject_Guid                      StreamingPlayerUuid;                               // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                StreamingCursor;                                   // 0xC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsStreaming;                                      // 0xD8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CCE[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_Notification> StreamingHistory;                                  // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, Protected, NativeAccessSpecifierProtected)
	int32                                        StreamingHistorySize;                              // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1CD1[0x4];                                     // Fixing Size After Last Property  
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0xF8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URH_PlayerNotifications* GetDefaultObj();

	void StopStreamingLatestNotifications(bool bClearCache);
	void StartStreamingLatestNotifications(const class FString& Cursor);
	void SetStreamingHistorySize(int32 Size);
	bool IsStreaming();
	struct CoreUObject_Guid GetStreamingPlayerUuid();
	int32 GetStreamingHistorySize();
	TArray<struct RallyHereAPI_RHAPI_Notification> GetStreamingHistory();
	class FString GetStreamingCursor();
	void ClearStreamingHistory();
	bool BLUEPRINT_CreateNotification(struct CoreUObject_Guid& PlayerUuid, const class FString& Message, const class FString& RhUrl, TMap<class FString, class FString>& CustomData, FDelegateProperty_& Delegate);
};

// 0x18 (0x50 - 0x38)
// Class RallyHereIntegration.RH_PollingSettings
class URH_PollingSettings : public UDeveloperSettings
{
public:
	TArray<struct RallyHereIntegration_RH_PollTimerSetting> PollingIntervals;                                  // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	float                                        DefaultPollingInterval;                            // 0x48(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF8[0x4];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_PollingSettings* GetDefaultObj();

	float GetPollingInterval(class FName& TimerName);
};

// 0x0 (0x28 - 0x28)
// Class RallyHereIntegration.RH_RallyHerePropertiesBlueprintLibrary
class URH_RallyHerePropertiesBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class URH_RallyHerePropertiesBlueprintLibrary* GetDefaultObj();

	bool EqualEqual_FRH_LootId(struct RallyHereIntegration_RH_LootId& A, struct RallyHereIntegration_RH_LootId& B);
	bool EqualEqual_FRH_LegacyIdToGuid(struct RallyHereIntegration_RH_LegacyIdToGuid& A, struct RallyHereIntegration_RH_LegacyIdToGuid& B);
	bool EqualEqual_FRH_ItemId(struct RallyHereIntegration_RH_ItemId& A, struct RallyHereIntegration_RH_ItemId& B);
};

// 0x40 (0x68 - 0x28)
// Class RallyHereIntegration.RH_PurgeSubsystem
class URH_PurgeSubsystem : public URH_LocalPlayerSubsystemPlugin
{
public:
	uint8                                        Pad_1DDF[0x40];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_PurgeSubsystem* GetDefaultObj();

	struct RallyHereAPI_RHAPI_PurgeResponse GetMyPurgeStatus();
	bool BLUEPRINT_QueryMyPurgeStatus(FDelegateProperty_& Delegate);
	bool BLUEPRINT_PurgeMeImmediately(FDelegateProperty_& Delegate);
	bool BLUEPRINT_EnqueueMeForPurgeWithPurgeTime(const struct CoreUObject_DateTime& PurgeTime, FDelegateProperty_& Delegate);
	bool BLUEPRINT_EnqueueMeForPurge(FDelegateProperty_& Delegate);
	bool BLUEPRINT_DequeueMeForPurge(FDelegateProperty_& Delegate);
};

// 0xC0 (0xE8 - 0x28)
// Class RallyHereIntegration.RH_SessionBrowserCache
class URH_SessionBrowserCache : public URH_SandboxedSubsystemPlugin
{
public:
	uint8                                        Pad_1E97[0x8];                                     // Fixing Size After Last Property  
	TMap<class FString, struct RallyHereAPI_RHAPI_SessionTemplate> Templates;                                         // 0x30(0x50)(Edit, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1E9A[0x18];                                    // Fixing Size After Last Property  
	TMap<class FString, class URH_SessionView*>  Sessions;                                          // 0x98(0x50)(Edit, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URH_SessionBrowserCache* GetDefaultObj();

	bool GetTemplate(const class FString& Type, struct RallyHereAPI_RHAPI_SessionTemplate* Template);
	class URH_SessionView* GetSessionById(const class FString& SessionId);
	class URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem();
	class URH_PlatformSessionSyncer* GetPlatformSyncerByRHSessionId(const class FString& SessionId);
	class URH_PlatformSessionSyncer* GetPlatformSyncerByPlatformSessionId(struct Engine_UniqueNetIdRepl& PlatformSessionId);
	void BLUEPRINT_Search(struct RallyHereIntegration_RH_SessionBrowserSearchParams& Params, FDelegateProperty_ Delegate);
};

// 0x720 (0x748 - 0x28)
// Class RallyHereIntegration.RH_SessionView
class URH_SessionView : public UObject
{
public:
	uint8                                        Pad_2060[0x18];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnSessionUpdatedDelegate;                // 0x40(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2063[0x18];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnSessionNotFoundDelegate;               // 0x68(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2067[0x18];                                    // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            BLUEPRINT_OnSessionMemberStateChangedDelegate;     // 0x90(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2069[0x480];                                   // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_SessionTemplate    Template;                                          // 0x520(0x1F8)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_206A[0x30];                                    // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_SessionView* GetDefaultObj();

	void StopPolling();
	void StartPolling();
	bool IsOnline();
	bool IsOffline();
	bool IsJoined();
	bool IsInQueue();
	bool IsCreatedByMatchmaking();
	struct RallyHereAPI_RHAPI_SessionTemplate GetTemplate();
	class FString GetSessionType();
	int32 GetSessionPlayerCount();
	bool GetSessionPlayer(struct CoreUObject_Guid& PlayerUuid, struct RallyHereAPI_RHAPI_SessionPlayer* OutPlayer);
	TScriptInterface<class IRH_SessionOwnerInterface> GetSessionOwner();
	bool GetSessionLeader(struct RallyHereAPI_RHAPI_SessionPlayer* OutPlayer);
	class FString GetSessionId();
	struct RallyHereAPI_RHAPI_Session GetSessionData();
	float GetPollTimeRemaining();
	bool GetInstanceData(struct RallyHereAPI_RHAPI_InstanceInfo* InstanceInfo);
	bool GetInstanceCustomDataValue(const class FString& Key, class FString* OutValue);
	TMap<class FString, class FString> GetInstanceCustomData();
	class FString GetETag();
	bool GetCustomDataValue(const class FString& Key, class FString* OutValue);
	TMap<class FString, class FString> GetCustomData();
	TMap<class FString, class FString> GetBrowserCustomData();
	void ForcePollForUpdate(bool bClearETag);
	void DeferPolling();
};

// 0x0 (0x748 - 0x748)
// Class RallyHereIntegration.RH_InvitedSession
class URH_InvitedSession : public URH_SessionView
{
public:

	static class UClass* StaticClass();
	static class URH_InvitedSession* GetDefaultObj();

	void BLUEPRINT_Leave(FDelegateProperty_& Delegate);
	void BLUEPRINT_Join(FDelegateProperty_& Delegate);
};

// 0x10 (0x758 - 0x748)
// Class RallyHereIntegration.RH_JoinedSession
class URH_JoinedSession : public URH_SessionView
{
public:
	bool                                         bIsActive;                                         // 0x748(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWatchingPlayers;                                  // 0x749(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_232F[0xE];                                     // Fixing Size Of Struct 

	static class UClass* StaticClass();
	static class URH_JoinedSession* GetDefaultObj();

	void SetWatchingPlayers(bool bWatch);
	bool IsWatchingPlayers();
	bool IsSyncedWithPlatform();
	bool IsBeaconSession();
	bool IsActive();
	struct RallyHereAPI_RHAPI_SessionUpdate GetSessionUpdateInfoDefaults();
	class URH_PlatformSessionSyncer* GetPlatformSyncer();
	struct RallyHereAPI_RHAPI_InstanceInfoUpdate GetInstanceUpdateInfoDefaults();
	class FString GetClientVersionForSession();
	void BLUEPRINT_UpdateSessionInfo(struct RallyHereAPI_RHAPI_SessionUpdate& Update, FDelegateProperty_& Delegate);
	void BLUEPRINT_UpdatePlayerCustomData(struct CoreUObject_Guid& PlayerUuid, TMap<class FString, class FString>& CustomData, FDelegateProperty_& Delegate);
	void BLUEPRINT_UpdateInstanceInfo(struct RallyHereAPI_RHAPI_InstanceInfoUpdate& Update, FDelegateProperty_& Delegate);
	void BLUEPRINT_UpdateBrowserInfo(bool bEnable, TMap<class FString, class FString>& CustomData, FDelegateProperty_& Delegate);
	void BLUEPRINT_StartMatch(FDelegateProperty_& Delegate);
	void BLUEPRINT_SetLeader(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate);
	void BLUEPRINT_RequestInstance(struct RallyHereAPI_RHAPI_InstanceRequest& InstanceRequest, FDelegateProperty_& Delegate);
	void BLUEPRINT_Leave(FDelegateProperty_& Delegate);
	void BLUEPRINT_KickPlayer(struct CoreUObject_Guid& PlayerUuid, FDelegateProperty_& Delegate);
	void BLUEPRINT_InvitePlayer(struct CoreUObject_Guid& PlayerUuid, int32 Team, TMap<class FString, class FString>& CustomData, FDelegateProperty_& Delegate);
	void BLUEPRINT_EndMatch(FDelegateProperty_& Delegate);
	void BLUEPRINT_EndInstance(FDelegateProperty_& Delegate);
	class AOnlineBeaconClient* BLUEPRINT_CreateBeacon(class ULocalPlayer* Player, TSubclassOf<class AOnlineBeaconClient> BeaconClass);
	void BLUEPRINT_ChangePlayerTeam(struct CoreUObject_Guid& PlayerUuid, int32 Team, FDelegateProperty_& Delegate);
};

// 0x0 (0x758 - 0x758)
// Class RallyHereIntegration.RH_OfflineSession
class URH_OfflineSession : public URH_JoinedSession
{
public:

	static class UClass* StaticClass();
	static class URH_OfflineSession* GetDefaultObj();

};

// 0x0 (0x758 - 0x758)
// Class RallyHereIntegration.RH_OnlineSession
class URH_OnlineSession : public URH_JoinedSession
{
public:

	static class UClass* StaticClass();
	static class URH_OnlineSession* GetDefaultObj();

	struct RallyHereAPI_RHAPI_SelfSessionPlayerUpdateRequest GetJoinDetailDefaults(TScriptInterface<class IRH_SessionOwnerInterface> SessionOwner);
	void BLUEPRINT_LeaveQueue(FDelegateProperty_& Delegate);
	void BLUEPRINT_JoinQueueEx(struct RallyHereAPI_RHAPI_QueueJoinRequest& Request, FDelegateProperty_& Delegate);
	void BLUEPRINT_JoinQueue(const class FString& QueueId, TArray<class FString>& MatchmakingTags, FDelegateProperty_& Delegate);
	void BLUEPRINT_JoinByIdEx(const class FString& SessionId, struct RallyHereAPI_RHAPI_SelfSessionPlayerUpdateRequest& JoinDetails, TScriptInterface<class IRH_SessionOwnerInterface> SessionOwner, FDelegateProperty_& Delegate);
	void BLUEPRINT_JoinById(const class FString& SessionId, TScriptInterface<class IRH_SessionOwnerInterface> SessionOwner, FDelegateProperty_& Delegate);
	void BLUEPRINT_CreateOrJoinByType(struct RallyHereAPI_RHAPI_CreateOrJoinRequest& CreateParams, TScriptInterface<class IRH_SessionOwnerInterface> SessionOwner, FDelegateProperty_& Delegate);
};

// 0x0 (0x28 - 0x28)
// Class RallyHereIntegration.RH_SessionOwnerInterface
class IRH_SessionOwnerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IRH_SessionOwnerInterface* GetDefaultObj();

	bool GetTemplate(const class FString& Type, struct RallyHereAPI_RHAPI_SessionTemplate* Template);
	class URH_SessionView* GetSessionById(const class FString& SessionId);
	class URH_PlayerInfoSubsystem* GetPlayerInfoSubsystem();
	class URH_PlatformSessionSyncer* GetPlatformSyncerByRHSessionId(const class FString& SessionId);
	class URH_PlatformSessionSyncer* GetPlatformSyncerByPlatformSessionId(struct Engine_UniqueNetIdRepl& SessionId);
};

// 0x138 (0x160 - 0x28)
// Class RallyHereIntegration.RH_WebRequests
class URH_WebRequests : public UObject
{
public:
	uint8                                        Pad_24C9[0x8];                                     // Fixing Size After Last Property  
	TArray<class FName>                          LoggedAPIs;                                        // 0x30(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	int32                                        TrackedRequestsCountLimit;                         // 0x40(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_24D3[0x114];                                   // Fixing Size After Last Property  
	int32                                        BurstCountThreshold;                               // 0x158(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        BurstTimeThresholdInSeconds;                       // 0x15C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class URH_WebRequests* GetDefaultObj();

};

}


