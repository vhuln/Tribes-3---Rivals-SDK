#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ButtonArrow.WBP_ButtonArrow_C
// (None)

class UClass* UWBP_ButtonArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ButtonArrow_C");

	return Clss;
}


// WBP_ButtonArrow_C WBP_ButtonArrow.Default__WBP_ButtonArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ButtonArrow_C* UWBP_ButtonArrow_C::GetDefaultObj()
{
	static class UWBP_ButtonArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ButtonArrow_C*>(UWBP_ButtonArrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnHoveredLogic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonArrow_C::OnHoveredLogic(bool IsGamepad, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "OnHoveredLogic");

	Params::UWBP_ButtonArrow_C_OnHoveredLogic_Params Parms{};

	Parms.IsGamepad = IsGamepad;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_ButtonArrow_C::NavigateConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "NavigateConfirm");

	Params::UWBP_ButtonArrow_C_NavigateConfirm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ButtonArrow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnGamepadConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ButtonArrow_C::OnGamepadConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "OnGamepadConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ButtonArrow_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ButtonArrow_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ButtonArrow_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ButtonArrow_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ButtonArrow_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.DisableButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldDisable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonArrow_C::DisableButton(bool bShouldDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "DisableButton");

	Params::UWBP_ButtonArrow_C_DisableButton_Params Parms{};

	Parms.bShouldDisable = bShouldDisable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.CallButtonHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ButtonArrow_C::CallButtonHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "CallButtonHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.CallButtonUnhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ButtonArrow_C::CallButtonUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "CallButtonUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonArrow_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "PreConstruct");

	Params::UWBP_ButtonArrow_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.ExecuteUbergraph_WBP_ButtonArrow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bShouldDisable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetColorByName_HasFound                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     CallFunc_GetColorByName_Color                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor                                     (None)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonArrow_C::ExecuteUbergraph_WBP_ButtonArrow(int32 EntryPoint, bool K2Node_CustomEvent_bShouldDisable, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_GetColorByName_HasFound, const struct CoreUObject_LinearColor& CallFunc_GetColorByName_Color, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "ExecuteUbergraph_WBP_ButtonArrow");

	Params::UWBP_ButtonArrow_C_ExecuteUbergraph_WBP_ButtonArrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bShouldDisable = K2Node_CustomEvent_bShouldDisable;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetColorByName_HasFound = CallFunc_GetColorByName_HasFound;
	Parms.CallFunc_GetColorByName_Color = CallFunc_GetColorByName_Color;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnBtnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ButtonArrow_C::OnBtnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "OnBtnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnBtnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGamepad                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ButtonArrow_C::OnBtnHovered__DelegateSignature(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "OnBtnHovered__DelegateSignature");

	Params::UWBP_ButtonArrow_C_OnBtnHovered__DelegateSignature_Params Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ButtonArrow.WBP_ButtonArrow_C.OnBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ButtonArrow_C::OnBtnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ButtonArrow_C", "OnBtnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


