#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ButtonStacked.WBP_ButtonStacked_C
// (None)

class UClass* UWBP_ButtonStacked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ButtonStacked_C");

	return Clss;
}


// WBP_ButtonStacked_C WBP_ButtonStacked.Default__WBP_ButtonStacked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ButtonStacked_C* UWBP_ButtonStacked_C::GetDefaultObj()
{
	static class UWBP_ButtonStacked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ButtonStacked_C*>(UWBP_ButtonStacked_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetVisuallyDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldDisable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetColorByName_HasFound                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetColorByName_Color                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetColorByName_HasFound_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetColorByName_Color_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_MakeColor_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_MakeColor_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonStacked_C::SetVisuallyDisabled(bool ShouldDisable, bool CallFunc_GetColorByName_HasFound, const struct CoreUObject_LinearColor& CallFunc_GetColorByName_Color, double CallFunc_SelectFloat_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, double CallFunc_SelectFloat_ReturnValue_1, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue, bool CallFunc_GetColorByName_HasFound_1, const struct CoreUObject_LinearColor& CallFunc_GetColorByName_Color_1, float CallFunc_BreakColor_R_1, float CallFunc_BreakColor_G_1, float CallFunc_BreakColor_B_1, float CallFunc_BreakColor_A_1, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue_1, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue_2, bool Temp_bool_Variable, const struct CoreUObject_LinearColor& K2Node_Select_Default, const struct CoreUObject_LinearColor& CallFunc_SelectColor_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "SetVisuallyDisabled");

	Params::UWBP_ButtonStacked_C_SetVisuallyDisabled_Params Parms{};

	Parms.ShouldDisable = ShouldDisable;
	Parms.CallFunc_GetColorByName_HasFound = CallFunc_GetColorByName_HasFound;
	Parms.CallFunc_GetColorByName_Color = CallFunc_GetColorByName_Color;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_GetColorByName_HasFound_1 = CallFunc_GetColorByName_HasFound_1;
	Parms.CallFunc_GetColorByName_Color_1 = CallFunc_GetColorByName_Color_1;
	Parms.CallFunc_BreakColor_R_1 = CallFunc_BreakColor_R_1;
	Parms.CallFunc_BreakColor_G_1 = CallFunc_BreakColor_G_1;
	Parms.CallFunc_BreakColor_B_1 = CallFunc_BreakColor_B_1;
	Parms.CallFunc_BreakColor_A_1 = CallFunc_BreakColor_A_1;
	Parms.CallFunc_MakeColor_ReturnValue_1 = CallFunc_MakeColor_ReturnValue_1;
	Parms.CallFunc_MakeColor_ReturnValue_2 = CallFunc_MakeColor_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetInitialDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetColorByName_HasFound                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetColorByName_Color                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_MakeColor_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_MakeColor_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetColorByName_HasFound_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetColorByName_Color_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_MakeColor_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonStacked_C::SetInitialDisplay(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_GetColorByName_HasFound, const struct CoreUObject_LinearColor& CallFunc_GetColorByName_Color, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue_1, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue_2, const struct CoreUObject_LinearColor& K2Node_Select_Default, bool CallFunc_GetColorByName_HasFound_1, const struct CoreUObject_LinearColor& CallFunc_GetColorByName_Color_1, float CallFunc_BreakColor_R_1, float CallFunc_BreakColor_G_1, float CallFunc_BreakColor_B_1, float CallFunc_BreakColor_A_1, const struct CoreUObject_LinearColor& CallFunc_MakeColor_ReturnValue_3, const struct CoreUObject_LinearColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "SetInitialDisplay");

	Params::UWBP_ButtonStacked_C_SetInitialDisplay_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetColorByName_HasFound = CallFunc_GetColorByName_HasFound;
	Parms.CallFunc_GetColorByName_Color = CallFunc_GetColorByName_Color;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue_1 = CallFunc_MakeColor_ReturnValue_1;
	Parms.CallFunc_MakeColor_ReturnValue_2 = CallFunc_MakeColor_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetColorByName_HasFound_1 = CallFunc_GetColorByName_HasFound_1;
	Parms.CallFunc_GetColorByName_Color_1 = CallFunc_GetColorByName_Color_1;
	Parms.CallFunc_BreakColor_R_1 = CallFunc_BreakColor_R_1;
	Parms.CallFunc_BreakColor_G_1 = CallFunc_BreakColor_G_1;
	Parms.CallFunc_BreakColor_B_1 = CallFunc_BreakColor_B_1;
	Parms.CallFunc_BreakColor_A_1 = CallFunc_BreakColor_A_1;
	Parms.CallFunc_MakeColor_ReturnValue_3 = CallFunc_MakeColor_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnHoveredLogic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonStacked_C::OnHoveredLogic(bool IsGamepad, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "OnHoveredLogic");

	Params::UWBP_ButtonStacked_C_OnHoveredLogic_Params Parms{};

	Parms.IsGamepad = IsGamepad;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_ButtonStacked_C::NavigateConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "NavigateConfirm");

	Params::UWBP_ButtonStacked_C_NavigateConfirm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ButtonStacked_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnGamepadConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ButtonStacked_C::OnGamepadConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "OnGamepadConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ButtonStacked_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ButtonStacked_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.DisableButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldDisable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonStacked_C::DisableButton(bool bShouldDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "DisableButton");

	Params::UWBP_ButtonStacked_C_DisableButton_Params Parms{};

	Parms.bShouldDisable = bShouldDisable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.CallButtonHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ButtonStacked_C::CallButtonHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "CallButtonHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.CallButtonUnhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ButtonStacked_C::CallButtonUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "CallButtonUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.SetIsActiveState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonStacked_C::SetIsActiveState(bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "SetIsActiveState");

	Params::UWBP_ButtonStacked_C_SetIsActiveState_Params Parms{};

	Parms.bIsActive = bIsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonStacked_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "PreConstruct");

	Params::UWBP_ButtonStacked_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ButtonStacked_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.ExecuteUbergraph_WBP_ButtonStacked
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bShouldDisable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsActive                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonStacked_C::ExecuteUbergraph_WBP_ButtonStacked(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool K2Node_CustomEvent_bShouldDisable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, bool K2Node_CustomEvent_bIsActive, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "ExecuteUbergraph_WBP_ButtonStacked");

	Params::UWBP_ButtonStacked_C_ExecuteUbergraph_WBP_ButtonStacked_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_bShouldDisable = K2Node_CustomEvent_bShouldDisable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CustomEvent_bIsActive = K2Node_CustomEvent_bIsActive;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ButtonStacked_C::OnBtnStackedReleased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "OnBtnStackedReleased__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ButtonStacked_C::OnBtnStackedUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "OnBtnStackedUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonStacked_C::OnBtnStackedHovered__DelegateSignature(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "OnBtnStackedHovered__DelegateSignature");

	Params::UWBP_ButtonStacked_C_OnBtnStackedHovered__DelegateSignature_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonStacked.WBP_ButtonStacked_C.OnBtnStackedClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ButtonStacked_C::OnBtnStackedClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonStacked_C", "OnBtnStackedClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


