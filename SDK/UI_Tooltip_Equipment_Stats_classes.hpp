#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x430 - 0x2F0)
// WidgetBlueprintGeneratedClass UI_Tooltip_Equipment_Stats.UI_Tooltip_Equipment_Stats_C
class UUI_Tooltip_Equipment_Stats_C : public UUIWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_199;                                         // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     Stats;                                             // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          TopLevelBox;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         CachedIsMelee;                                     // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2467[0x3];                                     // Fixing Size After Last Property  
	struct CoreUObject_LinearColor               TitleBackgroundColor;                              // 0x314(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowTitle;                                         // 0x324(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_247A[0x3];                                     // Fixing Size After Last Property  
	class UValItemAsset*                         CachedAsset;                                       // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_InventoryItem                CachedItem;                                        // 0x330(0xC8)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftClassPtr<class UGameplayEffect>         PlayerDefaultAttributesSoftClass;                  // 0x3F8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        PlayerHealth;                                      // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_24C1[0x4];                                     // Fixing Size After Last Property  
	class UClass*                                CachedPlayerDefaultAttributes;                     // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Tooltip_Equipment_Stats_C* GetDefaultObj();

	void UpdateItemFromAsset(class UValItemAsset* ItemAsset, bool* Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Update_Weapon_Stats_Value);
	void OnPlayerDefaultAttributesClassAvailable(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<struct GameplayAbilities_GameplayModifierInfo>& Temp_struct_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct GameplayAbilities_GameplayModifierInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_GameplayAttributeGameplayAttribute_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void GetModifiers(class UValItemAsset*& ItemAsset, TArray<struct GameplayAbilities_GameplayModifierInfo>* Modifiers, class UClass* LocalAbilityClass, TArray<struct GameplayAbilities_GameplayModifierInfo>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsVal_Gameplay_Ability, bool K2Node_ClassDynamicCast_bSuccess, const struct GameplayTags_GameplayTag& Temp_struct_Variable_1, TMap<struct GameplayTags_GameplayTag, struct Valhalla_ValGameplayEffectContainer> Temp_struct_Variable_2, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, const struct Valhalla_ValGameplayEffectContainer& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Update_Weapon_Stats(bool* Value, const TArray<class UWidget*>& LocalWidgets, const TArray<struct GameplayAbilities_GameplayModifierInfo>& LocalModifiers, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct GameplayAbilities_GameplayModifierInfo>& CallFunc_GetModifiers_Modifiers, bool CallFunc_MatchesTag_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUI_City_Armory_Details_Stat_C* K2Node_DynamicCast_AsUI_City_Armory_Details_Stat, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue);
	void UpdateEmpty();
	void UpdateItem(const struct Valhalla_InventoryItem& InventoryItem, bool* Value, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, bool CallFunc_UpdateItemFromAsset_Value);
	void OnLoaded_4EF913DA4B768FC8B2092D865BEC6FCC(TSubclassOf<class UObject> Loaded);
	void LoadPlayerDefaultAttributes();
	void ExecuteUbergraph_UI_Tooltip_Equipment_Stats(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsGameplay_Effect, bool K2Node_ClassDynamicCast_bSuccess);
};

}


