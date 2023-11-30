#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C
// (None)

class UClass* UWBP_QueueSelection_RegionSelectButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_QueueSelection_RegionSelectButton_C");

	return Clss;
}


// WBP_QueueSelection_RegionSelectButton_C WBP_QueueSelection_RegionSelectButton.Default__WBP_QueueSelection_RegionSelectButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_QueueSelection_RegionSelectButton_C* UWBP_QueueSelection_RegionSelectButton_C::GetDefaultObj()
{
	static class UWBP_QueueSelection_RegionSelectButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_QueueSelection_RegionSelectButton_C*>(UWBP_QueueSelection_RegionSelectButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.ForceClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QueueSelection_RegionSelectButton_C::ForceClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelection_RegionSelectButton_C", "ForceClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.HandleInputStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         NewInputState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelection_RegionSelectButton_C::HandleInputStateChange(enum class ERH_INPUT_STATE NewInputState, enum class ERH_INPUT_STATE Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelection_RegionSelectButton_C", "HandleInputStateChange");

	Params::UWBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange_Params Parms{};

	Parms.NewInputState = NewInputState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.SetupPromptImageHandling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetIconForGamepadButton_Icon                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelection_RegionSelectButton_C::SetupPromptImageHandling(enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, class UTexture2D* CallFunc_GetIconForGamepadButton_Icon, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelection_RegionSelectButton_C", "SetupPromptImageHandling");

	Params::UWBP_QueueSelection_RegionSelectButton_C_SetupPromptImageHandling_Params Parms{};

	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.CallFunc_GetIconForGamepadButton_Icon = CallFunc_GetIconForGamepadButton_Icon;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QueueSelection_RegionSelectButton_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelection_RegionSelectButton_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.Update Region
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QueueSelection_RegionSelectButton_C::Update_Region()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelection_RegionSelectButton_C", "Update Region");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.OnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_QueueSelection_RegionSelectButton_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelection_RegionSelectButton_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.LoginState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERHLoginState           LoginState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelection_RegionSelectButton_C::LoginState(enum class ERHLoginState LoginState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelection_RegionSelectButton_C", "LoginState");

	Params::UWBP_QueueSelection_RegionSelectButton_C_LoginState_Params Parms{};

	Parms.LoginState = LoginState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.EnableAsButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QueueSelection_RegionSelectButton_C::EnableAsButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelection_RegionSelectButton_C", "EnableAsButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.DisableAsButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QueueSelection_RegionSelectButton_C::DisableAsButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelection_RegionSelectButton_C", "DisableAsButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.UpdateCrossplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QueueSelection_RegionSelectButton_C::UpdateCrossplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelection_RegionSelectButton_C", "UpdateCrossplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.BndEvt__WBP_QueueSelection_RegionSelectButton_UI_Button_Menu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_QueueSelection_RegionSelectButton_C::BndEvt__WBP_QueueSelection_RegionSelectButton_UI_Button_Menu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelection_RegionSelectButton_C", "BndEvt__WBP_QueueSelection_RegionSelectButton_UI_Button_Menu_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QueueSelection_RegionSelectButton_C::UninitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelection_RegionSelectButton_C", "UninitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelection_RegionSelectButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelection_RegionSelectButton_C", "PreConstruct");

	Params::UWBP_QueueSelection_RegionSelectButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFontByName_HasFound                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateFontInfo     CallFunc_GetFontByName_FontInfo                                  (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERHLoginState           K2Node_CustomEvent_LoginState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPreferredRegionId_OutRegionId                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPreferredRegionId_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, class FText>   CallFunc_GetRegionList_OutRegionIdToNameMap                      (None)
// class FText                        CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHLoginDataFactory*         CallFunc_GetLoginDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_QueueSelection_RegionSelectButton_C::ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton(int32 EntryPoint, bool CallFunc_GetFontByName_HasFound, const struct SlateCore_SlateFontInfo& CallFunc_GetFontByName_FontInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ERHLoginState K2Node_CustomEvent_LoginState, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_GetPreferredRegionId_OutRegionId, bool CallFunc_GetPreferredRegionId_ReturnValue, TMap<class FString, class FText> CallFunc_GetRegionList_OutRegionIdToNameMap, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelection_RegionSelectButton_C", "ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton");

	Params::UWBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFontByName_HasFound = CallFunc_GetFontByName_HasFound;
	Parms.CallFunc_GetFontByName_FontInfo = CallFunc_GetFontByName_FontInfo;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_LoginState = K2Node_CustomEvent_LoginState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPreferredRegionId_OutRegionId = CallFunc_GetPreferredRegionId_OutRegionId;
	Parms.CallFunc_GetPreferredRegionId_ReturnValue = CallFunc_GetPreferredRegionId_ReturnValue;
	Parms.CallFunc_GetRegionList_OutRegionIdToNameMap = CallFunc_GetRegionList_OutRegionIdToNameMap;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetLoginDataFactory_ReturnValue = CallFunc_GetLoginDataFactory_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.RegionSelectRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_QueueSelection_RegionSelectButton_C::RegionSelectRequested__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_QueueSelection_RegionSelectButton_C", "RegionSelectRequested__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


