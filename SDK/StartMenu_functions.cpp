#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StartMenu.StartMenu_C
// (None)

class UClass* UStartMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StartMenu_C");

	return Clss;
}


// StartMenu_C StartMenu.Default__StartMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStartMenu_C* UStartMenu_C::GetDefaultObj()
{
	static class UStartMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStartMenu_C*>(UStartMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StartMenu.StartMenu_C.Set Version Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetGameVersion_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStartMenu_C::Set_Version_Text(const class FString& CallFunc_GetGameVersion_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "Set Version Text");

	Params::UStartMenu_C_Set_Version_Text_Params Parms{};

	Parms.CallFunc_GetGameVersion_ReturnValue = CallFunc_GetGameVersion_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StartMenu.StartMenu_C.NavigateBack
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UStartMenu_C::NavigateBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "NavigateBack");

	Params::UStartMenu_C_NavigateBack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StartMenu.StartMenu_C.StartShowAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStartMenu_C::StartShowAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "StartShowAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartMenu.StartMenu_C.InitializeTickAnimations
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStartMenu_C::InitializeTickAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "InitializeTickAnimations");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartMenu.StartMenu_C.ShowMenuFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStartMenu_C::ShowMenuFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "ShowMenuFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartMenu.StartMenu_C.ShowMenuAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ElapsedAlpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStartMenu_C::ShowMenuAnim(float ElapsedTime, float ElapsedAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "ShowMenuAnim");

	Params::UStartMenu_C_ShowMenuAnim_Params Parms{};

	Parms.ElapsedTime = ElapsedTime;
	Parms.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StartMenu.StartMenu_C.InitHideAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStartMenu_C::InitHideAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "InitHideAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartMenu.StartMenu_C.HideMenuFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStartMenu_C::HideMenuFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "HideMenuFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartMenu.StartMenu_C.HideMenuAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ElapsedAlpha                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStartMenu_C::HideMenuAnim(float ElapsedTime, float ElapsedAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "HideMenuAnim");

	Params::UStartMenu_C_HideMenuAnim_Params Parms{};

	Parms.ElapsedTime = ElapsedTime;
	Parms.ElapsedAlpha = ElapsedAlpha;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StartMenu.StartMenu_C.StartHideAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStartMenu_C::StartHideAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "StartHideAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartMenu.StartMenu_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStartMenu_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartMenu.StartMenu_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)
// Parameters:

void UStartMenu_C::InitializeWidgetNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "InitializeWidgetNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartMenu.StartMenu_C.BackToLastScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStartMenu_C::BackToLastScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "BackToLastScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartMenu.StartMenu_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        FromRoute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToRoute                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStartMenu_C::StartShowSequence(class FName FromRoute, class FName ToRoute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "StartShowSequence");

	Params::UStartMenu_C_StartShowSequence_Params Parms{};

	Parms.FromRoute = FromRoute;
	Parms.ToRoute = ToRoute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StartMenu.StartMenu_C.StartHideSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        FromRoute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ToRoute                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStartMenu_C::StartHideSequence(class FName FromRoute, class FName ToRoute)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "StartHideSequence");

	Params::UStartMenu_C_StartHideSequence_Params Parms{};

	Parms.FromRoute = FromRoute;
	Parms.ToRoute = ToRoute;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StartMenu.StartMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UStartMenu_C::BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	Params::UStartMenu_C_BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StartMenu.StartMenu_C.BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UStartMenu_C::BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	Params::UStartMenu_C_BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StartMenu.StartMenu_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UStartMenu_C::BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	Params::UStartMenu_C_BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StartMenu.StartMenu_C.OnBackButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UStartMenu_C::OnBackButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "OnBackButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StartMenu.StartMenu_C.NewsAvailable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAvailable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStartMenu_C::NewsAvailable(bool bAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "NewsAvailable");

	Params::UStartMenu_C_NewsAvailable_Params Parms{};

	Parms.bAvailable = bAvailable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StartMenu.StartMenu_C.ExecuteUbergraph_StartMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bAvailable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ElapsedTime_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ElapsedAlpha_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector2D        CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ElapsedTime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ElapsedAlpha                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Remove_Top_View_Route_ViewChanged                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_FromRoute_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ToRoute_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_FromRoute                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_ToRoute                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_3                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_NavigateBack_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHWidget*>           K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, ContainsInstancedReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStartMenu_C::ExecuteUbergraph_StartMenu(int32 EntryPoint, bool K2Node_CustomEvent_bAvailable, float K2Node_CustomEvent_ElapsedTime_1, float K2Node_CustomEvent_ElapsedAlpha_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_Subtract_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct CoreUObject_Vector2D& CallFunc_MakeVector2D_ReturnValue, float K2Node_CustomEvent_ElapsedTime, float K2Node_CustomEvent_ElapsedAlpha, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Remove_Top_View_Route_ViewChanged, class FName K2Node_Event_FromRoute_1, class FName K2Node_Event_ToRoute_1, class FName K2Node_Event_FromRoute, class FName K2Node_Event_ToRoute, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_3, bool K2Node_DynamicCast_bSuccess_3, class UWidget* K2Node_ComponentBoundEvent_Widget_2, class UWidget* K2Node_ComponentBoundEvent_Widget_1, class UWidget* K2Node_ComponentBoundEvent_Widget, TArray<class FName>& K2Node_MakeArray_Array, bool CallFunc_NavigateBack_ReturnValue, TArray<class URHWidget*>& K2Node_MakeArray_Array_1, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, double CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StartMenu_C", "ExecuteUbergraph_StartMenu");

	Params::UStartMenu_C_ExecuteUbergraph_StartMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bAvailable = K2Node_CustomEvent_bAvailable;
	Parms.K2Node_CustomEvent_ElapsedTime_1 = K2Node_CustomEvent_ElapsedTime_1;
	Parms.K2Node_CustomEvent_ElapsedAlpha_1 = K2Node_CustomEvent_ElapsedAlpha_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_CustomEvent_ElapsedTime = K2Node_CustomEvent_ElapsedTime;
	Parms.K2Node_CustomEvent_ElapsedAlpha = K2Node_CustomEvent_ElapsedAlpha;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1 = CallFunc_Subtract_DoubleDouble_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_1 = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_2 = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Remove_Top_View_Route_ViewChanged = CallFunc_Remove_Top_View_Route_ViewChanged;
	Parms.K2Node_Event_FromRoute_1 = K2Node_Event_FromRoute_1;
	Parms.K2Node_Event_ToRoute_1 = K2Node_Event_ToRoute_1;
	Parms.K2Node_Event_FromRoute = K2Node_Event_FromRoute;
	Parms.K2Node_Event_ToRoute = K2Node_Event_ToRoute;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_3 = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_NavigateBack_ReturnValue = CallFunc_NavigateBack_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast = CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1 = CallFunc_MultiplyMultiply_FloatFloat_Base_ImplicitCast_1;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1 = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


