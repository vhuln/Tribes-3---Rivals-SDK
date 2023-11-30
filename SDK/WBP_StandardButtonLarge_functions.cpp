#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_StandardButtonLarge.WBP_StandardButtonLarge_C
// (None)

class UClass* UWBP_StandardButtonLarge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_StandardButtonLarge_C");

	return Clss;
}


// WBP_StandardButtonLarge_C WBP_StandardButtonLarge.Default__WBP_StandardButtonLarge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_StandardButtonLarge_C* UWBP_StandardButtonLarge_C::GetDefaultObj()
{
	static class UWBP_StandardButtonLarge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_StandardButtonLarge_C*>(UWBP_StandardButtonLarge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::SetDisabled(bool Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "SetDisabled");

	Params::UWBP_StandardButtonLarge_C_SetDisabled_Params Parms{};

	Parms.Disabled = Disabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetFontStyleNameByType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        FontName                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::GetFontStyleNameByType(class FName* FontName, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "GetFontStyleNameByType");

	Params::UWBP_StandardButtonLarge_C_GetFontStyleNameByType_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (FontName != nullptr)
		*FontName = Parms.FontName;

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InHeight                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::SetHeight(double InHeight, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "SetHeight");

	Params::UWBP_StandardButtonLarge_C_SetHeight_Params Parms{};

	Parms.InHeight = InHeight;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetGamepadPromptKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasValidKeyPrompt                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               GamepadKey                                                       (Parm, OutParm, HasGetValueTypeHash)
// struct InputCore_Key               NoneKey                                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadCancelButton_ReturnValue                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadConfirmButton_ReturnValue                     (HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::GetGamepadPromptKey(bool* HasValidKeyPrompt, struct InputCore_Key* GamepadKey, const struct InputCore_Key& NoneKey, const struct InputCore_Key& CallFunc_GetGamepadCancelButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "GetGamepadPromptKey");

	Params::UWBP_StandardButtonLarge_C_GetGamepadPromptKey_Params Parms{};

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


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Set Key Prompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct InputCore_Key               Prompt                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::Set_Key_Prompt(const struct InputCore_Key& Prompt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "Set Key Prompt");

	Params::UWBP_StandardButtonLarge_C_Set_Key_Prompt_Params Parms{};

	Parms.Prompt = Prompt;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetGamepadPromptForAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadButtonForAction_Button                        (HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadButtonForAction_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::SetGamepadPromptForAction(class FName Action, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "SetGamepadPromptForAction");

	Params::UWBP_StandardButtonLarge_C_SetGamepadPromptForAction_Params Parms{};

	Parms.Action = Action;
	Parms.CallFunc_GetGamepadButtonForAction_Button = CallFunc_GetGamepadButtonForAction_Button;
	Parms.CallFunc_GetGamepadButtonForAction_ReturnValue = CallFunc_GetGamepadButtonForAction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDefaultDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Slate_Anchors               K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class FName                        CallFunc_GetFontStyleNameByType_FontName                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFontByName_HasFound                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     CallFunc_GetFontByName_FontInfo                                  (HasGetValueTypeHash)
// struct Slate_Anchors               K2Node_MakeStruct_Anchors_1                                      (NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::SetDefaultDisplay(const struct Slate_Anchors& K2Node_MakeStruct_Anchors, class FName CallFunc_GetFontStyleNameByType_FontName, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo, const struct Slate_Anchors& K2Node_MakeStruct_Anchors_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "SetDefaultDisplay");

	Params::UWBP_StandardButtonLarge_C_SetDefaultDisplay_Params Parms{};

	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_GetFontStyleNameByType_FontName = CallFunc_GetFontStyleNameByType_FontName;
	Parms.CallFunc_GetFontByName_HasFound = CallFunc_GetFontByName_HasFound;
	Parms.CallFunc_GetFontByName_FontInfo = CallFunc_GetFontByName_FontInfo;
	Parms.K2Node_MakeStruct_Anchors_1 = K2Node_MakeStruct_Anchors_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InWidth                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::SetWidth(double InWidth, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "SetWidth");

	Params::UWBP_StandardButtonLarge_C_SetWidth_Params Parms{};

	Parms.InWidth = InWidth;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ButtonText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StandardButtonLarge_C::SetButtonText(class FText ButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "SetButtonText");

	Params::UWBP_StandardButtonLarge_C_SetButtonText_Params Parms{};

	Parms.ButtonText = ButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_StandardButtonLarge_C::NavigateConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "NavigateConfirm");

	Params::UWBP_StandardButtonLarge_C_NavigateConfirm_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "PreConstruct");

	Params::UWBP_StandardButtonLarge_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonLarge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonLarge_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadUnhover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonLarge_C::GamepadUnhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "GamepadUnhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonLarge_C::GamepadConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "GamepadConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonLarge_C::Do_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "Do Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Unhover
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonLarge_C::Do_Unhover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "Do Unhover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.HandleInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::HandleInputStateChanged(enum class ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "HandleInputStateChanged");

	Params::UWBP_StandardButtonLarge_C_HandleInputStateChanged_Params Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StandardButtonLarge_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	Params::UWBP_StandardButtonLarge_C_BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature");

	Params::UWBP_StandardButtonLarge_C_BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_4_OnHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature");

	Params::UWBP_StandardButtonLarge_C_BndEvt__WBP_StandardButtonLarge_WBP_StandardButton_02_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.ExecuteUbergraph_WBP_StandardButtonLarge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         K2Node_CustomEvent_InputState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadPromptKey_HasValidKeyPrompt                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadPromptKey_GamepadKey                          (HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::ExecuteUbergraph_WBP_StandardButtonLarge(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility Temp_byte_Variable_1, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetGamepadPromptKey_HasValidKeyPrompt, const struct InputCore_Key& CallFunc_GetGamepadPromptKey_GamepadKey, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_Widget_2, class UWidget* K2Node_ComponentBoundEvent_Widget_1, class UWidget* K2Node_ComponentBoundEvent_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "ExecuteUbergraph_WBP_StandardButtonLarge");

	Params::UWBP_StandardButtonLarge_C_ExecuteUbergraph_WBP_StandardButtonLarge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_InputState = K2Node_CustomEvent_InputState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGamepadPromptKey_HasValidKeyPrompt = CallFunc_GetGamepadPromptKey_HasValidKeyPrompt;
	Parms.CallFunc_GetGamepadPromptKey_GamepadKey = CallFunc_GetGamepadPromptKey_GamepadKey;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::OnUnhovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "OnUnhovered__DelegateSignature");

	Params::UWBP_StandardButtonLarge_C_OnUnhovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::OnHovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "OnHovered__DelegateSignature");

	Params::UWBP_StandardButtonLarge_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_StandardButtonLarge_C::OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StandardButtonLarge_C", "OnClicked__DelegateSignature");

	Params::UWBP_StandardButtonLarge_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


