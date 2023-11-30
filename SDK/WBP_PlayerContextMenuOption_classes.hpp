#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x43 (0x59B - 0x558)
// WidgetBlueprintGeneratedClass WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C
class UWBP_PlayerContextMenuOption_C : public URHContextMenuButton
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x558(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x560(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              GamepadPromptWrapper;                              // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OptionText;                                        // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectGamepadIcon;                                 // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonStacked_C*                  WBP_ButtonStacked;                                 // 0x580(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnContextOptionSelected;                           // 0x588(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsActiveInMenu;                                    // 0x598(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   Current_Input_State;                               // 0x599(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Hovered;                                        // 0x59A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerContextMenuOption_C* GetDefaultObj();

	class FText GetCurrentOptionText(enum class EPlayerContextOptions Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, class FText Temp_text_Variable_22, enum class EPlayerContextOptions CallFunc_GetContextOption_ReturnValue, class FText CallFunc_GetPlatformViewProfileText_Return_Value, class FText K2Node_Select_Default);
	bool NavigateConfirm(enum class EPlayerContextOptions CallFunc_GetContextOption_ReturnValue);
	void IsActiveForNavigation(bool* Return_Value, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Update_Callout_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Handle_Input_State_Changed(enum class ERH_INPUT_STATE InputState);
	void GamepadHover();
	void GamepadUnhover();
	void Construct();
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature(bool IsGamepad);
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature();
	void OnInitialized();
	void HandleActive(bool IsActive);
	void HandleVisibility(bool IsVisibility);
	void ExecuteUbergraph_WBP_PlayerContextMenuOption(int32 EntryPoint, bool K2Node_Event_isVisibility, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, bool K2Node_ComponentBoundEvent_IsGamepad, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class FText CallFunc_GetCurrentOptionText_ReturnValue, enum class EPlayerContextOptions CallFunc_GetContextOption_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_isActive);
	void OnContextOptionSelected__DelegateSignature(enum class EPlayerContextOptions Context_Option);
};

}


