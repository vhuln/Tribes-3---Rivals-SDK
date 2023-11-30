#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x5D0 - 0x550)
// WidgetBlueprintGeneratedClass WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C
class UWBP_Social_Header_Cosmetic_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      MobileLayout;                                      // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_AsyncIcon_C*                      AvatarIcon;                                        // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               DNDToggleBtn;                                      // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NameLabel;                                         // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                         PlayerBanner;                                      // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ControllerPrompt_C*               PlayerStatusGamepadCallout;                        // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerStatus_ContextMenu_C*       WBP_PlayerStatus_ContextMenu;                      // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URH_PlayerInfo*                        CurrentPlayerInfo;                                 // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnNavigationReady;                                 // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMenuShown;                                       // 0x5A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMenuHidden;                                      // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UObject*                               ClickSocialHeaderCosmeticSFX;                      // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Social_Header_Cosmetic_C* GetDefaultObj();

	void On_Get_Player_Loadout_Account_Settings(class URH_PlayerInfo* PlayerInfo, class URH_PlayerLoadout* Loadout, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetEquippedItemInSlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_GetEquippedItemInSlot_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void On_Display_Name_Loaded(bool bSuccess, const class FString& DisplayName, class FText CallFunc_Conv_StringToText_ReturnValue);
	void OnPlayerBannerLoaded(const struct RallyHereStart_RHEquippedLoadoutItemWrapper& ItemWrapper, class URHBanner* K2Node_DynamicCast_AsRHBanner, bool K2Node_DynamicCast_bSuccess, class UIconInfo* CallFunc_GetLargeBannerInfo_ReturnValue);
	void OnPlayerAvatarLoaded(const struct RallyHereStart_RHEquippedLoadoutItemWrapper& ItemWrapper, class URHAvatar* K2Node_DynamicCast_AsRHAvatar, bool K2Node_DynamicCast_bSuccess, class UIconInfo* CallFunc_GetLargeAvatarInfo_ReturnValue);
	void BindContextMenu(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void UpdateName(enum class ERHAPI_Platform CallFunc_GetLoggedInPlatformId_ReturnValue, const struct CoreUObject_Timespan& CallFunc_MakeTimespan_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateAfterInfoChange(const struct CoreUObject_Timespan& CallFunc_MakeTimespan_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHLoadoutDataFactory* CallFunc_GetRHLoadoutDataFactory_ReturnValue);
	void SetData(class URH_PlayerInfo* PlayerInfo);
	void PreConstruct(bool IsDesignTime);
	void InitializeWidget();
	void BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void HandleInputStateChanged(enum class ERH_INPUT_STATE InputState);
	void ToggleDND();
	void HandleReadyNavigation(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>& StatusButtons);
	void HandleMenuStart(class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget);
	void HandleMenuHidden();
	void HideStatusMenu();
	void ExecuteUbergraph_WBP_Social_Header_Cosmetic(int32 EntryPoint, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, enum class ESlateVisibility Temp_byte_Variable, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>& K2Node_CustomEvent_StatusButtons, enum class ESlateVisibility K2Node_Select_Default, class UWBP_PlayerStatus_ContextMenuOption_C* K2Node_CustomEvent_FocusWidget);
	void OnMenuHidden__DelegateSignature();
	void OnMenuShown__DelegateSignature(class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget);
	void OnNavigationReady__DelegateSignature(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>& StatusButtons);
};

}


