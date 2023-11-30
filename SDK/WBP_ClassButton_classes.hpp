#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x648 - 0x550)
// WidgetBlueprintGeneratedClass WBP_ClassButton.WBP_ClassButton_C
class UWBP_ClassButton_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimOnMouseDown;                                   // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      AnimOnHover;                                       // 0x560(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ClassIcon;                                         // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ClassNameWidget;                                   // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SlotsRemaining;                                    // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Menu_C*                     UI_Button_Menu;                                    // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnItemClicked;                                     // 0x588(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bCachedIsUpdated;                                  // 0x598(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2836[0x7];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnItemHovered;                                     // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnItemUnhovered;                                   // 0x5B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnGamepadConfirm;                                  // 0x5C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  ClassName;                                         // 0x5D0(0x18)(Edit, BlueprintVisible)
	struct GameplayTags_GameplayTag              DefaultClassTag;                                   // 0x5E8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        Current_Count;                                     // 0x5F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Max_Count;                                         // 0x5F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct GameplayTags_GameplayTag, class UTexture2D*> IconMap;                                           // 0x5F8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_ClassButton_C* GetDefaultObj();

	void UpdateSelectedClass(const struct GameplayTags_GameplayTag& SelectedClass, bool CallFunc_EqualEqual_GameplayTag_ReturnValue);
	void IsSpotAvailable(bool* Available, bool CallFunc_Less_IntInt_ReturnValue);
	void Initialize(const struct GameplayTags_GameplayTag& ClassTag, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class UValLoadoutConfig* CallFunc_GetLoadoutConfig_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValLoadoutAsset* CallFunc_GetLoadoutAssetByTypeAndClass_OutLoadoutAsset, bool CallFunc_GetLoadoutAssetByTypeAndClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	bool NavigateConfirm(enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void UpdateIsSelected(bool Value);
	void UpdateClassData(int32 CurrentCount, int32 MaxCount, bool CallFunc_Less_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue);
	void UpdateClassIcon(struct GameplayTags_GameplayTag& Tag, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void UpdateName(class FText ClassText, class FText CallFunc_TextToUpper_ReturnValue);
	void InitializeWidget();
	void GamepadHover();
	void OnInitialized();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_ClassButton_UI_Button_Menu_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_ClassButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
	void OnGamepadConfirm__DelegateSignature(class UWBP_ClassButton_C* Widget);
	void OnItemUnhovered__DelegateSignature();
	void OnItemHovered__DelegateSignature(const struct GameplayTags_GameplayTag& EquipSlot, const struct Valhalla_InventoryItem& InventoryItem);
	void OnItemClicked__DelegateSignature(class UWBP_ClassButton_C* OptionWidget);
};

}


