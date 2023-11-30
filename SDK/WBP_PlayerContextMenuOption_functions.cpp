#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C
// (None)

class UClass* UWBP_PlayerContextMenuOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerContextMenuOption_C");

	return Clss;
}


// WBP_PlayerContextMenuOption_C WBP_PlayerContextMenuOption.Default__WBP_PlayerContextMenuOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerContextMenuOption_C* UWBP_PlayerContextMenuOption_C::GetDefaultObj()
{
	static class UWBP_PlayerContextMenuOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerContextMenuOption_C*>(UWBP_PlayerContextMenuOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GetCurrentOptionText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EPlayerContextOptions   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// class FText                        Temp_text_Variable_10                                            (None)
// class FText                        Temp_text_Variable_11                                            (None)
// class FText                        Temp_text_Variable_12                                            (None)
// class FText                        Temp_text_Variable_13                                            (None)
// class FText                        Temp_text_Variable_14                                            (None)
// class FText                        Temp_text_Variable_15                                            (None)
// class FText                        Temp_text_Variable_16                                            (None)
// class FText                        Temp_text_Variable_17                                            (None)
// class FText                        Temp_text_Variable_18                                            (None)
// class FText                        Temp_text_Variable_19                                            (None)
// class FText                        Temp_text_Variable_20                                            (None)
// class FText                        Temp_text_Variable_21                                            (None)
// class FText                        Temp_text_Variable_22                                            (None)
// enum class EPlayerContextOptions   CallFunc_GetContextOption_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPlatformViewProfileText_Return_Value                 (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UWBP_PlayerContextMenuOption_C::GetCurrentOptionText(enum class EPlayerContextOptions Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, class FText Temp_text_Variable_22, enum class EPlayerContextOptions CallFunc_GetContextOption_ReturnValue, class FText CallFunc_GetPlatformViewProfileText_Return_Value, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "GetCurrentOptionText");

	Params::UWBP_PlayerContextMenuOption_C_GetCurrentOptionText_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.Temp_text_Variable_18 = Temp_text_Variable_18;
	Parms.Temp_text_Variable_19 = Temp_text_Variable_19;
	Parms.Temp_text_Variable_20 = Temp_text_Variable_20;
	Parms.Temp_text_Variable_21 = Temp_text_Variable_21;
	Parms.Temp_text_Variable_22 = Temp_text_Variable_22;
	Parms.CallFunc_GetContextOption_ReturnValue = CallFunc_GetContextOption_ReturnValue;
	Parms.CallFunc_GetPlatformViewProfileText_Return_Value = CallFunc_GetPlatformViewProfileText_Return_Value;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerContextOptions   CallFunc_GetContextOption_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_PlayerContextMenuOption_C::NavigateConfirm(enum class EPlayerContextOptions CallFunc_GetContextOption_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "NavigateConfirm");

	Params::UWBP_PlayerContextMenuOption_C_NavigateConfirm_Params Parms{};

	Parms.CallFunc_GetContextOption_ReturnValue = CallFunc_GetContextOption_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.IsActiveForNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenuOption_C::IsActiveForNavigation(bool* Return_Value, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "IsActiveForNavigation");

	Params::UWBP_PlayerContextMenuOption_C_IsActiveForNavigation_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Update Callout Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenuOption_C::Update_Callout_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "Update Callout Visibility");

	Params::UWBP_PlayerContextMenuOption_C_Update_Callout_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenuOption_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "PreConstruct");

	Params::UWBP_PlayerContextMenuOption_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Handle Input State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenuOption_C::Handle_Input_State_Changed(enum class ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "Handle Input State Changed");

	Params::UWBP_PlayerContextMenuOption_C_Handle_Input_State_Changed_Params Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerContextMenuOption_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerContextMenuOption_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerContextMenuOption_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PlayerContextMenuOption_C::BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenuOption_C::BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature");

	Params::UWBP_PlayerContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PlayerContextMenuOption_C::BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerContextMenuOption_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.HandleActive
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenuOption_C::HandleActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "HandleActive");

	Params::UWBP_PlayerContextMenuOption_C_HandleActive_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.HandleVisibility
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenuOption_C::HandleVisibility(bool IsVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "HandleVisibility");

	Params::UWBP_PlayerContextMenuOption_C_HandleVisibility_Params Parms{};

	Parms.IsVisibility = IsVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.ExecuteUbergraph_WBP_PlayerContextMenuOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isVisibility                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadConfirmButton_ReturnValue                     (HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconForGamepadButton_Icon                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         K2Node_CustomEvent_InputState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsGamepad                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentOptionText_ReturnValue                        (None)
// enum class EPlayerContextOptions   CallFunc_GetContextOption_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isActive                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenuOption_C::ExecuteUbergraph_WBP_PlayerContextMenuOption(int32 EntryPoint, bool K2Node_Event_isVisibility, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, bool K2Node_ComponentBoundEvent_IsGamepad, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class FText CallFunc_GetCurrentOptionText_ReturnValue, enum class EPlayerContextOptions CallFunc_GetContextOption_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_isActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "ExecuteUbergraph_WBP_PlayerContextMenuOption");

	Params::UWBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_isVisibility = K2Node_Event_isVisibility;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetGamepadConfirmButton_ReturnValue = CallFunc_GetGamepadConfirmButton_ReturnValue;
	Parms.CallFunc_GetIconForGamepadButton_Icon = CallFunc_GetIconForGamepadButton_Icon;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.K2Node_CustomEvent_InputState = K2Node_CustomEvent_InputState;
	Parms.K2Node_ComponentBoundEvent_IsGamepad = K2Node_ComponentBoundEvent_IsGamepad;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetCurrentOptionText_ReturnValue = CallFunc_GetCurrentOptionText_ReturnValue;
	Parms.CallFunc_GetContextOption_ReturnValue = CallFunc_GetContextOption_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_isActive = K2Node_Event_isActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.OnContextOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerContextOptions   Context_Option                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerContextMenuOption_C::OnContextOptionSelected__DelegateSignature(enum class EPlayerContextOptions Context_Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerContextMenuOption_C", "OnContextOptionSelected__DelegateSignature");

	Params::UWBP_PlayerContextMenuOption_C_OnContextOptionSelected__DelegateSignature_Params Parms{};

	Parms.Context_Option = Context_Option;

	UObject::ProcessEvent(Func, &Parms);

}

}


