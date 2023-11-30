#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_QueueTimer_v2.WBP_QueueTimer_v2_C
// (None)

class UClass* UWBP_QueueTimer_v2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_QueueTimer_v2_C");

	return Clss;
}


// WBP_QueueTimer_v2_C WBP_QueueTimer_v2.Default__WBP_QueueTimer_v2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_QueueTimer_v2_C* UWBP_QueueTimer_v2_C::GetDefaultObj()
{
	static class UWBP_QueueTimer_v2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_QueueTimer_v2_C*>(UWBP_QueueTimer_v2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateCancelButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQueueTimerState        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQueueTimerState        CallFunc_GetCurrentTimerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetQueuePermissions_CanControl                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetQueuePermissions_CanQueue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::UpdateCancelButton(enum class EQueueTimerState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class EQueueTimerState CallFunc_GetCurrentTimerState_ReturnValue, bool CallFunc_GetQueuePermissions_CanControl, bool CallFunc_GetQueuePermissions_CanQueue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "UpdateCancelButton");

	Params::UWBP_QueueTimer_v2_C_UpdateCancelButton_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetCurrentTimerState_ReturnValue = CallFunc_GetCurrentTimerState_ReturnValue;
	Parms.CallFunc_GetQueuePermissions_CanControl = CallFunc_GetQueuePermissions_CanControl;
	Parms.CallFunc_GetQueuePermissions_CanQueue = CallFunc_GetQueuePermissions_CanQueue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetNeutralLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_QueueTimer_v2_C::SetNeutralLabel(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "SetNeutralLabel");

	Params::UWBP_QueueTimer_v2_C_SetNeutralLabel_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.GetColorFromPalette
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     LinearColor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Name_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// struct RallyHereStart_ColorPaletteInfoCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::GetColorFromPalette(class FName RowName, struct CoreUObject_LinearColor* LinearColor, const class FString& CallFunc_BuildString_Name_ReturnValue, const struct RallyHereStart_ColorPaletteInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "GetColorFromPalette");

	Params::UWBP_QueueTimer_v2_C_GetColorFromPalette_Params Parms{};

	Parms.RowName = RowName;
	Parms.CallFunc_BuildString_Name_ReturnValue = CallFunc_BuildString_Name_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LinearColor != nullptr)
		*LinearColor = std::move(Parms.LinearColor);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdatePenaltyTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQueueTime_PartHours_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQueueTime_PartMins_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_GetQueueTime_PartHours_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetColorFromPalette_LinearColor                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor                                     (None)
// int32                              CallFunc_GetQueueTime_PartMins_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQueueTime_PartSecs_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_QueueTimer_v2_C::UpdatePenaltyTime(bool Temp_bool_Variable, int32 CallFunc_GetQueueTime_PartHours_ReturnValue, int32 CallFunc_GetQueueTime_PartMins_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_MakeLiteralText_ReturnValue, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_GetQueueTime_PartHours_ReturnValue_1, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_GetColorFromPalette_LinearColor, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, int32 CallFunc_GetQueueTime_PartMins_ReturnValue_1, int32 CallFunc_GetQueueTime_PartSecs_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_3, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_MakeLiteralText_ReturnValue_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "UpdatePenaltyTime");

	Params::UWBP_QueueTimer_v2_C_UpdatePenaltyTime_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetQueueTime_PartHours_ReturnValue = CallFunc_GetQueueTime_PartHours_ReturnValue;
	Parms.CallFunc_GetQueueTime_PartMins_ReturnValue = CallFunc_GetQueueTime_PartMins_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetQueueTime_PartHours_ReturnValue_1 = CallFunc_GetQueueTime_PartHours_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetColorFromPalette_LinearColor = CallFunc_GetColorFromPalette_LinearColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetQueueTime_PartMins_ReturnValue_1 = CallFunc_GetQueueTime_PartMins_ReturnValue_1;
	Parms.CallFunc_GetQueueTime_PartSecs_ReturnValue = CallFunc_GetQueueTime_PartSecs_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = CallFunc_Conv_IntToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateStatusLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EQueueTimerState        CallFunc_GetCurrentTimerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::UpdateStatusLabel(enum class EQueueTimerState CallFunc_GetCurrentTimerState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "UpdateStatusLabel");

	Params::UWBP_QueueTimer_v2_C_UpdateStatusLabel_Params Parms{};

	Parms.CallFunc_GetCurrentTimerState_ReturnValue = CallFunc_GetCurrentTimerState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.HandleInputStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::HandleInputStateChanged(enum class ERH_INPUT_STATE InputState, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "HandleInputStateChanged");

	Params::UWBP_QueueTimer_v2_C_HandleInputStateChanged_Params Parms{};

	Parms.InputState = InputState;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.SetGamepadCallout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct InputCore_Key               CallFunc_GetGamepadButtonForAction_Button                        (HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadButtonForAction_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::SetGamepadCallout(const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "SetGamepadCallout");

	Params::UWBP_QueueTimer_v2_C_SetGamepadCallout_Params Parms{};

	Parms.CallFunc_GetGamepadButtonForAction_Button = CallFunc_GetGamepadButtonForAction_Button;
	Parms.CallFunc_GetGamepadButtonForAction_ReturnValue = CallFunc_GetGamepadButtonForAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.UpdateQueueTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInCustomMatch_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQueueTime_PartSecs_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              CallFunc_GetQueueTime_PartMins_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_QueueTimer_v2_C::UpdateQueueTime(bool CallFunc_IsInCustomMatch_ReturnValue, int32 CallFunc_GetQueueTime_PartSecs_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetQueueTime_PartMins_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "UpdateQueueTime");

	Params::UWBP_QueueTimer_v2_C_UpdateQueueTime_Params Parms{};

	Parms.CallFunc_IsInCustomMatch_ReturnValue = CallFunc_IsInCustomMatch_ReturnValue;
	Parms.CallFunc_GetQueueTime_PartSecs_ReturnValue = CallFunc_GetQueueTime_PartSecs_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetQueueTime_PartMins_ReturnValue = CallFunc_GetQueueTime_PartMins_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.CancelQueue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QueueTimer_v2_C::CancelQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "CancelQueue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_QueueTimer_v2_C::BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_QueueTimer_v2_C::BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_QueueTimer_v2_C::BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "BndEvt__CancelQueueButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTime
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              TimeSecs                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::OnUpdateQueueTime(float TimeSecs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "OnUpdateQueueTime");

	Params::UWBP_QueueTimer_v2_C_OnUpdateQueueTime_Params Parms{};

	Parms.TimeSecs = TimeSecs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnUpdateQueueTimerState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EQueueTimerState        State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::OnUpdateQueueTimerState(enum class EQueueTimerState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "OnUpdateQueueTimerState");

	Params::UWBP_QueueTimer_v2_C_OnUpdateQueueTimerState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnControlQueuePermissionUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               CanControl                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::OnControlQueuePermissionUpdate(bool CanControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "OnControlQueuePermissionUpdate");

	Params::UWBP_QueueTimer_v2_C_OnControlQueuePermissionUpdate_Params Parms{};

	Parms.CanControl = CanControl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        FromRoute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToRoute                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::StartShowSequence(class FName FromRoute, class FName ToRoute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "StartShowSequence");

	Params::UWBP_QueueTimer_v2_C_StartShowSequence_Params Parms{};

	Parms.FromRoute = FromRoute;
	Parms.ToRoute = ToRoute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.StartHideSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        FromRoute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToRoute                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::StartHideSequence(class FName FromRoute, class FName ToRoute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "StartHideSequence");

	Params::UWBP_QueueTimer_v2_C_StartHideSequence_Params Parms{};

	Parms.FromRoute = FromRoute;
	Parms.ToRoute = ToRoute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_QueueTimer_v2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "PreConstruct");

	Params::UWBP_QueueTimer_v2_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.OnHudBindingReady
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_QueueTimer_v2_C::OnHudBindingReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "OnHudBindingReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueTimer_v2.WBP_QueueTimer_v2_C.ExecuteUbergraph_WBP_QueueTimer_v2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UIX_AttemptCancelQueue_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_TimeSecs                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQueueTimerState        K2Node_Event_State                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_CanControl                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_FromRoute_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ToRoute_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_FromRoute                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ToRoute                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHQueueDataFactory*         CallFunc_GetQueueDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueTimer_v2_C::ExecuteUbergraph_WBP_QueueTimer_v2(int32 EntryPoint, bool CallFunc_UIX_AttemptCancelQueue_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_TimeSecs, enum class EQueueTimerState K2Node_Event_State, bool K2Node_Event_CanControl, class FName K2Node_Event_FromRoute_1, class FName K2Node_Event_ToRoute_1, class URHInputManager* CallFunc_GetInputManager_ReturnValue, class FName K2Node_Event_FromRoute, class FName K2Node_Event_ToRoute, class URHInputManager* CallFunc_GetInputManager_ReturnValue_1, bool K2Node_Event_IsDesignTime, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueTimer_v2_C", "ExecuteUbergraph_WBP_QueueTimer_v2");

	Params::UWBP_QueueTimer_v2_C_ExecuteUbergraph_WBP_QueueTimer_v2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_UIX_AttemptCancelQueue_ReturnValue = CallFunc_UIX_AttemptCancelQueue_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_TimeSecs = K2Node_Event_TimeSecs;
	Parms.K2Node_Event_State = K2Node_Event_State;
	Parms.K2Node_Event_CanControl = K2Node_Event_CanControl;
	Parms.K2Node_Event_FromRoute_1 = K2Node_Event_FromRoute_1;
	Parms.K2Node_Event_ToRoute_1 = K2Node_Event_ToRoute_1;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.K2Node_Event_FromRoute = K2Node_Event_FromRoute;
	Parms.K2Node_Event_ToRoute = K2Node_Event_ToRoute;
	Parms.CallFunc_GetInputManager_ReturnValue_1 = CallFunc_GetInputManager_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetQueueDataFactory_ReturnValue = CallFunc_GetQueueDataFactory_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


