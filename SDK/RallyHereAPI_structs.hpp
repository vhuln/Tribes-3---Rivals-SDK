#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERHAPI_ClientType : uint8
{
	Unknown                        = 0,
	Win                            = 1,
	Mac                            = 2,
	Xboxone                        = 3,
	PS4                            = 4,
	_Switch                        = 5,
	Android                        = 6,
	Ios                            = 7,
	PS5                            = 8,
	_Linux                         = 9,
	Xsx                            = 10,
	ERHAPI_MAX                     = 11,
};

enum class ERHAPI_CreateInventoryType : uint8
{
	Persistent                     = 0,
	Transient                      = 1,
	ERHAPI_MAX                     = 2,
};

enum class ERHAPI_CrossplayInput : uint8
{
	Any                            = 0,
	Kbm                            = 1,
	Gamepad                        = 2,
	Touch                          = 3,
	ERHAPI_MAX                     = 4,
};

enum class ERHAPI_CrossplayPlatform : uint8
{
	Any                            = 0,
	Xbox                           = 1,
	Playstation                    = 2,
	ERHAPI_MAX                     = 3,
};

enum class ERHAPI_Determiner : uint8
{
	All                            = 0,
	Any                            = 1,
	One                            = 2,
	None                           = 3,
	ERHAPI_MAX                     = 4,
};

enum class ERHAPI_EntitlementErrorCode : uint8
{
	None                           = 0,
	AuthTokenFailure               = 1,
	MissingInformation             = 2,
	FailedToConsume                = 3,
	NoSkuFound                     = 4,
	WrongSkuTypeProvided           = 5,
	DurableAuthorityTypeNotValid   = 6,
	DurableSingleUseAuthorityTypeNotValid = 7,
	ConsumableAuthorityTypeNotValid = 8,
	UnknownSkuTypeProvided         = 9,
	FailedToSubmitOrder            = 10,
	AlreadyAppliedDurableSingleUse = 11,
	QuantityZero                   = 12,
	PreviouslyApplied              = 13,
	ERHAPI_MAX                     = 14,
};

enum class ERHAPI_EntitlementStatus : uint8
{
	Unknown                        = 0,
	Submitted                      = 1,
	Fulfilled                      = 2,
	Failed                         = 3,
	PreviouslyApplied              = 4,
	ERHAPI_MAX                     = 5,
};

enum class ERHAPI_FriendshipStatus : uint8
{
	None                           = 0,
	Friends                        = 1,
	FriendRequestSent              = 2,
	FriendRequestPending           = 3,
	FriendRequestDeclinedByOther   = 4,
	ERHAPI_MAX                     = 5,
};

enum class ERHAPI_GrantType : uint8
{
	Google                         = 0,
	Apple                          = 1,
	Refresh                        = 2,
	Epic                           = 3,
	Xboxlive                       = 4,
	PS4V1                          = 5,
	PS4V3                          = 6,
	PS5V3                          = 7,
	Nintendo                       = 8,
	NintendoSwitch                 = 9,
	Steam                          = 10,
	Basic                          = 11,
	Anon                           = 12,
	ERHAPI_MAX                     = 13,
};

enum class ERHAPI_HostType : uint8
{
	Dedicated                      = 0,
	Player                         = 1,
	ERHAPI_MAX                     = 2,
};

enum class ERHAPI_Input : uint8
{
	Kbm                            = 0,
	Gamepad                        = 1,
	Touch                          = 2,
	ERHAPI_MAX                     = 3,
};

enum class ERHAPI_InstanceJoinableStatus : uint8
{
	Requested                      = 0,
	Allocated                      = 1,
	Pending                        = 2,
	Joinable                       = 3,
	Closed                         = 4,
	ERHAPI_MAX                     = 5,
};

enum class ERHAPI_InstanceSourceProvider : uint8
{
	Player                         = 0,
	Sic                            = 1,
	Multiplay                      = 2,
	ERHAPI_MAX                     = 3,
};

enum class ERHAPI_InventoryBucket : uint8
{
	Free                           = 0,
	Sweat                          = 1,
	None                           = 2,
	Anon                           = 3,
	Amazon                         = 4,
	Steam                          = 5,
	Psn                            = 6,
	XboxLive                       = 7,
	Google                         = 8,
	Twitch                         = 9,
	NintendoSwitch                 = 10,
	Apple                          = 11,
	Nintendo                       = 12,
	Epic                           = 13,
	GooglePlay                     = 14,
	NintendoPpid                   = 15,
	ERHAPI_MAX                     = 16,
};

enum class ERHAPI_InventoryOperation : uint8
{
	Invalid                        = 0,
	Add                            = 1,
	Subtract                       = 2,
	Set                            = 3,
	CheckGreaterThanOrEqual        = 4,
	CheckLessThan                  = 5,
	CheckGreaterThanOrEqualAndSubtract = 6,
	ERHAPI_MAX                     = 7,
};

enum class ERHAPI_InventoryPortal : uint8
{
	Free                           = 0,
	Sweat                          = 1,
	Unknown                        = 2,
	Standard                       = 3,
	Anon                           = 4,
	Kongregate                     = 5,
	Amazon                         = 6,
	Steam                          = 7,
	Tcls                           = 8,
	LevelupLatam                   = 9,
	LevelupBra                     = 10,
	Psn                            = 11,
	XboxLive                       = 12,
	Basic                          = 13,
	Facebook                       = 14,
	Google                         = 15,
	UNUSED14                       = 16,
	RivalsMobile                   = 17,
	Twitch                         = 18,
	PaladinsStrike                 = 19,
	SmiteBlitz                     = 20,
	FacebookSmite                  = 21,
	FacebookPaladins               = 22,
	FacebookHotg                   = 23,
	NintendoSwitch                 = 24,
	Tune                           = 25,
	Apple                          = 26,
	Discord                        = 27,
	Nintendo                       = 28,
	UNUSED27                       = 29,
	Epic                           = 30,
	Forte                          = 31,
	Simulmedia                     = 32,
	Luna                           = 33,
	GooglePlay                     = 34,
	NintendoPpid                   = 35,
	ERHAPI_MAX                     = 36,
};

enum class ERHAPI_InventorySelector : uint8
{
	Invalid                        = 0,
	Own                            = 1,
	Rent                           = 2,
	RentTimeframeLocked            = 3,
	OwnTransient                   = 4,
	InheritEntitlementInventory    = 5,
	ERHAPI_MAX                     = 6,
};

enum class ERHAPI_InventoryType : uint8
{
	Persistent                     = 0,
	Transient                      = 1,
	AlwaysOwned                    = 2,
	ERHAPI_MAX                     = 3,
};

enum class ERHAPI_ItemType : uint8
{
	Unit                           = 0,
	Recipe                         = 1,
	RecipeWithPriceReduction       = 2,
	Entitlement                    = 3,
	DynamicBundle                  = 4,
	ERHAPI_MAX                     = 5,
};

enum class ERHAPI_MMRGroupingMethod : uint8
{
	Worst                          = 0,
	Best                           = 1,
	AverageByVariance              = 2,
	Average                        = 3,
	ERHAPI_MAX                     = 4,
};

enum class ERHAPI_OAuthGrantType : uint8
{
	ClientCredentials              = 0,
	ERHAPI_MAX                     = 1,
};

enum class ERHAPI_OAuthPortal : uint8
{
	Google                         = 0,
	Apple                          = 1,
	Epic                           = 2,
	Xbox                           = 3,
	Psn                            = 4,
	Nintendo                       = 5,
	Steam                          = 6,
	Amazon                         = 7,
	Twitch                         = 8,
	ERHAPI_MAX                     = 9,
};

enum class ERHAPI_OAuthTokenEchangeGrantType : uint8
{
	AuthorizationCode              = 0,
	ERHAPI_MAX                     = 1,
};

enum class ERHAPI_OffsetReset : uint8
{
	Latest                         = 0,
	Earliest                       = 1,
	ERHAPI_MAX                     = 2,
};

enum class ERHAPI_OnlineStatus : uint8
{
	Online                         = 0,
	Away                           = 1,
	Invisible                      = 2,
	Offline                        = 3,
	ERHAPI_MAX                     = 4,
};

enum class ERHAPI_Operation : uint8
{
	Equal                          = 0,
	NotEqual                       = 1,
	LessThan                       = 2,
	LessThanEqual                  = 3,
	GreaterThan                    = 4,
	GreaterThanEqual               = 5,
	ERHAPI_MAX                     = 6,
};

enum class ERHAPI_OpportunityAbortReason : uint8
{
	Cancel                         = 0,
	Other                          = 1,
	ERHAPI_MAX                     = 2,
};

enum class ERHAPI_OpportunityState : uint8
{
	Start                          = 0,
	Complete                       = 1,
	Abort                          = 2,
	ERHAPI_MAX                     = 3,
};

enum class ERHAPI_Platform : uint8
{
	Anon                           = 0,
	Basic                          = 1,
	XboxLive                       = 2,
	Psn                            = 3,
	NintendoNaid                   = 4,
	NintendoSwitch                 = 5,
	NintendoPpid                   = 6,
	Google                         = 7,
	GooglePlay                     = 8,
	Apple                          = 9,
	Epic                           = 10,
	Steam                          = 11,
	Amazon                         = 12,
	Twitch                         = 13,
	ERHAPI_MAX                     = 14,
};

enum class ERHAPI_PlatformID : uint8
{
	Anon                           = 0,
	Amazon                         = 1,
	Steam                          = 2,
	Psn                            = 3,
	XboxLive                       = 4,
	Basic                          = 5,
	Google                         = 6,
	Twitch                         = 7,
	NintendoSwitch                 = 8,
	Apple                          = 9,
	Nintendo                       = 10,
	Epic                           = 11,
	ERHAPI_MAX                     = 12,
};

enum class ERHAPI_PlatformRegion : uint8
{
	Unknown                        = 0,
	Na                             = 1,
	Eu                             = 2,
	ERHAPI_MAX                     = 3,
};

enum class ERHAPI_PlayerOrderDetailType : uint8
{
	Unknown                        = 0,
	InventoryChange                = 1,
	DynamicBundleLti               = 2,
	ClaimPromoCode                 = 3,
	ReturnPromoCode                = 4,
	NewOrder                       = 5,
	ERHAPI_MAX                     = 6,
};

enum class ERHAPI_PlayerOrderEntryResult : uint8
{
	Success                        = 0,
	InternalError                  = 1,
	InvalidEntryType               = 2,
	NotAllowedOnCurrentPortal      = 3,
	LootNotFound                   = 4,
	LootNotActive                  = 5,
	PriceItemNotFound              = 6,
	PriceNotAllowed                = 7,
	DynamicBundleInvalid           = 8,
	TooManyRequests                = 9,
	PriceDoesNotMatch              = 10,
	VendorVersionDoesNotMatch      = 11,
	DynamicBundleLtisDoNotMatch    = 12,
	CannotAffordPrice              = 13,
	CannotAffordCoupon             = 14,
	FailedToSpendPrice             = 15,
	FailedToSpendCoupon            = 16,
	LootNotForSaleWithPriceItem    = 17,
	CouponsDisabled                = 18,
	CouponItemNotFound             = 19,
	CouponItemNotActive            = 20,
	CouponItemNotApplicableForQuantity = 21,
	CouponItemNotApplicableForPriceItem = 22,
	CouponItemNotApplicableForLoot = 23,
	QuantityNotAllowed             = 24,
	PromotionExpired               = 25,
	PromotionNotFound              = 26,
	PromotionNoUsesLeft            = 27,
	PromotionNotAvailable          = 28,
	PromotionClaimedAlready        = 29,
	DynamicBundlesNotAvailable     = 30,
	TransientSingleLootAlreadyApplied = 31,
	LootNotFillableFromClient      = 32,
	PermissionDenied               = 33,
	FailedToFindAnySubLoot         = 34,
	FailedToFillAnySubLoot         = 35,
	CannotMeetLootBlocker          = 36,
	CannotMeetLootRequired         = 37,
	FailedToConsumeLootRequired    = 38,
	FailedToSubmitNewOrder         = 39,
	FailedToModifyInventory        = 40,
	InventoryNotFound              = 41,
	ItemNotFound                   = 42,
	ItemNotActive                  = 43,
	TooManyInvCustomAttributes     = 44,
	AlwaysOwnedInventoryCannotBeModified = 45,
	AvailableUntilIsInPast         = 46,
	Rollback                       = 47,
	NotStarted                     = 48,
	ERHAPI_MAX                     = 49,
};

enum class ERHAPI_PlayerOrderEntryType : uint8
{
	FillLoot                       = 0,
	PurchaseLoot                   = 1,
	PurchaseDynamicBundle          = 2,
	PromotionCode                  = 3,
	FillLootSingleTransient        = 4,
	FillEntitledLoot               = 5,
	CreateNewPersistentInventory   = 6,
	UpdateExistingPersistentInventory = 7,
	CreateNewTransientInventory    = 8,
	UpdateExistingTransientInventory = 9,
	UpdateInventory                = 10,
	ERHAPI_MAX                     = 11,
};

enum class ERHAPI_Portal : uint8
{
	Anon                           = 0,
	Amazon                         = 1,
	Steam                          = 2,
	Psn                            = 3,
	Xboxlive                       = 4,
	Basic                          = 5,
	Google                         = 6,
	Twitch                         = 7,
	NintendoSwitch                 = 8,
	Apple                          = 9,
	Nintendo                       = 10,
	Epic                           = 11,
	NintendoPpid                   = 12,
	ERHAPI_MAX                     = 13,
};

enum class ERHAPI_PortalTokenDetailsGrantType : uint8
{
	PS4V1                          = 0,
	PS4V3                          = 1,
	PS5V3                          = 2,
	ERHAPI_MAX                     = 3,
};

enum class ERHAPI_ProfileJoinMode : uint8
{
	Normal                         = 0,
	Backfill                       = 1,
	CreatedBefore                  = 2,
	ERHAPI_MAX                     = 3,
};

enum class ERHAPI_QuantityType : uint8
{
	Relative                       = 0,
	Absolute                       = 1,
	ERHAPI_MAX                     = 2,
};

enum class ERHAPI_JsonValueType : uint8
{
	None                           = 0,
	Null                           = 1,
	String                         = 2,
	Number                         = 3,
	Boolean                        = 4,
	Array                          = 5,
	Object                         = 6,
	ERHAPI_MAX                     = 7,
};

enum class ERHAPI_RestrictionType : uint8
{
	AccountBan                     = 0,
	AccountLockout                 = 1,
	AccountPendingDeletion         = 2,
	AccountDenyAuth                = 3,
	ERHAPI_MAX                     = 4,
};

enum class ERHAPI_RuleType : uint8
{
	Inventory                      = 0,
	LinkingSize                    = 1,
	ERHAPI_MAX                     = 2,
};

enum class ERHAPI_SessionPlayerStatus : uint8
{
	Leader                         = 0,
	Member                         = 1,
	Invited                        = 2,
	Reserved                       = 3,
	ERHAPI_MAX                     = 4,
};

enum class ERHAPI_SortOrder : uint8
{
	Ascending                      = 0,
	Descending                     = 1,
	ERHAPI_MAX                     = 2,
};

enum class ERHAPI_Source : uint8
{
	Unknown                        = 0,
	WebOrderRepair                 = 1,
	InGame                         = 2,
	WebSite                        = 3,
	NoSale                         = 4,
	Support                        = 5,
	Activity                       = 6,
	Refund                         = 7,
	System                         = 8,
	Rewards                        = 9,
	Esports                        = 10,
	Treasure                       = 11,
	Console                        = 12,
	Odyssey                        = 13,
	Steam                          = 14,
	_Return                        = 15,
	JsonGate                       = 16,
	SendGift                       = 17,
	ReceiveGift                    = 18,
	SteamDlc                       = 19,
	TwitchMilestone                = 20,
	TwitchPrime                    = 21,
	Psn                            = 22,
	Xbox                           = 23,
	PtsGrant                       = 24,
	Instance                       = 25,
	AccountTransfer                = 26,
	Promocode                      = 27,
	TriumphSystem                  = 28,
	LoginGrant                     = 29,
	EomUncapped                    = 30,
	EomCapped                      = 31,
	FacebookDrop                   = 32,
	DatabaseScript                 = 33,
	AccountLinking                 = 34,
	Clan                           = 35,
	Conversion                     = 36,
	Apple                          = 37,
	Google                         = 38,
	GooglePlay                     = 39,
	PortalDurable                  = 40,
	PartnerAchievement             = 41,
	MixerDrop                      = 42,
	Nintendo                       = 43,
	StreamViewingProgress          = 44,
	Discord                        = 45,
	FirstLoginGrant                = 46,
	TwitchFuel                     = 47,
	DiscordDlc                     = 48,
	Netease                        = 49,
	EpicGames                      = 50,
	Forte                          = 51,
	Facebook                       = 52,
	Hirez                          = 53,
	DailyReward                    = 54,
	AddAccountEmailReward          = 55,
	ClientClaim                    = 56,
	Client                         = 57,
	Entitlements                   = 58,
	Amazon                         = 59,
	Simulmedia                     = 60,
	Luna                           = 61,
	ERHAPI_MAX                     = 62,
};

enum class ERHAPI_VendorType : uint8
{
	Recipe                         = 0,
	RandomlySampled                = 1,
	ERHAPI_MAX                     = 2,
};

enum class ERHAPI_XpQuantityTransform : uint8
{
	None                           = 0,
	FromCurrentXpToTargetAdditionalLevelMinXp = 1,
	FromCurrentLevelMinXpToTargetAdditionalLevelMinXp = 2,
	FromZeroToTargetExactLevelMinXp = 3,
	ERHAPI_MAX                     = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct RallyHereAPI.RHAPI_Model
struct RallyHereAPI_RHAPI_Model
{
public:
	uint8                                        Pad_1E20[0x8];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_BlockedPlayer
struct RallyHereAPI_RHAPI_BlockedPlayer : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      BlockedPlayerUuid;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  LastModifiedOn;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RallyHereAPI.RHAPI_JsonValue
struct RallyHereAPI_RHAPI_JsonValue
{
public:
	uint8                                        Pad_1E62[0x10];                                    // Fixing Size Of Struct 
};

// 0xB0 (0xB8 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Notification
struct RallyHereAPI_RHAPI_Notification : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Message;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RhUrl_Optional;                                    // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RhUrl_IsSet;                                       // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E93[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x30(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA4[0x7];                                     // Fixing Size After Last Property  
	class FString                                Etag_Optional;                                     // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Etag_IsSet;                                        // 0x98(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EBB[0x7];                                     // Fixing Size After Last Property  
	class FString                                NotificationId;                                    // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  Created;                                           // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Notifications
struct RallyHereAPI_RHAPI_Notifications : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_Notification> Notifications_Optional;                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Notifications_IsSet;                               // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EEF[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PurgeResponse
struct RallyHereAPI_RHAPI_PurgeResponse : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      PersonId;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  PurgeOn;                                           // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  CreatedOn;                                         // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  LastModifiedOn;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Status;                                            // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SiteSettings
struct RallyHereAPI_RHAPI_SiteSettings : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        SiteId;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SortOrder;                                         // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CustomOnly;                                        // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F74[0x7];                                     // Fixing Size After Last Property  
	class FString                                MessageName_Optional;                              // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MessageName_IsSet;                                 // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F82[0x7];                                     // Fixing Size Of Struct 
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_BrowserSessionInfo
struct RallyHereAPI_RHAPI_BrowserSessionInfo : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                SessionId;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x18(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC2[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PurchasePrice
struct RallyHereAPI_RHAPI_PurchasePrice : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        PriceItemId;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PriceCouponItemId_Optional;                        // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PriceCouponItemId_IsSet;                           // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FEC[0x3];                                     // Fixing Size Of Struct 
};

// 0x158 (0x160 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerOrderEntryCreate
struct RallyHereAPI_RHAPI_PlayerOrderEntryCreate : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_PlayerOrderEntryType       Type;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200C[0x3];                                     // Fixing Size After Last Property  
	int32                                        LootId_Optional;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LootId_IsSet;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2013[0x3];                                     // Fixing Size After Last Property  
	int32                                        Quantity;                                          // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        VendorVersion_Optional;                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VendorVersion_IsSet;                               // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2022[0x7];                                     // Fixing Size After Last Property  
	class FString                                VendorEtag_Optional;                               // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VendorEtag_IsSet;                                  // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_202C[0x7];                                     // Fixing Size After Last Property  
	TArray<int32>                                DynamicBundleLootIds_Optional;                     // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         DynamicBundleLootIds_IsSet;                        // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_203D[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_PurchasePrice      PurchasePrice_Optional;                            // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         PurchasePrice_IsSet;                               // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_204C[0x7];                                     // Fixing Size After Last Property  
	class FString                                ExternalTranId_Optional;                           // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ExternalTranId_IsSet;                              // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2064[0x7];                                     // Fixing Size After Last Property  
	class FString                                ExternalItemSku_Optional;                          // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ExternalItemSku_IsSet;                             // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_InventoryBucket            UseInventoryBucket_Optional;                       // 0xA1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseInventoryBucket_IsSet;                          // 0xA2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_207A[0x5];                                     // Fixing Size After Last Property  
	int64                                        PlayerPortalEventId_Optional;                      // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlayerPortalEventId_IsSet;                         // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2096[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      InventoryId_Optional;                              // 0xB4(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InventoryId_IsSet;                                 // 0xC4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20AD[0x3];                                     // Fixing Size After Last Property  
	int64                                        LegacyInventoryId_Optional;                        // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LegacyInventoryId_IsSet;                           // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20C2[0x3];                                     // Fixing Size After Last Property  
	int32                                        ItemId_Optional;                                   // 0xD4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ItemId_IsSet;                                      // 0xD8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20D0[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  Expires_Optional;                                  // 0xE0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Expires_IsSet;                                     // 0xE8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20D8[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0xF0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x140(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20EF[0x7];                                     // Fixing Size After Last Property  
	class FString                                EntryId_Optional;                                  // 0x148(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EntryId_IsSet;                                     // 0x158(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2102[0x7];                                     // Fixing Size Of Struct 
};

// 0x88 (0x90 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerOrderCreate
struct RallyHereAPI_RHAPI_PlayerOrderCreate : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_Source                     Source_Optional;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Source_IsSet;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2141[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      ClientOrderRefId_Optional;                         // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClientOrderRefId_IsSet;                            // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_InventoryPortal            PortalId_Optional;                                 // 0x1D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PortalId_IsSet;                                    // 0x1E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2165[0x1];                                     // Fixing Size After Last Property  
	class FString                                PortalUserId_Optional;                             // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PortalUserId_IsSet;                                // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2171[0x7];                                     // Fixing Size After Last Property  
	class FString                                InstanceId_Optional;                               // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InstanceId_IsSet;                                  // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_217A[0x7];                                     // Fixing Size After Last Property  
	class FString                                MatchId_Optional;                                  // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MatchId_IsSet;                                     // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsTransaction_Optional;                            // 0x61(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsTransaction_IsSet;                               // 0x62(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_219B[0x5];                                     // Fixing Size After Last Property  
	class FString                                OrderId_Optional;                                  // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OrderId_IsSet;                                     // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A7[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_PlayerOrderEntryCreate> Entries;                                           // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_InventoryRecord
struct RallyHereAPI_RHAPI_InventoryRecord : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      InventoryId;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_InventoryType              Type;                                              // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C9[0x7];                                     // Fixing Size After Last Property  
	int64                                        LegacyInventoryId_Optional;                        // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LegacyInventoryId_IsSet;                           // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_InventoryBucket            Bucket_Optional;                                   // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Bucket_IsSet;                                      // 0x2A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2206[0x1];                                     // Fixing Size After Last Property  
	int32                                        Count;                                             // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  Acquired;                                          // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  Expires_Optional;                                  // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Expires_IsSet;                                     // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_221D[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x48(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x98(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2231[0x7];                                     // Fixing Size Of Struct 
};

// 0x160 (0x168 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerInventoryChange
struct RallyHereAPI_RHAPI_PlayerInventoryChange : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        BeforeItemId_Optional;                             // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BeforeItemId_IsSet;                                // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2260[0x3];                                     // Fixing Size After Last Property  
	int32                                        AfterItemId_Optional;                              // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AfterItemId_IsSet;                                 // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2278[0x3];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_InventoryRecord    Before_Optional;                                   // 0x18(0xA0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Before_IsSet;                                      // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_228B[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_InventoryRecord    After_Optional;                                    // 0xC0(0xA0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         After_IsSet;                                       // 0x160(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2295[0x7];                                     // Fixing Size Of Struct 
};

// 0x218 (0x220 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerOrderDetail
struct RallyHereAPI_RHAPI_PlayerOrderDetail : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_PlayerOrderDetailType      Type;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22C3[0x3];                                     // Fixing Size After Last Property  
	int32                                        LootId_Optional;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LootId_IsSet;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22D4[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_PlayerInventoryChange InvChange_Optional;                                // 0x18(0x168)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         InvChange_IsSet;                                   // 0x180(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22EC[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_PlayerOrderCreate  Order_Optional;                                    // 0x188(0x90)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Order_IsSet;                                       // 0x218(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22FA[0x7];                                     // Fixing Size Of Struct 
};

// 0x170 (0x178 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerOrderEntry
struct RallyHereAPI_RHAPI_PlayerOrderEntry : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_PlayerOrderEntryType       Type;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2330[0x3];                                     // Fixing Size After Last Property  
	int32                                        LootId_Optional;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LootId_IsSet;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_235D[0x3];                                     // Fixing Size After Last Property  
	int32                                        Quantity;                                          // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        VendorVersion_Optional;                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VendorVersion_IsSet;                               // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2373[0x7];                                     // Fixing Size After Last Property  
	class FString                                VendorEtag_Optional;                               // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         VendorEtag_IsSet;                                  // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2395[0x7];                                     // Fixing Size After Last Property  
	TArray<int32>                                DynamicBundleLootIds_Optional;                     // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         DynamicBundleLootIds_IsSet;                        // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23AC[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_PurchasePrice      PurchasePrice_Optional;                            // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         PurchasePrice_IsSet;                               // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C3[0x7];                                     // Fixing Size After Last Property  
	class FString                                ExternalTranId_Optional;                           // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ExternalTranId_IsSet;                              // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23DB[0x7];                                     // Fixing Size After Last Property  
	class FString                                ExternalItemSku_Optional;                          // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ExternalItemSku_IsSet;                             // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_InventoryBucket            UseInventoryBucket_Optional;                       // 0xA1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseInventoryBucket_IsSet;                          // 0xA2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2400[0x5];                                     // Fixing Size After Last Property  
	int64                                        PlayerPortalEventId_Optional;                      // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlayerPortalEventId_IsSet;                         // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_241A[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      InventoryId_Optional;                              // 0xB4(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InventoryId_IsSet;                                 // 0xC4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2441[0x3];                                     // Fixing Size After Last Property  
	int64                                        LegacyInventoryId_Optional;                        // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LegacyInventoryId_IsSet;                           // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2451[0x3];                                     // Fixing Size After Last Property  
	int32                                        ItemId_Optional;                                   // 0xD4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ItemId_IsSet;                                      // 0xD8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2458[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  Expires_Optional;                                  // 0xE0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Expires_IsSet;                                     // 0xE8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2474[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0xF0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x140(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2499[0x7];                                     // Fixing Size After Last Property  
	class FString                                EntryId;                                           // 0x148(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_PlayerOrderEntryResult     Result_Optional;                                   // 0x158(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Result_IsSet;                                      // 0x159(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C0[0x6];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_PlayerOrderDetail> Details_Optional;                                  // 0x160(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Details_IsSet;                                     // 0x170(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24CF[0x7];                                     // Fixing Size Of Struct 
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerOrder
struct RallyHereAPI_RHAPI_PlayerOrder : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_Source                     Source_Optional;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Source_IsSet;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_252B[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      ClientOrderRefId_Optional;                         // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClientOrderRefId_IsSet;                            // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_InventoryPortal            PortalId_Optional;                                 // 0x1D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PortalId_IsSet;                                    // 0x1E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2567[0x1];                                     // Fixing Size After Last Property  
	class FString                                PortalUserId_Optional;                             // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PortalUserId_IsSet;                                // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2586[0x7];                                     // Fixing Size After Last Property  
	class FString                                InstanceId_Optional;                               // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InstanceId_IsSet;                                  // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2596[0x7];                                     // Fixing Size After Last Property  
	class FString                                MatchId_Optional;                                  // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MatchId_IsSet;                                     // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsTransaction_Optional;                            // 0x61(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsTransaction_IsSet;                               // 0x62(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25AF[0x5];                                     // Fixing Size After Last Property  
	class FString                                OrderId;                                           // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  CreatedTime;                                       // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct RallyHereAPI_RHAPI_PlayerOrderEntry> Entries;                                           // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_RankData
struct RallyHereAPI_RHAPI_RankData : public RallyHereAPI_RHAPI_Model
{
public:
	float                                        Mu;                                                // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sigma;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x10(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25F1[0x7];                                     // Fixing Size Of Struct 
};

// 0x80 (0x88 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerRankResponse
struct RallyHereAPI_RHAPI_PlayerRankResponse : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_RankData           Rank;                                              // 0x18(0x68)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        RankId;                                            // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2638[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SettingData
struct RallyHereAPI_RHAPI_SettingData : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        V;                                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2665[0x4];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_JsonValue          Value_Optional;                                    // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Value_IsSet;                                       // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_267B[0x7];                                     // Fixing Size Of Struct 
};

// 0x120 (0x128 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_AdditionalJoinParams
struct RallyHereAPI_RHAPI_AdditionalJoinParams : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, float>                   DoubleArgs_Optional;                               // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         DoubleArgs_IsSet;                                  // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26B1[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           StringArgs_Optional;                               // 0x60(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         StringArgs_IsSet;                                  // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26C6[0x7];                                     // Fixing Size After Last Property  
	TArray<class FString>                        Tags_Optional;                                     // 0xB8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Tags_IsSet;                                        // 0xC8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26E4[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           Extensions_Optional;                               // 0xD0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Extensions_IsSet;                                  // 0x120(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26F7[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_AdOpportunity
struct RallyHereAPI_RHAPI_AdOpportunity : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                AdUrl;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seconds;                                           // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2755[0x4];                                     // Fixing Size After Last Property  
	class FString                                OpportunityId;                                     // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_AdOpportunities
struct RallyHereAPI_RHAPI_AdOpportunities : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_AdOpportunity> Opportunities;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_AgreementMessage
struct RallyHereAPI_RHAPI_AgreementMessage : public RallyHereAPI_RHAPI_Model
{
public:
	bool                                         AuthSuccess_Optional;                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AuthSuccess_IsSet;                                 // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27AD[0x6];                                     // Fixing Size After Last Property  
	class FString                                ErrorCode;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedsEula_Optional;                                // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedsEula_IsSet;                                   // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedsTos_Optional;                                 // 0x32(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedsTos_IsSet;                                    // 0x33(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedsPrivacyPolicy_Optional;                       // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedsPrivacyPolicy_IsSet;                          // 0x35(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2810[0x2];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_AppSetting
struct RallyHereAPI_RHAPI_AppSetting : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Key;                                               // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Notes_Optional;                                    // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Notes_IsSet;                                       // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2853[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PageMeta
struct RallyHereAPI_RHAPI_PageMeta : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        Page;                                              // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Limit;                                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Total;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A7[0x4];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_BlockedList
struct RallyHereAPI_RHAPI_BlockedList : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct RallyHereAPI_RHAPI_BlockedPlayer> Blocked;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_PageMeta           Page;                                              // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_BlockedPlayerV1
struct RallyHereAPI_RHAPI_BlockedPlayerV1 : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        BlockedPlayerId_Optional;                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BlockedPlayerId_IsSet;                             // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_293C[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      BlockedPlayerUuid;                                 // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  LastModifiedOn;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_BlockedListV1
struct RallyHereAPI_RHAPI_BlockedListV1 : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        PlayerId;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2976[0x4];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_BlockedPlayerV1> Blocked;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_PageMeta           Page;                                              // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_BodyBeginNewSession
struct RallyHereAPI_RHAPI_BodyBeginNewSession : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                CountryCode;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeviceId_Optional;                                 // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DeviceId_IsSet;                                    // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_299C[0x7];                                     // Fixing Size Of Struct 
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_BodyFindOpportunities
struct RallyHereAPI_RHAPI_BodyFindOpportunities : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        ScreenPixelWidth_Optional;                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ScreenPixelWidth_IsSet;                            // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29EE[0x3];                                     // Fixing Size After Last Property  
	int32                                        ScreenPixelHeight_Optional;                        // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ScreenPixelHeight_IsSet;                           // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29FF[0x3];                                     // Fixing Size After Last Property  
	class FString                                CountryCode;                                       // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LanguageCode;                                      // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DeviceId_Optional;                                 // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DeviceId_IsSet;                                    // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A25[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_BodyUpdateOpportunityById
struct RallyHereAPI_RHAPI_BodyUpdateOpportunityById : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_OpportunityState           State;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_OpportunityAbortReason     AbortReason_Optional;                              // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AbortReason_IsSet;                                 // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A66[0x1];                                     // Fixing Size After Last Property  
	int32                                        AbortSeconds_Optional;                             // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AbortSeconds_IsSet;                                // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A6E[0x7];                                     // Fixing Size Of Struct 
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_BrowserInfo
struct RallyHereAPI_RHAPI_BrowserInfo : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A99[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_BrowserResponse
struct RallyHereAPI_RHAPI_BrowserResponse : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        Cursor;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AAD[0x4];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_BrowserSessionInfo> BrowserSessions;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_CacheInfo
struct RallyHereAPI_RHAPI_CacheInfo : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Etag;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StrRep_Optional;                                   // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StrRep_IsSet;                                      // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AD7[0x7];                                     // Fixing Size Of Struct 
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_XpTable
struct RallyHereAPI_RHAPI_XpTable : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2AED[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, int32>                   XpEntries_Optional;                                // 0x60(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         XpEntries_IsSet;                                   // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B0C[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0xB8(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0xE8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B1D[0x7];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_XpTables
struct RallyHereAPI_RHAPI_XpTables : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, struct RallyHereAPI_RHAPI_XpTable> XpTables_Optional;                                 // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         XpTables_IsSet;                                    // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B79[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0x60(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B8C[0x7];                                     // Fixing Size Of Struct 
};

// 0x110 (0x118 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Item
struct RallyHereAPI_RHAPI_Item : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_ItemType                   Type_Optional;                                     // 0x59(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Type_IsSet;                                        // 0x5A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BC6[0x1];                                     // Fixing Size After Last Property  
	int32                                        LegacyType_Optional;                               // 0x5C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LegacyType_IsSet;                                  // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BD6[0x3];                                     // Fixing Size After Last Property  
	int32                                        LegacySubtype_Optional;                            // 0x64(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LegacySubtype_IsSet;                               // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BEB[0x3];                                     // Fixing Size After Last Property  
	int32                                        RefItemId_Optional;                                // 0x6C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RefItemId_IsSet;                                   // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BFC[0x3];                                     // Fixing Size After Last Property  
	int32                                        AvailabilityFlags_Optional;                        // 0x74(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AvailabilityFlags_IsSet;                           // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C0E[0x3];                                     // Fixing Size After Last Property  
	int32                                        EntitledLootId_Optional;                           // 0x7C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EntitledLootId_IsSet;                              // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C12[0x3];                                     // Fixing Size After Last Property  
	int32                                        LevelXpTableId_Optional;                           // 0x84(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LevelXpTableId_IsSet;                              // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C17[0x3];                                     // Fixing Size After Last Property  
	int32                                        LevelVendorId_Optional;                            // 0x8C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LevelVendorId_IsSet;                               // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C26[0x3];                                     // Fixing Size After Last Property  
	int32                                        CouponDiscountCurrencyItemId_Optional;             // 0x94(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CouponDiscountCurrencyItemId_IsSet;                // 0x98(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C34[0x3];                                     // Fixing Size After Last Property  
	float                                        CouponDiscountPercentage_Optional;                 // 0x9C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CouponDiscountPercentage_IsSet;                    // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CouponConsumeOnUse_Optional;                       // 0xA1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CouponConsumeOnUse_IsSet;                          // 0xA2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C51[0x1];                                     // Fixing Size After Last Property  
	int32                                        ItemPortalUseRulesetId_Optional;                   // 0xA4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ItemPortalUseRulesetId_IsSet;                      // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C60[0x7];                                     // Fixing Size After Last Property  
	class FString                                InventoryBucketUseRuleSetId_Optional;              // 0xB0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InventoryBucketUseRuleSetId_IsSet;                 // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C67[0x7];                                     // Fixing Size After Last Property  
	TArray<int32>                                CouponDiscountLoot_Optional;                       // 0xC8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         CouponDiscountLoot_IsSet;                          // 0xD8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C82[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0xE0(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0x110(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C9F[0x7];                                     // Fixing Size Of Struct 
};

// 0x260 (0x268 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Loot
struct RallyHereAPI_RHAPI_Loot : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CC6[0x3];                                     // Fixing Size After Last Property  
	int32                                        LootId;                                            // 0x5C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VendorId;                                          // 0x60(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemId_Optional;                                   // 0x64(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ItemId_IsSet;                                      // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CD7[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_Item               Item_Optional;                                     // 0x70(0x118)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Item_IsSet;                                        // 0x188(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CEF[0x3];                                     // Fixing Size After Last Property  
	int32                                        SubVendorId_Optional;                              // 0x18C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SubVendorId_IsSet;                                 // 0x190(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D0B[0x3];                                     // Fixing Size After Last Property  
	int32                                        Quantity_Optional;                                 // 0x194(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Quantity_IsSet;                                    // 0x198(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_InventorySelector          InventorySelectorType_Optional;                    // 0x199(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InventorySelectorType_IsSet;                       // 0x19A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_InventoryOperation         InventoryOperation_Optional;                       // 0x19B(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InventoryOperation_IsSet;                          // 0x19C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Active_Optional;                                   // 0x19D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Active_IsSet;                                      // 0x19E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D46[0x1];                                     // Fixing Size After Last Property  
	int32                                        SortOrder_Optional;                                // 0x1A0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SortOrder_IsSet;                                   // 0x1A4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D55[0x3];                                     // Fixing Size After Last Property  
	int32                                        DropWeight_Optional;                               // 0x1A8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DropWeight_IsSet;                                  // 0x1AC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FillInNewOrder_Optional;                           // 0x1AD(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FillInNewOrder_IsSet;                              // 0x1AE(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowPartialBundles_Optional;                      // 0x1AF(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowPartialBundles_IsSet;                         // 0x1B0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D85[0x3];                                     // Fixing Size After Last Property  
	int32                                        RequiredItemId_Optional;                           // 0x1B4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequiredItemId_IsSet;                              // 0x1B8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DAA[0x3];                                     // Fixing Size After Last Property  
	int32                                        RequiredItemCount_Optional;                        // 0x1BC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequiredItemCount_IsSet;                           // 0x1C0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DB9[0x3];                                     // Fixing Size After Last Property  
	int32                                        StackLimit_Optional;                               // 0x1C4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StackLimit_IsSet;                                  // 0x1C8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DC1[0x3];                                     // Fixing Size After Last Property  
	int32                                        UiHint_Optional;                                   // 0x1CC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UiHint_IsSet;                                      // 0x1D0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DD1[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  EffectiveFrom_Optional;                            // 0x1D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EffectiveFrom_IsSet;                               // 0x1E0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_QuantityType               QuantityType_Optional;                             // 0x1E1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         QuantityType_IsSet;                                // 0x1E2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DF5[0x1];                                     // Fixing Size After Last Property  
	int32                                        QuantityMultInventoryItemId_Optional;              // 0x1E4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         QuantityMultInventoryItemId_IsSet;                 // 0x1E8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsClaimableByClient_Optional;                      // 0x1E9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsClaimableByClient_IsSet;                         // 0x1EA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E28[0x1];                                     // Fixing Size After Last Property  
	int32                                        TimeFrameId_Optional;                              // 0x1EC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TimeFrameId_IsSet;                                 // 0x1F0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_InventoryBucket            UseInventoryBucket_Optional;                       // 0x1F1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseInventoryBucket_IsSet;                          // 0x1F2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_XpQuantityTransform        XpQuantityTransformType_Optional;                  // 0x1F3(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         XpQuantityTransformType_IsSet;                     // 0x1F4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E88[0x3];                                     // Fixing Size After Last Property  
	class FString                                CurrentPricePointGuid_Optional;                    // 0x1F8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CurrentPricePointGuid_IsSet;                       // 0x208(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EA4[0x7];                                     // Fixing Size After Last Property  
	class FString                                PreSalePricePointGuid_Optional;                    // 0x210(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PreSalePricePointGuid_IsSet;                       // 0x220(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EB6[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0x228(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0x258(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EC8[0x3];                                     // Fixing Size After Last Property  
	int32                                        HardQuantityMaximum_Optional;                      // 0x25C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HardQuantityMaximum_IsSet;                         // 0x260(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2ED4[0x7];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Loots
struct RallyHereAPI_RHAPI_Loots : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, struct RallyHereAPI_RHAPI_Loot> Loot_Optional;                                     // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Loot_IsSet;                                        // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F13[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0x60(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F30[0x7];                                     // Fixing Size Of Struct 
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PortalUseRuleset
struct RallyHereAPI_RHAPI_PortalUseRuleset : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F7A[0x57];                                    // Fixing Size After Last Property  
	bool                                         Rules_IsSet;                                       // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F84[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0xB8(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0xE8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F94[0x7];                                     // Fixing Size Of Struct 
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PortalUseRulesets
struct RallyHereAPI_RHAPI_PortalUseRulesets : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FC8[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, struct RallyHereAPI_RHAPI_PortalUseRuleset> RuleSets_Optional;                                 // 0x60(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         RuleSets_IsSet;                                    // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FEC[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0xB8(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0xE8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FFA[0x7];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Items
struct RallyHereAPI_RHAPI_Items : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, struct RallyHereAPI_RHAPI_Item> Items_Optional;                                    // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Items_IsSet;                                       // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3035[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0x60(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_304B[0x7];                                     // Fixing Size Of Struct 
};

// 0xE8 (0xF0 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_InventoryBucketUseRuleSet
struct RallyHereAPI_RHAPI_InventoryBucketUseRuleSet : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30C2[0x57];                                    // Fixing Size After Last Property  
	bool                                         Rules_IsSet;                                       // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30D4[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0xB8(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0xE8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30FA[0x7];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_InventoryBucketUseRuleSets
struct RallyHereAPI_RHAPI_InventoryBucketUseRuleSets : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, struct RallyHereAPI_RHAPI_InventoryBucketUseRuleSet> RuleSets_Optional;                                 // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         RuleSets_IsSet;                                    // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3165[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0x60(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3180[0x7];                                     // Fixing Size Of Struct 
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Vendor
struct RallyHereAPI_RHAPI_Vendor : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_VendorType                 Type_Optional;                                     // 0x59(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Type_IsSet;                                        // 0x5A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31CA[0x1];                                     // Fixing Size After Last Property  
	int32                                        LegacyType_Optional;                               // 0x5C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LegacyType_IsSet;                                  // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31F9[0x3];                                     // Fixing Size After Last Property  
	int32                                        LegacyConfigVersion_Optional;                      // 0x64(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LegacyConfigVersion_IsSet;                         // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3211[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, struct RallyHereAPI_RHAPI_Loot> Loot_Optional;                                     // 0x70(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Loot_IsSet;                                        // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3235[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0xC8(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0xF8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3244[0x7];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Vendors
struct RallyHereAPI_RHAPI_Vendors : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, struct RallyHereAPI_RHAPI_Vendor> Vendors_Optional;                                  // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Vendors_IsSet;                                     // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32A1[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0x60(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32B9[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PriceBreakpoint
struct RallyHereAPI_RHAPI_PriceBreakpoint : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        PriceItemId;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3334[0x4];                                     // Fixing Size Of Struct 
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PricePoint
struct RallyHereAPI_RHAPI_PricePoint : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_336F[0x7];                                     // Fixing Size After Last Property  
	class FString                                Name_Optional;                                     // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Name_IsSet;                                        // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StrictFlag_Optional;                               // 0x71(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StrictFlag_IsSet;                                  // 0x72(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CapFlag_Optional;                                  // 0x73(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CapFlag_IsSet;                                     // 0x74(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33D5[0x3];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_PriceBreakpoint> CurrentBreakpoints_Optional;                       // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         CurrentBreakpoints_IsSet;                          // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_33E7[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_PriceBreakpoint> PreSaleBreakpoints_Optional;                       // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         PreSaleBreakpoints_IsSet;                          // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_341F[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0xA8(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0xD8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3436[0x7];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PricePoints
struct RallyHereAPI_RHAPI_PricePoints : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, struct RallyHereAPI_RHAPI_PricePoint> PricePoints_Optional;                              // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         PricePoints_IsSet;                                 // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_347F[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0x60(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34AB[0x7];                                     // Fixing Size Of Struct 
};

// 0x78 (0x80 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_TimeFrame
struct RallyHereAPI_RHAPI_TimeFrame : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Name_Optional;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Name_IsSet;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Active_Optional;                                   // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Active_IsSet;                                      // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3502[0x1];                                     // Fixing Size After Last Property  
	int32                                        Episode_Optional;                                  // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Episode_IsSet;                                     // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3521[0x3];                                     // Fixing Size After Last Property  
	int32                                        EpisodeType_Optional;                              // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EpisodeType_IsSet;                                 // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_352A[0x3];                                     // Fixing Size After Last Property  
	int32                                        HourInterval_Optional;                             // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HourInterval_IsSet;                                // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3538[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  Start;                                             // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  End;                                               // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0x48(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3559[0x7];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_TimeFrames
struct RallyHereAPI_RHAPI_TimeFrames : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, struct RallyHereAPI_RHAPI_TimeFrame> TimeFrames_Optional;                               // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         TimeFrames_IsSet;                                  // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3588[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0x60(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3592[0x7];                                     // Fixing Size Of Struct 
};

// 0x590 (0x598 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Catalog
struct RallyHereAPI_RHAPI_Catalog : public RallyHereAPI_RHAPI_Model
{
public:
	struct RallyHereAPI_RHAPI_XpTables           XpTables_Optional;                                 // 0x8(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         XpTables_IsSet;                                    // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_359C[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_PortalUseRulesets  PortalUseRulesets_Optional;                        // 0xA8(0xF0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         PortalUseRulesets_IsSet;                           // 0x198(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35A8[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_InventoryBucketUseRuleSets InventoryBucketUseRuleSets_Optional;               // 0x1A0(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         InventoryBucketUseRuleSets_IsSet;                  // 0x238(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35BA[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_Vendors            Vendors_Optional;                                  // 0x240(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Vendors_IsSet;                                     // 0x2D8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35CB[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_Loots              Loot_Optional;                                     // 0x2E0(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Loot_IsSet;                                        // 0x378(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35DF[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_Items              Items_Optional;                                    // 0x380(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Items_IsSet;                                       // 0x418(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35FA[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_PricePoints        PricePoints_Optional;                              // 0x420(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         PricePoints_IsSet;                                 // 0x4B8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35FC[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_TimeFrames         TimeFrames_Optional;                               // 0x4C0(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         TimeFrames_IsSet;                                  // 0x558(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3603[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0x560(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0x590(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3610[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_ClaimKeyRequest
struct RallyHereAPI_RHAPI_ClaimKeyRequest : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                ExternalKeyType_Optional;                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ExternalKeyType_IsSet;                             // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3643[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_ClientSettings
struct RallyHereAPI_RHAPI_ClientSettings : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_PlatformID                 PlatformId_Optional;                               // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlatformId_IsSet;                                  // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Platform                   Platform_Optional;                                 // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Platform_IsSet;                                    // 0xB(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Input                      Input;                                             // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3698[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_ClientVisibleSettings
struct RallyHereAPI_RHAPI_ClientVisibleSettings : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        SelfPingIntervalSeconds_Optional;                  // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelfPingIntervalSeconds_IsSet;                     // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36AE[0x3];                                     // Fixing Size After Last Property  
	int32                                        LastSeenAgeConsideredOfflineSeconds_Optional;      // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastSeenAgeConsideredOfflineSeconds_IsSet;         // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36CF[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_ConnectionInfo
struct RallyHereAPI_RHAPI_ConnectionInfo : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Ip;                                                // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_CreateInventoryRequest
struct RallyHereAPI_RHAPI_CreateInventoryRequest : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_InventoryBucket            Bucket_Optional;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Bucket_IsSet;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3728[0x2];                                     // Fixing Size After Last Property  
	int32                                        Count_Optional;                                    // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Count_IsSet;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3740[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  Expires_Optional;                                  // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Expires_IsSet;                                     // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3747[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x28(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3759[0x3];                                     // Fixing Size After Last Property  
	int32                                        ItemId;                                            // 0x7C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_CreateInventoryType        Type_Optional;                                     // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Type_IsSet;                                        // 0x81(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3775[0x6];                                     // Fixing Size Of Struct 
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_CreateInventoryRequests
struct RallyHereAPI_RHAPI_CreateInventoryRequests : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_Source                     Source_Optional;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Source_IsSet;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C3[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      ClientOrderRefId_Optional;                         // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClientOrderRefId_IsSet;                            // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D1[0x3];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_CreateInventoryRequest> Inventory;                                         // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_CrossplayPreferences
struct RallyHereAPI_RHAPI_CrossplayPreferences : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_CrossplayPlatform          PermittedPlatform;                                 // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_CrossplayInput             PermittedInput;                                    // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37F7[0x6];                                     // Fixing Size Of Struct 
};

// 0x60 (0x68 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_CreateOrJoinRequest
struct RallyHereAPI_RHAPI_CreateOrJoinRequest : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                ClientVersion;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_ClientSettings     ClientSettings;                                    // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_CrossplayPreferences CrossplayPreferences_Optional;                     // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CrossplayPreferences_IsSet;                        // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_383B[0x7];                                     // Fixing Size After Last Property  
	class FString                                SessionType;                                       // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RegionId_Optional;                                 // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RegionId_IsSet;                                    // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3866[0x7];                                     // Fixing Size Of Struct 
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_DiscoveryResponse
struct RallyHereAPI_RHAPI_DiscoveryResponse : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<class FString>                        Addresses;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ServerStatus_Optional;                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ServerStatus_IsSet;                                // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_389A[0x7];                                     // Fixing Size After Last Property  
	class FString                                CommandLineArgs_Optional;                          // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CommandLineArgs_IsSet;                             // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38AF[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_FriendRelationship
struct RallyHereAPI_RHAPI_FriendRelationship : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      FriendsPlayerUuid;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_FriendshipStatus           Status;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38F0[0x7];                                     // Fixing Size After Last Property  
	class FString                                Notes_Optional;                                    // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Notes_IsSet;                                       // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3909[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  LastModifiedOn;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_FriendRelationshipV1
struct RallyHereAPI_RHAPI_FriendRelationshipV1 : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      FriendsPlayerUuid;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FriendsPlayerId_Optional;                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FriendsPlayerId_IsSet;                             // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_FriendshipStatus           Status;                                            // 0x1D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394F[0x2];                                     // Fixing Size After Last Property  
	class FString                                Notes_Optional;                                    // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Notes_IsSet;                                       // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3987[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  LastModifiedOn;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Friends
struct RallyHereAPI_RHAPI_Friends : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct CoreUObject_Guid>              Friends;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_FriendsApiConfig
struct RallyHereAPI_RHAPI_FriendsApiConfig : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        FriendLimit_Optional;                              // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FriendLimit_IsSet;                                 // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A36[0x3];                                     // Fixing Size After Last Property  
	int32                                        BlockLimit_Optional;                               // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BlockLimit_IsSet;                                  // 0x14(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A38[0x3];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_FriendsList
struct RallyHereAPI_RHAPI_FriendsList : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct RallyHereAPI_RHAPI_FriendRelationship> Friends;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_PageMeta           Page;                                              // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_FriendsListV1
struct RallyHereAPI_RHAPI_FriendsListV1 : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerId;                                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A55[0x4];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_FriendRelationshipV1> Friends;                                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_PageMeta           Page;                                              // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_FriendsV1
struct RallyHereAPI_RHAPI_FriendsV1 : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<int32>                                Friends;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_HTTPAuthorizationCredentials
struct RallyHereAPI_RHAPI_HTTPAuthorizationCredentials : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Scheme;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Credentials;                                       // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_LocationInner
struct RallyHereAPI_RHAPI_LocationInner : public RallyHereAPI_RHAPI_Model
{
public:
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_ValidationError
struct RallyHereAPI_RHAPI_ValidationError : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_LocationInner> Loc;                                               // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Msg;                                               // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Type;                                              // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_HTTPValidationError
struct RallyHereAPI_RHAPI_HTTPValidationError : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_ValidationError> Detail_Optional;                                   // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Detail_IsSet;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ABA[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_HzApiErrorModel
struct RallyHereAPI_RHAPI_HzApiErrorModel : public RallyHereAPI_RHAPI_Model
{
public:
	bool                                         AuthSuccess_Optional;                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AuthSuccess_IsSet;                                 // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD2[0x6];                                     // Fixing Size After Last Property  
	class FString                                ErrorCode;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_InstanceFubar
struct RallyHereAPI_RHAPI_InstanceFubar : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                InstanceId;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Error;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Region;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MatchmakingProfileId_Optional;                     // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MatchmakingProfileId_IsSet;                        // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_InstanceSourceProvider     InstanceSourceProvider_Optional;                   // 0x49(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InstanceSourceProvider_IsSet;                      // 0x4A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B04[0x5];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_InstanceStartupParams
struct RallyHereAPI_RHAPI_InstanceStartupParams : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Map;                                               // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Mode_Optional;                                     // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Mode_IsSet;                                        // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1A[0x7];                                     // Fixing Size After Last Property  
	class FString                                MiscParams;                                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x40(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1D[0x7];                                     // Fixing Size Of Struct 
};

// 0x78 (0x80 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_JoinParams
struct RallyHereAPI_RHAPI_JoinParams : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                PublicConnStr;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PrivateConnStr;                                    // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x28(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B21[0x7];                                     // Fixing Size Of Struct 
};

// 0x218 (0x220 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_InstanceInfo
struct RallyHereAPI_RHAPI_InstanceInfo : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                AllocationId_Optional;                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllocationId_IsSet;                                // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B3B[0x7];                                     // Fixing Size After Last Property  
	class FString                                InstanceId_Optional;                               // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InstanceId_IsSet;                                  // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_HostType                   HostType;                                          // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B4A[0x2];                                     // Fixing Size After Last Property  
	int32                                        HostPlayerId_Optional;                             // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HostPlayerId_IsSet;                                // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B58[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      HostPlayerUuid_Optional;                           // 0x3C(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HostPlayerUuid_IsSet;                              // 0x4C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B61[0x3];                                     // Fixing Size After Last Property  
	class FString                                HostDedicatedProcessId_Optional;                   // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HostDedicatedProcessId_IsSet;                      // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B6F[0x7];                                     // Fixing Size After Last Property  
	class FString                                HostDedicatedServerId_Optional;                    // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HostDedicatedServerId_IsSet;                       // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_InstanceJoinableStatus     JoinStatus;                                        // 0x79(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B7D[0x6];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_JoinParams         JoinParams_Optional;                               // 0x80(0x80)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         JoinParams_IsSet;                                  // 0x100(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B87[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_InstanceStartupParams InstanceStartupParams_Optional;                    // 0x108(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         InstanceStartupParams_IsSet;                       // 0x1A0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B90[0x7];                                     // Fixing Size After Last Property  
	class FString                                Version_Optional;                                  // 0x1A8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Version_IsSet;                                     // 0x1B8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B9D[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  Created;                                           // 0x1C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x1C8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x218(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BAE[0x7];                                     // Fixing Size Of Struct 
};

// 0x110 (0x118 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_InstanceInfoUpdate
struct RallyHereAPI_RHAPI_InstanceInfoUpdate : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                AllocationId_Optional;                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllocationId_IsSet;                                // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_InstanceJoinableStatus     JoinStatus_Optional;                               // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         JoinStatus_IsSet;                                  // 0x1A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD2[0x5];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_JoinParams         JoinParams_Optional;                               // 0x20(0x80)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         JoinParams_IsSet;                                  // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BD9[0x7];                                     // Fixing Size After Last Property  
	class FString                                Version_Optional;                                  // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Version_IsSet;                                     // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BDD[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0xC0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x110(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BDE[0x7];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MapConfig
struct RallyHereAPI_RHAPI_MapConfig : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        MapGameId_Optional;                                // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MapGameId_IsSet;                                   // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF6[0x3];                                     // Fixing Size After Last Property  
	class FString                                MapName;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Mode_Optional;                                     // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Mode_IsSet;                                        // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BF7[0x3];                                     // Fixing Size After Last Property  
	float                                        SelectionChance_Optional;                          // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectionChance_IsSet;                             // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BFA[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x40(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C00[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MapSelectionList
struct RallyHereAPI_RHAPI_MapSelectionList : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                MapSelectionListId;                                // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct RallyHereAPI_RHAPI_MapConfig>  Maps;                                              // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_InstanceLaunchTemplate
struct RallyHereAPI_RHAPI_InstanceLaunchTemplate : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      InstanceLaunchTemplateId;                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_MapSelectionList   MapSelectionList;                                  // 0x18(0x28)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ERHAPI_HostType                   DefaultHostType;                                   // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C11[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x48(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x98(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C15[0x7];                                     // Fixing Size Of Struct 
};

// 0x120 (0x128 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_InstanceRequest
struct RallyHereAPI_RHAPI_InstanceRequest : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                InstanceId_Optional;                               // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InstanceId_IsSet;                                  // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C21[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_InstanceStartupParams InstanceStartupParams_Optional;                    // 0x20(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         InstanceStartupParams_IsSet;                       // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_HostType                   HostType;                                          // 0xB9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C2A[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      HostPlayerUuid_Optional;                           // 0xBC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HostPlayerUuid_IsSet;                              // 0xCC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C2E[0x3];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0xD0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x120(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C33[0x7];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MapConfigV2
struct RallyHereAPI_RHAPI_MapConfigV2 : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                MapId;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MapName;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Mode_Optional;                                     // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Mode_IsSet;                                        // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C42[0x3];                                     // Fixing Size After Last Property  
	float                                        MapWeight;                                         // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x40(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C44[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MapSelectionListV2
struct RallyHereAPI_RHAPI_MapSelectionListV2 : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                MapSelectionListId;                                // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct RallyHereAPI_RHAPI_MapConfigV2> Maps;                                              // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_InstanceRequestTemplate
struct RallyHereAPI_RHAPI_InstanceRequestTemplate : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      InstanceRequestTemplateId;                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_MapSelectionListV2 MapSelectionList;                                  // 0x18(0x28)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ERHAPI_HostType                   DefaultHostType;                                   // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C4F[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x48(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x98(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C51[0x7];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_ItemInventory
struct RallyHereAPI_RHAPI_ItemInventory : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, struct RallyHereAPI_RHAPI_InventoryRecord> Records_Optional;                                  // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Records_IsSet;                                     // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C58[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0x60(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C5B[0x7];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Inventory
struct RallyHereAPI_RHAPI_Inventory : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, struct RallyHereAPI_RHAPI_ItemInventory> Items_Optional;                                    // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Items_IsSet;                                       // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C6B[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CacheInfo          CacheInfo_Optional;                                // 0x60(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CacheInfo_IsSet;                                   // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C6F[0x7];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA8 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_InventoryContextResponse
struct RallyHereAPI_RHAPI_InventoryContextResponse : public RallyHereAPI_RHAPI_Model
{
public:
	struct RallyHereAPI_RHAPI_Inventory          Inventory_Optional;                                // 0x8(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Inventory_IsSet;                                   // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C7B[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_InventoryPageMeta
struct RallyHereAPI_RHAPI_InventoryPageMeta : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_DateTime                  StartingPosition_Optional;                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StartingPosition_IsSet;                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C86[0x7];                                     // Fixing Size After Last Property  
	class FString                                Cursor_Optional;                                   // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Cursor_IsSet;                                      // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_SortOrder                  Sort_Optional;                                     // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Sort_IsSet;                                        // 0x2A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C8A[0x1];                                     // Fixing Size After Last Property  
	int32                                        Limit_Optional;                                    // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Limit_IsSet;                                       // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C8D[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_InventorySession
struct RallyHereAPI_RHAPI_InventorySession : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                SessionId;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Platform                   SessionPlatform_Optional;                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SessionPlatform_IsSet;                             // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA1[0x6];                                     // Fixing Size After Last Property  
	TArray<int32>                                AppliedDurableLoot_Optional;                       // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         AppliedDurableLoot_IsSet;                          // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA2[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_InventorySessionCreateRequest
struct RallyHereAPI_RHAPI_InventorySessionCreateRequest : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_Platform                   SessionPlatform_Optional;                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SessionPlatform_IsSet;                             // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CAE[0x6];                                     // Fixing Size Of Struct 
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_InventorySessionCreateResponse
struct RallyHereAPI_RHAPI_InventorySessionCreateResponse : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                SessionId;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Platform                   SessionPlatform_Optional;                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SessionPlatform_IsSet;                             // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC9[0x6];                                     // Fixing Size After Last Property  
	class FString                                OrderId_Optional;                                  // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OrderId_IsSet;                                     // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CCB[0x7];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA8 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_KeyClaim
struct RallyHereAPI_RHAPI_KeyClaim : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_InventoryPortal            PortalId_Optional;                                 // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PortalId_IsSet;                                    // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD7[0x6];                                     // Fixing Size After Last Property  
	class FString                                PortalUserId_Optional;                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PortalUserId_IsSet;                                // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CDB[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      KeyClaimUuid;                                      // 0x24(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Claimed_Optional;                                  // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Claimed_IsSet;                                     // 0x35(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CDD[0x2];                                     // Fixing Size After Last Property  
	class FString                                ExternalKey_Optional;                              // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ExternalKey_IsSet;                                 // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CEB[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      ExternalKeyCampaignUuid_Optional;                  // 0x4C(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ExternalKeyCampaignUuid_IsSet;                     // 0x5C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF2[0x3];                                     // Fixing Size After Last Property  
	class FString                                ExternalKeyType_Optional;                          // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ExternalKeyType_IsSet;                             // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CFB[0x7];                                     // Fixing Size After Last Property  
	class FString                                CreatedOn_Optional;                                // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CreatedOn_IsSet;                                   // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D08[0x7];                                     // Fixing Size After Last Property  
	class FString                                LastModifiedOn_Optional;                           // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastModifiedOn_IsSet;                              // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D0A[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_KeyClaims
struct RallyHereAPI_RHAPI_KeyClaims : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_KeyClaim>   Claims;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_KeyType
struct RallyHereAPI_RHAPI_KeyType : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Type;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_KVsResponse
struct RallyHereAPI_RHAPI_KVsResponse : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_AppSetting> Kvs_Optional;                                      // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Kvs_IsSet;                                         // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D2D[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_AppSetting> SecretKvs_Optional;                                // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         SecretKvs_IsSet;                                   // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D2F[0x7];                                     // Fixing Size Of Struct 
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_LoginRequestV1
struct RallyHereAPI_RHAPI_LoginRequestV1 : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_GrantType                  GrantType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D3A[0x7];                                     // Fixing Size After Last Property  
	class FString                                PortalAccessToken;                                 // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PortalDisplayName_Optional;                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PortalDisplayName_IsSet;                           // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D41[0x7];                                     // Fixing Size After Last Property  
	class FString                                PortalParentAccessToken_Optional;                  // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PortalParentAccessToken_IsSet;                     // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D48[0x7];                                     // Fixing Size After Last Property  
	class FString                                PortalParentDisplayName_Optional;                  // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PortalParentDisplayName_IsSet;                     // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IncludeRefresh_Optional;                           // 0x61(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IncludeRefresh_IsSet;                              // 0x62(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AcceptEula_Optional;                               // 0x63(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AcceptEula_IsSet;                                  // 0x64(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AcceptTos_Optional;                                // 0x65(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AcceptTos_IsSet;                                   // 0x66(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AcceptPrivacyPolicy_Optional;                      // 0x67(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AcceptPrivacyPolicy_IsSet;                         // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D63[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PortalUserInfo
struct RallyHereAPI_RHAPI_PortalUserInfo : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_Platform                   Platform;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Portal                     PortalId;                                          // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D74[0x6];                                     // Fixing Size After Last Property  
	class FString                                PortalUserId;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Restriction
struct RallyHereAPI_RHAPI_Restriction : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_RestrictionType            Type;                                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D81[0x7];                                     // Fixing Size After Last Property  
	class FString                                Reason_Optional;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Reason_IsSet;                                      // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D88[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  Expiration_Optional;                               // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Expiration_IsSet;                                  // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8B[0x7];                                     // Fixing Size Of Struct 
};

// 0x130 (0x138 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_LoginResult
struct RallyHereAPI_RHAPI_LoginResult : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_Platform                   Platform;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8E[0x3];                                     // Fixing Size After Last Property  
	int32                                        PortalId;                                          // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PortalUserId;                                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_PortalUserInfo     PortalParentAuthResult_Optional;                   // 0x30(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         PortalParentAuthResult_IsSet;                      // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D95[0x7];                                     // Fixing Size After Last Property  
	TArray<class FString>                        Permissions_Optional;                              // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Permissions_IsSet;                                 // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9A[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_Restriction> Restrictions_Optional;                             // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Restrictions_IsSet;                                // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D9F[0x3];                                     // Fixing Size After Last Property  
	int32                                        ActivePlayerId;                                    // 0x94(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ActivePlayerUuid_Optional;                         // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ActivePlayerUuid_IsSet;                            // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA2[0x3];                                     // Fixing Size After Last Property  
	int32                                        RoleId_Optional;                                   // 0xAC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RoleId_IsSet;                                      // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA3[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      PersonId;                                          // 0xB4(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA5[0x4];                                     // Fixing Size After Last Property  
	class FString                                AccessToken_Optional;                              // 0xC8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AccessToken_IsSet;                                 // 0xD8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA9[0x7];                                     // Fixing Size After Last Property  
	class FString                                RefreshToken_Optional;                             // 0xE0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RefreshToken_IsSet;                                // 0xF0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DB1[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      PublisherUuid;                                     // 0xF4(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      TenantUuid;                                        // 0x104(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ConfigElectorUuid;                                 // 0x114(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ClientUuid;                                        // 0x124(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DBA[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_LogoutRequest
struct RallyHereAPI_RHAPI_LogoutRequest : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                RefreshToken;                                      // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_LookupResults
struct RallyHereAPI_RHAPI_LookupResults : public RallyHereAPI_RHAPI_Model
{
public:
	uint8                                        Pad_3DC4[0x10];                                    // Fixing Size After Last Property  
	bool                                         DisplayNames_IsSet;                                // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DC8[0x57];                                    // Fixing Size After Last Property  
	bool                                         IdentityPlatforms_IsSet;                           // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DCA[0x57];                                    // Fixing Size After Last Property  
	bool                                         IdentityPlatformsByPlatform_IsSet;                 // 0xC8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DCD[0x7];                                     // Fixing Size Of Struct 
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MarketingCampaign
struct RallyHereAPI_RHAPI_MarketingCampaign : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      UUID;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_InventoryPortal            PortalId_Optional;                                 // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PortalId_IsSet;                                    // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DDB[0x6];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_KeyType>    KeyTypes;                                          // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                CreatedOn_Optional;                                // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CreatedOn_IsSet;                                   // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DDE[0x7];                                     // Fixing Size After Last Property  
	class FString                                LastModifiedOn_Optional;                           // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastModifiedOn_IsSet;                              // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DE3[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MarketingCampaigns
struct RallyHereAPI_RHAPI_MarketingCampaigns : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_MarketingCampaign> Campaigns;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MatchCreateRequest
struct RallyHereAPI_RHAPI_MatchCreateRequest : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                MatchID;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x18(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DF6[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MatchCreateResponse
struct RallyHereAPI_RHAPI_MatchCreateResponse : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                MatchID;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MatchInfo
struct RallyHereAPI_RHAPI_MatchInfo : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                MatchID;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  Created;                                           // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x20(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E06[0x7];                                     // Fixing Size After Last Property  
	TArray<class FString>                        TicketIds_Optional;                                // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         TicketIds_IsSet;                                   // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E08[0x7];                                     // Fixing Size Of Struct 
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MatchmakingInfo
struct RallyHereAPI_RHAPI_MatchmakingInfo : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                TicketId;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x18(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E0F[0x7];                                     // Fixing Size Of Struct 
};

// 0xB0 (0xB8 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MatchMakingProfile
struct RallyHereAPI_RHAPI_MatchMakingProfile : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                ProfileId;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_ProfileJoinMode            JoinMode_Optional;                                 // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         JoinMode_IsSet;                                    // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E1D[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      InstanceLaunchTemplateId;                          // 0x1C(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E1E[0x4];                                     // Fixing Size After Last Property  
	class FString                                RankId_Optional;                                   // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RankId_IsSet;                                      // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E1F[0x3];                                     // Fixing Size After Last Property  
	int32                                        NumSides_Optional;                                 // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NumSides_IsSet;                                    // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E24[0x3];                                     // Fixing Size After Last Property  
	int32                                        MaxPlayersPerSide_Optional;                        // 0x4C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MaxPlayersPerSide_IsSet;                           // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E28[0x3];                                     // Fixing Size After Last Property  
	int32                                        MinPlayersPerSide_Optional;                        // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MinPlayersPerSide_IsSet;                           // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E2A[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           LegacyConfig_Optional;                             // 0x60(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         LegacyConfig_IsSet;                                // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E2B[0x7];                                     // Fixing Size Of Struct 
};

// 0xB0 (0xB8 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MatchMakingProfileV2
struct RallyHereAPI_RHAPI_MatchMakingProfileV2 : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                ProfileId;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_ProfileJoinMode            JoinMode_Optional;                                 // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         JoinMode_IsSet;                                    // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E2F[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      InstanceRequestTemplateId;                         // 0x1C(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E33[0x4];                                     // Fixing Size After Last Property  
	class FString                                RankId_Optional;                                   // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RankId_IsSet;                                      // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E34[0x3];                                     // Fixing Size After Last Property  
	int32                                        NumSides_Optional;                                 // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NumSides_IsSet;                                    // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E37[0x3];                                     // Fixing Size After Last Property  
	int32                                        MaxPlayersPerSide_Optional;                        // 0x4C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MaxPlayersPerSide_IsSet;                           // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E39[0x3];                                     // Fixing Size After Last Property  
	int32                                        MinPlayersPerSide_Optional;                        // 0x54(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MinPlayersPerSide_IsSet;                           // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E3E[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           LegacyConfig_Optional;                             // 0x60(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         LegacyConfig_IsSet;                                // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E3F[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Rule
struct RallyHereAPI_RHAPI_Rule : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_RuleType                   RuleType;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E47[0x3];                                     // Fixing Size After Last Property  
	int32                                        ItemId_Optional;                                   // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ItemId_IsSet;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Operation                  ComparisonOperation;                               // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4C[0x2];                                     // Fixing Size After Last Property  
	int32                                        ComparisonValue;                                   // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MatchMakingRuleset
struct RallyHereAPI_RHAPI_MatchMakingRuleset : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_Rule>       Rules;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ERHAPI_Determiner                 Determiner;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E4F[0x7];                                     // Fixing Size Of Struct 
};

// 0xF0 (0xF8 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SessionPlayer
struct RallyHereAPI_RHAPI_SessionPlayer : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        PlayerId_Optional;                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlayerId_IsSet;                                    // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E56[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_SessionPlayerStatus        Status;                                            // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E5A[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      InvitingPlayerUuid_Optional;                       // 0x24(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InvitingPlayerUuid_IsSet;                          // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E62[0x3];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x38(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E65[0x7];                                     // Fixing Size After Last Property  
	class FString                                Version_Optional;                                  // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Version_IsSet;                                     // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E68[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_ClientSettings     ClientSettings_Optional;                           // 0xA8(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         ClientSettings_IsSet;                              // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E6F[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CrossplayPreferences CrossplayPreferences_Optional;                     // 0xC0(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CrossplayPreferences_IsSet;                        // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E72[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  Invited_Optional;                                  // 0xD8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Invited_IsSet;                                     // 0xE0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E77[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  Joined_Optional;                                   // 0xE8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Joined_IsSet;                                      // 0xF0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E7B[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SessionTeam
struct RallyHereAPI_RHAPI_SessionTeam : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_SessionPlayer> Players;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MaxSize;                                           // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E7E[0x4];                                     // Fixing Size Of Struct 
};

// 0x110 (0x118 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MatchMakingSessionRequest
struct RallyHereAPI_RHAPI_MatchMakingSessionRequest : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_SessionTeam> Teams;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           SessionTickets;                                    // 0x18(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      InstanceLaunchTemplateId_Optional;                 // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InstanceLaunchTemplateId_IsSet;                    // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E93[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      InstanceRequestTemplateId_Optional;                // 0x7C(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InstanceRequestTemplateId_IsSet;                   // 0x8C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E96[0x3];                                     // Fixing Size After Last Property  
	class FString                                RegionId;                                          // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MatchID;                                           // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData_Optional;                               // 0xB0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x100(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E9B[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      HostPlayerUuid_Optional;                           // 0x104(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HostPlayerUuid_IsSet;                              // 0x114(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EA0[0x3];                                     // Fixing Size Of Struct 
};

// 0x50 (0x58 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MatchMakingTemplate
struct RallyHereAPI_RHAPI_MatchMakingTemplate : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      MatchMakingTemplateId_Optional;                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MatchMakingTemplateId_IsSet;                       // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_MMRGroupingMethod          MmrGroupingMethod;                                 // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EA8[0x6];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_MatchMakingRuleset Ruleset_Optional;                                  // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Ruleset_IsSet;                                     // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EAD[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_MatchMakingProfile> Profiles;                                          // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MatchMakingTemplateGroup
struct RallyHereAPI_RHAPI_MatchMakingTemplateGroup : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      TemplateGroupId;                                   // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct RallyHereAPI_RHAPI_MatchMakingTemplate> TemplateOptions;                                   // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<int32>                                  RequiredItemIds_Optional;                          // 0x28(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         RequiredItemIds_IsSet;                             // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EB8[0x7];                                     // Fixing Size Of Struct 
};

// 0x50 (0x58 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MatchMakingTemplateV2
struct RallyHereAPI_RHAPI_MatchMakingTemplateV2 : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      MatchMakingTemplateId_Optional;                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MatchMakingTemplateId_IsSet;                       // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_MMRGroupingMethod          MmrGroupingMethod;                                 // 0x19(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EC1[0x6];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_MatchMakingRuleset Ruleset_Optional;                                  // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Ruleset_IsSet;                                     // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EC4[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_MatchMakingProfileV2> Profiles;                                          // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x80 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MatchMakingTemplateGroupV2
struct RallyHereAPI_RHAPI_MatchMakingTemplateGroupV2 : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      TemplateGroupId;                                   // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct RallyHereAPI_RHAPI_MatchMakingTemplateV2> TemplateOptions;                                   // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<int32>                                  RequiredItemIds_Optional;                          // 0x28(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         RequiredItemIds_IsSet;                             // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ECF[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_MessageOnly
struct RallyHereAPI_RHAPI_MessageOnly : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Message;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Notes
struct RallyHereAPI_RHAPI_Notes : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Notes_Optional;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Notes_IsSet;                                       // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ED9[0x7];                                     // Fixing Size Of Struct 
};

// 0x98 (0xA0 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_NotificationCreate
struct RallyHereAPI_RHAPI_NotificationCreate : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Message;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RhUrl_Optional;                                    // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RhUrl_IsSet;                                       // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EE2[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x30(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EE4[0x7];                                     // Fixing Size After Last Property  
	class FString                                Etag_Optional;                                     // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Etag_IsSet;                                        // 0x98(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EE5[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_NotificationCreateResult
struct RallyHereAPI_RHAPI_NotificationCreateResult : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                NotificationId;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_NotificationCreates
struct RallyHereAPI_RHAPI_NotificationCreates : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_NotificationCreate> Notifications;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_OAuthTokenExchange
struct RallyHereAPI_RHAPI_OAuthTokenExchange : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_OAuthTokenEchangeGrantType GrantType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EEF[0x7];                                     // Fixing Size After Last Property  
	class FString                                Code;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AcceptedEula_Optional;                             // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AcceptedEula_IsSet;                                // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AcceptedTos_Optional;                              // 0x22(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AcceptedTos_IsSet;                                 // 0x23(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AcceptedPrivacyPolicy_Optional;                    // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AcceptedPrivacyPolicy_IsSet;                       // 0x25(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EF4[0x2];                                     // Fixing Size Of Struct 
};

// 0x60 (0x68 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_OAuthTokenResponse
struct RallyHereAPI_RHAPI_OAuthTokenResponse : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                AccessToken_Optional;                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AccessToken_IsSet;                                 // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EF9[0x7];                                     // Fixing Size After Last Property  
	class FString                                RefreshToken_Optional;                             // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RefreshToken_IsSet;                                // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedsEula_Optional;                                // 0x31(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedsEula_IsSet;                                   // 0x32(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedsTos_Optional;                                 // 0x33(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedsTos_IsSet;                                    // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedsPrivacyPolicy_Optional;                       // 0x35(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeedsPrivacyPolicy_IsSet;                          // 0x36(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F05[0x1];                                     // Fixing Size After Last Property  
	class FString                                RegeneratedCode_Optional;                          // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RegeneratedCode_IsSet;                             // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F0B[0x7];                                     // Fixing Size After Last Property  
	class FString                                ErrorMessage_Optional;                             // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ErrorMessage_IsSet;                                // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F0E[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PersonEmailListRequest
struct RallyHereAPI_RHAPI_PersonEmailListRequest : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<int32>                                EmailListIds_Optional;                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         EmailListIds_IsSet;                                // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F13[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PersonEmailListResponse
struct RallyHereAPI_RHAPI_PersonEmailListResponse : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<int32>                                EmailListIds;                                      // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PersonInfoResponse
struct RallyHereAPI_RHAPI_PersonInfoResponse : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      PersonId_Optional;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PersonId_IsSet;                                    // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F1A[0x3];                                     // Fixing Size After Last Property  
	int32                                        ActivePlayerId_Optional;                           // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ActivePlayerId_IsSet;                              // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F22[0x7];                                     // Fixing Size After Last Property  
	class FString                                Email_Optional;                                    // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Email_IsSet;                                       // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F23[0x7];                                     // Fixing Size Of Struct 
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlatformEntitlement
struct RallyHereAPI_RHAPI_PlatformEntitlement : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                PlatformSku;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlatformEntitlementId;                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity_Optional;                                 // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Quantity_IsSet;                                    // 0x2C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_EntitlementStatus          Status_Optional;                                   // 0x2D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Status_IsSet;                                      // 0x2E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_EntitlementErrorCode       ErrorCode_Optional;                                // 0x2F(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ErrorCode_IsSet;                                   // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F2F[0x7];                                     // Fixing Size After Last Property  
	class FString                                OrderId_Optional;                                  // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OrderId_IsSet;                                     // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F33[0x7];                                     // Fixing Size Of Struct 
};

// 0x50 (0x58 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlatformEntitlementProcessRequest
struct RallyHereAPI_RHAPI_PlatformEntitlementProcessRequest : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                TransactionId;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlatformToken;                                     // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlatformId;                                        // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_PlatformRegion             PlatformRegion;                                    // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_ClientType                 ClientType;                                        // 0x39(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F4B[0x6];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_PlatformEntitlement> Entitlements_Optional;                             // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Entitlements_IsSet;                                // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F4D[0x7];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlatformEntitlementProcessResult
struct RallyHereAPI_RHAPI_PlatformEntitlementProcessResult : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                RequestID;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_ClientType                 ClientType;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F5D[0x7];                                     // Fixing Size After Last Property  
	class FString                                TransactionId;                                     // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_PlatformRegion             PlatformRegion;                                    // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F63[0x7];                                     // Fixing Size After Last Property  
	class FString                                Status_Optional;                                   // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Status_IsSet;                                      // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F6C[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_PlatformEntitlement> ClientEntitlements_Optional;                       // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ClientEntitlements_IsSet;                          // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F76[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_PlatformEntitlement> ServerEntitlements_Optional;                       // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ServerEntitlements_IsSet;                          // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Platform                   PlatformId;                                        // 0x79(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F7B[0x6];                                     // Fixing Size After Last Property  
	class FString                                PlatformUserId;                                    // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkippedServerEntitlements_Optional;                // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SkippedServerEntitlements_IsSet;                   // 0x91(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F7D[0x6];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerResponse
struct RallyHereAPI_RHAPI_PlayerResponse : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        PlayerId;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F88[0x4];                                     // Fixing Size Of Struct 
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlatformIdentityLookupResults
struct RallyHereAPI_RHAPI_PlatformIdentityLookupResults : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, struct RallyHereAPI_RHAPI_PlayerResponse> Identity_Optional;                                 // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Identity_IsSet;                                    // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F97[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlatformSessionPlayer
struct RallyHereAPI_RHAPI_PlatformSessionPlayer : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        PlayerId_Optional;                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlayerId_IsSet;                                    // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F9D[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Leader_Optional;                                   // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Leader_IsSet;                                      // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FA6[0x6];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlatformSession
struct RallyHereAPI_RHAPI_PlatformSession : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_Platform                   Platform;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FAD[0x7];                                     // Fixing Size After Last Property  
	class FString                                PlatformSessionType;                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlatformSessionIdBase64;                           // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct RallyHereAPI_RHAPI_PlatformSessionPlayer> Players;                                           // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x40(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FB3[0x7];                                     // Fixing Size Of Struct 
};

// 0x78 (0x80 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlatformSessionTemplate
struct RallyHereAPI_RHAPI_PlatformSessionTemplate : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_PlatformID                 PlatformId;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Platform                   Platform;                                          // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FBE[0x6];                                     // Fixing Size After Last Property  
	class FString                                PlatformSessionType;                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayers_Optional;                               // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MaxPlayers_IsSet;                                  // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FC6[0x3];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x28(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FC8[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerIdWrapper
struct RallyHereAPI_RHAPI_PlayerIdWrapper : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        PlayerId;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FCE[0x4];                                     // Fixing Size Of Struct 
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerIterateResponse
struct RallyHereAPI_RHAPI_PlayerIterateResponse : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_PlayerResponse> Players_Optional;                                  // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Players_IsSet;                                     // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FD7[0x7];                                     // Fixing Size After Last Property  
	class FString                                Cursor_Optional;                                   // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Cursor_IsSet;                                      // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FD9[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerLastSeenUpdate
struct RallyHereAPI_RHAPI_PlayerLastSeenUpdate : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_DateTime                  Time;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Platform_Optional;                                 // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Platform_IsSet;                                    // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FE4[0x7];                                     // Fixing Size After Last Property  
	class FString                                DisplayName_Optional;                              // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisplayName_IsSet;                                 // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FEB[0x7];                                     // Fixing Size Of Struct 
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerPersonResponse
struct RallyHereAPI_RHAPI_PlayerPersonResponse : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        PlayerId;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ActivePlayerId_Optional;                           // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ActivePlayerId_IsSet;                              // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FF4[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      ActivePlayerUuid_Optional;                         // 0x24(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ActivePlayerUuid_IsSet;                            // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FFB[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      PersonId;                                          // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x50 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PortalUserResponse
struct RallyHereAPI_RHAPI_PortalUserResponse : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                PortalUserId_Optional;                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PortalUserId_IsSet;                                // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4000[0x3];                                     // Fixing Size After Last Property  
	int32                                        PortalId;                                          // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Platform                   Platform;                                          // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4003[0x7];                                     // Fixing Size After Last Property  
	class FString                                DisplayName_Optional;                              // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DisplayName_IsSet;                                 // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4009[0x3];                                     // Fixing Size After Last Property  
	int32                                        PlayerId;                                          // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerLinkedPortalsResponse
struct RallyHereAPI_RHAPI_PlayerLinkedPortalsResponse : public RallyHereAPI_RHAPI_Model
{
public:
	struct RallyHereAPI_RHAPI_PlayerPersonResponse Player;                                            // 0x8(0x48)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct RallyHereAPI_RHAPI_PortalUserResponse> LinkedPortals;                                     // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerOrdersResponse
struct RallyHereAPI_RHAPI_PlayerOrdersResponse : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_PlayerOrder> Data_Optional;                                     // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Data_IsSet;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4020[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_InventoryPageMeta  Page;                                              // 0x20(0x38)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC8 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerPresence
struct RallyHereAPI_RHAPI_PlayerPresence : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_OnlineStatus               Status_Optional;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Status_IsSet;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_402B[0x6];                                     // Fixing Size After Last Property  
	class FString                                Message_Optional;                                  // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Message_IsSet;                                     // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4033[0x7];                                     // Fixing Size After Last Property  
	class FString                                Platform;                                          // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x48(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x98(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_403C[0x3];                                     // Fixing Size After Last Property  
	int32                                        PlayerId_Optional;                                 // 0x9C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlayerId_IsSet;                                    // 0xA0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_403E[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0xA4(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DoNotDisturb_Optional;                             // 0xB4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DoNotDisturb_IsSet;                                // 0xB5(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4044[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  LastSeen_Optional;                                 // 0xB8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastSeen_IsSet;                                    // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4049[0x7];                                     // Fixing Size Of Struct 
};

// 0x78 (0x80 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerPresenceUpdateSelf
struct RallyHereAPI_RHAPI_PlayerPresenceUpdateSelf : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_OnlineStatus               Status_Optional;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Status_IsSet;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4052[0x6];                                     // Fixing Size After Last Property  
	class FString                                Message_Optional;                                  // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Message_IsSet;                                     // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DoNotDisturb_Optional;                             // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DoNotDisturb_IsSet;                                // 0x22(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4056[0x5];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x28(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4058[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerRankRequestResponse
struct RallyHereAPI_RHAPI_PlayerRankRequestResponse : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_PlayerRankResponse> PlayerRanks;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerRankUpdateRequest
struct RallyHereAPI_RHAPI_PlayerRankUpdateRequest : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                InstanceId_Optional;                               // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InstanceId_IsSet;                                  // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4074[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_RankData           Rank;                                              // 0x20(0x68)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerRankUpdateResponse
struct RallyHereAPI_RHAPI_PlayerRankUpdateResponse : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_PlayerRankResponse> UpdatedPlayers;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerSessionInvite
struct RallyHereAPI_RHAPI_PlayerSessionInvite : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                SessionId;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      InvitingPlayerUuid_Optional;                       // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InvitingPlayerUuid_IsSet;                          // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_408A[0x7];                                     // Fixing Size Of Struct 
};

// 0xC0 (0xC8 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerSession
struct RallyHereAPI_RHAPI_PlayerSession : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Type;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class FString>                          SessionIds_Optional;                               // 0x18(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         SessionIds_IsSet;                                  // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4091[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, struct RallyHereAPI_RHAPI_PlayerSessionInvite> PendingInvites_Optional;                           // 0x70(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         PendingInvites_IsSet;                              // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4093[0x7];                                     // Fixing Size Of Struct 
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerSessions
struct RallyHereAPI_RHAPI_PlayerSessions : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, struct RallyHereAPI_RHAPI_PlayerSession> Sessions_Optional;                                 // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Sessions_IsSet;                                    // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_409D[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  LastUpdatedTimestamp_Optional;                     // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         LastUpdatedTimestamp_IsSet;                        // 0x68(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_409E[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PlayerUuidFromId
struct RallyHereAPI_RHAPI_PlayerUuidFromId : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      UUID;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PortalTokenDetailsRequest
struct RallyHereAPI_RHAPI_PortalTokenDetailsRequest : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_PortalTokenDetailsGrantType GrantType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40B0[0x7];                                     // Fixing Size After Last Property  
	class FString                                PortalAccessToken;                                 // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PublicKey
struct RallyHereAPI_RHAPI_PublicKey : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Kid;                                               // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Kty;                                               // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                N;                                                 // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                E;                                                 // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PublicKeyList
struct RallyHereAPI_RHAPI_PublicKeyList : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_PublicKey>  Keys;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_PurgeRequest
struct RallyHereAPI_RHAPI_PurgeRequest : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_DateTime                  SuggestedPurgeTime_Optional;                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SuggestedPurgeTime_IsSet;                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40BA[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_QueueConfig
struct RallyHereAPI_RHAPI_QueueConfig : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                QueueId;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Active;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40C2[0x3];                                     // Fixing Size After Last Property  
	int32                                        RankingType;                                       // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSides;                                          // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayersPerSide;                                 // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinPlayersPerSide;                                 // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxQueueGroupSize;                                 // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      MatchMakingTemplateGroupId;                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_QueueConfigV2
struct RallyHereAPI_RHAPI_QueueConfigV2 : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                QueueId;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Active;                                            // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40D2[0x3];                                     // Fixing Size After Last Property  
	int32                                        MaxQueueGroupSize;                                 // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      MatchMakingTemplateGroupId;                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           LegacyConfig_Optional;                             // 0x30(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         LegacyConfig_IsSet;                                // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40DC[0x7];                                     // Fixing Size Of Struct 
};

// 0x150 (0x158 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_QueueJoinRequest
struct RallyHereAPI_RHAPI_QueueJoinRequest : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                QueueId;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_AdditionalJoinParams AdditionalJoinParams_Optional;                     // 0x18(0x128)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         AdditionalJoinParams_IsSet;                        // 0x140(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40E3[0x7];                                     // Fixing Size After Last Property  
	TArray<class FString>                        MapPreferences;                                    // 0x148(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_QueueJoinResponse
struct RallyHereAPI_RHAPI_QueueJoinResponse : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                TicketId;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_QueuesResponse
struct RallyHereAPI_RHAPI_QueuesResponse : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_QueueConfig> Queues;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_QueuesResponseV2
struct RallyHereAPI_RHAPI_QueuesResponseV2 : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_QueueConfigV2> Queues;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RallyHereAPI.RHAPI_AuthContext
struct RallyHereAPI_RHAPI_AuthContext
{
public:
	int32                                        Dummy;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40FE[0x14];                                    // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RallyHereAPI.RHAPI_JsonObject
struct RallyHereAPI_RHAPI_JsonObject
{
public:
	uint8                                        Pad_4104[0x10];                                    // Fixing Size Of Struct 
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_RankConfig
struct RallyHereAPI_RHAPI_RankConfig : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        RankId;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultRank;                                       // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultVariance;                                   // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRankAllowed;                                    // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRankAllowed;                                    // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinVarianceAllowed;                                // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TrueskillBeta_Optional;                            // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TrueskillBeta_IsSet;                               // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_410F[0x3];                                     // Fixing Size After Last Property  
	float                                        TrueskillTau_Optional;                             // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TrueskillTau_IsSet;                                // 0x2C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4113[0x3];                                     // Fixing Size After Last Property  
	float                                        TrueskillDrawProbability_Optional;                 // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TrueskillDrawProbability_IsSet;                    // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4117[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_RankConfigRequestResponse
struct RallyHereAPI_RHAPI_RankConfigRequestResponse : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_RankConfig> RankConfigs;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Region
struct RallyHereAPI_RHAPI_Region : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                RegionId;                                          // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SortOrder;                                         // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CustomOnly;                                        // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4128[0x3];                                     // Fixing Size After Last Property  
	class FString                                Description_Optional;                              // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Description_IsSet;                                 // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_412B[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_RegionsResponse
struct RallyHereAPI_RHAPI_RegionsResponse : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_Region>     Regions;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Cursor;                                            // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4132[0x4];                                     // Fixing Size Of Struct 
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Role
struct RallyHereAPI_RHAPI_Role : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                RoleId;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_JsonObject         CustomData_Optional;                               // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4144[0x7];                                     // Fixing Size After Last Property  
	TArray<int32>                                LoginLootRewards_Optional;                         // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         LoginLootRewards_IsSet;                            // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_414A[0x7];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA8 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SelfSessionPlayerUpdateRequest
struct RallyHereAPI_RHAPI_SelfSessionPlayerUpdateRequest : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_SessionPlayerStatus        Status_Optional;                                   // 0x8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Status_IsSet;                                      // 0x9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4152[0x6];                                     // Fixing Size After Last Property  
	class FString                                ClientVersion;                                     // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_ClientSettings     ClientSettings;                                    // 0x20(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        TeamId;                                            // 0x30(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_415D[0x4];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_CrossplayPreferences CrossplayPreferences_Optional;                     // 0x38(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         CrossplayPreferences_IsSet;                        // 0x48(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4162[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x50(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0xA0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4165[0x7];                                     // Fixing Size Of Struct 
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SendInBlueContact
struct RallyHereAPI_RHAPI_SendInBlueContact : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Email;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_JsonObject         Attributes_Optional;                               // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Attributes_IsSet;                                  // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EmailBlacklisted_Optional;                         // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EmailBlacklisted_IsSet;                            // 0x2A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4170[0x5];                                     // Fixing Size After Last Property  
	TArray<int32>                                ListIds_Optional;                                  // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ListIds_IsSet;                                     // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4172[0x7];                                     // Fixing Size After Last Property  
	TArray<int32>                                UnlinkListIds_Optional;                            // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         UnlinkListIds_IsSet;                               // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UpdateEnabled_Optional;                            // 0x59(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UpdateEnabled_IsSet;                               // 0x5A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4178[0x5];                                     // Fixing Size Of Struct 
};

// 0x460 (0x468 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_Session
struct RallyHereAPI_RHAPI_Session : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Type;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SessionId;                                         // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_InstanceInfo       Instance_Optional;                                 // 0x28(0x220)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Instance_IsSet;                                    // 0x248(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_417E[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_MatchInfo          Match_Optional;                                    // 0x250(0x90)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Match_IsSet;                                       // 0x2E0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4185[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_MatchmakingInfo    Matchmaking_Optional;                              // 0x2E8(0x70)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Matchmaking_IsSet;                                 // 0x358(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4189[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_BrowserInfo        Browser_Optional;                                  // 0x360(0x60)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Browser_IsSet;                                     // 0x3C0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Joinable;                                          // 0x3C1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_418C[0x6];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_SessionTeam> Teams;                                             // 0x3C8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct RallyHereAPI_RHAPI_PlatformSession> PlatformSession_Optional;                          // 0x3D8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         PlatformSession_IsSet;                             // 0x3E8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4190[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x3F0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x440(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4192[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  Created;                                           // 0x448(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RegionId_Optional;                                 // 0x450(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RegionId_IsSet;                                    // 0x460(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CreatedByMatchmaking_Optional;                     // 0x461(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CreatedByMatchmaking_IsSet;                        // 0x462(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4199[0x5];                                     // Fixing Size Of Struct 
};

// 0x108 (0x110 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SessionEvent
struct RallyHereAPI_RHAPI_SessionEvent : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                EventCode;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description_Optional;                              // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Description_IsSet;                                 // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_419D[0x3];                                     // Fixing Size After Last Property  
	int32                                        SourcePlayerId_Optional;                           // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SourcePlayerId_IsSet;                              // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41A4[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      SourcePlayerUuid_Optional;                         // 0x34(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SourcePlayerUuid_IsSet;                            // 0x44(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41A6[0x3];                                     // Fixing Size After Last Property  
	int32                                        TargetPlayerId_Optional;                           // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TargetPlayerId_IsSet;                              // 0x4C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41AC[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      TargetPlayerUuid_Optional;                         // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TargetPlayerUuid_IsSet;                            // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41AD[0x7];                                     // Fixing Size After Last Property  
	class FString                                Instance_Optional;                                 // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Instance_IsSet;                                    // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41AE[0x7];                                     // Fixing Size After Last Property  
	class FString                                Match_Optional;                                    // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Match_IsSet;                                       // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Platform                   Platform_Optional;                                 // 0x91(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Platform_IsSet;                                    // 0x92(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41B6[0x5];                                     // Fixing Size After Last Property  
	class FString                                PlatformSessionIdBase64_Optional;                  // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlatformSessionIdBase64_IsSet;                     // 0xA8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41BA[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0xB0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x100(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41BE[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  Timestamp;                                         // 0x108(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x90 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SessionEventCreateRequest
struct RallyHereAPI_RHAPI_SessionEventCreateRequest : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                EventCode;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description_Optional;                              // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Description_IsSet;                                 // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41C7[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x30(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41CC[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  Timestamp;                                         // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SessionEvents
struct RallyHereAPI_RHAPI_SessionEvents : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_SessionEvent> Events_Optional;                                   // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         Events_IsSet;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41DA[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SessionJoinResponse
struct RallyHereAPI_RHAPI_SessionJoinResponse : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                SessionId;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SessionPlayerUpdateRequest
struct RallyHereAPI_RHAPI_SessionPlayerUpdateRequest : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_SessionPlayerStatus        Status_Optional;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Status_IsSet;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41E7[0x2];                                     // Fixing Size After Last Property  
	int32                                        TeamId;                                            // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x10(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41F1[0x7];                                     // Fixing Size Of Struct 
};

// 0x60 (0x68 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SessionPlayerUpdateResponse
struct RallyHereAPI_RHAPI_SessionPlayerUpdateResponse : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_SessionPlayerStatus        Status;                                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41F5[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x10(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x60(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41F8[0x7];                                     // Fixing Size Of Struct 
};

// 0x1F0 (0x1F8 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SessionTemplate
struct RallyHereAPI_RHAPI_SessionTemplate : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                SessionType;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EngineSessionType_Optional;                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EngineSessionType_IsSet;                           // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanJoinMatchmaking_Optional;                       // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanJoinMatchmaking_IsSet;                          // 0x2A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeCreatedByPlayersDirectly_Optional;            // 0x2B(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeCreatedByPlayersDirectly_IsSet;               // 0x2C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Joinable_Optional;                                 // 0x2D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Joinable_IsSet;                                    // 0x2E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoAddToBrowser_Optional;                         // 0x2F(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoAddToBrowser_IsSet;                            // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_420A[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           AutoBrowserParams_Optional;                        // 0x38(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         AutoBrowserParams_IsSet;                           // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeAddedToServerBrowser_Optional;                // 0x89(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeAddedToServerBrowser_IsSet;                   // 0x8A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         KeepAliveOnEmpty_Optional;                         // 0x8B(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         KeepAliveOnEmpty_IsSet;                            // 0x8C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4213[0x3];                                     // Fixing Size After Last Property  
	TMap<class FString, struct RallyHereAPI_RHAPI_PlatformSessionTemplate> PlatformTemplates_Optional;                        // 0x90(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         PlatformTemplates_IsSet;                           // 0xE0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4215[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_InstanceStartupParams AutoStartupParams_Optional;                        // 0xE8(0x98)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         AutoStartupParams_IsSet;                           // 0x180(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4217[0x3];                                     // Fixing Size After Last Property  
	int32                                        MinSessionCount_Optional;                          // 0x184(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MinSessionCount_IsSet;                             // 0x188(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_421B[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x190(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x1E0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_421F[0x3];                                     // Fixing Size After Last Property  
	int32                                        NumTeams_Optional;                                 // 0x1E4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NumTeams_IsSet;                                    // 0x1E8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4222[0x3];                                     // Fixing Size After Last Property  
	int32                                        PlayersPerTeam_Optional;                           // 0x1EC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PlayersPerTeam_IsSet;                              // 0x1F0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanChangeOwnTeam_Optional;                         // 0x1F1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanChangeOwnTeam_IsSet;                            // 0x1F2(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4227[0x5];                                     // Fixing Size Of Struct 
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SessionTemplates
struct RallyHereAPI_RHAPI_SessionTemplates : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, struct RallyHereAPI_RHAPI_SessionTemplate> Templates_Optional;                                // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Templates_IsSet;                                   // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_422D[0x7];                                     // Fixing Size Of Struct 
};

// 0x70 (0x78 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SessionUpdate
struct RallyHereAPI_RHAPI_SessionUpdate : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                RegionId_Optional;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RegionId_IsSet;                                    // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4236[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x20(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Joinable_Optional;                                 // 0x71(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Joinable_IsSet;                                    // 0x72(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4239[0x5];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SetSinglePlayerSettingRequest
struct RallyHereAPI_RHAPI_SetSinglePlayerSettingRequest : public RallyHereAPI_RHAPI_Model
{
public:
	int32                                        V;                                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4241[0x4];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_JsonValue          Value;                                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SettingTypeVersion
struct RallyHereAPI_RHAPI_SettingTypeVersion : public RallyHereAPI_RHAPI_Model
{
public:
	bool                                         AllowUpdate_Optional;                              // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowUpdate_IsSet;                                 // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4245[0x6];                                     // Fixing Size After Last Property  
	class FString                                KeyRegex_Optional;                                 // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         KeyRegex_IsSet;                                    // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4249[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_JsonObject         ValueJsonschema;                                   // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_SettingType
struct RallyHereAPI_RHAPI_SettingType : public RallyHereAPI_RHAPI_Model
{
public:
	TMap<class FString, struct RallyHereAPI_RHAPI_SettingTypeVersion> Versions;                                          // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_TokenRequest
struct RallyHereAPI_RHAPI_TokenRequest : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_OAuthGrantType             GrantType;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4251[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_TokenResponse
struct RallyHereAPI_RHAPI_TokenResponse : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                AccessToken;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TokenType;                                         // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RefreshToken_Optional;                             // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RefreshToken_IsSet;                                // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4256[0x3];                                     // Fixing Size After Last Property  
	int32                                        ExpiresIn;                                         // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x88 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_TrueskillRank
struct RallyHereAPI_RHAPI_TrueskillRank : public RallyHereAPI_RHAPI_Model
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_RankData           Rank;                                              // 0x18(0x68)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        SecondsInMatch;                                    // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_425F[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x20 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_TrueskillTeam
struct RallyHereAPI_RHAPI_TrueskillTeam : public RallyHereAPI_RHAPI_Model
{
public:
	TArray<struct RallyHereAPI_RHAPI_TrueskillRank> Players;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        TeamRank;                                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4265[0x4];                                     // Fixing Size Of Struct 
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_TrueskillUpdateRequest
struct RallyHereAPI_RHAPI_TrueskillUpdateRequest : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                InstanceId_Optional;                               // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InstanceId_IsSet;                                  // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_426A[0x3];                                     // Fixing Size After Last Property  
	int32                                        RankId;                                            // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MatchLengthSeconds;                                // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_426D[0x4];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_TrueskillTeam> Teams;                                             // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_UpdateInventoryRequest
struct RallyHereAPI_RHAPI_UpdateInventoryRequest : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_Source                     Source_Optional;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Source_IsSet;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4274[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      ClientOrderRefId_Optional;                         // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClientOrderRefId_IsSet;                            // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_InventoryBucket            Bucket_Optional;                                   // 0x1D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Bucket_IsSet;                                      // 0x1E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4279[0x1];                                     // Fixing Size After Last Property  
	int32                                        Count_Optional;                                    // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Count_IsSet;                                       // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_427E[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  Expires_Optional;                                  // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Expires_IsSet;                                     // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4281[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x38(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4286[0x3];                                     // Fixing Size After Last Property  
	int32                                        ItemId_Optional;                                   // 0x8C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ItemId_IsSet;                                      // 0x90(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4289[0x7];                                     // Fixing Size Of Struct 
};

// 0x90 (0x98 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_UpdateInventoryRequestById
struct RallyHereAPI_RHAPI_UpdateInventoryRequestById : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_InventoryBucket            Bucket_Optional;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Bucket_IsSet;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_428F[0x2];                                     // Fixing Size After Last Property  
	int32                                        Count_Optional;                                    // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Count_IsSet;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4293[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  Expires_Optional;                                  // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Expires_IsSet;                                     // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4298[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData_Optional;                               // 0x28(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         CustomData_IsSet;                                  // 0x78(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_429B[0x3];                                     // Fixing Size After Last Property  
	int32                                        ItemId_Optional;                                   // 0x7C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ItemId_IsSet;                                      // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_429C[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      InventoryId;                                       // 0x84(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_429F[0x4];                                     // Fixing Size Of Struct 
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_UpdateInventoryRequests
struct RallyHereAPI_RHAPI_UpdateInventoryRequests : public RallyHereAPI_RHAPI_Model
{
public:
	enum class ERHAPI_Source                     Source_Optional;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Source_IsSet;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42A6[0x2];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      ClientOrderRefId_Optional;                         // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClientOrderRefId_IsSet;                            // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42A8[0x3];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereAPI_RHAPI_UpdateInventoryRequestById> Inventory;                                         // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereAPI.RHAPI_UpdatePersonInfoRequest
struct RallyHereAPI_RHAPI_UpdatePersonInfoRequest : public RallyHereAPI_RHAPI_Model
{
public:
	class FString                                Email;                                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


