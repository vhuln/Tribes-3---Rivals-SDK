#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x560 - 0x550)
// WidgetBlueprintGeneratedClass WBP_RegionSelectModal.WBP_RegionSelectModal_C
class UWBP_RegionSelectModal_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_RegionSelect_C*                   WBP_RegionSelect;                                  // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RegionSelectModal_C* GetDefaultObj();

	void OnBackPressed(bool CallFunc_RemoveViewRoute_ReturnValue);
	void InitializeWidget();
	void BndEvt__WBP_RegionSelectModal_WBP_RegionSelect_K2Node_ComponentBoundEvent_0_OnRegionSelected__DelegateSignature();
	void BndEvt__WBP_RegionSelectModal_WBP_RegionSelect_K2Node_ComponentBoundEvent_1_PUMG_WidgetNavigatedBack__DelegateSignature();
	void Handle_Region_Select_Entries_Created();
	void Handle_Region_Selected();
	void InitializeWidgetNavigation();
	void OnBack();
	void ExecuteUbergraph_WBP_RegionSelectModal(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Remove_Top_View_Route_ViewChanged, TArray<class UWBP_RegionSelect_Entry_C*>& CallFunc_GetRegionSelectEntries_RegionSelectEntries, class UWBP_RegionSelect_Entry_C* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
};

}


