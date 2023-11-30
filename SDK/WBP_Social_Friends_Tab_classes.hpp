#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x5F0 - 0x5C8)
// WidgetBlueprintGeneratedClass WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C
class UWBP_Social_Friends_Tab_C : public URHSocialFriendsPanel
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x5C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URHTreeView*                           PlayerList;                                        // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               ClickSocialFriendsSFX;                             // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnPlayerListScrolled;                              // 0x5E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_Social_Friends_Tab_C* GetDefaultObj();

	void FocusFirstItem(TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue);
	void TryGetFirstItemForCategory(enum class ERHSocialOverlaySection Category, class UObject** Output, const struct RallyHereStart_RHSocialOverlaySectionInfo& K2Node_MakeStruct_RHSocialOverlaySectionInfo, class URHSocialOverlay* CallFunc_GetDataSource_ReturnValue, class URHDataSocialCategory* CallFunc_GetCategory_ReturnValue, int32 CallFunc_Num_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class URHDataSocialPlayer*>& CallFunc_GetPlayerList_ReturnValue, class URHDataSocialPlayer* CallFunc_Array_Get_Item);
	void FindFirstOnlinePlayerOrDefault(class UObject** Item, class UObject* CallFunc_TryGetFirstItemForCategory_Output, class UObject* CallFunc_TryGetFirstItemForCategory_Output_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTreeView* CallFunc_GetTreeView_ReturnValue, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item);
	void FocusFirstOnlinePlayer(class UObject* CallFunc_FindFirstOnlinePlayerOrDefault_Item);
	struct UMG_EventReply OnFocusReceived(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_FocusEvent& InFocusEvent, const struct UMG_EventReply& CallFunc_Handled_ReturnValue, const struct UMG_EventReply& CallFunc_OnFocusReceived_ReturnValue);
	void HandleItemClicked(class UObject* Item, class UUserWidget* CallFunc_BP_GetEntryWidgetFromItem_OutWidget, bool CallFunc_BP_GetEntryWidgetFromItem_ReturnValue, class UWBP_Player_Card_Social_Entry_C* K2Node_DynamicCast_AsWBP_Player_Card_Social_Entry, bool K2Node_DynamicCast_bSuccess, class URHWidget* CallFunc_GetDisplayItem_ActiveDisplayItem, class UWBP_player_card_module_C* K2Node_DynamicCast_AsWBP_Player_Card_Module, bool K2Node_DynamicCast_bSuccess_1, class UWBP_Social_Accordian_Header_C* K2Node_DynamicCast_AsWBP_Social_Accordian_Header, bool K2Node_DynamicCast_bSuccess_2);
	bool NavigateConfirm(bool CallFunc_NavigateConfirm_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class URH_PlayerInfo* K2Node_DynamicCast_AsRH_Player_Info, bool K2Node_DynamicCast_bSuccess, class URHDataSocialCategory* K2Node_DynamicCast_AsRHData_Social_Category, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsItemExpanded_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GetFocusTarget(class UWidget** Target);
	void InitializeWidget();
	void UninitializeWidget();
	void OnShown();
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void OnInputStateChanged(enum class ERH_INPUT_STATE InputState);
	void InitializeWidgetNavigation();
	void OnItemScrolledIntoView(class UObject* Item, class UUserWidget* Widget);
	void ExecuteUbergraph_WBP_Social_Friends_Tab(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* K2Node_CustomEvent_Item, class UUserWidget* K2Node_CustomEvent_Widget);
	void OnPlayerListScrolled__DelegateSignature();
};

}


