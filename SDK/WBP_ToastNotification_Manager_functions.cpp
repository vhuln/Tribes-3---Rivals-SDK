#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C
// (None)

class UClass* UWBP_ToastNotification_Manager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ToastNotification_Manager_C");

	return Clss;
}


// WBP_ToastNotification_Manager_C WBP_ToastNotification_Manager.Default__WBP_ToastNotification_Manager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ToastNotification_Manager_C* UWBP_ToastNotification_Manager_C::GetDefaultObj()
{
	static class UWBP_ToastNotification_Manager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ToastNotification_Manager_C*>(UWBP_ToastNotification_Manager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.PushAwardsEarnedInMatch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct RallyHereStart_ToastData>CallFunc_GetPostMatchToasts_ReturnValue                          (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_ToastData    CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToastNotification_Manager_C::PushAwardsEarnedInMatch(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct RallyHereStart_ToastData>& CallFunc_GetPostMatchToasts_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct RallyHereStart_ToastData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotification_Manager_C", "PushAwardsEarnedInMatch");

	Params::UWBP_ToastNotification_Manager_C_PushAwardsEarnedInMatch_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPostMatchToasts_ReturnValue = CallFunc_GetPostMatchToasts_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayChallengeToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Toast2_C*               Toast                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ToastNotification_Manager_C::DisplayChallengeToast(class UWBP_Toast2_C* Toast, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotification_Manager_C", "DisplayChallengeToast");

	Params::UWBP_ToastNotification_Manager_C_DisplayChallengeToast_Params Parms{};

	Parms.Toast = Toast;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ToastNotifcation_Entry_C*Toast                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ToastNotification_Manager_C::DisplayToast(class UWBP_ToastNotifcation_Entry_C* Toast, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotification_Manager_C", "DisplayToast");

	Params::UWBP_ToastNotification_Manager_C_DisplayToast_Params Parms{};

	Parms.Toast = Toast;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastNotificationReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// struct RallyHereStart_ToastData    ToastData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ToastNotification_Manager_C::OnToastNotificationReceived(const struct RallyHereStart_ToastData& ToastData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotification_Manager_C", "OnToastNotificationReceived");

	Params::UWBP_ToastNotification_Manager_C_OnToastNotificationReceived_Params Parms{};

	Parms.ToastData = ToastData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleToastNotificationRemove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   ToastNotification                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ToastNotification_Manager_C::HandleToastNotificationRemove(class URHWidget* ToastNotification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotification_Manager_C", "HandleToastNotificationRemove");

	Params::UWBP_ToastNotification_Manager_C_HandleToastNotificationRemove_Params Parms{};

	Parms.ToastNotification = ToastNotification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastIntroAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ToastNotification_Manager_C::OnToastIntroAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotification_Manager_C", "OnToastIntroAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ToastNotification_Manager_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotification_Manager_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleChallengeToastNotificationRemove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   ToastNotification                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ToastNotification_Manager_C::HandleChallengeToastNotificationRemove(class URHWidget* ToastNotification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotification_Manager_C", "HandleChallengeToastNotificationRemove");

	Params::UWBP_ToastNotification_Manager_C_HandleChallengeToastNotificationRemove_Params Parms{};

	Parms.ToastNotification = ToastNotification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.ExecuteUbergraph_WBP_ToastNotification_Manager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_ToastData    K2Node_Event_ToastData                                           (None)
// class UWBP_ToastNotifcation_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   K2Node_CustomEvent_ToastNotification_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Toast2_C*               CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   K2Node_CustomEvent_ToastNotification                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChild_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToastNotification_Manager_C::ExecuteUbergraph_WBP_ToastNotification_Manager(int32 EntryPoint, const struct RallyHereStart_ToastData& K2Node_Event_ToastData, class UWBP_ToastNotifcation_Entry_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class URHWidget* K2Node_CustomEvent_ToastNotification_1, class UWBP_Toast2_C* CallFunc_Create_ReturnValue_1, bool CallFunc_RemoveChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URHWidget* K2Node_CustomEvent_ToastNotification, bool CallFunc_RemoveChild_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ToastNotification_Manager_C", "ExecuteUbergraph_WBP_ToastNotification_Manager");

	Params::UWBP_ToastNotification_Manager_C_ExecuteUbergraph_WBP_ToastNotification_Manager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ToastData = K2Node_Event_ToastData;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_ToastNotification_1 = K2Node_CustomEvent_ToastNotification_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_ToastNotification = K2Node_CustomEvent_ToastNotification;
	Parms.CallFunc_RemoveChild_ReturnValue_1 = CallFunc_RemoveChild_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


