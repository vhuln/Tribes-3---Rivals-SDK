#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TopNavButton.WBP_TopNavButton_C
// (None)

class UClass* UWBP_TopNavButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TopNavButton_C");

	return Clss;
}


// WBP_TopNavButton_C WBP_TopNavButton.Default__WBP_TopNavButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TopNavButton_C* UWBP_TopNavButton_C::GetDefaultObj()
{
	static class UWBP_TopNavButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TopNavButton_C*>(UWBP_TopNavButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.SetNewIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TopNavButton_C::SetNewIndicator(bool Visible, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "SetNewIndicator");

	Params::UWBP_TopNavButton_C_SetNewIndicator_Params Parms{};

	Parms.Visible = Visible;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TopNavButton.WBP_TopNavButton_C.IsDisabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDisabled_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TopNavButton_C::IsDisabled(bool* Disabled, bool CallFunc_IsDisabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "IsDisabled");

	Params::UWBP_TopNavButton_C_IsDisabled_Params Parms{};

	Parms.CallFunc_IsDisabled_ReturnValue = CallFunc_IsDisabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Disabled != nullptr)
		*Disabled = Parms.Disabled;

}


// Function WBP_TopNavButton.WBP_TopNavButton_C.IsActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSelected_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TopNavButton_C::IsActive(bool* Active, bool CallFunc_IsSelected_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "IsActive");

	Params::UWBP_TopNavButton_C_IsActive_Params Parms{};

	Parms.CallFunc_IsSelected_ReturnValue = CallFunc_IsSelected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;

}


// Function WBP_TopNavButton.WBP_TopNavButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TopNavButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "PreConstruct");

	Params::UWBP_TopNavButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TopNavButton.WBP_TopNavButton_C.SetMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_TopNavButton_C::SetMessage(class FText Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "SetMessage");

	Params::UWBP_TopNavButton_C_SetMessage_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TopNavButton.WBP_TopNavButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_TopNavButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TopNavButton.WBP_TopNavButton_C.DisableButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDisabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TopNavButton_C::DisableButton(bool IsDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "DisableButton");

	Params::UWBP_TopNavButton_C_DisableButton_Params Parms{};

	Parms.IsDisabled = IsDisabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TopNavButton.WBP_TopNavButton_C.SetActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TopNavButton_C::SetActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "SetActive");

	Params::UWBP_TopNavButton_C_SetActive_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TopNavButton.WBP_TopNavButton_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TopNavButton_C::GamepadConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "GamepadConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TopNavButton.WBP_TopNavButton_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TopNavButton_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TopNavButton.WBP_TopNavButton_C.NavTabSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHNavTabWidget*             SelectedNavTab                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TopNavButton_C::NavTabSelected(class URHNavTabWidget* SelectedNavTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "NavTabSelected");

	Params::UWBP_TopNavButton_C_NavTabSelected_Params Parms{};

	Parms.SelectedNavTab = SelectedNavTab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TopNavButton.WBP_TopNavButton_C.ExecuteUbergraph_WBP_TopNavButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Message                                       (None)
// bool                               CallFunc_AddViewRoute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsDisabled                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsActive                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHNavTabWidget*             K2Node_CustomEvent_SelectedNavTab                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TopNavButton_C::ExecuteUbergraph_WBP_TopNavButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText K2Node_CustomEvent_Message, bool CallFunc_AddViewRoute_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool K2Node_CustomEvent_IsDisabled, bool K2Node_CustomEvent_IsActive, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHNavTabWidget* K2Node_CustomEvent_SelectedNavTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "ExecuteUbergraph_WBP_TopNavButton");

	Params::UWBP_TopNavButton_C_ExecuteUbergraph_WBP_TopNavButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.CallFunc_AddViewRoute_ReturnValue = CallFunc_AddViewRoute_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.K2Node_CustomEvent_IsDisabled = K2Node_CustomEvent_IsDisabled;
	Parms.K2Node_CustomEvent_IsActive = K2Node_CustomEvent_IsActive;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_SelectedNavTab = K2Node_CustomEvent_SelectedNavTab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TopNavButton.WBP_TopNavButton_C.OnNonRouteClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   ButtonClicked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_TopNavButton_C::OnNonRouteClicked__DelegateSignature(class URHWidget* ButtonClicked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "OnNonRouteClicked__DelegateSignature");

	Params::UWBP_TopNavButton_C_OnNonRouteClicked__DelegateSignature_Params Parms{};

	Parms.ButtonClicked = ButtonClicked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_TopNavButton.WBP_TopNavButton_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TopNavButton_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TopNavButton.WBP_TopNavButton_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_TopNavButton_C::OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "OnHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_TopNavButton.WBP_TopNavButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TargetViewState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_TopNavButton_C::OnClicked__DelegateSignature(class FName TargetViewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_TopNavButton_C", "OnClicked__DelegateSignature");

	Params::UWBP_TopNavButton_C_OnClicked__DelegateSignature_Params Parms{};

	Parms.TargetViewState = TargetViewState;

	UObject::ProcessEvent(Func, &Parms);

}

}


