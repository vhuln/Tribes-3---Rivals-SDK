#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOnlineProxyStoreOfferDiscountType : uint8
{
	NotOnSale                      = 0,
	Percentage                     = 1,
	DiscountAmount                 = 2,
	PayAmount                      = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4,
};

enum class EInAppPurchaseStatus : uint8
{
	Invalid                        = 0,
	Failed                         = 1,
	Deferred                       = 2,
	Canceled                       = 3,
	Purchased                      = 4,
	Restored                       = 5,
	EInAppPurchaseStatus_MAX       = 6,
};

enum class EBeaconConnectionState : uint8
{
	Invalid                        = 0,
	Closed                         = 1,
	Pending                        = 2,
	Open                           = 3,
	EBeaconConnectionState_MAX     = 4,
};

enum class EClientRequestType : uint8
{
	NonePending                    = 0,
	ExistingSessionReservation     = 1,
	ReservationUpdate              = 2,
	EmptyServerReservation         = 3,
	Reconnect                      = 4,
	Abandon                        = 5,
	ReservationRemoveMembers       = 6,
	AddOrUpdateReservation         = 7,
	EClientRequestType_MAX         = 8,
};

enum class EPartyReservationResult : uint8
{
	NoResult                       = 0,
	RequestPending                 = 1,
	GeneralError                   = 2,
	PartyLimitReached              = 3,
	IncorrectPlayerCount           = 4,
	RequestTimedOut                = 5,
	ReservationDuplicate           = 6,
	ReservationNotFound            = 7,
	ReservationAccepted            = 8,
	ReservationDenied              = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned       = 11,
	ReservationRequestCanceled     = 12,
	ReservationInvalid             = 13,
	BadSessionId                   = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult_MAX    = 16,
};

enum class ESpectatorClientRequestType : uint8
{
	NonePending                    = 0,
	ExistingSessionReservation     = 1,
	ReservationUpdate              = 2,
	EmptyServerReservation         = 3,
	Reconnect                      = 4,
	Abandon                        = 5,
	ESpectatorClientRequestType_MAX = 6,
};

enum class ESpectatorReservationResult : uint8
{
	NoResult                       = 0,
	RequestPending                 = 1,
	GeneralError                   = 2,
	SpectatorLimitReached          = 3,
	IncorrectPlayerCount           = 4,
	RequestTimedOut                = 5,
	ReservationDuplicate           = 6,
	ReservationNotFound            = 7,
	ReservationAccepted            = 8,
	ReservationDenied              = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned       = 11,
	ReservationRequestCanceled     = 12,
	ReservationInvalid             = 13,
	BadSessionId                   = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult_MAX = 16,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x120 - 0x0)
// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
struct OnlineSubsystemUtils_BlueprintSessionResult
{
public:
	uint8                                        Pad_16EB[0x120];                                   // Fixing Size Of Struct 
};

// 0x110 (0x110 - 0x0)
// ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
struct OnlineSubsystemUtils_OnlineProxyStoreOffer
{
public:
	class FString                                OfferId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LongDescription;                                   // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  RegularPriceText;                                  // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        RegularPrice;                                      // 0x70(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_170F[0x4];                                     // Fixing Size After Last Property  
	class FText                                  PriceText;                                         // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        NumericPrice;                                      // 0x90(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1718[0x4];                                     // Fixing Size After Last Property  
	class FString                                CurrencyCode;                                      // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  ReleaseDate;                                       // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  ExpirationDate;                                    // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOnlineProxyStoreOfferDiscountType DiscountType;                                      // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173A[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           DynamicFields;                                     // 0xC0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
struct OnlineSubsystemUtils_InAppPurchaseRestoreInfo2
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemId;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ValidationInfo;                                    // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
struct OnlineSubsystemUtils_InAppPurchaseReceiptInfo2
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemId;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ValidationInfo;                                    // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TransactionIdentifier;                             // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
struct OnlineSubsystemUtils_InAppPurchaseProductRequest2
{
public:
	class FString                                ProductIdentifier;                                 // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsConsumable;                                     // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17EE[0x7];                                     // Fixing Size Of Struct 
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PlayerReservation
struct OnlineSubsystemUtils_PlayerReservation
{
public:
	struct Engine_UniqueNetIdRepl                UniqueID;                                          // 0x0(0x30)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ValidationStr;                                     // 0x30(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Platform;                                          // 0x40(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowCrossplay;                                   // 0x50(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1818[0x3];                                     // Fixing Size After Last Property  
	float                                        ElapsedTime;                                       // 0x54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
struct OnlineSubsystemUtils_InAppPurchaseProductInfo2
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TransactionIdentifier;                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayDescription;                                // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayPrice;                                      // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RawPrice;                                          // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_184B[0x4];                                     // Fixing Size After Last Property  
	class FString                                CurrencyCode;                                      // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrencySymbol;                                    // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DecimalSeparator;                                  // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GroupingSeparator;                                 // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceiptData;                                       // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           DynamicFields;                                     // 0xA8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
struct OnlineSubsystemUtils_PIELoginSettingsInternal
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Token;                                             // 0x10(0x10)(Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Type;                                              // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                TokenBytes;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PartyReservation
struct OnlineSubsystemUtils_PartyReservation
{
public:
	int32                                        TeamNum;                                           // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A6[0x4];                                     // Fixing Size After Last Property  
	struct Engine_UniqueNetIdRepl                PartyLeader;                                       // 0x8(0x30)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct OnlineSubsystemUtils_PlayerReservation> PartyMembers;                                      // 0x38(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct OnlineSubsystemUtils_PlayerReservation> RemovedPartyMembers;                               // 0x48(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
struct OnlineSubsystemUtils_PartyBeaconCrossplayPlatformMapping
{
public:
	class FString                                PlatformName;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlatformType;                                      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
struct OnlineSubsystemUtils_SpectatorReservation
{
public:
	struct Engine_UniqueNetIdRepl                SpectatorId;                                       // 0x0(0x30)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct OnlineSubsystemUtils_PlayerReservation Spectator;                                         // 0x30(0x58)(Transient, NativeAccessSpecifierPublic)
};

}


