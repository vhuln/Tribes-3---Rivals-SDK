#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_StandardButton_02.WBP_StandardButton_02_C
// (None)

class UClass* UWBP_StandardButton_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_StandardButton_02_C");

	return Clss;
}


// WBP_StandardButton_02_C WBP_StandardButton_02.Default__WBP_StandardButton_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_StandardButton_02_C* UWBP_StandardButton_02_C::GetDefaultObj()
{
	static class UWBP_StandardButton_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_StandardButton_02_C*>(UWBP_StandardButton_02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.SetDefaultDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ButtonFontStyle       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFontByName_HasFound                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     CallFunc_GetFontByName_FontInfo                                  (HasGetValueTypeHash)
// bool                               CallFunc_GetFontByName_HasFound_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     CallFunc_GetFontByName_FontInfo_1                                (HasGetValueTypeHash)
// bool                               CallFunc_GetFontByName_HasFound_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     CallFunc_GetFontByName_FontInfo_2                                (HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     K2Node_Select_Default                                            (HasGetValueTypeHash)

void UWBP_StandardButton_02_C::SetDefaultDisplay(enum class E_ButtonFontStyle Temp_byte_Variable, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo, bool CallFunc_GetFontByName_HasFound_1, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo_1, bool CallFunc_GetFontByName_HasFound_2, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo_2, const struct SlateCore_SlateFontInfo& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "SetDefaultDisplay");

	Params::UWBP_StandardButton_02_C_SetDefaultDisplay_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetFontByName_HasFound = CallFunc_GetFontByName_HasFound;
	Parms.CallFunc_GetFontByName_FontInfo = CallFunc_GetFontByName_FontInfo;
	Parms.CallFunc_GetFontByName_HasFound_1 = CallFunc_GetFontByName_HasFound_1;
	Parms.CallFunc_GetFontByName_FontInfo_1 = CallFunc_GetFontByName_FontInfo_1;
	Parms.CallFunc_GetFontByName_HasFound_2 = CallFunc_GetFontByName_HasFound_2;
	Parms.CallFunc_GetFontByName_FontInfo_2 = CallFunc_GetFontByName_FontInfo_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.SetWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InWidth                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButton_02_C::SetWidth(double InWidth, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "SetWidth");

	Params::UWBP_StandardButton_02_C_SetWidth_Params Parms{};

	Parms.InWidth = InWidth;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StandardButton_02_C::SetButtonText(class FText ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "SetButtonText");

	Params::UWBP_StandardButton_02_C_SetButtonText_Params Parms{};

	Parms.ButtonText = ButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_StandardButton_02_C::NavigateConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "NavigateConfirm");

	Params::UWBP_StandardButton_02_C_NavigateConfirm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButton_02_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "PreConstruct");

	Params::UWBP_StandardButton_02_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButton_02_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_StandardButton_02_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_StandardButton_02_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_StandardButton_02_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButton_02_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButton_02_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButton_02_C::GamepadConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "GamepadConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.Do Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButton_02_C::Do_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "Do Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.Do Unhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButton_02_C::Do_Unhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "Do Unhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.ExecuteUbergraph_WBP_StandardButton_02
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButton_02_C::ExecuteUbergraph_WBP_StandardButton_02(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "ExecuteUbergraph_WBP_StandardButton_02");

	Params::UWBP_StandardButton_02_C_ExecuteUbergraph_WBP_StandardButton_02_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButton_02_C::OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "OnUnhovered__DelegateSignature");

	Params::UWBP_StandardButton_02_C_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButton_02_C::OnHovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "OnHovered__DelegateSignature");

	Params::UWBP_StandardButton_02_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButton_02.WBP_StandardButton_02_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButton_02_C::OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButton_02_C", "OnClicked__DelegateSignature");

	Params::UWBP_StandardButton_02_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


