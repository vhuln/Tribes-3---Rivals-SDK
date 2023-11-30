#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AU_RubberServos.AU_RubberServos_C
// (None)

class UClass* UAU_RubberServos_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AU_RubberServos_C");

	return Clss;
}


// AU_RubberServos_C AU_RubberServos.Default__AU_RubberServos_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAU_RubberServos_C* UAU_RubberServos_C::GetDefaultObj()
{
	static class UAU_RubberServos_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAU_RubberServos_C*>(UAU_RubberServos_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AU_RubberServos.AU_RubberServos_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAU_RubberServos_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AU_RubberServos_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AU_RubberServos.AU_RubberServos_C.EventUnapplyAbilityUpgrade
// (Event, Public, BlueprintEvent)
// Parameters:

void UAU_RubberServos_C::EventUnapplyAbilityUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AU_RubberServos_C", "EventUnapplyAbilityUpgrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AU_RubberServos.AU_RubberServos_C.ExecuteUbergraph_AU_RubberServos
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActiveGameplayEffectHandleValid_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAU_RubberServos_C::ExecuteUbergraph_AU_RubberServos(int32 EntryPoint, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_IsActiveGameplayEffectHandleValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AU_RubberServos_C", "ExecuteUbergraph_AU_RubberServos");

	Params::UAU_RubberServos_C_ExecuteUbergraph_AU_RubberServos_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_IsActiveGameplayEffectHandleValid_ReturnValue = CallFunc_IsActiveGameplayEffectHandleValid_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


