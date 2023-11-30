#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Context_Bar.WBP_Context_Bar_C
// (None)

class UClass* UWBP_Context_Bar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Context_Bar_C");

	return Clss;
}


// WBP_Context_Bar_C WBP_Context_Bar.Default__WBP_Context_Bar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Context_Bar_C* UWBP_Context_Bar_C::GetDefaultObj()
{
	static class UWBP_Context_Bar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Context_Bar_C*>(UWBP_Context_Bar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Context_Bar.WBP_Context_Bar_C.CanCloseOnLogout
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_Context_Bar_C::CanCloseOnLogout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Bar_C", "CanCloseOnLogout");

	Params::UWBP_Context_Bar_C_CanCloseOnLogout_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Context_Bar.WBP_Context_Bar_C.RefreshContextBar
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Context_Bar_C::RefreshContextBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Bar_C", "RefreshContextBar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Context_Bar.WBP_Context_Bar_C.ExecuteUbergraph_WBP_Context_Bar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentRoute_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Context_Bar_C::ExecuteUbergraph_WBP_Context_Bar(int32 EntryPoint, class URHInputManager* CallFunc_GetInputManager_ReturnValue, class FName CallFunc_GetCurrentRoute_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Context_Bar_C", "ExecuteUbergraph_WBP_Context_Bar");

	Params::UWBP_Context_Bar_C_ExecuteUbergraph_WBP_Context_Bar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetCurrentRoute_ReturnValue = CallFunc_GetCurrentRoute_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


