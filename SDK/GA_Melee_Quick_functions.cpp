#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Melee_Quick.GA_Melee_Quick_C
// (None)

class UClass* UGA_Melee_Quick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Melee_Quick_C");

	return Clss;
}


// GA_Melee_Quick_C GA_Melee_Quick.Default__GA_Melee_Quick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Melee_Quick_C* UGA_Melee_Quick_C::GetDefaultObj()
{
	static class UGA_Melee_Quick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Melee_Quick_C*>(UGA_Melee_Quick_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Melee_Quick.GA_Melee_Quick_C.CacheData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetCurrentSourceObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_Gun_Master_C*            K2Node_DynamicCast_AsGA_Gun_Master                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValAbilitySystemComponent*  K2Node_DynamicCast_AsVal_Ability_System_Component                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilitySpecHandleValid_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_FindAbilitySpecHandleForClass_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_Melee_Quick_C::CacheData(class UObject* CallFunc_GetCurrentSourceObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, class UValAbilitySystemComponent* K2Node_DynamicCast_AsVal_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsAbilitySpecHandleValid_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_FindAbilitySpecHandleForClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Quick_C", "CacheData");

	Params::UGA_Melee_Quick_C_CacheData_Params Parms{};

	Parms.CallFunc_GetCurrentSourceObject_ReturnValue = CallFunc_GetCurrentSourceObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsGA_Gun_Master = K2Node_DynamicCast_AsGA_Gun_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Ability_System_Component = K2Node_DynamicCast_AsVal_Ability_System_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsAbilitySpecHandleValid_ReturnValue = CallFunc_IsAbilitySpecHandleValid_ReturnValue;
	Parms.CallFunc_FindAbilitySpecHandleForClass_ReturnValue = CallFunc_FindAbilitySpecHandleForClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Melee_Quick.GA_Melee_Quick_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasRetriggered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Melee_Quick_C::K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Quick_C", "K2_OnEndAbility");

	Params::UGA_Melee_Quick_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;
	Parms.bWasRetriggered = bWasRetriggered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Melee_Quick.GA_Melee_Quick_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Melee_Quick_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Quick_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Melee_Quick.GA_Melee_Quick_C.ExecuteUbergraph_GA_Melee_Quick
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasRetriggered                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              (None)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue           (NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectContextHandleCallFunc_GetEffectContext_ReturnValue                            (None)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BatchRPCTryActivateAbility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Melee_Quick_C::ExecuteUbergraph_GA_Melee_Quick(int32 EntryPoint, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_GetEffectContext_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_BatchRPCTryActivateAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Quick_C", "ExecuteUbergraph_GA_Melee_Quick");

	Params::UGA_Melee_Quick_C_ExecuteUbergraph_GA_Melee_Quick_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_bWasRetriggered = K2Node_Event_bWasRetriggered;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;
	Parms.CallFunc_GetEffectContext_ReturnValue = CallFunc_GetEffectContext_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_BatchRPCTryActivateAbility_ReturnValue = CallFunc_BatchRPCTryActivateAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


