#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_local_player_card.WBP_local_player_card_C
// (None)

class UClass* UWBP_local_player_card_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_local_player_card_C");

	return Clss;
}


// WBP_local_player_card_C WBP_local_player_card.Default__WBP_local_player_card_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_local_player_card_C* UWBP_local_player_card_C::GetDefaultObj()
{
	static class UWBP_local_player_card_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_local_player_card_C*>(UWBP_local_player_card_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_local_player_card.WBP_local_player_card_C.OnPlayerDisplayNameRetrieved
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      DisplayName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_local_player_card_C::OnPlayerDisplayNameRetrieved(bool bSuccess, const class FString& DisplayName, bool Temp_bool_Variable, class FText CallFunc_GetEmptyText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_local_player_card_C", "OnPlayerDisplayNameRetrieved");

	Params::UWBP_local_player_card_C_OnPlayerDisplayNameRetrieved_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.DisplayName = DisplayName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_local_player_card.WBP_local_player_card_C.RequestPlayerDisplayName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Timespan        CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_LocalPlayerSubsystem*    CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URH_PlayerInfo*              CallFunc_GetLocalPlayerInfo_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_local_player_card_C::RequestPlayerDisplayName(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct CoreUObject_Timespan& CallFunc_MakeTimespan_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URH_LocalPlayerSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class URH_PlayerInfo* CallFunc_GetLocalPlayerInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_local_player_card_C", "RequestPlayerDisplayName");

	Params::UWBP_local_player_card_C_RequestPlayerDisplayName_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue = CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerInfo_ReturnValue = CallFunc_GetLocalPlayerInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_local_player_card.WBP_local_player_card_C.On Player Loadouts Updated
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URH_PlayerInfo*              PlayerInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class URH_PlayerLoadout*>   Loadouts                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_local_player_card_C::On_Player_Loadouts_Updated(class URH_PlayerInfo* PlayerInfo, TArray<class URH_PlayerLoadout*>& Loadouts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_local_player_card_C", "On Player Loadouts Updated");

	Params::UWBP_local_player_card_C_On_Player_Loadouts_Updated_Params Parms{};

	Parms.PlayerInfo = PlayerInfo;
	Parms.Loadouts = Loadouts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_local_player_card.WBP_local_player_card_C.HandleViewStateChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CurrentRoute                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NextRoute                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EViewManagerLayer       Layer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValExperienceManager*       CallFunc_GetExperienceManager_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_local_player_card_C::HandleViewStateChanged(class FName CurrentRoute, class FName NextRoute, enum class EViewManagerLayer Layer, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValExperienceManager* CallFunc_GetExperienceManager_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_local_player_card_C", "HandleViewStateChanged");

	Params::UWBP_local_player_card_C_HandleViewStateChanged_Params Parms{};

	Parms.CurrentRoute = CurrentRoute;
	Parms.NextRoute = NextRoute;
	Parms.Layer = Layer;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_GetExperienceManager_ReturnValue = CallFunc_GetExperienceManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_local_player_card.WBP_local_player_card_C.OnXPChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    LevelType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// class UValXpTable*                 CallFunc_GetXpTable_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevelAt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetXpAt_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetXpAt_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_local_player_card_C::OnXPChanged(const struct GameplayTags_GameplayTag& LevelType, int32 Count, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class UValXpTable* CallFunc_GetXpTable_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetLevelAt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetXpAt_ReturnValue, int32 CallFunc_GetXpAt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_local_player_card_C", "OnXPChanged");

	Params::UWBP_local_player_card_C_OnXPChanged_Params Parms{};

	Parms.LevelType = LevelType;
	Parms.Count = Count;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetXpTable_ReturnValue = CallFunc_GetXpTable_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLevelAt_ReturnValue = CallFunc_GetLevelAt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetXpAt_ReturnValue = CallFunc_GetXpAt_ReturnValue;
	Parms.CallFunc_GetXpAt_ReturnValue_1 = CallFunc_GetXpAt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_local_player_card.WBP_local_player_card_C.OnLevelChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    LevelType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_local_player_card_C::OnLevelChanged(const struct GameplayTags_GameplayTag& LevelType, int32 Count, bool CallFunc_MatchesTag_ReturnValue, int32 CallFunc_Max_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_local_player_card_C", "OnLevelChanged");

	Params::UWBP_local_player_card_C_OnLevelChanged_Params Parms{};

	Parms.LevelType = LevelType;
	Parms.Count = Count;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_local_player_card.WBP_local_player_card_C.OnExperienceManager
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValExperienceManager*       ExperienceManager                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerXP_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerLevel_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_local_player_card_C::OnExperienceManager(class AValExperienceManager* ExperienceManager, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_GetPlayerXP_ReturnValue, int32 CallFunc_GetPlayerLevel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_local_player_card_C", "OnExperienceManager");

	Params::UWBP_local_player_card_C_OnExperienceManager_Params Parms{};

	Parms.ExperienceManager = ExperienceManager;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetPlayerXP_ReturnValue = CallFunc_GetPlayerXP_ReturnValue;
	Parms.CallFunc_GetPlayerLevel_ReturnValue = CallFunc_GetPlayerLevel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_local_player_card.WBP_local_player_card_C.OnPlayerAvatarLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct RallyHereStart_RHEquippedLoadoutItemWrapperItemWrapper                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class URHAvatar*                   K2Node_DynamicCast_AsRHAvatar                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_local_player_card_C::OnPlayerAvatarLoaded(const struct RallyHereStart_RHEquippedLoadoutItemWrapper& ItemWrapper, class URHAvatar* K2Node_DynamicCast_AsRHAvatar, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_local_player_card_C", "OnPlayerAvatarLoaded");

	Params::UWBP_local_player_card_C_OnPlayerAvatarLoaded_Params Parms{};

	Parms.ItemWrapper = ItemWrapper;
	Parms.K2Node_DynamicCast_AsRHAvatar = K2Node_DynamicCast_AsRHAvatar;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_local_player_card.WBP_local_player_card_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_local_player_card_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_local_player_card_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_local_player_card.WBP_local_player_card_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_local_player_card_C::UninitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_local_player_card_C", "UninitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_local_player_card.WBP_local_player_card_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_local_player_card_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_local_player_card_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_local_player_card.WBP_local_player_card_C.BndEvt__WBP_local_player_card_HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_local_player_card_C::BndEvt__WBP_local_player_card_HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_local_player_card_C", "BndEvt__WBP_local_player_card_HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_local_player_card.WBP_local_player_card_C.BndEvt__WBP_local_player_card_HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_local_player_card_C::BndEvt__WBP_local_player_card_HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_local_player_card_C", "BndEvt__WBP_local_player_card_HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_local_player_card.WBP_local_player_card_C.BndEvt__WBP_local_player_card_HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_local_player_card_C::BndEvt__WBP_local_player_card_HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_local_player_card_C", "BndEvt__WBP_local_player_card_HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_local_player_card.WBP_local_player_card_C.ExecuteUbergraph_WBP_local_player_card
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddViewRoute_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValExperienceManager*       CallFunc_GetExperienceManager_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URHViewManager*              CallFunc_GetViewManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHLoadoutDataFactory*       CallFunc_GetLoadoutDataFactory_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValExperienceManager*       CallFunc_GetExperienceManager_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_local_player_card_C::ExecuteUbergraph_WBP_local_player_card(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_AddViewRoute_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AValExperienceManager* CallFunc_GetExperienceManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class URHViewManager* CallFunc_GetViewManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class URHLoadoutDataFactory* CallFunc_GetLoadoutDataFactory_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AValPlayerController* CallFunc_GetPlayer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AValExperienceManager* CallFunc_GetExperienceManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_local_player_card_C", "ExecuteUbergraph_WBP_local_player_card");

	Params::UWBP_local_player_card_C_ExecuteUbergraph_WBP_local_player_card_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddViewRoute_ReturnValue = CallFunc_AddViewRoute_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetExperienceManager_ReturnValue = CallFunc_GetExperienceManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetViewManager_ReturnValue = CallFunc_GetViewManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetLoadoutDataFactory_ReturnValue = CallFunc_GetLoadoutDataFactory_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetPlayer_ReturnValue_1 = CallFunc_GetPlayer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetExperienceManager_ReturnValue_1 = CallFunc_GetExperienceManager_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


