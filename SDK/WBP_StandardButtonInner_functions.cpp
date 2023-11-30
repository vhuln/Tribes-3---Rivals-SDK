#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_StandardButtonInner.WBP_StandardButtonInner_C
// (None)

class UClass* UWBP_StandardButtonInner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_StandardButtonInner_C");

	return Clss;
}


// WBP_StandardButtonInner_C WBP_StandardButtonInner.Default__WBP_StandardButtonInner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_StandardButtonInner_C* UWBP_StandardButtonInner_C::GetDefaultObj()
{
	static class UWBP_StandardButtonInner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_StandardButtonInner_C*>(UWBP_StandardButtonInner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Height                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Width                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowPromptOnFocus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::SetDefaultValues(double Height, double Width, class FText ButtonText, class FName Action, bool ShowPromptOnFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "SetDefaultValues");

	Params::UWBP_StandardButtonInner_C_SetDefaultValues_Params Parms{};

	Parms.Height = Height;
	Parms.Width = Width;
	Parms.ButtonText = ButtonText;
	Parms.Action = Action;
	Parms.ShowPromptOnFocus = ShowPromptOnFocus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InHeight                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::SetHeight(double InHeight, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "SetHeight");

	Params::UWBP_StandardButtonInner_C_SetHeight_Params Parms{};

	Parms.InHeight = InHeight;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HasGamepadAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasGamepadAction                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::HasGamepadAction(bool* HasGamepadAction, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "HasGamepadAction");

	Params::UWBP_StandardButtonInner_C_HasGamepadAction_Params Parms{};

	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasGamepadAction != nullptr)
		*HasGamepadAction = Parms.HasGamepadAction;

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetGamepadPromptForAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadButtonForAction_Button                        (HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadButtonForAction_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::SetGamepadPromptForAction(class FName Action, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "SetGamepadPromptForAction");

	Params::UWBP_StandardButtonInner_C_SetGamepadPromptForAction_Params Parms{};

	Parms.Action = Action;
	Parms.CallFunc_GetGamepadButtonForAction_Button = CallFunc_GetGamepadButtonForAction_Button;
	Parms.CallFunc_GetGamepadButtonForAction_ReturnValue = CallFunc_GetGamepadButtonForAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonInner_C::SetDefaultDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "SetDefaultDisplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InWidth                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::SetWidth(double InWidth, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "SetWidth");

	Params::UWBP_StandardButtonInner_C_SetWidth_Params Parms{};

	Parms.InWidth = InWidth;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StandardButtonInner_C::SetButtonText(class FText ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "SetButtonText");

	Params::UWBP_StandardButtonInner_C_SetButtonText_Params Parms{};

	Parms.ButtonText = ButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_StandardButtonInner_C::NavigateConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "NavigateConfirm");

	Params::UWBP_StandardButtonInner_C_NavigateConfirm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "PreConstruct");

	Params::UWBP_StandardButtonInner_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonInner_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonInner_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonInner_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonInner_C::GamepadConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "GamepadConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonInner_C::Do_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "Do Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Unhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonInner_C::Do_Unhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "Do Unhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonInner_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HandleInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::HandleInputStateChanged(enum class ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "HandleInputStateChanged");

	Params::UWBP_StandardButtonInner_C_HandleInputStateChanged_Params Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__WBP_StandardButtonInner_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::BndEvt__WBP_StandardButtonInner_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "BndEvt__WBP_StandardButtonInner_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature");

	Params::UWBP_StandardButtonInner_C_BndEvt__WBP_StandardButtonInner_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__WBP_StandardButtonInner_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::BndEvt__WBP_StandardButtonInner_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "BndEvt__WBP_StandardButtonInner_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature");

	Params::UWBP_StandardButtonInner_C_BndEvt__WBP_StandardButtonInner_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__WBP_StandardButtonInner_WBP_StandardButton_02_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::BndEvt__WBP_StandardButtonInner_WBP_StandardButton_02_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "BndEvt__WBP_StandardButtonInner_WBP_StandardButton_02_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	Params::UWBP_StandardButtonInner_C_BndEvt__WBP_StandardButtonInner_WBP_StandardButton_02_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.ExecuteUbergraph_WBP_StandardButtonInner
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         K2Node_CustomEvent_InputState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasGamepadAction_HasGamepadAction                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasGamepadAction_HasGamepadAction_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasGamepadAction_HasGamepadAction_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::ExecuteUbergraph_WBP_StandardButtonInner(int32 EntryPoint, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, enum class ESlateVisibility Temp_byte_Variable, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_HasGamepadAction_HasGamepadAction, bool CallFunc_HasGamepadAction_HasGamepadAction_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_HasGamepadAction_HasGamepadAction_2, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UWidget* K2Node_ComponentBoundEvent_Widget_2, class UWidget* K2Node_ComponentBoundEvent_Widget_1, class UWidget* K2Node_ComponentBoundEvent_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "ExecuteUbergraph_WBP_StandardButtonInner");

	Params::UWBP_StandardButtonInner_C_ExecuteUbergraph_WBP_StandardButtonInner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_InputState = K2Node_CustomEvent_InputState;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_HasGamepadAction_HasGamepadAction = CallFunc_HasGamepadAction_HasGamepadAction;
	Parms.CallFunc_HasGamepadAction_HasGamepadAction_1 = CallFunc_HasGamepadAction_HasGamepadAction_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_HasGamepadAction_HasGamepadAction_2 = CallFunc_HasGamepadAction_HasGamepadAction_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue_1 = CallFunc_GetAnimationCurrentTime_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "OnUnhovered__DelegateSignature");

	Params::UWBP_StandardButtonInner_C_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::OnHovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "OnHovered__DelegateSignature");

	Params::UWBP_StandardButtonInner_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonInner_C::OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonInner_C", "OnClicked__DelegateSignature");

	Params::UWBP_StandardButtonInner_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


