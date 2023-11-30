#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Cinematic.WBP_Cinematic_C
// (None)

class UClass* UWBP_Cinematic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Cinematic_C");

	return Clss;
}


// WBP_Cinematic_C WBP_Cinematic.Default__WBP_Cinematic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Cinematic_C* UWBP_Cinematic_C::GetDefaultObj()
{
	static class UWBP_Cinematic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Cinematic_C*>(UWBP_Cinematic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Cinematic.WBP_Cinematic_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Cinematic_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Cinematic_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Cinematic.WBP_Cinematic_C.OnReadyForPlayback
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPlatformMediaSource*        PlatformMediaSource                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Cinematic_C::OnReadyForPlayback(class UPlatformMediaSource* PlatformMediaSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Cinematic_C", "OnReadyForPlayback");

	Params::UWBP_Cinematic_C_OnReadyForPlayback_Params Parms{};

	Parms.PlatformMediaSource = PlatformMediaSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Cinematic.WBP_Cinematic_C.HandleOnMediaOpenFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      FailedUrl                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Cinematic_C::HandleOnMediaOpenFailed(const class FString& FailedUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Cinematic_C", "HandleOnMediaOpenFailed");

	Params::UWBP_Cinematic_C_HandleOnMediaOpenFailed_Params Parms{};

	Parms.FailedUrl = FailedUrl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Cinematic.WBP_Cinematic_C.WhenCinematicDone
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Cinematic_C::WhenCinematicDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Cinematic_C", "WhenCinematicDone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Cinematic.WBP_Cinematic_C.HandleOnMediaOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OpenedUrl                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Cinematic_C::HandleOnMediaOpened(const class FString& OpenedUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Cinematic_C", "HandleOnMediaOpened");

	Params::UWBP_Cinematic_C_HandleOnMediaOpened_Params Parms{};

	Parms.OpenedUrl = OpenedUrl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Cinematic.WBP_Cinematic_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Cinematic_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Cinematic_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Cinematic.WBP_Cinematic_C.BndEvt__WBP_Cinematic_SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Cinematic_C::BndEvt__WBP_Cinematic_SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Cinematic_C", "BndEvt__WBP_Cinematic_SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Cinematic.WBP_Cinematic_C.OnShouldShowPromptChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bCanSkipEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cinematic_C::OnShouldShowPromptChanged(bool bCanSkipEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Cinematic_C", "OnShouldShowPromptChanged");

	Params::UWBP_Cinematic_C_OnShouldShowPromptChanged_Params Parms{};

	Parms.bCanSkipEntry = bCanSkipEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Cinematic.WBP_Cinematic_C.OnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Cinematic_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Cinematic_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Cinematic.WBP_Cinematic_C.ExecuteUbergraph_WBP_Cinematic
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_SetFocusToThis_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlatformMediaSource*        K2Node_Event_PlatformMediaSource                                 (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_FailedUrl                                     (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_OpenedUrl                                     (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Play_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Pause_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerControllerOwner_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMediaSoundComponent*        CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCanSkipEntry                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Pause_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cinematic_C::ExecuteUbergraph_WBP_Cinematic(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWidget* CallFunc_SetFocusToThis_ReturnValue, class UPlatformMediaSource* K2Node_Event_PlatformMediaSource, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const class FString& K2Node_CustomEvent_FailedUrl, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_OpenSource_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const class FString& K2Node_CustomEvent_OpenedUrl, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Play_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Pause_ReturnValue, class APlayerController* CallFunc_GetPlayerControllerOwner_ReturnValue, class UMediaSoundComponent* CallFunc_AddComponentByClass_ReturnValue, bool K2Node_Event_bCanSkipEntry, bool Temp_bool_Variable, bool CallFunc_Pause_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Cinematic_C", "ExecuteUbergraph_WBP_Cinematic");

	Params::UWBP_Cinematic_C_ExecuteUbergraph_WBP_Cinematic_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_SetFocusToThis_ReturnValue = CallFunc_SetFocusToThis_ReturnValue;
	Parms.K2Node_Event_PlatformMediaSource = K2Node_Event_PlatformMediaSource;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_FailedUrl = K2Node_CustomEvent_FailedUrl;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_OpenedUrl = K2Node_CustomEvent_OpenedUrl;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Play_ReturnValue = CallFunc_Play_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Pause_ReturnValue = CallFunc_Pause_ReturnValue;
	Parms.CallFunc_GetPlayerControllerOwner_ReturnValue = CallFunc_GetPlayerControllerOwner_ReturnValue;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.K2Node_Event_bCanSkipEntry = K2Node_Event_bCanSkipEntry;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Pause_ReturnValue_1 = CallFunc_Pause_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


