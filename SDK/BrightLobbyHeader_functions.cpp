#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BrightLobbyHeader.BrightLobbyHeader_C
// (None)

class UClass* UBrightLobbyHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrightLobbyHeader_C");

	return Clss;
}


// BrightLobbyHeader_C BrightLobbyHeader.Default__BrightLobbyHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBrightLobbyHeader_C* UBrightLobbyHeader_C::GetDefaultObj()
{
	static class UBrightLobbyHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBrightLobbyHeader_C*>(UBrightLobbyHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BrightLobbyHeader.BrightLobbyHeader_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        FromRoute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToRoute                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrightLobbyHeader_C::StartShowSequence(class FName FromRoute, class FName ToRoute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyHeader_C", "StartShowSequence");

	Params::UBrightLobbyHeader_C_StartShowSequence_Params Parms{};

	Parms.FromRoute = FromRoute;
	Parms.ToRoute = ToRoute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BrightLobbyHeader.BrightLobbyHeader_C.HandleLobbyStartMenuInputAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBrightLobbyHeader_C::HandleLobbyStartMenuInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyHeader_C", "HandleLobbyStartMenuInputAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BrightLobbyHeader.BrightLobbyHeader_C.StartHideSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        FromRoute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToRoute                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBrightLobbyHeader_C::StartHideSequence(class FName FromRoute, class FName ToRoute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyHeader_C", "StartHideSequence");

	Params::UBrightLobbyHeader_C_StartHideSequence_Params Parms{};

	Parms.FromRoute = FromRoute;
	Parms.ToRoute = ToRoute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BrightLobbyHeader.BrightLobbyHeader_C.ExecuteUbergraph_BrightLobbyHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_FromRoute                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ToRoute                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Add_View_Route_ViewChanged                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_FromRoute_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ToRoute_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBrightLobbyHeader_C::ExecuteUbergraph_BrightLobbyHeader(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_Event_FromRoute, class FName K2Node_Event_ToRoute, class URHInputManager* CallFunc_GetInputManager_ReturnValue, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Add_View_Route_ViewChanged, class FName K2Node_Event_FromRoute_1, class FName K2Node_Event_ToRoute_1, class URHInputManager* CallFunc_GetInputManager_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrightLobbyHeader_C", "ExecuteUbergraph_BrightLobbyHeader");

	Params::UBrightLobbyHeader_C_ExecuteUbergraph_BrightLobbyHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_FromRoute = K2Node_Event_FromRoute;
	Parms.K2Node_Event_ToRoute = K2Node_Event_ToRoute;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_View_Route_ViewChanged = CallFunc_Add_View_Route_ViewChanged;
	Parms.K2Node_Event_FromRoute_1 = K2Node_Event_FromRoute_1;
	Parms.K2Node_Event_ToRoute_1 = K2Node_Event_ToRoute_1;
	Parms.CallFunc_GetInputManager_ReturnValue_1 = CallFunc_GetInputManager_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


