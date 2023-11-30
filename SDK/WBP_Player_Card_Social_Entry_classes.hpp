#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x590 - 0x550)
// WidgetBlueprintGeneratedClass WBP_Player_Card_Social_Entry.WBP_Player_Card_Social_Entry_C
class UWBP_Player_Card_Social_Entry_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Social_Accordian_Header_C*        Header;                                            // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       MainSwitcher;                                      // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_player_card_module_C*             PlayerCard;                                        // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PlayerCardContainer;                               // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x578(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class URHDataSocialPlayer*                   CurrentData;                                       // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Player_Card_Social_Entry_C* GetDefaultObj();

	void OnRhPlayerInfoUpdated(class URH_RHFriendAndPlatformFriend* Friend);
	void SetCurrentInfoContainer(class UObject* InfoContainer, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class URHDataSocialPlayer* K2Node_DynamicCast_AsRHData_Social_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetHoverState(bool IsHovered);
	void GetDisplayItem(class URHWidget** ActiveDisplayItem, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void UpdateDataItem(class UObject* Data, class URHDataSocialPlayer* K2Node_DynamicCast_AsRHData_Social_Player, bool K2Node_DynamicCast_bSuccess, class URH_RHFriendAndPlatformFriend* CallFunc_GetFriend_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UListViewBase* CallFunc_GetOwningListView_ReturnValue, class URHTreeView* K2Node_DynamicCast_AsRHTree_View, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsItemExpanded_ReturnValue, class URHDataSocialCategory* K2Node_DynamicCast_AsRHData_Social_Category, bool K2Node_DynamicCast_bSuccess_2);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	void OnListItemObjectSet(class UObject* ListItemObject);
	void InitializeWidget();
	void UninitializeWidget();
	void OnHeaderClicked(class UUserWidget* Widget);
	void OnPlayerClicked(class UWBP_player_card_module_C* Selected_Player_Card);
	void OnMouseEnter(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent);
	void OnMouseLeave(struct SlateCore_PointerEvent& MouseEvent);
	void OnShown();
	void ExecuteUbergraph_WBP_Player_Card_Social_Entry(int32 EntryPoint, class UObject* K2Node_Event_ListItemObject, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_CustomEvent_Widget, TScriptInterface<class IUserListEntry> CallFunc_GetOwningListView_UserListEntry_CastInput, class UListViewBase* CallFunc_GetOwningListView_ReturnValue, bool CallFunc_GetIsExpanded_Expanded, class UTreeView* K2Node_DynamicCast_AsTree_View, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class URHDataSocialCategory* CallFunc_GetData_NewParam, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_player_card_module_C* K2Node_CustomEvent_Selected_Player_Card, const struct SlateCore_Geometry& K2Node_Event_MyGeometry, const struct SlateCore_PointerEvent& K2Node_Event_MouseEvent_1, const struct SlateCore_PointerEvent& K2Node_Event_MouseEvent, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void OnClicked__DelegateSignature(class UUserWidget* Item);
};

}


