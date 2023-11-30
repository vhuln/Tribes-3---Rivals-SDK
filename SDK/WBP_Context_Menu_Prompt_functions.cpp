#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C
// (None)

class UClass* UWBP_Context_Menu_Prompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Context_Menu_Prompt_C");

	return Clss;
}


// WBP_Context_Menu_Prompt_C WBP_Context_Menu_Prompt.Default__WBP_Context_Menu_Prompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Context_Menu_Prompt_C* UWBP_Context_Menu_Prompt_C::GetDefaultObj()
{
	static class UWBP_Context_Menu_Prompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Context_Menu_Prompt_C*>(UWBP_Context_Menu_Prompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.GetKeyForAction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Gamepad_Key                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               Action_Key                                                       (Parm, OutParm, HasGetValueTypeHash)
// class ARHHUDCommon*                LocalHud                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_ContextActionCallFunc_GetActionContext_Context                                (None)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValInputManager*            K2Node_DynamicCast_AsVal_Input_Manager                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetButtonForInputAction_Button                          (HasGetValueTypeHash)
// bool                               CallFunc_GetButtonForInputAction_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::GetKeyForAction(bool Is_Gamepad_Key, struct InputCore_Key* Action_Key, class ARHHUDCommon* LocalHud, const struct RallyHereStart_ContextAction& CallFunc_GetActionContext_Context, class URHInputManager* CallFunc_GetInputManager_ReturnValue, class UValInputManager* K2Node_DynamicCast_AsVal_Input_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct InputCore_Key& CallFunc_GetButtonForInputAction_Button, bool CallFunc_GetButtonForInputAction_ReturnValue, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "GetKeyForAction");

	Params::UWBP_Context_Menu_Prompt_C_GetKeyForAction_Params Parms{};

	Parms.Is_Gamepad_Key = Is_Gamepad_Key;
	Parms.LocalHud = LocalHud;
	Parms.CallFunc_GetActionContext_Context = CallFunc_GetActionContext_Context;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Input_Manager = K2Node_DynamicCast_AsVal_Input_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetButtonForInputAction_Button = CallFunc_GetButtonForInputAction_Button;
	Parms.CallFunc_GetButtonForInputAction_ReturnValue = CallFunc_GetButtonForInputAction_ReturnValue;
	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;

	UObject::ProcessEvent(Func, &Parms);

	if (Action_Key != nullptr)
		*Action_Key = std::move(Parms.Action_Key);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.GetActionContext
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct RallyHereStart_ContextActionContext                                                          (Parm, OutParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::GetActionContext(struct RallyHereStart_ContextAction* Context, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "GetActionContext");

	Params::UWBP_Context_Menu_Prompt_C_GetActionContext_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.GetActionName
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Action                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::GetActionName(class FName* Action, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "GetActionName");

	Params::UWBP_Context_Menu_Prompt_C_GetActionName_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Action != nullptr)
		*Action = Parms.Action;

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.GetActionText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_Context_Menu_Prompt_C::GetActionText(class FText* Text, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "GetActionText");

	Params::UWBP_Context_Menu_Prompt_C_GetActionText_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PreConstruct
// (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFontByName_HasFound                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     CallFunc_GetFontByName_FontInfo                                  (HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::PreConstruct(bool IsDesignTime, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "PreConstruct");

	Params::UWBP_Context_Menu_Prompt_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;
	Parms.CallFunc_GetFontByName_HasFound = CallFunc_GetFontByName_HasFound;
	Parms.CallFunc_GetFontByName_FontInfo = CallFunc_GetFontByName_FontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.OnInputStateChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::OnInputStateChanged(enum class ERH_INPUT_STATE InputState, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "OnInputStateChanged");

	Params::UWBP_Context_Menu_Prompt_C_OnInputStateChanged_Params Parms{};

	Parms.InputState = InputState;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.EvaluateInputStateStandard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::EvaluateInputStateStandard(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "EvaluateInputStateStandard");

	Params::UWBP_Context_Menu_Prompt_C_EvaluateInputStateStandard_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.EvaluateInputStateCycle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::EvaluateInputStateCycle(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "EvaluateInputStateCycle");

	Params::UWBP_Context_Menu_Prompt_C_EvaluateInputStateCycle_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.EvaluateInputStateHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::EvaluateInputStateHold(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "EvaluateInputStateHold");

	Params::UWBP_Context_Menu_Prompt_C_EvaluateInputStateHold_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PopulateStandardButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct InputCore_Key               KeyboardKey                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct InputCore_Key               GamepadKey                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetKeyForAction_Action_Key                              (HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetKeyForAction_Action_Key_1                            (HasGetValueTypeHash)
// class FText                        CallFunc_GetActionText_Text                                      (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// bool                               CallFunc_Key_IsValid_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Key_GetShortDisplayName_ReturnValue                     (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)

void UWBP_Context_Menu_Prompt_C::PopulateStandardButton(const struct InputCore_Key& KeyboardKey, const struct InputCore_Key& GamepadKey, const struct InputCore_Key& CallFunc_GetKeyForAction_Action_Key, const struct InputCore_Key& CallFunc_GetKeyForAction_Action_Key_1, class FText CallFunc_GetActionText_Text, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue, class FText CallFunc_Key_GetShortDisplayName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "PopulateStandardButton");

	Params::UWBP_Context_Menu_Prompt_C_PopulateStandardButton_Params Parms{};

	Parms.KeyboardKey = KeyboardKey;
	Parms.GamepadKey = GamepadKey;
	Parms.CallFunc_GetKeyForAction_Action_Key = CallFunc_GetKeyForAction_Action_Key;
	Parms.CallFunc_GetKeyForAction_Action_Key_1 = CallFunc_GetKeyForAction_Action_Key_1;
	Parms.CallFunc_GetActionText_Text = CallFunc_GetActionText_Text;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_Key_IsValid_ReturnValue = CallFunc_Key_IsValid_ReturnValue;
	Parms.CallFunc_Key_GetShortDisplayName_ReturnValue = CallFunc_Key_GetShortDisplayName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PopulateCycleButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetActionName_Action                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetActionName_Action_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadButtonForAction_Button                        (HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadButtonForAction_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadButtonForAction_Button_1                      (HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadButtonForAction_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetActionText_Text                                      (None)

void UWBP_Context_Menu_Prompt_C::PopulateCycleButton(class FName CallFunc_GetActionName_Action, class FName CallFunc_GetActionName_Action_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button_1, bool CallFunc_GetGamepadButtonForAction_ReturnValue_1, class FText CallFunc_GetActionText_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "PopulateCycleButton");

	Params::UWBP_Context_Menu_Prompt_C_PopulateCycleButton_Params Parms{};

	Parms.CallFunc_GetActionName_Action = CallFunc_GetActionName_Action;
	Parms.CallFunc_GetActionName_Action_1 = CallFunc_GetActionName_Action_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_GetGamepadButtonForAction_Button = CallFunc_GetGamepadButtonForAction_Button;
	Parms.CallFunc_GetGamepadButtonForAction_ReturnValue = CallFunc_GetGamepadButtonForAction_ReturnValue;
	Parms.CallFunc_GetGamepadButtonForAction_Button_1 = CallFunc_GetGamepadButtonForAction_Button_1;
	Parms.CallFunc_GetGamepadButtonForAction_ReturnValue_1 = CallFunc_GetGamepadButtonForAction_ReturnValue_1;
	Parms.CallFunc_GetActionText_Text = CallFunc_GetActionText_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PopulateHoldButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct InputCore_Key               KeyboardKey                                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct InputCore_Key               GamepadKey                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FText                        CallFunc_GetActionText_Text                                      (None)
// class FName                        CallFunc_GetActionName_Action                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// struct InputCore_Key               CallFunc_GetButtonForActionMapping_Button                        (HasGetValueTypeHash)
// bool                               CallFunc_GetButtonForActionMapping_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetActionName_Action_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadButtonForAction_Button                        (HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadButtonForAction_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsValid_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Key_GetShortDisplayName_ReturnValue                     (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)

void UWBP_Context_Menu_Prompt_C::PopulateHoldButton(const struct InputCore_Key& KeyboardKey, const struct InputCore_Key& GamepadKey, class FText CallFunc_GetActionText_Text, class FName CallFunc_GetActionName_Action, class FText CallFunc_TextToUpper_ReturnValue, const struct InputCore_Key& CallFunc_GetButtonForActionMapping_Button, bool CallFunc_GetButtonForActionMapping_ReturnValue, class FName CallFunc_GetActionName_Action_1, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue, class FText CallFunc_Key_GetShortDisplayName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "PopulateHoldButton");

	Params::UWBP_Context_Menu_Prompt_C_PopulateHoldButton_Params Parms{};

	Parms.KeyboardKey = KeyboardKey;
	Parms.GamepadKey = GamepadKey;
	Parms.CallFunc_GetActionText_Text = CallFunc_GetActionText_Text;
	Parms.CallFunc_GetActionName_Action = CallFunc_GetActionName_Action;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetButtonForActionMapping_Button = CallFunc_GetButtonForActionMapping_Button;
	Parms.CallFunc_GetButtonForActionMapping_ReturnValue = CallFunc_GetButtonForActionMapping_ReturnValue;
	Parms.CallFunc_GetActionName_Action_1 = CallFunc_GetActionName_Action_1;
	Parms.CallFunc_GetGamepadButtonForAction_Button = CallFunc_GetGamepadButtonForAction_Button;
	Parms.CallFunc_GetGamepadButtonForAction_ReturnValue = CallFunc_GetGamepadButtonForAction_ReturnValue;
	Parms.CallFunc_Key_IsValid_ReturnValue = CallFunc_Key_IsValid_ReturnValue;
	Parms.CallFunc_Key_GetShortDisplayName_ReturnValue = CallFunc_Key_GetShortDisplayName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.Populate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::Populate(bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "Populate");

	Params::UWBP_Context_Menu_Prompt_C_Populate_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__CycleNext_K2Node_ComponentBoundEvent_6_OnBtnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Context_Menu_Prompt_C::BndEvt__CycleNext_K2Node_ComponentBoundEvent_6_OnBtnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "BndEvt__CycleNext_K2Node_ComponentBoundEvent_6_OnBtnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__CyclePrevious_K2Node_ComponentBoundEvent_7_OnBtnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Context_Menu_Prompt_C::BndEvt__CyclePrevious_K2Node_ComponentBoundEvent_7_OnBtnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "BndEvt__CyclePrevious_K2Node_ComponentBoundEvent_7_OnBtnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.OnContextActionUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UContextActionData*          InData                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::OnContextActionUpdated(class UContextActionData* InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "OnContextActionUpdated");

	Params::UWBP_Context_Menu_Prompt_C_OnContextActionUpdated_Params Parms{};

	Parms.InData = InData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Context_Menu_Prompt_C::BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Context_Menu_Prompt_C::BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_K2Node_ComponentBoundEvent_9_OnButtonHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_K2Node_ComponentBoundEvent_10_OnButtonUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Context_Menu_Prompt_C::BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_K2Node_ComponentBoundEvent_10_OnButtonUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_K2Node_ComponentBoundEvent_10_OnButtonUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Context_Menu_Prompt_C::BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_1_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_1_K2Node_ComponentBoundEvent_12_OnButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Context_Menu_Prompt_C::BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_1_K2Node_ComponentBoundEvent_12_OnButtonHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_1_K2Node_ComponentBoundEvent_12_OnButtonHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_1_K2Node_ComponentBoundEvent_13_OnButtonUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Context_Menu_Prompt_C::BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_1_K2Node_ComponentBoundEvent_13_OnButtonUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "BndEvt__WBP_Context_Menu_Prompt_UI_Button_Menu_1_K2Node_ComponentBoundEvent_13_OnButtonUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.ExecuteUbergraph_WBP_Context_Menu_Prompt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UContextActionData*          K2Node_Event_InData                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Context_Menu_Prompt_C::ExecuteUbergraph_WBP_Context_Menu_Prompt(int32 EntryPoint, class UContextActionData* K2Node_Event_InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "ExecuteUbergraph_WBP_Context_Menu_Prompt");

	Params::UWBP_Context_Menu_Prompt_C_ExecuteUbergraph_WBP_Context_Menu_Prompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InData = K2Node_Event_InData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.OnPromptClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Context_Menu_Prompt_C::OnPromptClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Menu_Prompt_C", "OnPromptClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


