#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C
// (None)

class UClass* UWBP_JoinMatchBlocker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_JoinMatchBlocker_C");

	return Clss;
}


// WBP_JoinMatchBlocker_C WBP_JoinMatchBlocker.Default__WBP_JoinMatchBlocker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_JoinMatchBlocker_C* UWBP_JoinMatchBlocker_C::GetDefaultObj()
{
	static class UWBP_JoinMatchBlocker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_JoinMatchBlocker_C*>(UWBP_JoinMatchBlocker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.IsShowingCancelOption
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentFocusGroup_OutFocusGroup                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentFocusGroup_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_JoinMatchBlocker_C::IsShowingCancelOption(int32 CallFunc_GetCurrentFocusGroup_OutFocusGroup, bool CallFunc_GetCurrentFocusGroup_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinMatchBlocker_C", "IsShowingCancelOption");

	Params::UWBP_JoinMatchBlocker_C_IsShowingCancelOption_Params Parms{};

	Parms.CallFunc_GetCurrentFocusGroup_OutFocusGroup = CallFunc_GetCurrentFocusGroup_OutFocusGroup;
	Parms.CallFunc_GetCurrentFocusGroup_ReturnValue = CallFunc_GetCurrentFocusGroup_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.NavigateBack
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShowingCancelOption_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_JoinMatchBlocker_C::NavigateBack(bool CallFunc_IsShowingCancelOption_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinMatchBlocker_C", "NavigateBack");

	Params::UWBP_JoinMatchBlocker_C_NavigateBack_Params Parms{};

	Parms.CallFunc_IsShowingCancelOption_ReturnValue = CallFunc_IsShowingCancelOption_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.GetQueueDataFactory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHQueueDataFactory*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHQueueDataFactory*         CallFunc_GetQueueDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class URHQueueDataFactory* UWBP_JoinMatchBlocker_C::GetQueueDataFactory(class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinMatchBlocker_C", "GetQueueDataFactory");

	Params::UWBP_JoinMatchBlocker_C_GetQueueDataFactory_Params Parms{};

	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQueueDataFactory_ReturnValue = CallFunc_GetQueueDataFactory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.LeaveMatchQueue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHQueueDataFactory*         CallFunc_GetQueueDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LeaveQueue_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinMatchBlocker_C::LeaveMatchQueue(class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue, bool CallFunc_LeaveQueue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinMatchBlocker_C", "LeaveMatchQueue");

	Params::UWBP_JoinMatchBlocker_C_LeaveMatchQueue_Params Parms{};

	Parms.CallFunc_GetQueueDataFactory_ReturnValue = CallFunc_GetQueueDataFactory_ReturnValue;
	Parms.CallFunc_LeaveQueue_ReturnValue = CallFunc_LeaveQueue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_JoinMatchBlocker_C::InitializeWidgetNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinMatchBlocker_C", "InitializeWidgetNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        FromRoute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToRoute                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinMatchBlocker_C::StartShowSequence(class FName FromRoute, class FName ToRoute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinMatchBlocker_C", "StartShowSequence");

	Params::UWBP_JoinMatchBlocker_C_StartShowSequence_Params Parms{};

	Parms.FromRoute = FromRoute;
	Parms.ToRoute = ToRoute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.StartHideSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        FromRoute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToRoute                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinMatchBlocker_C::StartHideSequence(class FName FromRoute, class FName ToRoute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinMatchBlocker_C", "StartHideSequence");

	Params::UWBP_JoinMatchBlocker_C_StartHideSequence_Params Parms{};

	Parms.FromRoute = FromRoute;
	Parms.ToRoute = ToRoute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_JoinMatchBlocker_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinMatchBlocker_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnShowAnimFinish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JoinMatchBlocker_C::OnShowAnimFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinMatchBlocker_C", "OnShowAnimFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnShowAnimStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JoinMatchBlocker_C::OnShowAnimStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinMatchBlocker_C", "OnShowAnimStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JoinMatchBlocker_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinMatchBlocker_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.BeginCancelButtonTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_JoinMatchBlocker_C::BeginCancelButtonTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinMatchBlocker_C", "BeginCancelButtonTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinMatchBlocker_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinMatchBlocker_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::UWBP_JoinMatchBlocker_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.ExecuteUbergraph_WBP_JoinMatchBlocker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_FromRoute_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ToRoute_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_FromRoute                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ToRoute                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHQueueDataFactory*         CallFunc_GetQueueDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_JoinMatchBlocker_C::ExecuteUbergraph_WBP_JoinMatchBlocker(int32 EntryPoint, class FName K2Node_Event_FromRoute_1, class FName K2Node_Event_ToRoute_1, class FName K2Node_Event_FromRoute, class FName K2Node_Event_ToRoute, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWidget* K2Node_ComponentBoundEvent_Widget, class URHInputManager* CallFunc_GetInputManager_ReturnValue, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_JoinMatchBlocker_C", "ExecuteUbergraph_WBP_JoinMatchBlocker");

	Params::UWBP_JoinMatchBlocker_C_ExecuteUbergraph_WBP_JoinMatchBlocker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FromRoute_1 = K2Node_Event_FromRoute_1;
	Parms.K2Node_Event_ToRoute_1 = K2Node_Event_ToRoute_1;
	Parms.K2Node_Event_FromRoute = K2Node_Event_FromRoute;
	Parms.K2Node_Event_ToRoute = K2Node_Event_ToRoute;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetQueueDataFactory_ReturnValue = CallFunc_GetQueueDataFactory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


