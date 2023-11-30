#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x618 - 0x5F0)
// WidgetBlueprintGeneratedClass WBP_Social_Search_Tab.WBP_Social_Search_Tab_C
class UWBP_Social_Search_Tab_C : public URHSocialSearchPanel
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x5F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URHTreeView*                           Results;                                           // 0x5F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Social_Search_bar_C*              SearchBar;                                         // 0x600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               LastSelectedItem;                                  // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                               ClickSocialSearchTabSFX;                           // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Social_Search_Tab_C* GetDefaultObj();

	void ClearListFocus(class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue_1);
	void TryRecoverLastKnownListFocus(class UObject* CallFunc_GetFirstVisibleItem_Item, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BP_IsItemVisible_ReturnValue);
	void GetFirstVisibleItem(class URHTreeView* List, class UObject** Item, int32 CallFunc_GetNumItems_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_BP_IsItemVisible_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	struct UMG_EventReply OnKeyUp(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent, const struct InputCore_Key& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct UMG_EventReply& CallFunc_Handled_ReturnValue, const struct UMG_EventReply& CallFunc_Unhandled_ReturnValue);
	void GetFocusTargets(TArray<class UWidget*>* Target, TArray<class UWidget*>& K2Node_MakeArray_Array);
	void ClearSearch();
	void HandlePlayerCardClicked(class UObject* Object, class UUserWidget* CallFunc_BP_GetEntryWidgetFromItem_OutWidget, bool CallFunc_BP_GetEntryWidgetFromItem_ReturnValue, class UWBP_Player_Card_Social_Entry_C* K2Node_DynamicCast_AsWBP_Player_Card_Social_Entry, bool K2Node_DynamicCast_bSuccess, class URHWidget* CallFunc_GetDisplayItem_ActiveDisplayItem, class UWBP_player_card_module_C* K2Node_DynamicCast_AsWBP_Player_Card_Module, bool K2Node_DynamicCast_bSuccess_1);
	void InitializeWidget();
	void UninitializeWidget();
	void OnHide();
	void BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void OnInputStateChange(enum class ERH_INPUT_STATE InputState);
	void InitializeWidgetNavigation();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature(class FText SearchTerm);
	void ExecuteUbergraph_WBP_Social_Search_Tab(int32 EntryPoint, class UObject* K2Node_ComponentBoundEvent_Item_1, class UObject* K2Node_ComponentBoundEvent_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, bool K2Node_SwitchEnum_CmpSuccess, class FText K2Node_ComponentBoundEvent_SearchTerm);
};

}


