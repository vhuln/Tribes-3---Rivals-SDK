#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Shared_Key.UI_Shared_Key_C
// (None)

class UClass* UUI_Shared_Key_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Shared_Key_C");

	return Clss;
}


// UI_Shared_Key_C UI_Shared_Key.Default__UI_Shared_Key_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Shared_Key_C* UUI_Shared_Key_C::GetDefaultObj()
{
	static class UUI_Shared_Key_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Shared_Key_C*>(UUI_Shared_Key_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Shared_Key.UI_Shared_Key_C.UpdateDefaults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Key_C::UpdateDefaults(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Key_C", "UpdateDefaults");

	Params::UUI_Shared_Key_C_UpdateDefaults_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_Key.UI_Shared_Key_C.UpdateIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Shared_Key_C::UpdateIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Key_C", "UpdateIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_Key.UI_Shared_Key_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_Key_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Key_C", "PreConstruct");

	Params::UUI_Shared_Key_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_Key.UI_Shared_Key_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Shared_Key_C::UpdateText(class FText Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_Key_C", "UpdateText");

	Params::UUI_Shared_Key_C_UpdateText_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


