#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x568 - 0x550)
// WidgetBlueprintGeneratedClass WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C
class UWBP_RegionSelectRedirect_C : public URHRegionSelectModal
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_RegionSelect_C*                   WBP_RegionSelect;                                  // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               ShowSFX;                                           // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RegionSelectRedirect_C* GetDefaultObj();

	void InitializeWidget();
	void Handle_Region_Selected();
	void Handle_Region_Select_Entries_Created();
	void InitializeWidgetNavigation();
	void OnShown();
	void ExecuteUbergraph_WBP_RegionSelectRedirect(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Remove_Top_View_Route_ViewChanged, TArray<class UWBP_RegionSelect_Entry_C*>& CallFunc_GetRegionSelectEntries_RegionSelectEntries, class UWBP_RegionSelect_Entry_C* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


