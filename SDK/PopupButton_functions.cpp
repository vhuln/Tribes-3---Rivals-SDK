#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PopupButton.PopupButton_C
// (None)

class UClass* UPopupButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PopupButton_C");

	return Clss;
}


// PopupButton_C PopupButton.Default__PopupButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPopupButton_C* UPopupButton_C::GetDefaultObj()
{
	static class UPopupButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPopupButton_C*>(UPopupButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PopupButton.PopupButton_C.NavigateBack
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateBack_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPopupButton_C::NavigateBack(bool CallFunc_NavigateBack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButton_C", "NavigateBack");

	Params::UPopupButton_C_NavigateBack_Params Parms{};

	Parms.CallFunc_NavigateBack_ReturnValue = CallFunc_NavigateBack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PopupButton.PopupButton_C.ToggleGamepadCallout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupButton_C::ToggleGamepadCallout(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButton_C", "ToggleGamepadCallout");

	Params::UPopupButton_C_ToggleGamepadCallout_Params Parms{};

	Parms.Show = Show;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupButton.PopupButton_C.SetDisplayText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UPopupButton_C::SetDisplayText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButton_C", "SetDisplayText");

	Params::UPopupButton_C_SetDisplayText_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupButton.PopupButton_C.SetButtonCalloutImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InActionName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadButtonForAction_Button                        (HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadButtonForAction_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconForGamepadButton_Icon                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UPopupButton_C::SetButtonCalloutImage(class FName InActionName, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButton_C", "SetButtonCalloutImage");

	Params::UPopupButton_C_SetButtonCalloutImage_Params Parms{};

	Parms.InActionName = InActionName;
	Parms.CallFunc_GetGamepadButtonForAction_Button = CallFunc_GetGamepadButtonForAction_Button;
	Parms.CallFunc_GetGamepadButtonForAction_ReturnValue = CallFunc_GetGamepadButtonForAction_ReturnValue;
	Parms.CallFunc_GetIconForGamepadButton_Icon = CallFunc_GetIconForGamepadButton_Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupButton.PopupButton_C.SetFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              In_Font_Size                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Size_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupButton_C::SetFontSize(int32 In_Font_Size, double CallFunc_Conv_IntToDouble_ReturnValue, const struct SlateCore_SlateFontInfo& K2Node_MakeStruct_SlateFontInfo, float K2Node_MakeStruct_Size_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButton_C", "SetFontSize");

	Params::UPopupButton_C_SetFontSize_Params Parms{};

	Parms.In_Font_Size = In_Font_Size;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_MakeStruct_Size_ImplicitCast = K2Node_MakeStruct_Size_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupButton.PopupButton_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPopupButton_C::NavigateConfirm(bool CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButton_C", "NavigateConfirm");

	Params::UPopupButton_C_NavigateConfirm_Params Parms{};

	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PopupButton.PopupButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButton_C", "PreConstruct");

	Params::UPopupButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupButton.PopupButton_C.GamepadPress
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPopupButton_C::GamepadPress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButton_C", "GamepadPress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupButton.PopupButton_C.OnNavBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPopupButton_C::OnNavBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButton_C", "OnNavBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupButton.PopupButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPopupButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupButton.PopupButton_C.BndEvt__PopupButton_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UPopupButton_C::BndEvt__PopupButton_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButton_C", "BndEvt__PopupButton_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	Params::UPopupButton_C_BndEvt__PopupButton_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupButton.PopupButton_C.ExecuteUbergraph_PopupButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFontByName_HasFound                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     CallFunc_GetFontByName_FontInfo                                  (HasGetValueTypeHash)

void UPopupButton_C::ExecuteUbergraph_PopupButton(int32 EntryPoint, class UWidget* K2Node_ComponentBoundEvent_Widget, bool K2Node_Event_IsDesignTime, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButton_C", "ExecuteUbergraph_PopupButton");

	Params::UPopupButton_C_ExecuteUbergraph_PopupButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetFontByName_HasFound = CallFunc_GetFontByName_HasFound;
	Parms.CallFunc_GetFontByName_FontInfo = CallFunc_GetFontByName_FontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PopupButton.PopupButton_C.OnNavigateBackAction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPopupButton_C::OnNavigateBackAction__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButton_C", "OnNavigateBackAction__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PopupButton.PopupButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPopupButton_C::OnClicked__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PopupButton_C", "OnClicked__DelegateSignature");

	Params::UPopupButton_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


