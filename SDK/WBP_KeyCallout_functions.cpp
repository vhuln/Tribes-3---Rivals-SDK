#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_KeyCallout.WBP_KeyCallout_C
// (None)

class UClass* UWBP_KeyCallout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_KeyCallout_C");

	return Clss;
}


// WBP_KeyCallout_C WBP_KeyCallout.Default__WBP_KeyCallout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_KeyCallout_C* UWBP_KeyCallout_C::GetDefaultObj()
{
	static class UWBP_KeyCallout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_KeyCallout_C*>(UWBP_KeyCallout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_KeyCallout.WBP_KeyCallout_C.SetKeybind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        KeyBind                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyCallout_C::SetKeybind(class FName KeyBind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyCallout_C", "SetKeybind");

	Params::UWBP_KeyCallout_C_SetKeybind_Params Parms{};

	Parms.KeyBind = KeyBind;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_KeyCallout.WBP_KeyCallout_C.UpdateKeyDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetKeyForBinding_ReturnValue                            (HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconForGamepadButton_Icon                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconForGamepadButton_Icon_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyCallout_C::UpdateKeyDisplay(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct InputCore_Key& CallFunc_GetKeyForBinding_ReturnValue, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyCallout_C", "UpdateKeyDisplay");

	Params::UWBP_KeyCallout_C_UpdateKeyDisplay_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetKeyForBinding_ReturnValue = CallFunc_GetKeyForBinding_ReturnValue;
	Parms.CallFunc_GetIconForGamepadButton_Icon = CallFunc_GetIconForGamepadButton_Icon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIconForGamepadButton_Icon_1 = CallFunc_GetIconForGamepadButton_Icon_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_KeyCallout.WBP_KeyCallout_C.SetKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct InputCore_Key               Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_KeyCallout_C::SetKey(const struct InputCore_Key& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyCallout_C", "SetKey");

	Params::UWBP_KeyCallout_C_SetKey_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_KeyCallout.WBP_KeyCallout_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyCallout_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyCallout_C", "PreConstruct");

	Params::UWBP_KeyCallout_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_KeyCallout.WBP_KeyCallout_C.ExecuteUbergraph_WBP_KeyCallout
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHGameUserSettings*         K2Node_DynamicCast_AsRHGame_User_Settings                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_KeyCallout_C::ExecuteUbergraph_WBP_KeyCallout(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class URHGameUserSettings* K2Node_DynamicCast_AsRHGame_User_Settings, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_KeyCallout_C", "ExecuteUbergraph_WBP_KeyCallout");

	Params::UWBP_KeyCallout_C_ExecuteUbergraph_WBP_KeyCallout_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHGame_User_Settings = K2Node_DynamicCast_AsRHGame_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


