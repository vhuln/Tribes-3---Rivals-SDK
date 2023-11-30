#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C
// (None)

class UClass* UWBP_LocalPlayerNameplate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LocalPlayerNameplate_C");

	return Clss;
}


// WBP_LocalPlayerNameplate_C WBP_LocalPlayerNameplate.Default__WBP_LocalPlayerNameplate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LocalPlayerNameplate_C* UWBP_LocalPlayerNameplate_C::GetDefaultObj()
{
	static class UWBP_LocalPlayerNameplate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LocalPlayerNameplate_C*>(UWBP_LocalPlayerNameplate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.OnDisplayName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DisplayName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_LocalPlayerNameplate_C::OnDisplayName(bool bSuccess, const class FString& DisplayName, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LocalPlayerNameplate_C", "OnDisplayName");

	Params::UWBP_LocalPlayerNameplate_C_OnDisplayName_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.DisplayName = DisplayName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.Show Party Member Status
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InParty                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LocalPlayerNameplate_C::Show_Party_Member_Status(bool InParty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LocalPlayerNameplate_C", "Show Party Member Status");

	Params::UWBP_LocalPlayerNameplate_C_Show_Party_Member_Status_Params Parms{};

	Parms.InParty = InParty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.SetReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeader                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsReady                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_LocalPlayerNameplate_C::SetReady(bool IsLeader, bool IsReady, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LocalPlayerNameplate_C", "SetReady");

	Params::UWBP_LocalPlayerNameplate_C_SetReady_Params Parms{};

	Parms.IsLeader = IsLeader;
	Parms.IsReady = IsReady;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.SetMemberName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              PlayerInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BLUEPRINT_GetLastKnownDisplayName_OutDisplayName        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BLUEPRINT_GetLastKnownDisplayName_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LocalPlayerNameplate_C::SetMemberName(bool Local, class URH_PlayerInfo* PlayerInfo, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_BLUEPRINT_GetLastKnownDisplayName_OutDisplayName, bool CallFunc_BLUEPRINT_GetLastKnownDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LocalPlayerNameplate_C", "SetMemberName");

	Params::UWBP_LocalPlayerNameplate_C_SetMemberName_Params Parms{};

	Parms.Local = Local;
	Parms.PlayerInfo = PlayerInfo;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BLUEPRINT_GetLastKnownDisplayName_OutDisplayName = CallFunc_BLUEPRINT_GetLastKnownDisplayName_OutDisplayName;
	Parms.CallFunc_BLUEPRINT_GetLastKnownDisplayName_ReturnValue = CallFunc_BLUEPRINT_GetLastKnownDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.Set Party Member Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               InParty                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct RallyHereStart_RH_PartyMemberDataPartyMemberData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        NewLocalVar                                                      (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LocalPlayerNameplate_C::Set_Party_Member_Info(bool Local, bool InParty, const struct RallyHereStart_RH_PartyMemberData& PartyMemberData, class FText NewLocalVar, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LocalPlayerNameplate_C", "Set Party Member Info");

	Params::UWBP_LocalPlayerNameplate_C_Set_Party_Member_Info_Params Parms{};

	Parms.Local = Local;
	Parms.InParty = InParty;
	Parms.PartyMemberData = PartyMemberData;
	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.UpdateLocalPlayerName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_LocalPlayerSubsystem*    CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Timespan        CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              CallFunc_GetLocalPlayerInfo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LocalPlayerNameplate_C::UpdateLocalPlayerName(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct CoreUObject_Timespan& CallFunc_MakeTimespan_ReturnValue, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LocalPlayerNameplate_C", "UpdateLocalPlayerName");

	Params::UWBP_LocalPlayerNameplate_C_UpdateLocalPlayerName_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.CallFunc_GetLocalPlayerInfo_ReturnValue = CallFunc_GetLocalPlayerInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LocalPlayerNameplate_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LocalPlayerNameplate_C", "PreConstruct");

	Params::UWBP_LocalPlayerNameplate_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_LocalPlayerNameplate_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LocalPlayerNameplate_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LocalPlayerNameplate_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LocalPlayerNameplate_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.OnHudBindingReady
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_LocalPlayerNameplate_C::OnHudBindingReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LocalPlayerNameplate_C", "OnHudBindingReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LocalPlayerNameplate.WBP_LocalPlayerNameplate_C.ExecuteUbergraph_WBP_LocalPlayerNameplate
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LocalPlayerNameplate_C::ExecuteUbergraph_WBP_LocalPlayerNameplate(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LocalPlayerNameplate_C", "ExecuteUbergraph_WBP_LocalPlayerNameplate");

	Params::UWBP_LocalPlayerNameplate_C_ExecuteUbergraph_WBP_LocalPlayerNameplate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


