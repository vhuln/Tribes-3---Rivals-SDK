#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RedeemCodeScreen.RedeemCodeScreen_C
// (None)

class UClass* URedeemCodeScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RedeemCodeScreen_C");

	return Clss;
}


// RedeemCodeScreen_C RedeemCodeScreen.Default__RedeemCodeScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URedeemCodeScreen_C* URedeemCodeScreen_C::GetDefaultObj()
{
	static class URedeemCodeScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URedeemCodeScreen_C*>(URedeemCodeScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.UpdateSubmitButtonState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetText_NewParam                                        (None)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPendingServerReply_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URedeemCodeScreen_C::UpdateSubmitButtonState(class FText CallFunc_GetText_NewParam, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_IsPendingServerReply_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "UpdateSubmitButtonState");

	Params::URedeemCodeScreen_C_UpdateSubmitButtonState_Params Parms{};

	Parms.CallFunc_GetText_NewParam = CallFunc_GetText_NewParam;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_IsPendingServerReply_ReturnValue = CallFunc_IsPendingServerReply_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.SetErrorMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ErrorMessage                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void URedeemCodeScreen_C::SetErrorMessage(class FText ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "SetErrorMessage");

	Params::URedeemCodeScreen_C_SetErrorMessage_Params Parms{};

	Parms.ErrorMessage = ErrorMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnSpamPreventTimeout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::OnSpamPreventTimeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "OnSpamPreventTimeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.GetPaletteColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Color_Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        Color                                                            (Parm, OutParm)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor                                     (None)
// struct RallyHereStart_ColorPaletteInfoCallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor_1                                   (None)

void URedeemCodeScreen_C::GetPaletteColor(class FName Color_Name, struct SlateCore_SlateColor* Color, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, const struct RallyHereStart_ColorPaletteInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "GetPaletteColor");

	Params::URedeemCodeScreen_C_GetPaletteColor_Params Parms{};

	Parms.Color_Name = Color_Name;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.ShowPending
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::ShowPending()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "ShowPending");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.EndPending
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::EndPending()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "EndPending");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.NavigateBack
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPendingServerReply_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Remove_Top_View_Route_ViewChanged                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool URedeemCodeScreen_C::NavigateBack(bool CallFunc_IsPendingServerReply_ReturnValue, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Remove_Top_View_Route_ViewChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "NavigateBack");

	Params::URedeemCodeScreen_C_NavigateBack_Params Parms{};

	Parms.CallFunc_IsPendingServerReply_ReturnValue = CallFunc_IsPendingServerReply_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Remove_Top_View_Route_ViewChanged = CallFunc_Remove_Top_View_Route_ViewChanged;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::StartShowAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "StartShowAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeTickAnimations
// (Event, Protected, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::InitializeTickAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "InitializeTickAnimations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::ShowCodeRedeemFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "ShowCodeRedeemFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ElapsedAlpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URedeemCodeScreen_C::ShowCodeRedeemAnim(float ElapsedTime, float ElapsedAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "ShowCodeRedeemAnim");

	Params::URedeemCodeScreen_C_ShowCodeRedeemAnim_Params Parms{};

	Parms.ElapsedTime = ElapsedTime;
	Parms.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.InitHideAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::InitHideAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "InitHideAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::HideCodeRedeemFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "HideCodeRedeemFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ElapsedAlpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URedeemCodeScreen_C::HideCodeRedeemAnim(float ElapsedTime, float ElapsedAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "HideCodeRedeemAnim");

	Params::URedeemCodeScreen_C_HideCodeRedeemAnim_Params Parms{};

	Parms.ElapsedTime = ElapsedTime;
	Parms.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::StartHideAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "StartHideAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::InitializeWidgetNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "InitializeWidgetNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetButtonListeners
// (Event, Public, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::InitializeWidgetButtonListeners()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "InitializeWidgetButtonListeners");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.SubmitCode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::SubmitCode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "SubmitCode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        FromRoute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToRoute                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URedeemCodeScreen_C::StartShowSequence(class FName FromRoute, class FName ToRoute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "StartShowSequence");

	Params::URedeemCodeScreen_C_StartShowSequence_Params Parms{};

	Parms.FromRoute = FromRoute;
	Parms.ToRoute = ToRoute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        FromRoute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToRoute                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URedeemCodeScreen_C::StartHideSequence(class FName FromRoute, class FName ToRoute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "StartHideSequence");

	Params::URedeemCodeScreen_C_StartHideSequence_Params Parms{};

	Parms.FromRoute = FromRoute;
	Parms.ToRoute = ToRoute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnCloseButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::OnCloseButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "OnCloseButtonClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void URedeemCodeScreen_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::URedeemCodeScreen_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeSubmit
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void URedeemCodeScreen_C::OnRedeemCodeSubmit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "OnRedeemCodeSubmit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeResult
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Error                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URedeemCodeScreen_C::OnRedeemCodeResult(bool Success, class FText& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "OnRedeemCodeResult");

	Params::URedeemCodeScreen_C_OnRedeemCodeResult_Params Parms{};

	Parms.Success = Success;
	Parms.Error = Error;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.HandleInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URedeemCodeScreen_C::HandleInputStateChanged(enum class ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "HandleInputStateChanged");

	Params::URedeemCodeScreen_C_HandleInputStateChanged_Params Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URedeemCodeScreen_C::OnCodeTextChanged(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "OnCodeTextChanged");

	Params::URedeemCodeScreen_C_OnCodeTextChanged_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextCommit
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URedeemCodeScreen_C::OnCodeTextCommit(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "OnCodeTextCommit");

	Params::URedeemCodeScreen_C_OnCodeTextCommit_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RedeemCodeScreen.RedeemCodeScreen_C.ExecuteUbergraph_RedeemCodeScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ElapsedTime_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ElapsedAlpha_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector2D        CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ElapsedTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ElapsedAlpha                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector2D        CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_FromRoute_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ToRoute_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_FromRoute                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ToRoute                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateBack_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Success                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Error                                               (ConstParm)
// bool                               CallFunc_RemoveViewRoute_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPendingServerReply_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        CallFunc_GetPaletteColor_Color                                   (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         K2Node_CustomEvent_InputState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadConfirmButton_ReturnValue                     (HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconForGamepadButton_Icon                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text_1                                        (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text                                          (ConstParm)
// enum class ETextCommit             K2Node_CustomEvent_CommitMethod                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ARHPlayerController*         K2Node_DynamicCast_AsRHPlayer_Controller                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_NewParam                                        (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentFocusGroup_OutFocusGroup                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentFocusGroup_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatformType_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// double                             CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URedeemCodeScreen_C::ExecuteUbergraph_RedeemCodeScreen(int32 EntryPoint, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, float K2Node_CustomEvent_ElapsedTime_1, float K2Node_CustomEvent_ElapsedAlpha_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Multiply_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue, float K2Node_CustomEvent_ElapsedTime, float K2Node_CustomEvent_ElapsedAlpha, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_Event_FromRoute_1, class FName K2Node_Event_ToRoute_1, class FName K2Node_Event_FromRoute, class FName K2Node_Event_ToRoute, bool CallFunc_NavigateBack_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_Widget, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_Success, class FText K2Node_Event_Error, bool CallFunc_RemoveViewRoute_ReturnValue, bool CallFunc_IsPendingServerReply_ReturnValue, const struct SlateCore_SlateColor& CallFunc_GetPaletteColor_Color, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FText K2Node_CustomEvent_Text_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText K2Node_CustomEvent_Text, enum class ETextCommit K2Node_CustomEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ARHPlayerController* K2Node_DynamicCast_AsRHPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetText_NewParam, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_GetCurrentFocusGroup_OutFocusGroup, bool CallFunc_GetCurrentFocusGroup_ReturnValue, bool CallFunc_IsPlatformType_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RedeemCodeScreen_C", "ExecuteUbergraph_RedeemCodeScreen");

	Params::URedeemCodeScreen_C_ExecuteUbergraph_RedeemCodeScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.K2Node_CustomEvent_ElapsedTime_1 = K2Node_CustomEvent_ElapsedTime_1;
	Parms.K2Node_CustomEvent_ElapsedAlpha_1 = K2Node_CustomEvent_ElapsedAlpha_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_CustomEvent_ElapsedTime = K2Node_CustomEvent_ElapsedTime;
	Parms.K2Node_CustomEvent_ElapsedAlpha = K2Node_CustomEvent_ElapsedAlpha;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_Event_FromRoute_1 = K2Node_Event_FromRoute_1;
	Parms.K2Node_Event_ToRoute_1 = K2Node_Event_ToRoute_1;
	Parms.K2Node_Event_FromRoute = K2Node_Event_FromRoute;
	Parms.K2Node_Event_ToRoute = K2Node_Event_ToRoute;
	Parms.CallFunc_NavigateBack_ReturnValue = CallFunc_NavigateBack_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_Success = K2Node_Event_Success;
	Parms.K2Node_Event_Error = K2Node_Event_Error;
	Parms.CallFunc_RemoveViewRoute_ReturnValue = CallFunc_RemoveViewRoute_ReturnValue;
	Parms.CallFunc_IsPendingServerReply_ReturnValue = CallFunc_IsPendingServerReply_ReturnValue;
	Parms.CallFunc_GetPaletteColor_Color = CallFunc_GetPaletteColor_Color;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_InputState = K2Node_CustomEvent_InputState;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetGamepadConfirmButton_ReturnValue = CallFunc_GetGamepadConfirmButton_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetIconForGamepadButton_Icon = CallFunc_GetIconForGamepadButton_Icon;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_Text_1 = K2Node_CustomEvent_Text_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_CustomEvent_CommitMethod = K2Node_CustomEvent_CommitMethod;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHPlayer_Controller = K2Node_DynamicCast_AsRHPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetText_NewParam = CallFunc_GetText_NewParam;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetCurrentFocusGroup_OutFocusGroup = CallFunc_GetCurrentFocusGroup_OutFocusGroup;
	Parms.CallFunc_GetCurrentFocusGroup_ReturnValue = CallFunc_GetCurrentFocusGroup_ReturnValue;
	Parms.CallFunc_IsPlatformType_ReturnValue = CallFunc_IsPlatformType_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast = CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1 = CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


