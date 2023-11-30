#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4B (0x59B - 0x550)
// WidgetBlueprintGeneratedClass WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C
class UWBP_PlayerStatus_ContextMenuOption_C : public URHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x558(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              GamepadIconWRapper;                                // 0x560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OptionText;                                        // 0x568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectGamepadIcon;                                 // 0x570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonStacked_C*                  WBP_ButtonStacked;                                 // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EPlayerStatusOption               Assigned_Context_Option;                           // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_35C0[0x7];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            OnContextOptionSelected;                           // 0x588(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsActiveInMenu;                                    // 0x598(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   Current_Input_State;                               // 0x599(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Hovered;                                        // 0x59A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerStatus_ContextMenuOption_C* GetDefaultObj();

	bool NavigateConfirm();
	void IsActiveForNavigation(bool* Return_Value, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Update_Callout_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void SetActiveInMenu(bool IsActive);
	void InitializeWidget();
	void Handle_Input_State_Changed(enum class ERH_INPUT_STATE InputState);
	void GamepadHover();
	void GamepadUnhover();
	void Construct();
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature(bool IsGamepad);
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature();
	void ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPlayerStatusOption Temp_byte_Variable, class FText Temp_text_Variable, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_IsActive, class FText K2Node_Select_Default, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool K2Node_ComponentBoundEvent_IsGamepad, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void OnContextOptionSelected__DelegateSignature(enum class EPlayerStatusOption Context_Option);
};

}


