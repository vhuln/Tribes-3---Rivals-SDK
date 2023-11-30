#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AU_ExplosivesManual.AU_ExplosivesManual_C
// (None)

class UClass* UAU_ExplosivesManual_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AU_ExplosivesManual_C");

	return Clss;
}


// AU_ExplosivesManual_C AU_ExplosivesManual.Default__AU_ExplosivesManual_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAU_ExplosivesManual_C* UAU_ExplosivesManual_C::GetDefaultObj()
{
	static class UAU_ExplosivesManual_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAU_ExplosivesManual_C*>(UAU_ExplosivesManual_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AU_ExplosivesManual.AU_ExplosivesManual_C.EventApplyAbilityUpgrade
// (Event, Public, BlueprintEvent)
// Parameters:
// TSubclassOf<class UValGameplayAbility>Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAU_ExplosivesManual_C::EventApplyAbilityUpgrade(TSubclassOf<class UValGameplayAbility> Class, float Value, class UValGameplayAbility* Ability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AU_ExplosivesManual_C", "EventApplyAbilityUpgrade");

	Params::UAU_ExplosivesManual_C_EventApplyAbilityUpgrade_Params Parms{};

	Parms.Class = Class;
	Parms.Value = Value;
	Parms.Ability = Ability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AU_ExplosivesManual.AU_ExplosivesManual_C.EventUnapplyAbilityUpgrade
// (Event, Public, BlueprintEvent)
// Parameters:

void UAU_ExplosivesManual_C::EventUnapplyAbilityUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AU_ExplosivesManual_C", "EventUnapplyAbilityUpgrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AU_ExplosivesManual.AU_ExplosivesManual_C.ExecuteUbergraph_AU_ExplosivesManual
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UValGameplayAbility>K2Node_Event_Class                                               (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         K2Node_Event_Ability                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGA_Grenade_New_C*           K2Node_DynamicCast_AsGA_Grenade_New                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_Grenade_New_C*           K2Node_DynamicCast_AsGA_Grenade_New_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValUpgradableAbility>CallFunc_SetAbilityRange_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValUpgradableAbility>CallFunc_SetAbilityRange_self_CastInput_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetAbilityRange_Value_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAU_ExplosivesManual_C::ExecuteUbergraph_AU_ExplosivesManual(int32 EntryPoint, TSubclassOf<class UValGameplayAbility> K2Node_Event_Class, float K2Node_Event_Value, class UValGameplayAbility* K2Node_Event_Ability, class UGA_Grenade_New_C* K2Node_DynamicCast_AsGA_Grenade_New, bool K2Node_DynamicCast_bSuccess, class UGA_Grenade_New_C* K2Node_DynamicCast_AsGA_Grenade_New_1, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, TScriptInterface<class IValUpgradableAbility> CallFunc_SetAbilityRange_self_CastInput, TScriptInterface<class IValUpgradableAbility> CallFunc_SetAbilityRange_self_CastInput_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetAbilityRange_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AU_ExplosivesManual_C", "ExecuteUbergraph_AU_ExplosivesManual");

	Params::UAU_ExplosivesManual_C_ExecuteUbergraph_AU_ExplosivesManual_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Class = K2Node_Event_Class;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_Event_Ability = K2Node_Event_Ability;
	Parms.K2Node_DynamicCast_AsGA_Grenade_New = K2Node_DynamicCast_AsGA_Grenade_New;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGA_Grenade_New_1 = K2Node_DynamicCast_AsGA_Grenade_New_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetAbilityRange_self_CastInput = CallFunc_SetAbilityRange_self_CastInput;
	Parms.CallFunc_SetAbilityRange_self_CastInput_1 = CallFunc_SetAbilityRange_self_CastInput_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetAbilityRange_Value_ImplicitCast = CallFunc_SetAbilityRange_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


