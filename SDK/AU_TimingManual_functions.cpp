#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AU_TimingManual.AU_TimingManual_C
// (None)

class UClass* UAU_TimingManual_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AU_TimingManual_C");

	return Clss;
}


// AU_TimingManual_C AU_TimingManual.Default__AU_TimingManual_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAU_TimingManual_C* UAU_TimingManual_C::GetDefaultObj()
{
	static class UAU_TimingManual_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAU_TimingManual_C*>(UAU_TimingManual_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AU_TimingManual.AU_TimingManual_C.EventApplyAbilityUpgrade
// (Event, Public, BlueprintEvent)
// Parameters:
// TSubclassOf<class UValGameplayAbility>Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAU_TimingManual_C::EventApplyAbilityUpgrade(TSubclassOf<class UValGameplayAbility> Class, float Value, class UValGameplayAbility* Ability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AU_TimingManual_C", "EventApplyAbilityUpgrade");

	Params::UAU_TimingManual_C_EventApplyAbilityUpgrade_Params Parms{};

	Parms.Class = Class;
	Parms.Value = Value;
	Parms.Ability = Ability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AU_TimingManual.AU_TimingManual_C.EventUnapplyAbilityUpgrade
// (Event, Public, BlueprintEvent)
// Parameters:

void UAU_TimingManual_C::EventUnapplyAbilityUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AU_TimingManual_C", "EventUnapplyAbilityUpgrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AU_TimingManual.AU_TimingManual_C.ExecuteUbergraph_AU_TimingManual
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UValGameplayAbility>K2Node_Event_Class                                               (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         K2Node_Event_Ability                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValUpgradableAbility>K2Node_DynamicCast_AsVal_Upgradable_Ability                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerCallFunc_GetAbilityTags_ReturnValue                              (None)
// float                              CallFunc_GetAbilityDuration_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValUpgradableAbility>K2Node_DynamicCast_AsVal_Upgradable_Ability_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityDuration_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CachedUpgradeMagnitude_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAbilityDuration_Value_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAbilityDuration_Value_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAU_TimingManual_C::ExecuteUbergraph_AU_TimingManual(int32 EntryPoint, TSubclassOf<class UValGameplayAbility> K2Node_Event_Class, float K2Node_Event_Value, class UValGameplayAbility* K2Node_Event_Ability, TScriptInterface<class IValUpgradableAbility> K2Node_DynamicCast_AsVal_Upgradable_Ability, bool K2Node_DynamicCast_bSuccess, const struct GameplayTags_GameplayTagContainer& CallFunc_GetAbilityTags_ReturnValue, float CallFunc_GetAbilityDuration_ReturnValue, bool CallFunc_HasTag_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, TScriptInterface<class IValUpgradableAbility> K2Node_DynamicCast_AsVal_Upgradable_Ability_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetAbilityDuration_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double K2Node_VariableSet_CachedUpgradeMagnitude_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetAbilityDuration_Value_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetAbilityDuration_Value_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AU_TimingManual_C", "ExecuteUbergraph_AU_TimingManual");

	Params::UAU_TimingManual_C_ExecuteUbergraph_AU_TimingManual_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Class = K2Node_Event_Class;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_Event_Ability = K2Node_Event_Ability;
	Parms.K2Node_DynamicCast_AsVal_Upgradable_Ability = K2Node_DynamicCast_AsVal_Upgradable_Ability;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilityTags_ReturnValue = CallFunc_GetAbilityTags_ReturnValue;
	Parms.CallFunc_GetAbilityDuration_ReturnValue = CallFunc_GetAbilityDuration_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Upgradable_Ability_1 = K2Node_DynamicCast_AsVal_Upgradable_Ability_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAbilityDuration_ReturnValue_1 = CallFunc_GetAbilityDuration_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_VariableSet_CachedUpgradeMagnitude_ImplicitCast = K2Node_VariableSet_CachedUpgradeMagnitude_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetAbilityDuration_Value_ImplicitCast = CallFunc_SetAbilityDuration_Value_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetAbilityDuration_Value_ImplicitCast_1 = CallFunc_SetAbilityDuration_Value_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


