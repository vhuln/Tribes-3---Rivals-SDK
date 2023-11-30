#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSubsystemPlugin.GetLocalPlayerSubsystem
struct URH_LocalPlayerSubsystemPlugin_GetLocalPlayerSubsystem_Params
{
public:
	class URH_LocalPlayerSubsystem*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSubsystemPlugin.GetGameInstanceSubsystem
struct URH_LocalPlayerSubsystemPlugin_GetGameInstanceSubsystem_Params
{
public:
	class URH_GameInstanceSubsystem*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereIntegration.RH_AdSubsystem.GetCodesFromLocale
struct URH_AdSubsystem_GetCodesFromLocale_Params
{
public:
	class FString                                OutLangCode;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutCountryCode;                                    // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A8[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_AdSubsystem.GetAdApiToken
struct URH_AdSubsystem_GetAdApiToken_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_TestBeaconClient.ServerPing
struct ARH_TestBeaconClient_ServerPing_Params
{
public:
	struct CoreUObject_DateTime                  ClientTime;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_TestBeaconClient.ClientPong
struct ARH_TestBeaconClient_ClientPong_Params
{
public:
	struct CoreUObject_DateTime                  ClientTime;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_CatalogItem.GetType
struct URH_CatalogItem_GetType_Params
{
public:
	enum class ERHAPI_ItemType                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_CatalogItem.GetRefItemId
struct URH_CatalogItem_GetRefItemId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_CatalogItem.GetLevelXpTableId
struct URH_CatalogItem_GetLevelXpTableId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_CatalogItem.GetLevelVendorId
struct URH_CatalogItem_GetLevelVendorId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_CatalogItem.GetItemInventoryBucketUseRulesetId
struct URH_CatalogItem_GetItemInventoryBucketUseRulesetId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_CatalogItem.GetItemId
struct URH_CatalogItem_GetItemId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_CatalogItem.GetEntitledLootId
struct URH_CatalogItem_GetEntitledLootId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_CatalogItem.GetCouponDiscountPercentage
struct URH_CatalogItem_GetCouponDiscountPercentage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_CatalogItem.GetCouponDiscountLoot
struct URH_CatalogItem_GetCouponDiscountLoot_Params
{
public:
	TArray<int32>                                ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_CatalogItem.GetCouponDiscountCurrencyItemId
struct URH_CatalogItem_GetCouponDiscountCurrencyItemId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_CatalogItem.GetCouponConsumeOnUse
struct URH_CatalogItem_GetCouponConsumeOnUse_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_CatalogItem.GetAvailabilityFlags
struct URH_CatalogItem_GetAvailabilityFlags_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSubsystemPlugin.GetGameInstanceSubsystem
struct URH_GameInstanceSubsystemPlugin_GetGameInstanceSubsystem_Params
{
public:
	class URH_GameInstanceSubsystem*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function RallyHereIntegration.RH_CatalogSubsystem.GetXpTable
struct URH_CatalogSubsystem_GetXpTable_Params
{
public:
	int32                                        XpTableId;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C3[0x4];                                      // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_XpTable            XpTable;                                           // 0x8(0xF0)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C4[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogXpAll
struct URH_CatalogSubsystem_BLUEPRINT_GetCatalogXpAll_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogVendorsAll
struct URH_CatalogSubsystem_BLUEPRINT_GetCatalogVendorsAll_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogVendor
struct URH_CatalogSubsystem_BLUEPRINT_GetCatalogVendor_Params
{
public:
	struct RallyHereIntegration_RHVendorGetRequest VendorRequest;                                     // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogTimeFramesAll
struct URH_CatalogSubsystem_BLUEPRINT_GetCatalogTimeFramesAll_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogPricePointsAll
struct URH_CatalogSubsystem_BLUEPRINT_GetCatalogPricePointsAll_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogItem
struct URH_CatalogSubsystem_BLUEPRINT_GetCatalogItem_Params
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogInventoryBucketUseRuleSetsAll
struct URH_CatalogSubsystem_BLUEPRINT_GetCatalogInventoryBucketUseRuleSetsAll_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_CatalogSubsystem.BLUEPRINT_GetCatalogAll
struct URH_CatalogSubsystem_BLUEPRINT_GetCatalogAll_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_CatalogBlueprintLibrary.IsCouponApplicableForLootId
struct URH_CatalogBlueprintLibrary_IsCouponApplicableForLootId_Params
{
public:
	class URH_CatalogItem*                       CouponItem;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LootId;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A54[0x3];                                      // Fixing Size Of Struct 
};

// 0x278 (0x278 - 0x0)
// Function RallyHereIntegration.RH_CatalogBlueprintLibrary.IsCouponApplicableForItem
struct URH_CatalogBlueprintLibrary_IsCouponApplicableForItem_Params
{
public:
	class URH_CatalogItem*                       CouponItem;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_Loot               LootItem;                                          // 0x8(0x268)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x270(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A5E[0x7];                                      // Fixing Size Of Struct 
};

// 0x100 (0x100 - 0x0)
// Function RallyHereIntegration.RH_CatalogBlueprintLibrary.GetXpAtLevel
struct URH_CatalogBlueprintLibrary_GetXpAtLevel_Params
{
public:
	struct RallyHereAPI_RHAPI_XpTable            XpTable;                                           // 0x0(0xF0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        XpLevel;                                           // 0xF0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6D[0x4];                                      // Fixing Size After Last Property  
	int64                                        ReturnValue;                                       // 0xF8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x378 (0x378 - 0x0)
// Function RallyHereIntegration.RH_CatalogBlueprintLibrary.GetVendorItemById
struct URH_CatalogBlueprintLibrary_GetVendorItemById_Params
{
public:
	struct RallyHereAPI_RHAPI_Vendor             Vendor;                                            // 0x0(0x100)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        LootId;                                            // 0x100(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7D[0x4];                                      // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_Loot               LootItem;                                          // 0x108(0x268)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x370(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7F[0x7];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_CatalogBlueprintLibrary.GetUnitPrice
struct URH_CatalogBlueprintLibrary_GetUnitPrice_Params
{
public:
	TArray<struct RallyHereAPI_RHAPI_PriceBreakpoint> PriceBreakpoints;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        CurrencyItemId;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8D[0x3];                                      // Fixing Size Of Struct 
};

// 0x100 (0x100 - 0x0)
// Function RallyHereIntegration.RH_CatalogBlueprintLibrary.GetLevelAtXp
struct URH_CatalogBlueprintLibrary_GetLevelAtXp_Params
{
public:
	struct RallyHereAPI_RHAPI_XpTable            XpTable;                                           // 0x0(0xF0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int64                                        XpPoints;                                          // 0xF0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xF8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A9F[0x4];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_CatalogBlueprintLibrary.GetCouponDiscountedPrice
struct URH_CatalogBlueprintLibrary_GetCouponDiscountedPrice_Params
{
public:
	class URH_CatalogItem*                       CouponItem;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Price;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_ConfigSubsystem.HasFetchedSiteSettings
struct URH_ConfigSubsystem_HasFetchedSiteSettings_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_ConfigSubsystem.HasFetchedAppSettings
struct URH_ConfigSubsystem_HasFetchedAppSettings_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_ConfigSubsystem.GetServerTimeDrift
struct URH_ConfigSubsystem_GetServerTimeDrift_Params
{
public:
	struct CoreUObject_Timespan                  Timespan;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AD7[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_ConfigSubsystem.GetServerTimeCache
struct URH_ConfigSubsystem_GetServerTimeCache_Params
{
public:
	struct RallyHereIntegration_RH_ServerTimeCache ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_ConfigSubsystem.GetServerTime
struct URH_ConfigSubsystem_GetServerTime_Params
{
public:
	struct CoreUObject_DateTime                  Time;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AF2[0x7];                                      // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// Function RallyHereIntegration.RH_ConfigSubsystem.GetAppSettings
struct URH_ConfigSubsystem_GetAppSettings_Params
{
public:
	TMap<class FString, class FString>           ReturnValue;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereIntegration.RH_ConfigSubsystem.GetAppSetting
struct URH_ConfigSubsystem_GetAppSetting_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B00[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_ConfigSubsystem.BLUEPRINT_RefreshServerTimeCache
struct URH_ConfigSubsystem_BLUEPRINT_RefreshServerTimeCache_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereIntegration.RH_Diagnostics.GenerateReport
struct URH_Diagnostics_GenerateReport_Params
{
public:
	struct RallyHereIntegration_RH_DiagnosticReportOptions Options;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.UpdateRecentPlayerForOSS
struct URH_FriendSubsystem_UpdateRecentPlayerForOSS_Params
{
public:
	class URH_LocalPlayerSubsystem*              LocalPlayerSubsystem;                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.IsPlayerRhBlocked
struct URH_FriendSubsystem_IsPlayerRhBlocked_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B47[0x3];                                      // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.IsPlayerPlatformBlocked
struct URH_FriendSubsystem_IsPlayerPlatformBlocked_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B51[0x3];                                      // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.IsPlayerBlocked
struct URH_FriendSubsystem_IsPlayerBlocked_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B58[0x3];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.HasFriendsCached
struct URH_FriendSubsystem_HasFriendsCached_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.GetRH_PlayerInfoSubsystem
struct URH_FriendSubsystem_GetRH_PlayerInfoSubsystem_Params
{
public:
	class URH_PlayerInfoSubsystem*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.GetOrCreateFriend
struct URH_FriendSubsystem_GetOrCreateFriend_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_RHFriendAndPlatformFriend*         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.GetFriends
struct URH_FriendSubsystem_GetFriends_Params
{
public:
	TArray<class URH_RHFriendAndPlatformFriend*> ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.GetFriendByUuidOrPlatformId
struct URH_FriendSubsystem_GetFriendByUuidOrPlatformId_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_PlayerPlatformId PlatformPlayerId;                                  // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_RHFriendAndPlatformFriend*         ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.GetFriendByUuid
struct URH_FriendSubsystem_GetFriendByUuid_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_RHFriendAndPlatformFriend*         ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.GetFriendByPlayerInfo
struct URH_FriendSubsystem_GetFriendByPlayerInfo_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_RHFriendAndPlatformFriend*         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.GetFriendByPlatformId
struct URH_FriendSubsystem_GetFriendByPlatformId_Params
{
public:
	struct RallyHereIntegration_RH_PlayerPlatformId PlatformPlayerId;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_RHFriendAndPlatformFriend*         ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.GetBlocked
struct URH_FriendSubsystem_GetBlocked_Params
{
public:
	TArray<struct CoreUObject_Guid>              ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_UnblockPlayer
struct URH_FriendSubsystem_BLUEPRINT_UnblockPlayer_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB3[0x3];                                      // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_RemoveFriend
struct URH_FriendSubsystem_BLUEPRINT_RemoveFriend_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC5[0x3];                                      // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_FetchFriendsList
struct URH_FriendSubsystem_BLUEPRINT_FetchFriendsList_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BD6[0x3];                                      // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_FetchFriend
struct URH_FriendSubsystem_BLUEPRINT_FetchFriend_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BE2[0x3];                                      // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_FetchBlockedPlayer
struct URH_FriendSubsystem_BLUEPRINT_FetchBlockedPlayer_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF1[0x3];                                      // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_FetchBlockedList
struct URH_FriendSubsystem_BLUEPRINT_FetchBlockedList_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C02[0x3];                                      // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_DeleteNotes
struct URH_FriendSubsystem_BLUEPRINT_DeleteNotes_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C10[0x3];                                      // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_BlockPlayer
struct URH_FriendSubsystem_BLUEPRINT_BlockPlayer_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C2B[0x3];                                      // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_AddNotes
struct URH_FriendSubsystem_BLUEPRINT_AddNotes_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Notes;                                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C36[0x7];                                      // Fixing Size Of Struct 
};

// 0x24 (0x24 - 0x0)
// Function RallyHereIntegration.RH_FriendSubsystem.BLUEPRINT_AddFriend
struct URH_FriendSubsystem_BLUEPRINT_AddFriend_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3E[0x3];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.IsPlayingThisGame
struct URH_PlatformFriend_IsPlayingThisGame_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.IsPlayingGame
struct URH_PlatformFriend_IsPlayingGame_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.IsOnline
struct URH_PlatformFriend_IsOnline_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.IsJoinable
struct URH_PlatformFriend_IsJoinable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.IsFriend
struct URH_PlatformFriend_IsFriend_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.IsDND
struct URH_PlatformFriend_IsDND_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.IsBlocked
struct URH_PlatformFriend_IsBlocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.Init
struct URH_PlatformFriend_Init_Params
{
public:
	class URH_PlatformFriend*                    Other;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.HasPendingFriendRequestToYou
struct URH_PlatformFriend_HasPendingFriendRequestToYou_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.HasPendingFriendRequestFromYou
struct URH_PlatformFriend_HasPendingFriendRequestFromYou_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.HasAnyRelationship
struct URH_PlatformFriend_HasAnyRelationship_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.GetRichPresenceInfo
struct URH_PlatformFriend_GetRichPresenceInfo_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.GetPlayerPlatformId
struct URH_PlatformFriend_GetPlayerPlatformId_Params
{
public:
	struct RallyHereIntegration_RH_PlayerPlatformId ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.GetPlatformUserId
struct URH_PlatformFriend_GetPlatformUserId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.GetPlatformBase
struct URH_PlatformFriend_GetPlatformBase_Params
{
public:
	enum class ERHAPI_Platform                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.GetPlatform
struct URH_PlatformFriend_GetPlatform_Params
{
public:
	enum class ERHAPI_Platform                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlatformFriend.GetClientDisplayName
struct URH_PlatformFriend_GetClientDisplayName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.RhPendingFriendRequest
struct URH_RHFriendAndPlatformFriend_RhPendingFriendRequest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.RHFriendRequestSent
struct URH_RHFriendAndPlatformFriend_RHFriendRequestSent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.PendingFriendRequest
struct URH_RHFriendAndPlatformFriend_PendingFriendRequest_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.OtherIsAwaitingFriendshipResponse
struct URH_RHFriendAndPlatformFriend_OtherIsAwaitingFriendshipResponse_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.OtherDeclinedFriendship
struct URH_RHFriendAndPlatformFriend_OtherDeclinedFriendship_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.IsPlayingThisGame
struct URH_RHFriendAndPlatformFriend_IsPlayingThisGame_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.IsOnline
struct URH_RHFriendAndPlatformFriend_IsOnline_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.IsDND
struct URH_RHFriendAndPlatformFriend_IsDND_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.HaveRhRelationship
struct URH_RHFriendAndPlatformFriend_HaveRhRelationship_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.HavePlatformRelationship
struct URH_RHFriendAndPlatformFriend_HavePlatformRelationship_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.HaveAnyRelationship
struct URH_RHFriendAndPlatformFriend_HaveAnyRelationship_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetStatus
struct URH_RHFriendAndPlatformFriend_GetStatus_Params
{
public:
	enum class EFriendshipStatus                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetRHPlayerUuid
struct URH_RHFriendAndPlatformFriend_GetRHPlayerUuid_Params
{
public:
	struct CoreUObject_Guid                      ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetPreviousStatus
struct URH_RHFriendAndPlatformFriend_GetPreviousStatus_Params
{
public:
	enum class EFriendshipStatus                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetPlayerAndPlatformInfo
struct URH_RHFriendAndPlatformFriend_GetPlayerAndPlatformInfo_Params
{
public:
	struct RallyHereIntegration_RH_PlayerAndPlatformInfo ReturnValue;                                       // 0x0(0x28)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetPlatformFriends
struct URH_RHFriendAndPlatformFriend_GetPlatformFriends_Params
{
public:
	TArray<class URH_PlatformFriend*>            ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetPlatformFriendBase
struct URH_RHFriendAndPlatformFriend_GetPlatformFriendBase_Params
{
public:
	enum class ERHAPI_Platform                   Platform;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D74[0x7];                                      // Fixing Size After Last Property  
	class URH_PlatformFriend*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetPlatformFriendAtIndex
struct URH_RHFriendAndPlatformFriend_GetPlatformFriendAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D79[0x4];                                      // Fixing Size After Last Property  
	class URH_PlatformFriend*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetPlatformFriend
struct URH_RHFriendAndPlatformFriend_GetPlatformFriend_Params
{
public:
	enum class ERHAPI_Platform                   Platform;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8E[0x7];                                      // Fixing Size After Last Property  
	class URH_PlatformFriend*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetNotes
struct URH_RHFriendAndPlatformFriend_GetNotes_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetLastModifiedOn
struct URH_RHFriendAndPlatformFriend_GetLastModifiedOn_Params
{
public:
	struct CoreUObject_DateTime                  ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetLastKnownDisplayName
struct URH_RHFriendAndPlatformFriend_GetLastKnownDisplayName_Params
{
public:
	enum class ERHAPI_Platform                   PreferredPlatformType;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBF[0x7];                                      // Fixing Size After Last Property  
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.GetFriendSubsystem
struct URH_RHFriendAndPlatformFriend_GetFriendSubsystem_Params
{
public:
	class URH_FriendSubsystem*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.FriendRequestSent
struct URH_RHFriendAndPlatformFriend_FriendRequestSent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.BLUEPRINT_GetRHPlayerUuidAsync
struct URH_RHFriendAndPlatformFriend_BLUEPRINT_GetRHPlayerUuidAsync_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.BLUEPRINT_GetLastKnownDisplayNameAsync
struct URH_RHFriendAndPlatformFriend_BLUEPRINT_GetLastKnownDisplayNameAsync_Params
{
public:
	struct CoreUObject_Timespan                  StaleThreshold;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRefresh;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Platform                   PreferredPlatformType;                             // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF0[0x2];                                      // Fixing Size After Last Property  
	FDelegateProperty_                           Delegate;                                          // 0xC(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF2[0x4];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.AwaitingFriendshipResponse
struct URH_RHFriendAndPlatformFriend_AwaitingFriendshipResponse_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.AreRHFriends
struct URH_RHFriendAndPlatformFriend_AreRHFriends_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.ArePlatformFriends
struct URH_RHFriendAndPlatformFriend_ArePlatformFriends_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_RHFriendAndPlatformFriend.AreFriends
struct URH_RHFriendAndPlatformFriend_AreFriends_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetSessionSubsystem
struct URH_GameInstanceSubsystem_GetSessionSubsystem_Params
{
public:
	class URH_GameInstanceSessionSubsystem*      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetSessionSearchCache
struct URH_GameInstanceSubsystem_GetSessionSearchCache_Params
{
public:
	class URH_SessionBrowserCache*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetServerBootstrapper
struct URH_GameInstanceSubsystem_GetServerBootstrapper_Params
{
public:
	class URH_GameInstanceServerBootstrapper*    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetPlayerInfoSubsystem
struct URH_GameInstanceSubsystem_GetPlayerInfoSubsystem_Params
{
public:
	class URH_PlayerInfoSubsystem*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetMatchmakingCache
struct URH_GameInstanceSubsystem_GetMatchmakingCache_Params
{
public:
	class URH_MatchmakingBrowserCache*           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetConfigSubsystem
struct URH_GameInstanceSubsystem_GetConfigSubsystem_Params
{
public:
	class URH_ConfigSubsystem*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetClientBootstrapper
struct URH_GameInstanceSubsystem_GetClientBootstrapper_Params
{
public:
	class URH_GameInstanceClientBootstrapper*    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSubsystem.GetCatalogSubsystem
struct URH_GameInstanceSubsystem_GetCatalogSubsystem_Params
{
public:
	class URH_CatalogSubsystem*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSubsystem.BLUEPRINT_CustomEndpoint
struct URH_GameInstanceSubsystem_BLUEPRINT_CustomEndpoint_Params
{
public:
	struct RallyHereIntegration_RH_CustomEndpointRequestWrapper Request;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x210 (0x210 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceServerBootstrapper.GetTemplate
struct URH_GameInstanceServerBootstrapper_GetTemplate_Params
{
public:
	class FString                                Type;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_SessionTemplate    Template;                                          // 0x10(0x1F8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x208(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F14[0x7];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceServerBootstrapper.GetSessionById
struct URH_GameInstanceServerBootstrapper_GetSessionById_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_SessionView*                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceServerBootstrapper.GetSession
struct URH_GameInstanceServerBootstrapper_GetSession_Params
{
public:
	class URH_OnlineSession*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceServerBootstrapper.GetPlatformSyncerByRHSessionId
struct URH_GameInstanceServerBootstrapper_GetPlatformSyncerByRHSessionId_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlatformSessionSyncer*             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceServerBootstrapper.GetPlatformSyncerByPlatformSessionId
struct URH_GameInstanceServerBootstrapper_GetPlatformSyncerByPlatformSessionId_Params
{
public:
	struct Engine_UniqueNetIdRepl                PlatformSessionId;                                 // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlatformSessionSyncer*             ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceServerBootstrapper.GetBootstrapStep
struct URH_GameInstanceServerBootstrapper_GetBootstrapStep_Params
{
public:
	enum class ERH_ServerBootstrapFlowStep       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceServerBootstrapper.GetBootstrapMode
struct URH_GameInstanceServerBootstrapper_GetBootstrapMode_Params
{
public:
	enum class ERH_ServerBootstrapMode           ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.IsReadyToJoinInstance
struct URH_GameInstanceSessionSubsystem_IsReadyToJoinInstance_Params
{
public:
	class URH_JoinedSession*                     Session;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLog;                                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA0[0x6];                                      // Fixing Size Of Struct 
};

// 0x100 (0x100 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.IsPlayerLocal
struct URH_GameInstanceSessionSubsystem_IsPlayerLocal_Params
{
public:
	struct RallyHereAPI_RHAPI_SessionPlayer      Player;                                            // 0x0(0xF8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FB6[0x7];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.IsMarkedFubar
struct URH_GameInstanceSessionSubsystem_IsMarkedFubar_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.IsLocallyHostedSession
struct URH_GameInstanceSessionSubsystem_IsLocallyHostedSession_Params
{
public:
	class URH_JoinedSession*                     Session;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCD[0x7];                                      // Fixing Size Of Struct 
};

// 0x228 (0x228 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.IsLocallyHostedInstance
struct URH_GameInstanceSessionSubsystem_IsLocallyHostedInstance_Params
{
public:
	struct RallyHereAPI_RHAPI_InstanceInfo       Instance;                                          // 0x0(0x220)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x220(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FE0[0x7];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.GetDesiredSession
struct URH_GameInstanceSessionSubsystem_GetDesiredSession_Params
{
public:
	class URH_JoinedSession*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.GetActiveSession
struct URH_GameInstanceSessionSubsystem_GetActiveSession_Params
{
public:
	class URH_JoinedSession*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.BLUEPRINT_SyncToSession
struct URH_GameInstanceSessionSubsystem_BLUEPRINT_SyncToSession_Params
{
public:
	class URH_JoinedSession*                     SessionInfo;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.BLUEPRINT_StartLeaveInstanceFlow
struct URH_GameInstanceSessionSubsystem_BLUEPRINT_StartLeaveInstanceFlow_Params
{
public:
	bool                                         bAlreadyDisconnected;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckDesired;                                     // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1022[0x2];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           Delegate;                                          // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.BLUEPRINT_StartJoinInstanceFlow
struct URH_GameInstanceSessionSubsystem_BLUEPRINT_StartJoinInstanceFlow_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1045[0x3];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_GameInstanceSessionSubsystem.BLUEPRINT_MarkInstanceFubar
struct URH_GameInstanceSessionSubsystem_BLUEPRINT_MarkInstanceFubar_Params
{
public:
	class FString                                Reason;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerPresenceSubsystem.SetDesiredStatus
struct URH_LocalPlayerPresenceSubsystem_SetDesiredStatus_Params
{
public:
	enum class ERHAPI_OnlineStatus               NewStatus;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerPresenceSubsystem.IsRefreshTimerActive
struct URH_LocalPlayerPresenceSubsystem_IsRefreshTimerActive_Params
{
public:
	float                                        TimeRemaining;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1236[0x3];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerPresenceSubsystem.GetDesiredStatus
struct URH_LocalPlayerPresenceSubsystem_GetDesiredStatus_Params
{
public:
	enum class ERHAPI_OnlineStatus               ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetSessionSubsystem
struct URH_LocalPlayerSubsystem_GetSessionSubsystem_Params
{
public:
	class URH_LocalPlayerSessionSubsystem*       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetPurgeSubsystem
struct URH_LocalPlayerSubsystem_GetPurgeSubsystem_Params
{
public:
	class URH_PurgeSubsystem*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetPresenceSubsystem
struct URH_LocalPlayerSubsystem_GetPresenceSubsystem_Params
{
public:
	class URH_LocalPlayerPresenceSubsystem*      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetPlayerPlatformId
struct URH_LocalPlayerSubsystem_GetPlayerPlatformId_Params
{
public:
	struct RallyHereIntegration_RH_PlayerPlatformId ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetPlayerNotifications
struct URH_LocalPlayerSubsystem_GetPlayerNotifications_Params
{
public:
	class URH_PlayerNotifications*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetPlayerInfoSubsystem
struct URH_LocalPlayerSubsystem_GetPlayerInfoSubsystem_Params
{
public:
	class URH_PlayerInfoSubsystem*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetLoginSubsystem
struct URH_LocalPlayerSubsystem_GetLoginSubsystem_Params
{
public:
	class URH_LocalPlayerLoginSubsystem*         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetLocalPlayerInfo
struct URH_LocalPlayerSubsystem_GetLocalPlayerInfo_Params
{
public:
	class URH_PlayerInfo*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetFriendSubsystem
struct URH_LocalPlayerSubsystem_GetFriendSubsystem_Params
{
public:
	class URH_FriendSubsystem*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetEntitlementSubsystem
struct URH_LocalPlayerSubsystem_GetEntitlementSubsystem_Params
{
public:
	class URH_EntitlementSubsystem*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSubsystem.GetAdSubsystem
struct URH_LocalPlayerSubsystem_GetAdSubsystem_Params
{
public:
	class URH_AdSubsystem*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSubsystem.BLUEPRINT_CustomEndpoint
struct URH_LocalPlayerSubsystem_BLUEPRINT_CustomEndpoint_Params
{
public:
	struct RallyHereIntegration_RH_CustomEndpointRequestWrapper Request;                                           // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x38(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.IsInSession
struct URH_LocalPlayerSessionSubsystem_IsInSession_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1329[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetTemplates
struct URH_LocalPlayerSessionSubsystem_GetTemplates_Params
{
public:
	TArray<struct RallyHereAPI_RHAPI_SessionTemplate> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x210 (0x210 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetTemplate
struct URH_LocalPlayerSessionSubsystem_GetTemplate_Params
{
public:
	class FString                                Type;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_SessionTemplate    Template;                                          // 0x10(0x1F8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x208(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_133D[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetSessionsByType
struct URH_LocalPlayerSessionSubsystem_GetSessionsByType_Params
{
public:
	class FString                                Type;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URH_SessionView*>               ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetSessions
struct URH_LocalPlayerSessionSubsystem_GetSessions_Params
{
public:
	TArray<class URH_SessionView*>               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetSessionById
struct URH_LocalPlayerSessionSubsystem_GetSessionById_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_SessionView*                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetPollTimeRemaining
struct URH_LocalPlayerSessionSubsystem_GetPollTimeRemaining_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetPlatformSyncerByRHSessionId
struct URH_LocalPlayerSessionSubsystem_GetPlatformSyncerByRHSessionId_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlatformSessionSyncer*             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetPlatformSyncerByPlatformSessionId
struct URH_LocalPlayerSessionSubsystem_GetPlatformSyncerByPlatformSessionId_Params
{
public:
	struct Engine_UniqueNetIdRepl                PlatformSessionId;                                 // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlatformSessionSyncer*             ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetJoinedSessionsByType
struct URH_LocalPlayerSessionSubsystem_GetJoinedSessionsByType_Params
{
public:
	class FString                                Type;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URH_JoinedSession*>             ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetInvitedSessionsByType
struct URH_LocalPlayerSessionSubsystem_GetInvitedSessionsByType_Params
{
public:
	class FString                                Type;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URH_InvitedSession*>            ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetFirstSessionByType
struct URH_LocalPlayerSessionSubsystem_GetFirstSessionByType_Params
{
public:
	class FString                                Type;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_SessionView*                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetFirstJoinedSessionByType
struct URH_LocalPlayerSessionSubsystem_GetFirstJoinedSessionByType_Params
{
public:
	class FString                                Type;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_JoinedSession*                     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetFirstInvitedSessionByType
struct URH_LocalPlayerSessionSubsystem_GetFirstInvitedSessionByType_Params
{
public:
	class FString                                Type;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_InvitedSession*                    ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.GetFirstActiveSession
struct URH_LocalPlayerSessionSubsystem_GetFirstActiveSession_Params
{
public:
	class URH_JoinedSession*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.ForcePollForUpdate
struct URH_LocalPlayerSessionSubsystem_ForcePollForUpdate_Params
{
public:
	bool                                         bClearETag;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.BLUEPRINT_SearchForSessions
struct URH_LocalPlayerSessionSubsystem_BLUEPRINT_SearchForSessions_Params
{
public:
	struct RallyHereIntegration_RH_SessionBrowserSearchParams Params;                                            // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.BLUEPRINT_JoinSessionById
struct URH_LocalPlayerSessionSubsystem_BLUEPRINT_JoinSessionById_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function RallyHereIntegration.RH_LocalPlayerSessionSubsystem.BLUEPRINT_CreateOrJoinSessionByType
struct URH_LocalPlayerSessionSubsystem_BLUEPRINT_CreateOrJoinSessionByType_Params
{
public:
	struct RallyHereAPI_RHAPI_CreateOrJoinRequest CreateParams;                                      // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x68(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingQueueInfo.IsActive
struct URH_MatchmakingQueueInfo_IsActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingQueueInfo.GetRankingType
struct URH_MatchmakingQueueInfo_GetRankingType_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingQueueInfo.GetQueueId
struct URH_MatchmakingQueueInfo_GetQueueId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingQueueInfo.GetNumSides
struct URH_MatchmakingQueueInfo_GetNumSides_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingQueueInfo.GetMinPlayersPerSide
struct URH_MatchmakingQueueInfo_GetMinPlayersPerSide_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingQueueInfo.GetMaxQueueGroupSize
struct URH_MatchmakingQueueInfo_GetMaxQueueGroupSize_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingQueueInfo.GetMaxPlayersPerSide
struct URH_MatchmakingQueueInfo_GetMaxPlayersPerSide_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingQueueInfo.GetMatchMakingTemplateGroupId
struct URH_MatchmakingQueueInfo_GetMatchMakingTemplateGroupId_Params
{
public:
	struct CoreUObject_Guid                      ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingTemplateGroupInfo.GetTemplateGroupId
struct URH_MatchmakingTemplateGroupInfo_GetTemplateGroupId_Params
{
public:
	struct CoreUObject_Guid                      ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingTemplateGroupInfo.GetRequiredItemIds
struct URH_MatchmakingTemplateGroupInfo_GetRequiredItemIds_Params
{
public:
	TSet<int32>                                  ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingTemplateGroupInfo.GetPossibleInstanceLaunchTemplateIds
struct URH_MatchmakingTemplateGroupInfo_GetPossibleInstanceLaunchTemplateIds_Params
{
public:
	TArray<struct CoreUObject_Guid>              ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_InstanceLaunchTemplate.GetInstanceLaunchTemplateId
struct URH_InstanceLaunchTemplate_GetInstanceLaunchTemplateId_Params
{
public:
	struct CoreUObject_Guid                      ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function RallyHereIntegration.RH_InstanceLaunchTemplate.GetInfo
struct URH_InstanceLaunchTemplate_GetInfo_Params
{
public:
	struct RallyHereAPI_RHAPI_InstanceLaunchTemplate ReturnValue;                                       // 0x0(0xA0)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_InstanceLaunchTemplate.GetETag
struct URH_InstanceLaunchTemplate_GetETag_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function RallyHereIntegration.RH_InstanceLaunchTemplate.GetCustomData
struct URH_InstanceLaunchTemplate_GetCustomData_Params
{
public:
	TMap<class FString, class FString>           ReturnValue;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingBrowserCache.GetQueue
struct URH_MatchmakingBrowserCache_GetQueue_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_MatchmakingQueueInfo*              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingBrowserCache.GetMatchmakingTemplateGroup
struct URH_MatchmakingBrowserCache_GetMatchmakingTemplateGroup_Params
{
public:
	struct CoreUObject_Guid                      TemplateGroupId;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_MatchmakingTemplateGroupInfo*      ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingBrowserCache.GetInstanceLaunchTemplate
struct URH_MatchmakingBrowserCache_GetInstanceLaunchTemplate_Params
{
public:
	struct CoreUObject_Guid                      InstanceLaunchTemplateId;                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_InstanceLaunchTemplate*            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingBrowserCache.GetAllRegions
struct URH_MatchmakingBrowserCache_GetAllRegions_Params
{
public:
	TArray<struct RallyHereAPI_RHAPI_SiteSettings> ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingBrowserCache.GetAllQueues
struct URH_MatchmakingBrowserCache_GetAllQueues_Params
{
public:
	TArray<class URH_MatchmakingQueueInfo*>      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingBrowserCache.BLUEPRINT_SearchRegions
struct URH_MatchmakingBrowserCache_BLUEPRINT_SearchRegions_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingBrowserCache.BLUEPRINT_SearchQueues
struct URH_MatchmakingBrowserCache_BLUEPRINT_SearchQueues_Params
{
public:
	struct RallyHereIntegration_RH_QueueSearchParams Params;                                            // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingBrowserCache.BLUEPRINT_SearchMatchmakingTemplateGroup
struct URH_MatchmakingBrowserCache_BLUEPRINT_SearchMatchmakingTemplateGroup_Params
{
public:
	struct CoreUObject_Guid                      TemplateId;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_MatchmakingBrowserCache.BLUEPRINT_SearchInstanceLaunchTemplate
struct URH_MatchmakingBrowserCache_BLUEPRINT_SearchInstanceLaunchTemplate_Params
{
public:
	struct CoreUObject_Guid                      TemplateId;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlatformSessionSyncer.GetSessionOwner
struct URH_PlatformSessionSyncer_GetSessionOwner_Params
{
public:
	TScriptInterface<class IRH_SessionOwnerInterface> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlatformSessionSyncer.GetRHSessionId
struct URH_PlatformSessionSyncer_GetRHSessionId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_PlatformSessionSyncer.GetRHSession
struct URH_PlatformSessionSyncer_GetRHSession_Params
{
public:
	class URH_JoinedSession*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereIntegration.RH_PlatformSessionSyncer.GetPlatformSessionIdFromRHSession
struct URH_PlatformSessionSyncer_GetPlatformSessionIdFromRHSession_Params
{
public:
	struct Engine_UniqueNetIdRepl                PlatformSessionId;                                 // 0x0(0x30)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1576[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_PlayerPresence.GetPlayerInfo
struct URH_PlayerPresence_GetPlayerInfo_Params
{
public:
	class URH_PlayerInfo*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_PlayerPresence.BLUEPRINT_RequestUpdate
struct URH_PlayerPresence_BLUEPRINT_RequestUpdate_Params
{
public:
	bool                                         bForceUpdate;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A7[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           Delegate;                                          // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_PlayerSessions.GetPlayerInfo
struct URH_PlayerSessions_GetPlayerInfo_Params
{
public:
	class URH_PlayerInfo*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_PlayerSessions.BLUEPRINT_RequestUpdate
struct URH_PlayerSessions_BLUEPRINT_RequestUpdate_Params
{
public:
	bool                                         bForceUpdate;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15F0[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           Delegate;                                          // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_PlayerPlatformInfo.GetPlayerPlatformId
struct URH_PlayerPlatformInfo_GetPlayerPlatformId_Params
{
public:
	struct RallyHereIntegration_RH_PlayerPlatformId ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerPlatformInfo.GetPlatformUserId
struct URH_PlayerPlatformInfo_GetPlatformUserId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlayerPlatformInfo.GetPlatform
struct URH_PlayerPlatformInfo_GetPlatform_Params
{
public:
	enum class ERHAPI_Platform                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerPlatformInfo.GetLastKnownDisplayName
struct URH_PlayerPlatformInfo_GetLastKnownDisplayName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.StopStreamingNotifications
struct URH_PlayerInfo_StopStreamingNotifications_Params
{
public:
	bool                                         bClearCache;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.GetSessions
struct URH_PlayerInfo_GetSessions_Params
{
public:
	class URH_PlayerSessions*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.GetRHPlayerUuid
struct URH_PlayerInfo_GetRHPlayerUuid_Params
{
public:
	struct CoreUObject_Guid                      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.GetPresence
struct URH_PlayerInfo_GetPresence_Params
{
public:
	class URH_PlayerPresence*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.GetPlayerPlatforms
struct URH_PlayerInfo_GetPlayerPlatforms_Params
{
public:
	TArray<class URH_PlayerPlatformInfo*>        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.GetPlayerPlatformInfo
struct URH_PlayerInfo_GetPlayerPlatformInfo_Params
{
public:
	struct RallyHereIntegration_RH_PlayerPlatformId PlayerPlatformId;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerPlatformInfo*                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.GetPlayerPlatformIds
struct URH_PlayerInfo_GetPlayerPlatformIds_Params
{
public:
	TArray<struct RallyHereIntegration_RH_PlayerPlatformId> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.GetPlayerNotifications
struct URH_PlayerInfo_GetPlayerNotifications_Params
{
public:
	class URH_PlayerNotifications*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.GetPlayerInventory
struct URH_PlayerInfo_GetPlayerInventory_Params
{
public:
	class URH_PlayerInventory*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.GetPlayerInfoSubsystem
struct URH_PlayerInfo_GetPlayerInfoSubsystem_Params
{
public:
	class URH_PlayerInfoSubsystem*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.GetAllStoredPlayerSettings
struct URH_PlayerInfo_GetAllStoredPlayerSettings_Params
{
public:
	TMap<class FString, struct RallyHereIntegration_RH_PlayerSettingsDataWrapper> ReturnValue;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.GetAllStoredPlayerRankings
struct URH_PlayerInfo_GetAllStoredPlayerRankings_Params
{
public:
	TMap<int32, struct RallyHereAPI_RHAPI_PlayerRankResponse> ReturnValue;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.BLUEPRINT_UpdatePlayerRanking
struct URH_PlayerInfo_BLUEPRINT_UpdatePlayerRanking_Params
{
public:
	int32                                        RankId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_178B[0x4];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_PlayerRankUpdateRequest RankData;                                          // 0x8(0x88)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x90(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.BLUEPRINT_SetPlayerSettings
struct URH_PlayerInfo_BLUEPRINT_SetPlayerSettings_Params
{
public:
	class FString                                SettingTypeId;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_PlayerSettingsDataWrapper SettingsData;                                      // 0x10(0x50)(Parm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x60(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.BLUEPRINT_GetPlayerSettings
struct URH_PlayerInfo_BLUEPRINT_GetPlayerSettings_Params
{
public:
	class FString                                SettingTypeId;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Timespan                  StaleThreshold;                                    // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRefresh;                                     // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B4[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           Delegate;                                          // 0x1C(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B5[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.BLUEPRINT_GetPlayerRankings
struct URH_PlayerInfo_BLUEPRINT_GetPlayerRankings_Params
{
public:
	struct CoreUObject_Timespan                  StaleThreshold;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRefresh;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CA[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           Delegate;                                          // 0xC(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CD[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.BLUEPRINT_GetLinkedPlatformInfo
struct URH_PlayerInfo_BLUEPRINT_GetLinkedPlatformInfo_Params
{
public:
	struct CoreUObject_Timespan                  StaleThreshold;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRefresh;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17ED[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           Delegate;                                          // 0xC(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F0[0x4];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.BLUEPRINT_GetLastKnownDisplayNameAsync
struct URH_PlayerInfo_BLUEPRINT_GetLastKnownDisplayNameAsync_Params
{
public:
	class URH_LocalPlayerSubsystem*              LocalPlayerSubsystem;                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Timespan                  StaleThreshold;                                    // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRefresh;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Platform                   PreferredPlatformType;                             // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1825[0x2];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           Delegate;                                          // 0x14(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1826[0x4];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfo.BLUEPRINT_GetLastKnownDisplayName
struct URH_PlayerInfo_BLUEPRINT_GetLastKnownDisplayName_Params
{
public:
	enum class ERHAPI_Platform                   PreferredPlatformType;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183E[0x7];                                     // Fixing Size After Last Property  
	class FString                                OutDisplayName;                                    // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1843[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_SandboxedSubsystemPlugin.GetLocalPlayerSubsystem
struct URH_SandboxedSubsystemPlugin_GetLocalPlayerSubsystem_Params
{
public:
	class URH_LocalPlayerSubsystem*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfoSubsystem.RemovePlayerInfoFromCache
struct URH_PlayerInfoSubsystem_RemovePlayerInfoFromCache_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfoSubsystem.GetPlayerPlatformInfo
struct URH_PlayerInfoSubsystem_GetPlayerPlatformInfo_Params
{
public:
	struct RallyHereIntegration_RH_PlayerPlatformId PlayerPlatformId;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerPlatformInfo*                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfoSubsystem.GetPlayerInfos
struct URH_PlayerInfoSubsystem_GetPlayerInfos_Params
{
public:
	TMap<struct CoreUObject_Guid, class URH_PlayerInfo*> ReturnValue;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfoSubsystem.GetPlayerInfo
struct URH_PlayerInfoSubsystem_GetPlayerInfo_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfoSubsystem.GetOrCreatePlayerPlatformInfo
struct URH_PlayerInfoSubsystem_GetOrCreatePlayerPlatformInfo_Params
{
public:
	struct RallyHereIntegration_RH_PlayerPlatformId PlayerPlatformId;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerPlatformInfo*                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfoSubsystem.GetOrCreatePlayerInfo
struct URH_PlayerInfoSubsystem_GetOrCreatePlayerInfo_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfoSubsystem.FindPlayerInfoByPlatformId
struct URH_PlayerInfoSubsystem_FindPlayerInfoByPlatformId_Params
{
public:
	struct RallyHereIntegration_RH_PlayerPlatformId PlayerPlatformId;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfoSubsystem.BLUEPRINT_LookupPlayerByPlatformUserId
struct URH_PlayerInfoSubsystem_BLUEPRINT_LookupPlayerByPlatformUserId_Params
{
public:
	struct RallyHereIntegration_RH_PlayerPlatformId PlayerPlatformId;                                  // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_PlayerInfoSubsystem.BLUEPRINT_LookupPlayer
struct URH_PlayerInfoSubsystem_BLUEPRINT_LookupPlayer_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.GetOrderResults
struct URH_PlayerInventory_GetOrderResults_Params
{
public:
	TArray<struct RallyHereAPI_RHAPI_PlayerOrder> ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.GetCachedInventorySession
struct URH_PlayerInventory_GetCachedInventorySession_Params
{
public:
	struct RallyHereIntegration_RH_InventorySession ReturnValue;                                       // 0x0(0x38)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.GetCachedInventoryForType
struct URH_PlayerInventory_GetCachedInventoryForType_Params
{
public:
	enum class ERHAPI_InventoryType              Type;                                              // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_197F[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereIntegration_RH_ItemInventory> ReturnValue;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.GetCachedInventoryForItemsAndTypes
struct URH_PlayerInventory_GetCachedInventoryForItemsAndTypes_Params
{
public:
	TArray<int32>                                ItemIds;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<enum class ERHAPI_InventoryType>      Types;                                             // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct RallyHereIntegration_RH_ItemInventory> ReturnValue;                                       // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.GetCachedInventoryForItems
struct URH_PlayerInventory_GetCachedInventoryForItems_Params
{
public:
	TArray<int32>                                ItemIds;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct RallyHereIntegration_RH_ItemInventory> ReturnValue;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.GetCachedInventoryForItem
struct URH_PlayerInventory_GetCachedInventoryForItem_Params
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19C6[0x4];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereIntegration_RH_ItemInventory> ReturnValue;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.GetCachedInventoryForInventoryId
struct URH_PlayerInventory_GetCachedInventoryForInventoryId_Params
{
public:
	struct CoreUObject_Guid                      InventoryId;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_ItemInventory Item;                                              // 0x10(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_19DC[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.GetAllCachedInventory
struct URH_PlayerInventory_GetAllCachedInventory_Params
{
public:
	TArray<struct RallyHereIntegration_RH_ItemInventory> ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_UpdateInventoryWithoutClientOrderRefId
struct URH_PlayerInventory_BLUEPRINT_UpdateInventoryWithoutClientOrderRefId_Params
{
public:
	TArray<struct RallyHereIntegration_RH_UpdateInventory> UpdateInventories;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Source                     Source;                                            // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A23[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_UpdateInventory
struct URH_PlayerInventory_BLUEPRINT_UpdateInventory_Params
{
public:
	struct CoreUObject_Guid                      ClientOrderReferenceId;                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct RallyHereIntegration_RH_UpdateInventory> UpdateInventories;                                 // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Source                     Source;                                            // 0x30(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A50[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_SetOrderWatch
struct URH_PlayerInventory_BLUEPRINT_SetOrderWatch_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_RedeemPromoCode
struct URH_PlayerInventory_BLUEPRINT_RedeemPromoCode_Params
{
public:
	class FString                                PromoCode;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_IsInventoryItemRented
struct URH_PlayerInventory_BLUEPRINT_IsInventoryItemRented_Params
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_IsInventoryItemOwned
struct URH_PlayerInventory_BLUEPRINT_IsInventoryItemOwned_Params
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_GetInventorySession
struct URH_PlayerInventory_BLUEPRINT_GetInventorySession_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_GetInventoryCount
struct URH_PlayerInventory_BLUEPRINT_GetInventoryCount_Params
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_GetInventory
struct URH_PlayerInventory_BLUEPRINT_GetInventory_Params
{
public:
	TArray<int32>                                ItemIds;                                           // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_CreatePlayerOrder
struct URH_PlayerInventory_BLUEPRINT_CreatePlayerOrder_Params
{
public:
	enum class ERHAPI_PlayerOrderEntryType       FillType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Source                     OrderSource;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1ABB[0x6];                                     // Fixing Size After Last Property  
	TArray<class URH_PlayerOrderEntry*>          OrderEntries;                                      // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_CreateNewPlayerOrder2
struct URH_PlayerInventory_BLUEPRINT_CreateNewPlayerOrder2_Params
{
public:
	enum class ERHAPI_Source                     OrderSource;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsTransaction;                                     // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD4[0x6];                                     // Fixing Size After Last Property  
	TArray<class URH_PlayerOrderEntry*>          OrderEntries;                                      // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_CreateNewPlayerOrder
struct URH_PlayerInventory_BLUEPRINT_CreateNewPlayerOrder_Params
{
public:
	enum class ERHAPI_Source                     OrderSource;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AE4[0x7];                                     // Fixing Size After Last Property  
	TArray<class URH_PlayerOrderEntry*>          OrderEntries;                                      // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_CreateInventoryWithoutClientOrderRefId
struct URH_PlayerInventory_BLUEPRINT_CreateInventoryWithoutClientOrderRefId_Params
{
public:
	TArray<struct RallyHereIntegration_RH_CreateInventory> CreateInventories;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Source                     Source;                                            // 0x20(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF9[0x7];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_CreateInventorySessionForPlatform
struct URH_PlayerInventory_BLUEPRINT_CreateInventorySessionForPlatform_Params
{
public:
	enum class ERHAPI_Platform                   Platform;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B0D[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           Delegate;                                          // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_CreateInventorySession
struct URH_PlayerInventory_BLUEPRINT_CreateInventorySession_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_CreateInventory
struct URH_PlayerInventory_BLUEPRINT_CreateInventory_Params
{
public:
	struct CoreUObject_Guid                      ClientOrderReferenceId;                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct RallyHereIntegration_RH_CreateInventory> CreateInventories;                                 // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Source                     Source;                                            // 0x30(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B33[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_ClearOrderWatch
struct URH_PlayerInventory_BLUEPRINT_ClearOrderWatch_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_AddPendingOrdersFromEntitlementsArray
struct URH_PlayerInventory_BLUEPRINT_AddPendingOrdersFromEntitlementsArray_Params
{
public:
	TArray<struct RallyHereAPI_RHAPI_PlatformEntitlement> Entitlements;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function RallyHereIntegration.RH_PlayerInventory.BLUEPRINT_AddPendingOrdersFromEntitlementResult
struct URH_PlayerInventory_BLUEPRINT_AddPendingOrdersFromEntitlementResult_Params
{
public:
	struct RallyHereAPI_RHAPI_PlatformEntitlementProcessResult EntitlementResult;                                 // 0x0(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x98(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_PlayerOrderEntry.GetQuantity
struct URH_PlayerOrderEntry_GetQuantity_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_PlayerOrderEntry.GetPriceItemId
struct URH_PlayerOrderEntry_GetPriceItemId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_PlayerOrderEntry.GetPrice
struct URH_PlayerOrderEntry_GetPrice_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x268 (0x268 - 0x0)
// Function RallyHereIntegration.RH_PlayerOrderEntry.GetLootItem
struct URH_PlayerOrderEntry_GetLootItem_Params
{
public:
	struct RallyHereAPI_RHAPI_Loot               ReturnValue;                                       // 0x0(0x268)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_PlayerOrderEntry.GetLootId
struct URH_PlayerOrderEntry_GetLootId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlayerOrderEntry.GetFillType
struct URH_PlayerOrderEntry_GetFillType_Params
{
public:
	enum class ERHAPI_PlayerOrderEntryType       ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerOrderEntry.GetExternalTransactionId
struct URH_PlayerOrderEntry_GetExternalTransactionId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_PlayerOrderEntry.GetCouponItemId
struct URH_PlayerOrderEntry_GetCouponItemId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function RallyHereIntegration.RH_InventoryBlueprintLibrary.RemoveCustomDataFromItemInventory
struct URH_InventoryBlueprintLibrary_RemoveCustomDataFromItemInventory_Params
{
public:
	struct RallyHereIntegration_RH_ItemInventory ItemInventory;                                     // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x90(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function RallyHereIntegration.RH_InventoryBlueprintLibrary.InitUpdateInventoryWithItemInventoryValues
struct URH_InventoryBlueprintLibrary_InitUpdateInventoryWithItemInventoryValues_Params
{
public:
	struct RallyHereIntegration_RH_UpdateInventory UpdateInventory;                                   // 0x0(0x90)(Parm, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_ItemInventory ItemInventory;                                     // 0x90(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x120(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C10[0x7];                                     // Fixing Size Of Struct 
};

// 0x118 (0x118 - 0x0)
// Function RallyHereIntegration.RH_InventoryBlueprintLibrary.InitCreateInventoryWithItemInventoryValues
struct URH_InventoryBlueprintLibrary_InitCreateInventoryWithItemInventoryValues_Params
{
public:
	struct RallyHereIntegration_RH_CreateInventory CreateInventory;                                   // 0x0(0x80)(Parm, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_ItemInventory ItemInventory;                                     // 0x80(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x110(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C1E[0x7];                                     // Fixing Size Of Struct 
};

// 0xA0 (0xA0 - 0x0)
// Function RallyHereIntegration.RH_InventoryBlueprintLibrary.GetInventoryExpiration
struct URH_InventoryBlueprintLibrary_GetInventoryExpiration_Params
{
public:
	struct RallyHereIntegration_RH_ItemInventory ItemInventory;                                     // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct CoreUObject_DateTime                  DateTimeOut;                                       // 0x90(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x98(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C30[0x7];                                     // Fixing Size Of Struct 
};

// 0xB0 (0xB0 - 0x0)
// Function RallyHereIntegration.RH_InventoryBlueprintLibrary.FindCustomDataOnItemInventory
struct URH_InventoryBlueprintLibrary_FindCustomDataOnItemInventory_Params
{
public:
	struct RallyHereIntegration_RH_ItemInventory ItemInventory;                                     // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x90(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function RallyHereIntegration.RH_InventoryBlueprintLibrary.CheckIfInventoryExpires
struct URH_InventoryBlueprintLibrary_CheckIfInventoryExpires_Params
{
public:
	struct RallyHereIntegration_RH_ItemInventory ItemInventory;                                     // 0x0(0x90)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C45[0x7];                                     // Fixing Size Of Struct 
};

// 0xB0 (0xB0 - 0x0)
// Function RallyHereIntegration.RH_InventoryBlueprintLibrary.AddCustomDataToItemInventory
struct URH_InventoryBlueprintLibrary_AddCustomDataToItemInventory_Params
{
public:
	struct RallyHereIntegration_RH_ItemInventory ItemInventory;                                     // 0x0(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x90(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0xA0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlayerNotifications.StopStreamingLatestNotifications
struct URH_PlayerNotifications_StopStreamingLatestNotifications_Params
{
public:
	bool                                         bClearCache;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerNotifications.StartStreamingLatestNotifications
struct URH_PlayerNotifications_StartStreamingLatestNotifications_Params
{
public:
	class FString                                Cursor;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_PlayerNotifications.SetStreamingHistorySize
struct URH_PlayerNotifications_SetStreamingHistorySize_Params
{
public:
	int32                                        Size;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_PlayerNotifications.IsStreaming
struct URH_PlayerNotifications_IsStreaming_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerNotifications.GetStreamingPlayerUuid
struct URH_PlayerNotifications_GetStreamingPlayerUuid_Params
{
public:
	struct CoreUObject_Guid                      ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_PlayerNotifications.GetStreamingHistorySize
struct URH_PlayerNotifications_GetStreamingHistorySize_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerNotifications.GetStreamingHistory
struct URH_PlayerNotifications_GetStreamingHistory_Params
{
public:
	TArray<struct RallyHereAPI_RHAPI_Notification> ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_PlayerNotifications.GetStreamingCursor
struct URH_PlayerNotifications_GetStreamingCursor_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function RallyHereIntegration.RH_PlayerNotifications.BLUEPRINT_CreateNotification
struct URH_PlayerNotifications_BLUEPRINT_CreateNotification_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RhUrl;                                             // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData;                                        // 0x30(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x80(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CBD[0x7];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function RallyHereIntegration.RH_PollingSettings.GetPollingInterval
struct URH_PollingSettings_GetPollingInterval_Params
{
public:
	class FName                                  TimerName;                                         // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function RallyHereIntegration.RH_RallyHerePropertiesBlueprintLibrary.EqualEqual_FRH_LootId
struct URH_RallyHerePropertiesBlueprintLibrary_EqualEqual_FRH_LootId_Params
{
public:
	struct RallyHereIntegration_RH_LootId        A;                                                 // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_LootId        B;                                                 // 0x14(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1C[0x3];                                     // Fixing Size Of Struct 
};

// 0x2C (0x2C - 0x0)
// Function RallyHereIntegration.RH_RallyHerePropertiesBlueprintLibrary.EqualEqual_FRH_LegacyIdToGuid
struct URH_RallyHerePropertiesBlueprintLibrary_EqualEqual_FRH_LegacyIdToGuid_Params
{
public:
	struct RallyHereIntegration_RH_LegacyIdToGuid A;                                                 // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_LegacyIdToGuid B;                                                 // 0x14(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D36[0x3];                                     // Fixing Size Of Struct 
};

// 0x2C (0x2C - 0x0)
// Function RallyHereIntegration.RH_RallyHerePropertiesBlueprintLibrary.EqualEqual_FRH_ItemId
struct URH_RallyHerePropertiesBlueprintLibrary_EqualEqual_FRH_ItemId_Params
{
public:
	struct RallyHereIntegration_RH_ItemId        A;                                                 // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_ItemId        B;                                                 // 0x14(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4F[0x3];                                     // Fixing Size Of Struct 
};

// 0x40 (0x40 - 0x0)
// Function RallyHereIntegration.RH_PurgeSubsystem.GetMyPurgeStatus
struct URH_PurgeSubsystem_GetMyPurgeStatus_Params
{
public:
	struct RallyHereAPI_RHAPI_PurgeResponse      ReturnValue;                                       // 0x0(0x40)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_PurgeSubsystem.BLUEPRINT_QueryMyPurgeStatus
struct URH_PurgeSubsystem_BLUEPRINT_QueryMyPurgeStatus_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D79[0x3];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_PurgeSubsystem.BLUEPRINT_PurgeMeImmediately
struct URH_PurgeSubsystem_BLUEPRINT_PurgeMeImmediately_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8F[0x3];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_PurgeSubsystem.BLUEPRINT_EnqueueMeForPurgeWithPurgeTime
struct URH_PurgeSubsystem_BLUEPRINT_EnqueueMeForPurgeWithPurgeTime_Params
{
public:
	struct CoreUObject_DateTime                  PurgeTime;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB3[0x7];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_PurgeSubsystem.BLUEPRINT_EnqueueMeForPurge
struct URH_PurgeSubsystem_BLUEPRINT_EnqueueMeForPurge_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC8[0x3];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereIntegration.RH_PurgeSubsystem.BLUEPRINT_DequeueMeForPurge
struct URH_PurgeSubsystem_BLUEPRINT_DequeueMeForPurge_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DDE[0x3];                                     // Fixing Size Of Struct 
};

// 0x210 (0x210 - 0x0)
// Function RallyHereIntegration.RH_SessionBrowserCache.GetTemplate
struct URH_SessionBrowserCache_GetTemplate_Params
{
public:
	class FString                                Type;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_SessionTemplate    Template;                                          // 0x10(0x1F8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x208(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E06[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_SessionBrowserCache.GetSessionById
struct URH_SessionBrowserCache_GetSessionById_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_SessionView*                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_SessionBrowserCache.GetPlayerInfoSubsystem
struct URH_SessionBrowserCache_GetPlayerInfoSubsystem_Params
{
public:
	class URH_PlayerInfoSubsystem*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_SessionBrowserCache.GetPlatformSyncerByRHSessionId
struct URH_SessionBrowserCache_GetPlatformSyncerByRHSessionId_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlatformSessionSyncer*             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereIntegration.RH_SessionBrowserCache.GetPlatformSyncerByPlatformSessionId
struct URH_SessionBrowserCache_GetPlatformSyncerByPlatformSessionId_Params
{
public:
	struct Engine_UniqueNetIdRepl                PlatformSessionId;                                 // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlatformSessionSyncer*             ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function RallyHereIntegration.RH_SessionBrowserCache.BLUEPRINT_Search
struct URH_SessionBrowserCache_BLUEPRINT_Search_Params
{
public:
	struct RallyHereIntegration_RH_SessionBrowserSearchParams Params;                                            // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x30(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_SessionView.IsOnline
struct URH_SessionView_IsOnline_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_SessionView.IsOffline
struct URH_SessionView_IsOffline_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_SessionView.IsJoined
struct URH_SessionView_IsJoined_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_SessionView.IsInQueue
struct URH_SessionView_IsInQueue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_SessionView.IsCreatedByMatchmaking
struct URH_SessionView_IsCreatedByMatchmaking_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1F8 (0x1F8 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetTemplate
struct URH_SessionView_GetTemplate_Params
{
public:
	struct RallyHereAPI_RHAPI_SessionTemplate    ReturnValue;                                       // 0x0(0x1F8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetSessionType
struct URH_SessionView_GetSessionType_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetSessionPlayerCount
struct URH_SessionView_GetSessionPlayerCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetSessionPlayer
struct URH_SessionView_GetSessionPlayer_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_SessionPlayer      OutPlayer;                                         // 0x10(0xF8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x108(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F66[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetSessionOwner
struct URH_SessionView_GetSessionOwner_Params
{
public:
	TScriptInterface<class IRH_SessionOwnerInterface> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetSessionLeader
struct URH_SessionView_GetSessionLeader_Params
{
public:
	struct RallyHereAPI_RHAPI_SessionPlayer      OutPlayer;                                         // 0x0(0xF8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F97[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetSessionId
struct URH_SessionView_GetSessionId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x468 (0x468 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetSessionData
struct URH_SessionView_GetSessionData_Params
{
public:
	struct RallyHereAPI_RHAPI_Session            ReturnValue;                                       // 0x0(0x468)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetPollTimeRemaining
struct URH_SessionView_GetPollTimeRemaining_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x228 (0x228 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetInstanceData
struct URH_SessionView_GetInstanceData_Params
{
public:
	struct RallyHereAPI_RHAPI_InstanceInfo       InstanceInfo;                                      // 0x0(0x220)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x220(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE9[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetInstanceCustomDataValue
struct URH_SessionView_GetInstanceCustomDataValue_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutValue;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200B[0x7];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetInstanceCustomData
struct URH_SessionView_GetInstanceCustomData_Params
{
public:
	TMap<class FString, class FString>           ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetETag
struct URH_SessionView_GetETag_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetCustomDataValue
struct URH_SessionView_GetCustomDataValue_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                OutValue;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2035[0x7];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetCustomData
struct URH_SessionView_GetCustomData_Params
{
public:
	TMap<class FString, class FString>           ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function RallyHereIntegration.RH_SessionView.GetBrowserCustomData
struct URH_SessionView_GetBrowserCustomData_Params
{
public:
	TMap<class FString, class FString>           ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_SessionView.ForcePollForUpdate
struct URH_SessionView_ForcePollForUpdate_Params
{
public:
	bool                                         bClearETag;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_InvitedSession.BLUEPRINT_Leave
struct URH_InvitedSession_BLUEPRINT_Leave_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_InvitedSession.BLUEPRINT_Join
struct URH_InvitedSession_BLUEPRINT_Join_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.SetWatchingPlayers
struct URH_JoinedSession_SetWatchingPlayers_Params
{
public:
	bool                                         bWatch;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.IsWatchingPlayers
struct URH_JoinedSession_IsWatchingPlayers_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.IsSyncedWithPlatform
struct URH_JoinedSession_IsSyncedWithPlatform_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.IsBeaconSession
struct URH_JoinedSession_IsBeaconSession_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.IsActive
struct URH_JoinedSession_IsActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.GetSessionUpdateInfoDefaults
struct URH_JoinedSession_GetSessionUpdateInfoDefaults_Params
{
public:
	struct RallyHereAPI_RHAPI_SessionUpdate      ReturnValue;                                       // 0x0(0x78)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.GetPlatformSyncer
struct URH_JoinedSession_GetPlatformSyncer_Params
{
public:
	class URH_PlatformSessionSyncer*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x118 (0x118 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.GetInstanceUpdateInfoDefaults
struct URH_JoinedSession_GetInstanceUpdateInfoDefaults_Params
{
public:
	struct RallyHereAPI_RHAPI_InstanceInfoUpdate ReturnValue;                                       // 0x0(0x118)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.GetClientVersionForSession
struct URH_JoinedSession_GetClientVersionForSession_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_UpdateSessionInfo
struct URH_JoinedSession_BLUEPRINT_UpdateSessionInfo_Params
{
public:
	struct RallyHereAPI_RHAPI_SessionUpdate      Update;                                            // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x78(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_UpdatePlayerCustomData
struct URH_JoinedSession_BLUEPRINT_UpdatePlayerCustomData_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           CustomData;                                        // 0x10(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x60(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_UpdateInstanceInfo
struct URH_JoinedSession_BLUEPRINT_UpdateInstanceInfo_Params
{
public:
	struct RallyHereAPI_RHAPI_InstanceInfoUpdate Update;                                            // 0x0(0x118)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x118(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_UpdateBrowserInfo
struct URH_JoinedSession_BLUEPRINT_UpdateBrowserInfo_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2259[0x7];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData;                                        // 0x8(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x58(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_StartMatch
struct URH_JoinedSession_BLUEPRINT_StartMatch_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_SetLeader
struct URH_JoinedSession_BLUEPRINT_SetLeader_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_RequestInstance
struct URH_JoinedSession_BLUEPRINT_RequestInstance_Params
{
public:
	struct RallyHereAPI_RHAPI_InstanceRequest    InstanceRequest;                                   // 0x0(0x128)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x128(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_Leave
struct URH_JoinedSession_BLUEPRINT_Leave_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_KickPlayer
struct URH_JoinedSession_BLUEPRINT_KickPlayer_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_InvitePlayer
struct URH_JoinedSession_BLUEPRINT_InvitePlayer_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Team;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22DF[0x4];                                     // Fixing Size After Last Property  
	TMap<class FString, class FString>           CustomData;                                        // 0x18(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x68(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_EndMatch
struct URH_JoinedSession_BLUEPRINT_EndMatch_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_EndInstance
struct URH_JoinedSession_BLUEPRINT_EndInstance_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_CreateBeacon
struct URH_JoinedSession_BLUEPRINT_CreateBeacon_Params
{
public:
	class ULocalPlayer*                          Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class AOnlineBeaconClient>       BeaconClass;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AOnlineBeaconClient*                   ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function RallyHereIntegration.RH_JoinedSession.BLUEPRINT_ChangePlayerTeam
struct URH_JoinedSession_BLUEPRINT_ChangePlayerTeam_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Team;                                              // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x14(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function RallyHereIntegration.RH_OnlineSession.GetJoinDetailDefaults
struct URH_OnlineSession_GetJoinDetailDefaults_Params
{
public:
	TScriptInterface<class IRH_SessionOwnerInterface> SessionOwner;                                      // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_SelfSessionPlayerUpdateRequest ReturnValue;                                       // 0x10(0xA8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereIntegration.RH_OnlineSession.BLUEPRINT_LeaveQueue
struct URH_OnlineSession_BLUEPRINT_LeaveQueue_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// Function RallyHereIntegration.RH_OnlineSession.BLUEPRINT_JoinQueueEx
struct URH_OnlineSession_BLUEPRINT_JoinQueueEx_Params
{
public:
	struct RallyHereAPI_RHAPI_QueueJoinRequest   Request;                                           // 0x0(0x158)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x158(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereIntegration.RH_OnlineSession.BLUEPRINT_JoinQueue
struct URH_OnlineSession_BLUEPRINT_JoinQueue_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        MatchmakingTags;                                   // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function RallyHereIntegration.RH_OnlineSession.BLUEPRINT_JoinByIdEx
struct URH_OnlineSession_BLUEPRINT_JoinByIdEx_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_SelfSessionPlayerUpdateRequest JoinDetails;                                       // 0x10(0xA8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TScriptInterface<class IRH_SessionOwnerInterface> SessionOwner;                                      // 0xB8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0xC8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereIntegration.RH_OnlineSession.BLUEPRINT_JoinById
struct URH_OnlineSession_BLUEPRINT_JoinById_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IRH_SessionOwnerInterface> SessionOwner;                                      // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function RallyHereIntegration.RH_OnlineSession.BLUEPRINT_CreateOrJoinByType
struct URH_OnlineSession_BLUEPRINT_CreateOrJoinByType_Params
{
public:
	struct RallyHereAPI_RHAPI_CreateOrJoinRequest CreateParams;                                      // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TScriptInterface<class IRH_SessionOwnerInterface> SessionOwner;                                      // 0x68(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x78(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x210 (0x210 - 0x0)
// Function RallyHereIntegration.RH_SessionOwnerInterface.GetTemplate
struct IRH_SessionOwnerInterface_GetTemplate_Params
{
public:
	class FString                                Type;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereAPI_RHAPI_SessionTemplate    Template;                                          // 0x10(0x1F8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x208(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_243A[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_SessionOwnerInterface.GetSessionById
struct IRH_SessionOwnerInterface_GetSessionById_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_SessionView*                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereIntegration.RH_SessionOwnerInterface.GetPlayerInfoSubsystem
struct IRH_SessionOwnerInterface_GetPlayerInfoSubsystem_Params
{
public:
	class URH_PlayerInfoSubsystem*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereIntegration.RH_SessionOwnerInterface.GetPlatformSyncerByRHSessionId
struct IRH_SessionOwnerInterface_GetPlatformSyncerByRHSessionId_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlatformSessionSyncer*             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereIntegration.RH_SessionOwnerInterface.GetPlatformSyncerByPlatformSessionId
struct IRH_SessionOwnerInterface_GetPlatformSyncerByPlatformSessionId_Params
{
public:
	struct Engine_UniqueNetIdRepl                SessionId;                                         // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlatformSessionSyncer*             ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


