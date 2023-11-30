#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Gun_Aiming.GA_Gun_Aiming_C
// (None)

class UClass* UGA_Gun_Aiming_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Gun_Aiming_C");

	return Clss;
}


// GA_Gun_Aiming_C GA_Gun_Aiming.Default__GA_Gun_Aiming_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Gun_Aiming_C* UGA_Gun_Aiming_C::GetDefaultObj()
{
	static class UGA_Gun_Aiming_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Gun_Aiming_C*>(UGA_Gun_Aiming_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Gun_Aiming.GA_Gun_Aiming_C.OnZoomLevelChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAbilityActive_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Aiming_C::OnZoomLevelChanged(bool CallFunc_IsAbilityActive_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Aiming_C", "OnZoomLevelChanged");

	Params::UGA_Gun_Aiming_C_OnZoomLevelChanged_Params Parms{};

	Parms.CallFunc_IsAbilityActive_ReturnValue = CallFunc_IsAbilityActive_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Aiming.GA_Gun_Aiming_C.On Third Person
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Aiming_C::On_Third_Person(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Aiming_C", "On Third Person");

	Params::UGA_Gun_Aiming_C_On_Third_Person_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Aiming.GA_Gun_Aiming_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct GameplayAbilities_GameplayAbilityActorInfoActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct GameplayAbilities_GameplayAbilitySpecHandleHandle                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerRelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetThirdPersonCameraAlpha_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Gun_Aiming_C::K2_CanActivateAbility(const struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayTags_GameplayTagContainer* RelevantTags, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Aiming_C", "K2_CanActivateAbility");

	Params::UGA_Gun_Aiming_C_K2_CanActivateAbility_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Handle = Handle;
	Parms.CallFunc_GetThirdPersonCameraAlpha_ReturnValue = CallFunc_GetThirdPersonCameraAlpha_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;

}


// Function GA_Gun_Aiming.GA_Gun_Aiming_C.OnSettingsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameUserSettings*        K2Node_DynamicCast_AsVal_Game_User_Settings                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAimingMode_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Aiming_C::OnSettingsChanged(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetAimingMode_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Aiming_C", "OnSettingsChanged");

	Params::UGA_Gun_Aiming_C_OnSettingsChanged_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_User_Settings = K2Node_DynamicCast_AsVal_Game_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAimingMode_ReturnValue = CallFunc_GetAimingMode_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Aiming.GA_Gun_Aiming_C.BeginPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameUserSettings*        K2Node_DynamicCast_AsVal_Game_User_Settings                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Aiming_C::BeginPlay(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Aiming_C", "BeginPlay");

	Params::UGA_Gun_Aiming_C_BeginPlay_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_User_Settings = K2Node_DynamicCast_AsVal_Game_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Aiming.GA_Gun_Aiming_C.OnRelease_DDC8BF3A4B418242E6D80BA27A65F47D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeHeld                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Aiming_C::OnRelease_DDC8BF3A4B418242E6D80BA27A65F47D(float TimeHeld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Aiming_C", "OnRelease_DDC8BF3A4B418242E6D80BA27A65F47D");

	Params::UGA_Gun_Aiming_C_OnRelease_DDC8BF3A4B418242E6D80BA27A65F47D_Params Parms{};

	Parms.TimeHeld = TimeHeld;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Aiming.GA_Gun_Aiming_C.OnPress_1E6194474DB2BFC9CF5380B25C7550D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeWaited                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Aiming_C::OnPress_1E6194474DB2BFC9CF5380B25C7550D3(float TimeWaited)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Aiming_C", "OnPress_1E6194474DB2BFC9CF5380B25C7550D3");

	Params::UGA_Gun_Aiming_C_OnPress_1E6194474DB2BFC9CF5380B25C7550D3_Params Parms{};

	Parms.TimeWaited = TimeWaited;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Aiming.GA_Gun_Aiming_C.EventReceived_C08CC872411B8BA8F741ABA2DC3121AB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayAbilities_GameplayEventDataPayload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Gun_Aiming_C::EventReceived_C08CC872411B8BA8F741ABA2DC3121AB(const struct GameplayAbilities_GameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Aiming_C", "EventReceived_C08CC872411B8BA8F741ABA2DC3121AB");

	Params::UGA_Gun_Aiming_C_EventReceived_C08CC872411B8BA8F741ABA2DC3121AB_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Aiming.GA_Gun_Aiming_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Gun_Aiming_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Aiming_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Gun_Aiming.GA_Gun_Aiming_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasRetriggered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Aiming_C::K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Aiming_C", "K2_OnEndAbility");

	Params::UGA_Gun_Aiming_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;
	Parms.bWasRetriggered = bWasRetriggered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Aiming.GA_Gun_Aiming_C.OnDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeToRespawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Aiming_C::OnDied(float TimeToRespawn, class AValCharacter* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Aiming_C", "OnDied");

	Params::UGA_Gun_Aiming_C_OnDied_Params Parms{};

	Parms.TimeToRespawn = TimeToRespawn;
	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Aiming.GA_Gun_Aiming_C.ExecuteUbergraph_GA_Gun_Aiming
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeHeld                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEventDataK2Node_CustomEvent_Payload                                       (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEventDataTemp_struct_Variable                                             (None)
// class UAbilityTask_WaitGameplayEvent*CallFunc_WaitGameplayEvent_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasRetriggered                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ValChar_Master_C*        K2Node_DynamicCast_AsBP_Val_Char_Master                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeToRespawn                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_CustomEvent_Pawn                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetValPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerControlled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectContextHandleCallFunc_MakeEffectContext_ReturnValue                           (None)
// int32                              CallFunc_GetAbilityLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_ReturnValue  (NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectContextHandleCallFunc_MakeEffectContext_ReturnValue_1                         (None)
// int32                              CallFunc_GetAbilityLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_ReturnValue_1(NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitInputPress* CallFunc_WaitInputPress_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeWaited                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitInputRelease*CallFunc_WaitInputRelease_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_Level_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_Level_ImplicitCast_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Aiming_C::ExecuteUbergraph_GA_Gun_Aiming(int32 EntryPoint, float K2Node_CustomEvent_TimeHeld, const struct GameplayAbilities_GameplayEventData& K2Node_CustomEvent_Payload, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct GameplayAbilities_GameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_CommitAbility_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, float K2Node_CustomEvent_TimeToRespawn, class AValCharacter* K2Node_CustomEvent_Pawn, class AValPlayerController* CallFunc_GetValPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsPlayerControlled_ReturnValue, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, int32 CallFunc_GetAbilityLevel_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_ReturnValue, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue_1, int32 CallFunc_GetAbilityLevel_ReturnValue_1, double CallFunc_Conv_IntToDouble_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_ReturnValue_1, class UAbilityTask_WaitInputPress* CallFunc_WaitInputPress_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, float Temp_real_Variable, float K2Node_CustomEvent_TimeWaited, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UAbilityTask_WaitInputRelease* CallFunc_WaitInputRelease_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, float Temp_real_Variable_1, float CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_Level_ImplicitCast, float CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_Level_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Aiming_C", "ExecuteUbergraph_GA_Gun_Aiming");

	Params::UGA_Gun_Aiming_C_ExecuteUbergraph_GA_Gun_Aiming_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TimeHeld = K2Node_CustomEvent_TimeHeld;
	Parms.K2Node_CustomEvent_Payload = K2Node_CustomEvent_Payload;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_WaitGameplayEvent_ReturnValue = CallFunc_WaitGameplayEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_bWasRetriggered = K2Node_Event_bWasRetriggered;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Val_Char_Master = K2Node_DynamicCast_AsBP_Val_Char_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_TimeToRespawn = K2Node_CustomEvent_TimeToRespawn;
	Parms.K2Node_CustomEvent_Pawn = K2Node_CustomEvent_Pawn;
	Parms.CallFunc_GetValPlayerController_ReturnValue = CallFunc_GetValPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsPlayerControlled_ReturnValue = CallFunc_IsPlayerControlled_ReturnValue;
	Parms.CallFunc_MakeEffectContext_ReturnValue = CallFunc_MakeEffectContext_ReturnValue;
	Parms.CallFunc_GetAbilityLevel_ReturnValue = CallFunc_GetAbilityLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_ReturnValue;
	Parms.CallFunc_MakeEffectContext_ReturnValue_1 = CallFunc_MakeEffectContext_ReturnValue_1;
	Parms.CallFunc_GetAbilityLevel_ReturnValue_1 = CallFunc_GetAbilityLevel_ReturnValue_1;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_ReturnValue_1;
	Parms.CallFunc_WaitInputPress_ReturnValue = CallFunc_WaitInputPress_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.K2Node_CustomEvent_TimeWaited = K2Node_CustomEvent_TimeWaited;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_WaitInputRelease_ReturnValue = CallFunc_WaitInputRelease_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_Level_ImplicitCast = CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_Level_ImplicitCast;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_Level_ImplicitCast_1 = CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_Level_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


