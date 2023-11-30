#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LoginExisting.LoginExisting_C
// (None)

class UClass* ULoginExisting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoginExisting_C");

	return Clss;
}


// LoginExisting_C LoginExisting.Default__LoginExisting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoginExisting_C* ULoginExisting_C::GetDefaultObj()
{
	static class ULoginExisting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoginExisting_C*>(ULoginExisting_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoginExisting.LoginExisting_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatformType_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnonymousLogin_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NavigateConfirm_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ULoginExisting_C::NavigateConfirm(bool CallFunc_IsPlatformType_ReturnValue, bool CallFunc_IsAnonymousLogin_ReturnValue, bool CallFunc_NavigateConfirm_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "NavigateConfirm");

	Params::ULoginExisting_C_NavigateConfirm_Params Parms{};

	Parms.CallFunc_IsPlatformType_ReturnValue = CallFunc_IsPlatformType_ReturnValue;
	Parms.CallFunc_IsAnonymousLogin_ReturnValue = CallFunc_IsAnonymousLogin_ReturnValue;
	Parms.CallFunc_NavigateConfirm_ReturnValue = CallFunc_NavigateConfirm_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LoginExisting.LoginExisting_C.NavigateBack
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ULoginExisting_C::NavigateBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "NavigateBack");

	Params::ULoginExisting_C_NavigateBack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LoginExisting.LoginExisting_C.ShouldRedirectToRemoteLobby
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldRedirect                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalPlayerController_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController_City*   K2Node_DynamicCast_AsVal_Player_Controller_City                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalLobbyConnected_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginExisting_C::ShouldRedirectToRemoteLobby(bool* ShouldRedirect, class APlayerController* CallFunc_GetLocalPlayerController_ReturnValue, class AValPlayerController_City* K2Node_DynamicCast_AsVal_Player_Controller_City, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocalLobbyConnected_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "ShouldRedirectToRemoteLobby");

	Params::ULoginExisting_C_ShouldRedirectToRemoteLobby_Params Parms{};

	Parms.CallFunc_GetLocalPlayerController_ReturnValue = CallFunc_GetLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Player_Controller_City = K2Node_DynamicCast_AsVal_Player_Controller_City;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocalLobbyConnected_ReturnValue = CallFunc_IsLocalLobbyConnected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldRedirect != nullptr)
		*ShouldRedirect = Parms.ShouldRedirect;

}


// Function LoginExisting.LoginExisting_C.SetCacheErrorMsg
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetLastDisconnectReason_ErrorMsg                        (None)
// bool                               CallFunc_GetLastDisconnectReason_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginExisting_C::SetCacheErrorMsg(class FText CallFunc_GetLastDisconnectReason_ErrorMsg, bool CallFunc_GetLastDisconnectReason_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "SetCacheErrorMsg");

	Params::ULoginExisting_C_SetCacheErrorMsg_Params Parms{};

	Parms.CallFunc_GetLastDisconnectReason_ErrorMsg = CallFunc_GetLastDisconnectReason_ErrorMsg;
	Parms.CallFunc_GetLastDisconnectReason_ReturnValue = CallFunc_GetLastDisconnectReason_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginExisting.LoginExisting_C.UpdatePlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CurrentPlayerName                                                (Edit, BlueprintVisible)
// bool                               CallFunc_AllowUserSwitching_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AllowUserSwitching_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_GetCurrentPlayerName_NameText                           (None)
// bool                               CallFunc_GetCurrentPlayerName_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginExisting_C::UpdatePlayerName(class FText CurrentPlayerName, bool CallFunc_AllowUserSwitching_ReturnValue, bool CallFunc_AllowUserSwitching_ReturnValue_1, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_GetCurrentPlayerName_NameText, bool CallFunc_GetCurrentPlayerName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "UpdatePlayerName");

	Params::ULoginExisting_C_UpdatePlayerName_Params Parms{};

	Parms.CurrentPlayerName = CurrentPlayerName;
	Parms.CallFunc_AllowUserSwitching_ReturnValue = CallFunc_AllowUserSwitching_ReturnValue;
	Parms.CallFunc_AllowUserSwitching_ReturnValue_1 = CallFunc_AllowUserSwitching_ReturnValue_1;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetCurrentPlayerName_NameText = CallFunc_GetCurrentPlayerName_NameText;
	Parms.CallFunc_GetCurrentPlayerName_ReturnValue = CallFunc_GetCurrentPlayerName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginExisting.LoginExisting_C.SetPlatformSpecificInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSignInWithGoogle                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSignInWithApple                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWithEditor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasLaunchOption_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatformType_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatform_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnonymousLogin_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatform_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWithEditor_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasLaunchOption_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_3                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ULoginExisting_C::SetPlatformSpecificInterface(bool bSignInWithGoogle, bool bSignInWithApple, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_IsWithEditor_ReturnValue, bool CallFunc_HasLaunchOption_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsPlatformType_ReturnValue, bool CallFunc_IsPlatform_ReturnValue, bool CallFunc_IsAnonymousLogin_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsPlatform_ReturnValue_1, bool CallFunc_IsWithEditor_ReturnValue_1, bool CallFunc_HasLaunchOption_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select_Default_1, class UWidget* K2Node_Select_Default_2, class UWidget* K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "SetPlatformSpecificInterface");

	Params::ULoginExisting_C_SetPlatformSpecificInterface_Params Parms{};

	Parms.bSignInWithGoogle = bSignInWithGoogle;
	Parms.bSignInWithApple = bSignInWithApple;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_IsWithEditor_ReturnValue = CallFunc_IsWithEditor_ReturnValue;
	Parms.CallFunc_HasLaunchOption_ReturnValue = CallFunc_HasLaunchOption_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsPlatformType_ReturnValue = CallFunc_IsPlatformType_ReturnValue;
	Parms.CallFunc_IsPlatform_ReturnValue = CallFunc_IsPlatform_ReturnValue;
	Parms.CallFunc_IsAnonymousLogin_ReturnValue = CallFunc_IsAnonymousLogin_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsPlatform_ReturnValue_1 = CallFunc_IsPlatform_ReturnValue_1;
	Parms.CallFunc_IsWithEditor_ReturnValue_1 = CallFunc_IsWithEditor_ReturnValue_1;
	Parms.CallFunc_HasLaunchOption_ReturnValue_1 = CallFunc_HasLaunchOption_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginExisting.LoginExisting_C.HandleLoginError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ErrorMsg                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void ULoginExisting_C::HandleLoginError(class FText ErrorMsg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "HandleLoginError");

	Params::ULoginExisting_C_HandleLoginError_Params Parms{};

	Parms.ErrorMsg = ErrorMsg;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginExisting.LoginExisting_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void ULoginExisting_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoginExisting.LoginExisting_C.BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginExisting_C::BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::ULoginExisting_C_BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginExisting.LoginExisting_C.BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULoginExisting_C::BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::ULoginExisting_C_BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginExisting.LoginExisting_C.Handle Input State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginExisting_C::Handle_Input_State_Changed(enum class ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "Handle Input State Changed");

	Params::ULoginExisting_C_Handle_Input_State_Changed_Params Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginExisting.LoginExisting_C.ConfirmClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginExisting_C::ConfirmClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "ConfirmClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoginExisting.LoginExisting_C.OnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void ULoginExisting_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoginExisting.LoginExisting_C.BndEvt__AnonLoginButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULoginExisting_C::BndEvt__AnonLoginButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "BndEvt__AnonLoginButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoginExisting.LoginExisting_C.BndEvt__XboxCalloutWrapper_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULoginExisting_C::BndEvt__XboxCalloutWrapper_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "BndEvt__XboxCalloutWrapper_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoginExisting.LoginExisting_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginExisting_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "PreConstruct");

	Params::ULoginExisting_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginExisting.LoginExisting_C.OnProfileChangeRequested
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginExisting_C::OnProfileChangeRequested()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "OnProfileChangeRequested");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoginExisting.LoginExisting_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)
// Parameters:

void ULoginExisting_C::InitializeWidgetNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "InitializeWidgetNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoginExisting.LoginExisting_C.BndEvt__SignInWithAppleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULoginExisting_C::BndEvt__SignInWithAppleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "BndEvt__SignInWithAppleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoginExisting.LoginExisting_C.BndEvt__SignInWithGoogle_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ULoginExisting_C::BndEvt__SignInWithGoogle_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "BndEvt__SignInWithGoogle_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoginExisting.LoginExisting_C.BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginExisting_C::BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature");

	Params::ULoginExisting_C_BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoginExisting.LoginExisting_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginExisting_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoginExisting.LoginExisting_C.Gamepad Select Username
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULoginExisting_C::Gamepad_Select_Username()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "Gamepad Select Username");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoginExisting.LoginExisting_C.ExecuteUbergraph_LoginExisting
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ERH_INPUT_STATE         K2Node_CustomEvent_InputState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_PlatformUserId  CallFunc_GetPlatformUserId_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadButtonForAction_Button                        (HasGetValueTypeHash)
// bool                               CallFunc_GetGamepadButtonForAction_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                (None)
// struct InputCore_Key               CallFunc_GetGamepadConfirmButton_ReturnValue                     (HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnonymousLogin_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldDisplayDisconnectError_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetGamepadConfirmButton_ReturnValue_1                   (HasGetValueTypeHash)
// struct RallyHereStart_ButtonPromptDataK2Node_MakeStruct_ButtonPromptData                               (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ERHLoginState           CallFunc_GetCurrentLoginState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHLoginDataFactory*         CallFunc_GetLoginDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_ButtonPromptDataK2Node_MakeStruct_ButtonPromptData_1                             (None)
// class FText                        CallFunc_GetCurrentPlayerName_NameText                           (None)
// bool                               CallFunc_GetCurrentPlayerName_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_PlatformUserId  CallFunc_GetPlatformUserId_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_PlatformUserId  CallFunc_GetPlatformUserId_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddViewRoute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class URHLoginDataFactory*         CallFunc_GetLoginDataFactory_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatformType_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatformType_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue_2                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue_3                           (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatformType_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULoginExisting_C::ExecuteUbergraph_LoginExisting(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText K2Node_ComponentBoundEvent_Text, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct CoreUObject_PlatformUserId& CallFunc_GetPlatformUserId_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, const struct InputCore_Key& CallFunc_GetGamepadButtonForAction_Button, bool CallFunc_GetGamepadButtonForAction_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsAnonymousLogin_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_ShouldDisplayDisconnectError_ReturnValue, bool K2Node_Event_IsDesignTime, const struct InputCore_Key& CallFunc_GetGamepadConfirmButton_ReturnValue_1, const struct RallyHereStart_ButtonPromptData& K2Node_MakeStruct_ButtonPromptData, bool Temp_bool_Variable_1, class UWidget* K2Node_Select_Default, enum class ERHLoginState CallFunc_GetCurrentLoginState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue, const struct RallyHereStart_ButtonPromptData& K2Node_MakeStruct_ButtonPromptData_1, class FText CallFunc_GetCurrentPlayerName_NameText, bool CallFunc_GetCurrentPlayerName_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_2, const struct CoreUObject_PlatformUserId& CallFunc_GetPlatformUserId_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, const struct CoreUObject_PlatformUserId& CallFunc_GetPlatformUserId_ReturnValue_2, int32 K2Node_ComponentBoundEvent_Index, bool CallFunc_AddViewRoute_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue_2, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsPlatformType_ReturnValue, bool CallFunc_IsPlatformType_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, const class FString& CallFunc_GetPlatformName_ReturnValue_1, const class FString& CallFunc_GetPlatformName_ReturnValue_2, bool CallFunc_EqualEqual_StriStri_ReturnValue_3, bool CallFunc_EqualEqual_StriStri_ReturnValue_4, bool CallFunc_EqualEqual_StriStri_ReturnValue_5, bool CallFunc_EqualEqual_StriStri_ReturnValue_6, bool CallFunc_EqualEqual_StriStri_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_StriStri_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, bool Temp_bool_Variable_2, const class FString& CallFunc_GetPlatformName_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_EqualEqual_StriStri_ReturnValue_9, bool CallFunc_EqualEqual_StriStri_ReturnValue_10, bool CallFunc_EqualEqual_StriStri_ReturnValue_11, bool CallFunc_IsPlatformType_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, enum class ESlateVisibility K2Node_Select_Default_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoginExisting_C", "ExecuteUbergraph_LoginExisting");

	Params::ULoginExisting_C_ExecuteUbergraph_LoginExisting_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_CustomEvent_InputState = K2Node_CustomEvent_InputState;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetPlatformUserId_ReturnValue = CallFunc_GetPlatformUserId_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetGamepadButtonForAction_Button = CallFunc_GetGamepadButtonForAction_Button;
	Parms.CallFunc_GetGamepadButtonForAction_ReturnValue = CallFunc_GetGamepadButtonForAction_ReturnValue;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_GetGamepadConfirmButton_ReturnValue = CallFunc_GetGamepadConfirmButton_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsAnonymousLogin_ReturnValue = CallFunc_IsAnonymousLogin_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_ShouldDisplayDisconnectError_ReturnValue = CallFunc_ShouldDisplayDisconnectError_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetGamepadConfirmButton_ReturnValue_1 = CallFunc_GetGamepadConfirmButton_ReturnValue_1;
	Parms.K2Node_MakeStruct_ButtonPromptData = K2Node_MakeStruct_ButtonPromptData;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCurrentLoginState_ReturnValue = CallFunc_GetCurrentLoginState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetLoginDataFactory_ReturnValue = CallFunc_GetLoginDataFactory_ReturnValue;
	Parms.K2Node_MakeStruct_ButtonPromptData_1 = K2Node_MakeStruct_ButtonPromptData_1;
	Parms.CallFunc_GetCurrentPlayerName_NameText = CallFunc_GetCurrentPlayerName_NameText;
	Parms.CallFunc_GetCurrentPlayerName_ReturnValue = CallFunc_GetCurrentPlayerName_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetPlatformUserId_ReturnValue_1 = CallFunc_GetPlatformUserId_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_GetPlatformUserId_ReturnValue_2 = CallFunc_GetPlatformUserId_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.CallFunc_AddViewRoute_ReturnValue = CallFunc_AddViewRoute_ReturnValue;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_GetLoginDataFactory_ReturnValue_1 = CallFunc_GetLoginDataFactory_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_1 = CallFunc_EqualEqual_StriStri_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_2 = CallFunc_EqualEqual_StriStri_ReturnValue_2;
	Parms.CallFunc_GetCurrentInputState_ReturnValue_1 = CallFunc_GetCurrentInputState_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_IsPlatformType_ReturnValue = CallFunc_IsPlatformType_ReturnValue;
	Parms.CallFunc_IsPlatformType_ReturnValue_1 = CallFunc_IsPlatformType_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_GetPlatformName_ReturnValue_1 = CallFunc_GetPlatformName_ReturnValue_1;
	Parms.CallFunc_GetPlatformName_ReturnValue_2 = CallFunc_GetPlatformName_ReturnValue_2;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_3 = CallFunc_EqualEqual_StriStri_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_4 = CallFunc_EqualEqual_StriStri_ReturnValue_4;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_5 = CallFunc_EqualEqual_StriStri_ReturnValue_5;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_6 = CallFunc_EqualEqual_StriStri_ReturnValue_6;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_7 = CallFunc_EqualEqual_StriStri_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_8 = CallFunc_EqualEqual_StriStri_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetPlatformName_ReturnValue_3 = CallFunc_GetPlatformName_ReturnValue_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_9 = CallFunc_EqualEqual_StriStri_ReturnValue_9;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_10 = CallFunc_EqualEqual_StriStri_ReturnValue_10;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue_11 = CallFunc_EqualEqual_StriStri_ReturnValue_11;
	Parms.CallFunc_IsPlatformType_ReturnValue_2 = CallFunc_IsPlatformType_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


