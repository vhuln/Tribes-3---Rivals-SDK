#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Blocker.Blocker_C
// (None)

class UClass* UBlocker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Blocker_C");

	return Clss;
}


// Blocker_C Blocker.Default__Blocker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlocker_C* UBlocker_C::GetDefaultObj()
{
	static class UBlocker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlocker_C*>(UBlocker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Blocker.Blocker_C.BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBlocker_C::BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Blocker_C", "BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Blocker.Blocker_C.Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ClickToClose                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBlocker_C::Bind(class URHWidget* Widget, bool ClickToClose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Blocker_C", "Bind");

	Params::UBlocker_C_Bind_Params Parms{};

	Parms.Widget = Widget;
	Parms.ClickToClose = ClickToClose;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Blocker.Blocker_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBlocker_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Blocker_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Blocker.Blocker_C.HandleBlockerChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 InWidget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBlocker_C::HandleBlockerChange(bool Show, class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Blocker_C", "HandleBlockerChange");

	Params::UBlocker_C_HandleBlockerChange_Params Parms{};

	Parms.Show = Show;
	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Blocker.Blocker_C.ExecuteUbergraph_Blocker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Show                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_InWidget                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   K2Node_DynamicCast_AsRHWidget                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHCanvasPanel*              K2Node_DynamicCast_AsRHCanvas_Panel                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ClickToClose                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateBack_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBlocker_C::ExecuteUbergraph_Blocker(int32 EntryPoint, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_Show, class UUserWidget* K2Node_CustomEvent_InWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHWidget* K2Node_DynamicCast_AsRHWidget, bool K2Node_DynamicCast_bSuccess_1, class UPanelWidget* CallFunc_GetParent_ReturnValue, class URHCanvasPanel* K2Node_DynamicCast_AsRHCanvas_Panel, bool K2Node_DynamicCast_bSuccess_2, class URHWidget* K2Node_CustomEvent_Widget, bool K2Node_CustomEvent_ClickToClose, bool CallFunc_NavigateBack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Blocker_C", "ExecuteUbergraph_Blocker");

	Params::UBlocker_C_ExecuteUbergraph_Blocker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Show = K2Node_CustomEvent_Show;
	Parms.K2Node_CustomEvent_InWidget = K2Node_CustomEvent_InWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsRHWidget = K2Node_DynamicCast_AsRHWidget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHCanvas_Panel = K2Node_DynamicCast_AsRHCanvas_Panel;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_CustomEvent_ClickToClose = K2Node_CustomEvent_ClickToClose;
	Parms.CallFunc_NavigateBack_ReturnValue = CallFunc_NavigateBack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


