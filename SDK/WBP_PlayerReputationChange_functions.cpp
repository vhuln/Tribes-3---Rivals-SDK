#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerReputationChange.WBP_PlayerReputationChange_C
// (None)

class UClass* UWBP_PlayerReputationChange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerReputationChange_C");

	return Clss;
}


// WBP_PlayerReputationChange_C WBP_PlayerReputationChange.Default__WBP_PlayerReputationChange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerReputationChange_C* UWBP_PlayerReputationChange_C::GetDefaultObj()
{
	static class UWBP_PlayerReputationChange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerReputationChange_C*>(UWBP_PlayerReputationChange_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerReputationChange.WBP_PlayerReputationChange_C.BeginProgressAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerReputationChange_C::BeginProgressAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReputationChange_C", "BeginProgressAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerReputationChange.WBP_PlayerReputationChange_C.BeginOnShown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerReputationChange_C::BeginOnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReputationChange_C", "BeginOnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerReputationChange.WBP_PlayerReputationChange_C.ShowButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerReputationChange_C::ShowButton(bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReputationChange_C", "ShowButton");

	Params::UWBP_PlayerReputationChange_C_ShowButton_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerReputationChange.WBP_PlayerReputationChange_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerReputationChange_C::Initialize(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReputationChange_C", "Initialize");

	Params::UWBP_PlayerReputationChange_C_Initialize_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerReputationChange.WBP_PlayerReputationChange_C.AnimationCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerReputationChange_C::AnimationCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReputationChange_C", "AnimationCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerReputationChange.WBP_PlayerReputationChange_C.BndEvt__WBP_ReputationChange_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_PlayerReputationChange_C::BndEvt__WBP_ReputationChange_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReputationChange_C", "BndEvt__WBP_ReputationChange_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerReputationChange.WBP_PlayerReputationChange_C.ExecuteUbergraph_WBP_PlayerReputationChange
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerReputationChange_C::ExecuteUbergraph_WBP_PlayerReputationChange(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReputationChange_C", "ExecuteUbergraph_WBP_PlayerReputationChange");

	Params::UWBP_PlayerReputationChange_C_ExecuteUbergraph_WBP_PlayerReputationChange_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerReputationChange.WBP_PlayerReputationChange_C.OnBackButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerReputationChange_C::OnBackButtonPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReputationChange_C", "OnBackButtonPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerReputationChange.WBP_PlayerReputationChange_C.AnimationComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerReputationChange_C::AnimationComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerReputationChange_C", "AnimationComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


