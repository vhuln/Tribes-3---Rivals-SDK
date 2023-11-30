#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ERH_INPUT_STATE : uint8
{
	PIS_KEYMOUSE                   = 0,
	PIS_GAMEPAD                    = 1,
	PIS_TOUCH                      = 2,
	PIS_UNKNOWN                    = 3,
	PIS_MAX                        = 4,
};

enum class EContextActionHoldReleaseState : uint8
{
	HoldReleaseState_Started       = 0,
	HoldReleaseState_Canceled      = 1,
	HoldReleaseState_Completed     = 2,
	HoldReleaseState_MAX           = 3,
};

enum class ERHVoiceActivityAudioState : uint8
{
	Disconnected                   = 0,
	Connecting                     = 1,
	Connected                      = 2,
	Disconnecting                  = 3,
	ERHVoiceActivityAudioState_MAX = 4,
};

enum class ERHPlatformDisplayType : uint8
{
	PC                             = 0,
	Xbox                           = 1,
	Playstation                    = 2,
	Switch                         = 3,
	ConsoleGeneric                 = 4,
	Epic                           = 5,
	Steam                          = 6,
	IOS                            = 7,
	Android                        = 8,
	MobileGeneric                  = 9,
	Unknown                        = 10,
	ERHPlatformDisplayType_MAX     = 11,
};

enum class ERHLoginState : uint8
{
	ELS_LoggedOut                  = 0,
	ELS_Eula                       = 1,
	ELS_CreateName                 = 2,
	ELS_LoggingIn                  = 3,
	ELS_LoggedIn                   = 4,
	ELS_TwoFactor                  = 5,
	ELS_LinkOffer                  = 6,
	ELS_Unknown                    = 7,
	ELS_MAX                        = 8,
};

enum class ERH_MatchStatus : uint8
{
	NotQueued                      = 0,
	Declined                       = 1,
	Queued                         = 2,
	Invited                        = 3,
	Accepted                       = 4,
	Matching                       = 5,
	Waiting                        = 6,
	InGame                         = 7,
	SpectatorLobby                 = 8,
	SpectatorGame                  = 9,
	ERH_MAX                        = 10,
};

enum class ERHSocialOverlaySection : uint8
{
	Invalid                        = 0,
	SessionMembers                 = 1,
	SessionInvitations             = 2,
	FriendInvites                  = 3,
	OnlineRHFriends                = 4,
	OnlinePlatformFriends          = 5,
	OfflineRHFriends               = 6,
	Blocked                        = 7,
	SearchResults                  = 8,
	Pending                        = 9,
	RecentlyPlayed                 = 10,
	SuggestedFriends               = 11,
	MAX                            = 12,
};

enum class EViewManagerLayer : uint8
{
	Base                           = 0,
	Modal                          = 1,
	EViewManagerLayer_MAX          = 2,
};

enum class ERHInviteSelectResult : uint8
{
	NoChange                       = 0,
	Selected                       = 1,
	Deselected                     = 2,
	ERHInviteSelectResult_MAX      = 3,
};

enum class ERHInviteCloseAction : uint8
{
	None                           = 0,
	Submit                         = 1,
	ERHInviteCloseAction_MAX       = 2,
};

enum class EExternalSkuSource : uint8
{
	ESS_No_Souce                   = 0,
	ESS_Sony                       = 1,
	ESS_Nintendo                   = 2,
	ESS_Microsoft_Xbox             = 3,
	ESS_Microsoft_Xbox_GDK         = 4,
	ESS_Epic                       = 5,
	ESS_Valve                      = 6,
	ESS_AppleRetailSandbox         = 7,
	ESS_AppleDevSandbox            = 8,
	ESS_ApplePlatDevSandbox        = 9,
	ESS_MAX                        = 10,
};

enum class EAnalogStickType : uint8
{
	Unknown                        = 0,
	Left                           = 1,
	Right                          = 2,
	EAnalogStickType_MAX           = 3,
};

enum class EBattlepassTrackType : uint8
{
	EFreeTrack                     = 0,
	EPremiumTrack                  = 1,
	EInstantUnlock                 = 2,
	EBattlepassTrackType_MAX       = 3,
};

enum class EPlayerContextMenuContext : uint8
{
	Friends                        = 0,
	Party                          = 1,
	CustomLobby                    = 2,
	InGame                         = 3,
	Default                        = 4,
	EPlayerContextMenuContext_MAX  = 5,
};

enum class EPlayerContextOptions : uint8
{
	AddFriend                      = 0,
	AddRHFriend                    = 1,
	PartyInvite                    = 2,
	LobbySwapTeam                  = 3,
	LobbyKickPlayer                = 4,
	LobbyPromotePlayer             = 5,
	PartyKick                      = 6,
	Whisper                        = 7,
	ViewProfile                    = 8,
	ViewPlatformProfile            = 9,
	RemoveFriend                   = 10,
	CancelRequest                  = 11,
	AcceptFriendRequest            = 12,
	RejectFriendRequest            = 13,
	PromotePartyLeader             = 14,
	AcceptPartyInvite              = 15,
	DeclinePartyInvite             = 16,
	LeaveParty                     = 17,
	Mute                           = 18,
	Unmute                         = 19,
	ReportPlayer                   = 20,
	IgnorePlayer                   = 21,
	UnignorePlayer                 = 22,
	None                           = 23,
	EPlayerContextOptions_MAX      = 24,
};

enum class EFriendAction : uint8
{
	AddFriend                      = 0,
	RemoveFriend                   = 1,
	CancelFriendRequest            = 2,
	AcceptFriendRequest            = 3,
	RejectFriendRequest            = 4,
	EFriendAction_MAX              = 5,
};

enum class EPartyManagerAction : uint8
{
	KickMember                     = 0,
	PromoteToLeader                = 1,
	AcceptInvite                   = 2,
	DenyInvite                     = 3,
	LeaveParty                     = 4,
	EPartyManagerAction_MAX        = 5,
};

enum class EQueueDataFactoryAction : uint8
{
	SwapPlayerCustomMatch          = 0,
	KickFromCustomMatch            = 1,
	SwitchHostCustomMatch          = 2,
	EQueueDataFactoryAction_MAX    = 3,
};

enum class EViewSide : uint8
{
	Left                           = 0,
	Right                          = 1,
	None                           = 2,
	EViewSide_MAX                  = 3,
};

enum class ERHCategoryOpenMode : uint8
{
	ClosedByDefault                = 0,
	OpenByDefault                  = 1,
	ERHCategoryOpenMode_MAX        = 2,
};

enum class EADSMode : uint8
{
	Hold                           = 0,
	Toggle                         = 1,
	Both                           = 2,
	EADSMode_MAX                   = 3,
};

enum class EGyroMode : uint8
{
	None                           = 0,
	AimOnly                        = 1,
	Always                         = 2,
	EGyroMode_MAX                  = 3,
};

enum class EGamepadIcons : uint8
{
	XboxOne                        = 0,
	PlayStation4                   = 1,
	NintendoSwitch                 = 2,
	EGamepadIcons_MAX              = 3,
};

enum class ECrosshairSize : uint8
{
	Standard                       = 0,
	Medium                         = 1,
	Large                          = 2,
	ECrosshairSize_MAX             = 3,
};

enum class EMuteMode : uint8
{
	VoicechatOnly                  = 0,
	VoicechatAndQuips              = 1,
	VoicechatAndCommunications     = 2,
	VoicechatQuipsCommunications   = 3,
	EMuteMode_MAX                  = 4,
};

enum class ERHLastInputType : uint8
{
	ERHLastInputType_Up            = 0,
	ERHLastInputType_Down          = 1,
	ERHLastInputType_Left          = 2,
	ERHLastInputType_Right         = 3,
	ERHLastInputType_MAX           = 4,
};

enum class EContextActionType : uint8
{
	ContextActionTypeRelease       = 0,
	ContextActionTypePress         = 1,
	ContextActionTypeCycle         = 2,
	ContextActionTypeHoldRelease   = 3,
	EContextActionType_MAX         = 4,
};

enum class EContextPromptAnchoring : uint8
{
	AnchorLeft                     = 0,
	AnchorRight                    = 1,
	AnchorCenter                   = 2,
	EContextPromptAnchoring_MAX    = 3,
};

enum class ERHLM_LoadRequirement : uint8
{
	Config                         = 0,
	Settings                       = 1,
	Inventory                      = 2,
	Num                            = 3,
	ERHLM_MAX                      = 4,
};

enum class ERHLoadoutTypes : uint8
{
	INVALID_LOADOUT                = 0,
	PLAYER_ACCOUNT                 = 1,
	ERHLoadoutTypes_MAX            = 2,
};

enum class ERHLoadoutSlotTypes : uint8
{
	AVATAR_SLOT                    = 0,
	BANNER_SLOT                    = 1,
	BORDER_SLOT                    = 2,
	TITLE_SLOT                     = 3,
	ERHLoadoutSlotTypes_MAX        = 4,
};

enum class ESocialMessageType : uint8
{
	EInvite                        = 0,
	EInviteResponse                = 1,
	EInviteExpired                 = 2,
	EInviteError                   = 3,
	EGenericMsg                    = 4,
	ESocialMessageType_MAX         = 5,
};

enum class ERHCannotLoginNowReason : uint8
{
	None                           = 0,
	PartialInstall                 = 1,
	ERHCannotLoginNowReason_MAX    = 2,
};

enum class ELootBoxContentsCategories : uint8
{
	LootBoxContents_All            = 0,
	LootBoxContents_Avatars        = 1,
	LootBoxContents_Banners        = 2,
	LootBoxContents_Titles         = 3,
	LootBoxContents_Borders        = 4,
	LootBoxContents_Other          = 5,
	LootBoxContents_MAX            = 6,
};

enum class ENewsActions : uint8
{
	ENewsActions_Unknown           = 0,
	ENewsActions_ExternalURL       = 1,
	ENewsActions_NavToRoute        = 2,
	ENewsActions_NavToStoreItem    = 3,
	ENewsActions_NavToRogueDetails = 4,
	ENewsActions_NavToCustomization = 5,
	ENewsActions_MAX               = 6,
};

enum class ERHOrderType : uint8
{
	Generic                        = 0,
	Voucher                        = 1,
	BattlePass                     = 2,
	ActiveBoost                    = 3,
	EventGrandPrize                = 4,
	LootBox                        = 5,
	MAX                            = 6,
};

enum class ERHOverlayTabState : uint8
{
	Idle                           = 0,
	Hovered                        = 1,
	Selected                       = 2,
	SelectedDefocused              = 3,
	ERHOverlayTabState_MAX         = 4,
};

enum class ERH_PartyInviteRightsMode : uint8
{
	ERH_PIRM_OnlyLeader            = 0,
	ERH_PIRM_LeaderStartingCanGrant = 1,
	ERH_PIRM_AllMembers            = 2,
	ERH_PIRM_MAX                   = 3,
};

enum class ESonyMatchState : uint8
{
	NotStarted                     = 0,
	MatchIdRequested               = 1,
	Playing                        = 2,
	SendPauseOrCancelMatch         = 3,
	SendCompleteMatch              = 4,
	Complete                       = 5,
	ESonyMatchState_MAX            = 6,
};

enum class EKeyBindType : uint8
{
	ActionMapping                  = 0,
	AxisMapping                    = 1,
	EKeyBindType_MAX               = 2,
};

enum class EInputType : uint8
{
	KBM                            = 0,
	GP                             = 1,
	Touch                          = 2,
	EInputType_MAX                 = 3,
};

enum class EInputActionType : uint8
{
	Press                          = 0,
	Hold                           = 1,
	Repeat                         = 2,
	EInputActionType_MAX           = 3,
};

enum class ERHPopupFormat : uint8
{
	Standard                       = 0,
	HumanBackfillReward            = 1,
	ReportPlayerFeedback           = 2,
	GamepadPrompt                  = 3,
	ERHPopupFormat_MAX             = 4,
};

enum class ERHPopupButtonType : uint8
{
	Confirm                        = 0,
	Cancel                         = 1,
	Default                        = 2,
	ERHPopupButtonType_MAX         = 3,
};

enum class ERHPushNotificationState : uint8
{
	WaitForNotificationData        = 0,
	StartRequestPermissions        = 1,
	RequestedPermissions           = 2,
	ScheduleNotifications          = 3,
	Complete                       = 4,
	ERHPushNotificationState_MAX   = 5,
};

enum class EQueueTimerState : uint8
{
	Unknown                        = 0,
	WaitingForLeader               = 1,
	Queued                         = 2,
	EnteringMatch                  = 3,
	EQueueTimerState_MAX           = 4,
};

enum class EQuickPlayQueueState : uint8
{
	Unknown                        = 0,
	NoQueuesAvailable              = 1,
	NoSelectedQueue                = 2,
	SelectedQueueUnavailable       = 3,
	SelectedQueuePartyMinLimit     = 4,
	SelectedQueuePartyMaxLimit     = 5,
	ReadyToJoin                    = 6,
	WaitingForLeader               = 7,
	Queued                         = 8,
	EnteringMatch                  = 9,
	ReadyToRejoin                  = 10,
	PlayerLevelRequirement         = 11,
	PartyLevelRequirement          = 12,
	PartyRankRequirement           = 13,
	PartyPlatformRequirement       = 14,
	PlayerOwnedJobRequirement      = 15,
	PartyOwnedJobRequirement       = 16,
	EQuickPlayQueueState_MAX       = 17,
};

enum class ERHSettingUIType : uint8
{
	Header                         = 0,
	Slider                         = 1,
	OptionStepper                  = 2,
	Checkbox                       = 3,
	Button                         = 4,
	Dropdown                       = 5,
	KeyBinding                     = 6,
	ERHSettingUIType_MAX           = 7,
};

enum class ERHSettingType : uint8
{
	Bool                           = 0,
	Int                            = 1,
	Float                          = 2,
	Key                            = 3,
	Invalid                        = 4,
	ERHSettingType_MAX             = 5,
};

enum class ERHSocialFriendSection : uint8
{
	Invalid                        = 0,
	PartyMembers                   = 1,
	MatchTeamMembers               = 2,
	PartyInvitations               = 3,
	OnlineRHFriends                = 4,
	OnlinePlatformFriends          = 5,
	OfflineMctsFriends             = 6,
	Blocked                        = 7,
	Pending                        = 8,
	MAX                            = 9,
};

enum class ERHSocialPanelDisplayOption : uint8
{
	HideIfEmpty                    = 0,
	ShowIfEmpty                    = 1,
	ERHSocialPanelDisplayOption_MAX = 2,
};

enum class EStoreSectionTypes : uint8
{
	AccountCosmetics               = 0,
	Bundles                        = 1,
	PortalOffers                   = 2,
	EStoreSectionTypes_MAX         = 3,
};

enum class EStoreItemCollectionMode : uint8
{
	StoreItems                     = 0,
	BlockedItems                   = 1,
	RefundedItems                  = 2,
	EStoreItemCollectionMode_MAX   = 3,
};

enum class EStoreItemWidgetType : uint8
{
	ELargePanel                    = 0,
	ETallPanel                     = 1,
	ESmallPanel                    = 2,
	EWidePanel                     = 3,
	STORE_WIDGET_TYPE_MAX          = 4,
	EStoreItemWidgetType_MAX       = 5,
};

enum class EToastCategory : uint8
{
	ETOAST_INFO                    = 0,
	ETOAST_ERROR                   = 1,
	ETOAST_FRIEND                  = 2,
	ETOAST_PARTY                   = 3,
	ETOAST_CHALLENGE               = 4,
	ETOAST_MERC_MASTERY            = 5,
	ETOAST_ITEM_UNLOCK             = 6,
	ETOAST_AWARD                   = 7,
	ETOAST_BATTLEPASS_TIER         = 8,
	ETOAST_BOOST_ACTIVATION        = 9,
	ETOAST_PLAYER_LEVEL            = 10,
	ETOAST_EVENT_CHALLENGE         = 11,
	ETOAST_WEAPON_MASTERY          = 12,
	ETOAST_MAX                     = 13,
};

enum class EReportPlayerReason : uint8
{
	Unknown_None                   = 0,
	Harassment                     = 1,
	Cheating                       = 2,
	Teaming                        = 3,
	IntentionalFeeding             = 4,
	StreamSniping                  = 5,
	LeavingTheGame_AFK             = 6,
	VerbalAbuse                    = 7,
	OtherReason                    = 8,
	AFK                            = 9,
	EReportPlayerReason_MAX        = 10,
};

enum class ERHPlayerOnlineStatus : uint8
{
	FGS_InParty                    = 0,
	FGS_PendingParty               = 1,
	FGS_InGame                     = 2,
	FGS_InMatch                    = 3,
	FGS_InQueue                    = 4,
	FGS_Online                     = 5,
	FGS_DND                        = 6,
	FGS_Away                       = 7,
	FGS_Offline                    = 8,
	FGS_FriendRequest              = 9,
	FGS_PendingInvite              = 10,
	FGS_MAX                        = 11,
};

enum class EViewManagerTransitionState : uint8
{
	Idle                           = 0,
	Loading                        = 1,
	AnimatingHide                  = 2,
	AnimatingShow                  = 3,
	Locked                         = 4,
	EViewManagerTransitionState_MAX = 5,
};

enum class EViewRouteRedirectionPhase : uint8
{
	VIEW_ROUTE_REDIRECT_None       = 0,
	VIEW_ROUTE_REDIRECT_ApplicationLaunch = 1,
	VIEW_ROUTE_REDIRECT_AccountLogin = 2,
	VIEW_ROUTE_REDIRECT_AlwaysCheck = 3,
	VIEW_ROUTE_REDIRECT_MAX        = 4,
};

enum class ESubPanelAlignment : uint8
{
	ESubPanelAlignment_Horizontal  = 0,
	ESubPanelAlignment_VerticalLeft = 1,
	ESubPanelAlignment_VerticalRight = 2,
	ESubPanelAlignment_MAX         = 3,
};

enum class ENewsHeaderAlignment : uint8
{
	ENewsHeaderAlignment_Center    = 0,
	ENewsHeaderAlignment_Left      = 1,
	ENewsHeaderAlignment_MAX       = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct RallyHereStart.RHProfileItemsWrapper
struct RallyHereStart_RHProfileItemsWrapper
{
public:
	TArray<class UPlatformInventoryItem*>        Items;                                             // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct RallyHereStart.RHEquippedLoadoutItemWrapper
struct RallyHereStart_RHEquippedLoadoutItemWrapper
{
public:
	class UPlatformInventoryItem*                Item;                                              // 0x0(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct RallyHereStart.RH_CustomMatchMember
struct RallyHereStart_RH_CustomMatchMember
{
public:
	class URH_RHFriendAndPlatformFriend*         Friend;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TeamId;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPendingInvite;                                  // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_410B[0x3];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RallyHereStart.RH_PartyMemberData
struct RallyHereStart_RH_PartyMemberData
{
public:
	class URH_PlayerInfo*                        PlayerData;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFriend;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4112[0x7];                                     // Fixing Size After Last Property  
	class FText                                  StatusMessage;                                     // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         Online;                                            // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPending;                                         // 0x29(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanInvite;                                         // 0x2A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsLeader;                                          // 0x2B(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsReady;                                           // 0x2C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4118[0x3];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct RallyHereStart.RH_StringPair
struct RallyHereStart_RH_StringPair
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct RallyHereStart.RH_LoadoutItem
struct RallyHereStart_RH_LoadoutItem
{
public:
	bool                                         Default;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411E[0x3];                                     // Fixing Size After Last Property  
	int32                                        Count;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemId;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Charges;                                           // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      InventoryId;                                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData;                                        // 0x20(0x50)(BlueprintVisible, BlueprintReadOnly, RepSkip, NativeAccessSpecifierPublic)
	TArray<struct RallyHereStart_RH_StringPair>  CustomDataArray;                                   // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct RallyHereStart.RH_LoadoutSlotBehavior
struct RallyHereStart_RH_LoadoutSlotBehavior
{
public:
	bool                                         DefaultOnly;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseStackSize;                                      // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4124[0x6];                                     // Fixing Size After Last Property  
	TMap<int32, TSoftObjectPtr<class URH_ItemAsset>> DefaultAssets;                                     // 0x8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RallyHereStart.RH_LoadoutRequirements
struct RallyHereStart_RH_LoadoutRequirements
{
public:
	int32                                        RequiredLevel;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredInventoryId;                               // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTag              RequiredClass;                                     // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct GameplayTags_GameplayTagContainer     RequiredTypes;                                     // 0x10(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x8 (0x38 - 0x30)
// ScriptStruct RallyHereStart.RH_LoadoutSlotRequirements
struct RallyHereStart_RH_LoadoutSlotRequirements : public RallyHereStart_RH_LoadoutRequirements
{
public:
	int32                                        RequiredItemId;                                    // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_412F[0x4];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct RallyHereStart.RH_LoadoutSlotConfig
struct RallyHereStart_RH_LoadoutSlotConfig
{
public:
	struct CoreUObject_Guid                      SlotId;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_RH_LoadoutSlotBehavior Behavior;                                          // 0x10(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct RallyHereStart_RH_LoadoutSlotRequirements Requirements;                                      // 0x68(0x38)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// ScriptStruct RallyHereStart.RH_LoadoutSlot
struct RallyHereStart_RH_LoadoutSlot
{
public:
	bool                                         Dirty;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4139[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereStart_RH_LoadoutItem         Item;                                              // 0x8(0x80)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct RallyHereStart_RH_LoadoutSlotConfig   Config;                                            // 0x88(0xA0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RallyHereStart.LoginQueueInfo
struct RallyHereStart_LoginQueueInfo
{
public:
	class FText                                  QueueMessage;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        QueuePosition;                                     // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QueueSize;                                         // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EstimatedWaitTime;                                 // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_413D[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RallyHereStart.RHSocialOverlaySectionInfo
struct RallyHereStart_RHSocialOverlaySectionInfo
{
public:
	enum class ERHSocialOverlaySection           Section;                                           // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4149[0x7];                                     // Fixing Size After Last Property  
	class FString                                SubSection;                                        // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct RallyHereStart.TickAnimationParams
struct RallyHereStart_TickAnimationParams
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           UpdateEvent;                                       // 0x4(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           FinishedEvent;                                     // 0x14(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPlaying;                                         // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4156[0x3];                                     // Fixing Size After Last Property  
	float                                        ElapsedTime;                                       // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RallyHereStart.IconReference
struct RallyHereStart_IconReference
{
public:
	class FName                                  IconType;                                          // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UIconInfo*                             IconInfo;                                          // 0x8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct RallyHereStart.PlayerExp_StatAccumulator
struct RallyHereStart_PlayerExp_StatAccumulator
{
public:
	uint8                                        Pad_419C[0x60];                                    // Fixing Size After Last Property  
	float                                        Minimum;                                           // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Maximum;                                           // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       Mean;                                              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       StandardDeviation;                                 // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       Variance;                                          // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       Quantile25;                                        // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       Quantile50;                                        // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       Quantile75;                                        // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       Quantile90;                                        // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       Quantile95;                                        // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       Quantile97;                                        // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	double                                       Quantile99;                                        // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SampleUnderflowCount;                              // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SampleOverflowCount;                               // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SampleCount;                                       // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_41AA[0x4];                                     // Fixing Size Of Struct 
};

// 0xA8 (0xB0 - 0x8)
// ScriptStruct RallyHereStart.CurrencyImageRow
struct RallyHereStart_CurrencyImageRow : public Engine_TableRowBase
{
public:
	int32                                        Quantity;                                          // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BonusQuantity;                                     // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x10(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             FullSplashImage;                                   // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EExternalSkuSource, class FString> ExternalProductSkus;                               // 0x60(0x50)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RallyHereStart.CustomLobbyTeam
struct RallyHereStart_CustomLobbyTeam
{
public:
	TArray<struct RallyHereStart_RH_CustomMatchMember> TeamMembers;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RallyHereStart.RHEventData
struct RallyHereStart_RHEventData : public Engine_TableRowBase
{
public:
	TSoftObjectPtr<class URHEvent>               DataObject;                                        // 0x8(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RallyHereStart.RHInactivePlayerStateEntry
struct RallyHereStart_RHInactivePlayerStateEntry
{
public:
	struct CoreUObject_Guid                      RHPlayerUuid;                                      // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerState*                          PlayerState;                                       // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct RallyHereStart.RHSonyMatchData
struct RallyHereStart_RHSonyMatchData
{
public:
	class FString                                MatchID;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41B9[0x30];                                    // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RallyHereStart.RHPlayerProfile
struct RallyHereStart_RHPlayerProfile
{
public:
	struct CoreUObject_Guid                      RHPlayerUuid;                                      // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerName;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSpectator;                                        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugPlayer;                                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41C0[0x6];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RallyHereStart.ButtonPromptData
struct RallyHereStart_ButtonPromptData
{
public:
	struct InputCore_Key                         Key;                                               // 0x0(0x18)(BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Text;                                              // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RallyHereStart.ButtonPromptContext
struct RallyHereStart_ButtonPromptContext
{
public:
	TArray<struct RallyHereStart_ButtonPromptData> PromptInfo;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RallyHereStart.SettingConfigPair
struct RallyHereStart_SettingConfigPair
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct RallyHereStart.ColorPaletteInfo
struct RallyHereStart_ColorPaletteInfo : public Engine_TableRowBase
{
public:
	struct CoreUObject_LinearColor               LinearColor;                                       // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x60 - 0x8)
// ScriptStruct RallyHereStart.FontPaletteInfo
struct RallyHereStart_FontPaletteInfo : public Engine_TableRowBase
{
public:
	struct SlateCore_SlateFontInfo               FontInfo;                                          // 0x8(0x58)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct RallyHereStart.RHWidgetInfoParams
struct RallyHereStart_RHWidgetInfoParams
{
public:
	TSoftClassPtr<class UUserWidget>             Widget;                                            // 0x0(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreloadWidget;                                    // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41D3[0x7];                                     // Fixing Size After Last Property  
	class FString                                WidgetParentTarget;                                // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                InfoActor;                                         // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct RallyHereStart.RHInputFocusGroup
struct RallyHereStart_RHInputFocusGroup
{
public:
	uint8                                        Pad_41D7[0x38];                                    // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RallyHereStart.RHInputFocusDetails
struct RallyHereStart_RHInputFocusDetails
{
public:
	TArray<struct RallyHereStart_RHInputFocusGroup> FocusGroups;                                       // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        DefaultFocusGroupIndex;                            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentFocusGroupIndex;                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct RallyHereStart.ContextAction
struct RallyHereStart_ContextAction : public Engine_TableRowBase
{
public:
	class FText                                  Text;                                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UInputAction*                          Action;                                            // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputAction*                          AltAction;                                         // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class ERH_INPUT_STATE>           ValidInputTypes;                                   // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        SortOrder;                                         // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EContextPromptAnchoring           Anchor;                                            // 0x44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EContextActionType                ActionType;                                        // 0x45(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41EC[0x2];                                     // Fixing Size After Last Property  
	TSubclassOf<class URHWidget>                 PromptWidget;                                      // 0x48(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoldDuration;                                      // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsHidden;                                          // 0x54(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41EF[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RallyHereStart.RouteContextInfo
struct RallyHereStart_RouteContextInfo
{
public:
	TArray<class UContextActionData*>            ActionData;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct RallyHereStart.RHJsonDataWrapper
struct RallyHereStart_RHJsonDataWrapper
{
public:
	TSet<class URHJsonData*>                     JsonDataSet;                                       // 0x0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct RallyHereStart.RHShouldShowPanelsWrapper
struct RallyHereStart_RHShouldShowPanelsWrapper
{
public:
	TMap<class URHJsonData*, bool>               ShouldShowByPanel;                                 // 0x0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct RallyHereStart.RHInventoryCountWrapper
struct RallyHereStart_RHInventoryCountWrapper
{
public:
	TMap<struct RallyHereIntegration_RH_ItemId, int32> InventoryCountsById;                               // 0x0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct RallyHereStart.RHPlayerLoadoutsWrapper
struct RallyHereStart_RHPlayerLoadoutsWrapper
{
public:
	TMap<class FString, class URH_PlayerLoadout*> LoadoutsById;                                      // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x30 (0x38 - 0x8)
// ScriptStruct RallyHereStart.AccountLoadoutDefaults
struct RallyHereStart_AccountLoadoutDefaults : public Engine_TableRowBase
{
public:
	enum class ERHLoadoutSlotTypes               SlotType;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4202[0x7];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UPlatformInventoryItem> Default;                                           // 0x10(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct RallyHereStart.RH_LoadoutConfigData
struct RallyHereStart_RH_LoadoutConfigData
{
public:
	class FString                                LoadoutType;                                       // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      LoadoutId;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SortOrder;                                         // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AssignInventory;                                   // 0x24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4207[0x3];                                     // Fixing Size After Last Property  
	struct RallyHereStart_RH_LoadoutRequirements Requirements;                                      // 0x28(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x1C0 (0x1C0 - 0x0)
// ScriptStruct RallyHereStart.RH_Loadout
struct RallyHereStart_RH_Loadout
{
public:
	bool                                         Available;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4209[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_Guid                      CharacterId;                                       // 0x4(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_420C[0x4];                                     // Fixing Size After Last Property  
	struct RallyHereStart_RH_LoadoutConfigData   Config;                                            // 0x18(0x58)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct RallyHereStart_RH_LoadoutSlot> Slots;                                             // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct CoreUObject_Guid, int32>         SlotIdMap;                                         // 0x80(0x50)(RepSkip, NativeAccessSpecifierPrivate)
	TMap<int32, int32>                           ItemIdMap;                                         // 0xD0(0x50)(RepSkip, NativeAccessSpecifierPrivate)
	TMap<struct GameplayTags_GameplayTag, int32> SlotTagMap;                                        // 0x120(0x50)(RepSkip, NativeAccessSpecifierPrivate)
	TMap<int32, struct RallyHereStart_RH_LoadoutSlot> CachedSlotMap;                                     // 0x170(0x50)(RepSkip, NativeAccessSpecifierPrivate)
};

// 0x20 (0x28 - 0x8)
// ScriptStruct RallyHereStart.ErrorMessage
struct RallyHereStart_ErrorMessage : public Engine_TableRowBase
{
public:
	int32                                        ErrorMsgId;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4216[0x4];                                     // Fixing Size After Last Property  
	class FText                                  ErrorMsg;                                          // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct RallyHereStart.RHMediaPlayerWidgetPlaylistEntry
struct RallyHereStart_RHMediaPlayerWidgetPlaylistEntry : public Engine_TableRowBase
{
public:
	bool                                         bIsSkippable;                                      // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_421A[0x3];                                     // Fixing Size After Last Property  
	float                                        SkippableAfter;                                    // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceFirstWatch;                                  // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyWatchOnce;                                    // 0x11(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       MajorVersion;                                      // 0x12(0x2)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4220[0x4];                                     // Fixing Size After Last Property  
	TSoftObjectPtr<class UPlatformMediaSource>   PlatformMediaSource;                               // 0x18(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LocalActionName;                                   // 0x40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct RallyHereStart.RH_ActiveOrderWatch
struct RallyHereStart_RH_ActiveOrderWatch
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4225[0x38];                                    // Fixing Size Of Struct 
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RallyHereStart.OrderHeaderOverrides
struct RallyHereStart_OrderHeaderOverrides : public Engine_TableRowBase
{
public:
	class FText                                  Header;                                            // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct RallyHereIntegration_RH_LootId> LootTableItemIds;                                  // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x30 - 0x8)
// ScriptStruct RallyHereStart.OverlayTabViewRow
struct RallyHereStart_OverlayTabViewRow : public Engine_TableRowBase
{
public:
	class FText                                  TabName;                                           // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSubclassOf<class URHWidget>                 ViewWidget;                                        // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class URHTabValidator>           TabValidator;                                      // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct RallyHereStart.RHInputActionNameTypePair
struct RallyHereStart_RHInputActionNameTypePair
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionType                  Type;                                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4230[0x3];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RallyHereStart.RHInputActionTiedNames
struct RallyHereStart_RHInputActionTiedNames
{
public:
	class FName                                  Press;                                             // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Hold;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Repeat;                                            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct RallyHereStart.RHCustomInputActionKey
struct RallyHereStart_RHCustomInputActionKey
{
public:
	int32                                        PropId;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  KeyboardName;                                      // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GamepadName;                                       // 0xC(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct RallyHereStart.RHCustomInputAxisKey
struct RallyHereStart_RHCustomInputAxisKey
{
public:
	int32                                        PropId;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  KeyboardName;                                      // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        KeyboardScale;                                     // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  GamepadName;                                       // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GamepadScale;                                      // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct RallyHereStart.RHInputActionKey
struct RallyHereStart_RHInputActionKey
{
public:
	struct InputCore_Key                         Key;                                               // 0x0(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionType                  Type;                                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_423F[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RallyHereStart.RHInputActionKeyMapping
struct RallyHereStart_RHInputActionKeyMapping
{
public:
	struct Engine_InputActionKeyMapping          Mapping;                                           // 0x0(0x28)(NativeAccessSpecifierPublic)
	enum class EInputActionType                  Type;                                              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4243[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RallyHereStart.RHCustomInputActionKeyMappings
struct RallyHereStart_RHCustomInputActionKeyMappings
{
public:
	TArray<struct RallyHereStart_RHInputActionKeyMapping> KBM_Mappings;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct RallyHereStart_RHInputActionKeyMapping> GP_Mappings;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct RallyHereStart_RHInputActionKeyMapping> Touch_Mappings;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RallyHereStart.RHInputAxisKeyMappings
struct RallyHereStart_RHInputAxisKeyMappings
{
public:
	TArray<struct Engine_InputAxisKeyMapping>    InputAxisKeyMappings;                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct RallyHereStart.RHCustomInputAxisKeyMappings
struct RallyHereStart_RHCustomInputAxisKeyMappings
{
public:
	TMap<float, struct RallyHereStart_RHInputAxisKeyMappings> KBM_Mappings;                                      // 0x0(0x50)(NativeAccessSpecifierPublic)
	TMap<float, struct RallyHereStart_RHInputAxisKeyMappings> GP_Mappings;                                       // 0x50(0x50)(NativeAccessSpecifierPublic)
	TMap<float, struct RallyHereStart_RHInputAxisKeyMappings> Touch_Mappings;                                    // 0xA0(0x50)(NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct RallyHereStart.RHPopupButtonConfig
struct RallyHereStart_RHPopupButtonConfig
{
public:
	class FText                                  Label;                                             // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Action;                                            // 0x18(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class ERHPopupButtonType                Type;                                              // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4252[0x3];                                     // Fixing Size After Last Property  
	float                                        DelayToActivate;                                   // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDelayTimerAt;                                 // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4253[0x4];                                     // Fixing Size Of Struct 
};

// 0x108 (0x108 - 0x0)
// ScriptStruct RallyHereStart.RHPopupConfig
struct RallyHereStart_RHPopupConfig
{
public:
	class FText                                  Header;                                            // 0x0(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  SubHeading;                                        // 0x18(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             HeadingIcon;                                       // 0x30(0x28)(BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x58(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  Warning;                                           // 0x70(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	float                                        Timer;                                             // 0x88(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlockActions;                                     // 0x8C(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TextEntry;                                         // 0x8D(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4259[0x2];                                     // Fixing Size After Last Property  
	class FText                                  TextEntryHint;                                     // 0x90(0x18)(BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         IsImportant;                                       // 0xA8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanBeShownOver;                                    // 0xA9(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TreatAsBlocker;                                    // 0xAA(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_425A[0x5];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereStart_RHPopupButtonConfig> Buttons;                                           // 0xB0(0x10)(BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            CancelAction;                                      // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class ETextJustify                      TextAlignment;                                     // 0xD0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_425C[0x3];                                     // Fixing Size After Last Property  
	int32                                        PopupId;                                           // 0xD4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHPopupFormat                    PopupFormat;                                       // 0xD8(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_425E[0x7];                                     // Fixing Size After Last Property  
	class FString                                TopImageTextureName;                               // 0xE0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct InputCore_Key                         KeyToDisplay;                                      // 0xF0(0x18)(BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct RallyHereStart.RHMatchmakingAttributes
struct RallyHereStart_RHMatchmakingAttributes
{
public:
	TMap<class FString, float>                   DoubleAttributes;                                  // 0x0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           StringAttributes;                                  // 0x50(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	TSet<class FString>                          TagAttributes;                                     // 0xA0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           ExtensionAttributes;                               // 0xF0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x60 (0x68 - 0x8)
// ScriptStruct RallyHereStart.RHQueueDetails
struct RallyHereStart_RHQueueDetails : public Engine_TableRowBase
{
public:
	class FText                                  Name;                                              // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x38(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCustom;                                          // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4268[0x3];                                     // Fixing Size After Last Property  
	int32                                        LevelLock;                                         // 0x64(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x70 - 0x8)
// ScriptStruct RallyHereStart.RHMapDetails
struct RallyHereStart_RHMapDetails : public Engine_TableRowBase
{
public:
	TSoftObjectPtr<class UWorld>                 Map;                                               // 0x8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Name;                                              // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Thumbnail;                                         // 0x48(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct RallyHereStart.SettingDelegateStruct
struct RallyHereStart_SettingDelegateStruct
{
public:
	FDelegateProperty_                           SettingApplied;                                    // 0x0(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SettingSaved;                                      // 0x10(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA (0xA - 0x0)
// ScriptStruct RallyHereStart.RHAllowedPlatformTypes
struct RallyHereStart_RHAllowedPlatformTypes
{
public:
	bool                                         XBoxOne;                                           // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PS4;                                               // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SWITCH;                                            // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Windows;                                           // 0x3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Mac;                                               // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Linux;                                             // 0x5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IOS;                                               // 0x6(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Android;                                           // 0x7(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         XSX;                                               // 0x8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PS5;                                               // 0x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// ScriptStruct RallyHereStart.RHSettingsState
struct RallyHereStart_RHSettingsState
{
public:
	bool                                         bIsGamepadAttached;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMouseAttached;                                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDockedMode;                                     // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsHandheldMode;                                   // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTouchMode;                                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct RallyHereStart.RHRequiredInputTypes
struct RallyHereStart_RHRequiredInputTypes
{
public:
	bool                                         Gamepad;                                           // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Mouse;                                             // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Touch;                                             // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RallyHereStart.RHSettingsWidgetConfig
struct RallyHereStart_RHSettingsWidgetConfig
{
public:
	TSubclassOf<class URHSettingsWidget>         WidgetClass;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class URHSettingsInfoBase>       SettingInfo;                                       // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RallyHereStart.ColorOptions
struct RallyHereStart_ColorOptions
{
public:
	class FText                                  OptionName;                                        // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               OptionColor;                                       // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RallyHereStart.RHSettingsGroupConfig
struct RallyHereStart_RHSettingsGroupConfig
{
public:
	class URHSettingsContainerConfigAsset*       MainSettingContainerAsset;                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URHSettingsContainerConfigAsset*> SubSettingContainerAssets;                         // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct RallyHereStart.RHSettingPropertyId
struct RallyHereStart_RHSettingPropertyId
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ID;                                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct RallyHereStart.RHSettingPropertyValue
struct RallyHereStart_RHSettingPropertyValue
{
public:
	int32                                        IntVal;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42A4[0x4];                                     // Fixing Size After Last Property  
	class FString                                StringVal;                                         // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FloatVal;                                          // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSet;                                            // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42A5[0x3];                                     // Fixing Size Of Struct 
};

// 0x68 (0x68 - 0x0)
// ScriptStruct RallyHereStart.RHSettingConfigSet
struct RallyHereStart_RHSettingConfigSet
{
public:
	class FString                                CaseId;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        V;                                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ConfigSetId;                                       // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct RallyHereStart_RHSettingPropertyValue> PropertiesById;                                    // 0x18(0x50)(NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct RallyHereStart.RHKeyBind
struct RallyHereStart_RHKeyBind
{
public:
	struct InputCore_Key                         Primary;                                           // 0x0(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionType                  PrimaryInputActionType;                            // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42AD[0x7];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         Secondary;                                         // 0x20(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionType                  SecondaryInputActionType;                          // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42AF[0x7];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         Gamepad;                                           // 0x40(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct InputCore_Key                         Combo;                                             // 0x58(0x18)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputActionType                  GamepadInputActionType;                            // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42B5[0x7];                                     // Fixing Size Of Struct 
};

// 0x1C (0x1C - 0x0)
// ScriptStruct RallyHereStart.RHKeyGroup
struct RallyHereStart_RHKeyGroup
{
public:
	uint8                                        Pad_42B6[0x1C];                                    // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RallyHereStart.RHKeyBindInfo
struct RallyHereStart_RHKeyBindInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputType                        InputType;                                         // 0xC(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKeyBindType                      KeyBindType;                                       // 0xD(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPermanentBinding;                                // 0xE(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42B9[0x1];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct RallyHereStart.RH_LoadoutSettingSlot
struct RallyHereStart_RH_LoadoutSettingSlot
{
public:
	int32                                        Count;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemId;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotType;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SlotIndex;                                         // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      InventoryId;                                       // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RallyHereStart.RH_LoadoutSetting
struct RallyHereStart_RH_LoadoutSetting
{
public:
	int32                                        Version;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      CharacterId;                                       // 0x4(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42C7[0x4];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereStart_RH_LoadoutSettingSlot> Slots;                                             // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// ScriptStruct RallyHereStart.RHSocialPanelSectionDef
struct RallyHereStart_RHSocialPanelSectionDef
{
public:
	uint8                                        Pad_42C9[0x3];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// ScriptStruct RallyHereStart.StorePriceKey
struct RallyHereStart_StorePriceKey
{
public:
	uint8                                        Pad_42CB[0x20];                                    // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RallyHereStart.StoreItemWithTrueSort
struct RallyHereStart_StoreItemWithTrueSort
{
public:
	class URHStoreItem*                          StoreItem;                                         // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42CD[0x10];                                    // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RallyHereStart.AccountConsumableDetails
struct RallyHereStart_AccountConsumableDetails
{
public:
	class UPlatformInventoryItem*                Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QuantityOwned;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42CF[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RallyHereStart.RHS_ItemCountUpdatedEvents
struct RallyHereStart_RHS_ItemCountUpdatedEvents
{
public:
	TArray<FDelegateProperty_>                   Events;                                            // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct RallyHereStart.RHS_PendingInventoryOrder
struct RallyHereStart_RHS_PendingInventoryOrder
{
public:
	uint8                                        Pad_42D1[0xB0];                                    // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct RallyHereStart.ToastData
struct RallyHereStart_ToastData
{
public:
	enum class EToastCategory                    ToastCategory;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42D5[0x7];                                     // Fixing Size After Last Property  
	class FText                                  Title;                                             // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Message;                                           // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class URHStoreItem*                          Reward;                                            // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlatformInventoryItem*                OptionalItemValue;                                 // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OptionalIntValue;                                  // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42DA[0x4];                                     // Fixing Size Of Struct 
};

// 0x60 (0x60 - 0x0)
// ScriptStruct RallyHereStart.ReportPlayerParams
struct RallyHereStart_ReportPlayerParams
{
public:
	int64                                        PlayerId;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EOSProductUserId;                                  // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MatchID;                                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LocalPlayerTeamId;                                 // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReportedPlayerTeamId;                              // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalPlayerCount;                                  // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FromBackfillEnabledGame;                           // 0x34(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42DE[0x3];                                     // Fixing Size After Last Property  
	class FString                                PlayerName;                                        // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EReportPlayerReason               Reason;                                            // 0x48(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42E1[0x7];                                     // Fixing Size After Last Property  
	class FString                                ReportComment;                                     // 0x50(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RallyHereStart.RHSoundThemeEventMapping
struct RallyHereStart_RHSoundThemeEventMapping
{
public:
	class FName                                  SoundEventName;                                    // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundCue*                             SoundToPlay;                                       // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RallyHereStart.ViewRouteRedirectData
struct RallyHereStart_ViewRouteRedirectData
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CheckOrder;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OpenOverOriginal;                                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42E7[0x3];                                     // Fixing Size After Last Property  
	class URHViewRedirecter*                     Redirector;                                        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RallyHereStart.StickyWidgetData
struct RallyHereStart_StickyWidgetData
{
public:
	class FName                                  StickyWidgetName;                                  // 0x0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHWidget*                             Widget;                                            // 0x8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x40 - 0x8)
// ScriptStruct RallyHereStart.ViewRoute
struct RallyHereStart_ViewRoute : public Engine_TableRowBase
{
public:
	TSubclassOf<class URHWidget>                 ViewWidget;                                        // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ViewStickyWidgets;                                 // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EViewManagerLayer                 ViewLayer;                                         // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDefaultRoute;                                    // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldPreload;                                     // 0x22(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RequiresLoggedIn;                                  // 0x23(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AlwaysShowContextBar;                              // 0x24(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EViewRouteRedirectionPhase        RedirectionPhase;                                  // 0x25(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42F7[0x2];                                     // Fixing Size After Last Property  
	int32                                        RedirectionPhaseOrder;                             // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42F8[0x4];                                     // Fixing Size After Last Property  
	TSubclassOf<class URHViewRedirecter>         ViewRedirector;                                    // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OpenOverOriginal;                                  // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         BlockOrders;                                       // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42F9[0x6];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RallyHereStart.SubPanel
struct RallyHereStart_SubPanel
{
public:
	class FText                                  Header;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Desc;                                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

}


