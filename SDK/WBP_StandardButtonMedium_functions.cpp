#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_StandardButtonMedium.WBP_StandardButtonMedium_C
// (None)

class UClass* UWBP_StandardButtonMedium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_StandardButtonMedium_C");

	return Clss;
}


// WBP_StandardButtonMedium_C WBP_StandardButtonMedium.Default__WBP_StandardButtonMedium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_StandardButtonMedium_C* UWBP_StandardButtonMedium_C::GetDefaultObj()
{
	static class UWBP_StandardButtonMedium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_StandardButtonMedium_C*>(UWBP_StandardButtonMedium_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GetGamepadPromptKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasValidKeyPrompt                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               GamepadKey                                                       (Parm, OutParm, HasGetValueTypeHash)
// struct InputCore_Key               NoneKey                                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadCancelButton_ReturnValue                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadConfirmButton_ReturnValue                     (HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::GetGamepadPromptKey(bool* HasValidKeyPrompt, struct InputCore_Key* GamepadKey, const struct InputCore_Key& NoneKey, const struct InputCore_Key& CallFunc_GetGamepadCancelButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "GetGamepadPromptKey");

	Params::UWBP_StandardButtonMedium_C_GetGamepadPromptKey_Params Parms{};

	Parms.NoneKey = NoneKey;
	Parms.CallFunc_GetGamepadCancelButton_ReturnValue = CallFunc_GetGamepadCancelButton_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGamepadConfirmButton_ReturnValue = CallFunc_GetGamepadConfirmButton_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasValidKeyPrompt != nullptr)
		*HasValidKeyPrompt = Parms.HasValidKeyPrompt;

	if (GamepadKey != nullptr)
		*GamepadKey = std::move(Parms.GamepadKey);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetKeyPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct InputCore_Key               GamepadButton                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::SetKeyPrompt(const struct InputCore_Key& GamepadButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "SetKeyPrompt");

	Params::UWBP_StandardButtonMedium_C_SetKeyPrompt_Params Parms{};

	Parms.GamepadButton = GamepadButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetDefaultDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Slate_Anchors               K2Node_MakeStruct_Anchors                                        (NoDestructor)
// bool                               CallFunc_GetFontByName_HasFound                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     CallFunc_GetFontByName_FontInfo                                  (HasGetValueTypeHash)
// struct Slate_Anchors               K2Node_MakeStruct_Anchors_1                                      (NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::SetDefaultDisplay(const struct Slate_Anchors& K2Node_MakeStruct_Anchors, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo, const struct Slate_Anchors& K2Node_MakeStruct_Anchors_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "SetDefaultDisplay");

	Params::UWBP_StandardButtonMedium_C_SetDefaultDisplay_Params Parms{};

	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_GetFontByName_HasFound = CallFunc_GetFontByName_HasFound;
	Parms.CallFunc_GetFontByName_FontInfo = CallFunc_GetFontByName_FontInfo;
	Parms.K2Node_MakeStruct_Anchors_1 = K2Node_MakeStruct_Anchors_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InWidth                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::SetWidth(double InWidth, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "SetWidth");

	Params::UWBP_StandardButtonMedium_C_SetWidth_Params Parms{};

	Parms.InWidth = InWidth;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StandardButtonMedium_C::SetButtonText(class FText ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "SetButtonText");

	Params::UWBP_StandardButtonMedium_C_SetButtonText_Params Parms{};

	Parms.ButtonText = ButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_StandardButtonMedium_C::NavigateConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "NavigateConfirm");

	Params::UWBP_StandardButtonMedium_C_NavigateConfirm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "PreConstruct");

	Params::UWBP_StandardButtonMedium_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonMedium_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonMedium_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonMedium_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonMedium_C::GamepadConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "GamepadConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Do Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonMedium_C::Do_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "Do Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Do Unhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonMedium_C::Do_Unhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "Do Unhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonMedium_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.HandleInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::HandleInputStateChanged(enum class ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "HandleInputStateChanged");

	Params::UWBP_StandardButtonMedium_C_HandleInputStateChanged_Params Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonMedium_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature");

	Params::UWBP_StandardButtonMedium_C_BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature");

	Params::UWBP_StandardButtonMedium_C_BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	Params::UWBP_StandardButtonMedium_C_BndEvt__WBP_StandardButtonMedium_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.ExecuteUbergraph_WBP_StandardButtonMedium
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         K2Node_CustomEvent_InputState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadPromptKey_HasValidKeyPrompt                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadPromptKey_GamepadKey                          (HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadPromptKey_HasValidKeyPrompt_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadPromptKey_GamepadKey_1                        (HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadPromptKey_HasValidKeyPrompt_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadPromptKey_GamepadKey_2                        (HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::ExecuteUbergraph_WBP_StandardButtonMedium(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable_1, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetGamepadPromptKey_HasValidKeyPrompt, const struct InputCore_Key& CallFunc_GetGamepadPromptKey_GamepadKey, bool CallFunc_GetGamepadPromptKey_HasValidKeyPrompt_1, const struct InputCore_Key& CallFunc_GetGamepadPromptKey_GamepadKey_1, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetGamepadPromptKey_HasValidKeyPrompt_2, const struct InputCore_Key& CallFunc_GetGamepadPromptKey_GamepadKey_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class UWidget* K2Node_ComponentBoundEvent_Widget_2, class UWidget* K2Node_ComponentBoundEvent_Widget_1, class UWidget* K2Node_ComponentBoundEvent_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "ExecuteUbergraph_WBP_StandardButtonMedium");

	Params::UWBP_StandardButtonMedium_C_ExecuteUbergraph_WBP_StandardButtonMedium_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CustomEvent_InputState = K2Node_CustomEvent_InputState;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetGamepadPromptKey_HasValidKeyPrompt = CallFunc_GetGamepadPromptKey_HasValidKeyPrompt;
	Parms.CallFunc_GetGamepadPromptKey_GamepadKey = CallFunc_GetGamepadPromptKey_GamepadKey;
	Parms.CallFunc_GetGamepadPromptKey_HasValidKeyPrompt_1 = CallFunc_GetGamepadPromptKey_HasValidKeyPrompt_1;
	Parms.CallFunc_GetGamepadPromptKey_GamepadKey_1 = CallFunc_GetGamepadPromptKey_GamepadKey_1;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGamepadPromptKey_HasValidKeyPrompt_2 = CallFunc_GetGamepadPromptKey_HasValidKeyPrompt_2;
	Parms.CallFunc_GetGamepadPromptKey_GamepadKey_2 = CallFunc_GetGamepadPromptKey_GamepadKey_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "OnUnhovered__DelegateSignature");

	Params::UWBP_StandardButtonMedium_C_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::OnHovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "OnHovered__DelegateSignature");

	Params::UWBP_StandardButtonMedium_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonMedium_C::OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonMedium_C", "OnClicked__DelegateSignature");

	Params::UWBP_StandardButtonMedium_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


