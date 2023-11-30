#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Gamepad_Prompt_Hold.UI_Gamepad_Prompt_Hold_C
// (None)

class UClass* UUI_Gamepad_Prompt_Hold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Gamepad_Prompt_Hold_C");

	return Clss;
}


// UI_Gamepad_Prompt_Hold_C UI_Gamepad_Prompt_Hold.Default__UI_Gamepad_Prompt_Hold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Gamepad_Prompt_Hold_C* UUI_Gamepad_Prompt_Hold_C::GetDefaultObj()
{
	static class UUI_Gamepad_Prompt_Hold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Gamepad_Prompt_Hold_C*>(UUI_Gamepad_Prompt_Hold_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Gamepad_Prompt_Hold.UI_Gamepad_Prompt_Hold_C.UpdateHoldDurationDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FPercentage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Gamepad_Prompt_Hold_C::UpdateHoldDurationDisplay(float FPercentage, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Gamepad_Prompt_Hold_C", "UpdateHoldDurationDisplay");

	Params::UUI_Gamepad_Prompt_Hold_C_UpdateHoldDurationDisplay_Params Parms{};

	Parms.FPercentage = FPercentage;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Gamepad_Prompt_Hold.UI_Gamepad_Prompt_Hold_C.OnButtonUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Gamepad_Prompt_Hold_C::OnButtonUnhovered(enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Gamepad_Prompt_Hold_C", "OnButtonUnhovered");

	Params::UUI_Gamepad_Prompt_Hold_C_OnButtonUnhovered_Params Parms{};

	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Gamepad_Prompt_Hold.UI_Gamepad_Prompt_Hold_C.OnButtonHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Gamepad_Prompt_Hold_C::OnButtonHovered(enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Gamepad_Prompt_Hold_C", "OnButtonHovered");

	Params::UUI_Gamepad_Prompt_Hold_C_OnButtonHovered_Params Parms{};

	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Gamepad_Prompt_Hold.UI_Gamepad_Prompt_Hold_C.On Hold Event
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EContextActionHoldReleaseStateEvent                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Gamepad_Prompt_Hold_C::On_Hold_Event(enum class EContextActionHoldReleaseState Event, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Gamepad_Prompt_Hold_C", "On Hold Event");

	Params::UUI_Gamepad_Prompt_Hold_C_On_Hold_Event_Params Parms{};

	Parms.Event = Event;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Gamepad_Prompt_Hold.UI_Gamepad_Prompt_Hold_C.StartConfirmHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Gamepad_Prompt_Hold_C::StartConfirmHold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Gamepad_Prompt_Hold_C", "StartConfirmHold");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Gamepad_Prompt_Hold.UI_Gamepad_Prompt_Hold_C.ClearConfirmHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Gamepad_Prompt_Hold_C::ClearConfirmHold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Gamepad_Prompt_Hold_C", "ClearConfirmHold");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Gamepad_Prompt_Hold.UI_Gamepad_Prompt_Hold_C.UpdateGamepadPromptDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputMode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAnimationCurrentTime_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Gamepad_Prompt_Hold_C::UpdateGamepadPromptDisplay(enum class ERH_INPUT_STATE InputMode, double Temp_real_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double Temp_real_Variable_1, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool Temp_bool_Variable_2, enum class EUMGSequencePlayMode K2Node_Select_Default, double K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Gamepad_Prompt_Hold_C", "UpdateGamepadPromptDisplay");

	Params::UUI_Gamepad_Prompt_Hold_C_UpdateGamepadPromptDisplay_Params Parms{};

	Parms.InputMode = InputMode;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetAnimationCurrentTime_ReturnValue = CallFunc_GetAnimationCurrentTime_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast = CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Gamepad_Prompt_Hold.UI_Gamepad_Prompt_Hold_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Gamepad_Prompt_Hold_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Gamepad_Prompt_Hold_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Gamepad_Prompt_Hold.UI_Gamepad_Prompt_Hold_C.ExecuteUbergraph_UI_Gamepad_Prompt_Hold
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadConfirmButton_ReturnValue                     (HasGetValueTypeHash)

void UUI_Gamepad_Prompt_Hold_C::ExecuteUbergraph_UI_Gamepad_Prompt_Hold(int32 EntryPoint, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Gamepad_Prompt_Hold_C", "ExecuteUbergraph_UI_Gamepad_Prompt_Hold");

	Params::UUI_Gamepad_Prompt_Hold_C_ExecuteUbergraph_UI_Gamepad_Prompt_Hold_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGamepadConfirmButton_ReturnValue = CallFunc_GetGamepadConfirmButton_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Gamepad_Prompt_Hold.UI_Gamepad_Prompt_Hold_C.Cancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Gamepad_Prompt_Hold_C::Cancelled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Gamepad_Prompt_Hold_C", "Cancelled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Gamepad_Prompt_Hold.UI_Gamepad_Prompt_Hold_C.Confirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Gamepad_Prompt_Hold_C::Confirmed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Gamepad_Prompt_Hold_C", "Confirmed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


