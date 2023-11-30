#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C
// (None)

class UClass* UFirstTimeSafeZoneViewRedirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FirstTimeSafeZoneViewRedirector_C");

	return Clss;
}


// FirstTimeSafeZoneViewRedirector_C FirstTimeSafeZoneViewRedirector.Default__FirstTimeSafeZoneViewRedirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFirstTimeSafeZoneViewRedirector_C* UFirstTimeSafeZoneViewRedirector_C::GetDefaultObj()
{
	static class UFirstTimeSafeZoneViewRedirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFirstTimeSafeZoneViewRedirector_C*>(UFirstTimeSafeZoneViewRedirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C.DoesLocalSettingApply
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ARHHUDCommon*                HUD                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UFirstTimeSafeZoneViewRedirector_C::DoesLocalSettingApply(class ARHHUDCommon* HUD, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FirstTimeSafeZoneViewRedirector_C", "DoesLocalSettingApply");

	Params::UFirstTimeSafeZoneViewRedirector_C_DoesLocalSettingApply_Params Parms{};

	Parms.HUD = HUD;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_2 = CallFunc_EqualEqual_StriStri_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


