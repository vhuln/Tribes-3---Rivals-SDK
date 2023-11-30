#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x650 - 0x5B0)
// WidgetBlueprintGeneratedClass UI_Lobby_LoadoutCustomization.UI_Lobby_LoadoutCustomization_C
class UUI_Lobby_LoadoutCustomization_C : public UValRHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        ClassOptions;                                      // 0x5B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Shared_Preview_Rotator_C*          Rotator;                                           // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ClassButton_C*                    WBP_ClassButton;                                   // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ClassButton_C*                    WBP_ClassButton_1;                                 // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ClassButton_C*                    WBP_ClassButton_2;                                 // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ClassLoadoutGrid_C*               WBP_ClassLoadoutGrid;                              // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UValPreviewManager*                    CachedPreviewManager;                              // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_ClassButton_C*                    CachedSelectedClassEntry;                          // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                          CachedCamera;                                      // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<struct GameplayTags_GameplayTag, class UWBP_ClassButton_C*> ButtonMap;                                         // 0x600(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UUI_Lobby_LoadoutCustomization_C* GetDefaultObj();

	void HandleBackPressed(bool CallFunc_RemoveViewRoute_ReturnValue);
	void Get_Preview_Manager(class UValPreviewManager** PreviewManager, bool* Valid, bool CallFunc_IsValid_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValPlayerController_City* K2Node_DynamicCast_AsVal_Player_Controller_City, bool K2Node_DynamicCast_bSuccess, class UValPreviewManager* CallFunc_GetPreviewManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateArmoryPreview(class UValPreviewManager* CallFunc_Get_Preview_Manager_PreviewManager, bool CallFunc_Get_Preview_Manager_Valid);
	void UpdateCamera(class FName VendorCameraTag, class FName ArmoryCameraTag, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ACameraActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void OnClassOptionSelected(class UWBP_ClassButton_C* OptionWidget, class UValPreviewManager* CallFunc_Get_Preview_Manager_PreviewManager, bool CallFunc_Get_Preview_Manager_Valid, bool CallFunc_IsValid_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class UValLoadoutConfig* CallFunc_GetLoadoutConfig_ReturnValue, class UValLoadoutAsset* CallFunc_GetLoadoutAssetByTypeAndClass_OutLoadoutAsset, bool CallFunc_GetLoadoutAssetByTypeAndClass_ReturnValue, int32 CallFunc_GetSlotIdByEquipSlot_SlotId, bool CallFunc_GetSlotIdByEquipSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValItemAsset* CallFunc_GetEquippedClassSlotItem_ItemAsset, bool CallFunc_GetEquippedClassSlotItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void CreateClassButtons(const struct GameplayTags_GameplayTag& EquippedClass, TArray<class UWBP_ClassButton_C*>& CallFunc_Map_Values_Values, int32 Temp_int_Array_Index_Variable, class UWBP_ClassButton_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWBP_ClassButton_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable, class UWBP_ClassButton_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct GameplayTags_GameplayTag>& CallFunc_GetCharacterClasses_CharacterClasses, const struct GameplayTags_GameplayTag& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetCharacterClass_ReturnValue);
	void OnInitialized();
	void OnShown();
	void OnHide();
	void InitializeWidget();
	void OnClassSelectionConfirmed(const struct GameplayTags_GameplayTag& Class);
	void ExecuteUbergraph_UI_Lobby_LoadoutCustomization(int32 EntryPoint, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class FName>& K2Node_MakeArray_Array, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Class, bool CallFunc_IsGameplayTagValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
};

}


