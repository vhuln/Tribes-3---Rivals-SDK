#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB2 (0x602 - 0x550)
// WidgetBlueprintGeneratedClass WBP_StandardButtonMedium.WBP_StandardButtonMedium_C
class UWBP_StandardButtonMedium_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ButtonText;                                        // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                     KeyPrompt;                                         // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          KeyPromptContainer;                                // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeWrapper;                                       // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButton_02_C*              WBP_StandardButton_02;                             // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UObject*                               ClickMedBtnSFX;                                    // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  DefaultButtonText;                                 // 0x5B8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	double                                       DefaultWidth;                                      // 0x5D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowPromptOnFocus;                                 // 0x5D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3BC1[0x7];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         PromptKey;                                         // 0x5E0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                               HoverMedBtnSFX;                                    // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsConfirm;                                         // 0x600(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsCancel;                                          // 0x601(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_StandardButtonMedium_C* GetDefaultObj();

	void GetGamepadPromptKey(bool* HasValidKeyPrompt, struct InputCore_Key* GamepadKey, const struct InputCore_Key& NoneKey, const struct InputCore_Key& CallFunc_GetGamepadCancelButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue);
	void SetKeyPrompt(const struct InputCore_Key& GamepadButton);
	void SetDefaultDisplay(const struct Slate_Anchors& K2Node_MakeStruct_Anchors, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo, const struct Slate_Anchors& K2Node_MakeStruct_Anchors_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void SetWidth(double InWidth, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast);
	void SetButtonText(class FText ButtonText);
	bool NavigateConfirm();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void GamepadHover();
	void GamepadUnhover();
	void GamepadConfirm();
	void Do_Hover();
	void Do_Unhover();
	void InitializeWidget();
	void HandleInputStateChanged(enum class ERH_INPUT_STATE InputState);
	void OnInitialized();
	void BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWidget* Widget);
	void ExecuteUbergraph_WBP_StandardButtonMedium(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable_1, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetGamepadPromptKey_HasValidKeyPrompt, const struct InputCore_Key& CallFunc_GetGamepadPromptKey_GamepadKey, bool CallFunc_GetGamepadPromptKey_HasValidKeyPrompt_1, const struct InputCore_Key& CallFunc_GetGamepadPromptKey_GamepadKey_1, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetGamepadPromptKey_HasValidKeyPrompt_2, const struct InputCore_Key& CallFunc_GetGamepadPromptKey_GamepadKey_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class UWidget* K2Node_ComponentBoundEvent_Widget_2, class UWidget* K2Node_ComponentBoundEvent_Widget_1, class UWidget* K2Node_ComponentBoundEvent_Widget);
	void OnUnhovered__DelegateSignature(class UWidget* Widget);
	void OnHovered__DelegateSignature(class UWidget* Widget);
	void OnClicked__DelegateSignature(class UWidget* Widget);
};

}


