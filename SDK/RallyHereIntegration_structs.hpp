#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFriendshipStatus : uint8
{
	RH_None                        = 0,
	RH_Friends                     = 1,
	RH_FriendRequestSent           = 2,
	RH_FriendRequestPending        = 3,
	RH_FriendRequestDeclinedByOther = 4,
	RH_MAX                         = 5,
};

enum class ERHAPI_LocalPlayerLoginOSS : uint8
{
	None                           = 0,
	Login                          = 1,
	Nickname                       = 2,
	ERHAPI_MAX                     = 3,
};

enum class ERHAPI_LoginResult : uint8
{
	Success                        = 0,
	Fail_PartialInstall            = 1,
	Fail_LoginAlreadyPending       = 2,
	Fail_OSSMissing                = 3,
	Fail_OSSNotSupported           = 4,
	Fail_OSSLoginUINotShown        = 5,
	Fail_OSSLoginUINoUserSelected  = 6,
	Fail_OSSLogin                  = 7,
	Fail_OSSLogout                 = 8,
	Fail_OSSNeedsProfile           = 9,
	Fail_OSSAccountTypeNotSufficient = 10,
	Fail_OSSUserNotFound           = 11,
	Fail_OSSAgeRestriction         = 12,
	Fail_OSSPrivilegeCheck         = 13,
	Fail_OSSAuthToken              = 14,
	Fail_MustAcceptAgreements      = 15,
	Fail_RHDenied                  = 16,
	Fail_RHUnknown                 = 17,
	ERHAPI_MAX                     = 18,
};

enum class ERHAPI_PlatformTypes_DEPRECATED : uint8
{
	PT_UNKNOWN                     = 0,
	PT_UNUSED_1                    = 1,
	PT_ANON                        = 2,
	PT_UNUSED_3                    = 3,
	PT_AMAZON                      = 4,
	PT_STEAM                       = 5,
	PT_UNUSED_6                    = 6,
	PT_UNUSED_7                    = 7,
	PT_UNUSED_8                    = 8,
	PT_PSN                         = 9,
	PT_XBOX_LIVE                   = 10,
	PT_BASIC                       = 11,
	PT_FACEBOOK                    = 12,
	PT_GOOGLE                      = 13,
	PT_UNUSED_14                   = 14,
	PT_UNUSED_15                   = 15,
	PT_TWITCH                      = 16,
	PT_UNUSED_17                   = 17,
	PT_UNUSED_18                   = 18,
	PT_UNUSED_19                   = 19,
	PT_UNUSED_20                   = 20,
	PT_UNUSED_21                   = 21,
	PT_NINTENDO_SWITCH             = 22,
	PT_UNUSED_23                   = 23,
	PT_APPLE                       = 24,
	PT_DISCORD                     = 25,
	PT_NINTENDO                    = 26,
	PT_UNUSED_27                   = 27,
	PT_EPIC                        = 28,
	PT_UNUSED_29                   = 29,
	PT_SIMULMEDIA                  = 30,
	PT_UNUSED_31                   = 31,
	PT_GOOGLE_PLAY                 = 32,
	PT_NINTENDO_PPID               = 33,
	PT_MAX_COUNT                   = 34,
	PT_MAX                         = 35,
};

enum class ERH_ServerBootstrapMode : uint8
{
	GameHostProvider               = 0,
	Disabled                       = 1,
	LoginOnly                      = 2,
	AutoCreate                     = 3,
	ERH_MAX                        = 4,
};

enum class ERH_ServerBootstrapFlowStep : uint8
{
	Unstarted                      = 0,
	Failed                         = 1,
	LoggingIn                      = 2,
	Recycling                      = 3,
	Registration                   = 4,
	WaitingForSession              = 5,
	SyncingToSession               = 6,
	Complete                       = 7,
	ERH_MAX                        = 8,
};

enum class EFRH_NotificationPollingTypes : uint8
{
	LongPoll                       = 0,
	FRH_MAX                        = 1,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct RallyHereIntegration.RH_ErrorInfo
struct RallyHereIntegration_RH_ErrorInfo
{
public:
	uint8                                        Pad_24DB[0x8];                                     // Fixing Size After Last Property  
	int32                                        ResponseCode;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24DF[0x4];                                     // Fixing Size After Last Property  
	class FString                                ResponseContent;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct RallyHereIntegration.RH_CustomEndpointResponseWrapper
struct RallyHereIntegration_RH_CustomEndpointResponseWrapper
{
public:
	int32                                        HttpResponseCode;                                  // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24E4[0x4];                                     // Fixing Size After Last Property  
	TArray<class FString>                        HttpHeaders;                                       // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_JsonValue          HttpBody;                                          // 0x18(0x10)(Edit, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_ErrorInfo     RHErrorInfo;                                       // 0x28(0x20)(Edit, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct RallyHereIntegration.RH_LoginResult
struct RallyHereIntegration_RH_LoginResult
{
public:
	enum class ERHAPI_LoginResult                Result;                                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_LocalPlayerLoginOSS        OSSType;                                           // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24EF[0x6];                                     // Fixing Size After Last Property  
	class FString                                OSSErrorMessage;                                   // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F0[0x20];                                    // Fixing Size After Last Property  
	uint32                                       PrivilegeResults;                                  // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustAcceptEULA;                                   // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustAcceptTOS;                                    // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMustAcceptPP;                                     // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F4[0x1];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// ScriptStruct RallyHereIntegration.RH_QueueSearchParams
struct RallyHereIntegration_RH_QueueSearchParams
{
public:
	int32                                        Cursor;                                            // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RallyHereIntegration.RH_QueueSearchResult
struct RallyHereIntegration_RH_QueueSearchResult
{
public:
	struct RallyHereIntegration_RH_QueueSearchParams SearchParams;                                      // 0x0(0x8)(NoDestructor, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class URH_MatchmakingQueueInfo>> Queues;                                            // 0x8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RallyHereIntegration.RH_SessionMemberStatusState
struct RallyHereIntegration_RH_SessionMemberStatusState
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValid;                                          // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_SessionPlayerStatus        Status;                                            // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2523[0x2];                                     // Fixing Size After Last Property  
	int32                                        TeamId;                                            // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RallyHereIntegration.RH_SessionBrowserSearchParams
struct RallyHereIntegration_RH_SessionBrowserSearchParams
{
public:
	class FString                                SessionType;                                       // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        SessionIds;                                        // 0x10(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        Cursor;                                            // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageSize;                                          // 0x24(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCacheSessionDetails;                              // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2531[0x7];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// ScriptStruct RallyHereIntegration.RH_SessionBrowserSearchResult
struct RallyHereIntegration_RH_SessionBrowserSearchResult
{
public:
	struct RallyHereIntegration_RH_SessionBrowserSearchParams SearchParams;                                      // 0x0(0x30)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct RallyHereAPI_RHAPI_BrowserSessionInfo> SessionInfos;                                      // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class URH_SessionView*>               Sessions;                                          // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct RallyHereIntegration.RH_PlayerSettingsDataWrapper
struct RallyHereIntegration_RH_PlayerSettingsDataWrapper
{
public:
	TMap<class FString, struct RallyHereAPI_RHAPI_SettingData> Content;                                           // 0x0(0x50)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct RallyHereIntegration.RH_ItemInventory
struct RallyHereIntegration_RH_ItemInventory
{
public:
	struct CoreUObject_Guid                      InventoryId;                                       // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_InventoryType              InventoryType;                                     // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2552[0x3];                                     // Fixing Size After Last Property  
	int32                                        ItemId;                                            // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2555[0x14];                                    // Fixing Size After Last Property  
	struct CoreUObject_DateTime                  Acquired;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData;                                        // 0x38(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class ERHAPI_InventoryBucket            Bucket;                                            // 0x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_255C[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RallyHereIntegration.RHVendorGetRequest
struct RallyHereIntegration_RHVendorGetRequest
{
public:
	uint8                                        Pad_2575[0x20];                                    // Fixing Size After Last Property  
	TArray<int32>                                VendorIds;                                         // 0x20(0x10)(BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct RallyHereIntegration.RH_CustomEndpointRequestWrapper
struct RallyHereIntegration_RH_CustomEndpointRequestWrapper
{
public:
	class FString                                EndpointId;                                        // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2581[0x4];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_JsonValue          Body;                                              // 0x18(0x10)(Edit, NativeAccessSpecifierPublic)
	class FString                                ContentType;                                       // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RallyHereIntegration.RH_PlayerPlatformId
struct RallyHereIntegration_RH_PlayerPlatformId
{
public:
	class FString                                UserId;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Platform                   PlatformType;                                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_258B[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RallyHereIntegration.RH_ServerTimeCache
struct RallyHereIntegration_RH_ServerTimeCache
{
public:
	struct CoreUObject_DateTime                  LastReceivedServerDateTime;                        // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  LastReceivedServerAtTime;                          // 0x8(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct RallyHereIntegration.RH_DiagnosticReportOptions
struct RallyHereIntegration_RH_DiagnosticReportOptions
{
public:
	bool                                         bIncludeMetadata;                                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeWebRequests;                               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWriteToFile;                                      // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25A6[0x5];                                     // Fixing Size After Last Property  
	class FString                                OutputFilename;                                    // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWriteToCloud;                                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25AA[0x3];                                     // Fixing Size After Last Property  
	TWeakObjectPtr<class UWorld>                 World;                                             // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25AC[0x14];                                    // Fixing Size Of Struct 
};

// 0x60 (0x60 - 0x0)
// ScriptStruct RallyHereIntegration.RH_SandboxConfiguration
struct RallyHereIntegration_RH_SandboxConfiguration
{
public:
	class FString                                SandboxId;                                         // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BaseUrl;                                           // 0x10(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientId;                                          // 0x20(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ClientSecret;                                      // 0x30(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerExperienceReportURL;                         // 0x40(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AnalyticsURL;                                      // 0x50(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct RallyHereIntegration.RH_PlayerSettingKeySetWrapper
struct RallyHereIntegration_RH_PlayerSettingKeySetWrapper
{
public:
	TSet<class FString>                          SettingKeySet;                                     // 0x0(0x50)(BlueprintVisible, Transient, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RallyHereIntegration.RH_PlayerAndPlatformInfo
struct RallyHereIntegration_RH_PlayerAndPlatformInfo
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_PlayerPlatformId PlayerPlatformId;                                  // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct RallyHereIntegration.RH_InventorySession
struct RallyHereIntegration_RH_InventorySession
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Platform                   SessionPlatform;                                   // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25D2[0x7];                                     // Fixing Size After Last Property  
	class FString                                OrderId;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                AppliedDurableLoot;                                // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct RallyHereIntegration.RH_BaseInventoryOperation
struct RallyHereIntegration_RH_BaseInventoryOperation
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemId;                                            // 0x4(0x4)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData;                                        // 0x8(0x50)(Edit, Transient, DisableEditOnInstance, NativeAccessSpecifierPublic)
	enum class ERHAPI_InventoryBucket            Bucket;                                            // 0x58(0x1)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25DD[0x17];                                    // Fixing Size After Last Property  
	bool                                         InventoryShouldExpire;                             // 0x70(0x1)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25E6[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x80 - 0x78)
// ScriptStruct RallyHereIntegration.RH_CreateInventory
struct RallyHereIntegration_RH_CreateInventory : public RallyHereIntegration_RH_BaseInventoryOperation
{
public:
	uint8                                        Pad_25F4[0x8];                                     // Fixing Size Of Struct 
};

// 0x18 (0x90 - 0x78)
// ScriptStruct RallyHereIntegration.RH_UpdateInventory
struct RallyHereIntegration_RH_UpdateInventory : public RallyHereIntegration_RH_BaseInventoryOperation
{
public:
	uint8                                        Pad_2601[0x18];                                    // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// ScriptStruct RallyHereIntegration.RH_PollTimerSetting
struct RallyHereIntegration_RH_PollTimerSetting
{
public:
	class FName                                  TimerName;                                         // 0x0(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Interval;                                          // 0x8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct RallyHereIntegration.RH_LegacyIdToGuid
struct RallyHereIntegration_RH_LegacyIdToGuid
{
public:
	struct CoreUObject_Guid                      ID;                                                // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        LegacyId;                                          // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x0 (0x14 - 0x14)
// ScriptStruct RallyHereIntegration.RH_ItemId
struct RallyHereIntegration_RH_ItemId : public RallyHereIntegration_RH_LegacyIdToGuid
{
public:
};

// 0x0 (0x14 - 0x14)
// ScriptStruct RallyHereIntegration.RH_LootId
struct RallyHereIntegration_RH_LootId : public RallyHereIntegration_RH_LegacyIdToGuid
{
public:
};

}


