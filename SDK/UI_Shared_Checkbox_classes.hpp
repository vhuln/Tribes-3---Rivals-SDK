#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4D (0x33D - 0x2F0)
// WidgetBlueprintGeneratedClass UI_Shared_Checkbox.UI_Shared_Checkbox_C
class UUI_Shared_Checkbox_C : public UUIWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            BoxText;                                           // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             CheckBox;                                          // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  DefaultBoxText;                                    // 0x308(0x18)(Edit, BlueprintVisible)
	bool                                         bDefaultChecked;                                   // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_935[0x7];                                      // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnCheckStateChanged;                               // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        DefaultTextSize;                                   // 0x338(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IgnoreDefaultChecked;                              // 0x33C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Shared_Checkbox_C* GetDefaultObj();

	void IsChecked(bool* Checked, bool CallFunc_IsChecked_ReturnValue);
	void ChangeChecked(bool bChecked);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__UI_Shared_Checkbox_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void ForceClick();
	void ExecuteUbergraph_UI_Shared_Checkbox(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_ComponentBoundEvent_bIsChecked, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, float K2Node_SetFieldsInStruct_Size_ImplicitCast);
	void OnCheckStateChanged__DelegateSignature(bool Checked);
};

}


