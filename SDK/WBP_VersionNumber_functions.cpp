#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_VersionNumber.WBP_VersionNumber_C
// (None)

class UClass* UWBP_VersionNumber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_VersionNumber_C");

	return Clss;
}


// WBP_VersionNumber_C WBP_VersionNumber.Default__WBP_VersionNumber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_VersionNumber_C* UWBP_VersionNumber_C::GetDefaultObj()
{
	static class UWBP_VersionNumber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_VersionNumber_C*>(UWBP_VersionNumber_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_VersionNumber.WBP_VersionNumber_C.Set Version Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetGameVersion_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_VersionNumber_C::Set_Version_Text(const class FString& CallFunc_GetGameVersion_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VersionNumber_C", "Set Version Text");

	Params::UWBP_VersionNumber_C_Set_Version_Text_Params Parms{};

	Parms.CallFunc_GetGameVersion_ReturnValue = CallFunc_GetGameVersion_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VersionNumber.WBP_VersionNumber_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VersionNumber_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VersionNumber_C", "PreConstruct");

	Params::UWBP_VersionNumber_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_VersionNumber.WBP_VersionNumber_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_VersionNumber_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VersionNumber_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_VersionNumber.WBP_VersionNumber_C.ExecuteUbergraph_WBP_VersionNumber
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_VersionNumber_C::ExecuteUbergraph_WBP_VersionNumber(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_VersionNumber_C", "ExecuteUbergraph_WBP_VersionNumber");

	Params::UWBP_VersionNumber_C_ExecuteUbergraph_WBP_VersionNumber_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


