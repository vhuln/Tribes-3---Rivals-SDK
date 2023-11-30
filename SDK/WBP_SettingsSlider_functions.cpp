#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingsSlider.WBP_SettingsSlider_C
// (None)

class UClass* UWBP_SettingsSlider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingsSlider_C");

	return Clss;
}


// WBP_SettingsSlider_C WBP_SettingsSlider.Default__WBP_SettingsSlider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingsSlider_C* UWBP_SettingsSlider_C::GetDefaultObj()
{
	static class UWBP_SettingsSlider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingsSlider_C*>(UWBP_SettingsSlider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.IsSliderKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct InputCore_Key               InKey                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsKey                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               NewLocalVar_0                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::IsSliderKey(const struct InputCore_Key& InKey, bool* IsKey, const struct InputCore_Key& NewLocalVar_0, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "IsSliderKey");

	Params::UWBP_SettingsSlider_C_IsSliderKey_Params Parms{};

	Parms.InKey = InKey;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (IsKey != nullptr)
		*IsKey = Parms.IsKey;

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.ResetCurrentAcceleration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsSlider_C::ResetCurrentAcceleration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "ResetCurrentAcceleration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.IncreaseCurrentAcceleration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::IncreaseCurrentAcceleration(double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "IncreaseCurrentAcceleration");

	Params::UWBP_SettingsSlider_C_IncreaseCurrentAcceleration_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_KeyEvent          InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct UMG_EventReply              ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct InputCore_Key               CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct UMG_EventReply              CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_IsSliderKey_IsKey                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct UMG_EventReply UWBP_SettingsSlider_C::OnKeyUp(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent, const struct InputCore_Key& CallFunc_GetKey_ReturnValue, const struct UMG_EventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_IsSliderKey_IsKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "OnKeyUp");

	Params::UWBP_SettingsSlider_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_IsSliderKey_IsKey = CallFunc_IsSliderKey_IsKey;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_KeyEvent          InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct UMG_EventReply              ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct InputCore_Key               CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_IsSliderKey_IsKey                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_InputEvent        CallFunc_GetInputEventFromKeyEvent_ReturnValue                   (None)
// bool                               CallFunc_InputEvent_IsRepeat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct UMG_EventReply              CallFunc_Unhandled_ReturnValue                                   (None)

struct UMG_EventReply UWBP_SettingsSlider_C::OnKeyDown(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent, const struct InputCore_Key& CallFunc_GetKey_ReturnValue, bool CallFunc_IsSliderKey_IsKey, const struct SlateCore_InputEvent& CallFunc_GetInputEventFromKeyEvent_ReturnValue, bool CallFunc_InputEvent_IsRepeat_ReturnValue, const struct UMG_EventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "OnKeyDown");

	Params::UWBP_SettingsSlider_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_IsSliderKey_IsKey = CallFunc_IsSliderKey_IsKey;
	Parms.CallFunc_GetInputEventFromKeyEvent_ReturnValue = CallFunc_GetInputEventFromKeyEvent_ReturnValue;
	Parms.CallFunc_InputEvent_IsRepeat_ReturnValue = CallFunc_InputEvent_IsRepeat_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetRoundToNearest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::Step_Left(float CallFunc_GetRoundToNearest_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "Step Left");

	Params::UWBP_SettingsSlider_C_Step_Left_Params Parms{};

	Parms.CallFunc_GetRoundToNearest_ReturnValue = CallFunc_GetRoundToNearest_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Multiplier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMinSliderValue_Min_Value                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMaxSliderValue_Max_Value                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Slider_To_Value_Value                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMinSliderValue_Min_Value_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMinSliderValue_Min_Value_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMaxSliderValue_Max_Value_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::Step(double Multiplier, double CallFunc_GetMinSliderValue_Min_Value, double CallFunc_GetMaxSliderValue_Max_Value, double CallFunc_Slider_To_Value_Value, double CallFunc_GetMinSliderValue_Min_Value_1, double CallFunc_GetMinSliderValue_Min_Value_2, double CallFunc_GetMaxSliderValue_Max_Value_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "Step");

	Params::UWBP_SettingsSlider_C_Step_Params Parms{};

	Parms.Multiplier = Multiplier;
	Parms.CallFunc_GetMinSliderValue_Min_Value = CallFunc_GetMinSliderValue_Min_Value;
	Parms.CallFunc_GetMaxSliderValue_Max_Value = CallFunc_GetMaxSliderValue_Max_Value;
	Parms.CallFunc_Slider_To_Value_Value = CallFunc_Slider_To_Value_Value;
	Parms.CallFunc_GetMinSliderValue_Min_Value_1 = CallFunc_GetMinSliderValue_Min_Value_1;
	Parms.CallFunc_GetMinSliderValue_Min_Value_2 = CallFunc_GetMinSliderValue_Min_Value_2;
	Parms.CallFunc_GetMaxSliderValue_Max_Value_1 = CallFunc_GetMaxSliderValue_Max_Value_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Step Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetRoundToNearest_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::Step_Right(float CallFunc_GetRoundToNearest_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "Step Right");

	Params::UWBP_SettingsSlider_C_Step_Right_Params Parms{};

	Parms.CallFunc_GetRoundToNearest_ReturnValue = CallFunc_GetRoundToNearest_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Display Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Dirty_Value_Value                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxDisplay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsPercent_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMinDisplay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMax_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMin_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsPercent_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRound_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsPercent_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RoundToNearestValueFloat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// double                             CallFunc_MapRangeUnclamped_OutRangeB_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_OutRangeA_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_InRangeB_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeUnclamped_InRangeA_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RoundToNearestValueFloat_ValueToRound_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::Set_Display_Text(bool Temp_bool_Variable, bool Temp_bool_Variable_1, double Temp_real_Variable, double Temp_real_Variable_1, double CallFunc_Get_Dirty_Value_Value, float CallFunc_GetMaxDisplay_ReturnValue, bool CallFunc_GetIsPercent_ReturnValue, float CallFunc_GetMinDisplay_ReturnValue, float CallFunc_GetMax_ReturnValue, float CallFunc_GetMin_ReturnValue, double CallFunc_MapRangeUnclamped_ReturnValue, bool CallFunc_GetIsPercent_ReturnValue_1, bool CallFunc_GetRound_ReturnValue, bool CallFunc_GetIsPercent_ReturnValue_2, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_RoundToNearestValueFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default_1, double CallFunc_MapRangeUnclamped_OutRangeB_ImplicitCast, double CallFunc_MapRangeUnclamped_OutRangeA_ImplicitCast, double CallFunc_MapRangeUnclamped_InRangeB_ImplicitCast, double CallFunc_MapRangeUnclamped_InRangeA_ImplicitCast, float CallFunc_RoundToNearestValueFloat_ValueToRound_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_Round_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "Set Display Text");

	Params::UWBP_SettingsSlider_C_Set_Display_Text_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_Get_Dirty_Value_Value = CallFunc_Get_Dirty_Value_Value;
	Parms.CallFunc_GetMaxDisplay_ReturnValue = CallFunc_GetMaxDisplay_ReturnValue;
	Parms.CallFunc_GetIsPercent_ReturnValue = CallFunc_GetIsPercent_ReturnValue;
	Parms.CallFunc_GetMinDisplay_ReturnValue = CallFunc_GetMinDisplay_ReturnValue;
	Parms.CallFunc_GetMax_ReturnValue = CallFunc_GetMax_ReturnValue;
	Parms.CallFunc_GetMin_ReturnValue = CallFunc_GetMin_ReturnValue;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_GetIsPercent_ReturnValue_1 = CallFunc_GetIsPercent_ReturnValue_1;
	Parms.CallFunc_GetRound_ReturnValue = CallFunc_GetRound_ReturnValue;
	Parms.CallFunc_GetIsPercent_ReturnValue_2 = CallFunc_GetIsPercent_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_RoundToNearestValueFloat_ReturnValue = CallFunc_RoundToNearestValueFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MapRangeUnclamped_OutRangeB_ImplicitCast = CallFunc_MapRangeUnclamped_OutRangeB_ImplicitCast;
	Parms.CallFunc_MapRangeUnclamped_OutRangeA_ImplicitCast = CallFunc_MapRangeUnclamped_OutRangeA_ImplicitCast;
	Parms.CallFunc_MapRangeUnclamped_InRangeB_ImplicitCast = CallFunc_MapRangeUnclamped_InRangeB_ImplicitCast;
	Parms.CallFunc_MapRangeUnclamped_InRangeA_ImplicitCast = CallFunc_MapRangeUnclamped_InRangeA_ImplicitCast;
	Parms.CallFunc_RoundToNearestValueFloat_ValueToRound_ImplicitCast = CallFunc_RoundToNearestValueFloat_ValueToRound_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Set Desired Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Value_To_Slider_Slider_Value                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Slider_To_Value_Value                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RoundToNearestValueFloat_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetDesiredValueFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RoundToNearestValueFloat_ValueToRound_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::Set_Desired_Value(double CallFunc_Value_To_Slider_Slider_Value, float CallFunc_GetValue_ReturnValue, double CallFunc_Slider_To_Value_Value, float CallFunc_RoundToNearestValueFloat_ReturnValue, bool CallFunc_SetDesiredValueFloat_ReturnValue, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_RoundToNearestValueFloat_ValueToRound_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "Set Desired Value");

	Params::UWBP_SettingsSlider_C_Set_Desired_Value_Params Parms{};

	Parms.CallFunc_Value_To_Slider_Slider_Value = CallFunc_Value_To_Slider_Slider_Value;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_Slider_To_Value_Value = CallFunc_Slider_To_Value_Value;
	Parms.CallFunc_RoundToNearestValueFloat_ReturnValue = CallFunc_RoundToNearestValueFloat_ReturnValue;
	Parms.CallFunc_SetDesiredValueFloat_ReturnValue = CallFunc_SetDesiredValueFloat_ReturnValue;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.CallFunc_RoundToNearestValueFloat_ValueToRound_ImplicitCast = CallFunc_RoundToNearestValueFloat_ValueToRound_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Position Slider To Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Value_To_Slider_Slider_Value                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::Position_Slider_To_Value(double CallFunc_Value_To_Slider_Slider_Value, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "Position Slider To Value");

	Params::UWBP_SettingsSlider_C_Position_Slider_To_Value_Params Parms{};

	Parms.CallFunc_Value_To_Slider_Slider_Value = CallFunc_Value_To_Slider_Slider_Value;
	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Slider To Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMinSliderValue_Min_Value                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMinSliderValue_Min_Value_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMaxSliderValue_Max_Value                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::Slider_To_Value(double* Value, double CallFunc_GetMinSliderValue_Min_Value, double CallFunc_GetMinSliderValue_Min_Value_1, float CallFunc_GetValue_ReturnValue, double CallFunc_GetMaxSliderValue_Max_Value, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "Slider To Value");

	Params::UWBP_SettingsSlider_C_Slider_To_Value_Params Parms{};

	Parms.CallFunc_GetMinSliderValue_Min_Value = CallFunc_GetMinSliderValue_Min_Value;
	Parms.CallFunc_GetMinSliderValue_Min_Value_1 = CallFunc_GetMinSliderValue_Min_Value_1;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_GetMaxSliderValue_Max_Value = CallFunc_GetMaxSliderValue_Max_Value;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMaxSliderValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Max_Value                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMax_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Max_Value_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::GetMaxSliderValue(double* Max_Value, float CallFunc_GetMax_ReturnValue, double K2Node_FunctionResult_Max_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "GetMaxSliderValue");

	Params::UWBP_SettingsSlider_C_GetMaxSliderValue_Params Parms{};

	Parms.CallFunc_GetMax_ReturnValue = CallFunc_GetMax_ReturnValue;
	Parms.K2Node_FunctionResult_Max_Value_ImplicitCast = K2Node_FunctionResult_Max_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Max_Value != nullptr)
		*Max_Value = Parms.Max_Value;

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GetMinSliderValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Min_Value                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMin_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Min_Value_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::GetMinSliderValue(double* Min_Value, float CallFunc_GetMin_ReturnValue, double K2Node_FunctionResult_Min_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "GetMinSliderValue");

	Params::UWBP_SettingsSlider_C_GetMinSliderValue_Params Parms{};

	Parms.CallFunc_GetMin_ReturnValue = CallFunc_GetMin_ReturnValue;
	Parms.K2Node_FunctionResult_Min_Value_ImplicitCast = K2Node_FunctionResult_Min_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Min_Value != nullptr)
		*Min_Value = Parms.Min_Value;

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Value To Slider
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Slider_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMinSliderValue_Min_Value                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMinSliderValue_Min_Value_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMaxSliderValue_Max_Value                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Dirty_Value_Value                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::Value_To_Slider(double* Slider_Value, double CallFunc_GetMinSliderValue_Min_Value, double CallFunc_GetMinSliderValue_Min_Value_1, double CallFunc_GetMaxSliderValue_Max_Value, double CallFunc_Get_Dirty_Value_Value, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "Value To Slider");

	Params::UWBP_SettingsSlider_C_Value_To_Slider_Params Parms{};

	Parms.CallFunc_GetMinSliderValue_Min_Value = CallFunc_GetMinSliderValue_Min_Value;
	Parms.CallFunc_GetMinSliderValue_Min_Value_1 = CallFunc_GetMinSliderValue_Min_Value_1;
	Parms.CallFunc_GetMaxSliderValue_Max_Value = CallFunc_GetMaxSliderValue_Max_Value;
	Parms.CallFunc_Get_Dirty_Value_Value = CallFunc_Get_Dirty_Value_Value;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Slider_Value != nullptr)
		*Slider_Value = Parms.Slider_Value;

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Get Dirty Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDirtyValueFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::Get_Dirty_Value(double* Value, float CallFunc_GetDirtyValueFloat_ReturnValue, double K2Node_FunctionResult_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "Get Dirty Value");

	Params::UWBP_SettingsSlider_C_Get_Dirty_Value_Params Parms{};

	Parms.CallFunc_GetDirtyValueFloat_ReturnValue = CallFunc_GetDirtyValueFloat_ReturnValue;
	Parms.K2Node_FunctionResult_Value_ImplicitCast = K2Node_FunctionResult_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SettingsSlider_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::Tick(const struct SlateCore_Geometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "Tick");

	Params::UWBP_SettingsSlider_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UWBP_SettingsSlider_C_BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnWidgetSettingsInfoSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_SettingsSlider_C::OnWidgetSettingsInfoSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "OnWidgetSettingsInfoSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_PointerEvent      MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SettingsSlider_C::OnMouseEnter(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "OnMouseEnter");

	Params::UWBP_SettingsSlider_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct SlateCore_PointerEvent      MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SettingsSlider_C::OnMouseLeave(struct SlateCore_PointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "OnMouseLeave");

	Params::UWBP_SettingsSlider_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SettingsSlider_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SettingsSlider_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateLeftFailure
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SettingsSlider_C::NavigateLeftFailure()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "NavigateLeftFailure");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.NavigateRightFailure
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SettingsSlider_C::NavigateRightFailure()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "NavigateRightFailure");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.OnSettingsInfoValueChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bChangedExternally                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsSlider_C::OnSettingsInfoValueChanged(bool bChangedExternally)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "OnSettingsInfoValueChanged");

	Params::UWBP_SettingsSlider_C_OnSettingsInfoValueChanged_Params Parms{};

	Parms.bChangedExternally = bChangedExternally;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsSlider.WBP_SettingsSlider_C.ExecuteUbergraph_WBP_SettingsSlider
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bChangedExternally                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Geometry          K2Node_Event_MyGeometry_1                                        (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Geometry          K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct SlateCore_PointerEvent      K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct SlateCore_PointerEvent      K2Node_Event_MouseEvent                                          (ConstParm)

void UWBP_SettingsSlider_C::ExecuteUbergraph_WBP_SettingsSlider(int32 EntryPoint, bool K2Node_Event_bChangedExternally, const struct SlateCore_Geometry& K2Node_Event_MyGeometry_1, float K2Node_Event_InDeltaTime, float K2Node_ComponentBoundEvent_Value, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct SlateCore_Geometry& K2Node_Event_MyGeometry, const struct SlateCore_PointerEvent& K2Node_Event_MouseEvent_1, const struct SlateCore_PointerEvent& K2Node_Event_MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsSlider_C", "ExecuteUbergraph_WBP_SettingsSlider");

	Params::UWBP_SettingsSlider_C_ExecuteUbergraph_WBP_SettingsSlider_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bChangedExternally = K2Node_Event_bChangedExternally;
	Parms.K2Node_Event_MyGeometry_1 = K2Node_Event_MyGeometry_1;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}


