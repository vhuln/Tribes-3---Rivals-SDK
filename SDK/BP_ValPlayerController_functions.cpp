#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValPlayerController.BP_ValPlayerController_C
// (Actor, PlayerController)

class UClass* ABP_ValPlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValPlayerController_C");

	return Clss;
}


// BP_ValPlayerController_C BP_ValPlayerController.Default__BP_ValPlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ValPlayerController_C* ABP_ValPlayerController_C::GetDefaultObj()
{
	static class ABP_ValPlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ValPlayerController_C*>(ABP_ValPlayerController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ValPlayerController.BP_ValPlayerController_C.On Input Method Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValPlayerController_C::On_Input_Method_Changed(enum class ECommonInputType bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "On Input Method Changed");

	Params::ABP_ValPlayerController_C_On_Input_Method_Changed_Params Parms{};

	Parms.bNewInputType = bNewInputType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.DebugUpdatePlayerStatDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValPlayerState*             ValPlayerState                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerState*             K2Node_DynamicCast_AsVal_Player_State                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameStatType           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void ABP_ValPlayerController_C::DebugUpdatePlayerStatDisplay(class AValPlayerState* ValPlayerState, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State, bool K2Node_DynamicCast_bSuccess, enum class EGameStatType CallFunc_Array_Get_Item, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 CallFunc_GetStat_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int32 CallFunc_Array_Length_ReturnValue, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "DebugUpdatePlayerStatDisplay");

	Params::ABP_ValPlayerController_C_DebugUpdatePlayerStatDisplay_Params Parms{};

	Parms.ValPlayerState = ValPlayerState;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Player_State = K2Node_DynamicCast_AsVal_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.NotifyKill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAwardType              Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerState*             VictimState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bTeamWipe                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValPlayerController_C::NotifyKill(enum class EAwardType Type, class AValPlayerState* VictimState, bool bTeamWipe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "NotifyKill");

	Params::ABP_ValPlayerController_C_NotifyKill_Params Parms{};

	Parms.Type = Type;
	Parms.VictimState = VictimState;
	Parms.bTeamWipe = bTeamWipe;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.PlayKillSFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValPlayerState*             NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bTeamWipe                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsABotPlayerState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATeamState*                  CallFunc_GetTeamStateFromObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsVal_Game_Mode_Point_Capture            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMemberCount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValPlayerController_C::PlayKillSFX(class AValPlayerState* NewParam, bool bTeamWipe, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsABotPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ATeamState* CallFunc_GetTeamStateFromObject_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsVal_Game_Mode_Point_Capture, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetMemberCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "PlayKillSFX");

	Params::ABP_ValPlayerController_C_PlayKillSFX_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.bTeamWipe = bTeamWipe;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_IsABotPlayerState_ReturnValue = CallFunc_IsABotPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetTeamStateFromObject_ReturnValue = CallFunc_GetTeamStateFromObject_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsVal_Game_Mode_Point_Capture = K2Node_ClassDynamicCast_AsVal_Game_Mode_Point_Capture;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMemberCount_ReturnValue = CallFunc_GetMemberCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.OnKill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ValPlayerController_C::OnKill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "OnKill");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.OnTagRemoved_EA87D0C1444EF9C7278F7D8FF7767A2F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_ValPlayerController_C::OnTagRemoved_EA87D0C1444EF9C7278F7D8FF7767A2F(const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "OnTagRemoved_EA87D0C1444EF9C7278F7D8FF7767A2F");

	Params::ABP_ValPlayerController_C_OnTagRemoved_EA87D0C1444EF9C7278F7D8FF7767A2F_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.OnTagAdded_EA87D0C1444EF9C7278F7D8FF7767A2F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_ValPlayerController_C::OnTagAdded_EA87D0C1444EF9C7278F7D8FF7767A2F(const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "OnTagAdded_EA87D0C1444EF9C7278F7D8FF7767A2F");

	Params::ABP_ValPlayerController_C_OnTagAdded_EA87D0C1444EF9C7278F7D8FF7767A2F_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.InpActEvt_ContextualInteractReload_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct InputCore_Key               Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ValPlayerController_C::InpActEvt_ContextualInteractReload_K2Node_InputActionEvent_5(const struct InputCore_Key& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "InpActEvt_ContextualInteractReload_K2Node_InputActionEvent_5");

	Params::ABP_ValPlayerController_C_InpActEvt_ContextualInteractReload_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.InpActEvt_ContextualInteractReload_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct InputCore_Key               Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ValPlayerController_C::InpActEvt_ContextualInteractReload_K2Node_InputActionEvent_4(const struct InputCore_Key& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "InpActEvt_ContextualInteractReload_K2Node_InputActionEvent_4");

	Params::ABP_ValPlayerController_C_InpActEvt_ContextualInteractReload_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.InpActEvt_Interact_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct InputCore_Key               Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ValPlayerController_C::InpActEvt_Interact_K2Node_InputActionEvent_3(const struct InputCore_Key& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "InpActEvt_Interact_K2Node_InputActionEvent_3");

	Params::ABP_ValPlayerController_C_InpActEvt_Interact_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.InpActEvt_Reload_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct InputCore_Key               Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ValPlayerController_C::InpActEvt_Reload_K2Node_InputActionEvent_2(const struct InputCore_Key& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "InpActEvt_Reload_K2Node_InputActionEvent_2");

	Params::ABP_ValPlayerController_C_InpActEvt_Reload_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.InpActEvt_ContextualSwapWeapon_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct InputCore_Key               Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ValPlayerController_C::InpActEvt_ContextualSwapWeapon_K2Node_InputActionEvent_1(const struct InputCore_Key& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "InpActEvt_ContextualSwapWeapon_K2Node_InputActionEvent_1");

	Params::ABP_ValPlayerController_C_InpActEvt_ContextualSwapWeapon_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.InpActEvt_ContextualSwapWeapon_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct InputCore_Key               Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ValPlayerController_C::InpActEvt_ContextualSwapWeapon_K2Node_InputActionEvent_0(const struct InputCore_Key& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "InpActEvt_ContextualSwapWeapon_K2Node_InputActionEvent_0");

	Params::ABP_ValPlayerController_C_InpActEvt_ContextualSwapWeapon_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ValPlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.OnSpectateStart
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ValPlayerController_C::OnSpectateStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "OnSpectateStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.OnSpectateEnd
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ValPlayerController_C::OnSpectateEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "OnSpectateEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.ServerTryKeycode
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      KeycodeToTry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AActor*                      ActorWithKeycode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ValPlayerController_C::ServerTryKeycode(TArray<int32>& KeycodeToTry, class AActor* ActorWithKeycode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "ServerTryKeycode");

	Params::ABP_ValPlayerController_C_ServerTryKeycode_Params Parms{};

	Parms.KeycodeToTry = KeycodeToTry;
	Parms.ActorWithKeycode = ActorWithKeycode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.ServerOnChannellingToggled
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsChanneling                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActorWithChannel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_WidgetInteraction_C*     WidgetInteractionActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ValPlayerController_C::ServerOnChannellingToggled(bool IsChanneling, class AActor* ActorWithChannel, class ABP_WidgetInteraction_C* WidgetInteractionActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "ServerOnChannellingToggled");

	Params::ABP_ValPlayerController_C_ServerOnChannellingToggled_Params Parms{};

	Parms.IsChanneling = IsChanneling;
	Parms.ActorWithChannel = ActorWithChannel;
	Parms.WidgetInteractionActor = WidgetInteractionActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.ServerActivateLift
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorWithChannel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ValPlayerController_C::ServerActivateLift(class AActor* ActorWithChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "ServerActivateLift");

	Params::ABP_ValPlayerController_C_ServerActivateLift_Params Parms{};

	Parms.ActorWithChannel = ActorWithChannel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.ServerSummonLift
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorWithChannel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              LiftLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValPlayerController_C::ServerSummonLift(class AActor* ActorWithChannel, int32 LiftLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "ServerSummonLift");

	Params::ABP_ValPlayerController_C_ServerSummonLift_Params Parms{};

	Parms.ActorWithChannel = ActorWithChannel;
	Parms.LiftLevel = LiftLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.ServerTriggeredBotAlarm
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorWithChannel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ValPlayerController_C::ServerTriggeredBotAlarm(class AActor* ActorWithChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "ServerTriggeredBotAlarm");

	Params::ABP_ValPlayerController_C_ServerTriggeredBotAlarm_Params Parms{};

	Parms.ActorWithChannel = ActorWithChannel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.DebugShowPlayerStats
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ValPlayerController_C::DebugShowPlayerStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "DebugShowPlayerStats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.DebugHidePlayerStats
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ValPlayerController_C::DebugHidePlayerStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "DebugHidePlayerStats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.K2_OnBecomeViewTarget
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*           PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ValPlayerController_C::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "K2_OnBecomeViewTarget");

	Params::ABP_ValPlayerController_C_K2_OnBecomeViewTarget_Params Parms{};

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.OnTryInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ValPlayerController_C::OnTryInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "OnTryInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.OnTryReload
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ValPlayerController_C::OnTryReload()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "OnTryReload");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.OnSwapToMelee
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ValPlayerController_C::OnSwapToMelee()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "OnSwapToMelee");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.OnCycleWeapons
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ValPlayerController_C::OnCycleWeapons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "OnCycleWeapons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValPlayerController.BP_ValPlayerController_C.ExecuteUbergraph_BP_ValPlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_CustomEvent_KeycodeToTry                                  (ReferenceParm)
// class AActor*                      K2Node_CustomEvent_ActorWithKeycode                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractWidgetInterface_C>K2Node_DynamicCast_AsInteract_Widget_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_Tag_1                                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsChanneling                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_ActorWithChannel_3                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_WidgetInteraction_C*     K2Node_CustomEvent_WidgetInteractionActor                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_Tag                                           (NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractWidgetInterface_C>K2Node_DynamicCast_AsInteract_Widget_Interface_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractWidgetInterface_C>K2Node_DynamicCast_AsInteract_Widget_Interface_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_ActorWithChannel_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractWidgetInterface_C>K2Node_DynamicCast_AsInteract_Widget_Interface_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_ActorWithChannel_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_LiftLevel                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractWidgetInterface_C>K2Node_DynamicCast_AsInteract_Widget_Interface_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetValCharacter_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            CallFunc_GetActiveSwappedAbility_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAT_GameplayTagAddedRemoved*CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAbilitySwappable*        K2Node_DynamicCast_AsVal_Ability_Swappable                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_ActorWithChannel                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInteractWidgetInterface_C>K2Node_DynamicCast_AsInteract_Widget_Interface_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_Event_PC                                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetValCharacter_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct GameplayAbilities_GameplayAbilitySpecHandle>CallFunc_FindAllAbilitiesWithTags_OutAbilityHandles              (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BatchRPCTryActivateAbility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPrimaryAbilityInstanceActive_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetValCharacter_ReturnValue_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetActiveEquippedAbility_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_FindAbilitySpecHandleForClass_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// bool                               CallFunc_BatchRPCTryActivateAbility_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               Temp_struct_Variable_2                                           (HasGetValueTypeHash)
// struct InputCore_Key               K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetValCharacter_ReturnValue_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               K2Node_InputActionEvent_Key_5                                    (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetActiveEquipSlotTag_ReturnValue                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_GameplayTag_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetValCharacter_ReturnValue_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_MakeLiteralGameplayTag_ReturnValue_1                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetActiveEquipSlotTag_ReturnValue_1                     (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_GameplayTag_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_MakeLiteralGameplayTag_ReturnValue_2                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_Select_Default_1                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    Temp_struct_Variable_3                                           (NoDestructor, HasGetValueTypeHash)

void ABP_ValPlayerController_C::ExecuteUbergraph_BP_ValPlayerController(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<int32>& K2Node_CustomEvent_KeycodeToTry, class AActor* K2Node_CustomEvent_ActorWithKeycode, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_1, bool K2Node_CustomEvent_IsChanneling, class AActor* K2Node_CustomEvent_ActorWithChannel_3, class ABP_WidgetInteraction_C* K2Node_CustomEvent_WidgetInteractionActor, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_DoesImplementInterface_ReturnValue_1, class AActor* K2Node_CustomEvent_ActorWithChannel_2, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_DoesImplementInterface_ReturnValue_2, class AActor* K2Node_CustomEvent_ActorWithChannel_1, int32 K2Node_CustomEvent_LiftLevel, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_DoesImplementInterface_ReturnValue_3, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32 Temp_int_Array_Index_Variable, class AValCharacter* CallFunc_GetValCharacter_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UGameplayAbility* CallFunc_GetActiveSwappedAbility_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, class UValAbilitySwappable* K2Node_DynamicCast_AsVal_Ability_Swappable, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable, const struct GameplayTags_GameplayTag& Temp_struct_Variable, bool Temp_bool_Variable_1, class AActor* K2Node_CustomEvent_ActorWithChannel, TScriptInterface<class IInteractWidgetInterface_C> K2Node_DynamicCast_AsInteract_Widget_Interface_5, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_DoesImplementInterface_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APlayerController* K2Node_Event_PC, class AValCharacter* CallFunc_GetValCharacter_ReturnValue_1, const struct InputCore_Key& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue_3, TArray<struct GameplayAbilities_GameplayAbilitySpecHandle>& CallFunc_FindAllAbilitiesWithTags_OutAbilityHandles, bool CallFunc_IsValid_ReturnValue_4, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_Array_Get_Item, bool CallFunc_BatchRPCTryActivateAbility_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, bool CallFunc_IsPrimaryAbilityInstanceActive_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct InputCore_Key& K2Node_InputActionEvent_Key, class AValCharacter* CallFunc_GetValCharacter_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue, const struct InputCore_Key& K2Node_InputActionEvent_Key_1, bool CallFunc_IsValid_ReturnValue_6, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1, const struct InputCore_Key& K2Node_InputActionEvent_Key_2, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_FindAbilitySpecHandleForClass_ReturnValue, const struct InputCore_Key& K2Node_InputActionEvent_Key_3, bool CallFunc_BatchRPCTryActivateAbility_ReturnValue_1, const struct InputCore_Key& Temp_struct_Variable_2, const struct InputCore_Key& K2Node_InputActionEvent_Key_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue_1, class AValCharacter* CallFunc_GetValCharacter_ReturnValue_3, const struct InputCore_Key& K2Node_InputActionEvent_Key_5, bool CallFunc_IsValid_ReturnValue_7, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_NotEqual_GameplayTag_ReturnValue, class AValCharacter* CallFunc_GetValCharacter_ReturnValue_4, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_8, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue_1, bool CallFunc_NotEqual_GameplayTag_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_9, const struct GameplayTags_GameplayTag& K2Node_Select_Default, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct GameplayTags_GameplayTag& K2Node_Select_Default_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct GameplayTags_GameplayTag& Temp_struct_Variable_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValPlayerController_C", "ExecuteUbergraph_BP_ValPlayerController");

	Params::ABP_ValPlayerController_C_ExecuteUbergraph_BP_ValPlayerController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_KeycodeToTry = K2Node_CustomEvent_KeycodeToTry;
	Parms.K2Node_CustomEvent_ActorWithKeycode = K2Node_CustomEvent_ActorWithKeycode;
	Parms.K2Node_DynamicCast_AsInteract_Widget_Interface = K2Node_DynamicCast_AsInteract_Widget_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.K2Node_CustomEvent_Tag_1 = K2Node_CustomEvent_Tag_1;
	Parms.K2Node_CustomEvent_IsChanneling = K2Node_CustomEvent_IsChanneling;
	Parms.K2Node_CustomEvent_ActorWithChannel_3 = K2Node_CustomEvent_ActorWithChannel_3;
	Parms.K2Node_CustomEvent_WidgetInteractionActor = K2Node_CustomEvent_WidgetInteractionActor;
	Parms.K2Node_CustomEvent_Tag = K2Node_CustomEvent_Tag;
	Parms.K2Node_DynamicCast_AsInteract_Widget_Interface_1 = K2Node_DynamicCast_AsInteract_Widget_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsInteract_Widget_Interface_2 = K2Node_DynamicCast_AsInteract_Widget_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_DoesImplementInterface_ReturnValue_1 = CallFunc_DoesImplementInterface_ReturnValue_1;
	Parms.K2Node_CustomEvent_ActorWithChannel_2 = K2Node_CustomEvent_ActorWithChannel_2;
	Parms.K2Node_DynamicCast_AsInteract_Widget_Interface_3 = K2Node_DynamicCast_AsInteract_Widget_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_DoesImplementInterface_ReturnValue_2 = CallFunc_DoesImplementInterface_ReturnValue_2;
	Parms.K2Node_CustomEvent_ActorWithChannel_1 = K2Node_CustomEvent_ActorWithChannel_1;
	Parms.K2Node_CustomEvent_LiftLevel = K2Node_CustomEvent_LiftLevel;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsInteract_Widget_Interface_4 = K2Node_DynamicCast_AsInteract_Widget_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_DoesImplementInterface_ReturnValue_3 = CallFunc_DoesImplementInterface_ReturnValue_3;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetValCharacter_ReturnValue = CallFunc_GetValCharacter_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetActiveSwappedAbility_ReturnValue = CallFunc_GetActiveSwappedAbility_ReturnValue;
	Parms.CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue = CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Ability_Swappable = K2Node_DynamicCast_AsVal_Ability_Swappable;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CustomEvent_ActorWithChannel = K2Node_CustomEvent_ActorWithChannel;
	Parms.K2Node_DynamicCast_AsInteract_Widget_Interface_5 = K2Node_DynamicCast_AsInteract_Widget_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_DoesImplementInterface_ReturnValue_4 = CallFunc_DoesImplementInterface_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_PC = K2Node_Event_PC;
	Parms.CallFunc_GetValCharacter_ReturnValue_1 = CallFunc_GetValCharacter_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_FindAllAbilitiesWithTags_OutAbilityHandles = CallFunc_FindAllAbilitiesWithTags_OutAbilityHandles;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BatchRPCTryActivateAbility_ReturnValue = CallFunc_BatchRPCTryActivateAbility_ReturnValue;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue = CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue;
	Parms.CallFunc_IsPrimaryAbilityInstanceActive_ReturnValue = CallFunc_IsPrimaryAbilityInstanceActive_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_GetValCharacter_ReturnValue_2 = CallFunc_GetValCharacter_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetActiveEquippedAbility_ReturnValue = CallFunc_GetActiveEquippedAbility_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1 = CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.CallFunc_FindAbilitySpecHandleForClass_ReturnValue = CallFunc_FindAbilitySpecHandleForClass_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.CallFunc_BatchRPCTryActivateAbility_ReturnValue_1 = CallFunc_BatchRPCTryActivateAbility_ReturnValue_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue_1 = CallFunc_K2_IsTimerActiveHandle_ReturnValue_1;
	Parms.CallFunc_GetValCharacter_ReturnValue_3 = CallFunc_GetValCharacter_ReturnValue_3;
	Parms.K2Node_InputActionEvent_Key_5 = K2Node_InputActionEvent_Key_5;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetActiveEquipSlotTag_ReturnValue = CallFunc_GetActiveEquipSlotTag_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_NotEqual_GameplayTag_ReturnValue = CallFunc_NotEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_GetValCharacter_ReturnValue_4 = CallFunc_GetValCharacter_ReturnValue_4;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_1 = CallFunc_MakeLiteralGameplayTag_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetActiveEquipSlotTag_ReturnValue_1 = CallFunc_GetActiveEquipSlotTag_ReturnValue_1;
	Parms.CallFunc_NotEqual_GameplayTag_ReturnValue_1 = CallFunc_NotEqual_GameplayTag_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_2 = CallFunc_MakeLiteralGameplayTag_ReturnValue_2;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


