#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_StandardButtonSmall.WBP_StandardButtonSmall_C
// (None)

class UClass* UWBP_StandardButtonSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_StandardButtonSmall_C");

	return Clss;
}


// WBP_StandardButtonSmall_C WBP_StandardButtonSmall.Default__WBP_StandardButtonSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_StandardButtonSmall_C* UWBP_StandardButtonSmall_C::GetDefaultObj()
{
	static class UWBP_StandardButtonSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_StandardButtonSmall_C*>(UWBP_StandardButtonSmall_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.SetKeyPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct InputCore_Key               Prompt                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconForGamepadButton_Icon                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonSmall_C::SetKeyPrompt(const struct InputCore_Key& Prompt, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "SetKeyPrompt");

	Params::UWBP_StandardButtonSmall_C_SetKeyPrompt_Params Parms{};

	Parms.Prompt = Prompt;
	Parms.CallFunc_GetIconForGamepadButton_Icon = CallFunc_GetIconForGamepadButton_Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.GetGamepadPromptKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasValidKeyPrompt                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               GamepadKey                                                       (Parm, OutParm, HasGetValueTypeHash)
// struct InputCore_Key               NoneKey                                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadCancelButton_ReturnValue                      (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadConfirmButton_ReturnValue                     (HasGetValueTypeHash)

void UWBP_StandardButtonSmall_C::GetGamepadPromptKey(bool* HasValidKeyPrompt, struct InputCore_Key* GamepadKey, const struct InputCore_Key& NoneKey, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadCancelButton_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "GetGamepadPromptKey");

	Params::UWBP_StandardButtonSmall_C_GetGamepadPromptKey_Params Parms{};

	Parms.NoneKey = NoneKey;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_GetGamepadCancelButton_ReturnValue = CallFunc_GetGamepadCancelButton_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGamepadConfirmButton_ReturnValue = CallFunc_GetGamepadConfirmButton_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasValidKeyPrompt != nullptr)
		*HasValidKeyPrompt = Parms.HasValidKeyPrompt;

	if (GamepadKey != nullptr)
		*GamepadKey = std::move(Parms.GamepadKey);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.SetHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewHeight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonSmall_C::SetHeight(double NewHeight, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "SetHeight");

	Params::UWBP_StandardButtonSmall_C_SetHeight_Params Parms{};

	Parms.NewHeight = NewHeight;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.SetDefaultDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetFontByName_HasFound                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     CallFunc_GetFontByName_FontInfo                                  (HasGetValueTypeHash)

void UWBP_StandardButtonSmall_C::SetDefaultDisplay(bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "SetDefaultDisplay");

	Params::UWBP_StandardButtonSmall_C_SetDefaultDisplay_Params Parms{};

	Parms.CallFunc_GetFontByName_HasFound = CallFunc_GetFontByName_HasFound;
	Parms.CallFunc_GetFontByName_FontInfo = CallFunc_GetFontByName_FontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.SetWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InWidth                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonSmall_C::SetWidth(double InWidth, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "SetWidth");

	Params::UWBP_StandardButtonSmall_C_SetWidth_Params Parms{};

	Parms.InWidth = InWidth;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StandardButtonSmall_C::SetButtonText(class FText ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "SetButtonText");

	Params::UWBP_StandardButtonSmall_C_SetButtonText_Params Parms{};

	Parms.ButtonText = ButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_StandardButtonSmall_C::NavigateConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "NavigateConfirm");

	Params::UWBP_StandardButtonSmall_C_NavigateConfirm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonSmall_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "PreConstruct");

	Params::UWBP_StandardButtonSmall_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonSmall_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonSmall_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonSmall_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonSmall_C::GamepadConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "GamepadConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.Do Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonSmall_C::Do_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "Do Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.Do Unhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonSmall_C::Do_Unhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "Do Unhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.HandleInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonSmall_C::HandleInputStateChanged(enum class ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "HandleInputStateChanged");

	Params::UWBP_StandardButtonSmall_C_HandleInputStateChanged_Params Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonSmall_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonSmall_C::BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature");

	Params::UWBP_StandardButtonSmall_C_BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonSmall_C::BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature");

	Params::UWBP_StandardButtonSmall_C_BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonSmall_C::BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	Params::UWBP_StandardButtonSmall_C_BndEvt__WBP_StandardButtonSmall_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.ExecuteUbergraph_WBP_StandardButtonSmall
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         K2Node_CustomEvent_InputState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadPromptKey_HasValidKeyPrompt                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadPromptKey_GamepadKey                          (HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonSmall_C::ExecuteUbergraph_WBP_StandardButtonSmall(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetGamepadPromptKey_HasValidKeyPrompt, const struct InputCore_Key& CallFunc_GetGamepadPromptKey_GamepadKey, enum class ESlateVisibility K2Node_Select_Default, class UWidget* K2Node_ComponentBoundEvent_Widget_2, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_Widget_1, class UWidget* K2Node_ComponentBoundEvent_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "ExecuteUbergraph_WBP_StandardButtonSmall");

	Params::UWBP_StandardButtonSmall_C_ExecuteUbergraph_WBP_StandardButtonSmall_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_InputState = K2Node_CustomEvent_InputState;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetGamepadPromptKey_HasValidKeyPrompt = CallFunc_GetGamepadPromptKey_HasValidKeyPrompt;
	Parms.CallFunc_GetGamepadPromptKey_GamepadKey = CallFunc_GetGamepadPromptKey_GamepadKey;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonSmall_C::OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "OnUnhovered__DelegateSignature");

	Params::UWBP_StandardButtonSmall_C_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonSmall_C::OnHovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "OnHovered__DelegateSignature");

	Params::UWBP_StandardButtonSmall_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonSmall.WBP_StandardButtonSmall_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonSmall_C::OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonSmall_C", "OnClicked__DelegateSignature");

	Params::UWBP_StandardButtonSmall_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


