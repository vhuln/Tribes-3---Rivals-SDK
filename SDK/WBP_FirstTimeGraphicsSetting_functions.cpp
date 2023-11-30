#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_FirstTimeGraphicsSetting.WBP_FirstTimeGraphicsSetting_C
// (None)

class UClass* UWBP_FirstTimeGraphicsSetting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FirstTimeGraphicsSetting_C");

	return Clss;
}


// WBP_FirstTimeGraphicsSetting_C WBP_FirstTimeGraphicsSetting.Default__WBP_FirstTimeGraphicsSetting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FirstTimeGraphicsSetting_C* UWBP_FirstTimeGraphicsSetting_C::GetDefaultObj()
{
	static class UWBP_FirstTimeGraphicsSetting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FirstTimeGraphicsSetting_C*>(UWBP_FirstTimeGraphicsSetting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FirstTimeGraphicsSetting.WBP_FirstTimeGraphicsSetting_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FirstTimeGraphicsSetting_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FirstTimeGraphicsSetting_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FirstTimeGraphicsSetting.WBP_FirstTimeGraphicsSetting_C.OnSettingsApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_FirstTimeGraphicsSetting_C::OnSettingsApplied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FirstTimeGraphicsSetting_C", "OnSettingsApplied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FirstTimeGraphicsSetting.WBP_FirstTimeGraphicsSetting_C.OnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FirstTimeGraphicsSetting_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FirstTimeGraphicsSetting_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FirstTimeGraphicsSetting.WBP_FirstTimeGraphicsSetting_C.ExecuteUbergraph_WBP_FirstTimeGraphicsSetting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveViewRoute_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHGameUserSettings*         K2Node_DynamicCast_AsRHGame_User_Settings                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_FirstTimeGraphicsSetting_C::ExecuteUbergraph_WBP_FirstTimeGraphicsSetting(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_RemoveViewRoute_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class URHGameUserSettings* K2Node_DynamicCast_AsRHGame_User_Settings, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FirstTimeGraphicsSetting_C", "ExecuteUbergraph_WBP_FirstTimeGraphicsSetting");

	Params::UWBP_FirstTimeGraphicsSetting_C_ExecuteUbergraph_WBP_FirstTimeGraphicsSetting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_RemoveViewRoute_ReturnValue = CallFunc_RemoveViewRoute_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHGame_User_Settings = K2Node_DynamicCast_AsRHGame_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


