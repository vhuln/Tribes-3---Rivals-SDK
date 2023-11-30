#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x610 - 0x5B0)
// WidgetBlueprintGeneratedClass UI_Gamepad_Prompt_Hold.UI_Gamepad_Prompt_Hold_C
class UUI_Gamepad_Prompt_Hold_C : public UValRHWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      GamepadFadeIn;                                     // 0x5B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_KeyCallout_C*                     GamepadPrompt;                                     // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              GamepadPromptHolder;                               // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              PressAndHoldWrapper;                               // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProgressCircle;                                    // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          ProgressRetainer;                                  // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         InHoverState;                                      // 0x5E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHoldingConfirm;                                  // 0x5E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23D8[0x6];                                     // Fixing Size After Last Property  
	FMulticastInlineDelegateProperty_            Confirmed;                                         // 0x5F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Cancelled;                                         // 0x600(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUI_Gamepad_Prompt_Hold_C* GetDefaultObj();

	void UpdateHoldDurationDisplay(float FPercentage, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void OnButtonUnhovered(enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue);
	void OnButtonHovered(enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue);
	void On_Hold_Event(enum class EContextActionHoldReleaseState Event, bool K2Node_SwitchEnum_CmpSuccess);
	void StartConfirmHold();
	void ClearConfirmHold();
	void UpdateGamepadPromptDisplay(enum class ERH_INPUT_STATE InputMode, double Temp_real_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double Temp_real_Variable_1, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool Temp_bool_Variable_2, enum class EUMGSequencePlayMode K2Node_Select_Default, double K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast);
	void OnInitialized();
	void ExecuteUbergraph_UI_Gamepad_Prompt_Hold(int32 EntryPoint, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue);
	void Cancelled__DelegateSignature();
	void Confirmed__DelegateSignature();
};

}


