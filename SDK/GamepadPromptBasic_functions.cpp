#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GamepadPromptBasic.GamepadPromptBasic_C
// (None)

class UClass* UGamepadPromptBasic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GamepadPromptBasic_C");

	return Clss;
}


// GamepadPromptBasic_C GamepadPromptBasic.Default__GamepadPromptBasic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGamepadPromptBasic_C* UGamepadPromptBasic_C::GetDefaultObj()
{
	static class UGamepadPromptBasic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGamepadPromptBasic_C*>(UGamepadPromptBasic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GamepadPromptBasic.GamepadPromptBasic_C.SetPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_ButtonPromptDataData                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UGamepadPromptBasic_C::SetPrompt(const struct RallyHereStart_ButtonPromptData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadPromptBasic_C", "SetPrompt");

	Params::UGamepadPromptBasic_C_SetPrompt_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamepadPromptBasic.GamepadPromptBasic_C.Populate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGamepadPromptBasic_C::Populate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadPromptBasic_C", "Populate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamepadPromptBasic.GamepadPromptBasic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGamepadPromptBasic_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadPromptBasic_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GamepadPromptBasic.GamepadPromptBasic_C.ExecuteUbergraph_GamepadPromptBasic
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGamepadPromptBasic_C::ExecuteUbergraph_GamepadPromptBasic(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamepadPromptBasic_C", "ExecuteUbergraph_GamepadPromptBasic");

	Params::UGamepadPromptBasic_C_ExecuteUbergraph_GamepadPromptBasic_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


