#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x134 (0x6E4 - 0x5B0)
// WidgetBlueprintGeneratedClass UI_Tooltip_Equipment.UI_Tooltip_Equipment_C
class UUI_Tooltip_Equipment_C : public UValRHWidget
{
public:
	class UWidgetAnimation*                      AnimOnShown;                                       // 0x5B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            DescText;                                          // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider;                                           // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Tooltip_Equipment_Stats_C*         StatsDisplay;                                      // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StatsGroup;                                        // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StatsList;                                         // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_City_ItemHeader_C*                 UI_City_ItemHeader;                                // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelWidget_C*                    WBP_PanelWidget;                                   // 0x5E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct Valhalla_InventoryItem                CachedItem;                                        // 0x5F0(0xC8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UValItemAsset*                         CachedAsset;                                       // 0x6B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnEquipped;                                        // 0x6C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct Engine_TimerHandle                    CachedTimer;                                       // 0x6D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         CachedDisplay;                                     // 0x6D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_320E[0x3];                                     // Fixing Size After Last Property  
	struct GameplayTags_GameplayTag              EquippedClass;                                     // 0x6DC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Tooltip_Equipment_C* GetDefaultObj();

	void UpdateAttributeData(bool* Value, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_Tooltip_Equipment_PlayerAttribute_C* CallFunc_Create_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct Valhalla_PlayerAttributeData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateRarityExplicit(enum class ERarity Rarity);
	void UpdateQuantityExplicit(int32 Value);
	void IsWeaponType(bool* Value, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void IsAmmoType(bool* Value, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct GameplayTags_GameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, int32 CallFunc_Array_Length_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_MatchesTag_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void GetRarity(enum class ERarity* Rarity, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void Tick(const struct SlateCore_Geometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void UpdateFromAsset(class UValItemAsset* ItemAsset, bool CallFunc_UpdateStats_Value, enum class ERarity CallFunc_GetRarity_Rarity, bool CallFunc_IsValid_ReturnValue);
	void UpdateDisplay(bool Value, double CallFunc_SelectFloat_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void UpdateStats(bool* Value, bool CallFunc_UpdateItemFromAsset_Value);
	void UpdateItem(const struct Valhalla_InventoryItem& InventoryItem, bool bDisallowUnequip, bool IsEquipped, const class FString& Temp_string_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable, const class FString& Temp_string_Variable_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_UpdateAttributeData_Value, bool Temp_bool_Variable_1, enum class ERarity CallFunc_GetRarity_Rarity, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, const class FString& K2Node_Select_Default, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasTag_ReturnValue, class FText K2Node_Select_Default_1, bool CallFunc_UpdateStats_Value);
	void OnEquipped__DelegateSignature(int32 Index);
};

}


