#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x6C8 - 0x580)
// WidgetBlueprintGeneratedClass WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C
class UWBP_PlayerInfoDisplay_C : public URHPlayerInfoDisplay
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x580(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScaleBox*                             AvatarContainer;                                   // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                         IconA;                                             // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        IconsShelf;                                        // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                InputIcon;                                         // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              InputIconContainer;                                // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LevelText;                                         // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MetaStatusLabel;                                   // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PartyLeaderContainer;                              // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PartyLeaderIcon;                                   // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlatformIcon_C*                   PlatformIcon;                                      // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PlatformIconContainer;                             // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PlayerLevelGroup;                                  // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerNameText;                                    // 0x5E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        StatusContainer;                                   // 0x5F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            StatusLabel;                                       // 0x5F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                StatusSwatch;                                      // 0x600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              VoiceIconContainer;                                // 0x608(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VoiceActivityIcon_C*              WBP_VoiceActivityIcon;                             // 0x610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowStatus;                                        // 0x618(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowPartyLeaderIcon;                               // 0x619(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              IconShelfAlignment;                                // 0x61A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26ED[0x5];                                     // Fixing Size After Last Property  
	class UDataTable*                            StatusColors;                                      // 0x620(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_SlateColor                  PlayerNameColor;                                   // 0x628(0x14)(Edit, BlueprintVisible, BlueprintReadOnly)
	uint8                                        Pad_2701[0x4];                                     // Fixing Size After Last Property  
	struct SlateCore_SlateFontInfo               PlayerNameFont;                                    // 0x640(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash)
	bool                                         IsMuted;                                           // 0x698(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTalking;                                         // 0x699(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2725[0x2];                                     // Fixing Size After Last Property  
	struct SlateCore_Margin                      IconShelfMargin;                                   // 0x69C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HideRankedBadge;                                   // 0x6AC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_274F[0x3];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnDisplayReset;                                    // 0x6B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class URH_RHFriendAndPlatformFriend*         Friend;                                            // 0x6C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerInfoDisplay_C* GetDefaultObj();

	void OnGetPlayerLevelResponse(int32 InstanceCount, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void OnPlayerInventoryCacheUpdated(TArray<int32>& ItemIds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHProgression* CallFunc_GetPlayerXpProgression_ReturnValue, const struct RallyHereIntegration_RH_ItemId& CallFunc_GetItemId_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void SetFriend(class URH_RHFriendAndPlatformFriend* Friend, const class FString& CallFunc_GetLastKnownDisplayName_ReturnValue, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct CoreUObject_Guid& CallFunc_GetRHPlayerUuid_ReturnValue, class URH_PlayerInfoSubsystem* CallFunc_GetPlayerInfoSubsystem_ReturnValue, class URH_PlayerInfo* CallFunc_GetPlayerInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void On_Get_Player_Account_Loadout_Settings(class URH_PlayerInfo* PlayerInfo, class URH_PlayerLoadout* Loadouts, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetEquippedItemInSlot_ReturnValue);
	void UnbindDelegates(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void BindDelegates(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHProgression* CallFunc_GetPlayerXpProgression_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URH_PlayerInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetRHPlayerInfo(class URH_PlayerInfo* PlayerInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct CoreUObject_Timespan& CallFunc_MakeTimespan_ReturnValue, const struct CoreUObject_Timespan& CallFunc_MakeTimespan_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class URHLoadoutDataFactory* CallFunc_GetRHLoadoutDataFactory_ReturnValue, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class ERHAPI_Platform CallFunc_GetLoggedInPlatformId_ReturnValue);
	void SetPlayerNameFont(const struct SlateCore_SlateFontInfo& Font);
	void SetPlayerNameColor(const struct SlateCore_SlateColor& Color);
	void TogglePartyLeaderIcon(bool ShowLeaderIcon, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetVoiceActive(bool IsActive);
	void SetVoiceTalking(bool Talking);
	void SetVoiceMuted(bool Muted);
	void OnGetPlatform(enum class ERHPlatformDisplayType PlatformType);
	void ResetDisplay(class URHLoadoutDataFactory* CallFunc_GetRHLoadoutDataFactory_ReturnValue, class UPlatformInventoryItem* CallFunc_GetDefaultItemForLoadoutSlotType_ReturnValue, class URHAvatar* K2Node_DynamicCast_AsRHAvatar, bool K2Node_DynamicCast_bSuccess, class UIconInfo* CallFunc_GetLargeAvatarInfo_ReturnValue);
	void OnGetDisplayName(bool bSuccess, const class FString& DisplayName, class FText CallFunc_Conv_StringToText_ReturnValue);
	void OnPlayerAvatarLoaded(const struct RallyHereStart_RHEquippedLoadoutItemWrapper& ItemWrapper, class URHAvatar* K2Node_DynamicCast_AsRHAvatar, bool K2Node_DynamicCast_bSuccess, class UIconInfo* CallFunc_GetLargeAvatarInfo_ReturnValue);
	void UpdateVoiceDisplay();
	void Get_Status_Color(enum class ERHPlayerOnlineStatus Status, struct SlateCore_SlateColor* StatusColor, enum class ERHPlayerOnlineStatus Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, class FName K2Node_Select_Default, const struct ColorEntry_ColorEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void UpdateStatus(enum class ERHPlayerOnlineStatus PlayerOnlineStatus, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName Temp_name_Variable_7, class FName Temp_name_Variable_8, class FName Temp_name_Variable_9, class FName Temp_name_Variable_10, enum class ERHPlayerOnlineStatus Temp_byte_Variable, class FName K2Node_Select_Default, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct ColorEntry_ColorEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, enum class ERHPlayerOnlineStatus CallFunc_GetFriendOnlineStatus_ReturnValue, const struct SlateCore_SlateColor& CallFunc_Get_Status_Color_StatusColor, class FText CallFunc_GetStatusMessage_ReturnValue);
	void SetVoiceState(bool ShouldShow, bool IsTalking, bool IsMuted);
	void ToggleStatusDisplay(bool ShowStatus, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void InitializeWidget();
	void Display_Reset();
	void OnPlayerProgressionLoaded();
	void OnPlayerPresenceUpdated(class URH_PlayerPresence* PlayerPresence);
	void ExecuteUbergraph_WBP_PlayerInfoDisplay(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class URH_PlayerPresence* K2Node_Event_PlayerPresence);
	void OnDisplayReset__DelegateSignature();
};

}


