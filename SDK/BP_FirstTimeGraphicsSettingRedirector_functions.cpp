#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FirstTimeGraphicsSettingRedirector.BP_FirstTimeGraphicsSettingRedirector_C
// (None)

class UClass* UBP_FirstTimeGraphicsSettingRedirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FirstTimeGraphicsSettingRedirector_C");

	return Clss;
}


// BP_FirstTimeGraphicsSettingRedirector_C BP_FirstTimeGraphicsSettingRedirector.Default__BP_FirstTimeGraphicsSettingRedirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FirstTimeGraphicsSettingRedirector_C* UBP_FirstTimeGraphicsSettingRedirector_C::GetDefaultObj()
{
	static class UBP_FirstTimeGraphicsSettingRedirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FirstTimeGraphicsSettingRedirector_C*>(UBP_FirstTimeGraphicsSettingRedirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FirstTimeGraphicsSettingRedirector.BP_FirstTimeGraphicsSettingRedirector_C.DoesLocalSettingApply
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ARHHUDCommon*                HUD                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatformType_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_FirstTimeGraphicsSettingRedirector_C::DoesLocalSettingApply(class ARHHUDCommon* HUD, bool CallFunc_IsPlatformType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FirstTimeGraphicsSettingRedirector_C", "DoesLocalSettingApply");

	Params::UBP_FirstTimeGraphicsSettingRedirector_C_DoesLocalSettingApply_Params Parms{};

	Parms.HUD = HUD;
	Parms.CallFunc_IsPlatformType_ReturnValue = CallFunc_IsPlatformType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


