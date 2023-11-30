#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ControllerPrompt.WBP_ControllerPrompt_C
// (None)

class UClass* UWBP_ControllerPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ControllerPrompt_C");

	return Clss;
}


// WBP_ControllerPrompt_C WBP_ControllerPrompt.Default__WBP_ControllerPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ControllerPrompt_C* UWBP_ControllerPrompt_C::GetDefaultObj()
{
	static class UWBP_ControllerPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ControllerPrompt_C*>(UWBP_ControllerPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetButtonPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct InputCore_Key               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_ControllerPrompt_C::SetButtonPrompt(const struct InputCore_Key& Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ControllerPrompt_C", "SetButtonPrompt");

	Params::UWBP_ControllerPrompt_C_SetButtonPrompt_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ControllerPrompt_C::SetIsCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ControllerPrompt_C", "SetIsCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ControllerPrompt_C::SetIsConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ControllerPrompt_C", "SetIsConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetPromptFromButton
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct InputCore_Key               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconForGamepadButton_Icon                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ControllerPrompt_C::SetPromptFromButton(const struct InputCore_Key& Button, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ControllerPrompt_C", "SetPromptFromButton");

	Params::UWBP_ControllerPrompt_C_SetPromptFromButton_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_GetIconForGamepadButton_Icon = CallFunc_GetIconForGamepadButton_Icon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.UpdateFromSetValues
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct InputCore_Key               Temp_struct_Variable                                             (HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadCancelButton_ReturnValue                      (HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadButtonForAction_Button                        (HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadButtonForAction_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadConfirmButton_ReturnValue                     (HasGetValueTypeHash)
// struct InputCore_Key               K2Node_Select_Default                                            (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ControllerPrompt_C::UpdateFromSetValues(const struct InputCore_Key& Temp_struct_Variable, bool Temp_bool_Variable, const struct InputCore_Key& CallFunc_GetGamepadCancelButton_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue, const struct InputCore_Key& K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ControllerPrompt_C", "UpdateFromSetValues");

	Params::UWBP_ControllerPrompt_C_UpdateFromSetValues_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGamepadCancelButton_ReturnValue = CallFunc_GetGamepadCancelButton_ReturnValue;
	Parms.CallFunc_GetGamepadButtonForAction_Button = CallFunc_GetGamepadButtonForAction_Button;
	Parms.CallFunc_GetGamepadButtonForAction_ReturnValue = CallFunc_GetGamepadButtonForAction_ReturnValue;
	Parms.CallFunc_GetGamepadConfirmButton_ReturnValue = CallFunc_GetGamepadConfirmButton_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetInputAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ControllerPrompt_C::SetInputAction(class FName ActionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ControllerPrompt_C", "SetInputAction");

	Params::UWBP_ControllerPrompt_C_SetInputAction_Params Parms{};

	Parms.ActionName = ActionName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ControllerPrompt_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ControllerPrompt_C", "PreConstruct");

	Params::UWBP_ControllerPrompt_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ControllerPrompt_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ControllerPrompt_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.ExecuteUbergraph_WBP_ControllerPrompt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ControllerPrompt_C::ExecuteUbergraph_WBP_ControllerPrompt(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ControllerPrompt_C", "ExecuteUbergraph_WBP_ControllerPrompt");

	Params::UWBP_ControllerPrompt_C_ExecuteUbergraph_WBP_ControllerPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


