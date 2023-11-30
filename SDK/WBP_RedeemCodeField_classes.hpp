#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x580 - 0x550)
// WidgetBlueprintGeneratedClass WBP_RedeemCodeField.WBP_RedeemCodeField_C
class UWBP_RedeemCodeField_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                      CodeEntry;                                         // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x560(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x570(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_RedeemCodeField_C* GetDefaultObj();

	void SetText(class FText Text);
	void GetText(class FText* NewParam, class FText CallFunc_GetText_ReturnValue);
	bool NavigateConfirm();
	void Set_Up_Keyboard_Focus();
	void BndEvt__CodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__CodeEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void ExecuteUbergraph_WBP_RedeemCodeField(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class FText K2Node_ComponentBoundEvent_Text_1);
	void OnTextCommitted__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void OnTextChanged__DelegateSignature(class FText& Text);
};

}


