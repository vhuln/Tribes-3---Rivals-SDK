#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE9 (0x639 - 0x550)
// WidgetBlueprintGeneratedClass Dropdown.Dropdown_C
class UDropdown_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      MobileLayout;                                      // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      HoverAnim;                                         // 0x560(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                DropArrow;                                         // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuAnchor*                           DropdownAnchor;                                    // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DropDownBkg;                                       // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                     GamepadPrompt;                                     // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          GamepadPromptContainer;                            // 0x588(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HitTarget;                                         // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SelectionText;                                     // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FText>                          Options;                                           // 0x5B0(0x10)(Edit, BlueprintVisible)
	class FText                                  DefaultSelection;                                  // 0x5C0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        HoverIndex;                                        // 0x5D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectionIndex;                                    // 0x5DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  HintText;                                          // 0x5E0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IgnoreFirst;                                       // 0x5F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IgnoreCanceled;                                    // 0x5F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20B9[0x6];                                     // Fixing Size After Last Property  
	class UDropdownList_C*                       DropdownList;                                      // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               ClickDropdownSFX;                                  // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                               HoverDropdownSFX;                                  // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnHoverPreview;                                    // 0x618(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSelectionCanceled;                               // 0x628(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         KeyPromptSet;                                      // 0x638(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDropdown_C* GetDefaultObj();

	bool NavigateConfirm(bool CallFunc_NavigateConfirm_ReturnValue);
	void SetKeyPrompt(const struct InputCore_Key& KeyPrompt, bool CallFunc_Key_IsValid_ReturnValue);
	void UpdateGamepadPromptVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void OnInputStateChanged(uint8 InputState);
	void IsSelecting(bool* IsSelecting, bool CallFunc_IsOpen_ReturnValue);
	void AppendOptions(TArray<class FText>& OptionsToAppend);
	void ForceClose();
	void ForceToggle(class UWidget* CallFunc_SetFocusToThis_ReturnValue, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsOpen_ReturnValue);
	void ForceOpen();
	class UWidget* InitializeDropdownList(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UDropdownList_C* CallFunc_Create_ReturnValue);
	void SetSelectedOptionByIndex(int32 Index, bool* Success, class FText CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void SetSelectedOptionByText(class FText Text, bool* Success, int32 Scratch, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_SetSelectedOptionByIndex_Success, int32 CallFunc_Array_Find_ReturnValue);
	void RemoveOptionByIndex(int32 Index, bool* Success, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void RemoveOptionByText(class FText Option, bool* Success, bool CallFunc_Array_RemoveItem_ReturnValue);
	void GetSelectedOption(class FText* Selection, int32* Index, class FText CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void GetOptionCount(int32* Count, int32 CallFunc_Array_Length_ReturnValue);
	void FindIndexForOption(class FText Option, bool* Success, int32* Index, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void FindOptionByIndex(int32 Index, bool* Success, class FText* Option, bool CallFunc_Array_IsValidIndex_ReturnValue, class FText CallFunc_Array_Get_Item);
	void ClearSelection();
	void ClearOptions();
	void AddOption(class FText OptionText, int32 CallFunc_Array_Add_ReturnValue);
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void SelectionMade(int32 Index, class FText Selection);
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void SelectionCancel();
	void BndEvt__DropdownAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void HandleSetCurrentHoverIndex(int32 CurrentHoverIndex);
	void GamepadHover();
	void GamepadUnhover();
	void On_Selected();
	void Hover();
	void Unhover();
	void HoverPreview(int32 Index);
	void InitializeWidget();
	void ExecuteUbergraph_Dropdown(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsOpen, int32 K2Node_CustomEvent_CurrentHoverIndex, int32 K2Node_CustomEvent_Index_1, class FText K2Node_CustomEvent_Selection, bool CallFunc_SetSelectedOptionByIndex_Success, bool CallFunc_SetSelectedOptionByIndex_Success_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 K2Node_CustomEvent_Index, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue);
	void OnSelectionCanceled__DelegateSignature();
	void OnHoverPreview__DelegateSignature(int32 Index);
	void OnSelectionChanged__DelegateSignature(class FText SelectionText, int32 SelectionIndex);
};

}


