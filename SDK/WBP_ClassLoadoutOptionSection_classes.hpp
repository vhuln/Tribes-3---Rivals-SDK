#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x648 - 0x5B0)
// WidgetBlueprintGeneratedClass WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C
class UWBP_ClassLoadoutOptionSection_C : public UValRHWidget
{
public:
	class UTextBlock*                            EquipSlotLabel;                                    // 0x5B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     OptionsGrid;                                       // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     PlaceholderGrid;                                   // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct CoreUObject_Vector2D                  DefaultEntrySize;                                  // 0x5C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              DefaultEquipSlot;                                  // 0x5D8(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        DefaultGridWidth;                                  // 0x5E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         DefaultHorizontal;                                 // 0x5E4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_434[0x3];                                      // Fixing Size After Last Property  
	struct SlateCore_Margin                      DefaultGridPadding;                                // 0x5E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	int32                                        DefaultPlaceholders;                               // 0x5F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              CachedClass;                                       // 0x5FC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        CachedSlotId;                                      // 0x604(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_LoadoutEntry_C*>           CachedOptions;                                     // 0x608(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UWBP_LoadoutEntry_C*                   CachedSelected;                                    // 0x618(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValInventoryManager*                  CachedInvManager;                                  // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnOptionHovered;                                   // 0x628(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnOptionUnhovered;                                 // 0x638(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_ClassLoadoutOptionSection_C* GetDefaultObj();

	void GetInventoryManager(class AValInventoryManager** InventoryManager, bool* Valid, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue);
	void CreateOptionWidget(class UWBP_LoadoutEntry_C** Output, class UWBP_LoadoutEntry_C* OptionWidget, class UWBP_LoadoutEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetGridPositionAt_Row, int32 CallFunc_GetGridPositionAt_Column, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue);
	void OnInitialized(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_InventoryManager, bool CallFunc_GetInventoryManager_Valid);
	void PreConstruct(bool IsDesignTime);
	void HandleOnOptionUnhovered();
	void HandleOnOptionHovered(class UWBP_LoadoutEntry_C* Widget);
	void OnInventoryManagerReady(class AValInventoryManager* InventoryManager);
	void OnItemSelected(class UWBP_LoadoutEntry_C* Widget, class UValItemAsset* LocalSelectedItem, const struct GameplayTags_GameplayTag& CallFunc_GetEquipSlotBySlotId_EquipSlot, bool CallFunc_GetEquipSlotBySlotId_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValPlayerController_City* K2Node_DynamicCast_AsVal_Player_Controller_City, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UValPreviewManager* CallFunc_GetPreviewManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AValInventoryManager* CallFunc_GetInventoryManager_InventoryManager, bool CallFunc_GetInventoryManager_Valid, bool CallFunc_EquipClassSlotItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_4);
	void GetOptionWidgetAt(int32 Index, class UWBP_LoadoutEntry_C** Output, class UWBP_LoadoutEntry_C* CallFunc_CreateOptionWidget_Output, class UWBP_LoadoutEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void GetGridPositionAt(int32 Index, int32* Row, int32* Column, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1);
	void UpdateClassOptions(int32 NewLocalVar, class UValItemAsset* LocalEquippedAsset, class UWBP_LoadoutEntry_C* LocalOptionWidget, class UValItemAsset* LocalItemAsset, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWBP_LoadoutEntry_C* CallFunc_GetOptionWidgetAt_Output, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsGameplayTagValid_ReturnValue, class UWBP_LoadoutEntry_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TArray<class UValItemAsset*>& CallFunc_GetClassSlotOptions_OptionAssets, int32 CallFunc_GetSlotIdByEquipSlot_SlotId, bool CallFunc_GetSlotIdByEquipSlot_ReturnValue, class UValItemAsset* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Array_IsNotEmpty_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_InventoryManager, bool CallFunc_GetInventoryManager_Valid, bool CallFunc_IsGameplayTagValid_ReturnValue_1, class UValItemAsset* CallFunc_GetEquippedClassSlotItem_ItemAsset, bool CallFunc_GetEquippedClassSlotItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void UpdatePlaceholders(int32 Temp_int_Variable, class UWBP_LoadoutEntry_Placeholder_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetGridPositionAt_Row, int32 CallFunc_GetGridPositionAt_Column, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue);
	void UpdateEquipSlot(const struct GameplayTags_GameplayTag& EquipSlot, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetGameplayText_Text, bool CallFunc_GetGameplayText_ReturnValue, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateClass(const struct GameplayTags_GameplayTag& ClassTag);
	void OnOptionUnhovered__DelegateSignature();
	void OnOptionHovered__DelegateSignature(class UWBP_LoadoutEntry_C* Widget);
};

}


