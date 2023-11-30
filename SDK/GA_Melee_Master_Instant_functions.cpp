#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Melee_Master_Instant.GA_Melee_Master_Instant_C
// (None)

class UClass* UGA_Melee_Master_Instant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Melee_Master_Instant_C");

	return Clss;
}


// GA_Melee_Master_Instant_C GA_Melee_Master_Instant.Default__GA_Melee_Master_Instant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Melee_Master_Instant_C* UGA_Melee_Master_Instant_C::GetDefaultObj()
{
	static class UGA_Melee_Master_Instant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Melee_Master_Instant_C*>(UGA_Melee_Master_Instant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Melee_Master_Instant.GA_Melee_Master_Instant_C.CheckRemoveMovementDebuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActiveGameplayEffectHandleValid_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Melee_Master_Instant_C::CheckRemoveMovementDebuff(bool CallFunc_K2_HasAuthority_ReturnValue, bool CallFunc_IsActiveGameplayEffectHandleValid_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Master_Instant_C", "CheckRemoveMovementDebuff");

	Params::UGA_Melee_Master_Instant_C_CheckRemoveMovementDebuff_Params Parms{};

	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.CallFunc_IsActiveGameplayEffectHandleValid_ReturnValue = CallFunc_IsActiveGameplayEffectHandleValid_ReturnValue;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Melee_Master_Instant.GA_Melee_Master_Instant_C.OnTagRemoved_D51546124464A42A27D014A5B3B8B296
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Melee_Master_Instant_C::OnTagRemoved_D51546124464A42A27D014A5B3B8B296(const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Master_Instant_C", "OnTagRemoved_D51546124464A42A27D014A5B3B8B296");

	Params::UGA_Melee_Master_Instant_C_OnTagRemoved_D51546124464A42A27D014A5B3B8B296_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Melee_Master_Instant.GA_Melee_Master_Instant_C.OnTagAdded_D51546124464A42A27D014A5B3B8B296
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Melee_Master_Instant_C::OnTagAdded_D51546124464A42A27D014A5B3B8B296(const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Master_Instant_C", "OnTagAdded_D51546124464A42A27D014A5B3B8B296");

	Params::UGA_Melee_Master_Instant_C_OnTagAdded_D51546124464A42A27D014A5B3B8B296_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Melee_Master_Instant.GA_Melee_Master_Instant_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Melee_Master_Instant_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Master_Instant_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Melee_Master_Instant.GA_Melee_Master_Instant_C.BeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Melee_Master_Instant_C::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Master_Instant_C", "BeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Melee_Master_Instant.GA_Melee_Master_Instant_C.OnMeleeTagRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Melee_Master_Instant_C::OnMeleeTagRemoved(const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Master_Instant_C", "OnMeleeTagRemoved");

	Params::UGA_Melee_Master_Instant_C_OnMeleeTagRemoved_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Melee_Master_Instant.GA_Melee_Master_Instant_C.ExecuteUbergraph_GA_Melee_Master_Instant
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_Tag_2                                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_Tag_1                                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_Tag                                           (NoDestructor, HasGetValueTypeHash)
// class UValAT_GameplayTagAddedRemoved*CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_ReturnValue  (NoDestructor, HasGetValueTypeHash)

void UGA_Melee_Master_Instant_C::ExecuteUbergraph_GA_Melee_Master_Instant(int32 EntryPoint, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct GameplayTags_GameplayTag& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Melee_Master_Instant_C", "ExecuteUbergraph_GA_Melee_Master_Instant");

	Params::UGA_Melee_Master_Instant_C_ExecuteUbergraph_GA_Melee_Master_Instant_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Tag_2 = K2Node_CustomEvent_Tag_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Tag_1 = K2Node_CustomEvent_Tag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Tag = K2Node_CustomEvent_Tag;
	Parms.CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue = CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelfWithPrediction_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


