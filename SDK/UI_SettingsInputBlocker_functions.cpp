#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_SettingsInputBlocker.UI_SettingsInputBlocker_C
// (None)

class UClass* UUI_SettingsInputBlocker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_SettingsInputBlocker_C");

	return Clss;
}


// UI_SettingsInputBlocker_C UI_SettingsInputBlocker.Default__UI_SettingsInputBlocker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SettingsInputBlocker_C* UUI_SettingsInputBlocker_C::GetDefaultObj()
{
	static class UUI_SettingsInputBlocker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SettingsInputBlocker_C*>(UUI_SettingsInputBlocker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_SettingsInputBlocker.UI_SettingsInputBlocker_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UUI_SettingsInputBlocker_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SettingsInputBlocker_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SettingsInputBlocker.UI_SettingsInputBlocker_C.OnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void UUI_SettingsInputBlocker_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SettingsInputBlocker_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_SettingsInputBlocker.UI_SettingsInputBlocker_C.ExecuteUbergraph_UI_SettingsInputBlocker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_SettingsInputBlocker_C::ExecuteUbergraph_UI_SettingsInputBlocker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_SettingsInputBlocker_C", "ExecuteUbergraph_UI_SettingsInputBlocker");

	Params::UUI_SettingsInputBlocker_C_ExecuteUbergraph_UI_SettingsInputBlocker_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


