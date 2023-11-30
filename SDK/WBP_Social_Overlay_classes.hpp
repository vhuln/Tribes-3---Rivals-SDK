#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x748 - 0x620)
// WidgetBlueprintGeneratedClass WBP_Social_Overlay.WBP_Social_Overlay_C
class UWBP_Social_Overlay_C : public URHSocialOverlay
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x620(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OpenPanel_RightSide;                               // 0x628(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenPanel;                                         // 0x630(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x638(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Blocker;                                           // 0x640(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ContentSwitcher;                                   // 0x648(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ContextBlocker;                                    // 0x650(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerContextMenu_C*              ContextMenu;                                       // 0x658(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Dropshadowgradient;                                // 0x660(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Social_Friends_Tab_C*             FriendsPanel;                                      // 0x668(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_100;                                         // 0x670(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_subscreen_nav_tab_C*              NavButton0;                                        // 0x678(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_subscreen_nav_tab_C*              NavButton1;                                        // 0x680(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_subscreen_nav_tab_C*              NavButton2;                                        // 0x688(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ControllerPrompt_C*               PromptTabLeft;                                     // 0x690(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PromptTabLeftContainer;                            // 0x698(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ControllerPrompt_C*               PromptTabRight;                                    // 0x6A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PromptTabRightContainer;                           // 0x6A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHSafeZone*                           PUMG_SafeZone_0;                                   // 0x6B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHUnsafeZone*                         PUMG_UnsafeZone_66;                                // 0x6B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Social_Search_Tab_C*              SearchPanel;                                       // 0x6C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Social_Header_Cosmetic_C*         WBP_Social_Header_Cosmetic;                        // 0x6C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class UWBP_subscreen_nav_tab_C*, class URHWidget*> NavButtons;                                        // 0x6D0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWBP_subscreen_nav_tab_C*              ActiveTabButton;                                   // 0x720(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        ContextMenuFocusGroup;                             // 0x728(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StatusContextMenuFocusGroup;                       // 0x72C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOpen;                                            // 0x730(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_381B[0x7];                                     // Fixing Size After Last Property  
	class UObject*                               ShowSocialOverlaySFX;                              // 0x738(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                               GamePadTabSocialOverlaySFX;                        // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Social_Overlay_C* GetDefaultObj();

	void OnFriendsScrolled(bool CallFunc_IsVisible_ReturnValue);
	void Toggle_Context_Menu_for_Player_Card(class URHWidget* KSWidget, class UWBP_player_card_module_C* K2Node_DynamicCast_AsWBP_Player_Card_Module, bool K2Node_DynamicCast_bSuccess, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void HandleStatusMenuHidden(int32 CallFunc_GetActiveWidgetIndex_ReturnValue);
	void HandleStatusMenuShown(class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget);
	void HandleStatusNavigationReady(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>& StatusButtons, class UWBP_PlayerStatus_ContextMenuOption_C* CallFunc_Array_Get_Item);
	void SetupHeader(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void SetTabIndex(int32 Index, TArray<class UWBP_subscreen_nav_tab_C*>& CallFunc_Map_Keys_Keys, class UWBP_subscreen_nav_tab_C* CallFunc_Array_Get_Item);
	void OnTabChange(class UWBP_subscreen_nav_tab_C* ActiveTabButton, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetActiveTabByWidget(class UWidget* Widget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_subscreen_nav_tab_C*>& CallFunc_Map_Keys_Keys, class UWBP_subscreen_nav_tab_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class URHWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	struct UMG_EventReply OnMouseButtonUp(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent, const struct UMG_EventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_IsVisible_ReturnValue, const struct UMG_EventReply& CallFunc_Handled_ReturnValue);
	void MoveTabBy(int32 Value, int32 CallFunc_GetNumWidgets_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue);
	void SetupNavTabs(class ARHHUDCommon* HUD, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class UWBP_subscreen_nav_tab_C*>& CallFunc_Map_Keys_Keys, class UWBP_subscreen_nav_tab_C* CallFunc_Array_Get_Item, TMap<class UWBP_subscreen_nav_tab_C*, class URHWidget*> K2Node_MakeMap_Map, class URHWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class URHSocialPanelBase* K2Node_DynamicCast_AsRHSocial_Panel_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	bool NavigateBack(int32 CallFunc_GetCurrentFocusGroup_OutFocusGroup, bool CallFunc_GetCurrentFocusGroup_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetCurrentFocusGroup_OutFocusGroup_1, bool CallFunc_GetCurrentFocusGroup_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_NavigateBack_ReturnValue);
	void ClosePanel(bool CallFunc_RemoveViewRoute_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnShown();
	void BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void StartShowSequence(class FName FromRoute, class FName ToRoute);
	void StartHideSequence(class FName FromRoute, class FName ToRoute);
	void UninitializeWidget();
	void OnPlayerCardClick(class URHWidget* PlayerCard);
	void OnInputStateChange(enum class ERH_INPUT_STATE InputState);
	void InitializeWidgetNavigation();
	void OnHide();
	void OnTabLeft();
	void OnTabRight();
	void OnToggleSocial();
	void OnViewStateChange(class FName CurrentRoute, class FName PreviousRoute, enum class EViewManagerLayer Layer);
	void OnToggleStatusMenu();
	void HandlePlayerInvitesChanged(class URHDataSocialCategory* Category, TArray<class URHDataSocialPlayer*>& Players);
	void BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_5_OnReadyForNavigation__DelegateSignature(TArray<class UWidget*>& NavWidgets, class UWidget* Default_Widget);
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_6_OnMenuStart__DelegateSignature(class UWidget* FocusWidget);
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature();
	void HandleNavTabSelected(class URHNavTabWidget* NavTab);
	void OnHeaderClicked(class URHWidget* Header);
	void OnCycleBumpers(bool bNext);
	void InitializeWidget();
	void ExecuteUbergraph_WBP_Social_Overlay(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class FName K2Node_Event_FromRoute_1, class FName K2Node_Event_ToRoute_1, class FName K2Node_Event_FromRoute, class FName K2Node_Event_ToRoute, class URHWidget* K2Node_CustomEvent_PlayerCard, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, TArray<class UWidget*>& CallFunc_GetFocusTargets_Target, class UWidget* CallFunc_GetFocusTarget_Target, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class FName K2Node_CustomEvent_CurrentRoute, class FName K2Node_CustomEvent_PreviousRoute, enum class EViewManagerLayer K2Node_CustomEvent_Layer, bool K2Node_SwitchEnum_CmpSuccess, class URHDataSocialCategory* K2Node_CustomEvent_Category, TArray<class URHDataSocialPlayer*>& K2Node_CustomEvent_Players, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NavigateBack_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class UWidget*>& K2Node_ComponentBoundEvent_NavWidgets, class UWidget* K2Node_ComponentBoundEvent_Default_Widget, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UWidget* K2Node_ComponentBoundEvent_FocusWidget, enum class ERH_INPUT_STATE Temp_byte_Variable_4, enum class ESlateVisibility K2Node_Select_Default, class URHNavTabWidget* K2Node_CustomEvent_NavTab, class UWBP_subscreen_nav_tab_C* K2Node_DynamicCast_AsWBP_Subscreen_Nav_Tab, bool K2Node_DynamicCast_bSuccess, class URHWidget* K2Node_CustomEvent_Header, class URHWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class URHViewManager* CallFunc_GetViewManager_ReturnValue, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct RallyHereStart_RHSocialOverlaySectionInfo& K2Node_MakeStruct_RHSocialOverlaySectionInfo, TArray<class FName>& K2Node_MakeArray_Array, class URHDataSocialCategory* CallFunc_GetCategory_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool K2Node_CustomEvent_bNext, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, class URHViewManager* CallFunc_GetViewManager_ReturnValue_1, class UObject* CallFunc_GetPendingRouteData_Data, bool CallFunc_GetPendingRouteData_ReturnValue, class URHInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_RemoveOverrideRoute_ReturnValue);
};

}


