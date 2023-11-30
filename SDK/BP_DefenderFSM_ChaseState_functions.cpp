#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefenderFSM_ChaseState.BP_DefenderFSM_ChaseState_C
// (None)

class UClass* UBP_DefenderFSM_ChaseState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefenderFSM_ChaseState_C");

	return Clss;
}


// BP_DefenderFSM_ChaseState_C BP_DefenderFSM_ChaseState.Default__BP_DefenderFSM_ChaseState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefenderFSM_ChaseState_C* UBP_DefenderFSM_ChaseState_C::GetDefaultObj()
{
	static class UBP_DefenderFSM_ChaseState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefenderFSM_ChaseState_C*>(UBP_DefenderFSM_ChaseState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DefenderFSM_ChaseState.BP_DefenderFSM_ChaseState_C.OverwriteBehaviorTreeBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderFSM_ChaseState_C::OverwriteBehaviorTreeBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderFSM_ChaseState_C", "OverwriteBehaviorTreeBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderFSM_ChaseState.BP_DefenderFSM_ChaseState_C.StartStateBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderFSM_ChaseState_C::StartStateBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderFSM_ChaseState_C", "StartStateBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderFSM_ChaseState.BP_DefenderFSM_ChaseState_C.EndStateBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_DefenderFSM_ChaseState_C::EndStateBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderFSM_ChaseState_C", "EndStateBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DefenderFSM_ChaseState.BP_DefenderFSM_ChaseState_C.ExecuteUbergraph_BP_DefenderFSM_ChaseState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectContextHandleCallFunc_MakeEffectContext_ReturnValue                           (None)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_MakeOutgoingSpec_ReturnValue                            (None)
// class UValAbilitySystemComponent*  K2Node_DynamicCast_AsVal_Ability_System_Component                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValBotData*                 CallFunc_GetBotConfigData_ReturnValue                            (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValCharacterAnimInstance*   K2Node_DynamicCast_AsVal_Character_Anim_Instance                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChaseIntroAnimationLength_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_AssignTagSetByCallerMagnitude_ReturnValue               (None)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DefenderFSM_ChaseState_C::ExecuteUbergraph_BP_DefenderFSM_ChaseState(int32 EntryPoint, class AValCharacter* CallFunc_GetCharacter_ReturnValue, class AValCharacter* CallFunc_GetCharacter_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct GameplayAbilities_GameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, class UValAbilitySystemComponent* K2Node_DynamicCast_AsVal_Ability_System_Component, bool K2Node_DynamicCast_bSuccess, class UValBotData* CallFunc_GetBotConfigData_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValCharacterAnimInstance* K2Node_DynamicCast_AsVal_Character_Anim_Instance, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetChaseIntroAnimationLength_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DefenderFSM_ChaseState_C", "ExecuteUbergraph_BP_DefenderFSM_ChaseState");

	Params::UBP_DefenderFSM_ChaseState_C_ExecuteUbergraph_BP_DefenderFSM_ChaseState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeEffectContext_ReturnValue = CallFunc_MakeEffectContext_ReturnValue;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue = CallFunc_MakeOutgoingSpec_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Ability_System_Component = K2Node_DynamicCast_AsVal_Ability_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBotConfigData_ReturnValue = CallFunc_GetBotConfigData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Character_Anim_Instance = K2Node_DynamicCast_AsVal_Character_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetChaseIntroAnimationLength_ReturnValue = CallFunc_GetChaseIntroAnimationLength_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


