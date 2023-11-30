#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.ShouldDisplayToUser
struct UPlatformInventoryItem_ShouldDisplayToUser_Params
{
public:
	struct RallyHereIntegration_RH_LootId        LootId;                                            // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28F[0x3];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.SetItemName
struct UPlatformInventoryItem_SetItemName_Params
{
public:
	class FText                                  NewItemDisplayName;                                // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.SetItemDescription
struct UPlatformInventoryItem_SetItemDescription_Params
{
public:
	class FText                                  NewItemDescription;                                // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.SetFriendlySearchName
struct UPlatformInventoryItem_SetFriendlySearchName_Params
{
public:
	class FString                                InFriendlyName;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.SetCollectionContainer
struct UPlatformInventoryItem_SetCollectionContainer_Params
{
public:
	struct GameplayTags_GameplayTagContainer     InContainer;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.IsItemTempDisabled
struct UPlatformInventoryItem_IsItemTempDisabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.IsItemDisabled
struct UPlatformInventoryItem_IsItemDisabled_Params
{
public:
	bool                                         bIncludeTempDisabled;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.GetTextureAsync
struct UPlatformInventoryItem_GetTextureAsync_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x0(0x28)(Parm, OutParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           IconLoadedEvent;                                   // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.GetItemNameAsString
struct UPlatformInventoryItem_GetItemNameAsString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.GetItemName
struct UPlatformInventoryItem_GetItemName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.GetItemId
struct UPlatformInventoryItem_GetItemId_Params
{
public:
	struct RallyHereIntegration_RH_ItemId        ReturnValue;                                       // 0x0(0x14)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.GetItemIconInfo
struct UPlatformInventoryItem_GetItemIconInfo_Params
{
public:
	class UIconInfo*                             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.GetItemDescriptionAsString
struct UPlatformInventoryItem_GetItemDescriptionAsString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.GetItemDescription
struct UPlatformInventoryItem_GetItemDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.GetItemByFriendlyName
struct UPlatformInventoryItem_GetItemByFriendlyName_Params
{
public:
	class FString                                InFriendlyName;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPlatformInventoryItem> ReturnValue;                                       // 0x10(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.GetIconInfoByName
struct UPlatformInventoryItem_GetIconInfoByName_Params
{
public:
	class FName                                  IconType;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UIconInfo*                             Icon;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_320[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.GetFriendlySearchName
struct UPlatformInventoryItem_GetFriendlySearchName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.GetCollectionContainer
struct UPlatformInventoryItem_GetCollectionContainer_Params
{
public:
	struct GameplayTags_GameplayTagContainer     ReturnValue;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.BLUEPRINT_IsRented
struct UPlatformInventoryItem_BLUEPRINT_IsRented_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.BLUEPRINT_IsOwned
struct UPlatformInventoryItem_BLUEPRINT_IsOwned_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.BLUEPRINT_GetQuantityOwned
struct UPlatformInventoryItem_BLUEPRINT_GetQuantityOwned_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.PlatformInventoryItem.BLUEPRINT_CanOwnMore
struct UPlatformInventoryItem_BLUEPRINT_CanOwnMore_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.PlatformStoreAsset.GetLootId
struct UPlatformStoreAsset_GetLootId_Params
{
public:
	struct RallyHereIntegration_RH_LootId        ReturnValue;                                       // 0x0(0x14)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function RallyHereStart.PlayerExp_PlayerComponent.ServerFrameTimeUpdate
struct UPlayerExp_PlayerComponent_ServerFrameTimeUpdate_Params
{
public:
	struct RallyHereStart_PlayerExp_StatAccumulator InFrameTimeStats;                                  // 0x0(0xC8)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        InHitchesDetected;                                 // 0xC8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F9[0x4];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHAsyncImage.SetWaitingWidget
struct URHAsyncImage_SetWaitingWidget_Params
{
public:
	class UWidget*                               InWaitingWidget;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHAsyncImage.SetMaterialToUse
struct URHAsyncImage_SetMaterialToUse_Params
{
public:
	class UMaterialInstanceDynamic*              InMID;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereStart.RHAsyncImage.SetBrushFromTextureOnItem
struct URHAsyncImage_SetBrushFromTextureOnItem_Params
{
public:
	class UPlatformInventoryItem*                Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Texture;                                           // 0x8(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchSize;                                        // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48C[0x7];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHAsyncImage.SetBrushFromSoftPath
struct URHAsyncImage_SetBrushFromSoftPath_Params
{
public:
	struct CoreUObject_SoftObjectPath            SoftPath;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchSize;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49F[0x7];                                      // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHAsyncImage.SetBrushFromPathOnItem
struct URHAsyncImage_SetBrushFromPathOnItem_Params
{
public:
	class UPlatformInventoryItem*                Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_SoftObjectPath            Path;                                              // 0x8(0x20)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchSize;                                        // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B8[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHAsyncImage.SetBrushFromItemIcon
struct URHAsyncImage_SetBrushFromItemIcon_Params
{
public:
	class UPlatformInventoryItem*                Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchSize;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C7[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHAsyncImage.SetBrushFromIconInfo
struct URHAsyncImage_SetBrushFromIconInfo_Params
{
public:
	class UIconInfo*                             IconInfo;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchSize;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CF[0x7];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHAsyncImage.IsCurrentlyAsyncLoading
struct URHAsyncImage_IsCurrentlyAsyncLoading_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHAvatar.GetLargeAvatarInfo
struct URHAvatar_GetLargeAvatarInfo_Params
{
public:
	class UIconInfo*                             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHBanner.GetSmallBannerInfo
struct URHBanner_GetSmallBannerInfo_Params
{
public:
	class UIconInfo*                             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHBanner.GetLargeBannerInfo
struct URHBanner_GetLargeBannerInfo_Params
{
public:
	class UIconInfo*                             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHBattlepassRewardItem.GetRewardLevel
struct URHBattlepassRewardItem_GetRewardLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHBattlepassLevel.GetXPSpan
struct URHBattlepassLevel_GetXPSpan_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHEvent.GetRemainingSeconds
struct URHEvent_GetRemainingSeconds_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_559[0x4];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHBattlepass.GetPremiumIconInfo
struct URHBattlepass_GetPremiumIconInfo_Params
{
public:
	class UIconInfo*                             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHBattlepass.GetLevels
struct URHBattlepass_GetLevels_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URHBattlepassLevel*>            ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHBattlepass.GetLevelCount
struct URHBattlepass_GetLevelCount_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_584[0x4];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHBattlepass.GetInstantUnlockRewards
struct URHBattlepass_GetInstantUnlockRewards_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URHBattlepassRewardItem*>       ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHBattlepass.GetFreeIconInfo
struct URHBattlepass_GetFreeIconInfo_Params
{
public:
	class UIconInfo*                             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHBattlepass.GetBattlepassLevel
struct URHBattlepass_GetBattlepassLevel_Params
{
public:
	int32                                        LevelNumber;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5C4[0x4];                                      // Fixing Size After Last Property  
	class URHBattlepassLevel*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHBattlepass.BLUEPRINT_GetTotalXpProgress
struct URHBattlepass_BLUEPRINT_GetTotalXpProgress_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHBattlepass.BLUEPRINT_GetCurrentLevel
struct URHBattlepass_BLUEPRINT_GetCurrentLevel_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHWidget.UpdateRegistrationToInputManager
struct URHWidget_UpdateRegistrationToInputManager_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FocusGroup;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_616[0x4];                                      // Fixing Size After Last Property  
	class UWidget*                               Up;                                                // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Down;                                              // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Left;                                              // 0x20(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Right;                                             // 0x28(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.UnregisterWidgetFromInputManager
struct URHWidget_UnregisterWidgetFromInputManager_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHWidget.UnregisterFocusGroup
struct URHWidget_UnregisterFocusGroup_Params
{
public:
	int32                                        FocusGroup;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.ToggleMobileLayout
struct URHWidget_ToggleMobileLayout_Params
{
public:
	enum class ERH_INPUT_STATE                   InputState;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHWidget.SwapViewRoute
struct URHWidget_SwapViewRoute_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SwapTargetRoute;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceTransition;                                   // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_64D[0x2];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.StopTickAnimation
struct URHWidget_StopTickAnimation_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWidget.StartShowSequence
struct URHWidget_StartShowSequence_Params
{
public:
	class FName                                  FromRoute;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ToRoute;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWidget.StartHideSequence
struct URHWidget_StartHideSequence_Params
{
public:
	class FName                                  FromRoute;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ToRoute;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.SkipToEndTickAnimation
struct URHWidget_SkipToEndTickAnimation_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.ShouldUseMobileLayout
struct URHWidget_ShouldUseMobileLayout_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.SetRouteName
struct URHWidget_SetRouteName_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWidget.SetPendingRouteData
struct URHWidget_SetPendingRouteData_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Data;                                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWidget.SetFocusToWidgetOfGroup
struct URHWidget_SetFocusToWidgetOfGroup_Params
{
public:
	int32                                        FocusGroup;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A0[0x4];                                      // Fixing Size After Last Property  
	class URHWidget*                             Widget;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.SetFocusToThis
struct URHWidget_SetFocusToThis_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.SetFocusToGroup
struct URHWidget_SetFocusToGroup_Params
{
public:
	int32                                        FocusGroup;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         KeepLastFocus;                                     // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B1[0x3];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWidget.SetDefaultFocusForGroup
struct URHWidget_SetDefaultFocusForGroup_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FocusGroup;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6BC[0x4];                                      // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHWidget.SetContextHoldReleaseAction
struct URHWidget_SetContextHoldReleaseAction_Params
{
public:
	class FName                                  ContextName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           UpdateCallback;                                    // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           EventCallback;                                     // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHWidget.SetContextCycleAction
struct URHWidget_SetContextCycleAction_Params
{
public:
	class FName                                  ContextName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           EventCallback;                                     // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHWidget.SetContextAction
struct URHWidget_SetContextAction_Params
{
public:
	class FName                                  ContextName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           EventCallback;                                     // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHWidget.SetAllAnimationsPlaybackSpeed
struct URHWidget_SetAllAnimationsPlaybackSpeed_Params
{
public:
	float                                        PlaybackSpeed;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.ResumeTickAnimation
struct URHWidget_ResumeTickAnimation_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHWidget.RemoveViewRoute
struct URHWidget_RemoveViewRoute_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceTransition;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6FA[0x2];                                      // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.RHWidget.RemoveTopViewRoute
struct URHWidget_RemoveTopViewRoute_Params
{
public:
	bool                                         ForceTransition;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.RemoveTickAnimation
struct URHWidget_RemoveTickAnimation_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHWidget.RegisterWidgetToInputManager
struct URHWidget_RegisterWidgetToInputManager_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FocusGroup;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_71F[0x4];                                      // Fixing Size After Last Property  
	class UWidget*                               Up;                                                // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Down;                                              // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Left;                                              // 0x20(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Right;                                             // 0x28(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.PlayTickAnimation
struct URHWidget_PlayTickAnimation_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.PauseTickAnimation
struct URHWidget_PauseTickAnimation_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.NavigateConfirmPressed
struct URHWidget_NavigateConfirmPressed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.NavigateConfirm
struct URHWidget_NavigateConfirm_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.NavigateBackPressed
struct URHWidget_NavigateBackPressed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.NavigateBack
struct URHWidget_NavigateBack_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWidget.NativeFocusGroupNavigateUpFailure
struct URHWidget_NativeFocusGroupNavigateUpFailure_Params
{
public:
	int32                                        FocusGroup;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_797[0x4];                                      // Fixing Size After Last Property  
	class URHWidget*                             Widget;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWidget.NativeFocusGroupNavigateRightFailure
struct URHWidget_NativeFocusGroupNavigateRightFailure_Params
{
public:
	int32                                        FocusGroup;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A1[0x4];                                      // Fixing Size After Last Property  
	class URHWidget*                             Widget;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWidget.NativeFocusGroupNavigateLeftFailure
struct URHWidget_NativeFocusGroupNavigateLeftFailure_Params
{
public:
	int32                                        FocusGroup;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7AD[0x4];                                      // Fixing Size After Last Property  
	class URHWidget*                             Widget;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWidget.NativeFocusGroupNavigateDownFailure
struct URHWidget_NativeFocusGroupNavigateDownFailure_Params
{
public:
	int32                                        FocusGroup;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B7[0x4];                                      // Fixing Size After Last Property  
	class URHWidget*                             Widget;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.IsTopViewRoute
struct URHWidget_IsTopViewRoute_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.IsFocusEnabled
struct URHWidget_IsFocusEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHWidget.InheritFocusGroupFromWidget
struct URHWidget_InheritFocusGroupFromWidget_Params
{
public:
	int32                                        TargetFocusGroupNum;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D2[0x4];                                      // Fixing Size After Last Property  
	class URHWidget*                             SourceWidget;                                      // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SourceFocusGroupNum;                               // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D5[0x4];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.GetViewManager
struct URHWidget_GetViewManager_Params
{
public:
	class URHViewManager*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.GetUsesBlocker
struct URHWidget_GetUsesBlocker_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereStart.RHWidget.GetTickAnimationInfo
struct URHWidget_GetTickAnimationInfo_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_TickAnimationParams    OutAnimParams;                                     // 0x8(0x2C)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x34(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7FE[0x3];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHWidget.GetPendingRouteData
struct URHWidget_GetPendingRouteData_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Data;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_808[0x7];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.GetNormalOwningPlayer
struct URHWidget_GetNormalOwningPlayer_Params
{
public:
	class APlayerController*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWidget.GetNextWidgetInGridFocusGroup
struct URHWidget_GetNextWidgetInGridFocusGroup_Params
{
public:
	int32                                        FocusGroupNum;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_824[0x4];                                      // Fixing Size After Last Property  
	class URHWidget*                             ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.GetIsComponent
struct URHWidget_GetIsComponent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereStart.RHWidget.GetGeometryFromLastTick
struct URHWidget_GetGeometryFromLastTick_Params
{
public:
	struct SlateCore_Geometry                    ReturnValue;                                       // 0x0(0x38)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.GetCurrentFocusGroup
struct URHWidget_GetCurrentFocusGroup_Params
{
public:
	int32                                        OutFocusGroup;                                     // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_849[0x3];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWidget.GetCurrentFocusForGroup
struct URHWidget_GetCurrentFocusForGroup_Params
{
public:
	int32                                        FocusGroup;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85C[0x4];                                      // Fixing Size After Last Property  
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.GetBlockerClickToClose
struct URHWidget_GetBlockerClickToClose_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.GetActivePlayerController
struct URHWidget_GetActivePlayerController_Params
{
public:
	class APlayerController*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.GameStateSet
struct URHWidget_GameStateSet_Params
{
public:
	class AGameStateBase*                        GameState;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function RallyHereStart.RHWidget.GamepadButtonUp
struct URHWidget_GamepadButtonUp_Params
{
public:
	struct InputCore_Key                         Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct UMG_EventReply                        ReturnValue;                                       // 0x18(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function RallyHereStart.RHWidget.GamepadButtonDown
struct URHWidget_GamepadButtonDown_Params
{
public:
	struct InputCore_Key                         Button;                                            // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct UMG_EventReply                        ReturnValue;                                       // 0x18(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHWidget.FocusGroupNavigateUpFailure
struct URHWidget_FocusGroupNavigateUpFailure_Params
{
public:
	int32                                        FocusGroup;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHWidget.FocusGroupNavigateRightFailure
struct URHWidget_FocusGroupNavigateRightFailure_Params
{
public:
	int32                                        FocusGroup;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHWidget.FocusGroupNavigateLeftFailure
struct URHWidget_FocusGroupNavigateLeftFailure_Params
{
public:
	int32                                        FocusGroup;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHWidget.FocusGroupNavigateDownFailure
struct URHWidget_FocusGroupNavigateDownFailure_Params
{
public:
	int32                                        FocusGroup;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.ExplicitNavigateUp
struct URHWidget_ExplicitNavigateUp_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.ExplicitNavigateRight
struct URHWidget_ExplicitNavigateRight_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.ExplicitNavigateLeft
struct URHWidget_ExplicitNavigateLeft_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.ExplicitNavigateDown
struct URHWidget_ExplicitNavigateDown_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHWidget.DisplayGenericPopup
struct URHWidget_DisplayGenericPopup_Params
{
public:
	class FString                                STitle;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SDesc;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWidget.DisplayGenericError
struct URHWidget_DisplayGenericError_Params
{
public:
	class FString                                SDesc;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWidget.ClearContextAction
struct URHWidget_ClearContextAction_Params
{
public:
	class FName                                  ContextName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHWidget.CanCloseOnLogout
struct URHWidget_CanCloseOnLogout_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWidget.BindToViewportSizeChange
struct URHWidget_BindToViewportSizeChange_Params
{
public:
	FDelegateProperty_                           InViewportEvent;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHWidget.BindToInputManager
struct URHWidget_BindToInputManager_Params
{
public:
	int32                                        DefaultFocusGroup;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHWidget.AsyncLoadTexture2D
struct URHWidget_AsyncLoadTexture2D_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             Texture2DRef;                                      // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHWidget.AddViewRoute
struct URHWidget_AddViewRoute_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearRouteStack;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceTransition;                                   // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93E[0x6];                                      // Fixing Size After Last Property  
	class UObject*                               Data;                                              // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93F[0x7];                                      // Fixing Size Of Struct 
};

// 0x2C (0x2C - 0x0)
// Function RallyHereStart.RHWidget.AddTickAnimation
struct URHWidget_AddTickAnimation_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           UpdateEvent;                                       // 0xC(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           FinishedEvent;                                     // 0x1C(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWidget.AddContextActions
struct URHWidget_AddContextActions_Params
{
public:
	TArray<class FName>                          ContextNames;                                      // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHWidget.AddContextAction
struct URHWidget_AddContextAction_Params
{
public:
	class FName                                  ContextName;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  FormatAdditive;                                    // 0x8(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHProgressMeterWidgetBase.SetDeltaAnimationParams
struct URHProgressMeterWidgetBase_SetDeltaAnimationParams_Params
{
public:
	float                                        BasePercent;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaPercent;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimTime;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHProgressMeterWidgetBase.PlayDeltaAnimation
struct URHProgressMeterWidgetBase_PlayDeltaAnimation_Params
{
public:
	float                                        StartDelay;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHProgressMeterWidgetBase.OnDeltaAnimationFinished
struct URHProgressMeterWidgetBase_OnDeltaAnimationFinished_Params
{
public:
	bool                                         bLevelChange;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHProgressMeterWidgetBase.IsPlayingDeltaAnimation
struct URHProgressMeterWidgetBase_IsPlayingDeltaAnimation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHProgressMeterWidgetBase.ApplyMeterPercentages_Raw
struct URHProgressMeterWidgetBase_ApplyMeterPercentages_Raw_Params
{
public:
	float                                        BasePercent;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaPercent;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHProgressMeterWidgetBase.ApplyMeterPercentages
struct URHProgressMeterWidgetBase_ApplyMeterPercentages_Params
{
public:
	float                                        BasePercent;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaPercent;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHBattlepassRewardsTrackSegment.UpdateFromRewardItem
struct URHBattlepassRewardsTrackSegment_UpdateFromRewardItem_Params
{
public:
	class URHBattlepass*                         Battlepass;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHBattlepassRewardItem*               BattlepassRewardItem;                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHBattlepassRewardsTrackSegment.GetStandardBackgroundColor
struct URHBattlepassRewardsTrackSegment_GetStandardBackgroundColor_Params
{
public:
	struct CoreUObject_LinearColor               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHBattlepassRewardsTrackSegment.GetPremiumBackgroundColor
struct URHBattlepassRewardsTrackSegment_GetPremiumBackgroundColor_Params
{
public:
	struct CoreUObject_LinearColor               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHBattlepassRewardsTrackSegment.GetBattlePassPremiumColor
struct URHBattlepassRewardsTrackSegment_GetBattlePassPremiumColor_Params
{
public:
	struct CoreUObject_LinearColor               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHBattlepassRewardsTrackSegment.GetBattlePassFreeColor
struct URHBattlepassRewardsTrackSegment_GetBattlePassFreeColor_Params
{
public:
	struct CoreUObject_LinearColor               ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHBattlepassRewardsTrackSegment.ApplySegmentProgress
struct URHBattlepassRewardsTrackSegment_ApplySegmentProgress_Params
{
public:
	float                                        ProgressPercent;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHBattlepassRewardsTrackSegment.ApplySegmentMeterColor
struct URHBattlepassRewardsTrackSegment_ApplySegmentMeterColor_Params
{
public:
	struct CoreUObject_LinearColor               MeterColor;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHBattlepassRewardsTrackSegment.ApplySegmentLabel
struct URHBattlepassRewardsTrackSegment_ApplySegmentLabel_Params
{
public:
	class FText                                  LabelText;                                         // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHBattlepassRewardsTrackSegment.ApplySegmentBackgroundColor
struct URHBattlepassRewardsTrackSegment_ApplySegmentBackgroundColor_Params
{
public:
	struct CoreUObject_LinearColor               BackgroundColor;                                   // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHBattlepassTrackWidget.SetBattlepass
struct URHBattlepassTrackWidget_SetBattlepass_Params
{
public:
	class URHBattlepass*                         Battlepass;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHBattlepassTrackWidget.GetRewardItemsForPage
struct URHBattlepassTrackWidget_GetRewardItemsForPage_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB1[0x4];                                      // Fixing Size After Last Property  
	TArray<class URHBattlepassRewardItem*>       RewardItems;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHBattlepassWidget.ShowPurchaseBattlepassTiers
struct URHBattlepassWidget_ShowPurchaseBattlepassTiers_Params
{
public:
	int32                                        TierCount;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RH_BlueprintLibrary.GetPlayerInfoSubsystem
struct URH_BlueprintLibrary_GetPlayerInfoSubsystem_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHS_PlayerInfoSubsystem*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RH_BlueprintLibrary.GetLocalSettingsSubsystem
struct URH_BlueprintLibrary_GetLocalSettingsSubsystem_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_SettingsSubsystem*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RH_BlueprintLibrary.GetLocalPlayerSubsystem
struct URH_BlueprintLibrary_GetLocalPlayerSubsystem_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_LocalPlayerSubsystem*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RH_BlueprintLibrary.GetLocalPlayerInventory
struct URH_BlueprintLibrary_GetLocalPlayerInventory_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHS_PlayerInventory*                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RH_BlueprintLibrary.GetLocalPlayerInfo
struct URH_BlueprintLibrary_GetLocalPlayerInfo_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHBorder.GetSmallBorderInfo
struct URHBorder_GetSmallBorderInfo_Params
{
public:
	class UIconInfo*                             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHBorder.GetLargeBorderInfo
struct URHBorder_GetLargeBorderInfo_Params
{
public:
	class UIconInfo*                             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHCanvasPanel.PlaceWidgetUnder
struct URHCanvasPanel_PlaceWidgetUnder_Params
{
public:
	class UUserWidget*                           BottomWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           TopWidget;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHContextBarPrompt.OnInputStateChanged
struct URHContextBarPrompt_OnInputStateChanged_Params
{
public:
	enum class ERH_INPUT_STATE                   InputState;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHContextBarPrompt.OnContextActionUpdated
struct URHContextBarPrompt_OnContextActionUpdated_Params
{
public:
	class UContextActionData*                    InData;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHContextBarPrompt.HandleInputStateChanged
struct URHContextBarPrompt_HandleInputStateChanged_Params
{
public:
	enum class ERH_INPUT_STATE                   InputState;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHContextBarPrompt.GetContextActionData
struct URHContextBarPrompt_GetContextActionData_Params
{
public:
	class UContextActionData*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereStart.RHContextMenu.SetMenuPosition
struct URHContextMenu_SetMenuPosition_Params
{
public:
	class URHWidget*                             WidgetToMove;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_Margin                      WidgetPadding;                                     // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EViewSide                         Side;                                              // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B79[0x3];                                      // Fixing Size After Last Property  
	float                                        MenuWidth;                                         // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MenuHeight;                                        // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7C[0x4];                                      // Fixing Size After Last Property  
	struct CoreUObject_Vector2D                  ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHContextMenu.SetCurrentFriend
struct URHContextMenu_SetCurrentFriend_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         Friend;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHContextMenu.RemoveContextMenuButton
struct URHContextMenu_RemoveContextMenuButton_Params
{
public:
	class URHContextMenuButton*                  ContextButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.RHContextMenu.OnOptionSelected
struct URHContextMenu_OnOptionSelected_Params
{
public:
	enum class EPlayerContextOptions             ContextOption;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHContextMenu.HandleOnQueueStatusChange
struct URHContextMenu_HandleOnQueueStatusChange_Params
{
public:
	enum class ERH_MatchStatus                   QueueStatus;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHContextMenu.GetQueueDataFactory
struct URHContextMenu_GetQueueDataFactory_Params
{
public:
	class URHQueueDataFactory*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHContextMenu.GetPartyManager
struct URHContextMenu_GetPartyManager_Params
{
public:
	class URHPartyManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHContextMenu.GetContextButtonByEnum
struct URHContextMenu_GetContextButtonByEnum_Params
{
public:
	enum class EPlayerContextOptions             ContextOption;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAA[0x7];                                      // Fixing Size After Last Property  
	class URHContextMenuButton*                  ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHContextMenu.AddContextMenuButton
struct URHContextMenu_AddContextMenuButton_Params
{
public:
	class URHContextMenuButton*                  ContextButton;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHContextMenuButton.SetContextOption
struct URHContextMenuButton_SetContextOption_Params
{
public:
	enum class EPlayerContextOptions             Context;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHContextMenuButton.HandleVisibility
struct URHContextMenuButton_HandleVisibility_Params
{
public:
	bool                                         IsVisibility;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHContextMenuButton.HandleActive
struct URHContextMenuButton_HandleActive_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHContextMenuButton.GetContextOption
struct URHContextMenuButton_GetContextOption_Params
{
public:
	enum class EPlayerContextOptions             ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHCurrency.GetSmallIcon
struct URHCurrency_GetSmallIcon_Params
{
public:
	class UIconInfo*                             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHCurrency.GetFullSplash
struct URHCurrency_GetFullSplash_Params
{
public:
	class UIconInfo*                             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function RallyHereStart.RHCurrency.GetCurrencyDataForQuantity
struct URHCurrency_GetCurrencyDataForQuantity_Params
{
public:
	int32                                        Quantity;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C17[0x4];                                      // Fixing Size After Last Property  
	struct RallyHereStart_CurrencyImageRow       Data;                                              // 0x8(0xB0)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C18[0x7];                                      // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHCurrencyDisplay.SetInventoryCountOnText
struct URHCurrencyDisplay_SetInventoryCountOnText_Params
{
public:
	struct RallyHereIntegration_RH_ItemId        ItemId;                                            // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C27[0x4];                                      // Fixing Size After Last Property  
	class UTextBlock*                            TextBlock;                                         // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHCurrencyDisplay.SetCurrentDisplayByItem
struct URHCurrencyDisplay_SetCurrentDisplayByItem_Params
{
public:
	class URHStoreItem*                          StoreItem;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHCustomBrowser.HandleSearchResultReceived
struct URHCustomBrowser_HandleSearchResultReceived_Params
{
public:
	TArray<class URH_SessionView*>               CustomSessions;                                    // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHCustomBrowser.GetQueueDataFactory
struct URHCustomBrowser_GetQueueDataFactory_Params
{
public:
	class URHQueueDataFactory*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHCustomBrowser.GetBrowserEntriesContainer
struct URHCustomBrowser_GetBrowserEntriesContainer_Params
{
public:
	class UPanelWidget*                          ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHCustomBrowser.DisplayResult
struct URHCustomBrowser_DisplayResult_Params
{
public:
	TArray<class URH_SessionView*>               CustomSessions;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHCustomBrowserEntry.SetCustomGameInfo
struct URHCustomBrowserEntry_SetCustomGameInfo_Params
{
public:
	class URH_SessionView*                       InSession;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHCustomBrowserEntry.JoinGame
struct URHCustomBrowserEntry_JoinGame_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHCustomBrowserEntry.GetQueueDataFactory
struct URHCustomBrowserEntry_GetQueueDataFactory_Params
{
public:
	class URHQueueDataFactory*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHCustomBrowserEntry.GetPlayerCount
struct URHCustomBrowserEntry_GetPlayerCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHCustomBrowserEntry.GetMaxPlayerCount
struct URHCustomBrowserEntry_GetMaxPlayerCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHCustomBrowserEntry.GetGameDisplayName
struct URHCustomBrowserEntry_GetGameDisplayName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHCustomGameLobby.OpenMassInviteView
struct URHCustomGameLobby_OpenMassInviteView_Params
{
public:
	int32                                        InTeamToInviteTo;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHCustomGameLobby.MassInvite_ShouldShowPlayer
struct URHCustomGameLobby_MassInvite_ShouldShowPlayer_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C8E[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHCustomGameLobby.MassInvite_Select
struct URHCustomGameLobby_MassInvite_Select_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHInviteSelectResult             ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C94[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHCustomGameLobby.MassInvite_IsSelected
struct URHCustomGameLobby_MassInvite_IsSelected_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C9A[0x7];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHCustomGameLobby.IsLocalPlayerSpectator
struct URHCustomGameLobby_IsLocalPlayerSpectator_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHCustomGameLobby.HandlePlayerSwapTeam
struct URHCustomGameLobby_HandlePlayerSwapTeam_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentTeam;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHCustomGameLobby.HandlePlayerClicked
struct URHCustomGameLobby_HandlePlayerClicked_Params
{
public:
	struct RallyHereStart_RH_CustomMatchMember   MatchMember;                                       // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class URHCustomLobbyPlayer*                  PlayerWidget;                                      // 0x20(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHCustomGameLobby.GetQueueDataFactory
struct URHCustomGameLobby_GetQueueDataFactory_Params
{
public:
	class URHQueueDataFactory*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHCustomGameLobby.GetCustomMatchSession
struct URHCustomGameLobby_GetCustomMatchSession_Params
{
public:
	class URH_JoinedSession*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHCustomLobbyPlayer.SetMatchMember
struct URHCustomLobbyPlayer_SetMatchMember_Params
{
public:
	struct RallyHereStart_RH_CustomMatchMember   InMatchMember;                                     // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHCustomLobbyPlayer.GetQueueDataFactory
struct URHCustomLobbyPlayer_GetQueueDataFactory_Params
{
public:
	class URHQueueDataFactory*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHCustomLobbyPlayer.GetCanLocalPlayerKick
struct URHCustomLobbyPlayer_GetCanLocalPlayerKick_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHCustomLobbyPlayer.GetCanLocalPlayerControl
struct URHCustomLobbyPlayer_GetCanLocalPlayerControl_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHCustomMapSelect.HandleOnMapButtonSelected
struct URHCustomMapSelect_HandleOnMapButtonSelected_Params
{
public:
	class FName                                  MapName;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHCustomMapSelect.GetMapGrid
struct URHCustomMapSelect_GetMapGrid_Params
{
public:
	class UUniformGridPanel*                     ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHDataFactory.IsLoggedIn
struct URHDataFactory_IsLoggedIn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHDataSocialCategory.TryConsumeOpenOnUpdate
struct URHDataSocialCategory_TryConsumeOpenOnUpdate_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHDataSocialCategory.SetOpenOnUpdate
struct URHDataSocialCategory_SetOpenOnUpdate_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHDataSocialCategory.SetMessageText
struct URHDataSocialCategory_SetMessageText_Params
{
public:
	bool                                         bProcessing;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D73[0x7];                                      // Fixing Size After Last Property  
	class FText                                  MessageText;                                       // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHDataSocialCategory.SetHeaderText
struct URHDataSocialCategory_SetHeaderText_Params
{
public:
	class FText                                  Header;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHDataSocialCategory.Num
struct URHDataSocialCategory_Num_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHDataSocialCategory.IsProcessing
struct URHDataSocialCategory_IsProcessing_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHDataSocialCategory.GetSectionSubtype
struct URHDataSocialCategory_GetSectionSubtype_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHDataSocialCategory.GetPlayerList
struct URHDataSocialCategory_GetPlayerList_Params
{
public:
	TArray<class URHDataSocialPlayer*>           ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHDataSocialCategory.GetMessageText
struct URHDataSocialCategory_GetMessageText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHDataSocialCategory.GetHeaderText
struct URHDataSocialCategory_GetHeaderText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHDataSocialCategory.BP_GetSectionValue
struct URHDataSocialCategory_BP_GetSectionValue_Params
{
public:
	uint8                                        ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction RallyHereStart.RHDataSocialPlayer.RHSocialRHPlayerUpdate__DelegateSignature
struct URHDataSocialPlayer_RHSocialRHPlayerUpdate__DelegateSignature_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         Friend;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHDataSocialPlayer.IsValid
struct URHDataSocialPlayer_IsValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHDataSocialPlayer.GetFriend
struct URHDataSocialPlayer_GetFriend_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHEventManager.GetEventByTag
struct URHEventManager_GetEventByTag_Params
{
public:
	class FName                                  EventTag;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHEvent*                              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHFloatTickLerpWidgetBase.SetTargetValue
struct URHFloatTickLerpWidgetBase_SetTargetValue_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHFloatTickLerpWidgetBase.SetLerpTime
struct URHFloatTickLerpWidgetBase_SetLerpTime_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHFloatTickLerpWidgetBase.SetLerpPower
struct URHFloatTickLerpWidgetBase_SetLerpPower_Params
{
public:
	float                                        Power;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHFloatTickLerpWidgetBase.IsLerping
struct URHFloatTickLerpWidgetBase_IsLerping_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHFloatTickLerpWidgetBase.GetCurrentValue
struct URHFloatTickLerpWidgetBase_GetCurrentValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHFloatTickLerpWidgetBase.ForceCurrentValue
struct URHFloatTickLerpWidgetBase_ForceCurrentValue_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHFloatTickLerpWidgetBase.DisplayForValue
struct URHFloatTickLerpWidgetBase_DisplayForValue_Params
{
public:
	float                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHHUDCommon.SimulateKeyInput
struct ARHHUDCommon_SimulateKeyInput_Params
{
public:
	struct InputCore_Key                         Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHHUDCommon.ShowErrorPopup
struct ARHHUDCommon_ShowErrorPopup_Params
{
public:
	class FText                                  ErrorMsg;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHHUDCommon.ShouldShowCrossplayIconForPlayerState
struct ARHHUDCommon_ShouldShowCrossplayIconForPlayerState_Params
{
public:
	class ARHPlayerState*                        PlayerState;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E57[0x7];                                      // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHHUDCommon.ShouldShowCrossplayIconForPlayer
struct ARHHUDCommon_ShouldShowCrossplayIconForPlayer_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E5F[0x3];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.SetViewManager
struct ARHHUDCommon_SetViewManager_Params
{
public:
	class URHViewManager*                        InViewManager;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHHUDCommon.SetUseNewUIFeatures
struct ARHHUDCommon_SetUseNewUIFeatures_Params
{
public:
	bool                                         UseNewFeatures;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHHUDCommon.SetPreferredRegionId
struct ARHHUDCommon_SetPreferredRegionId_Params
{
public:
	class FString                                RegionId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHHUDCommon.SetNavigationEnabled
struct ARHHUDCommon_SetNavigationEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHHUDCommon.PrintToLog
struct ARHHUDCommon_PrintToLog_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.OnRegionsUpdated
struct ARHHUDCommon_OnRegionsUpdated_Params
{
public:
	class URH_MatchmakingBrowserCache*           MatchingBrowserCache;                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHHUDCommon.OnNavigateBack
struct ARHHUDCommon_OnNavigateBack_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.OnInvalidVoucherOrder
struct ARHHUDCommon_OnInvalidVoucherOrder_Params
{
public:
	class URHStoreItem*                          StoreItem;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHHUDCommon.MutePlayer
struct ARHHUDCommon_MutePlayer_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Mute;                                              // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EBC[0x2];                                      // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHHUDCommon.LogErrorMessage
struct ARHHUDCommon_LogErrorMessage_Params
{
public:
	class FText                                  ErrorMsg;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHHUDCommon.IsSamePlatformAsLocalPlayer
struct ARHHUDCommon_IsSamePlatformAsLocalPlayer_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ECD[0x3];                                      // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHHUDCommon.IsMuted
struct ARHHUDCommon_IsMuted_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED9[0x3];                                      // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHHUDCommon.IsLobbyHUD
struct ARHHUDCommon_IsLobbyHUD_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHHUDCommon.IsHudReadyForBinding
struct ARHHUDCommon_IsHudReadyForBinding_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHHUDCommon.IsHudInitComplete
struct ARHHUDCommon_IsHudInitComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHHUDCommon.IsCrossplayEnabled
struct ARHHUDCommon_IsCrossplayEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHHUDCommon.InputStateChangePassthrough
struct ARHHUDCommon_InputStateChangePassthrough_Params
{
public:
	enum class ERH_INPUT_STATE                   InputState;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetViewManager
struct ARHHUDCommon_GetViewManager_Params
{
public:
	class URHViewManager*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetUISessionManager
struct ARHHUDCommon_GetUISessionManager_Params
{
public:
	class URHUISessionManager*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetSettingsDataFactory
struct ARHHUDCommon_GetSettingsDataFactory_Params
{
public:
	class URHSettingsDataFactory*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetRegionList
struct ARHHUDCommon_GetRegionList_Params
{
public:
	TMap<class FString, class FText>             OutRegionIdToNameMap;                              // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetPreferredRegionId
struct ARHHUDCommon_GetPreferredRegionId_Params
{
public:
	class FString                                OutRegionId;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F2C[0x7];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetPopupManager
struct ARHHUDCommon_GetPopupManager_Params
{
public:
	class URHPopupManager*                       ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetPlayerInfoSubsystem
struct ARHHUDCommon_GetPlayerInfoSubsystem_Params
{
public:
	class URH_PlayerInfoSubsystem*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetPlayerControllerOwner
struct ARHHUDCommon_GetPlayerControllerOwner_Params
{
public:
	class APlayerController*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetPlatformUserId
struct ARHHUDCommon_GetPlatformUserId_Params
{
public:
	struct CoreUObject_PlatformUserId            ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetPartyManager
struct ARHHUDCommon_GetPartyManager_Params
{
public:
	class URHPartyManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetOSSUniqueId
struct ARHHUDCommon_GetOSSUniqueId_Params
{
public:
	struct CoreOnline_UniqueNetIdWrapper         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetOrderManager
struct ARHHUDCommon_GetOrderManager_Params
{
public:
	class URHOrderManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetOrCreatePlayerInfo
struct ARHHUDCommon_GetOrCreatePlayerInfo_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetNavigateUpAction
struct ARHHUDCommon_GetNavigateUpAction_Params
{
public:
	class UInputAction*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetNavigateRightAction
struct ARHHUDCommon_GetNavigateRightAction_Params
{
public:
	class UInputAction*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetNavigateLeftAction
struct ARHHUDCommon_GetNavigateLeftAction_Params
{
public:
	class UInputAction*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetNavigateDownAction
struct ARHHUDCommon_GetNavigateDownAction_Params
{
public:
	class UInputAction*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetLoginDataFactory
struct ARHHUDCommon_GetLoginDataFactory_Params
{
public:
	class URHLoginDataFactory*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetLocalPlayerSubsystem
struct ARHHUDCommon_GetLocalPlayerSubsystem_Params
{
public:
	class URH_LocalPlayerSubsystem*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetLoadoutDataFactory
struct ARHHUDCommon_GetLoadoutDataFactory_Params
{
public:
	class URHLoadoutDataFactory*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetItemHelper
struct ARHHUDCommon_GetItemHelper_Params
{
public:
	class URHStoreItemHelper*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetInputManager
struct ARHHUDCommon_GetInputManager_Params
{
public:
	class URHInputManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetHUDMappingContext
struct ARHHUDCommon_GetHUDMappingContext_Params
{
public:
	class UInputMappingContext*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetHoldToConfirmAction
struct ARHHUDCommon_GetHoldToConfirmAction_Params
{
public:
	class UInputAction*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetHoldToCancelAction
struct ARHHUDCommon_GetHoldToCancelAction_Params
{
public:
	class UInputAction*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetGameInstanceSubsystem
struct ARHHUDCommon_GetGameInstanceSubsystem_Params
{
public:
	class URH_GameInstanceSubsystem*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetFont
struct ARHHUDCommon_GetFont_Params
{
public:
	class FName                                  FontName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct SlateCore_SlateFontInfo               ReturnFont;                                        // 0x8(0x58)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FC6[0x7];                                      // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetFocusableWidgetContainers
struct ARHHUDCommon_GetFocusableWidgetContainers_Params
{
public:
	TArray<class UPanelWidget*>                  ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetCurrentInputState
struct ARHHUDCommon_GetCurrentInputState_Params
{
public:
	enum class ERH_INPUT_STATE                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function RallyHereStart.RHHUDCommon.GetColor
struct ARHHUDCommon_GetColor_Params
{
public:
	class FName                                  ColorName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_LinearColor               ReturnColor;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF7[0x3];                                      // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetCancelReleasedAction
struct ARHHUDCommon_GetCancelReleasedAction_Params
{
public:
	class UInputAction*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetCancelPressedAction
struct ARHHUDCommon_GetCancelPressedAction_Params
{
public:
	class UInputAction*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetAcceptReleasedAction
struct ARHHUDCommon_GetAcceptReleasedAction_Params
{
public:
	class UInputAction*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDCommon.GetAcceptPressedAction
struct ARHHUDCommon_GetAcceptPressedAction_Params
{
public:
	class UInputAction*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHHUDCommon.DisplayGenericPopup
struct ARHHUDCommon_DisplayGenericPopup_Params
{
public:
	class FString                                STitle;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SDesc;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHHUDCommon.DisplayGenericError
struct ARHHUDCommon_DisplayGenericError_Params
{
public:
	class FString                                SDesc;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHHUDCommon.ApplySafeFrameScale
struct ARHHUDCommon_ApplySafeFrameScale_Params
{
public:
	float                                        SafeFrameScale;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHGameInstance.GetStoreItemHelper
struct URHGameInstance_GetStoreItemHelper_Params
{
public:
	class URHStoreItemHelper*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHGameInstance.GetLootBoxManager
struct URHGameInstance_GetLootBoxManager_Params
{
public:
	class URHLootBoxManager*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHGameInstance.GetLoadoutDataFactory
struct URHGameInstance_GetLoadoutDataFactory_Params
{
public:
	class URHLoadoutDataFactory*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHGameInstance.GetEventManager
struct URHGameInstance_GetEventManager_Params
{
public:
	class URHEventManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHGameInstance.EndLoadingScreen
struct URHGameInstance_EndLoadingScreen_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHGameInstance.BeginLoadingScreen
struct URHGameInstance_BeginLoadingScreen_Params
{
public:
	class FString                                MapName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHGameModeBase.InactivePlayerStateDestroyed
struct ARHGameModeBase_InactivePlayerStateDestroyed_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHGameModeBase.CalculateMatchCloseness
struct ARHGameModeBase_CalculateMatchCloseness_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHGamepadCurvedLookSpeedManager.SetOuterDeadZone
struct URHGamepadCurvedLookSpeedManager_SetOuterDeadZone_Params
{
public:
	float                                        NewZoneX;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewZoneY;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHGamepadCurvedLookSpeedManager.SetBoostMultiplier
struct URHGamepadCurvedLookSpeedManager_SetBoostMultiplier_Params
{
public:
	float                                        NewBoostX;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewBoostY;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHGamepadCurvedLookSpeedManager.SetBoostAcceleration
struct URHGamepadCurvedLookSpeedManager_SetBoostAcceleration_Params
{
public:
	float                                        NewAccel;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHGamepadCurvedLookSpeedManager.SetBaseVelocityCurve
struct URHGamepadCurvedLookSpeedManager_SetBaseVelocityCurve_Params
{
public:
	class FName                                  TestCurveName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHGamepadPromptWidget.SetContext
struct URHGamepadPromptWidget_SetContext_Params
{
public:
	struct RallyHereStart_ButtonPromptContext    PromptContext;                                     // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHGamepadPromptWidget.PushContext
struct URHGamepadPromptWidget_PushContext_Params
{
public:
	struct RallyHereStart_ButtonPromptContext    PromptContext;                                     // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHGamepadPromptWidget.PopContext
struct URHGamepadPromptWidget_PopContext_Params
{
public:
	struct RallyHereStart_ButtonPromptContext    OutContext;                                        // 0x0(0x10)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_120F[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHGamepadPromptWidget.ApplyContext
struct URHGamepadPromptWidget_ApplyContext_Params
{
public:
	struct RallyHereStart_ButtonPromptContext    Context;                                           // 0x0(0x10)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHGameUserSettings.SaveLocalAction
struct URHGameUserSettings_SaveLocalAction_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHGameUserSettings.IsLocalActionSaved
struct URHGameUserSettings_IsLocalActionSaved_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C8[0x3];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHGameUserSettings.GetUseQuickCast
struct URHGameUserSettings_GetUseQuickCast_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHGameUserSettings.GetTextChatEnabled
struct URHGameUserSettings_GetTextChatEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHGameUserSettings.GetSafeFrameScale
struct URHGameUserSettings_GetSafeFrameScale_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHGameUserSettings.GetQuipsEnabled
struct URHGameUserSettings_GetQuipsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHGameUserSettings.GetMuteMode
struct URHGameUserSettings_GetMuteMode_Params
{
public:
	enum class EMuteMode                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHGameUserSettings.GetCrosshairSize
struct URHGameUserSettings_GetCrosshairSize_Params
{
public:
	enum class ECrosshairSize                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHGameUserSettings.GetCommunicationsEnabled
struct URHGameUserSettings_GetCommunicationsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHGameUserSettings.GetColorCorrection
struct URHGameUserSettings_GetColorCorrection_Params
{
public:
	enum class EColorVisionDeficiency            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHGameWidget.GetStickyWidgetDataForViewManager
struct URHGameWidget_GetStickyWidgetDataForViewManager_Params
{
public:
	TArray<struct RallyHereStart_StickyWidgetData> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHGameWidget.GetPanelsForViewManager
struct URHGameWidget_GetPanelsForViewManager_Params
{
public:
	TArray<class UCanvasPanel*>                  ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHHUDInterface.SetSafeFrameScale
struct IRHHUDInterface_SetSafeFrameScale_Params
{
public:
	float                                        SafeFrameScale;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHHUDInterface.SetHUDVisible
struct IRHHUDInterface_SetHUDVisible_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDInterface.ReceivedGameModeClass
struct IRHHUDInterface_ReceivedGameModeClass_Params
{
public:
	TSubclassOf<class AGameModeBase>             GameModeClass;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHHUDInterface.OnLoadRoute
struct IRHHUDInterface_OnLoadRoute_Params
{
public:
	class FName                                  Route;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceTransition;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1355[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHHUDInterface.GetSettingsCallbackInterface
struct IRHHUDInterface_GetSettingsCallbackInterface_Params
{
public:
	TScriptInterface<class IRHSettingsCallbackInterface> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function RallyHereStart.RHHUDInterface.CreateGameRuleWidget
struct IRHHUDInterface_CreateGameRuleWidget_Params
{
public:
	struct RallyHereStart_RHWidgetInfoParams     WidgetInfoParams;                                  // 0x0(0x48)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHHUDInterface.BroadcastWidgetMessage
struct IRHHUDInterface_BroadcastWidgetMessage_Params
{
public:
	class FName                                  Message;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHHUDInterface.BindEventToWidgetMessages
struct IRHHUDInterface_BindEventToWidgetMessages_Params
{
public:
	FDelegateProperty_                           Callback;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.ContextActionData.TriggerHoldReleaseContextAction
struct UContextActionData_TriggerHoldReleaseContextAction_Params
{
public:
	enum class EContextActionHoldReleaseState    Status;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.ContextActionData.TriggerCycleContextAction
struct UContextActionData_TriggerCycleContextAction_Params
{
public:
	bool                                         bNext;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHInputManager.SetLastInputType
struct URHInputManager_SetLastInputType_Params
{
public:
	enum class ERHLastInputType                  NewLastInputType;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHInputManager.SetInputActions
struct URHInputManager_SetInputActions_Params
{
public:
	TArray<class UContextActionData*>            ActionData;                                        // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHInputManager.SetContextHoldReleaseAction
struct URHInputManager_SetContextHoldReleaseAction_Params
{
public:
	class FName                                  Route;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ContextName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           UpdateCallback;                                    // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           EventCallback;                                     // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHInputManager.SetContextCycleAction
struct URHInputManager_SetContextCycleAction_Params
{
public:
	class FName                                  Route;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ContextName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           EventCallback;                                     // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHInputManager.SetContextAction
struct URHInputManager_SetContextAction_Params
{
public:
	class FName                                  Route;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ContextName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           EventCallback;                                     // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHInputManager.SetActiveRoute
struct URHInputManager_SetActiveRoute_Params
{
public:
	class FName                                  Route;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHInputManager.RemoveOverrideRoute
struct URHInputManager_RemoveOverrideRoute_Params
{
public:
	class FName                                  Route;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F3[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHInputManager.PushOverrideRoute
struct URHInputManager_PushOverrideRoute_Params
{
public:
	class FName                                  Route;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHInputManager.PopOverrideRoute
struct URHInputManager_PopOverrideRoute_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHInputManager.HandleModeChange
struct URHInputManager_HandleModeChange_Params
{
public:
	enum class ERH_INPUT_STATE                   Mode;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHInputManager.GetFocusedWidget
struct URHInputManager_GetFocusedWidget_Params
{
public:
	class URHWidget*                             ParentWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               FocusWidget;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_140A[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHInputManager.GetCurrentRoute
struct URHInputManager_GetCurrentRoute_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHInputManager.GetCurrentContextRoute
struct URHInputManager_GetCurrentContextRoute_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHInputManager.GetButtonForInputAction
struct URHInputManager_GetButtonForInputAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct InputCore_Key                         Button;                                            // 0x8(0x18)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsGamepadKey;                                      // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_141F[0x6];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHInputManager.GetAllButtonsForInputAction
struct URHInputManager_GetAllButtonsForInputAction_Params
{
public:
	class UInputAction*                          Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct InputCore_Key>                 Buttons;                                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142A[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHInputManager.ClearContextAction
struct URHInputManager_ClearContextAction_Params
{
public:
	class FName                                  Route;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ContextName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHInputManager.ClearAllContextActions
struct URHInputManager_ClearAllContextActions_Params
{
public:
	class FName                                  Route;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHInputManager.AddContextActions
struct URHInputManager_AddContextActions_Params
{
public:
	class FName                                  Route;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ContextNames;                                      // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHInputManager.AddContextAction
struct URHInputManager_AddContextAction_Params
{
public:
	class FName                                  Route;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ContextName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  FormatAdditive;                                    // 0x10(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHJsonDataFactory.HandleJsonReady
struct URHJsonDataFactory_HandleJsonReady_Params
{
public:
	class URHLandingPanelJSONHandler*            PHandler;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHJsonDataFactory.HandleImagesReady
struct URHJsonDataFactory_HandleImagesReady_Params
{
public:
	class URHLandingPanelJSONHandler*            PHandler;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RH_PlayerLoadoutItem.SetSortOrder
struct URH_PlayerLoadoutItem_SetSortOrder_Params
{
public:
	int32                                        InSortOrder;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RH_PlayerLoadoutItem.SetLoadoutItemId
struct URH_PlayerLoadoutItem_SetLoadoutItemId_Params
{
public:
	class FString                                InLoadoutItemId;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RH_PlayerLoadoutItem.SetLastModifiedTime
struct URH_PlayerLoadoutItem_SetLastModifiedTime_Params
{
public:
	struct CoreUObject_DateTime                  InLastModifiedTime;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RH_PlayerLoadoutItem.SetItemValueId
struct URH_PlayerLoadoutItem_SetItemValueId_Params
{
public:
	int32                                        InItemValueId;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RH_PlayerLoadoutItem.SetItemId
struct URH_PlayerLoadoutItem_SetItemId_Params
{
public:
	struct RallyHereIntegration_RH_ItemId        InItemId;                                          // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RH_PlayerLoadoutItem.SetCreationDate
struct URH_PlayerLoadoutItem_SetCreationDate_Params
{
public:
	struct CoreUObject_DateTime                  InCreationDate;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RH_PlayerLoadoutItem.SetCount
struct URH_PlayerLoadoutItem_SetCount_Params
{
public:
	int32                                        InCount;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RH_PlayerLoadoutItem.GetSortOrder
struct URH_PlayerLoadoutItem_GetSortOrder_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RH_PlayerLoadoutItem.GetLoadoutItemId
struct URH_PlayerLoadoutItem_GetLoadoutItemId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RH_PlayerLoadoutItem.GetLastModifiedTime
struct URH_PlayerLoadoutItem_GetLastModifiedTime_Params
{
public:
	struct CoreUObject_DateTime                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RH_PlayerLoadoutItem.GetItemValueId
struct URH_PlayerLoadoutItem_GetItemValueId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RH_PlayerLoadoutItem.GetItemId
struct URH_PlayerLoadoutItem_GetItemId_Params
{
public:
	struct RallyHereIntegration_RH_ItemId        ReturnValue;                                       // 0x0(0x14)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RH_PlayerLoadoutItem.GetCreationDate
struct URH_PlayerLoadoutItem_GetCreationDate_Params
{
public:
	struct CoreUObject_DateTime                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RH_PlayerLoadoutItem.GetCount
struct URH_PlayerLoadoutItem_GetCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RH_PlayerLoadout.LocalEquipItemToSlot
struct URH_PlayerLoadout_LocalEquipItemToSlot_Params
{
public:
	class UPlatformInventoryItem*                Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHLoadoutSlotTypes               LoadoutSlot;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153A[0x6];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RH_PlayerLoadout.IsItemEquippedInSlot
struct URH_PlayerLoadout_IsItemEquippedInSlot_Params
{
public:
	class UPlatformInventoryItem*                Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHLoadoutSlotTypes               LoadoutSlot;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1548[0x6];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RH_PlayerLoadout.GetV
struct URH_PlayerLoadout_GetV_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RH_PlayerLoadout.GetType
struct URH_PlayerLoadout_GetType_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RH_PlayerLoadout.GetSortOrder
struct URH_PlayerLoadout_GetSortOrder_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RH_PlayerLoadout.GetName
struct URH_PlayerLoadout_GetName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RH_PlayerLoadout.GetLoadoutId
struct URH_PlayerLoadout_GetLoadoutId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RH_PlayerLoadout.GetLastModifiedTime
struct URH_PlayerLoadout_GetLastModifiedTime_Params
{
public:
	struct CoreUObject_DateTime                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RH_PlayerLoadout.GetItems
struct URH_PlayerLoadout_GetItems_Params
{
public:
	TArray<class URH_PlayerLoadoutItem*>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RH_PlayerLoadout.GetEquippedItemInSlot
struct URH_PlayerLoadout_GetEquippedItemInSlot_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHLoadoutSlotTypes               LoadoutSlot;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1591[0x2];                                     // Fixing Size Of Struct 
};

// 0x50 (0x50 - 0x0)
// Function RallyHereStart.RH_PlayerLoadout.GetDefaultItems
struct URH_PlayerLoadout_GetDefaultItems_Params
{
public:
	TMap<enum class ERHLoadoutSlotTypes, class UPlatformInventoryItem*> ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RH_PlayerLoadout.GetCreationDate
struct URH_PlayerLoadout_GetCreationDate_Params
{
public:
	struct CoreUObject_DateTime                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHLoadoutDataFactory.GetRHLoadoutDataFactory
struct URHLoadoutDataFactory_GetRHLoadoutDataFactory_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHLoadoutDataFactory*                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHLoadoutDataFactory.GetDefaultItemForLoadoutSlotType
struct URHLoadoutDataFactory_GetDefaultItemForLoadoutSlotType_Params
{
public:
	enum class ERHLoadoutSlotTypes               SlotType;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EF[0x7];                                     // Fixing Size After Last Property  
	class UPlatformInventoryItem*                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHLoadoutDataFactory.BLUEPRINT_SetPlayerLoadoutSettings
struct URHLoadoutDataFactory_BLUEPRINT_SetPlayerLoadoutSettings_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URH_PlayerLoadout*>             Loadouts;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHLoadoutDataFactory.BLUEPRINT_RequestPlayerLoadoutSettings
struct URHLoadoutDataFactory_BLUEPRINT_RequestPlayerLoadoutSettings_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Timespan                  StaleThreshold;                                    // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRefresh;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_160E[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           Delegate;                                          // 0x14(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1610[0x4];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHLoadoutDataFactory.BLUEPRINT_RequestPlayerLoadoutSettingByLoadoutType
struct URHLoadoutDataFactory_BLUEPRINT_RequestPlayerLoadoutSettingByLoadoutType_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHLoadoutTypes                   LoadoutType;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreateIfNeeded;                                   // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1624[0x6];                                     // Fixing Size After Last Property  
	struct CoreUObject_Timespan                  StaleThreshold;                                    // 0x10(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceRefresh;                                     // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1625[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           Delegate;                                          // 0x1C(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1626[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RH_LoadoutManager.SetLoadoutActiveIndex
struct ARH_LoadoutManager_SetLoadoutActiveIndex_Params
{
public:
	class FString                                LoadoutType;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1649[0x4];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RH_LoadoutManager.OnPlayerInfoReady
struct ARH_LoadoutManager_OnPlayerInfoReady_Params
{
public:
	class URHS_PlayerInfo*                       PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RH_LoadoutManager.OnInventoryUpdated
struct ARH_LoadoutManager_OnInventoryUpdated_Params
{
public:
	TArray<int32>                                ItemIds;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// Function RallyHereStart.RH_LoadoutManager.IsValidItemForSlot
struct ARH_LoadoutManager_IsValidItemForSlot_Params
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167E[0x4];                                     // Fixing Size After Last Property  
	struct RallyHereStart_RH_LoadoutSlot         LoadoutSlot;                                       // 0x8(0x128)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x130(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1681[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHLobbyHUD.ShowPopupConfirmation
struct ARHLobbyHUD_ShowPopupConfirmation_Params
{
public:
	class FText                                  Message;                                           // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	enum class ESocialMessageType                MessageType;                                       // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16AF[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHLobbyHUD.OnNotEnoughCurrency
struct ARHLobbyHUD_OnNotEnoughCurrency_Params
{
public:
	class URHStorePurchaseRequest*               PurchaseRequest;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHLobbyHUD.IsPlayerMuted
struct ARHLobbyHUD_IsPlayerMuted_Params
{
public:
	class URH_PlayerInfo*                        PlayerData;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C8[0x7];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHLobbyHUD.HandleMatchStatusUpdated
struct ARHLobbyHUD_HandleMatchStatusUpdated_Params
{
public:
	enum class ERH_MatchStatus                   MatchStatus;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHLobbyHUD.HandleLoginStateChange
struct ARHLobbyHUD_HandleLoginStateChange_Params
{
public:
	enum class ERHLoginState                     LoginState;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHLobbyHUD.GetQueueDataFactory
struct ARHLobbyHUD_GetQueueDataFactory_Params
{
public:
	class URHQueueDataFactory*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHLobbyHUD.GetLobbyWidget
struct ARHLobbyHUD_GetLobbyWidget_Params
{
public:
	class URHLobbyWidget*                        ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHLobbyHUD.GetJsonDataFactory
struct ARHLobbyHUD_GetJsonDataFactory_Params
{
public:
	class URHJsonDataFactory*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHLobbyHUD.GetDefaultPlayerAccountItem
struct ARHLobbyHUD_GetDefaultPlayerAccountItem_Params
{
public:
	enum class ERHLoadoutSlotTypes               ItemSlot;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1703[0x7];                                     // Fixing Size After Last Property  
	class UPlatformInventoryItem*                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.UIX_OnSubmitLogin
struct URHLoginDataFactory_UIX_OnSubmitLogin_Params
{
public:
	class FString                                UserName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.UIX_OnSubmitAutoLogin
struct URHLoginDataFactory_UIX_OnSubmitAutoLogin_Params
{
public:
	struct CoreUObject_PlatformUserId            PlatformId;                                        // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.UIX_OnSignInWithGoogle
struct URHLoginDataFactory_UIX_OnSignInWithGoogle_Params
{
public:
	struct CoreUObject_PlatformUserId            PlatformId;                                        // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.UIX_OnSignInWithApple
struct URHLoginDataFactory_UIX_OnSignInWithApple_Params
{
public:
	struct CoreUObject_PlatformUserId            PlatformId;                                        // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.UIX_OnLinkExistingAccount
struct URHLoginDataFactory_UIX_OnLinkExistingAccount_Params
{
public:
	class FString                                UserName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.ShouldDisplayDisconnectError
struct URHLoginDataFactory_ShouldDisplayDisconnectError_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.RecordLoginState
struct URHLoginDataFactory_RecordLoginState_Params
{
public:
	enum class ERHLoginState                     NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.LoginEvent_ShowAgreements
struct URHLoginDataFactory_LoginEvent_ShowAgreements_Params
{
public:
	bool                                         bNeedsEULA;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNeedsTOS;                                         // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNeedsPP;                                          // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHLoginDataFactory.LoginEvent_Queued
struct URHLoginDataFactory_LoginEvent_Queued_Params
{
public:
	uint32                                       QueuePosition;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       QueueSize;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       QueueEstimatedWait;                                // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.LoginEvent_FailedClient
struct URHLoginDataFactory_LoginEvent_FailedClient_Params
{
public:
	class FText                                  ErrorMsg;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.LoadEULAFile
struct URHLoginDataFactory_LoadEULAFile_Params
{
public:
	class FString                                SaveText;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A2[0x7];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHLoginDataFactory.HandleControllerPairingChange
struct URHLoginDataFactory_HandleControllerPairingChange_Params
{
public:
	struct CoreUObject_InputDeviceId             InputDeviceId;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_PlatformUserId            NewUserPlatformId;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_PlatformUserId            OldUserPlatformId;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHLoginDataFactory.HandleControllerConnectionChange
struct URHLoginDataFactory_HandleControllerConnectionChange_Params
{
public:
	enum class EInputDeviceConnectionState       NewConnectionState;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17BB[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_PlatformUserId            PlatformUserId;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_InputDeviceId             InputDeviceId;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.GetRH_LocalPlayerLoginSubsystem
struct URHLoginDataFactory_GetRH_LocalPlayerLoginSubsystem_Params
{
public:
	class URH_LocalPlayerLoginSubsystem*         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.GetLastDisconnectReason
struct URHLoginDataFactory_GetLastDisconnectReason_Params
{
public:
	class FText                                  ErrorMsg;                                          // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CC[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.GetCurrentPlayerName
struct URHLoginDataFactory_GetCurrentPlayerName_Params
{
public:
	class FText                                  NameText;                                          // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17D6[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.GetCurrentPlayerId
struct URHLoginDataFactory_GetCurrentPlayerId_Params
{
public:
	class FText                                  ID;                                                // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17DF[0x7];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.GetCurrentLoginState
struct URHLoginDataFactory_GetCurrentLoginState_Params
{
public:
	enum class ERHLoginState                     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.AreLoginsLimited
struct URHLoginDataFactory_AreLoginsLimited_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHLoginDataFactory.AllowUserSwitching
struct URHLoginDataFactory_AllowUserSwitching_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHViewRedirecter.ShouldRedirect
struct URHViewRedirecter_ShouldRedirect_Params
{
public:
	class ARHHUDCommon*                          HUD;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Route;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               SceneData;                                         // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_182D[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHLootBoxContents.GetContentsFilterOptions
struct URHLootBoxContents_GetContentsFilterOptions_Params
{
public:
	TArray<class FText>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHLootBoxManager.OnStoreVendorsLoaded
struct URHLootBoxManager_OnStoreVendorsLoaded_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHLootBoxManager.GetContentCategoryName
struct URHLootBoxManager_GetContentCategoryName_Params
{
public:
	enum class ELootBoxContentsCategories        Category;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_187B[0x7];                                     // Fixing Size After Last Property  
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHMapButton.SetSelected
struct URHMapButton_SetSelected_Params
{
public:
	bool                                         bSelected;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHMapButton.SetMap
struct URHMapButton_SetMap_Params
{
public:
	class FName                                  InMapName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function RallyHereStart.RHMapButton.GetMapDetails
struct URHMapButton_GetMapDetails_Params
{
public:
	struct RallyHereStart_RHMapDetails           OutMapDetails;                                     // 0x0(0x70)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B0[0x7];                                     // Fixing Size Of Struct 
};

// 0x48 (0x48 - 0x0)
// Function RallyHereStart.RHDataIndividualInviteSetup.SetCallbacks
struct URHDataIndividualInviteSetup_SetCallbacks_Params
{
public:
	FDelegateProperty_                           GetIsSelected;                                     // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Select;                                            // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ShouldShowPlayer;                                  // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Close;                                             // 0x30(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHDataIndividualInviteSetup*          ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction RallyHereStart.RHDataIndividualInviteSetup.RHInviteSelect__DelegateSignature
struct URHDataIndividualInviteSetup_RHInviteSelect__DelegateSignature_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHInviteSelectResult             ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E6[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// DelegateFunction RallyHereStart.RHDataIndividualInviteSetup.RHInviteGetIsSelected__DelegateSignature
struct URHDataIndividualInviteSetup_RHInviteGetIsSelected__DelegateSignature_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F6[0x7];                                     // Fixing Size Of Struct 
};

// 0x38 (0x38 - 0x0)
// Function RallyHereStart.RHDataBatchInviteSetup.SetCallbacks
struct URHDataBatchInviteSetup_SetCallbacks_Params
{
public:
	FDelegateProperty_                           Select;                                            // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ShouldShowPlayer;                                  // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Cancel;                                            // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHDataBatchInviteSetup*               ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction RallyHereStart.RHDataBatchInviteSetup.RHBatchSelect__DelegateSignature
struct URHDataBatchInviteSetup_RHBatchSelect__DelegateSignature_Params
{
public:
	TArray<class URH_RHFriendAndPlatformFriend*> Friends;                                           // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHMassInviteModal.UpdateRouteData
struct URHMassInviteModal_UpdateRouteData_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHMassInviteModal.SelectPlayer
struct URHMassInviteModal_SelectPlayer_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         Friend;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHInviteSelectResult             ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195D[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// DelegateFunction RallyHereStart.RHMassInviteModal.RHInviteReceivePlayers__DelegateSignature
struct URHMassInviteModal_RHInviteReceivePlayers__DelegateSignature_Params
{
public:
	TArray<class URH_RHFriendAndPlatformFriend*> PlayerAndPlatformInfos;                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHMassInviteModal.RequestFriends
struct URHMassInviteModal_RequestFriends_Params
{
public:
	FDelegateProperty_                           OnReceivePlayers;                                  // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHMassInviteModal.OnSearchResultUpdated
struct URHMassInviteModal_OnSearchResultUpdated_Params
{
public:
	TArray<class URH_RHFriendAndPlatformFriend*> ResultPlayers;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHMassInviteModal.GetShouldSelect
struct URHMassInviteModal_GetShouldSelect_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         Friend;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1975[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHMassInviteModal.DoSearch
struct URHMassInviteModal_DoSearch_Params
{
public:
	class FText                                  SearchTerm;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHMassInviteModal.CloseScreen
struct URHMassInviteModal_CloseScreen_Params
{
public:
	enum class ERHInviteCloseAction              CloseAction;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHMatchIdWidget.GetShortMatchId
struct URHMatchIdWidget_GetShortMatchId_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHMatchIdWidget.GetLongMatchId
struct URHMatchIdWidget_GetLongMatchId_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHMatchInvitationModal.GetRH_LocalPlayerFriendSubsystem
struct URHMatchInvitationModal_GetRH_LocalPlayerFriendSubsystem_Params
{
public:
	class URH_FriendSubsystem*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHMatchInvitationModal.GetQueueDataFactory
struct URHMatchInvitationModal_GetQueueDataFactory_Params
{
public:
	class URHQueueDataFactory*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHMatchInvitationModal.GetInvitationTotalTimeToExpire
struct URHMatchInvitationModal_GetInvitationTotalTimeToExpire_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHMatchInvitationModal.GetInvitationTimeRemaining
struct URHMatchInvitationModal_GetInvitationTimeRemaining_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHMatchInvitationModal.AcceptInvite
struct URHMatchInvitationModal_AcceptInvite_Params
{
public:
	int32                                        MapId;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHMediaPlayerWidget.OnShouldShowPromptChanged
struct URHMediaPlayerWidget_OnShouldShowPromptChanged_Params
{
public:
	bool                                         bCanSkipEntry;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHMediaPlayerWidget.OnReadyForPlayback
struct URHMediaPlayerWidget_OnReadyForPlayback_Params
{
public:
	class UPlatformMediaSource*                  PlatformMediaSource;                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHMediaPlayerWidget.IsCurrentEntrySkippable
struct URHMediaPlayerWidget_IsCurrentEntrySkippable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHNavTabWidget.SetSelected
struct URHNavTabWidget_SetSelected_Params
{
public:
	bool                                         bNewSelected;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHNavTabWidget.SetDisabled
struct URHNavTabWidget_SetDisabled_Params
{
public:
	bool                                         bNewDisabled;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHNavTabWidget.IsSelected
struct URHNavTabWidget_IsSelected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHNavTabWidget.IsDisabled
struct URHNavTabWidget_IsDisabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHNewsRotatorWidget.OnNewsPanelClicked
struct URHNewsRotatorWidget_OnNewsPanelClicked_Params
{
public:
	class URHNewsRotatorData*                    Panel;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHNewsRotatorWidget.OnJsonChanged
struct URHNewsRotatorWidget_OnJsonChanged_Params
{
public:
	class FString                                JsonName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHNewsRotatorWidget.GetJsonDataFactory
struct URHNewsRotatorWidget_GetJsonDataFactory_Params
{
public:
	class URHJsonDataFactory*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHNewsRotatorWidget.BLUEPRINT_GetPanelDataAsync
struct URHNewsRotatorWidget_BLUEPRINT_GetPanelDataAsync_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHNewsRotatorWidget.BLUEPRINT_CheckShouldShowPanels
struct URHNewsRotatorWidget_BLUEPRINT_CheckShouldShowPanels_Params
{
public:
	TArray<class URHNewsRotatorData*>            Panels;                                            // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHNewStartMenuWidget.GetJsonDataFactory
struct URHNewStartMenuWidget_GetJsonDataFactory_Params
{
public:
	class URHJsonDataFactory*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHNewStartMenuWidget.BLUEPRINT_CheckIsNewsAvailable
struct URHNewStartMenuWidget_BLUEPRINT_CheckIsNewsAvailable_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHOrder.IsPurchase
struct URHOrder_IsPurchase_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHOrder.IsBundleOrder
struct URHOrder_IsBundleOrder_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHOrderManager.GetNextOrder
struct URHOrderManager_GetNextOrder_Params
{
public:
	class URHOrder*                              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHOrderManager.CreateOrderForItem
struct URHOrderManager_CreateOrderForItem_Params
{
public:
	class URHStoreItem*                          StoreItem;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHOrderModal.GetOrderManager
struct URHOrderModal_GetOrderManager_Params
{
public:
	class URHOrderManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHOrderModal.GetHeaderText
struct URHOrderModal_GetHeaderText_Params
{
public:
	class URHOrder*                              Order;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHTabValidator.IsValidTab
struct URHTabValidator_IsValidTab_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHOverlayTabEntryWidget.SetViewName
struct URHOverlayTabEntryWidget_SetViewName_Params
{
public:
	class FName                                  InViewName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHOverlayTabEntryWidget.SetViewInfo
struct URHOverlayTabEntryWidget_SetViewInfo_Params
{
public:
	struct RallyHereStart_OverlayTabViewRow      InViewInfo;                                        // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHOverlayTabEntryWidget.SetTabState
struct URHOverlayTabEntryWidget_SetTabState_Params
{
public:
	enum class ERHOverlayTabState                InTabState;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHOverlayTabEntryWidget.HandleInputStateChanged
struct URHOverlayTabEntryWidget_HandleInputStateChanged_Params
{
public:
	enum class ERH_INPUT_STATE                   InputState;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHOverlayTabEntryWidget.HandleActiveViewChanged
struct URHOverlayTabEntryWidget_HandleActiveViewChanged_Params
{
public:
	class FName                                  ActiveView;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHOverlayTabEntryWidget.GetViewInfo
struct URHOverlayTabEntryWidget_GetViewInfo_Params
{
public:
	struct RallyHereStart_OverlayTabViewRow      ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHOverlayTabEntryWidget.GetTabState
struct URHOverlayTabEntryWidget_GetTabState_Params
{
public:
	enum class ERHOverlayTabState                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHOverlayTabHubBase.SetFocusToView
struct URHOverlayTabHubBase_SetFocusToView_Params
{
public:
	class URHWidget*                             InitialFocusedWidget;                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function RallyHereStart.RHOverlayTabHubBase.OnViewAdded
struct URHOverlayTabHubBase_OnViewAdded_Params
{
public:
	class FName                                  ViewName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_OverlayTabViewRow      ViewInfo;                                          // 0x8(0x30)(Parm, NativeAccessSpecifierPublic)
	class URHOverlayTabEntryWidget*              TabEntry;                                          // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHWidget*                             ViewWidget;                                        // 0x40(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHOverlayTabHubBase.HandleFocusToViewRequested
struct URHOverlayTabHubBase_HandleFocusToViewRequested_Params
{
public:
	class FName                                  ViewName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHOverlayTabHubBase.HandleActiveViewRequested
struct URHOverlayTabHubBase_HandleActiveViewRequested_Params
{
public:
	class FName                                  ViewName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHOverlayTabHubBase.GetViewWidgets
struct URHOverlayTabHubBase_GetViewWidgets_Params
{
public:
	TArray<class URHWidget*>                     ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHOverlayTabHubBase.GetTabEntries
struct URHOverlayTabHubBase_GetTabEntries_Params
{
public:
	TArray<class URHOverlayTabEntryWidget*>      ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHOverlayTabHubBase.GetLandingInfo
struct URHOverlayTabHubBase_GetLandingInfo_Params
{
public:
	class URHOverlayTabHubRouteData*             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHOverlayTabHubBase.GetCurrentViewWidget
struct URHOverlayTabHubBase_GetCurrentViewWidget_Params
{
public:
	class URHWidget*                             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHOverlayTabHubBase.ChangeView
struct URHOverlayTabHubBase_ChangeView_Params
{
public:
	class FName                                  ViewName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereStart.RHOverlayTabHubBase.AddView
struct URHOverlayTabHubBase_AddView_Params
{
public:
	class FName                                  ViewName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_OverlayTabViewRow      ViewInfo;                                          // 0x8(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPartyManager.UIX_PromoteMemberToLeader
struct URHPartyManager_UIX_PromoteMemberToLeader_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPartyManager.UIX_KickMemberFromParty
struct URHPartyManager_UIX_KickMemberFromParty_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPartyManager.UIX_InviteMemberToParty
struct URHPartyManager_UIX_InviteMemberToParty_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPartyManager.SetSelectedQueueId
struct URHPartyManager_SetSelectedQueueId_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHPartyManager.SetReady
struct URHPartyManager_SetReady_Params
{
public:
	bool                                         bReady;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHPartyManager.SetPartyMemberReady
struct URHPartyManager_SetPartyMemberReady_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsReady;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CBF[0x2];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHPartyManager.SetPartyInfo
struct URHPartyManager_SetPartyInfo_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHPartyManager.IsReady
struct URHPartyManager_IsReady_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHPartyManager.IsPlayerInParty
struct URHPartyManager_IsPlayerInParty_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CEB[0x3];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHPartyManager.IsPartyReady
struct URHPartyManager_IsPartyReady_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHPartyManager.IsPartyMaxed
struct URHPartyManager_IsPartyMaxed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHPartyManager.IsLeader
struct URHPartyManager_IsLeader_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHPartyManager.IsInParty
struct URHPartyManager_IsInParty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHPartyManager.HasInvitePrivileges
struct URHPartyManager_HasInvitePrivileges_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1B[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPartyManager.GetSelectedQueueId
struct URHPartyManager_GetSelectedQueueId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPartyManager.GetRHSessionType
struct URHPartyManager_GetRHSessionType_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPartyManager.GetPartySession
struct URHPartyManager_GetPartySession_Params
{
public:
	class URH_JoinedSession*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPartyManager.GetPartyMembers
struct URHPartyManager_GetPartyMembers_Params
{
public:
	TArray<struct RallyHereStart_RH_PartyMemberData> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHPartyManager.GetPartyMemberCount
struct URHPartyManager_GetPartyMemberCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function RallyHereStart.RHPartyManager.GetPartyMemberByID
struct URHPartyManager_GetPartyMemberByID_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_RH_PartyMemberData     ReturnValue;                                       // 0x10(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function RallyHereStart.RHPartyManager.GetPartyLeader
struct URHPartyManager_GetPartyLeader_Params
{
public:
	struct RallyHereAPI_RHAPI_SessionPlayer      OutPlayer;                                         // 0x0(0xF8)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D75[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPartyManager.GetPartyInviter
struct URHPartyManager_GetPartyInviter_Params
{
public:
	class URH_PlayerInfo*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHPartyManager.GetPartyInviteMode
struct URHPartyManager_GetPartyInviteMode_Params
{
public:
	enum class ERH_PartyInviteRightsMode         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHPartyManager.GetPartyInfo
struct URHPartyManager_GetPartyInfo_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHPartyManager.GetMaxPartyMembers
struct URHPartyManager_GetMaxPartyMembers_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHPartyManager.CheckPartyMemberIsLeader
struct URHPartyManager_CheckPartyMemberIsLeader_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DBC[0x3];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHPartyManager.BroadcastPartyInvitationError
struct URHPartyManager_BroadcastPartyInvitationError_Params
{
public:
	class FText                                  InvitationError;                                   // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHPartyManagerWidgetBase.HandlePartyMemberUpdateByName
struct URHPartyManagerWidgetBase_HandlePartyMemberUpdateByName_Params
{
public:
	class FText                                  PlayerName;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPartyManagerWidgetBase.HandlePartyMemberUpdateByInfo
struct URHPartyManagerWidgetBase_HandlePartyMemberUpdateByInfo_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPartyManagerWidgetBase.HandlePartyMemberUpdateById
struct URHPartyManagerWidgetBase_HandlePartyMemberUpdateById_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHPartyManagerWidgetBase.HandlePartyMemberDataUpdated
struct URHPartyManagerWidgetBase_HandlePartyMemberDataUpdated_Params
{
public:
	struct RallyHereStart_RH_PartyMemberData     MemberData;                                        // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPartyManagerWidgetBase.GetSuggestedInvite
struct URHPartyManagerWidgetBase_GetSuggestedInvite_Params
{
public:
	class URH_PlayerInfo*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPartyManagerWidgetBase.GetPartyManager
struct URHPartyManagerWidgetBase_GetPartyManager_Params
{
public:
	class URHPartyManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPartyManagerWidgetBase.GetCachedDisplayedPartyMembers
struct URHPartyManagerWidgetBase_GetCachedDisplayedPartyMembers_Params
{
public:
	TArray<struct RallyHereStart_RH_PartyMemberData> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPartyManagerWidgetBase.ApplyPartyData
struct URHPartyManagerWidgetBase_ApplyPartyData_Params
{
public:
	TArray<struct RallyHereStart_RH_PartyMemberData> PartyMembers;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPlayerCardModuleBase.View_SetFriend
struct URHPlayerCardModuleBase_View_SetFriend_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         Friend;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPlayerCardModuleBase.OnRHFriendSet
struct URHPlayerCardModuleBase_OnRHFriendSet_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         Friend;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHPlayerController.ServerUpdateSonyMatchOwnerEligibility
struct ARHPlayerController_ServerUpdateSonyMatchOwnerEligibility_Params
{
public:
	bool                                         bIsEligible;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPlayerController.ServerUpdateSonyMatchData
struct ARHPlayerController_ServerUpdateSonyMatchData_Params
{
public:
	class FString                                InMatchId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPlayerController.OnPlayerInfoReady
struct ARHPlayerController_OnPlayerInfoReady_Params
{
public:
	class URHS_PlayerInfo*                       PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPlayerController.OnGameStateSet
struct ARHPlayerController_OnGameStateSet_Params
{
public:
	class AGameStateBase*                        GameStateBase;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHPlayerController.IsHudBindingReady
struct ARHPlayerController_IsHudBindingReady_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPlayerController.GetSettingsSubsystem
struct ARHPlayerController_GetSettingsSubsystem_Params
{
public:
	class URH_SettingsSubsystem*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPlayerController.GetRHPlayerUuid
struct ARHPlayerController_GetRHPlayerUuid_Params
{
public:
	struct CoreUObject_Guid                      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPlayerController.GetPlayerInventory
struct ARHPlayerController_GetPlayerInventory_Params
{
public:
	class URHS_PlayerInventory*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPlayerController.GetPlayerInfo
struct ARHPlayerController_GetPlayerInfo_Params
{
public:
	class URHS_PlayerInfo*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPlayerController.GetLoadoutManager
struct ARHPlayerController_GetLoadoutManager_Params
{
public:
	class ARH_LoadoutManager*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPlayerController.CreateLoadoutManager
struct ARHPlayerController_CreateLoadoutManager_Params
{
public:
	TSubclassOf<class ARH_LoadoutManager>        LoadoutManagerClass;                               // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHPlayerController.ClientUpdateSonyMatchData
struct ARHPlayerController_ClientUpdateSonyMatchData_Params
{
public:
	class FString                                InMatchId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                InActivityId;                                      // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHPlayerCosmeticWidget.GetItemsForSlot
struct URHPlayerCosmeticWidget_GetItemsForSlot_Params
{
public:
	FDelegateProperty_                           Event;                                             // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHLoadoutSlotTypes               SlotType;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2018[0x2];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPlayerInfoDisplay.SetPlayerInfo
struct URHPlayerInfoDisplay_SetPlayerInfo_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPlayerInfoDisplay.RHUpdateFriends
struct URHPlayerInfoDisplay_RHUpdateFriends_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         Friend;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPlayerInfoDisplay.OnPlayerPresenceUpdated
struct URHPlayerInfoDisplay_OnPlayerPresenceUpdated_Params
{
public:
	class URH_PlayerPresence*                    PlayerPresence;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPlayerInfoDisplay.OnPartyMemberChanged
struct URHPlayerInfoDisplay_OnPartyMemberChanged_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHPlayerInfoDisplay.OnGetPlayerPlatformPresenceResponse
struct URHPlayerInfoDisplay_OnGetPlayerPlatformPresenceResponse_Params
{
public:
	bool                                         bSuccessful;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205E[0x7];                                     // Fixing Size After Last Property  
	class URH_PlayerPresence*                    NewPresence;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHPlayerInfoDisplay.OnGetPlayerPlatformPlatformsResponse
struct URHPlayerInfoDisplay_OnGetPlayerPlatformPlatformsResponse_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2084[0x7];                                     // Fixing Size After Last Property  
	TArray<class URH_PlayerPlatformInfo*>        Platforms;                                         // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x18(0x10)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPlayerInfoDisplay.GetPlayerXpProgression
struct URHPlayerInfoDisplay_GetPlayerXpProgression_Params
{
public:
	class URHProgression*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPlayerInfoDisplay.GetPlayerPlatform
struct URHPlayerInfoDisplay_GetPlayerPlatform_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPlayerInfoDisplay.BLUEPRINT_GetPlayerLevel
struct URHPlayerInfoDisplay_BLUEPRINT_GetPlayerLevel_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.RHPlayerInput.DoesInputTypeSupportChords
struct URHPlayerInput_DoesInputTypeSupportChords_Params
{
public:
	enum class EInputType                        InputType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPlayerState.GetRHPlayerUuid
struct ARHPlayerState_GetRHPlayerUuid_Params
{
public:
	struct CoreUObject_Guid                      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHPlayerState.GetRHPlayerId
struct ARHPlayerState_GetRHPlayerId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPlayerState.GetPlayerInfo
struct ARHPlayerState_GetPlayerInfo_Params
{
public:
	class ARHHUDCommon*                          HUD;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// Function RallyHereStart.RHPopupManager.ShowPopup
struct URHPopupManager_ShowPopup_Params
{
public:
	struct RallyHereStart_RHPopupConfig          PopupData;                                         // 0x0(0x108)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHPopupManager.RemovePopup
struct URHPopupManager_RemovePopup_Params
{
public:
	int32                                        PopupId;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPopupManager.OnPopupResponse
struct URHPopupManager_OnPopupResponse_Params
{
public:
	int32                                        NPopupId;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NResponseIndex;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// Function RallyHereStart.RHPopupManager.AddPopup
struct URHPopupManager_AddPopup_Params
{
public:
	struct RallyHereStart_RHPopupConfig          PopupData;                                         // 0x0(0x108)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x108(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2161[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPortalOffersWidget.GetPortalOfferItems
struct URHPortalOffersWidget_GetPortalOfferItems_Params
{
public:
	TArray<class URHStoreItem*>                  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPortalOffersWidget.GetItemHelper
struct URHPortalOffersWidget_GetItemHelper_Params
{
public:
	class URHStoreItemHelper*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPriceTag.SetPriceTag
struct URHPriceTag_SetPriceTag_Params
{
public:
	class URHStoreItemPrice*                     StoreItemPrice;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHStoreItem*                          StoreItem;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHProgression.GetProgressionLevelPercent
struct URHProgression_GetProgressionLevelPercent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProgressAmount;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHProgression.GetProgressionLevel
struct URHProgression_GetProgressionLevel_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProgressAmount;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHPurchaseConfirmationWidget.OnPurchaseComplete
struct URHPurchaseConfirmationWidget_OnPurchaseComplete_Params
{
public:
	bool                                         bCompletedPurchase;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPurchaseConfirmationWidget.GetStoreItemHelper
struct URHPurchaseConfirmationWidget_GetStoreItemHelper_Params
{
public:
	class URHStoreItemHelper*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHPurchaseConfirmationWidget.BLUEPRINT_TryChangePurchaseQuantity
struct URHPurchaseConfirmationWidget_BLUEPRINT_TryChangePurchaseQuantity_Params
{
public:
	int32                                        QuantityChangeAmount;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHPurchaseConfirmationWidget.BLUEPRINT_CanChangePurchaseQuantity
struct URHPurchaseConfirmationWidget_BLUEPRINT_CanChangePurchaseQuantity_Params
{
public:
	int32                                        QuantityChangeAmount;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPurchaseModal.HandleShowPurchaseModal
struct URHPurchaseModal_HandleShowPurchaseModal_Params
{
public:
	class URHStoreItem*                          Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHStoreItemPrice*                     Price;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHPurchaseModal.GetStoreItemHelper
struct URHPurchaseModal_GetStoreItemHelper_Params
{
public:
	class URHStoreItemHelper*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHPushNotificationManager.HandleRegisteredForUserNotifications
struct URHPushNotificationManager_HandleRegisteredForUserNotifications_Params
{
public:
	int32                                        Types;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPushNotificationManager.HandleRegisteredForRemoteNotifications
struct URHPushNotificationManager_HandleRegisteredForRemoteNotifications_Params
{
public:
	TArray<uint8>                                InToken;                                           // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHPushNotificationManager.HandleJsonReady
struct URHPushNotificationManager_HandleJsonReady_Params
{
public:
	class FString                                JsonName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.StartCustomMatch
struct URHQueueDataFactory_StartCustomMatch_Params
{
public:
	bool                                         bDedicatedInstance;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.SetSelectedQueueId
struct URHQueueDataFactory_SetSelectedQueueId_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2252[0x7];                                     // Fixing Size Of Struct 
};

// 0x148 (0x148 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.SetSelectedMatchmakingAttributes
struct URHQueueDataFactory_SetSelectedMatchmakingAttributes_Params
{
public:
	struct RallyHereStart_RHMatchmakingAttributes Attributes;                                        // 0x0(0x140)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x140(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_225D[0x7];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.SetPlayerTeamCustomMatch
struct URHQueueDataFactory_SetPlayerTeamCustomMatch_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TeamId;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.SetMapForCustomMatch
struct URHQueueDataFactory_SetMapForCustomMatch_Params
{
public:
	class FName                                  MapRowName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.PromoteToCustomMatchHost
struct URHQueueDataFactory_PromoteToCustomMatchHost_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.LeaveQueue
struct URHQueueDataFactory_LeaveQueue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.LeaveMatch
struct URHQueueDataFactory_LeaveMatch_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.KickFromCustomMatch
struct URHQueueDataFactory_KickFromCustomMatch_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.JoinSelectedQueue
struct URHQueueDataFactory_JoinSelectedQueue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x158 (0x158 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.JoinQueue
struct URHQueueDataFactory_JoinQueue_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_RHMatchmakingAttributes Attributes;                                        // 0x10(0x140)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x150(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22A9[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.JoinCustomMatchSession
struct URHQueueDataFactory_JoinCustomMatchSession_Params
{
public:
	class URH_SessionView*                       InSession;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22BB[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.IsQueueActive
struct URHQueueDataFactory_IsQueueActive_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22BF[0x7];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.IsPlayerCustomLobbyLeader
struct URHQueueDataFactory_IsPlayerCustomLobbyLeader_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22CC[0x3];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.IsLocalPlayerCustomLobbyLeader
struct URHQueueDataFactory_IsLocalPlayerCustomLobbyLeader_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.IsInQueue
struct URHQueueDataFactory_IsInQueue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.IsInCustomMatch
struct URHQueueDataFactory_IsInCustomMatch_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.IsCustomInvitePending
struct URHQueueDataFactory_IsCustomInvitePending_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22F8[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.IsCustomGameSession
struct URHQueueDataFactory_IsCustomGameSession_Params
{
public:
	class URH_SessionView*                       PSession;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2300[0x7];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.InviteToCustomMatch
struct URHQueueDataFactory_InviteToCustomMatch_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TeamNum;                                           // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.GetTimeInQueueSeconds
struct URHQueueDataFactory_GetTimeInQueueSeconds_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.GetTeamMemberCount
struct URHQueueDataFactory_GetTeamMemberCount_Params
{
public:
	int32                                        TeamId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.GetSelectedQueueId
struct URHQueueDataFactory_GetSelectedQueueId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.GetSelectedMatchmakingAttributes
struct URHQueueDataFactory_GetSelectedMatchmakingAttributes_Params
{
public:
	struct RallyHereStart_RHMatchmakingAttributes Attributes;                                        // 0x0(0x140)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.GetSelectedCustomMap
struct URHQueueDataFactory_GetSelectedCustomMap_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.GetQueues
struct URHQueueDataFactory_GetQueues_Params
{
public:
	TArray<class URH_MatchmakingQueueInfo*>      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.GetQueueInfoById
struct URHQueueDataFactory_GetQueueInfoById_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_MatchmakingQueueInfo*              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.GetQueueDetailsByQueueId
struct URHQueueDataFactory_GetQueueDetailsByQueueId_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_RHQueueDetails         QueueDetails;                                      // 0x10(0x68)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_239A[0x7];                                     // Fixing Size Of Struct 
};

// 0x78 (0x78 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.GetQueueDetailsByQueue
struct URHQueueDataFactory_GetQueueDetailsByQueue_Params
{
public:
	class URH_MatchmakingQueueInfo*              Queue;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_RHQueueDetails         QueueDetails;                                      // 0x8(0x68)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23B2[0x7];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.GetPlayerTeamId
struct URHQueueDataFactory_GetPlayerTeamId_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.GetMapsDetailsDT
struct URHQueueDataFactory_GetMapsDetailsDT_Params
{
public:
	class UDataTable*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.GetMapDetailsFromRowName
struct URHQueueDataFactory_GetMapDetailsFromRowName_Params
{
public:
	class FName                                  MapRowName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_RHMapDetails           OutMapDetails;                                     // 0x8(0x70)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23DC[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.GetCustomMatchSession
struct URHQueueDataFactory_GetCustomMatchSession_Params
{
public:
	class URH_JoinedSession*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.GetCustomMatchMembers
struct URHQueueDataFactory_GetCustomMatchMembers_Params
{
public:
	TArray<struct RallyHereStart_RH_CustomMatchMember> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.GetCurrentQueueMatchState
struct URHQueueDataFactory_GetCurrentQueueMatchState_Params
{
public:
	enum class ERH_MatchStatus                   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.CanQueue
struct URHQueueDataFactory_CanQueue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.CanLocalPlayerPromoteCustomLobbyPlayer
struct URHQueueDataFactory_CanLocalPlayerPromoteCustomLobbyPlayer_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2419[0x3];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.CanLocalPlayerKickCustomLobbyPlayer
struct URHQueueDataFactory_CanLocalPlayerKickCustomLobbyPlayer_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2428[0x3];                                     // Fixing Size Of Struct 
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.CanLocalPlayerControlCustomLobbyPlayer
struct URHQueueDataFactory_CanLocalPlayerControlCustomLobbyPlayer_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_242E[0x3];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueDataFactory.AttemptRejoinMatch
struct URHQueueDataFactory_AttemptRejoinMatch_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHQueuedMessageWidget.QueueMessage
struct URHQueuedMessageWidget_QueueMessage_Params
{
public:
	class FText                                  Message;                                           // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHQueuedMessageWidget.GetNextMessage
struct URHQueuedMessageWidget_GetNextMessage_Params
{
public:
	class FText                                  Message;                                           // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24B5[0x7];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.UIX_AttemptRejoinMatch
struct URHQueueWidgetBase_UIX_AttemptRejoinMatch_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.UIX_AttemptLeaveMatch
struct URHQueueWidgetBase_UIX_AttemptLeaveMatch_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.UIX_AttemptJoinSelectedQueue
struct URHQueueWidgetBase_UIX_AttemptJoinSelectedQueue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.UIX_AttemptCancelQueue
struct URHQueueWidgetBase_UIX_AttemptCancelQueue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.SetCurrentlySelectedQueue
struct URHQueueWidgetBase_SetCurrentlySelectedQueue_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2520[0x7];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.ReceiveMatchStatusUpdate
struct URHQueueWidgetBase_ReceiveMatchStatusUpdate_Params
{
public:
	enum class ERH_MatchStatus                   CurrentMatchStatus;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.OnSelectedQueueUpdate
struct URHQueueWidgetBase_OnSelectedQueueUpdate_Params
{
public:
	class URH_MatchmakingQueueInfo*              CurrentSelectedQueue;                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.OnQueueStateUpdate
struct URHQueueWidgetBase_OnQueueStateUpdate_Params
{
public:
	enum class ERH_MatchStatus                   CurrentMatchStatus;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.OnQueuePermissionUpdate
struct URHQueueWidgetBase_OnQueuePermissionUpdate_Params
{
public:
	bool                                         CanQueue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.OnControlQueuePermissionUpdate
struct URHQueueWidgetBase_OnControlQueuePermissionUpdate_Params
{
public:
	bool                                         CanControl;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.IsValidQueue
struct URHQueueWidgetBase_IsValidQueue_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2559[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.HandlePartyMemberRemoved
struct URHQueueWidgetBase_HandlePartyMemberRemoved_Params
{
public:
	struct CoreUObject_Guid                      PartyMemberId;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.HandlePartyMemberDataUpdated
struct URHQueueWidgetBase_HandlePartyMemberDataUpdated_Params
{
public:
	struct RallyHereStart_RH_PartyMemberData     PartyMember;                                       // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.HandleMatchStatusUpdate
struct URHQueueWidgetBase_HandleMatchStatusUpdate_Params
{
public:
	enum class ERH_MatchStatus                   MatchStatus;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.GetQueues
struct URHQueueWidgetBase_GetQueues_Params
{
public:
	TArray<class URH_MatchmakingQueueInfo*>      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.GetQueuePermissions
struct URHQueueWidgetBase_GetQueuePermissions_Params
{
public:
	bool                                         CanControl;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CanQueue;                                          // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.GetQueueInfoById
struct URHQueueWidgetBase_GetQueueInfoById_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_MatchmakingQueueInfo*              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.GetQueueDataFactory
struct URHQueueWidgetBase_GetQueueDataFactory_Params
{
public:
	class URHQueueDataFactory*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.GetPartyManager
struct URHQueueWidgetBase_GetPartyManager_Params
{
public:
	class URHPartyManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHQueueWidgetBase.GetCurrentlySelectedQueue
struct URHQueueWidgetBase_GetCurrentlySelectedQueue_Params
{
public:
	class URH_MatchmakingQueueInfo*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueTimerWidgetBase.OnUpdateQueueTimerState
struct URHQueueTimerWidgetBase_OnUpdateQueueTimerState_Params
{
public:
	enum class EQueueTimerState                  State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHQueueTimerWidgetBase.OnUpdateQueueTime
struct URHQueueTimerWidgetBase_OnUpdateQueueTime_Params
{
public:
	float                                        TimeSecs;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHQueueTimerWidgetBase.GetQueueTime_TotalSecs
struct URHQueueTimerWidgetBase_GetQueueTime_TotalSecs_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHQueueTimerWidgetBase.GetQueueTime_PartSecs
struct URHQueueTimerWidgetBase_GetQueueTime_PartSecs_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHQueueTimerWidgetBase.GetQueueTime_PartMins
struct URHQueueTimerWidgetBase_GetQueueTime_PartMins_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHQueueTimerWidgetBase.GetQueueTime_PartHours
struct URHQueueTimerWidgetBase_GetQueueTime_PartHours_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQueueTimerWidgetBase.GetCurrentTimerState
struct URHQueueTimerWidgetBase_GetCurrentTimerState_Params
{
public:
	enum class EQueueTimerState                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHQuickPlay.SetCurrentlySelectedQueue
struct URHQuickPlay_SetCurrentlySelectedQueue_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26A3[0x7];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQuickPlay.ReceiveMatchStatusUpdate
struct URHQuickPlay_ReceiveMatchStatusUpdate_Params
{
public:
	enum class ERH_MatchStatus                   CurrentMatchStatus;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQuickPlay.OnQueuePermissionChanged
struct URHQuickPlay_OnQueuePermissionChanged_Params
{
public:
	bool                                         CanQueue;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQuickPlay.OnControlQueuePermissionChanged
struct URHQuickPlay_OnControlQueuePermissionChanged_Params
{
public:
	bool                                         CanControl;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHQuickPlay.IsValidQueue
struct URHQuickPlay_IsValidQueue_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26DA[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHQuickPlay.HandlePartyMemberDataUpdated
struct URHQuickPlay_HandlePartyMemberDataUpdated_Params
{
public:
	struct RallyHereStart_RH_PartyMemberData     PartyMember;                                       // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHQuickPlay.GetQueues
struct URHQuickPlay_GetQueues_Params
{
public:
	TArray<class URH_MatchmakingQueueInfo*>      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHQuickPlay.GetQueueInfoById
struct URHQuickPlay_GetQueueInfoById_Params
{
public:
	class FString                                QueueId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_MatchmakingQueueInfo*              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHQuickPlay.GetQueueDataFactory
struct URHQuickPlay_GetQueueDataFactory_Params
{
public:
	class URHQueueDataFactory*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHQuickPlay.GetPartyManager
struct URHQuickPlay_GetPartyManager_Params
{
public:
	class URHPartyManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHQuickPlay.GetDefaultSelectedQueueId
struct URHQuickPlay_GetDefaultSelectedQueueId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHQuickPlay.GetCurrentlySelectedQueue
struct URHQuickPlay_GetCurrentlySelectedQueue_Params
{
public:
	class URH_MatchmakingQueueInfo*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQuickPlayWidget.SetIsPendingQueueUpdate
struct URHQuickPlayWidget_SetIsPendingQueueUpdate_Params
{
public:
	bool                                         IsPending;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQuickPlayWidget.OnUpdateQuickPlayState
struct URHQuickPlayWidget_OnUpdateQuickPlayState_Params
{
public:
	enum class EQuickPlayQueueState              QueueState;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQuickPlayWidget.OnUpdateQuickPlayCanPlay
struct URHQuickPlayWidget_OnUpdateQuickPlayCanPlay_Params
{
public:
	bool                                         CanPlay;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHQuickPlayWidget.OnUpdateQueueTimeElapsed
struct URHQuickPlayWidget_OnUpdateQueueTimeElapsed_Params
{
public:
	float                                        TimeElapsed;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHQuickPlayWidget.OnUpdatePenaltyTimeLeft
struct URHQuickPlayWidget_OnUpdatePenaltyTimeLeft_Params
{
public:
	int32                                        TimeLeft;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQuickPlayWidget.IsPendingQueueUpdate
struct URHQuickPlayWidget_IsPendingQueueUpdate_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQuickPlayWidget.GetSelectedQueueState
struct URHQuickPlayWidget_GetSelectedQueueState_Params
{
public:
	enum class EQuickPlayQueueState              ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHQuickPlayWidget.GetGameModeDisplayName
struct URHQuickPlayWidget_GetGameModeDisplayName_Params
{
public:
	class FText                                  GameModeDisplayName;                               // 0x0(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C1[0x7];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHQuickPlayWidget.GetCurrentQuickPlayState
struct URHQuickPlayWidget_GetCurrentQuickPlayState_Params
{
public:
	enum class EQuickPlayQueueState              ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHRedeemCodeScreenBase.RedeemCode
struct URHRedeemCodeScreenBase_RedeemCode_Params
{
public:
	class FString                                Code;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHRedeemCodeScreenBase.OnRedeemCodeResult
struct URHRedeemCodeScreenBase_OnRedeemCodeResult_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2924[0x7];                                     // Fixing Size After Last Property  
	class FText                                  Error;                                             // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHRedeemCodeScreenBase.IsPendingServerReply
struct URHRedeemCodeScreenBase_IsPendingServerReply_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSafeZone.SetBorderSides
struct URHSafeZone_SetBorderSides_Params
{
public:
	bool                                         bInBorderLeft;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInBorderRight;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInBorderTop;                                      // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInBorderBottom;                                   // 0x3(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSettingsCallbackInterface.GetSettingAsInt
struct IRHSettingsCallbackInterface_GetSettingAsInt_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutInt;                                            // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2975[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSettingsCallbackInterface.GetSettingAsFloat
struct IRHSettingsCallbackInterface_GetSettingAsFloat_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutFloat;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_297F[0x3];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHSettingsCallbackInterface.GetSettingAsBool
struct IRHSettingsCallbackInterface_GetSettingAsBool_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutBool;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_298C[0x2];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHSettingsCallbackInterface.BindSettingCallbacks
struct IRHSettingsCallbackInterface_BindSettingCallbacks_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_SettingDelegateStruct  SettingDelegateStruct;                             // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHSettingsCallbackStatics.GetLocalSettingsCallbackInterfaceFromPlayer
struct URHSettingsCallbackStatics_GetLocalSettingsCallbackInterfaceFromPlayer_Params
{
public:
	class APlayerController*                     InPlayer;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IRHSettingsCallbackInterface> ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHSettingsCallbackStatics.GetLocalSettingsCallbackInterface
struct URHSettingsCallbackStatics_GetLocalSettingsCallbackInterface_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IRHSettingsCallbackInterface> ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHSettingsCallbackStatics.GetLocalSettingAsIntFromPlayer
struct URHSettingsCallbackStatics_GetLocalSettingAsIntFromPlayer_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutInt;                                            // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29C1[0x4];                                     // Fixing Size After Last Property  
	class APlayerController*                     InPlayer;                                          // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29C3[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHSettingsCallbackStatics.GetLocalSettingAsInt
struct URHSettingsCallbackStatics_GetLocalSettingAsInt_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutInt;                                            // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29C9[0x4];                                     // Fixing Size After Last Property  
	class UObject*                               WorldContextObject;                                // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D1[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHSettingsCallbackStatics.GetLocalSettingAsFloatFromPlayer
struct URHSettingsCallbackStatics_GetLocalSettingAsFloatFromPlayer_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutFloat;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29D8[0x4];                                     // Fixing Size After Last Property  
	class APlayerController*                     InPlayer;                                          // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29DB[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHSettingsCallbackStatics.GetLocalSettingAsFloat
struct URHSettingsCallbackStatics_GetLocalSettingAsFloat_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutFloat;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E7[0x4];                                     // Fixing Size After Last Property  
	class UObject*                               WorldContextObject;                                // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29E8[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHSettingsCallbackStatics.GetLocalSettingAsBoolFromPlayer
struct URHSettingsCallbackStatics_GetLocalSettingAsBoolFromPlayer_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutBool;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F5[0x7];                                     // Fixing Size After Last Property  
	class APlayerController*                     InPlayer;                                          // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F7[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHSettingsCallbackStatics.GetLocalSettingAsBool
struct URHSettingsCallbackStatics_GetLocalSettingAsBool_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         OutBool;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A08[0x7];                                     // Fixing Size After Last Property  
	class UObject*                               WorldContextObject;                                // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A0A[0x7];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHSettingsCallbackStatics.BindSettingCallbackToPlayer
struct URHSettingsCallbackStatics_BindSettingCallbackToPlayer_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_SettingDelegateStruct  SettingDelegateStruct;                             // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class APlayerController*                     InPlayer;                                          // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHSettingsCallbackStatics.BindSettingCallback
struct URHSettingsCallbackStatics_BindSettingCallback_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_SettingDelegateStruct  SettingDelegateStruct;                             // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x28(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsContainer.SetContainerConfig
struct URHSettingsContainer_SetContainerConfig_Params
{
public:
	class URHSettingsContainerConfigAsset*       InContainerConfig;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsContainer.OnShowSettingsWidget
struct URHSettingsContainer_OnShowSettingsWidget_Params
{
public:
	class URHSettingsWidget*                     SettingsWidget;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsContainer.OnHideSettingsWidget
struct URHSettingsContainer_OnHideSettingsWidget_Params
{
public:
	class URHSettingsWidget*                     SettingsWidget;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHSettingsContainer.GetWidgetContainerTitle
struct URHSettingsContainer_GetWidgetContainerTitle_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsContainer.GetWidgetContainerPreview
struct URHSettingsContainer_GetWidgetContainerPreview_Params
{
public:
	class URHSettingsPreview*                    ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHSettingsContainer.GetWidgetContainerDescription
struct URHSettingsContainer_GetWidgetContainerDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSettingsContainer.GetSettingsWidgets
struct URHSettingsContainer_GetSettingsWidgets_Params
{
public:
	TArray<class URHSettingsWidget*>             ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsContainer.AddSettingsWidget
struct URHSettingsContainer_AddSettingsWidget_Params
{
public:
	class URHSettingsWidget*                     SettingsWidget;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsContainer.AddPreviewWidget
struct URHSettingsContainer_AddPreviewWidget_Params
{
public:
	class URHSettingsPreview*                    PreviewWidget;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHSettingsContainerConfigAsset.GetSettingName
struct URHSettingsContainerConfigAsset_GetSettingName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHSettingsContainerConfigAsset.GetSettingDescription
struct URHSettingsContainerConfigAsset_GetSettingDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHSettingsSectionConfigAsset.GetHeading
struct URHSettingsSectionConfigAsset_GetHeading_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHSettingsPageConfigAsset.GetPageName
struct URHSettingsPageConfigAsset_GetPageName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.SetSelectedRegion
struct URHSettingsDataFactory_SetSelectedRegion_Params
{
public:
	class FString                                RegionId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B1C[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.SaveSettingAsInt
struct URHSettingsDataFactory_SaveSettingAsInt_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.SaveSettingAsFloat
struct URHSettingsDataFactory_SaveSettingAsFloat_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.SaveSettingAsBool
struct URHSettingsDataFactory_SaveSettingAsBool_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.OnSettingChanged
struct URHSettingsDataFactory_OnSettingChanged_Params
{
public:
	class FName                                  SettingId;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SettingValue;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B7D[0x3];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.IsUserLoggedIn
struct URHSettingsDataFactory_IsUserLoggedIn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.GetSelectedRegion
struct URHSettingsDataFactory_GetSelectedRegion_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.GetScreenResolution
struct URHSettingsDataFactory_GetScreenResolution_Params
{
public:
	struct CoreUObject_IntPoint                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.GetRHPlayerInput
struct URHSettingsDataFactory_GetRHPlayerInput_Params
{
public:
	class URHPlayerInput*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.GetDefaultRHInputActionKeys
struct URHSettingsDataFactory_GetDefaultRHInputActionKeys_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputType                        InputType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BAF[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereStart_RHInputActionKey> OutKeys;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.GetDefaultInputAxisKeys
struct URHSettingsDataFactory_GetDefaultInputAxisKeys_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputType                        InputType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BC3[0x3];                                     // Fixing Size After Last Property  
	float                                        Scale;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct InputCore_Key>                 OutKeys;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.GetDefaultInputActionKeys
struct URHSettingsDataFactory_GetDefaultInputActionKeys_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputType                        InputType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BD4[0x7];                                     // Fixing Size After Last Property  
	TArray<struct InputCore_Key>                 OutKeys;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.GetCustomRHInputActionKeys
struct URHSettingsDataFactory_GetCustomRHInputActionKeys_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputType                        InputType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BE2[0x7];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereStart_RHInputActionKey> OutKeys;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.GetCustomInputAxisKeys
struct URHSettingsDataFactory_GetCustomInputAxisKeys_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputType                        InputType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BF7[0x3];                                     // Fixing Size After Last Property  
	float                                        Scale;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct InputCore_Key>                 OutKeys;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.GetCustomInputActionKeys
struct URHSettingsDataFactory_GetCustomInputActionKeys_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputType                        InputType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C08[0x7];                                     // Fixing Size After Last Property  
	TArray<struct InputCore_Key>                 OutKeys;                                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.GetCurrentLanguage
struct URHSettingsDataFactory_GetCurrentLanguage_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.GetAvailableLanguages
struct URHSettingsDataFactory_GetAvailableLanguages_Params
{
public:
	TArray<class FString>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.ApplySettingAsInt
struct URHSettingsDataFactory_ApplySettingAsInt_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.ApplySettingAsFloat
struct URHSettingsDataFactory_ApplySettingAsFloat_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.ApplySettingAsBool
struct URHSettingsDataFactory_ApplySettingAsBool_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C49[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.ApplyScreenResolution
struct URHSettingsDataFactory_ApplyScreenResolution_Params
{
public:
	struct CoreUObject_IntPoint                  ScreenResolution;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSettingsDataFactory.ApplyLanguage
struct URHSettingsDataFactory_ApplyLanguage_Params
{
public:
	class FString                                LanguageCulture;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsGroup.OnShowContainer
struct URHSettingsGroup_OnShowContainer_Params
{
public:
	class URHSettingsContainer*                  SettingsContainer;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsGroup.OnHideContainer
struct URHSettingsGroup_OnHideContainer_Params
{
public:
	class URHSettingsContainer*                  SettingsContainer;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSettingsGroup.GetSettingsContainers
struct URHSettingsGroup_GetSettingsContainers_Params
{
public:
	TArray<class URHSettingsContainer*>          ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsGroup.AddSubSettingsContainerWidget
struct URHSettingsGroup_AddSubSettingsContainerWidget_Params
{
public:
	class URHSettingsContainer*                  SettingsContainer;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsGroup.AddMainSettingsContainerWidget
struct URHSettingsGroup_AddMainSettingsContainerWidget_Params
{
public:
	class URHSettingsContainer*                  SettingsContainer;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.UpdateTextOptions
struct URHSettingsInfoBase_UpdateTextOptions_Params
{
public:
	TArray<class FText>                          NewOptions;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.SetPreviewValueInt
struct URHSettingsInfoBase_SetPreviewValueInt_Params
{
public:
	int32                                        InInt;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D14[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.SetPreviewValueFloat
struct URHSettingsInfoBase_SetPreviewValueFloat_Params
{
public:
	float                                        InFloat;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D1C[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.SetPreviewValueBool
struct URHSettingsInfoBase_SetPreviewValueBool_Params
{
public:
	bool                                         InBool;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.SetDesiredValueKeyBind
struct URHSettingsInfoBase_SetDesiredValueKeyBind_Params
{
public:
	struct RallyHereStart_RHKeyBind              InKeyBind;                                         // 0x0(0x78)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D30[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.SetDesiredValueInt
struct URHSettingsInfoBase_SetDesiredValueInt_Params
{
public:
	int32                                        InInt;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D39[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.SetDesiredValueFloat
struct URHSettingsInfoBase_SetDesiredValueFloat_Params
{
public:
	float                                        InFloat;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D4E[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.SetDesiredValueBool
struct URHSettingsInfoBase_SetDesiredValueBool_Params
{
public:
	bool                                         InBool;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.SaveKeyBindValue
struct URHSettingsInfoBase_SaveKeyBindValue_Params
{
public:
	struct RallyHereStart_RHKeyBind              InKeyBind;                                         // 0x0(0x78)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D6F[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.SaveIntValue
struct URHSettingsInfoBase_SaveIntValue_Params
{
public:
	int32                                        InInt;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D75[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.SaveFloatValue
struct URHSettingsInfoBase_SaveFloatValue_Params
{
public:
	float                                        InFloat;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D8A[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.SaveBoolValue
struct URHSettingsInfoBase_SaveBoolValue_Params
{
public:
	bool                                         InBool;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.RoundToNearestValueFloat
struct URHSettingsInfoBase_RoundToNearestValueFloat_Params
{
public:
	float                                        ValueToRound;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.OnValueKeyBindSaved
struct URHSettingsInfoBase_OnValueKeyBindSaved_Params
{
public:
	struct RallyHereStart_RHKeyBind              SavedKeyBind;                                      // 0x0(0x78)(Parm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.OnValueKeyBindApplied
struct URHSettingsInfoBase_OnValueKeyBindApplied_Params
{
public:
	struct RallyHereStart_RHKeyBind              AppliedKeyBind;                                    // 0x0(0x78)(Parm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.OnValueIntSaved
struct URHSettingsInfoBase_OnValueIntSaved_Params
{
public:
	int32                                        SavedInt;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.OnValueIntApplied
struct URHSettingsInfoBase_OnValueIntApplied_Params
{
public:
	int32                                        AppliedInt;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.OnValueFloatSaved
struct URHSettingsInfoBase_OnValueFloatSaved_Params
{
public:
	float                                        SavedFloat;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.OnValueFloatApplied
struct URHSettingsInfoBase_OnValueFloatApplied_Params
{
public:
	float                                        AppliedFloat;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.OnValueBoolSaved
struct URHSettingsInfoBase_OnValueBoolSaved_Params
{
public:
	bool                                         SavedBool;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.OnValueBoolApplied
struct URHSettingsInfoBase_OnValueBoolApplied_Params
{
public:
	bool                                         AppliedBool;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.IsValidValueKeyBind
struct URHSettingsInfoBase_IsValidValueKeyBind_Params
{
public:
	struct RallyHereStart_RHKeyBind              InKey;                                             // 0x0(0x78)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E00[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.IsValidValueInt
struct URHSettingsInfoBase_IsValidValueInt_Params
{
public:
	int32                                        InInt;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E0F[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.IsValidValueFloat
struct URHSettingsInfoBase_IsValidValueFloat_Params
{
public:
	float                                        InFloat;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E1A[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.IsValidValueBool
struct URHSettingsInfoBase_IsValidValueBool_Params
{
public:
	bool                                         InBool;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.IsDirty
struct URHSettingsInfoBase_IsDirty_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetValueKeyBind
struct URHSettingsInfoBase_GetValueKeyBind_Params
{
public:
	struct RallyHereStart_RHKeyBind              ReturnValue;                                       // 0x0(0x78)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetValueInt
struct URHSettingsInfoBase_GetValueInt_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetValueFloat
struct URHSettingsInfoBase_GetValueFloat_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetValueBool
struct URHSettingsInfoBase_GetValueBool_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetTextOptions
struct URHSettingsInfoBase_GetTextOptions_Params
{
public:
	TArray<class FText>                          ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetTextOption
struct URHSettingsInfoBase_GetTextOption_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2E82[0x4];                                     // Fixing Size After Last Property  
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetStep
struct URHSettingsInfoBase_GetStep_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetSettingType
struct URHSettingsInfoBase_GetSettingType_Params
{
public:
	enum class ERHSettingType                    ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetRoundToNearest
struct URHSettingsInfoBase_GetRoundToNearest_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetRound
struct URHSettingsInfoBase_GetRound_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetRHHUD
struct URHSettingsInfoBase_GetRHHUD_Params
{
public:
	class ARHHUDCommon*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetPreviewValueInt
struct URHSettingsInfoBase_GetPreviewValueInt_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetPreviewValueFloat
struct URHSettingsInfoBase_GetPreviewValueFloat_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetPreviewValueBool
struct URHSettingsInfoBase_GetPreviewValueBool_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetNumTextOptions
struct URHSettingsInfoBase_GetNumTextOptions_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetMinDisplay
struct URHSettingsInfoBase_GetMinDisplay_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetMin
struct URHSettingsInfoBase_GetMin_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetMaxDisplay
struct URHSettingsInfoBase_GetMaxDisplay_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetMax
struct URHSettingsInfoBase_GetMax_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetIsPercent
struct URHSettingsInfoBase_GetIsPercent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetDirtyValueKeyBind
struct URHSettingsInfoBase_GetDirtyValueKeyBind_Params
{
public:
	struct RallyHereStart_RHKeyBind              ReturnValue;                                       // 0x0(0x78)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetDirtyValueInt
struct URHSettingsInfoBase_GetDirtyValueInt_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetDirtyValueFloat
struct URHSettingsInfoBase_GetDirtyValueFloat_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetDirtyValueBool
struct URHSettingsInfoBase_GetDirtyValueBool_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.GetAppliedValueOffset
struct URHSettingsInfoBase_GetAppliedValueOffset_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.FixupInvalidKeyBind
struct URHSettingsInfoBase_FixupInvalidKeyBind_Params
{
public:
	struct RallyHereStart_RHKeyBind              InKey;                                             // 0x0(0x78)(Parm, NativeAccessSpecifierPublic)
	struct RallyHereStart_RHKeyBind              ReturnValue;                                       // 0x78(0x78)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.FixupInvalidInt
struct URHSettingsInfoBase_FixupInvalidInt_Params
{
public:
	int32                                        InInt;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.FixupInvalidFloat
struct URHSettingsInfoBase_FixupInvalidFloat_Params
{
public:
	float                                        InFloat;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.FixupInvalidBool
struct URHSettingsInfoBase_FixupInvalidBool_Params
{
public:
	bool                                         InBool;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.CanRevert
struct URHSettingsInfoBase_CanRevert_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.ApplyPreviewIntValue
struct URHSettingsInfoBase_ApplyPreviewIntValue_Params
{
public:
	int32                                        InInt;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F9C[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.ApplyPreviewFloatValue
struct URHSettingsInfoBase_ApplyPreviewFloatValue_Params
{
public:
	float                                        InFloat;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FCC[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.ApplyPreviewBoolValue
struct URHSettingsInfoBase_ApplyPreviewBoolValue_Params
{
public:
	bool                                         InBool;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.ApplyKeyBindValue
struct URHSettingsInfoBase_ApplyKeyBindValue_Params
{
public:
	struct RallyHereStart_RHKeyBind              InKeyBind;                                         // 0x0(0x78)(Parm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2FE9[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.ApplyIntValue
struct URHSettingsInfoBase_ApplyIntValue_Params
{
public:
	int32                                        InInt;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3000[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.ApplyFloatValue
struct URHSettingsInfoBase_ApplyFloatValue_Params
{
public:
	float                                        InFloat;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3020[0x3];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.RHSettingsInfoBase.ApplyBoolValue
struct URHSettingsInfoBase_ApplyBoolValue_Params
{
public:
	bool                                         InBool;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfo_Binding.OnKeyBindingsSaved
struct URHSettingsInfo_Binding_OnKeyBindingsSaved_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfo_Binding.OnKeyBindingsApplied
struct URHSettingsInfo_Binding_OnKeyBindingsApplied_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfo_Brightness.GetRHSettingsDataFactory
struct URHSettingsInfo_Brightness_GetRHSettingsDataFactory_Params
{
public:
	class URHSettingsDataFactory*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfo_Generic.GetRHSettingsDataFactory
struct URHSettingsInfo_Generic_GetRHSettingsDataFactory_Params
{
public:
	class URHSettingsDataFactory*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfo_Resolution.OnScreenResolutionSaved
struct URHSettingsInfo_Resolution_OnScreenResolutionSaved_Params
{
public:
	struct CoreUObject_IntPoint                  SavedScreenResolution;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsInfo_Resolution.OnScreenResolutionApplied
struct URHSettingsInfo_Resolution_OnScreenResolutionApplied_Params
{
public:
	struct CoreUObject_IntPoint                  AppliedScreenResolution;                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsMenu.OnShowPage
struct URHSettingsMenu_OnShowPage_Params
{
public:
	class URHSettingsPage*                       SettingsPage;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsMenu.OnHidePage
struct URHSettingsMenu_OnHidePage_Params
{
public:
	class URHSettingsPage*                       SettingsPage;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsMenu.OnConfirmExit
struct URHSettingsMenu_OnConfirmExit_Params
{
public:
	bool                                         ShouldSaveSettings;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHSettingsMenu.GetSettingsWidgetsForPage
struct URHSettingsMenu_GetSettingsWidgetsForPage_Params
{
public:
	class URHSettingsPage*                       Page;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URHSettingsWidget*>             OutSettingsWidgets;                                // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class URHWidget*>                     OutSettingsWidgetsAsRH;                            // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bReset;                                            // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32BF[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSettingsMenu.GetSettingsPages
struct URHSettingsMenu_GetSettingsPages_Params
{
public:
	TArray<class URHSettingsPage*>               ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsMenu.AddSettingsPageWidget
struct URHSettingsMenu_AddSettingsPageWidget_Params
{
public:
	class URHSettingsPage*                       SettingsPage;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsPage.OnShowSection
struct URHSettingsPage_OnShowSection_Params
{
public:
	class URHSettingsSection*                    SettingsSection;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsPage.OnHideSection
struct URHSettingsPage_OnHideSection_Params
{
public:
	class URHSettingsSection*                    SettingsSection;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSettingsPage.GetSettingsSections
struct URHSettingsPage_GetSettingsSections_Params
{
public:
	TArray<class URHSettingsSection*>            ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsPage.GetScrollBox
struct URHSettingsPage_GetScrollBox_Params
{
public:
	class UScrollBox*                            ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsPage.AddSettingsSectionWidget
struct URHSettingsPage_AddSettingsSectionWidget_Params
{
public:
	class URHSettingsSection*                    SettingsSection;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsPreview.HandleOnValueChanged
struct URHSettingsPreview_HandleOnValueChanged_Params
{
public:
	bool                                         ChangedExternally;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsSection.OnShowGroup
struct URHSettingsSection_OnShowGroup_Params
{
public:
	class URHSettingsGroup*                      SettingsGroup;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsSection.OnHideGroup
struct URHSettingsSection_OnHideGroup_Params
{
public:
	class URHSettingsGroup*                      SettingsGroup;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSettingsSection.GetSettingsGroups
struct URHSettingsSection_GetSettingsGroups_Params
{
public:
	TArray<class URHSettingsGroup*>              ReturnValue;                                       // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsSection.AddSettingsGroupWidget
struct URHSettingsSection_AddSettingsGroupWidget_Params
{
public:
	class URHSettingsGroup*                      SettingsGroup;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function RallyHereStart.RH_SettingsSubsystem.OnSetLoadoutSettingsResponse
struct URH_SettingsSubsystem_OnSetLoadoutSettingsResponse_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_345E[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereIntegration_RH_PlayerSettingsDataWrapper Response;                                          // 0x8(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function RallyHereStart.RH_SettingsSubsystem.OnGetLoadoutSettingsResponse
struct URH_SettingsSubsystem_OnGetLoadoutSettingsResponse_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3469[0x7];                                     // Fixing Size After Last Property  
	struct RallyHereIntegration_RH_PlayerSettingsDataWrapper Response;                                          // 0x8(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RH_SettingsSubsystem.AreLoadoutsRequested
struct URH_SettingsSubsystem_AreLoadoutsRequested_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RH_SettingsSubsystem.AreLoadoutsLoaded
struct URH_SettingsSubsystem_AreLoadoutsLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsWidget.OnSettingsInfoValueChanged
struct URHSettingsWidget_OnSettingsInfoValueChanged_Params
{
public:
	bool                                         bChangedExternally;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.RHSettingsWidget.OnInputAttached
struct URHSettingsWidget_OnInputAttached_Params
{
public:
	bool                                         bGamepadAttached;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMouseAttached;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsWidget.IsSaved
struct URHSettingsWidget_IsSaved_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsWidget.IsApplied
struct URHSettingsWidget_IsApplied_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsWidget.HasPreview
struct URHSettingsWidget_HasPreview_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSettingsWidget.GetSettingsInfo
struct URHSettingsWidget_GetSettingsInfo_Params
{
public:
	class URHSettingsInfoBase*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHSettingsWidget.CanGamepadNavigate
struct URHSettingsWidget_CanGamepadNavigate_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSocialPanelBase.SetupTreeView
struct URHSocialPanelBase_SetupTreeView_Params
{
public:
	class UTreeView*                             List;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSocialPanelBase.SetDataSource
struct URHSocialPanelBase_SetDataSource_Params
{
public:
	class URHSocialOverlay*                      Source;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSocialPanelBase.OnDataChange
struct URHSocialPanelBase_OnDataChange_Params
{
public:
	TArray<struct RallyHereStart_RHSocialOverlaySectionInfo> Sections;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSocialPanelBase.GetTreeView
struct URHSocialPanelBase_GetTreeView_Params
{
public:
	class UTreeView*                             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHSocialPanelBase.GetSubListFromData
struct URHSocialPanelBase_GetSubListFromData_Params
{
public:
	class UObject*                               Source;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       Out_List;                                          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSocialPanelBase.GetDataSource
struct URHSocialPanelBase_GetDataSource_Params
{
public:
	class URHSocialOverlay*                      ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSocialOverlay.PlayTransition
struct URHSocialOverlay_PlayTransition_Params
{
public:
	class UWidgetAnimation*                      Animation;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TransitionOut;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35CE[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSocialOverlay.OnPartyMemberChanged
struct URHSocialOverlay_OnPartyMemberChanged_Params
{
public:
	struct CoreUObject_Guid                      PlayerUuid;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSocialOverlay.GetData
struct URHSocialOverlay_GetData_Params
{
public:
	TArray<class URHDataSocialCategory*>         ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHSocialOverlay.GetCategory
struct URHSocialOverlay_GetCategory_Params
{
public:
	struct RallyHereStart_RHSocialOverlaySectionInfo Section;                                           // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHDataSocialCategory*                 ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHSocialOverlay.GetCategories
struct URHSocialOverlay_GetCategories_Params
{
public:
	TArray<enum class ERHSocialOverlaySection>   Categories;                                        // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class URHDataSocialCategory*>         ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function RallyHereStart.RHSocialSearchPanel.OnSearchComplete
struct URHSocialSearchPanel_OnSearchComplete_Params
{
public:
	class FText                                  SearchTerm;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  Error;                                             // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class URHDataSocialPlayer*>           Results;                                           // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHSocialSearchPanel.GetActiveSearchTerm
struct URHSocialSearchPanel_GetActiveSearchTerm_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHSocialSearchPanel.DoSearch
struct URHSocialSearchPanel_DoSearch_Params
{
public:
	class FText                                  SearchTerm;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSocialWidgetBase.RHUpdateFriends
struct URHSocialWidgetBase_RHUpdateFriends_Params
{
public:
	TArray<class URH_RHFriendAndPlatformFriend*> UpdatedFriends;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSocialWidgetBase.HandleSpecificPartyIdDataUpdated
struct URHSocialWidgetBase_HandleSpecificPartyIdDataUpdated_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHSocialWidgetBase.HandleSpecificPartyDataUpdated
struct URHSocialWidgetBase_HandleSpecificPartyDataUpdated_Params
{
public:
	struct RallyHereStart_RH_PartyMemberData     PartyMember;                                       // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHSocialWidgetBase.HandleSpecificPartyDataAdded
struct URHSocialWidgetBase_HandleSpecificPartyDataAdded_Params
{
public:
	struct RallyHereStart_RH_PartyMemberData     PartyMember;                                       // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHSocialWidgetBase.GetPartyManager
struct URHSocialWidgetBase_GetPartyManager_Params
{
public:
	class URHPartyManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSocialWidgetBase.GetOnlineFriendCount
struct URHSocialWidgetBase_GetOnlineFriendCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHSocialWidgetBase.GetIncomingInvitesCount
struct URHSocialWidgetBase_GetIncomingInvitesCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction RallyHereStart.RHSortableGridPanel.SortChildrenComparator__DelegateSignature
struct URHSortableGridPanel_SortChildrenComparator__DelegateSignature_Params
{
public:
	class UWidget*                               LHS;                                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               RHS;                                               // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36AC[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHSortableGridPanel.AddChildAutoLayout
struct URHSortableGridPanel_AddChildAutoLayout_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGridSlot*                             ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction RallyHereStart.RHSortableVerticalBox.SortChildrenComparator__DelegateSignature
struct URHSortableVerticalBox_SortChildrenComparator__DelegateSignature_Params
{
public:
	class UWidget*                               LHS;                                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               RHS;                                               // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36CB[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHS_PlayerInfo.GetSettingsSubsystem
struct URHS_PlayerInfo_GetSettingsSubsystem_Params
{
public:
	class URH_SettingsSubsystem*                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHS_PlayerInfo.GetRHSPlayerInventory
struct URHS_PlayerInfo_GetRHSPlayerInventory_Params
{
public:
	class URHS_PlayerInventory*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHS_PlayerInfoSubsystem.OnPlayerLogin
struct URHS_PlayerInfoSubsystem_OnPlayerLogin_Params
{
public:
	class AGameModeBase*                         InGameMode;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     InPlayerController;                                // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHS_PlayerInfoSubsystem.OnLocalLogin
struct URHS_PlayerInfoSubsystem_OnLocalLogin_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHStatsMgr.GetPlayerXpLootId
struct URHStatsMgr_GetPlayerXpLootId_Params
{
public:
	struct RallyHereIntegration_RH_LootId        ReturnValue;                                       // 0x0(0x14)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHStatsMgr.GetBattlepassXpLootId
struct URHStatsMgr_GetBattlepassXpLootId_Params
{
public:
	struct RallyHereIntegration_RH_LootId        ReturnValue;                                       // 0x0(0x14)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHStorePurchaseRequest.SubmitPurchaseRequest
struct URHStorePurchaseRequest_SubmitPurchaseRequest_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHPortalOffer.GetDiscountPercentage
struct URHPortalOffer_GetDiscountPercentage_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHStoreItemPrice.GetPriceWithCoupon
struct URHStoreItemPrice_GetPriceWithCoupon_Params
{
public:
	class URHStoreItem*                          Coupon;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_378A[0x4];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHStoreItemPrice.GetDiscountPercentage
struct URHStoreItemPrice_GetDiscountPercentage_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHStoreItemPrice.BLUEPRINT_CanAfford
struct URHStoreItemPrice_BLUEPRINT_CanAfford_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37A4[0x4];                                     // Fixing Size After Last Property  
	class URHStoreItem*                          Coupon;                                            // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHStoreItem.UIX_ShowPurchaseConfirmation
struct URHStoreItem_UIX_ShowPurchaseConfirmation_Params
{
public:
	class URHStoreItemPrice*                     PPrice;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreItem.ShouldDisplayToUser
struct URHStoreItem_ShouldDisplayToUser_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreItem.IsOnSale
struct URHStoreItem_IsOnSale_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreItem.IsActive
struct URHStoreItem_IsActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreItem.HasPortalOffer
struct URHStoreItem_HasPortalOffer_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHStoreItem.GetVendorId
struct URHStoreItem_GetVendorId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHStoreItem.GetUIHint
struct URHStoreItem_GetUIHint_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHStoreItem.GetSortOrder
struct URHStoreItem_GetSortOrder_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHStoreItem.GetPurchaseRequest
struct URHStoreItem_GetPurchaseRequest_Params
{
public:
	class URHStorePurchaseRequest*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHStoreItem.GetPrices
struct URHStoreItem_GetPrices_Params
{
public:
	TArray<class URHStoreItemPrice*>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHStoreItem.GetPrice
struct URHStoreItem_GetPrice_Params
{
public:
	TSoftObjectPtr<class UPlatformInventoryItem> NCurrencyType;                                     // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHStoreItemPrice*                     ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHStoreItem.GetPortalOffer
struct URHStoreItem_GetPortalOffer_Params
{
public:
	class URHPortalOffer*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHStoreItem.GetName
struct URHStoreItem_GetName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHStoreItem.GetLootQuantity
struct URHStoreItem_GetLootQuantity_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHStoreItem.GetLootId
struct URHStoreItem_GetLootId_Params
{
public:
	struct RallyHereIntegration_RH_LootId        ReturnValue;                                       // 0x0(0x14)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHStoreItem.GetItemId
struct URHStoreItem_GetItemId_Params
{
public:
	struct RallyHereIntegration_RH_ItemId        ReturnValue;                                       // 0x0(0x14)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreItem.GetInventoryOperation
struct URHStoreItem_GetInventoryOperation_Params
{
public:
	enum class ERHAPI_InventoryOperation         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHStoreItem.GetInventoryItem
struct URHStoreItem_GetInventoryItem_Params
{
public:
	TSoftObjectPtr<class UPlatformInventoryItem> ReturnValue;                                       // 0x0(0x28)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHStoreItem.GetIconInfo
struct URHStoreItem_GetIconInfo_Params
{
public:
	class UIconInfo*                             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHStoreItem.GetFormattedNameDisplay
struct URHStoreItem_GetFormattedNameDisplay_Params
{
public:
	int32                                        ExternalQuantity;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_388A[0x4];                                     // Fixing Size After Last Property  
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHStoreItem.GetFormattedDescDisplay
struct URHStoreItem_GetFormattedDescDisplay_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHStoreItem.GetDLCForVoucher
struct URHStoreItem_GetDLCForVoucher_Params
{
public:
	class URHStoreItem*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHStoreItem.GetDescription
struct URHStoreItem_GetDescription_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHStoreItem.GetBundleId
struct URHStoreItem_GetBundleId_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHStoreItem.GetBundledContents
struct URHStoreItem_GetBundledContents_Params
{
public:
	TArray<class URHStoreItem*>                  ContainedItems;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38B9[0x7];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHStoreItem.GetBestDiscount
struct URHStoreItem_GetBestDiscount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHStoreItem.BundleContainsItemId
struct URHStoreItem_BundleContainsItemId_Params
{
public:
	struct RallyHereIntegration_RH_ItemId        NItemId;                                           // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSearchSubContainers;                              // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x15(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38EF[0x2];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHStoreItem.BLUEPRINT_IsRented
struct URHStoreItem_BLUEPRINT_IsRented_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHStoreItem.BLUEPRINT_IsOwned
struct URHStoreItem_BLUEPRINT_IsOwned_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHStoreItem.BLUEPRINT_GetQuantityOwned
struct URHStoreItem_BLUEPRINT_GetQuantityOwned_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHStoreItem.BLUEPRINT_GetCouponsForPrice
struct URHStoreItem_BLUEPRINT_GetCouponsForPrice_Params
{
public:
	class URHStoreItemPrice*                     Price;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHStoreItem.BLUEPRINT_GetBestCouponForPrice
struct URHStoreItem_BLUEPRINT_GetBestCouponForPrice_Params
{
public:
	class URHStoreItemPrice*                     Price;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHStoreItem.BLUEPRINT_CanOwnMore
struct URHStoreItem_BLUEPRINT_CanOwnMore_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHStoreItem.BLUEPRINT_CanAfford
struct URHStoreItem_BLUEPRINT_CanAfford_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHStoreItemPrice*                     Price;                                             // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Quantity;                                          // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_395C[0x4];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.UIX_CompletePurchaseItem
struct URHStoreItemHelper_UIX_CompletePurchaseItem_Params
{
public:
	class URHStorePurchaseRequest*               PurchaseRequest;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.RedeemDLCVoucher
struct URHStoreItemHelper_RedeemDLCVoucher_Params
{
public:
	class URHStoreItem*                          DLCVoucher;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.OnXpTablesUpdated
struct URHStoreItemHelper_OnXpTablesUpdated_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.OnPricePointsUpdated
struct URHStoreItemHelper_OnPricePointsUpdated_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.OnInventoryBucketUseRuleSetsUpdated
struct URHStoreItemHelper_OnInventoryBucketUseRuleSetsUpdated_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.OnEntitlementResult
struct URHStoreItemHelper_OnEntitlementResult_Params
{
public:
	TArray<struct RallyHereAPI_RHAPI_PlayerOrder> OrderResults;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.HasPendingPurchase
struct URHStoreItemHelper_HasPendingPurchase_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.GetXpTable
struct URHStoreItemHelper_GetXpTable_Params
{
public:
	int32                                        XpTableId;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A00[0x4];                                     // Fixing Size After Last Property  
	struct RallyHereAPI_RHAPI_XpTable            XpTable;                                           // 0x8(0xF0)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A03[0x7];                                     // Fixing Size Of Struct 
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.GetStoreItemsForVendor
struct URHStoreItemHelper_GetStoreItemsForVendor_Params
{
public:
	int32                                        NVendorId;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeInactiveItems;                             // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSearchSubContainers;                              // 0x5(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A07[0x2];                                     // Fixing Size After Last Property  
	TArray<class URHStoreItem*>                  ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.GetStoreItemsAndQuantitiesForVendor
struct URHStoreItemHelper_GetStoreItemsAndQuantitiesForVendor_Params
{
public:
	int32                                        NVendorId;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeInactiveItems;                             // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSearchSubContainers;                              // 0x5(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A11[0x2];                                     // Fixing Size After Last Property  
	TMap<struct RallyHereIntegration_RH_LootId, int32> QuantityMap;                                       // 0x8(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	int32                                        ExternalQuantity;                                  // 0x58(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A13[0x4];                                     // Fixing Size After Last Property  
	TArray<class URHStoreItem*>                  ReturnValue;                                       // 0x60(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.GetStoreItemForVendor
struct URHStoreItemHelper_GetStoreItemForVendor_Params
{
public:
	int32                                        NVendorId;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_LootId        NLootItemId;                                       // 0x4(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHStoreItem*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.GetStoreItem
struct URHStoreItemHelper_GetStoreItem_Params
{
public:
	struct RallyHereIntegration_RH_LootId        LootId;                                            // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A26[0x4];                                     // Fixing Size After Last Property  
	class URHStoreItem*                          ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.GetPremiumCurrencyItem
struct URHStoreItemHelper_GetPremiumCurrencyItem_Params
{
public:
	class URHCurrency*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.GetPendingPurchaseData
struct URHStoreItemHelper_GetPendingPurchaseData_Params
{
public:
	TArray<class URHStorePurchaseRequest*>       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.GetFreeCurrencyItem
struct URHStoreItemHelper_GetFreeCurrencyItem_Params
{
public:
	class URHCurrency*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.GetCurrencyItem
struct URHStoreItemHelper_GetCurrencyItem_Params
{
public:
	struct RallyHereIntegration_RH_ItemId        ItemId;                                            // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A3F[0x4];                                     // Fixing Size After Last Property  
	class URHCurrency*                           ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.DoesPortalHaveOffers
struct URHStoreItemHelper_DoesPortalHaveOffers_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.CheckEmptyInGameStore
struct URHStoreItemHelper_CheckEmptyInGameStore_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A50[0x7];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.BLUEPRINT_RequestVendorData
struct URHStoreItemHelper_BLUEPRINT_RequestVendorData_Params
{
public:
	TArray<int32>                                VendorIds;                                         // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.AreXpTablesLoaded
struct URHStoreItemHelper_AreXpTablesLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.ArePricePointsLoaded
struct URHStoreItemHelper_ArePricePointsLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.ArePortalOffersLoaded
struct URHStoreItemHelper_ArePortalOffersLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreItemHelper.AreInventoryBucketUseRuleSetsLoaded
struct URHStoreItemHelper_AreInventoryBucketUseRuleSetsLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStorePanelItem.IsOnSale
struct URHStorePanelItem_IsOnSale_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreSectionItem.HasUnseenItems
struct URHStoreSectionItem_HasUnseenItems_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreSection.HasUnseenItems
struct URHStoreSection_HasUnseenItems_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHStoreSection.GetSectionHeader
struct URHStoreSection_GetSectionHeader_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHStoreSection.GetSecondsRemaining
struct URHStoreSection_GetSecondsRemaining_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHStoreWidget.HasAllRequiredStoreInformation
struct URHStoreWidget_HasAllRequiredStoreInformation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHStoreWidget.GetStoreLayout
struct URHStoreWidget_GetStoreLayout_Params
{
public:
	int32                                        ErrorCode;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AEF[0x4];                                     // Fixing Size After Last Property  
	TArray<class URHStoreSection*>               ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHStoreWidget.GetStoreItemHelper
struct URHStoreWidget_GetStoreItemHelper_Params
{
public:
	class URHStoreItemHelper*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHS_PlayerInventory.OnInventoryLoaded
struct URHS_PlayerInventory_OnInventoryLoaded_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHS_PlayerInventory.IsInventoryRequested
struct URHS_PlayerInventory_IsInventoryRequested_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHS_PlayerInventory.IsInventoryOwned
struct URHS_PlayerInventory_IsInventoryOwned_Params
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B0C[0x3];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHS_PlayerInventory.IsInventoryLoaded
struct URHS_PlayerInventory_IsInventoryLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHS_PlayerInventory.IsInventoryItemExpired
struct URHS_PlayerInventory_IsInventoryItemExpired_Params
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B14[0x3];                                     // Fixing Size Of Struct 
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHS_PlayerInventory.IsInventoryAssetsLoaded
struct URHS_PlayerInventory_IsInventoryAssetsLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHS_PlayerInventory.GetInventoryWithTags
struct URHS_PlayerInventory_GetInventoryWithTags_Params
{
public:
	struct GameplayTags_GameplayTagContainer     Tags;                                              // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct RallyHereIntegration_RH_ItemInventory> ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHS_PlayerInventory.GetInventoryWithTag
struct URHS_PlayerInventory_GetInventoryWithTag_Params
{
public:
	struct GameplayTags_GameplayTag              Tag;                                               // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct RallyHereIntegration_RH_ItemInventory> ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHS_PlayerInventory.GetInventoryTimeRemaining
struct URHS_PlayerInventory_GetInventoryTimeRemaining_Params
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHS_PlayerInventory.GetInventoryItemIds
struct URHS_PlayerInventory_GetInventoryItemIds_Params
{
public:
	TArray<int32>                                ItemIds;                                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHS_PlayerInventory.GetInventoryForItem
struct URHS_PlayerInventory_GetInventoryForItem_Params
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B32[0x4];                                     // Fixing Size After Last Property  
	TArray<struct RallyHereIntegration_RH_ItemInventory> ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function RallyHereStart.RHS_PlayerInventory.GetInventoryForInventoryId
struct URHS_PlayerInventory_GetInventoryForInventoryId_Params
{
public:
	struct CoreUObject_Guid                      InventoryId;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereIntegration_RH_ItemInventory InventoryItem;                                     // 0x10(0x90)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B3A[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHS_PlayerInventory.GetInventoryCount
struct URHS_PlayerInventory_GetInventoryCount_Params
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHS_PlayerInventory.BindItemCountUpdated
struct URHS_PlayerInventory_BindItemCountUpdated_Params
{
public:
	int32                                        ItemId;                                            // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Event;                                             // 0x4(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHTabScreenWidget.AddPlayerToScoreboard
struct URHTabScreenWidget_AddPlayerToScoreboard_Params
{
public:
	int32                                        TeamNum;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B5C[0x4];                                     // Fixing Size After Last Property  
	class FString                                PlayerName;                                        // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function RallyHereStart.RHToastNotificationWidgetBase.StoreToastQueue
struct URHToastNotificationWidgetBase_StoreToastQueue_Params
{
public:
	struct RallyHereStart_ToastData              ToastNotification;                                 // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function RallyHereStart.RHToastNotificationWidgetBase.OnToastNotificationReceived
struct URHToastNotificationWidgetBase_OnToastNotificationReceived_Params
{
public:
	struct RallyHereStart_ToastData              ToastData;                                         // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHToastNotificationWidgetBase.OnFriendUpdated
struct URHToastNotificationWidgetBase_OnFriendUpdated_Params
{
public:
	class URH_RHFriendAndPlatformFriend*         UpdatedFriend;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHToastNotificationWidgetBase.HandlePartyMemberPromoted
struct URHToastNotificationWidgetBase_HandlePartyMemberPromoted_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHToastNotificationWidgetBase.HandlePartyMemberLeft
struct URHToastNotificationWidgetBase_HandlePartyMemberLeft_Params
{
public:
	struct RallyHereStart_RH_PartyMemberData     PartyMemberData;                                   // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHToastNotificationWidgetBase.HandlePartyMemberKick
struct URHToastNotificationWidgetBase_HandlePartyMemberKick_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHToastNotificationWidgetBase.HandlePartyMemberAdded
struct URHToastNotificationWidgetBase_HandlePartyMemberAdded_Params
{
public:
	struct RallyHereStart_RH_PartyMemberData     PartyMemberData;                                   // 0x0(0x30)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHToastNotificationWidgetBase.HandlePartyInviteSent
struct URHToastNotificationWidgetBase_HandlePartyInviteSent_Params
{
public:
	class URH_PlayerInfo*                        Invitee;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHToastNotificationWidgetBase.HandlePartyInviteReceived
struct URHToastNotificationWidgetBase_HandlePartyInviteReceived_Params
{
public:
	class URH_PlayerInfo*                        PartyInviter;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHToastNotificationWidgetBase.HandlePartyInviteError
struct URHToastNotificationWidgetBase_HandlePartyInviteError_Params
{
public:
	class FText                                  PlayerName;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHToastNotificationWidgetBase.GetPostMatchToasts
struct URHToastNotificationWidgetBase_GetPostMatchToasts_Params
{
public:
	TArray<struct RallyHereStart_ToastData>      ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHToastNotificationWidgetBase.GetPartyManager
struct URHToastNotificationWidgetBase_GetPartyManager_Params
{
public:
	class URHPartyManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function RallyHereStart.RHToastNotificationWidgetBase.GetNext
struct URHToastNotificationWidgetBase_GetNext_Params
{
public:
	struct RallyHereStart_ToastData              NextToastNotification;                             // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BCD[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHToastNotificationWidgetBase.GetFriendSubsystem
struct URHToastNotificationWidgetBase_GetFriendSubsystem_Params
{
public:
	class URH_FriendSubsystem*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHTreeView.NavigateSelectItem
struct URHTreeView_NavigateSelectItem_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHTreeView.IsItemExpanded
struct URHTreeView_IsItemExpanded_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BEC[0x7];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHTreeView.GetNumItemsInLayout
struct URHTreeView_GetNumItemsInLayout_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHTreeView.BP_GetEntryWidgetFromItem
struct URHTreeView_BP_GetEntryWidgetFromItem_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           OutWidget;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3BFB[0x7];                                     // Fixing Size Of Struct 
};

// 0x70 (0x70 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.UIX_ReportPlayer
struct URHUIBlueprintFunctionLibrary_UIX_ReportPlayer_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_ReportPlayerParams     Params;                                            // 0x8(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x68(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C06[0x7];                                     // Fixing Size Of Struct 
};

// 0x70 (0x70 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.SetupReportPlayerFromGameState
struct URHUIBlueprintFunctionLibrary_SetupReportPlayerFromGameState_Params
{
public:
	int64                                        PlayerId;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARHGameState*                          State;                                             // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_ReportPlayerParams     ReturnValue;                                       // 0x10(0x60)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.RegisterLinearNavigation
struct URHUIBlueprintFunctionLibrary_RegisterLinearNavigation_Params
{
public:
	class URHWidget*                             ParentWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class URHWidget*>                     NavWidgets;                                        // 0x8(0x10)(ConstParm, Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        FocusGroup;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHorizontal;                                       // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLooping;                                          // 0x1D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C1E[0x2];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.RegisterGridNavigation
struct URHUIBlueprintFunctionLibrary_RegisterGridNavigation_Params
{
public:
	class URHWidget*                             ParentWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FocusGroup;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C24[0x4];                                     // Fixing Size After Last Property  
	TArray<class UWidget*>                       NavWidgets;                                        // 0x10(0x10)(ConstParm, Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        GridWidth;                                         // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NavToLastElementOnDown;                            // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C25[0x3];                                     // Fixing Size Of Struct 
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.Key_GetShortDisplayName
struct URHUIBlueprintFunctionLibrary_Key_GetShortDisplayName_Params
{
public:
	struct InputCore_Key                         Key;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.IsWithEditor
struct URHUIBlueprintFunctionLibrary_IsWithEditor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.IsPlatformType
struct URHUIBlueprintFunctionLibrary_IsPlatformType_Params
{
public:
	bool                                         IsConsole;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPC;                                              // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsMobile;                                          // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.IsAnonymousLogin
struct URHUIBlueprintFunctionLibrary_IsAnonymousLogin_Params
{
public:
	class ARHHUDCommon*                          PHUD;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C3B[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.HasCinematicToPlay
struct URHUIBlueprintFunctionLibrary_HasCinematicToPlay_Params
{
public:
	class UDataTable*                            CinematicDataTable;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C45[0x7];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetUMG_DPI_Scaling
struct URHUIBlueprintFunctionLibrary_GetUMG_DPI_Scaling_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetTextByPlatform
struct URHUIBlueprintFunctionLibrary_GetTextByPlatform_Params
{
public:
	class FText                                  DefaultText;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<class FString, class FText>             PlatformTexts;                                     // 0x18(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x68(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetStoreItemHelper
struct URHUIBlueprintFunctionLibrary_GetStoreItemHelper_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHStoreItemHelper*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetStatusMessage
struct URHUIBlueprintFunctionLibrary_GetStatusMessage_Params
{
public:
	enum class ERHPlayerOnlineStatus             PlayerStatus;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C5E[0x7];                                     // Fixing Size After Last Property  
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetPlayerStatusMessage
struct URHUIBlueprintFunctionLibrary_GetPlayerStatusMessage_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_LocalPlayerSubsystem*              LocalPlayerSS;                                     // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetPlayerOnlineStatus
struct URHUIBlueprintFunctionLibrary_GetPlayerOnlineStatus_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_LocalPlayerSubsystem*              LocalPlayerSS;                                     // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowPartyStatus;                                 // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowFriendRequestStatus;                         // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHPlayerOnlineStatus             ReturnValue;                                       // 0x1A(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C81[0x5];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetPlayerCohortGroup
struct URHUIBlueprintFunctionLibrary_GetPlayerCohortGroup_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumberOfGroups;                                    // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetPlatformIdByOSSName
struct URHUIBlueprintFunctionLibrary_GetPlatformIdByOSSName_Params
{
public:
	class FName                                  OSSName;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Platform                   ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C96[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetLoggedInPlatformId
struct URHUIBlueprintFunctionLibrary_GetLoggedInPlatformId_Params
{
public:
	class ARHHUDCommon*                          PHUD;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Platform                   ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C9F[0x7];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetLocalPlayerInfo
struct URHUIBlueprintFunctionLibrary_GetLocalPlayerInfo_Params
{
public:
	class ARHHUDCommon*                          HUD;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetLocalPlayerController
struct URHUIBlueprintFunctionLibrary_GetLocalPlayerController_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CB6[0x4];                                     // Fixing Size After Last Property  
	class APlayerController*                     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetKeyName
struct URHUIBlueprintFunctionLibrary_GetKeyName_Params
{
public:
	struct InputCore_Key                         Key;                                               // 0x0(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetKeyForBinding
struct URHUIBlueprintFunctionLibrary_GetKeyForBinding_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Binding;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SecondaryKey;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FallbackToDefault;                                 // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsGamepadDoubleTap;                                // 0x12(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CCC[0x5];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetGameState
struct URHUIBlueprintFunctionLibrary_GetGameState_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARHGameState*                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetGamepadIconSet
struct URHUIBlueprintFunctionLibrary_GetGamepadIconSet_Params
{
public:
	enum class EGamepadIcons                     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetGamepadConfirmButton
struct URHUIBlueprintFunctionLibrary_GetGamepadConfirmButton_Params
{
public:
	struct InputCore_Key                         ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetGamepadCancelButton
struct URHUIBlueprintFunctionLibrary_GetGamepadCancelButton_Params
{
public:
	struct InputCore_Key                         ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetFriendStatusMessage
struct URHUIBlueprintFunctionLibrary_GetFriendStatusMessage_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_RHFriendAndPlatformFriend*         Friend;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_LocalPlayerSubsystem*              LocalPlayerSS;                                     // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x18(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetFriendOnlineStatus
struct URHUIBlueprintFunctionLibrary_GetFriendOnlineStatus_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_RHFriendAndPlatformFriend*         Friend;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_LocalPlayerSubsystem*              LocalPlayerSS;                                     // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowPartyStatus;                                 // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowFriendRequestStatus;                         // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHPlayerOnlineStatus             ReturnValue;                                       // 0x1A(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D11[0x5];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetCurrencyItemByItemId
struct URHUIBlueprintFunctionLibrary_GetCurrencyItemByItemId_Params
{
public:
	struct RallyHereIntegration_RH_ItemId        CurrencyItemId;                                    // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D1B[0x4];                                     // Fixing Size After Last Property  
	class URHCurrency*                           ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.GetActiveBattlepass
struct URHUIBlueprintFunctionLibrary_GetActiveBattlepass_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHBattlepass*                         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.CreateSettingsWidgetWithConfig
struct URHUIBlueprintFunctionLibrary_CreateSettingsWidgetWithConfig_Params
{
public:
	class ARHHUDCommon*                          HUD;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_RHSettingsWidgetConfig SettingsWidgetConfig;                              // 0x8(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class URHSettingsWidget*                     ReturnValue;                                       // 0x18(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.CreateSettingsWidget
struct URHUIBlueprintFunctionLibrary_CreateSettingsWidget_Params
{
public:
	class ARHHUDCommon*                          HUD;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class URHSettingsWidget>         SettingsWidgetClass;                               // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHSettingsWidget*                     ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.CreateSettingsPreview
struct URHUIBlueprintFunctionLibrary_CreateSettingsPreview_Params
{
public:
	class ARHHUDCommon*                          HUD;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class URHSettingsPreview>        SettingsPreviewClass;                              // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URHSettingsPreview*                    ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.ConvertPlatformTypeToDisplayType
struct URHUIBlueprintFunctionLibrary_ConvertPlatformTypeToDisplayType_Params
{
public:
	class ARHHUDCommon*                          PHUD;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHAPI_Platform                   PlatformType;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERHPlatformDisplayType            ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E7D[0x6];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.CompareStrings
struct URHUIBlueprintFunctionLibrary_CompareStrings_Params
{
public:
	class FString                                LeftString;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RightString;                                       // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E86[0x4];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHUIBlueprintFunctionLibrary.CanReportServer
struct URHUIBlueprintFunctionLibrary_CanReportServer_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E91[0x7];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHViewLayer.IsRouteValid
struct URHViewLayer_IsRouteValid_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EE0[0x3];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHViewLayer.GoToRoute_HandleShowFinished
struct URHViewLayer_GoToRoute_HandleShowFinished_Params
{
public:
	class URHWidget*                             Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHViewLayer.GoToRoute_HandleHideFinished
struct URHViewLayer_GoToRoute_HandleHideFinished_Params
{
public:
	class URHWidget*                             Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function RallyHereStart.RHViewManager.SwapRoute
struct URHViewManager_SwapRoute_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SwapTargetRoute;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceTransition;                                   // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EF8[0x2];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHViewManager.SetPendingRouteData
struct URHViewManager_SetPendingRouteData_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Data;                                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHViewManager.ReplaceRoute
struct URHViewManager_ReplaceRoute_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceTransition;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F0F[0x7];                                     // Fixing Size After Last Property  
	class UObject*                               Data;                                              // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F11[0x7];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHViewManager.RemoveRoute
struct URHViewManager_RemoveRoute_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceTransition;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F16[0x2];                                     // Fixing Size Of Struct 
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHViewManager.PushRoute
struct URHViewManager_PushRoute_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ForceTransition;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F1B[0x7];                                     // Fixing Size After Last Property  
	class UObject*                               Data;                                              // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F1E[0x7];                                     // Fixing Size Of Struct 
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.RHViewManager.PopRoute
struct URHViewManager_PopRoute_Params
{
public:
	bool                                         ForceTransition;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.RHViewManager.IsLayerIdle
struct URHViewManager_IsLayerIdle_Params
{
public:
	enum class EViewManagerLayer                 LayerType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHViewManager.IsEveryLayerIdle
struct URHViewManager_IsEveryLayerIdle_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHViewManager.IsBlockingOrders
struct URHViewManager_IsBlockingOrders_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHViewManager.InitializeRoutes
struct URHViewManager_InitializeRoutes_Params
{
public:
	class UDataTable*                            RouteTable;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function RallyHereStart.RHViewManager.HasCompletedRedirectFlow
struct URHViewManager_HasCompletedRedirectFlow_Params
{
public:
	enum class EViewRouteRedirectionPhase        RedirectPhase;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHViewManager.GetViewRouteCount
struct URHViewManager_GetViewRouteCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function RallyHereStart.RHViewManager.GetViewRoute
struct URHViewManager_GetViewRoute_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_ViewRoute              ViewRoute;                                         // 0x8(0x40)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F7A[0x7];                                     // Fixing Size Of Struct 
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHViewManager.GetTopViewRouteWidget
struct URHViewManager_GetTopViewRouteWidget_Params
{
public:
	class URHWidget*                             ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHViewManager.GetTopViewRoute
struct URHViewManager_GetTopViewRoute_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function RallyHereStart.RHViewManager.GetTopLayer
struct URHViewManager_GetTopLayer_Params
{
public:
	enum class EViewManagerLayer                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHViewManager.GetPendingRouteData
struct URHViewManager_GetPendingRouteData_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Data;                                              // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FA1[0x7];                                     // Fixing Size Of Struct 
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHViewManager.GetDefaultRouteForLayer
struct URHViewManager_GetDefaultRouteForLayer_Params
{
public:
	enum class EViewManagerLayer                 LayerType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FB1[0x3];                                     // Fixing Size After Last Property  
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHViewManager.GetCurrentTransitionRoute
struct URHViewManager_GetCurrentTransitionRoute_Params
{
public:
	enum class EViewManagerLayer                 Layer;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FB7[0x3];                                     // Fixing Size After Last Property  
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHViewManager.GetCurrentRoute
struct URHViewManager_GetCurrentRoute_Params
{
public:
	enum class EViewManagerLayer                 Layer;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FBF[0x3];                                     // Fixing Size After Last Property  
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function RallyHereStart.RHViewManager.ContainsRoute
struct URHViewManager_ContainsRoute_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FCC[0x3];                                     // Fixing Size Of Struct 
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHViewRedirector_LocalSetting.DoesLocalSettingApply
struct URHViewRedirector_LocalSetting_DoesLocalSettingApply_Params
{
public:
	class ARHHUDCommon*                          HUD;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FEE[0x7];                                     // Fixing Size Of Struct 
};

// 0x28 (0x28 - 0x0)
// Function RallyHereStart.RHVoiceActivityWidget.OnVoiceParticipantUpdated
struct URHVoiceActivityWidget_OnVoiceParticipantUpdated_Params
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTalking;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMuted;                                          // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4012[0x6];                                     // Fixing Size After Last Property  
	class FString                                ChannelName;                                       // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHVoiceActivityWidget.OnVoiceParticipantRemoved
struct URHVoiceActivityWidget_OnVoiceParticipantRemoved_Params
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHVoiceActivityWidget.OnVoiceParticipantAdded
struct URHVoiceActivityWidget_OnVoiceParticipantAdded_Params
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHVoiceActivityWidget.GetVoiceIdByPlayerUuid
struct URHVoiceActivityWidget_GetVoiceIdByPlayerUuid_Params
{
public:
	struct CoreUObject_Guid                      PlayerId;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHVoiceActivityWidget.GetPlayerUuidByVoiceId
struct URHVoiceActivityWidget_GetPlayerUuidByVoiceId_Params
{
public:
	class FString                                VoiceId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct CoreUObject_Guid                      ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHVoiceActivityWidget.GetPlayerStateByVoiceId
struct URHVoiceActivityWidget_GetPlayerStateByVoiceId_Params
{
public:
	class FString                                VoiceId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ARHPlayerState*                        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function RallyHereStart.RHVoiceActivityWidget.GetPlayerInfoByVoiceId
struct URHVoiceActivityWidget_GetPlayerInfoByVoiceId_Params
{
public:
	class FString                                VoiceId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URH_PlayerInfo*                        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function RallyHereStart.RHVoucherOrder.RedeemVouchers
struct URHVoucherOrder_RedeemVouchers_Params
{
public:
	TArray<class URHStoreItem*>                  VoucherItems;                                      // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHVoucherOrder.GetVoucherOrders
struct URHVoucherOrder_GetVoucherOrders_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWhatsNewModal.UpdateWhatsNewPanels
struct URHWhatsNewModal_UpdateWhatsNewPanels_Params
{
public:
	class FString                                JsonName;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.RHWhatsNewModal.GetMaxPanelCount
struct URHWhatsNewModal_GetMaxPanelCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.RHWhatsNewModal.GetJsonDataFactory
struct URHWhatsNewModal_GetJsonDataFactory_Params
{
public:
	class URHJsonDataFactory*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function RallyHereStart.RHWhatsNewModal.BLUEPRINT_GetPanelDataAsync
struct URHWhatsNewModal_BLUEPRINT_GetPanelDataAsync_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.TickAnimationManager.StopAnimation
struct UTickAnimationManager_StopAnimation_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.TickAnimationManager.SkipToEndAnimation
struct UTickAnimationManager_SkipToEndAnimation_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.TickAnimationManager.ResumeAnimation
struct UTickAnimationManager_ResumeAnimation_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.TickAnimationManager.RemoveAnimation
struct UTickAnimationManager_RemoveAnimation_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.TickAnimationManager.PlayAnimation
struct UTickAnimationManager_PlayAnimation_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function RallyHereStart.TickAnimationManager.PauseAnimation
struct UTickAnimationManager_PauseAnimation_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function RallyHereStart.TickAnimationManager.GetAnimationInfo
struct UTickAnimationManager_GetAnimationInfo_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct RallyHereStart_TickAnimationParams    OutAnimParams;                                     // 0x8(0x2C)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x34(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40DE[0x3];                                     // Fixing Size Of Struct 
};

// 0x4 (0x4 - 0x0)
// Function RallyHereStart.TickAnimationManager.ApplyTick
struct UTickAnimationManager_ApplyTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function RallyHereStart.TickAnimationManager.AddAnimation
struct UTickAnimationManager_AddAnimation_Params
{
public:
	class FName                                  AnimName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           UpdateEvent;                                       // 0xC(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           FinishedEvent;                                     // 0x1C(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


