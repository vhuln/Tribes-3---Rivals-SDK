#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCB (0x61B - 0x550)
// WidgetBlueprintGeneratedClass WBP_StandardButtonLarge.WBP_StandardButtonLarge_C
class UWBP_StandardButtonLarge_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ButtonText;                                        // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                     KeyPrompt;                                         // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          KeyPromptContainer;                                // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            NamedSlot_65;                                      // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeWrapper;                                       // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButton_02_C*              WBP_StandardButton_02;                             // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x588(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x5A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UObject*                               ClickLrgBtnSFX;                                    // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  DefaultButtonText;                                 // 0x5C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	double                                       DefaultWidth;                                      // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowPromptOnFocus;                                 // 0x5E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_274A[0x7];                                     // Fixing Size After Last Property  
	struct InputCore_Key                         PromptKey;                                         // 0x5E8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsConfirm;                                         // 0x600(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsCancel;                                          // 0x601(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2750[0x6];                                     // Fixing Size After Last Property  
	double                                       DefaultHeight;                                     // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                               HoverLrgBtnSFX;                                    // 0x610(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class E_ButtonFontStyle                 EFontStyle;                                        // 0x618(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsDisabled;                                        // 0x619(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextJustify                      TextJustification;                                 // 0x61A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_StandardButtonLarge_C* GetDefaultObj();

	void SetDisabled(bool Disabled);
	void GetFontStyleNameByType(class FName* FontName, bool K2Node_SwitchEnum_CmpSuccess);
	void SetHeight(double InHeight, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void GetGamepadPromptKey(bool* HasValidKeyPrompt, struct InputCore_Key* GamepadKey, const struct InputCore_Key& NoneKey, const struct InputCore_Key& CallFunc_GetGamepadCancelButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue);
	void Set_Key_Prompt(const struct InputCore_Key& Prompt);
	void SetGamepadPromptForAction(class FName Action, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue);
	void SetDefaultDisplay(const struct Slate_Anchors& K2Node_MakeStruct_Anchors, class FName CallFunc_GetFontStyleNameByType_FontName, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo, const struct Slate_Anchors& K2Node_MakeStruct_Anchors_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1);
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
	void HandleInputStateChanged(enum class ERH_INPUT_STATE InputState);
	void OnInitialized();
	void BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature(class UWidget* Widget);
	void ExecuteUbergraph_WBP_StandardButtonLarge(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility Temp_byte_Variable_1, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetGamepadPromptKey_HasValidKeyPrompt, const struct InputCore_Key& CallFunc_GetGamepadPromptKey_GamepadKey, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_Widget_2, class UWidget* K2Node_ComponentBoundEvent_Widget_1, class UWidget* K2Node_ComponentBoundEvent_Widget);
	void OnUnhovered__DelegateSignature(class UWidget* Widget);
	void OnHovered__DelegateSignature(class UWidget* Widget);
	void OnClicked__DelegateSignature(class UWidget* Widget);
};

}


