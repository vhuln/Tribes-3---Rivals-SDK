#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x5E8 - 0x550)
// WidgetBlueprintGeneratedClass PopupButton.PopupButton_C
class UPopupButton_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              ButtonCallout;                                     // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ButtonCalloutImage;                                // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DisplayTextBlock;                                  // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButton_02_C*              WBP_StandardButton_02;                             // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonText;                                        // 0x578(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct CoreUObject_LinearColor               ButtonColor;                                       // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index;                                             // 0x5A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2598[0x4];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x5A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnNavigateBackAction;                              // 0x5B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         CapturesNavBack;                                   // 0x5C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         DisableClickSound;                                 // 0x5C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_25A0[0x6];                                     // Fixing Size After Last Property  
	class UObject*                               NavBackPopupBtnSFX;                                // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                               ClickPopupBtnSFX;                                  // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                               HoverPopupBtnSFX;                                  // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPopupButton_C* GetDefaultObj();

	bool NavigateBack(bool CallFunc_NavigateBack_ReturnValue);
	void ToggleGamepadCallout(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void SetDisplayText(class FText InText);
	void SetButtonCalloutImage(class FName InActionName, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon);
	void SetFontSize(int32 In_Font_Size, double CallFunc_Conv_IntToDouble_ReturnValue, const struct SlateCore_SlateFontInfo& K2Node_MakeStruct_SlateFontInfo, float K2Node_MakeStruct_Size_ImplicitCast);
	bool NavigateConfirm(bool CallFunc_GetIsEnabled_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void GamepadPress();
	void OnNavBack();
	void Construct();
	void BndEvt__PopupButton_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWidget* Widget);
	void ExecuteUbergraph_PopupButton(int32 EntryPoint, class UWidget* K2Node_ComponentBoundEvent_Widget, bool K2Node_Event_IsDesignTime, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo);
	void OnNavigateBackAction__DelegateSignature();
	void OnClicked__DelegateSignature(int32 Index);
};

}


