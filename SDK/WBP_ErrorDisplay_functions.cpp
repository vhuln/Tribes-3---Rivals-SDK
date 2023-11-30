#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ErrorDisplay.WBP_ErrorDisplay_C
// (None)

class UClass* UWBP_ErrorDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ErrorDisplay_C");

	return Clss;
}


// WBP_ErrorDisplay_C WBP_ErrorDisplay.Default__WBP_ErrorDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ErrorDisplay_C* UWBP_ErrorDisplay_C::GetDefaultObj()
{
	static class UWBP_ErrorDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ErrorDisplay_C*>(UWBP_ErrorDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ErrorDisplay.WBP_ErrorDisplay_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ErrorDisplay_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ErrorDisplay_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ErrorDisplay.WBP_ErrorDisplay_C.BndEvt__WBP_ErrorDisplay_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ErrorDisplay_C::BndEvt__WBP_ErrorDisplay_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ErrorDisplay_C", "BndEvt__WBP_ErrorDisplay_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ErrorDisplay.WBP_ErrorDisplay_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ErrorDisplay_C::InitializeWidgetNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ErrorDisplay_C", "InitializeWidgetNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ErrorDisplay.WBP_ErrorDisplay_C.ExecuteUbergraph_WBP_ErrorDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameInstance*            CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveViewRoute_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisconnectErrorCode_OutErrorCode                     (None)
// bool                               CallFunc_GetDisconnectErrorCode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetKickErrorCode_OutErrorCode                           (None)
// bool                               CallFunc_GetKickErrorCode_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveViewRoute_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ErrorDisplay_C::ExecuteUbergraph_WBP_ErrorDisplay(int32 EntryPoint, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveViewRoute_ReturnValue, class FText CallFunc_GetDisconnectErrorCode_OutErrorCode, bool CallFunc_GetDisconnectErrorCode_ReturnValue, class FText CallFunc_GetKickErrorCode_OutErrorCode, bool CallFunc_GetKickErrorCode_ReturnValue, bool CallFunc_RemoveViewRoute_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ErrorDisplay_C", "ExecuteUbergraph_WBP_ErrorDisplay");

	Params::UWBP_ErrorDisplay_C_ExecuteUbergraph_WBP_ErrorDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RemoveViewRoute_ReturnValue = CallFunc_RemoveViewRoute_ReturnValue;
	Parms.CallFunc_GetDisconnectErrorCode_OutErrorCode = CallFunc_GetDisconnectErrorCode_OutErrorCode;
	Parms.CallFunc_GetDisconnectErrorCode_ReturnValue = CallFunc_GetDisconnectErrorCode_ReturnValue;
	Parms.CallFunc_GetKickErrorCode_OutErrorCode = CallFunc_GetKickErrorCode_OutErrorCode;
	Parms.CallFunc_GetKickErrorCode_ReturnValue = CallFunc_GetKickErrorCode_ReturnValue;
	Parms.CallFunc_RemoveViewRoute_ReturnValue_1 = CallFunc_RemoveViewRoute_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


