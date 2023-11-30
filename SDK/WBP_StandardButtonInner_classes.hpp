#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x600 - 0x550)
// WidgetBlueprintGeneratedClass WBP_StandardButtonInner.WBP_StandardButtonInner_C
class UWBP_StandardButtonInner_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShowButton;                                        // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            ButtonText;                                        // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                     KeyPrompt;                                         // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              KeyPromptSizeBox;                                  // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeWrapper;                                       // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StandardButton_02_C*              WBP_StandardButton_02;                             // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClicked;                                         // 0x588(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnHovered;                                         // 0x598(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnUnhovered;                                       // 0x5A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UObject*                               ClickStandardBtnInnerSFX;                          // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  DefaultButtonText;                                 // 0x5C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	double                                       DefaultWidth;                                      // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowPromptOnFocus;                                 // 0x5E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_35DB[0x3];                                     // Fixing Size After Last Property  
	class FName                                  GamepadAction;                                     // 0x5E4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_35DD[0x4];                                     // Fixing Size After Last Property  
	double                                       DefaultHeight;                                     // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                               HoverStandardBtnInnerSFX;                          // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_StandardButtonInner_C* GetDefaultObj();

	void SetDefaultValues(double Height, double Width, class FText ButtonText, class FName Action, bool ShowPromptOnFocus);
	void SetHeight(double InHeight, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void HasGamepadAction(bool* HasGamepadAction, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void SetGamepadPromptForAction(class FName Action, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue);
	void SetDefaultDisplay();
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
	void BndEvt__WBP_StandardButtonInner_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_StandardButtonInner_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(class UWidget* Widget);
	void BndEvt__WBP_StandardButtonInner_WBP_StandardButton_02_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWidget* Widget);
	void ExecuteUbergraph_WBP_StandardButtonInner(int32 EntryPoint, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, enum class ESlateVisibility Temp_byte_Variable, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_HasGamepadAction_HasGamepadAction, bool CallFunc_HasGamepadAction_HasGamepadAction_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_HasGamepadAction_HasGamepadAction_2, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UWidget* K2Node_ComponentBoundEvent_Widget_2, class UWidget* K2Node_ComponentBoundEvent_Widget_1, class UWidget* K2Node_ComponentBoundEvent_Widget);
	void OnUnhovered__DelegateSignature(class UWidget* Widget);
	void OnHovered__DelegateSignature(class UWidget* Widget);
	void OnClicked__DelegateSignature(class UWidget* Widget);
};

}


