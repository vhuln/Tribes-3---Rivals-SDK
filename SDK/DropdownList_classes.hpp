#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x5D0 - 0x550)
// WidgetBlueprintGeneratedClass DropdownList.DropdownList_C
class UDropdownList_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               ClickBlocker;                                      // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            DropdownScroll;                                    // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                          Options;                                           // 0x570(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnSelection;                                       // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnCancel;                                          // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UDropdownEntry_C*>              DropdownEntries;                                   // 0x5A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UDropdownEntry_C*                      SelectedEntry;                                     // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       SizeBoxMaxHeight;                                  // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnHoverPreview;                                    // 0x5C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UDropdownList_C* GetDefaultObj();

	bool NavigateBack();
	void InitializeWidget();
	void Selection(int32 Index, class FText Text);
	void InitializeWidgetNavigation();
	void HandleOnHover(class UWidget* Widget, int32 Index);
	void SetSelectedEntryByIndex(int32 Index);
	void BndEvt__Button_123_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_DropdownList(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 K2Node_CustomEvent_Index_2, class FText K2Node_CustomEvent_Text, class FText CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDropdownEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess, class UDropdownEntry_C* CallFunc_Array_Get_Item_1, class UWidget* K2Node_CustomEvent_Widget, int32 K2Node_CustomEvent_Index_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_Index, class UDropdownEntry_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_SetMaxDesiredHeight_InMaxDesiredHeight_ImplicitCast);
	void OnHoverPreview__DelegateSignature(int32 Index);
	void OnCancel__DelegateSignature();
	void OnSelection__DelegateSignature(int32 Index, class FText Text);
};

}


