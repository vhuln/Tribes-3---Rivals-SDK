#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ReplayOpeningCinematicLoreVideo.WBP_ReplayOpeningCinematicLoreVideo_C
// (None)

class UClass* UWBP_ReplayOpeningCinematicLoreVideo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ReplayOpeningCinematicLoreVideo_C");

	return Clss;
}


// WBP_ReplayOpeningCinematicLoreVideo_C WBP_ReplayOpeningCinematicLoreVideo.Default__WBP_ReplayOpeningCinematicLoreVideo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ReplayOpeningCinematicLoreVideo_C* UWBP_ReplayOpeningCinematicLoreVideo_C::GetDefaultObj()
{
	static class UWBP_ReplayOpeningCinematicLoreVideo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ReplayOpeningCinematicLoreVideo_C*>(UWBP_ReplayOpeningCinematicLoreVideo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ReplayOpeningCinematicLoreVideo.WBP_ReplayOpeningCinematicLoreVideo_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ReplayOpeningCinematicLoreVideo_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ReplayOpeningCinematicLoreVideo_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ReplayOpeningCinematicLoreVideo.WBP_ReplayOpeningCinematicLoreVideo_C.HandleOnMediaOpenFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      FailedUrl                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ReplayOpeningCinematicLoreVideo_C::HandleOnMediaOpenFailed(const class FString& FailedUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ReplayOpeningCinematicLoreVideo_C", "HandleOnMediaOpenFailed");

	Params::UWBP_ReplayOpeningCinematicLoreVideo_C_HandleOnMediaOpenFailed_Params Parms{};

	Parms.FailedUrl = FailedUrl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ReplayOpeningCinematicLoreVideo.WBP_ReplayOpeningCinematicLoreVideo_C.WhenCinematicDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ReplayOpeningCinematicLoreVideo_C::WhenCinematicDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ReplayOpeningCinematicLoreVideo_C", "WhenCinematicDone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ReplayOpeningCinematicLoreVideo.WBP_ReplayOpeningCinematicLoreVideo_C.HandleOnMediaOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OpenedUrl                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ReplayOpeningCinematicLoreVideo_C::HandleOnMediaOpened(const class FString& OpenedUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ReplayOpeningCinematicLoreVideo_C", "HandleOnMediaOpened");

	Params::UWBP_ReplayOpeningCinematicLoreVideo_C_HandleOnMediaOpened_Params Parms{};

	Parms.OpenedUrl = OpenedUrl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ReplayOpeningCinematicLoreVideo.WBP_ReplayOpeningCinematicLoreVideo_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ReplayOpeningCinematicLoreVideo_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ReplayOpeningCinematicLoreVideo_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ReplayOpeningCinematicLoreVideo.WBP_ReplayOpeningCinematicLoreVideo_C.BndEvt__WBP_Cinematic_SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ReplayOpeningCinematicLoreVideo_C::BndEvt__WBP_Cinematic_SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ReplayOpeningCinematicLoreVideo_C", "BndEvt__WBP_Cinematic_SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ReplayOpeningCinematicLoreVideo.WBP_ReplayOpeningCinematicLoreVideo_C.OnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ReplayOpeningCinematicLoreVideo_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ReplayOpeningCinematicLoreVideo_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ReplayOpeningCinematicLoreVideo.WBP_ReplayOpeningCinematicLoreVideo_C.ExecuteUbergraph_WBP_ReplayOpeningCinematicLoreVideo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_FailedUrl                                     (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_OpenedUrl                                     (ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_SetFocusToThis_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Play_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Pause_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerControllerOwner_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMediaSoundComponent*        CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Pause_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveViewRoute_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ReplayOpeningCinematicLoreVideo_C::ExecuteUbergraph_WBP_ReplayOpeningCinematicLoreVideo(int32 EntryPoint, const class FString& K2Node_CustomEvent_FailedUrl, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const class FString& K2Node_CustomEvent_OpenedUrl, class UWidget* CallFunc_SetFocusToThis_ReturnValue, bool CallFunc_Play_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Pause_ReturnValue, class APlayerController* CallFunc_GetPlayerControllerOwner_ReturnValue, class UMediaSoundComponent* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_OpenSource_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Pause_ReturnValue_1, bool CallFunc_RemoveViewRoute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ReplayOpeningCinematicLoreVideo_C", "ExecuteUbergraph_WBP_ReplayOpeningCinematicLoreVideo");

	Params::UWBP_ReplayOpeningCinematicLoreVideo_C_ExecuteUbergraph_WBP_ReplayOpeningCinematicLoreVideo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_FailedUrl = K2Node_CustomEvent_FailedUrl;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_OpenedUrl = K2Node_CustomEvent_OpenedUrl;
	Parms.CallFunc_SetFocusToThis_ReturnValue = CallFunc_SetFocusToThis_ReturnValue;
	Parms.CallFunc_Play_ReturnValue = CallFunc_Play_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Pause_ReturnValue = CallFunc_Pause_ReturnValue;
	Parms.CallFunc_GetPlayerControllerOwner_ReturnValue = CallFunc_GetPlayerControllerOwner_ReturnValue;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Pause_ReturnValue_1 = CallFunc_Pause_ReturnValue_1;
	Parms.CallFunc_RemoveViewRoute_ReturnValue = CallFunc_RemoveViewRoute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


