#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SettingsPage.WBP_SettingsPage_C
// (None)

class UClass* UWBP_SettingsPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SettingsPage_C");

	return Clss;
}


// WBP_SettingsPage_C WBP_SettingsPage.Default__WBP_SettingsPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SettingsPage_C* UWBP_SettingsPage_C::GetDefaultObj()
{
	static class UWBP_SettingsPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SettingsPage_C*>(UWBP_SettingsPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.GetScrollBox
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UScrollBox*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UScrollBox* UWBP_SettingsPage_C::GetScrollBox(class UScrollBox* CallFunc_GetScrollBox_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsPage_C", "GetScrollBox");

	Params::UWBP_SettingsPage_C_GetScrollBox_Params Parms{};

	Parms.CallFunc_GetScrollBox_ReturnValue = CallFunc_GetScrollBox_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_SettingsPage.WBP_SettingsPage_C.Add Settings Section Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHSettingsSection*          Selection_Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            K2Node_DynamicCast_AsVertical_Box_Slot                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsPage_C::Add_Settings_Section_Widget(class URHSettingsSection* Selection_Widget, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* K2Node_DynamicCast_AsVertical_Box_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsPage_C", "Add Settings Section Widget");

	Params::UWBP_SettingsPage_C_Add_Settings_Section_Widget_Params Parms{};

	Parms.Selection_Widget = Selection_Widget;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsVertical_Box_Slot = K2Node_DynamicCast_AsVertical_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsPage.WBP_SettingsPage_C.InitializeTickAnimations
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_SettingsPage_C::InitializeTickAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsPage_C", "InitializeTickAnimations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsPage_C::HandleShowPageAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsPage_C", "HandleShowPageAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ElapsedAlpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsPage_C::HandleShowPageAnimUpdated(float ElapsedTime, float ElapsedAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsPage_C", "HandleShowPageAnimUpdated");

	Params::UWBP_SettingsPage_C_HandleShowPageAnimUpdated_Params Parms{};

	Parms.ElapsedTime = ElapsedTime;
	Parms.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsPage_C::HandleHidePageAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsPage_C", "HandleHidePageAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ElapsedAlpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsPage_C::HandleHidePageAnimUpdated(float ElapsedTime, float ElapsedAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsPage_C", "HandleHidePageAnimUpdated");

	Params::UWBP_SettingsPage_C_HandleHidePageAnimUpdated_Params Parms{};

	Parms.ElapsedTime = ElapsedTime;
	Parms.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsPage.WBP_SettingsPage_C.PlayShowPageAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsPage_C::PlayShowPageAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsPage_C", "PlayShowPageAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsPage.WBP_SettingsPage_C.PlayHidePageAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsPage_C::PlayHidePageAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsPage_C", "PlayHidePageAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsPage.WBP_SettingsPage_C.SetInitPageState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_SettingsPage_C::SetInitPageState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsPage_C", "SetInitPageState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsPage.WBP_SettingsPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SettingsPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SettingsPage.WBP_SettingsPage_C.AddSettingsSectionWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class URHSettingsSection*          SettingsSection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsPage_C::AddSettingsSectionWidget(class URHSettingsSection* SettingsSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsPage_C", "AddSettingsSectionWidget");

	Params::UWBP_SettingsPage_C_AddSettingsSectionWidget_Params Parms{};

	Parms.SettingsSection = SettingsSection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SettingsPage.WBP_SettingsPage_C.ExecuteUbergraph_WBP_SettingsPage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ElapsedTime_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ElapsedAlpha_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ElapsedTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ElapsedAlpha                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector2D        CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector2D        CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector2D        CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Ease_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHSettingsSection*          K2Node_Event_SettingsSection                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddTickAnimation_Duration_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddTickAnimation_Duration_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SettingsPage_C::ExecuteUbergraph_WBP_SettingsPage(int32 EntryPoint, float K2Node_CustomEvent_ElapsedTime_1, float K2Node_CustomEvent_ElapsedAlpha_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, float K2Node_CustomEvent_ElapsedTime, float K2Node_CustomEvent_ElapsedAlpha, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue_2, double CallFunc_Ease_ReturnValue, class URHSettingsSection* K2Node_Event_SettingsSection, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1, float CallFunc_AddTickAnimation_Duration_ImplicitCast, float CallFunc_AddTickAnimation_Duration_ImplicitCast_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SettingsPage_C", "ExecuteUbergraph_WBP_SettingsPage");

	Params::UWBP_SettingsPage_C_ExecuteUbergraph_WBP_SettingsPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ElapsedTime_1 = K2Node_CustomEvent_ElapsedTime_1;
	Parms.K2Node_CustomEvent_ElapsedAlpha_1 = K2Node_CustomEvent_ElapsedAlpha_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.K2Node_CustomEvent_ElapsedTime = K2Node_CustomEvent_ElapsedTime;
	Parms.K2Node_CustomEvent_ElapsedAlpha = K2Node_CustomEvent_ElapsedAlpha;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.CallFunc_Ease_ReturnValue = CallFunc_Ease_ReturnValue;
	Parms.K2Node_Event_SettingsSection = K2Node_Event_SettingsSection;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast = CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1 = CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1;
	Parms.CallFunc_AddTickAnimation_Duration_ImplicitCast = CallFunc_AddTickAnimation_Duration_ImplicitCast;
	Parms.CallFunc_AddTickAnimation_Duration_ImplicitCast_1 = CallFunc_AddTickAnimation_Duration_ImplicitCast_1;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


