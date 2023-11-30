#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C
// (None)

class UClass* UWBP_SafeVoiceUserAgreement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SafeVoiceUserAgreement_C");

	return Clss;
}


// WBP_SafeVoiceUserAgreement_C WBP_SafeVoiceUserAgreement.Default__WBP_SafeVoiceUserAgreement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SafeVoiceUserAgreement_C* UWBP_SafeVoiceUserAgreement_C::GetDefaultObj()
{
	static class UWBP_SafeVoiceUserAgreement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SafeVoiceUserAgreement_C*>(UWBP_SafeVoiceUserAgreement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C.OnRejectSafeVoiceConsent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameUserSettings*        K2Node_DynamicCast_AsVal_Game_User_Settings                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SafeVoiceUserAgreement_C::OnRejectSafeVoiceConsent(class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SafeVoiceUserAgreement_C", "OnRejectSafeVoiceConsent");

	Params::UWBP_SafeVoiceUserAgreement_C_OnRejectSafeVoiceConsent_Params Parms{};

	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_User_Settings = K2Node_DynamicCast_AsVal_Game_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C.OnAcceptSafeVoiceConsent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SafeVoiceUserAgreement_C::OnAcceptSafeVoiceConsent(class AValPlayerController* CallFunc_GetPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SafeVoiceUserAgreement_C", "OnAcceptSafeVoiceConsent");

	Params::UWBP_SafeVoiceUserAgreement_C_OnAcceptSafeVoiceConsent_Params Parms{};

	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C.BndEvt__WBP_SafeVoiceUserAgreement_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SafeVoiceUserAgreement_C::BndEvt__WBP_SafeVoiceUserAgreement_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SafeVoiceUserAgreement_C", "BndEvt__WBP_SafeVoiceUserAgreement_UI_Button_Menu_Gold_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C.BndEvt__WBP_SafeVoiceUserAgreement_UI_Button_Menu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SafeVoiceUserAgreement_C::BndEvt__WBP_SafeVoiceUserAgreement_UI_Button_Menu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SafeVoiceUserAgreement_C", "BndEvt__WBP_SafeVoiceUserAgreement_UI_Button_Menu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C.BndEvt__WBP_SafeVoiceUserAgreement_Checkbox_K2Node_ComponentBoundEvent_2_OnCheckChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Checked                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SafeVoiceUserAgreement_C::BndEvt__WBP_SafeVoiceUserAgreement_Checkbox_K2Node_ComponentBoundEvent_2_OnCheckChanged__DelegateSignature(bool Checked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SafeVoiceUserAgreement_C", "BndEvt__WBP_SafeVoiceUserAgreement_Checkbox_K2Node_ComponentBoundEvent_2_OnCheckChanged__DelegateSignature");

	Params::UWBP_SafeVoiceUserAgreement_C_BndEvt__WBP_SafeVoiceUserAgreement_Checkbox_K2Node_ComponentBoundEvent_2_OnCheckChanged__DelegateSignature_Params Parms{};

	Parms.Checked = Checked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_SafeVoiceUserAgreement_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SafeVoiceUserAgreement_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C.BndEvt__WBP_SafeVoiceUserAgreement_WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_SafeVoiceUserAgreement_C::BndEvt__WBP_SafeVoiceUserAgreement_WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SafeVoiceUserAgreement_C", "BndEvt__WBP_SafeVoiceUserAgreement_WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C.ExecuteUbergraph_WBP_SafeVoiceUserAgreement
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveViewRoute_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_Checked                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SafeVoiceUserAgreement_C::ExecuteUbergraph_WBP_SafeVoiceUserAgreement(int32 EntryPoint, bool CallFunc_RemoveViewRoute_ReturnValue, bool K2Node_ComponentBoundEvent_Checked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SafeVoiceUserAgreement_C", "ExecuteUbergraph_WBP_SafeVoiceUserAgreement");

	Params::UWBP_SafeVoiceUserAgreement_C_ExecuteUbergraph_WBP_SafeVoiceUserAgreement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RemoveViewRoute_ReturnValue = CallFunc_RemoveViewRoute_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Checked = K2Node_ComponentBoundEvent_Checked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SafeVoiceUserAgreement.WBP_SafeVoiceUserAgreement_C.OnPlayerSelectedConsentStatus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ConsentEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SafeVoiceUserAgreement_C::OnPlayerSelectedConsentStatus__DelegateSignature(bool ConsentEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SafeVoiceUserAgreement_C", "OnPlayerSelectedConsentStatus__DelegateSignature");

	Params::UWBP_SafeVoiceUserAgreement_C_OnPlayerSelectedConsentStatus__DelegateSignature_Params Parms{};

	Parms.ConsentEnabled = ConsentEnabled;

	UObject::ProcessEvent(Func, &Parms);

}

}


