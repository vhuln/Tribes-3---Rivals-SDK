#pragma once




namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x610 - 0x5A8)
// WidgetBlueprintGeneratedClass WBP_SettingsSlider.WBP_SettingsSlider_C
class UWBP_SettingsSlider_C : public URHSettingsWidget
{
public:
	struct Engine_PointerToUberGraphFrame        UberGraphFrame;                                    // 0x5A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      MobileLayout;                                      // 0x5B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover;                                             // 0x5B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            DisplayText;                                       // 0x5C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HoverButton;                                       // 0x5C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Hoverstroke;                                       // 0x5D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               SettingsSlider;                                    // 0x5D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          SliderBar;                                         // 0x5E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIsHovered;                                        // 0x5E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23C6[0x7];                                     // Fixing Size After Last Property  
	double                                       CurrentAcceleration;                               // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxAcceleration;                                   // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinAcceleration;                                   // 0x600(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LinearAccelerationCoeff;                           // 0x608(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SettingsSlider_C* GetDefaultObj();

	void IsSliderKey(const struct InputCore_Key& InKey, bool* IsKey, const struct InputCore_Key& NewLocalVar_0, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2);
	void ResetCurrentAcceleration();
	void IncreaseCurrentAcceleration(double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue);
	struct UMG_EventReply OnKeyUp(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent, const struct InputCore_Key& CallFunc_GetKey_ReturnValue, const struct UMG_EventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_IsSliderKey_IsKey);
	struct UMG_EventReply OnKeyDown(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent, const struct InputCore_Key& CallFunc_GetKey_ReturnValue, bool CallFunc_IsSliderKey_IsKey, const struct SlateCore_InputEvent& CallFunc_GetInputEventFromKeyEvent_ReturnValue, bool CallFunc_InputEvent_IsRepeat_ReturnValue, const struct UMG_EventReply& CallFunc_Unhandled_ReturnValue);
	void Step_Left(float CallFunc_GetRoundToNearest_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void Step(double Multiplier, double CallFunc_GetMinSliderValue_Min_Value, double CallFunc_GetMaxSliderValue_Max_Value, double CallFunc_Slider_To_Value_Value, double CallFunc_GetMinSliderValue_Min_Value_1, double CallFunc_GetMinSliderValue_Min_Value_2, double CallFunc_GetMaxSliderValue_Max_Value_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast);
	void Step_Right(float CallFunc_GetRoundToNearest_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void Set_Display_Text(bool Temp_bool_Variable, bool Temp_bool_Variable_1, double Temp_real_Variable, double Temp_real_Variable_1, double CallFunc_Get_Dirty_Value_Value, float CallFunc_GetMaxDisplay_ReturnValue, bool CallFunc_GetIsPercent_ReturnValue, float CallFunc_GetMinDisplay_ReturnValue, float CallFunc_GetMax_ReturnValue, float CallFunc_GetMin_ReturnValue, double CallFunc_MapRangeUnclamped_ReturnValue, bool CallFunc_GetIsPercent_ReturnValue_1, bool CallFunc_GetRound_ReturnValue, bool CallFunc_GetIsPercent_ReturnValue_2, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_RoundToNearestValueFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default_1, double CallFunc_MapRangeUnclamped_OutRangeB_ImplicitCast, double CallFunc_MapRangeUnclamped_OutRangeA_ImplicitCast, double CallFunc_MapRangeUnclamped_InRangeB_ImplicitCast, double CallFunc_MapRangeUnclamped_InRangeA_ImplicitCast, float CallFunc_RoundToNearestValueFloat_ValueToRound_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_Round_A_ImplicitCast);
	void Set_Desired_Value(double CallFunc_Value_To_Slider_Slider_Value, float CallFunc_GetValue_ReturnValue, double CallFunc_Slider_To_Value_Value, float CallFunc_RoundToNearestValueFloat_ReturnValue, bool CallFunc_SetDesiredValueFloat_ReturnValue, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_RoundToNearestValueFloat_ValueToRound_ImplicitCast);
	void Position_Slider_To_Value(double CallFunc_Value_To_Slider_Slider_Value, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void Slider_To_Value(double* Value, double CallFunc_GetMinSliderValue_Min_Value, double CallFunc_GetMinSliderValue_Min_Value_1, float CallFunc_GetValue_ReturnValue, double CallFunc_GetMaxSliderValue_Max_Value, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void GetMaxSliderValue(double* Max_Value, float CallFunc_GetMax_ReturnValue, double K2Node_FunctionResult_Max_Value_ImplicitCast);
	void GetMinSliderValue(double* Min_Value, float CallFunc_GetMin_ReturnValue, double K2Node_FunctionResult_Min_Value_ImplicitCast);
	void Value_To_Slider(double* Slider_Value, double CallFunc_GetMinSliderValue_Min_Value, double CallFunc_GetMinSliderValue_Min_Value_1, double CallFunc_GetMaxSliderValue_Max_Value, double CallFunc_Get_Dirty_Value_Value, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue);
	void Get_Dirty_Value(double* Value, float CallFunc_GetDirtyValueFloat_ReturnValue, double K2Node_FunctionResult_Value_ImplicitCast);
	void Construct();
	void Tick(const struct SlateCore_Geometry& MyGeometry, float InDeltaTime);
	void BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void OnWidgetSettingsInfoSet();
	void OnMouseEnter(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent);
	void OnMouseLeave(struct SlateCore_PointerEvent& MouseEvent);
	void GamepadHover();
	void GamepadUnhover();
	void NavigateLeftFailure();
	void NavigateRightFailure();
	void OnSettingsInfoValueChanged(bool bChangedExternally);
	void ExecuteUbergraph_WBP_SettingsSlider(int32 EntryPoint, bool K2Node_Event_bChangedExternally, const struct SlateCore_Geometry& K2Node_Event_MyGeometry_1, float K2Node_Event_InDeltaTime, float K2Node_ComponentBoundEvent_Value, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct SlateCore_Geometry& K2Node_Event_MyGeometry, const struct SlateCore_PointerEvent& K2Node_Event_MouseEvent_1, const struct SlateCore_PointerEvent& K2Node_Event_MouseEvent);
};

}


