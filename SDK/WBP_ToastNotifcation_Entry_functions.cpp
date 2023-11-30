#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C
// (None)

class UClass* UWBP_ToastNotifcation_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ToastNotifcation_Entry_C");

	return Clss;
}


// WBP_ToastNotifcation_Entry_C WBP_ToastNotifcation_Entry.Default__WBP_ToastNotifcation_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ToastNotifcation_Entry_C* UWBP_ToastNotifcation_Entry_C::GetDefaultObj()
{
	static class UWBP_ToastNotifcation_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ToastNotifcation_Entry_C*>(UWBP_ToastNotifcation_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.SetViewStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EToastCategory          ToastCategory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor                                     (None)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor_1                                   (None)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor_2                                   (None)
// struct SlateCore_SlateColor        K2Node_MakeStruct_SlateColor_3                                   (None)

void UWBP_ToastNotifcation_Entry_C::SetViewStyle(enum class EToastCategory ToastCategory, bool K2Node_SwitchEnum_CmpSuccess, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor_1, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor_2, const struct SlateCore_SlateColor& K2Node_MakeStruct_SlateColor_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotifcation_Entry_C", "SetViewStyle");

	Params::UWBP_ToastNotifcation_Entry_C_SetViewStyle_Params Parms{};

	Parms.ToastCategory = ToastCategory;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayOutroAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ToastNotifcation_Entry_C::PlayOutroAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotifcation_Entry_C", "PlayOutroAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.HandleOutroAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ToastNotifcation_Entry_C::HandleOutroAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotifcation_Entry_C", "HandleOutroAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayWaitAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ToastNotifcation_Entry_C::PlayWaitAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotifcation_Entry_C", "PlayWaitAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ToastNotifcation_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotifcation_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.ExecuteUbergraph_WBP_ToastNotifcation_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ToastNotifcation_Entry_C::ExecuteUbergraph_WBP_ToastNotifcation_Entry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotifcation_Entry_C", "ExecuteUbergraph_WBP_ToastNotifcation_Entry");

	Params::UWBP_ToastNotifcation_Entry_C_ExecuteUbergraph_WBP_ToastNotifcation_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.FinishedIntroAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ToastNotifcation_Entry_C::FinishedIntroAnimation__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotifcation_Entry_C", "FinishedIntroAnimation__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.OnRemoveToastNotification__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   ToastWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ToastNotifcation_Entry_C::OnRemoveToastNotification__DelegateSignature(class URHWidget* ToastWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotifcation_Entry_C", "OnRemoveToastNotification__DelegateSignature");

	Params::UWBP_ToastNotifcation_Entry_C_OnRemoveToastNotification__DelegateSignature_Params Parms{};

	Parms.ToastWidget = ToastWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


