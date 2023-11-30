#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Flashlight.GA_Flashlight_C
// (None)

class UClass* UGA_Flashlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Flashlight_C");

	return Clss;
}


// GA_Flashlight_C GA_Flashlight.Default__GA_Flashlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Flashlight_C* UGA_Flashlight_C::GetDefaultObj()
{
	static class UGA_Flashlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Flashlight_C*>(UGA_Flashlight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Flashlight.GA_Flashlight_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Flashlight_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Flashlight_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Flashlight.GA_Flashlight_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasRetriggered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Flashlight_C::K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Flashlight_C", "K2_OnEndAbility");

	Params::UGA_Flashlight_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;
	Parms.bWasRetriggered = bWasRetriggered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Flashlight.GA_Flashlight_C.ValInputPressed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayAbilities_GameplayAbilitySpecHandleHandle                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilityActorInfoActorInfo                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct GameplayAbilities_GameplayAbilityActivationInfoActivationInfo                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UGA_Flashlight_C::ValInputPressed(const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilityActivationInfo& ActivationInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Flashlight_C", "ValInputPressed");

	Params::UGA_Flashlight_C_ValInputPressed_Params Parms{};

	Parms.Handle = Handle;
	Parms.ActorInfo = ActorInfo;
	Parms.ActivationInfo = ActivationInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Flashlight.GA_Flashlight_C.ExecuteUbergraph_GA_Flashlight
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasRetriggered                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleK2Node_Event_Handle                                              (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilityActorInfoK2Node_Event_ActorInfo                                           (ConstParm, ContainsInstancedReference)
// struct GameplayAbilities_GameplayAbilityActivationInfoK2Node_Event_ActivationInfo                                      (ConstParm, NoDestructor)

void UGA_Flashlight_C::ExecuteUbergraph_GA_Flashlight(int32 EntryPoint, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& K2Node_Event_Handle, const struct GameplayAbilities_GameplayAbilityActorInfo& K2Node_Event_ActorInfo, const struct GameplayAbilities_GameplayAbilityActivationInfo& K2Node_Event_ActivationInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Flashlight_C", "ExecuteUbergraph_GA_Flashlight");

	Params::UGA_Flashlight_C_ExecuteUbergraph_GA_Flashlight_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_bWasRetriggered = K2Node_Event_bWasRetriggered;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.K2Node_Event_Handle = K2Node_Event_Handle;
	Parms.K2Node_Event_ActorInfo = K2Node_Event_ActorInfo;
	Parms.K2Node_Event_ActivationInfo = K2Node_Event_ActivationInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}


