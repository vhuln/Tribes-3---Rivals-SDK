#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0x669 - 0x5B0)
// WidgetBlueprintGeneratedClass WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C
class UWBP_ClassLoadoutGrid_C : public UValRHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                       AvailabilitySwitcher;                              // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ButtonGroup;                                       // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ButtonSwitcher;                                    // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ClassMax;                                          // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_Gold_C*                EquipButton;                                       // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Equipped;                                          // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_189;                                         // 0x5E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          LoadoutGroup;                                      // 0x5F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               OwnedLabel;                                        // 0x5F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            SectionGrid;                                       // 0x600(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Tooltip_Equipment_C*               UI_Tooltip_Equipment;                              // 0x608(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelWidget_C*                    WBP_PanelWidget;                                   // 0x610(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct GameplayTags_GameplayTag              CachedClass;                                       // 0x618(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClassSelectionConfirmed;                         // 0x620(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bLobbyDisplay;                                     // 0x630(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2481[0x7];                                     // Fixing Size After Last Property  
	TArray<class UWBP_ClassLoadoutOptionSection_C*> CachedSections;                                    // 0x638(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct Valhalla_ClassCountData>       CachedClassCount;                                  // 0x648(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct SlateCore_Margin                      GridPadding;                                       // 0x658(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         CachedInitialSelectionMade;                        // 0x668(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ClassLoadoutGrid_C* GetDefaultObj();

	void CacheSections(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ClassLoadoutOptionSection_C* K2Node_DynamicCast_AsWBP_Class_Loadout_Option_Section, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	void OnInitialized();
	void UpdateSelectionMade(bool CachedInitialSelectionMade);
	void UpdateEquipButtonEnabled(bool bEnabled, int32 CallFunc_SelectInt_ReturnValue);
	struct GameplayTags_GameplayTag GetSelectedClass(bool* Found, bool Temp_bool_Variable, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValPlayerState_Frontier* K2Node_DynamicCast_AsVal_Player_State_Frontier, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct GameplayTags_GameplayTag& CallFunc_GetQueuedLoadoutTag_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct GameplayTags_GameplayTag& CallFunc_GetCharacterClass_ReturnValue, const struct GameplayTags_GameplayTag& K2Node_Select_Default);
	bool UpdateAvailabilityForSelectedClass(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct Valhalla_ClassCountData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
	void UpdateClassCount(TArray<struct Valhalla_ClassCountData>& ClassCount);
	void GetInventoryManager(class AValInventoryManager** InventoryManager, bool* Valid, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateButtonState(bool LocalSelectedClass, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_2, const struct GameplayTags_GameplayTag& CallFunc_GetSelectedClass_ReturnValue, bool CallFunc_GetSelectedClass_Found, bool CallFunc_UpdateAvailabilityForSelectedClass_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_3, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
	void HandleOnOptionUnhovered();
	void HandleOnOptionHovered(class UWBP_LoadoutEntry_C* Widget, bool CallFunc_IsValid_ReturnValue);
	void BindSections(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_ClassLoadoutOptionSection_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void UpdateClass(const struct GameplayTags_GameplayTag& Class, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_ClassLoadoutOptionSection_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void BndEvt__WBP_ClassLoadoutGrid_EquipButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_ClassLoadoutGrid(int32 EntryPoint);
	void OnClassSelectionConfirmed__DelegateSignature(const struct GameplayTags_GameplayTag& Class);
};

}


