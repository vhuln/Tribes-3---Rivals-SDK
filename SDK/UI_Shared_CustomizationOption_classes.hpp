#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A8 (0x6F8 - 0x550)
// WidgetBlueprintGeneratedClass UI_Shared_CustomizationOption.UI_Shared_CustomizationOption_C
class UUI_Shared_CustomizationOption_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimOnMouseDown;                                   // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimOnHover;                                       // 0x560(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Equipped;                                          // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            EquippedItemName;                                  // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            EquippedItemName_Selected;                         // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Gradient;                                          // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Highlight;                                         // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HitTarget;                                         // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OuterStroke;                                       // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Pressed;                                           // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Selected;                                          // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Selected_Background;                               // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Stroke;                                            // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CallToAction_C*                   WBP_CallToAction;                                  // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                         WrapIcon;                                          // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              CachedEquipSlot;                                   // 0x5D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct Valhalla_InventoryItem                CachedInventoryItem;                               // 0x5E0(0xC8)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnItemClicked;                                     // 0x6A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bCachedIsUpdated;                                  // 0x6B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_239D[0x7];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnItemHovered;                                     // 0x6C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnItemUnhovered;                                   // 0x6D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UValLoadoutDefinition*                 DefaultDefinition;                                 // 0x6E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnGamepadConfirm;                                  // 0x6E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUI_Shared_CustomizationOption_C* GetDefaultObj();

	bool NavigateConfirm(enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateIsSelected(bool Value);
	void GetIconTexture(TSoftObjectPtr<class UTexture2D>* Texture, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_1, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset_1, bool CallFunc_GetItemAssetById_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void IsEquipped(bool* Value, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct Valhalla_InventorySlot& CallFunc_GetEquippedSlotAt_EquippedSlot, bool CallFunc_GetEquippedSlotAt_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue);
	void IsWeapon(bool* Value, bool CallFunc_MatchesTag_ReturnValue);
	void UpdateWeaponSlotIcon();
	void UpdateShowCTA(bool Value);
	void UpdateName(class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1);
	void UpdateData(const struct GameplayTags_GameplayTag& EquipSlot, const struct Valhalla_InventoryItem& InventoryItem, bool CallFunc_IsEquipped_Value);
	void UpdateIcon(TSoftObjectPtr<class UTexture2D> CallFunc_GetIconTexture_Texture, bool CallFunc_IsWeapon_Value);
	void BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void GamepadHover();
	void ExecuteUbergraph_UI_Shared_CustomizationOption(int32 EntryPoint, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void OnGamepadConfirm__DelegateSignature(class UUI_Shared_CustomizationOption_C* Widget);
	void OnItemUnhovered__DelegateSignature();
	void OnItemHovered__DelegateSignature(const struct GameplayTags_GameplayTag& EquipSlot, const struct Valhalla_InventoryItem& InventoryItem);
	void OnItemClicked__DelegateSignature(class UUI_Shared_CustomizationOption_C* OptionWidget);
};

}


