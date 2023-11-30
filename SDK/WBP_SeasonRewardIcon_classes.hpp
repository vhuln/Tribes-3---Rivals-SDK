#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x370 - 0x2C0)
// WidgetBlueprintGeneratedClass WBP_SeasonRewardIcon.WBP_SeasonRewardIcon_C
class UWBP_SeasonRewardIcon_C : public UUserWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Loadout_Ability_C*                 TooltipPreviewItem;                                // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Equipment_Item_C*                  UI_Equipment_Item;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_2;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UValItemAsset*                         CachedItemAsset;                                   // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_ExperienceLevelRewardItem    CachedReward;                                      // 0x2E8(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class ELevelRewardType, TSoftObjectPtr<class UTexture2D>> RandomRewardIconMap;                               // 0x320(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_SeasonRewardIcon_C* GetDefaultObj();

	void SetRandomRewardDisplay(TSoftObjectPtr<class UTexture2D> LocalTexture, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateData(const struct Valhalla_ExperienceLevelRewardItem& CachedReward);
	void UpdateItemAsset(class UValItemAsset* ItemAsset, const TArray<struct GameplayTags_GameplayTag>& LocalTags, TArray<struct GameplayTags_GameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, TArray<struct GameplayTags_GameplayTag>& K2Node_MakeArray_Array, const struct GameplayTags_GameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, TArray<struct GameplayTags_GameplayTag>& K2Node_MakeArray_Array_1, const struct GameplayTags_GameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1, bool CallFunc_HasAnyTags_ReturnValue);
	void OnLoaded_1C0F454B48525EC3BDA1BD8AFB68FCDE(class UObject* Loaded);
	void LoadItemAssetAsync(TSoftObjectPtr<class UObject> Asset);
	void ExecuteUbergraph_WBP_SeasonRewardIcon(int32 EntryPoint, TSoftObjectPtr<class UObject> K2Node_CustomEvent_Asset, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UValItemAsset* K2Node_DynamicCast_AsVal_Item_Asset, bool K2Node_DynamicCast_bSuccess);
};

}


