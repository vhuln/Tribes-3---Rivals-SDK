#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A (0x2EA - 0x2C0)
// WidgetBlueprintGeneratedClass UI_Tooltip_Equipment_Comparison.UI_Tooltip_Equipment_Comparison_C
class UUI_Tooltip_Equipment_Comparison_C : public UUserWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      NewAnimation;                                      // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          ComparisonCanvas;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Tooltip_Equipment_C*               ComparisonTooltip;                                 // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Tooltip_Equipment_C*               ItemTooltip;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EMenuPlacement                    CachedPlacement;                                   // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         HideCompare;                                       // 0x2E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Tooltip_Equipment_Comparison_C* GetDefaultObj();

	void SetSellPrice(const struct Valhalla_ShopItemPrice& Price);
	void UpdateComparisonPlacement(enum class EMenuPlacement Placement, const struct CoreUObject_Vector2D& Temp_struct_Variable, bool Temp_bool_Variable, const struct CoreUObject_Vector2D& Temp_struct_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, const struct Slate_Anchors& K2Node_MakeStruct_Anchors, const struct Slate_Anchors& K2Node_MakeStruct_Anchors_1, const struct CoreUObject_Vector2D& K2Node_Select_Default, const struct Slate_Anchors& K2Node_Select_Default_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1);
	void UpdateFromAsset(class UValItemAsset* Asset);
	void UpdateDisplay(bool Value);
	void CanCompare(const struct GameplayTags_GameplayTag& EquipSlot, bool* CanEquipSlotCompare, const struct GameplayTags_GameplayTagContainer& AllowedSlots, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateItem(const struct Valhalla_InventoryItem& Item, bool Disallow_Unequip, bool IsEquippedItem, class AValInventoryManager* LocalInventoryManager, bool CallFunc_Not_PreBool_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, int32 CallFunc_GetSlotIdByEquipSlot_SlotId, bool CallFunc_GetSlotIdByEquipSlot_ReturnValue, const struct Valhalla_InventorySlot& CallFunc_GetEquippedSlotAt_EquippedSlot, bool CallFunc_GetEquippedSlotAt_ReturnValue, bool CallFunc_CanCompare_CanEquipSlotCompare);
	void Construct();
	void ExecuteUbergraph_UI_Tooltip_Equipment_Comparison(int32 EntryPoint);
};

}


