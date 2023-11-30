#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HomeScreen_v2.WBP_HomeScreen_v2_C
// (None)

class UClass* UWBP_HomeScreen_v2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HomeScreen_v2_C");

	return Clss;
}


// WBP_HomeScreen_v2_C WBP_HomeScreen_v2.Default__WBP_HomeScreen_v2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HomeScreen_v2_C* UWBP_HomeScreen_v2_C::GetDefaultObj()
{
	static class UWBP_HomeScreen_v2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HomeScreen_v2_C*>(UWBP_HomeScreen_v2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.CREATEDELEGATE_PROXYFUNCTION_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Guid            PartyMemberId                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::CREATEDELEGATE_PROXYFUNCTION_0(struct CoreUObject_Guid& PartyMemberId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::UWBP_HomeScreen_v2_C_CREATEDELEGATE_PROXYFUNCTION_0_Params Parms{};

	Parms.PartyMemberId = PartyMemberId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.On Queue Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeScreen_v2_C::On_Queue_Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "On Queue Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnQueueJoined
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      QueueId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::OnQueueJoined(const class FString& QueueId, class FText CallFunc_Conv_StringToText_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "OnQueueJoined");

	Params::UWBP_HomeScreen_v2_C_OnQueueJoined_Params Parms{};

	Parms.QueueId = QueueId;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnPlayButtonNavInit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeScreen_v2_C::OnPlayButtonNavInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "OnPlayButtonNavInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidgetNavigation
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class URHWidget*>           LocalWidgets                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::InitializeWidgetNavigation(const TArray<class URHWidget*>& LocalWidgets, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "InitializeWidgetNavigation");

	Params::UWBP_HomeScreen_v2_C_InitializeWidgetNavigation_Params Parms{};

	Parms.LocalWidgets = LocalWidgets;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnHide
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::OnHide(class AValPlayerController* CallFunc_GetPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "OnHide");

	Params::UWBP_HomeScreen_v2_C_OnHide_Params Parms{};

	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnShown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::OnShown(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "OnShown");

	Params::UWBP_HomeScreen_v2_C_OnShown_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnMatchmakingCacheRegionsUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_MatchmakingBrowserCache* Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::OnMatchmakingCacheRegionsUpdated(class URH_MatchmakingBrowserCache* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "OnMatchmakingCacheRegionsUpdated");

	Params::UWBP_HomeScreen_v2_C_OnMatchmakingCacheRegionsUpdated_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowFirstTimeVoiceSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_AddViewRoute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHViewManager*              CallFunc_GetViewManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   CallFunc_GetTopViewRouteWidget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URHHomeScreenWidget*         K2Node_DynamicCast_AsRHHome_Screen_Widget                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameUserSettings*        K2Node_DynamicCast_AsVal_Game_User_Settings                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalActionSaved_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::ShowFirstTimeVoiceSettings(bool CallFunc_AddViewRoute_ReturnValue, class URHViewManager* CallFunc_GetViewManager_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URHWidget* CallFunc_GetTopViewRouteWidget_ReturnValue, class URHHomeScreenWidget* K2Node_DynamicCast_AsRHHome_Screen_Widget, bool K2Node_DynamicCast_bSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocalActionSaved_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "ShowFirstTimeVoiceSettings");

	Params::UWBP_HomeScreen_v2_C_ShowFirstTimeVoiceSettings_Params Parms{};

	Parms.CallFunc_AddViewRoute_ReturnValue = CallFunc_AddViewRoute_ReturnValue;
	Parms.CallFunc_GetViewManager_ReturnValue = CallFunc_GetViewManager_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTopViewRouteWidget_ReturnValue = CallFunc_GetTopViewRouteWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHHome_Screen_Widget = K2Node_DynamicCast_AsRHHome_Screen_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_User_Settings = K2Node_DynamicCast_AsVal_Game_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsLocalActionSaved_ReturnValue = CallFunc_IsLocalActionSaved_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.BindPartyEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::BindPartyEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "BindPartyEvents");

	Params::UWBP_HomeScreen_v2_C_BindPartyEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdatePartyNameplates
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LocalInParty                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct RallyHereStart_RH_PartyMemberData>LocalPartyMembers                                                (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct RallyHereStart_RH_PartyMemberData>CallFunc_GetPartyMembers_ReturnValue                             (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_RH_PartyMemberDataCallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Guid            CallFunc_GetRHPlayerUuid_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_RH_PartyMemberDataCallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Guid            CallFunc_GetRHPlayerUuid_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_GuidGuid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::UpdatePartyNameplates(bool LocalInParty, const TArray<struct RallyHereStart_RH_PartyMemberData>& LocalPartyMembers, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, TArray<struct RallyHereStart_RH_PartyMemberData>& CallFunc_GetPartyMembers_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool K2Node_SwitchInteger_CmpSuccess, const struct RallyHereStart_RH_PartyMemberData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct CoreUObject_Guid& CallFunc_GetRHPlayerUuid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct RallyHereStart_RH_PartyMemberData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct CoreUObject_Guid& CallFunc_GetRHPlayerUuid_ReturnValue_1, bool CallFunc_NotEqual_GuidGuid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "UpdatePartyNameplates");

	Params::UWBP_HomeScreen_v2_C_UpdatePartyNameplates_Params Parms{};

	Parms.LocalInParty = LocalInParty;
	Parms.LocalPartyMembers = LocalPartyMembers;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.CallFunc_GetPartyMembers_ReturnValue = CallFunc_GetPartyMembers_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetRHPlayerUuid_ReturnValue = CallFunc_GetRHPlayerUuid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetRHPlayerUuid_ReturnValue_1 = CallFunc_GetRHPlayerUuid_ReturnValue_1;
	Parms.CallFunc_NotEqual_GuidGuid_ReturnValue = CallFunc_NotEqual_GuidGuid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateContextPrompts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::UpdateContextPrompts(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<class FName>& K2Node_MakeArray_Array, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "UpdateContextPrompts");

	Params::UWBP_HomeScreen_v2_C_UpdateContextPrompts_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class ACameraActor*                CallFunc_GetHomeCamera_Camera                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::UpdateCamera(bool CallFunc_IsVisible_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimer_ReturnValue, class ACameraActor* CallFunc_GetHomeCamera_Camera, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "UpdateCamera");

	Params::UWBP_HomeScreen_v2_C_UpdateCamera_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetHomeCamera_Camera = CallFunc_GetHomeCamera_Camera;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeScreen_v2_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_FocusEvent        InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct UMG_EventReply              ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct UMG_EventReply              K2Node_MakeStruct_EventReply                                     (None)

struct UMG_EventReply UWBP_HomeScreen_v2_C::OnFocusReceived(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_FocusEvent& InFocusEvent, const struct UMG_EventReply& K2Node_MakeStruct_EventReply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "OnFocusReceived");

	Params::UWBP_HomeScreen_v2_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.K2Node_MakeStruct_EventReply = K2Node_MakeStruct_EventReply;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleOnLobbyConnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValRHLobbyHUD*              K2Node_DynamicCast_AsVal_RHLobby_HUD                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ValPlayerController_City_C*K2Node_DynamicCast_AsBP_Val_Player_Controller_City               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalLobbyConnected_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::HandleOnLobbyConnected(class AValRHLobbyHUD* K2Node_DynamicCast_AsVal_RHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_ValPlayerController_City_C* K2Node_DynamicCast_AsBP_Val_Player_Controller_City, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocalLobbyConnected_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "HandleOnLobbyConnected");

	Params::UWBP_HomeScreen_v2_C_HandleOnLobbyConnected_Params Parms{};

	Parms.K2Node_DynamicCast_AsVal_RHLobby_HUD = K2Node_DynamicCast_AsVal_RHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Val_Player_Controller_City = K2Node_DynamicCast_AsBP_Val_Player_Controller_City;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsLocalLobbyConnected_ReturnValue = CallFunc_IsLocalLobbyConnected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnPartyMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Guid            PartyMemberId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::OnPartyMemberRemoved(const struct CoreUObject_Guid& PartyMemberId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "OnPartyMemberRemoved");

	Params::UWBP_HomeScreen_v2_C_OnPartyMemberRemoved_Params Parms{};

	Parms.PartyMemberId = PartyMemberId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnViewTargetChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ViewTarget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::OnViewTargetChanged(class AActor* ViewTarget, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "OnViewTargetChanged");

	Params::UWBP_HomeScreen_v2_C_OnViewTargetChanged_Params Parms{};

	Parms.ViewTarget = ViewTarget;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnPartyUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_RH_PartyMemberDataPartyMember                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_HomeScreen_v2_C::OnPartyUpdate(const struct RallyHereStart_RH_PartyMemberData& PartyMember)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "OnPartyUpdate");

	Params::UWBP_HomeScreen_v2_C_OnPartyUpdate_Params Parms{};

	Parms.PartyMember = PartyMember;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnReadyUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsReady                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::OnReadyUp(class UObject* Sender, bool IsReady)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "OnReadyUp");

	Params::UWBP_HomeScreen_v2_C_OnReadyUp_Params Parms{};

	Parms.Sender = Sender;
	Parms.IsReady = IsReady;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_PointerEvent      MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct UMG_EventReply              ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct UMG_EventReply              CallFunc_Handled_ReturnValue                                     (None)

struct UMG_EventReply UWBP_HomeScreen_v2_C::OnMouseButtonDown(const struct SlateCore_Geometry& MyGeometry, struct SlateCore_PointerEvent& MouseEvent, const struct UMG_EventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "OnMouseButtonDown");

	Params::UWBP_HomeScreen_v2_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct SlateCore_Geometry          MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct SlateCore_KeyEvent          InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct UMG_EventReply              ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct InputCore_Key               CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuickPlayQueueState    CallFunc_GetCurrentQuickPlayState_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct UMG_EventReply              CallFunc_Unhandled_ReturnValue                                   (None)

struct UMG_EventReply UWBP_HomeScreen_v2_C::OnKeyUp(const struct SlateCore_Geometry& MyGeometry, const struct SlateCore_KeyEvent& InKeyEvent, const struct InputCore_Key& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, enum class EQuickPlayQueueState CallFunc_GetCurrentQuickPlayState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct UMG_EventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "OnKeyUp");

	Params::UWBP_HomeScreen_v2_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_GetCurrentQuickPlayState_ReturnValue = CallFunc_GetCurrentQuickPlayState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.EnableRemoteLobbyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeScreen_v2_C::EnableRemoteLobbyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "EnableRemoteLobbyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.StopConflictingAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AnimName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_TickAnimationParamsCallFunc_GetTickAnimationInfo_OutAnimParams                      (ContainsInstancedReference)
// bool                               CallFunc_GetTickAnimationInfo_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::StopConflictingAnimation(class FName AnimName, const struct RallyHereStart_TickAnimationParams& CallFunc_GetTickAnimationInfo_OutAnimParams, bool CallFunc_GetTickAnimationInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "StopConflictingAnimation");

	Params::UWBP_HomeScreen_v2_C_StopConflictingAnimation_Params Parms{};

	Parms.AnimName = AnimName;
	Parms.CallFunc_GetTickAnimationInfo_OutAnimParams = CallFunc_GetTickAnimationInfo_OutAnimParams;
	Parms.CallFunc_GetTickAnimationInfo_ReturnValue = CallFunc_GetTickAnimationInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeContentWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   K2Node_DynamicCast_AsRHWidget                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::InitializeContentWidgets(int32 Temp_int_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class URHWidget* K2Node_DynamicCast_AsRHWidget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "InitializeContentWidgets");

	Params::UWBP_HomeScreen_v2_C_InitializeContentWidgets_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsRHWidget = K2Node_DynamicCast_AsRHWidget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ShowEndOfMatch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameInstance*            K2Node_DynamicCast_AsVal_Game_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::ShowEndOfMatch(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValGameInstance* K2Node_DynamicCast_AsVal_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "ShowEndOfMatch");

	Params::UWBP_HomeScreen_v2_C_ShowEndOfMatch_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_Instance = K2Node_DynamicCast_AsVal_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.GetHomeCamera
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACameraActor*                Camera                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACameraActor*>        CallFunc_GetAllActorsOfClassWithTag_OutActors                    (ReferenceParm)
// class ACameraActor*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::GetHomeCamera(class ACameraActor** Camera, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ACameraActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "GetHomeCamera");

	Params::UWBP_HomeScreen_v2_C_GetHomeCamera_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClassWithTag_OutActors = CallFunc_GetAllActorsOfClassWithTag_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Camera != nullptr)
		*Camera = Parms.Camera;

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.CanFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bAllowFous                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHPopupManager*             CallFunc_GetPopupManager_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::CanFocus(bool* bAllowFous, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess, class URHPopupManager* CallFunc_GetPopupManager_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "CanFocus");

	Params::UWBP_HomeScreen_v2_C_CanFocus_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPopupManager_ReturnValue = CallFunc_GetPopupManager_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bAllowFous != nullptr)
		*bAllowFous = Parms.bAllowFous;

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NavigateBack
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddViewRoute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentFocusGroup_OutFocusGroup                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentFocusGroup_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_HomeScreen_v2_C::NavigateBack(bool CallFunc_AddViewRoute_ReturnValue, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_GetCurrentFocusGroup_OutFocusGroup, bool CallFunc_GetCurrentFocusGroup_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "NavigateBack");

	Params::UWBP_HomeScreen_v2_C_NavigateBack_Params Parms{};

	Parms.CallFunc_AddViewRoute_ReturnValue = CallFunc_AddViewRoute_ReturnValue;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCurrentFocusGroup_OutFocusGroup = CallFunc_GetCurrentFocusGroup_OutFocusGroup;
	Parms.CallFunc_GetCurrentFocusGroup_ReturnValue = CallFunc_GetCurrentFocusGroup_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleQueueStatusChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_MatchStatus         NewStatus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::HandleQueueStatusChange(enum class ERH_MatchStatus NewStatus, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "HandleQueueStatusChange");

	Params::UWBP_HomeScreen_v2_C_HandleQueueStatusChange_Params Parms{};

	Parms.NewStatus = NewStatus;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UnbindLobbyAnimationHandling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHQueueDataFactory*         CallFunc_GetQueueDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::UnbindLobbyAnimationHandling(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "UnbindLobbyAnimationHandling");

	Params::UWBP_HomeScreen_v2_C_UnbindLobbyAnimationHandling_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQueueDataFactory_ReturnValue = CallFunc_GetQueueDataFactory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.BindLobbyAnimationHandling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHQueueDataFactory*         CallFunc_GetQueueDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::BindLobbyAnimationHandling(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess, class URHQueueDataFactory* CallFunc_GetQueueDataFactory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "BindLobbyAnimationHandling");

	Params::UWBP_HomeScreen_v2_C_BindLobbyAnimationHandling_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQueueDataFactory_ReturnValue = CallFunc_GetQueueDataFactory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleContextMenuShown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     FocusWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::HandleContextMenuShown(class UWidget* FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "HandleContextMenuShown");

	Params::UWBP_HomeScreen_v2_C_HandleContextMenuShown_Params Parms{};

	Parms.FocusWidget = FocusWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateRightFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              FocusGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::FocusGroupNavigateRightFailure(int32 FocusGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "FocusGroupNavigateRightFailure");

	Params::UWBP_HomeScreen_v2_C_FocusGroupNavigateRightFailure_Params Parms{};

	Parms.FocusGroup = FocusGroup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateLeftFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              FocusGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::FocusGroupNavigateLeftFailure(int32 FocusGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "FocusGroupNavigateLeftFailure");

	Params::UWBP_HomeScreen_v2_C_FocusGroupNavigateLeftFailure_Params Parms{};

	Parms.FocusGroup = FocusGroup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.NewsPanelVisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::NewsPanelVisibilityChanged(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "NewsPanelVisibilityChanged");

	Params::UWBP_HomeScreen_v2_C_NewsPanelVisibilityChanged_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleViewSocial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeScreen_v2_C::HandleViewSocial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "HandleViewSocial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateDownFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              FocusGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::FocusGroupNavigateDownFailure(int32 FocusGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "FocusGroupNavigateDownFailure");

	Params::UWBP_HomeScreen_v2_C_FocusGroupNavigateDownFailure_Params Parms{};

	Parms.FocusGroup = FocusGroup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Update Region
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeScreen_v2_C::Update_Region()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "Update Region");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.FocusGroupNavigateUpFailure
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              FocusGroup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::FocusGroupNavigateUpFailure(int32 FocusGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "FocusGroupNavigateUpFailure");

	Params::UWBP_HomeScreen_v2_C_FocusGroupNavigateUpFailure_Params Parms{};

	Parms.FocusGroup = FocusGroup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.LoginState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERHLoginState           LoginState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::LoginState(enum class ERHLoginState LoginState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "LoginState");

	Params::UWBP_HomeScreen_v2_C_LoginState_Params Parms{};

	Parms.LoginState = LoginState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Hidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeScreen_v2_C::Handle_Context_Menu_Hidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "Handle Context Menu Hidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Player Card Back Button
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeScreen_v2_C::Handle_Player_Card_Back_Button()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "Handle Player Card Back Button");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnSetQueueInputState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERH_INPUT_STATE         InputState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::OnSetQueueInputState(enum class ERH_INPUT_STATE InputState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "OnSetQueueInputState");

	Params::UWBP_HomeScreen_v2_C_OnSetQueueInputState_Params Parms{};

	Parms.InputState = InputState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UpdateCrossplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeScreen_v2_C::UpdateCrossplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "UpdateCrossplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Context Menu Navigation
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             NavWidgets                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UWidget*                     Default_Widget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::Handle_Context_Menu_Navigation(TArray<class UWidget*>& NavWidgets, class UWidget* Default_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "Handle Context Menu Navigation");

	Params::UWBP_HomeScreen_v2_C_Handle_Context_Menu_Navigation_Params Parms{};

	Parms.NavWidgets = NavWidgets;
	Parms.Default_Widget = Default_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.Handle Party Player Card Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C*   Selected_Player_Card                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::Handle_Party_Player_Card_Selected(class UWBP_player_card_module_C* Selected_Player_Card)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "Handle Party Player Card Selected");

	Params::UWBP_HomeScreen_v2_C_Handle_Party_Player_Card_Selected_Params Parms{};

	Parms.Selected_Player_Card = Selected_Player_Card;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.OnPartyLeaveVisibilityChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::OnPartyLeaveVisibilityChange(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "OnPartyLeaveVisibilityChange");

	Params::UWBP_HomeScreen_v2_C_OnPartyLeaveVisibilityChange_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeScreen_v2_C::UninitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "UninitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleOnPartyMemberLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_RH_PartyMemberDataPartyMember                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_HomeScreen_v2_C::HandleOnPartyMemberLeft(const struct RallyHereStart_RH_PartyMemberData& PartyMember)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "HandleOnPartyMemberLeft");

	Params::UWBP_HomeScreen_v2_C_HandleOnPartyMemberLeft_Params Parms{};

	Parms.PartyMember = PartyMember;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeScreen_v2_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.BndEvt__WBP_HomeScreen_v2_RemoteLobbyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_HomeScreen_v2_C::BndEvt__WBP_HomeScreen_v2_RemoteLobbyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "BndEvt__WBP_HomeScreen_v2_RemoteLobbyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.BndEvt__WBP_HomeScreen_v2_WBP_QueueSelection_RegionSelectButton_K2Node_ComponentBoundEvent_1_RegionSelectRequested__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_HomeScreen_v2_C::BndEvt__WBP_HomeScreen_v2_WBP_QueueSelection_RegionSelectButton_K2Node_ComponentBoundEvent_1_RegionSelectRequested__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "BndEvt__WBP_HomeScreen_v2_WBP_QueueSelection_RegionSelectButton_K2Node_ComponentBoundEvent_1_RegionSelectRequested__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleOpenRegionSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeScreen_v2_C::HandleOpenRegionSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "HandleOpenRegionSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.HandleLobbyMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HomeScreen_v2_C::HandleLobbyMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "HandleLobbyMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HomeScreen_v2.WBP_HomeScreen_v2_C.ExecuteUbergraph_WBP_HomeScreen_v2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddViewRoute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_GameInstanceSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingBrowserCache* CallFunc_GetMatchmakingCache_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_GameInstanceSubsystem*   CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_MatchmakingBrowserCache* CallFunc_GetMatchmakingCache_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct RallyHereAPI_RHAPI_SiteSettings>CallFunc_GetAllRegions_ReturnValue                               (ConstParm, ReferenceParm)
// class UWidget*                     K2Node_CustomEvent_FocusWidget                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FocusGroup_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FocusGroup_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatform_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsVisible                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class ERHLoginState>   K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FocusGroup_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHLoginDataFactory*         CallFunc_GetLoginDataFactory_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERHLoginState           CallFunc_GetCurrentLoginState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_FocusGroup                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERHLoginState           K2Node_CustomEvent_LoginState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// enum class ERH_INPUT_STATE         Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         K2Node_CustomEvent_InputState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_IsCrossplayEnabled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_4                                             (None)
// TArray<class UWidget*>             K2Node_CustomEvent_NavWidgets                                    (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     K2Node_CustomEvent_Default_Widget                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlatform_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_player_card_module_C*   K2Node_CustomEvent_Selected_Player_Card                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Visible                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetCurrentFocusForGroup_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentFocusGroup_OutFocusGroup                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentFocusGroup_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_5                                             (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URHWidget*>           CallFunc_Get_Navigation_Widgets_Return_Value                     (ReferenceParm, ContainsInstancedReference)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHWidget*                   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_3                                          (None)
// class UWBP_Social_Snapshot_C*      CallFunc_GetPrimaryFocus_Primary_Focus                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHLoginDataFactory*         CallFunc_GetLoginDataFactory_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ARHLobbyHUD*                 K2Node_DynamicCast_AsRHLobby_HUD_2                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHPartyManager*             CallFunc_GetPartyManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsContextMenuOpen_IsOpen                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_RH_PartyMemberDataK2Node_CustomEvent_PartyMember                                   (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ValPlayerController_City_C*K2Node_DynamicCast_AsBP_Val_Player_Controller_City               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddViewRoute_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddViewRoute_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HomeScreen_v2_C::ExecuteUbergraph_WBP_HomeScreen_v2(int32 EntryPoint, bool CallFunc_AddViewRoute_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class URH_MatchmakingBrowserCache* CallFunc_GetMatchmakingCache_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, class URH_GameInstanceSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class URH_MatchmakingBrowserCache* CallFunc_GetMatchmakingCache_ReturnValue_1, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue_1, TArray<struct RallyHereAPI_RHAPI_SiteSettings>& CallFunc_GetAllRegions_ReturnValue, class UWidget* K2Node_CustomEvent_FocusWidget, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Event_FocusGroup_3, int32 K2Node_Event_FocusGroup_2, bool CallFunc_IsPlatform_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_CustomEvent_IsVisible, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<enum class ERHLoginState>& K2Node_MakeArray_Array, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess, int32 K2Node_Event_FocusGroup_1, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue, enum class ERHLoginState CallFunc_GetCurrentLoginState_ReturnValue, int32 K2Node_Event_FocusGroup, bool CallFunc_Array_Contains_ReturnValue, enum class ERHLoginState K2Node_CustomEvent_LoginState, bool K2Node_SwitchEnum_CmpSuccess, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, enum class ERH_INPUT_STATE Temp_byte_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class ERH_INPUT_STATE K2Node_CustomEvent_InputState, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_Select_Default_1, bool CallFunc_IsCrossplayEnabled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FText Temp_text_Variable_4, TArray<class UWidget*>& K2Node_CustomEvent_NavWidgets, class UWidget* K2Node_CustomEvent_Default_Widget, bool CallFunc_IsPlatform_ReturnValue_1, class UWBP_player_card_module_C* K2Node_CustomEvent_Selected_Player_Card, enum class ESlateVisibility K2Node_Select_Default_2, bool K2Node_CustomEvent_Visible, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UWidget* CallFunc_GetCurrentFocusForGroup_ReturnValue, int32 CallFunc_GetCurrentFocusGroup_OutFocusGroup, bool CallFunc_GetCurrentFocusGroup_ReturnValue, class FText Temp_text_Variable_5, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class URHWidget*>& CallFunc_Get_Navigation_Widgets_Return_Value, bool Temp_bool_Variable_2, class URHWidget* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FText K2Node_Select_Default_3, class UWBP_Social_Snapshot_C* CallFunc_GetPrimaryFocus_Primary_Focus, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD_1, bool K2Node_DynamicCast_bSuccess_2, enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, class URHLoginDataFactory* CallFunc_GetLoginDataFactory_ReturnValue_1, class ARHLobbyHUD* K2Node_DynamicCast_AsRHLobby_HUD_2, bool K2Node_DynamicCast_bSuccess_3, class URHPartyManager* CallFunc_GetPartyManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsContextMenuOpen_IsOpen, const struct RallyHereStart_RH_PartyMemberData& K2Node_CustomEvent_PartyMember, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class ABP_ValPlayerController_City_C* K2Node_DynamicCast_AsBP_Val_Player_Controller_City, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_AddViewRoute_ReturnValue_1, bool CallFunc_AddViewRoute_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool Temp_bool_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, enum class ESlateVisibility K2Node_Select_Default_4, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_1, bool K2Node_DynamicCast_bSuccess_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HomeScreen_v2_C", "ExecuteUbergraph_WBP_HomeScreen_v2");

	Params::UWBP_HomeScreen_v2_C_ExecuteUbergraph_WBP_HomeScreen_v2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_AddViewRoute_ReturnValue = CallFunc_AddViewRoute_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetMatchmakingCache_ReturnValue = CallFunc_GetMatchmakingCache_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetMatchmakingCache_ReturnValue_1 = CallFunc_GetMatchmakingCache_ReturnValue_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAllRegions_ReturnValue = CallFunc_GetAllRegions_ReturnValue;
	Parms.K2Node_CustomEvent_FocusWidget = K2Node_CustomEvent_FocusWidget;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Event_FocusGroup_3 = K2Node_Event_FocusGroup_3;
	Parms.K2Node_Event_FocusGroup_2 = K2Node_Event_FocusGroup_2;
	Parms.CallFunc_IsPlatform_ReturnValue = CallFunc_IsPlatform_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_IsVisible = K2Node_CustomEvent_IsVisible;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_FocusGroup_1 = K2Node_Event_FocusGroup_1;
	Parms.CallFunc_GetLoginDataFactory_ReturnValue = CallFunc_GetLoginDataFactory_ReturnValue;
	Parms.CallFunc_GetCurrentLoginState_ReturnValue = CallFunc_GetCurrentLoginState_ReturnValue;
	Parms.K2Node_Event_FocusGroup = K2Node_Event_FocusGroup;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_CustomEvent_LoginState = K2Node_CustomEvent_LoginState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_InputState = K2Node_CustomEvent_InputState;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD = K2Node_DynamicCast_AsRHLobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsCrossplayEnabled_ReturnValue = CallFunc_IsCrossplayEnabled_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.K2Node_CustomEvent_NavWidgets = K2Node_CustomEvent_NavWidgets;
	Parms.K2Node_CustomEvent_Default_Widget = K2Node_CustomEvent_Default_Widget;
	Parms.CallFunc_IsPlatform_ReturnValue_1 = CallFunc_IsPlatform_ReturnValue_1;
	Parms.K2Node_CustomEvent_Selected_Player_Card = K2Node_CustomEvent_Selected_Player_Card;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_CustomEvent_Visible = K2Node_CustomEvent_Visible;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetCurrentFocusForGroup_ReturnValue = CallFunc_GetCurrentFocusForGroup_ReturnValue;
	Parms.CallFunc_GetCurrentFocusGroup_OutFocusGroup = CallFunc_GetCurrentFocusGroup_OutFocusGroup;
	Parms.CallFunc_GetCurrentFocusGroup_ReturnValue = CallFunc_GetCurrentFocusGroup_ReturnValue;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Get_Navigation_Widgets_Return_Value = CallFunc_Get_Navigation_Widgets_Return_Value;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetPrimaryFocus_Primary_Focus = CallFunc_GetPrimaryFocus_Primary_Focus;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD_1 = K2Node_DynamicCast_AsRHLobby_HUD_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.CallFunc_GetLoginDataFactory_ReturnValue_1 = CallFunc_GetLoginDataFactory_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsRHLobby_HUD_2 = K2Node_DynamicCast_AsRHLobby_HUD_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetPartyManager_ReturnValue = CallFunc_GetPartyManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_IsContextMenuOpen_IsOpen = CallFunc_IsContextMenuOpen_IsOpen;
	Parms.K2Node_CustomEvent_PartyMember = K2Node_CustomEvent_PartyMember;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_DynamicCast_AsBP_Val_Player_Controller_City = K2Node_DynamicCast_AsBP_Val_Player_Controller_City;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_AddViewRoute_ReturnValue_1 = CallFunc_AddViewRoute_ReturnValue_1;
	Parms.CallFunc_AddViewRoute_ReturnValue_2 = CallFunc_AddViewRoute_ReturnValue_2;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_1 = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


