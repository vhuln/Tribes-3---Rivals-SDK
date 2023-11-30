#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_DetonateCrossbow_Bolt.GA_DetonateCrossbow_Bolt_C
// (None)

class UClass* UGA_DetonateCrossbow_Bolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_DetonateCrossbow_Bolt_C");

	return Clss;
}


// GA_DetonateCrossbow_Bolt_C GA_DetonateCrossbow_Bolt.Default__GA_DetonateCrossbow_Bolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_DetonateCrossbow_Bolt_C* UGA_DetonateCrossbow_Bolt_C::GetDefaultObj()
{
	static class UGA_DetonateCrossbow_Bolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_DetonateCrossbow_Bolt_C*>(UGA_DetonateCrossbow_Bolt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_DetonateCrossbow_Bolt.GA_DetonateCrossbow_Bolt_C.GA_DetonateCrossbow_Bolt_AutoGenFunc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayAbilities_ActiveGameplayEffectEffect                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bMatches                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DetonateCrossbow_Bolt_C::GA_DetonateCrossbow_Bolt_AutoGenFunc(const struct GameplayAbilities_ActiveGameplayEffect& Effect, bool* bMatches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DetonateCrossbow_Bolt_C", "GA_DetonateCrossbow_Bolt_AutoGenFunc");

	Params::UGA_DetonateCrossbow_Bolt_C_GA_DetonateCrossbow_Bolt_AutoGenFunc_Params Parms{};

	Parms.Effect = Effect;

	UObject::ProcessEvent(Func, &Parms);

	if (bMatches != nullptr)
		*bMatches = Parms.bMatches;

}


// Function GA_DetonateCrossbow_Bolt.GA_DetonateCrossbow_Bolt_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct GameplayAbilities_GameplayAbilityActorInfoActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct GameplayAbilities_GameplayAbilitySpecHandleHandle                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerRelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetActiveEquippedAbility_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGameplayAbilityFromSpecHandle_bIsInstance            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            CallFunc_GetGameplayAbilityFromSpecHandle_ReturnValue            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_K2_GetTagCount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_Gun_Master_C*            K2Node_DynamicCast_AsGA_Gun_Master                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromClass_ReturnValue          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_Jetpack_C*               K2Node_DynamicCast_AsGA_Jetpack                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityActive_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_DetonateCrossbow_Bolt_C::K2_CanActivateAbility(const struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayTags_GameplayTagContainer* RelevantTags, bool CallFunc_IsValid_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue, bool CallFunc_GetGameplayAbilityFromSpecHandle_bIsInstance, class UGameplayAbility* CallFunc_GetGameplayAbilityFromSpecHandle_ReturnValue, int32 CallFunc_K2_GetTagCount_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UGA_Jetpack_C* K2Node_DynamicCast_AsGA_Jetpack, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAbilityActive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DetonateCrossbow_Bolt_C", "K2_CanActivateAbility");

	Params::UGA_DetonateCrossbow_Bolt_C_K2_CanActivateAbility_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Handle = Handle;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActiveEquippedAbility_ReturnValue = CallFunc_GetActiveEquippedAbility_ReturnValue;
	Parms.CallFunc_GetGameplayAbilityFromSpecHandle_bIsInstance = CallFunc_GetGameplayAbilityFromSpecHandle_bIsInstance;
	Parms.CallFunc_GetGameplayAbilityFromSpecHandle_ReturnValue = CallFunc_GetGameplayAbilityFromSpecHandle_ReturnValue;
	Parms.CallFunc_K2_GetTagCount_ReturnValue = CallFunc_K2_GetTagCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsGA_Gun_Master = K2Node_DynamicCast_AsGA_Gun_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromClass_ReturnValue = CallFunc_GetPrimaryAbilityInstanceFromClass_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsGA_Jetpack = K2Node_DynamicCast_AsGA_Jetpack;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsAbilityActive_ReturnValue = CallFunc_IsAbilityActive_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;

}


// Function GA_DetonateCrossbow_Bolt.GA_DetonateCrossbow_Bolt_C.OnSettingsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameUserSettings*        K2Node_DynamicCast_AsVal_Game_User_Settings                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAimingMode_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DetonateCrossbow_Bolt_C::OnSettingsChanged(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetAimingMode_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DetonateCrossbow_Bolt_C", "OnSettingsChanged");

	Params::UGA_DetonateCrossbow_Bolt_C_OnSettingsChanged_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_User_Settings = K2Node_DynamicCast_AsVal_Game_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAimingMode_ReturnValue = CallFunc_GetAimingMode_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DetonateCrossbow_Bolt.GA_DetonateCrossbow_Bolt_C.BeginPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValGameUserSettings*        K2Node_DynamicCast_AsVal_Game_User_Settings                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DetonateCrossbow_Bolt_C::BeginPlay(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UValGameUserSettings* K2Node_DynamicCast_AsVal_Game_User_Settings, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DetonateCrossbow_Bolt_C", "BeginPlay");

	Params::UGA_DetonateCrossbow_Bolt_C_BeginPlay_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_User_Settings = K2Node_DynamicCast_AsVal_Game_User_Settings;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_DetonateCrossbow_Bolt.GA_DetonateCrossbow_Bolt_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_DetonateCrossbow_Bolt_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DetonateCrossbow_Bolt_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_DetonateCrossbow_Bolt.GA_DetonateCrossbow_Bolt_C.ExecuteUbergraph_GA_DetonateCrossbow_Bolt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromClass_ReturnValue          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGA_Gun_Bow_Exotic_Detonate_Instant_C*K2Node_DynamicCast_AsGA_Gun_Bow_Exotic_Detonate_Instant          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_DetonateCrossbow_Bolt_C::ExecuteUbergraph_GA_DetonateCrossbow_Bolt(int32 EntryPoint, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromClass_ReturnValue, class UGA_Gun_Bow_Exotic_Detonate_Instant_C* K2Node_DynamicCast_AsGA_Gun_Bow_Exotic_Detonate_Instant, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_DetonateCrossbow_Bolt_C", "ExecuteUbergraph_GA_DetonateCrossbow_Bolt");

	Params::UGA_DetonateCrossbow_Bolt_C_ExecuteUbergraph_GA_DetonateCrossbow_Bolt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromClass_ReturnValue = CallFunc_GetPrimaryAbilityInstanceFromClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsGA_Gun_Bow_Exotic_Detonate_Instant = K2Node_DynamicCast_AsGA_Gun_Bow_Exotic_Detonate_Instant;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


