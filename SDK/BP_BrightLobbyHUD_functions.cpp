#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BrightLobbyHUD.BP_BrightLobbyHUD_C
// (Actor)

class UClass* ABP_BrightLobbyHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BrightLobbyHUD_C");

	return Clss;
}


// BP_BrightLobbyHUD_C BP_BrightLobbyHUD.Default__BP_BrightLobbyHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BrightLobbyHUD_C* ABP_BrightLobbyHUD_C::GetDefaultObj()
{
	static class ABP_BrightLobbyHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BrightLobbyHUD_C*>(ABP_BrightLobbyHUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetPopupManager
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHPopupManager*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class URHPopupManager* ABP_BrightLobbyHUD_C::GetPopupManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "GetPopupManager");

	Params::ABP_BrightLobbyHUD_C_GetPopupManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.RefreshJson
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BrightLobbyHUD_C::RefreshJson()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "RefreshJson");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ShouldDisplayGameSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldShowGameSelect                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameInstance*            K2Node_DynamicCast_AsVal_Game_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::ShouldDisplayGameSelect(bool* bShouldShowGameSelect, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValGameInstance* K2Node_DynamicCast_AsVal_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "ShouldDisplayGameSelect");

	Params::ABP_BrightLobbyHUD_C_ShouldDisplayGameSelect_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_Instance = K2Node_DynamicCast_AsVal_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bShouldShowGameSelect != nullptr)
		*bShouldShowGameSelect = Parms.bShouldShowGameSelect;

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ShouldDisplayMatchLoading
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldDisplay                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ValPlayerController_City_C*K2Node_DynamicCast_AsBP_Val_Player_Controller_City               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetRemoteLobbyQueueId_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::ShouldDisplayMatchLoading(bool* ShouldDisplay, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_ValPlayerController_City_C* K2Node_DynamicCast_AsBP_Val_Player_Controller_City, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetRemoteLobbyQueueId_ReturnValue, bool CallFunc_NotEqual_StriStri_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "ShouldDisplayMatchLoading");

	Params::ABP_BrightLobbyHUD_C_ShouldDisplayMatchLoading_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Val_Player_Controller_City = K2Node_DynamicCast_AsBP_Val_Player_Controller_City;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRemoteLobbyQueueId_ReturnValue = CallFunc_GetRemoteLobbyQueueId_ReturnValue;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue = CallFunc_NotEqual_StriStri_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldDisplay != nullptr)
		*ShouldDisplay = Parms.ShouldDisplay;

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Is in EOM View State
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class FName                        CallFunc_GetCurrentTransitionRoute_Current_Route                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Current_View_Route_Current_Route                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_BrightLobbyHUD_C::Is_in_EOM_View_State(TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_GetCurrentTransitionRoute_Current_Route, class FName CallFunc_Get_Current_View_Route_Current_Route, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "Is in EOM View State");

	Params::ABP_BrightLobbyHUD_C_Is_in_EOM_View_State_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCurrentTransitionRoute_Current_Route = CallFunc_GetCurrentTransitionRoute_Current_Route;
	Parms.CallFunc_Get_Current_View_Route_Current_Route = CallFunc_Get_Current_View_Route_Current_Route;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetupQueueEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHQueueDataFactory*         CallFunc_GetQueueDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::SetupQueueEvents(class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "SetupQueueEvents");

	Params::ABP_BrightLobbyHUD_C_SetupQueueEvents_Params Parms{};

	Parms.CallFunc_GetQueueDataFactory_ReturnValue = CallFunc_GetQueueDataFactory_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallRemoveTopViewRoute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceTransition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ViewChanged                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Remove_Top_View_Route_ViewChanged                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::CallRemoveTopViewRoute(bool ForceTransition, bool* ViewChanged, bool CallFunc_Remove_Top_View_Route_ViewChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "CallRemoveTopViewRoute");

	Params::ABP_BrightLobbyHUD_C_CallRemoveTopViewRoute_Params Parms{};

	Parms.ForceTransition = ForceTransition;
	Parms.CallFunc_Remove_Top_View_Route_ViewChanged = CallFunc_Remove_Top_View_Route_ViewChanged;

	UObject::ProcessEvent(Func, &Parms);

	if (ViewChanged != nullptr)
		*ViewChanged = Parms.ViewChanged;

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallAddViewRoute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RouteName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ClearRouteStack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceTransition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ViewChanged                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Add_View_Route_ViewChanged                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::CallAddViewRoute(class FName RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged, bool CallFunc_Add_View_Route_ViewChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "CallAddViewRoute");

	Params::ABP_BrightLobbyHUD_C_CallAddViewRoute_Params Parms{};

	Parms.RouteName = RouteName;
	Parms.ClearRouteStack = ClearRouteStack;
	Parms.ForceTransition = ForceTransition;
	Parms.CallFunc_Add_View_Route_ViewChanged = CallFunc_Add_View_Route_ViewChanged;

	UObject::ProcessEvent(Func, &Parms);

	if (ViewChanged != nullptr)
		*ViewChanged = Parms.ViewChanged;

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SafeFrameSettingApplied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BrightLobbyHUD_C::SafeFrameSettingApplied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "SafeFrameSettingApplied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.BindSettingCallbacks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_SettingDelegateStructK2Node_MakeStruct_SettingDelegateStruct                          (NoDestructor, ContainsInstancedReference)

void ABP_BrightLobbyHUD_C::BindSettingCallbacks(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct RallyHereStart_SettingDelegateStruct& K2Node_MakeStruct_SettingDelegateStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "BindSettingCallbacks");

	Params::ABP_BrightLobbyHUD_C_BindSettingCallbacks_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_SettingDelegateStruct = K2Node_MakeStruct_SettingDelegateStruct;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InternalAddViewRoute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RouteName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ClearRouteStack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceTransition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ViewChanged                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NewViewRoute                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PreviousViewRoute                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTopViewRoute_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddViewRoute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::InternalAddViewRoute(class FName RouteName, bool ClearRouteStack, bool ForceTransition, class UObject* Data, bool* ViewChanged, class FName NewViewRoute, class FName PreviousViewRoute, class FName CallFunc_GetTopViewRoute_ReturnValue, bool CallFunc_AddViewRoute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "InternalAddViewRoute");

	Params::ABP_BrightLobbyHUD_C_InternalAddViewRoute_Params Parms{};

	Parms.RouteName = RouteName;
	Parms.ClearRouteStack = ClearRouteStack;
	Parms.ForceTransition = ForceTransition;
	Parms.Data = Data;
	Parms.NewViewRoute = NewViewRoute;
	Parms.PreviousViewRoute = PreviousViewRoute;
	Parms.CallFunc_GetTopViewRoute_ReturnValue = CallFunc_GetTopViewRoute_ReturnValue;
	Parms.CallFunc_AddViewRoute_ReturnValue = CallFunc_AddViewRoute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ViewChanged != nullptr)
		*ViewChanged = Parms.ViewChanged;

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnAcquisition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Acquisition                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::OnAcquisition(class UObject* Acquisition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "OnAcquisition");

	Params::ABP_BrightLobbyHUD_C_OnAcquisition_Params Parms{};

	Parms.Acquisition = Acquisition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SwapViewRoute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RouteName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SwapTargetRoute                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceTransition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHViewManager*              CallFunc_GetViewManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SwapViewRoute_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::SwapViewRoute(class FName RouteName, class FName SwapTargetRoute, bool ForceTransition, class URHViewManager* CallFunc_GetViewManager_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_SwapViewRoute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "SwapViewRoute");

	Params::ABP_BrightLobbyHUD_C_SwapViewRoute_Params Parms{};

	Parms.RouteName = RouteName;
	Parms.SwapTargetRoute = SwapTargetRoute;
	Parms.ForceTransition = ForceTransition;
	Parms.CallFunc_GetViewManager_ReturnValue = CallFunc_GetViewManager_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_SwapViewRoute_ReturnValue = CallFunc_SwapViewRoute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Remove Top View Route
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceTransition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ViewChanged                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHLoginDataFactory*         CallFunc_GetLoginDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLoggedIn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTopViewRoute_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Add_View_Route_ViewChanged                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetViewRouteCount_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveTopViewRoute_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::Remove_Top_View_Route(bool ForceTransition, bool* ViewChanged, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue, bool CallFunc_IsLoggedIn_ReturnValue, bool Temp_bool_Variable, class FName CallFunc_GetTopViewRoute_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName K2Node_Select_Default, bool CallFunc_Add_View_Route_ViewChanged, int32 CallFunc_GetViewRouteCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_RemoveTopViewRoute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "Remove Top View Route");

	Params::ABP_BrightLobbyHUD_C_Remove_Top_View_Route_Params Parms{};

	Parms.ForceTransition = ForceTransition;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetLoginDataFactory_ReturnValue = CallFunc_GetLoginDataFactory_ReturnValue;
	Parms.CallFunc_IsLoggedIn_ReturnValue = CallFunc_IsLoggedIn_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetTopViewRoute_ReturnValue = CallFunc_GetTopViewRoute_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_View_Route_ViewChanged = CallFunc_Add_View_Route_ViewChanged;
	Parms.CallFunc_GetViewRouteCount_ReturnValue = CallFunc_GetViewRouteCount_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_RemoveTopViewRoute_ReturnValue = CallFunc_RemoveTopViewRoute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ViewChanged != nullptr)
		*ViewChanged = Parms.ViewChanged;

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Add View Route
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RouteName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ClearRouteStack                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceTransition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ViewChanged                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InternalAddViewRoute_ViewChanged                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::Add_View_Route(class FName RouteName, bool ClearRouteStack, bool ForceTransition, bool* ViewChanged, bool CallFunc_InternalAddViewRoute_ViewChanged)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "Add View Route");

	Params::ABP_BrightLobbyHUD_C_Add_View_Route_Params Parms{};

	Parms.RouteName = RouteName;
	Parms.ClearRouteStack = ClearRouteStack;
	Parms.ForceTransition = ForceTransition;
	Parms.CallFunc_InternalAddViewRoute_ViewChanged = CallFunc_InternalAddViewRoute_ViewChanged;

	UObject::ProcessEvent(Func, &Parms);

	if (ViewChanged != nullptr)
		*ViewChanged = Parms.ViewChanged;

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetCurrentTransitionRoute
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Current_Route                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentTransitionRoute_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::GetCurrentTransitionRoute(class FName* Current_Route, class FName CallFunc_GetCurrentTransitionRoute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "GetCurrentTransitionRoute");

	Params::ABP_BrightLobbyHUD_C_GetCurrentTransitionRoute_Params Parms{};

	Parms.CallFunc_GetCurrentTransitionRoute_ReturnValue = CallFunc_GetCurrentTransitionRoute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Route != nullptr)
		*Current_Route = Parms.Current_Route;

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetLobbyWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHLobbyWidget*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class URHLobbyWidget* ABP_BrightLobbyHUD_C::GetLobbyWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "GetLobbyWidget");

	Params::ABP_BrightLobbyHUD_C_GetLobbyWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Home Screen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BrightLobbyHUD_C::Focus_Home_Screen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "Focus Home Screen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current View Route
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Current_Route                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentRoute_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::Get_Current_View_Route(class FName* Current_Route, class FName CallFunc_GetCurrentRoute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "Get Current View Route");

	Params::ABP_BrightLobbyHUD_C_Get_Current_View_Route_Params Parms{};

	Parms.CallFunc_GetCurrentRoute_ReturnValue = CallFunc_GetCurrentRoute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Current_Route != nullptr)
		*Current_Route = Parms.Current_Route;

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Sticky Loadout Panel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_SetFocusToThis_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::Focus_Sticky_Loadout_Panel(class UWidget* CallFunc_SetFocusToThis_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "Focus Sticky Loadout Panel");

	Params::ABP_BrightLobbyHUD_C_Focus_Sticky_Loadout_Panel_Params Parms{};

	Parms.CallFunc_SetFocusToThis_ReturnValue = CallFunc_SetFocusToThis_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current Loadout Slot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                              Current_Loadout_Slot                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::Get_Current_Loadout_Slot(uint8* Current_Loadout_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "Get Current Loadout Slot");

	Params::ABP_BrightLobbyHUD_C_Get_Current_Loadout_Slot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Current_Loadout_Slot != nullptr)
		*Current_Loadout_Slot = Parms.Current_Loadout_Slot;

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Cache Current Loadout Slot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Loadout_Slot_Edit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::Cache_Current_Loadout_Slot(uint8 Loadout_Slot_Edit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "Cache Current Loadout Slot");

	Params::ABP_BrightLobbyHUD_C_Cache_Current_Loadout_Slot_Params Parms{};

	Parms.Loadout_Slot_Edit = Loadout_Slot_Edit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.TempBootstrapFunctionality
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BrightLobbyHUD_C::TempBootstrapFunctionality()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "TempBootstrapFunctionality");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.FallbackLogoutCleanup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPanelWidget*>        CallFunc_GetFocusableWidgetContainers_ReturnValue                (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::FallbackLogoutCleanup(int32 Temp_int_Array_Index_Variable, TArray<class UPanelWidget*>& CallFunc_GetFocusableWidgetContainers_ReturnValue, int32 Temp_int_Variable, class UPanelWidget* CallFunc_Array_Get_Item, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "FallbackLogoutCleanup");

	Params::ABP_BrightLobbyHUD_C_FallbackLogoutCleanup_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetFocusableWidgetContainers_ReturnValue = CallFunc_GetFocusableWidgetContainers_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetFocusableWidgetContainers
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UPanelWidget*>        ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// TArray<class UPanelWidget*>        CallFunc_GetFocusableWidgetContainers_ReturnValue                (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPanelWidget*>        K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

TArray<class UPanelWidget*> ABP_BrightLobbyHUD_C::GetFocusableWidgetContainers(TArray<class UPanelWidget*>& CallFunc_GetFocusableWidgetContainers_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class UPanelWidget*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "GetFocusableWidgetContainers");

	Params::ABP_BrightLobbyHUD_C_GetFocusableWidgetContainers_Params Parms{};

	Parms.CallFunc_GetFocusableWidgetContainers_ReturnValue = CallFunc_GetFocusableWidgetContainers_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Login State Change
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERHLoginState           Login_State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Add_View_Route_ViewChanged                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Add_View_Route_ViewChanged_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Add_View_Route_ViewChanged_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::Handle_Login_State_Change(enum class ERHLoginState Login_State, bool CallFunc_Add_View_Route_ViewChanged, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Add_View_Route_ViewChanged_1, bool CallFunc_Add_View_Route_ViewChanged_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "Handle Login State Change");

	Params::ABP_BrightLobbyHUD_C_Handle_Login_State_Change_Params Parms{};

	Parms.Login_State = Login_State;
	Parms.CallFunc_Add_View_Route_ViewChanged = CallFunc_Add_View_Route_ViewChanged;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_View_Route_ViewChanged_1 = CallFunc_Add_View_Route_ViewChanged_1;
	Parms.CallFunc_Add_View_Route_ViewChanged_2 = CallFunc_Add_View_Route_ViewChanged_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Party Invite Received
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_PlayerInfo*              Inviter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::Handle_Party_Invite_Received(class URH_PlayerInfo* Inviter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "Handle Party Invite Received");

	Params::ABP_BrightLobbyHUD_C_Handle_Party_Invite_Received_Params Parms{};

	Parms.Inviter = Inviter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BrightLobbyHUD_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ApplySafeFrameScale
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              SafeFrameScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::ApplySafeFrameScale(float SafeFrameScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "ApplySafeFrameScale");

	Params::ABP_BrightLobbyHUD_C_ApplySafeFrameScale_Params Parms{};

	Parms.SafeFrameScale = SafeFrameScale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnCustomQueueJoin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BrightLobbyHUD_C::OnCustomQueueJoin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "OnCustomQueueJoin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.EvaluateFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BrightLobbyHUD_C::EvaluateFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "EvaluateFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleMatchStatusUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ERH_MatchStatus         MatchStatus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::HandleMatchStatusUpdated(enum class ERH_MatchStatus MatchStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "HandleMatchStatusUpdated");

	Params::ABP_BrightLobbyHUD_C_HandleMatchStatusUpdated_Params Parms{};

	Parms.MatchStatus = MatchStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InitializeHudResources
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BrightLobbyHUD_C::InitializeHudResources()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "InitializeHudResources");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ExecuteUbergraph_BP_BrightLobbyHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_GameInstanceSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_ConfigSubsystem*         CallFunc_GetConfigSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetAppSetting_Value                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAppSetting_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Add_View_Route_ViewChanged                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_SafeFrameScale                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHViewManager*              CallFunc_GetViewManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveRoute_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHViewManager*              CallFunc_GetViewManager_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ReplaceRoute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_MatchStatus         K2Node_Event_MatchStatus                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHQueueDataFactory*         CallFunc_GetQueueDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInCustomMatch_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHudReadyForBinding_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldDisplayMatchLoading_ShouldDisplay                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERHAPI_Platform         CallFunc_GetLoggedInPlatformId_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_LocalPlayerSubsystem*    CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_LocalPlayerSessionSubsystem*CallFunc_GetSessionSubsystem_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemIdInInventoryMap_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URH_SessionView*>     CallFunc_GetSessionsByType_ReturnValue                           (ReferenceParm)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              K2Node_CustomEvent_Inviter                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BLUEPRINT_GetLastKnownDisplayName_OutDisplayName        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BLUEPRINT_GetLastKnownDisplayName_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBrightLobbyWidget_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHLoginDataFactory*         CallFunc_GetLoginDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERHLoginState           CallFunc_GetCurrentLoginState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddToPlayerScreen_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Set_Safe_Frame_Scale_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::ExecuteUbergraph_BP_BrightLobbyHUD(int32 EntryPoint, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class URH_ConfigSubsystem* CallFunc_GetConfigSubsystem_ReturnValue, const class FString& CallFunc_GetAppSetting_Value, bool CallFunc_GetAppSetting_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Add_View_Route_ViewChanged, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_Event_SafeFrameScale, class URHViewManager* CallFunc_GetViewManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveRoute_ReturnValue, class URHViewManager* CallFunc_GetViewManager_ReturnValue_1, bool CallFunc_ReplaceRoute_ReturnValue, enum class ERH_MatchStatus K2Node_Event_MatchStatus, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsInCustomMatch_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsHudReadyForBinding_ReturnValue, bool CallFunc_ShouldDisplayMatchLoading_ShouldDisplay, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ERHAPI_Platform CallFunc_GetLoggedInPlatformId_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class URH_LocalPlayerSessionSubsystem* CallFunc_GetSessionSubsystem_ReturnValue, bool CallFunc_IsItemIdInInventoryMap_ReturnValue, TArray<class URH_SessionView*>& CallFunc_GetSessionsByType_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class URH_PlayerInfo* K2Node_CustomEvent_Inviter, bool CallFunc_IsValid_ReturnValue_2, const class FString& CallFunc_BLUEPRINT_GetLastKnownDisplayName_OutDisplayName, bool CallFunc_BLUEPRINT_GetLastKnownDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBrightLobbyWidget_C* CallFunc_Create_ReturnValue, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue, enum class ERHLoginState CallFunc_GetCurrentLoginState_ReturnValue, bool CallFunc_AddToPlayerScreen_ReturnValue, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, double CallFunc_Set_Safe_Frame_Scale_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "ExecuteUbergraph_BP_BrightLobbyHUD");

	Params::ABP_BrightLobbyHUD_C_ExecuteUbergraph_BP_BrightLobbyHUD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetConfigSubsystem_ReturnValue = CallFunc_GetConfigSubsystem_ReturnValue;
	Parms.CallFunc_GetAppSetting_Value = CallFunc_GetAppSetting_Value;
	Parms.CallFunc_GetAppSetting_ReturnValue = CallFunc_GetAppSetting_ReturnValue;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_View_Route_ViewChanged = CallFunc_Add_View_Route_ViewChanged;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_SafeFrameScale = K2Node_Event_SafeFrameScale;
	Parms.CallFunc_GetViewManager_ReturnValue = CallFunc_GetViewManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RemoveRoute_ReturnValue = CallFunc_RemoveRoute_ReturnValue;
	Parms.CallFunc_GetViewManager_ReturnValue_1 = CallFunc_GetViewManager_ReturnValue_1;
	Parms.CallFunc_ReplaceRoute_ReturnValue = CallFunc_ReplaceRoute_ReturnValue;
	Parms.K2Node_Event_MatchStatus = K2Node_Event_MatchStatus;
	Parms.CallFunc_GetQueueDataFactory_ReturnValue = CallFunc_GetQueueDataFactory_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsInCustomMatch_ReturnValue = CallFunc_IsInCustomMatch_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsHudReadyForBinding_ReturnValue = CallFunc_IsHudReadyForBinding_ReturnValue;
	Parms.CallFunc_ShouldDisplayMatchLoading_ShouldDisplay = CallFunc_ShouldDisplayMatchLoading_ShouldDisplay;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLoggedInPlatformId_ReturnValue = CallFunc_GetLoggedInPlatformId_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_GetSessionSubsystem_ReturnValue = CallFunc_GetSessionSubsystem_ReturnValue;
	Parms.CallFunc_IsItemIdInInventoryMap_ReturnValue = CallFunc_IsItemIdInInventoryMap_ReturnValue;
	Parms.CallFunc_GetSessionsByType_ReturnValue = CallFunc_GetSessionsByType_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_CustomEvent_Inviter = K2Node_CustomEvent_Inviter;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BLUEPRINT_GetLastKnownDisplayName_OutDisplayName = CallFunc_BLUEPRINT_GetLastKnownDisplayName_OutDisplayName;
	Parms.CallFunc_BLUEPRINT_GetLastKnownDisplayName_ReturnValue = CallFunc_BLUEPRINT_GetLastKnownDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_2 = CallFunc_GetOwningPlayerController_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetLoginDataFactory_ReturnValue = CallFunc_GetLoginDataFactory_ReturnValue;
	Parms.CallFunc_GetCurrentLoginState_ReturnValue = CallFunc_GetCurrentLoginState_ReturnValue;
	Parms.CallFunc_AddToPlayerScreen_ReturnValue = CallFunc_AddToPlayerScreen_ReturnValue;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Set_Safe_Frame_Scale_ImplicitCast = CallFunc_Set_Safe_Frame_Scale_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Loadout Slot Change__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Loadout_Slot_Edit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BrightLobbyHUD_C::Loadout_Slot_Change__DelegateSignature(uint8 Loadout_Slot_Edit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BrightLobbyHUD_C", "Loadout Slot Change__DelegateSignature");

	Params::ABP_BrightLobbyHUD_C_Loadout_Slot_Change__DelegateSignature_Params Parms{};

	Parms.Loadout_Slot_Edit = Loadout_Slot_Edit;

	UObject::ProcessEvent(Func, &Parms);

}

}


