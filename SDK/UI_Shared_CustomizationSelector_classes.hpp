#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x618 - 0x550)
// WidgetBlueprintGeneratedClass UI_Shared_CustomizationSelector.UI_Shared_CustomizationSelector_C
class UUI_Shared_CustomizationSelector_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimOnMouseDown;                                   // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimOnHover;                                       // 0x560(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            AvailableCount;                                    // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider;                                           // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            EquippedItemName;                                  // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Gradient;                                          // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Highlight;                                         // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HitTarget;                                         // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OuterStroke;                                       // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Pressed;                                           // 0x5A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                         SlotType_Image;                                    // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SlotType_Text;                                     // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SlotTypeGroup;                                     // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       SlotTypeSwitcher;                                  // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Stroke;                                            // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CallToAction_C*                   WBP_CallToAction;                                  // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            WeaponName;                                        // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URHAsyncImage*                         WrapIcon;                                          // 0x5E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              DefaultSlot;                                       // 0x5F0(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnItemClicked;                                     // 0x5F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnItemHovered;                                     // 0x608(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUI_Shared_CustomizationSelector_C* GetDefaultObj();

	bool NavigateConfirm();
	void UpdateSlotTypeDisplay(bool IsWeapon, int32 CallFunc_SelectInt_ReturnValue, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue, class FText CallFunc_GetGameplayText_Text, bool CallFunc_GetGameplayText_ReturnValue, bool CallFunc_MatchesTag_ReturnValue);
	void UpdateWeaponSlotIcon(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, class AValGameState* CallFunc_GetGameState_ReturnValue, class AValGameState_Lobby* K2Node_DynamicCast_AsVal_Game_State_Lobby, bool K2Node_DynamicCast_bSuccess, TArray<struct Valhalla_WeaponCosmeticConfig>& CallFunc_GetWeaponCosmeticConfigs_WeaponCosmeticConfigs, int32 CallFunc_Array_Length_ReturnValue, const struct Valhalla_WeaponCosmeticConfig& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UValItemAsset* K2Node_DynamicCast_AsVal_Item_Asset, bool K2Node_DynamicCast_bSuccess_1);
	void UpdateShowCTA(bool Value);
	void UpdateDisplay(class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_1, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_2, int32 CallFunc_GetSlotIdByEquipSlot_SlotId, bool CallFunc_GetSlotIdByEquipSlot_ReturnValue, const struct Valhalla_InventorySlot& CallFunc_GetEquippedSlotAt_EquippedSlot, bool CallFunc_GetEquippedSlotAt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default, class FText CallFunc_TextToUpper_ReturnValue);
	void UpdateData(class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, TArray<struct Valhalla_InventoryItem>& CallFunc_GetCosmeticItemsForEquipSlot_InventoryItems, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__UI_Shared_CustomizationSelector_HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void EventItemClicked();
	void ExecuteUbergraph_UI_Shared_CustomizationSelector(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void OnItemHovered__DelegateSignature(class UUI_Shared_CustomizationSelector_C* Widget);
	void OnItemClicked__DelegateSignature(const struct GameplayTags_GameplayTag& EquipSlot, class UUI_Shared_CustomizationSelector_C* Widget);
};

}


