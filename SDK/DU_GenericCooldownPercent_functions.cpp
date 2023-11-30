#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DU_GenericCooldownPercent.DU_GenericCooldownPercent_C
// (None)

class UClass* UDU_GenericCooldownPercent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DU_GenericCooldownPercent_C");

	return Clss;
}


// DU_GenericCooldownPercent_C DU_GenericCooldownPercent.Default__DU_GenericCooldownPercent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDU_GenericCooldownPercent_C* UDU_GenericCooldownPercent_C::GetDefaultObj()
{
	static class UDU_GenericCooldownPercent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDU_GenericCooldownPercent_C*>(UDU_GenericCooldownPercent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DU_GenericCooldownPercent.DU_GenericCooldownPercent_C.EventApplyAbilityUpgrade
// (Event, Public, BlueprintEvent)
// Parameters:
// TSubclassOf<class UValGameplayAbility>Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UDU_GenericCooldownPercent_C::EventApplyAbilityUpgrade(TSubclassOf<class UValGameplayAbility> Class, float Value, class UValGameplayAbility* Ability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DU_GenericCooldownPercent_C", "EventApplyAbilityUpgrade");

	Params::UDU_GenericCooldownPercent_C_EventApplyAbilityUpgrade_Params Parms{};

	Parms.Class = Class;
	Parms.Value = Value;
	Parms.Ability = Ability;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DU_GenericCooldownPercent.DU_GenericCooldownPercent_C.EventUnapplyAbilityUpgrade
// (Event, Public, BlueprintEvent)
// Parameters:

void UDU_GenericCooldownPercent_C::EventUnapplyAbilityUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DU_GenericCooldownPercent_C", "EventUnapplyAbilityUpgrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DU_GenericCooldownPercent.DU_GenericCooldownPercent_C.ExecuteUbergraph_DU_GenericCooldownPercent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UValGameplayAbility>K2Node_Event_Class                                               (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         K2Node_Event_Ability                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddAbilityCooldownPercentageModifier_Value_ImplicitCast (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDU_GenericCooldownPercent_C::ExecuteUbergraph_DU_GenericCooldownPercent(int32 EntryPoint, TSubclassOf<class UValGameplayAbility> K2Node_Event_Class, float K2Node_Event_Value, class UValGameplayAbility* K2Node_Event_Ability, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_AddAbilityCooldownPercentageModifier_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DU_GenericCooldownPercent_C", "ExecuteUbergraph_DU_GenericCooldownPercent");

	Params::UDU_GenericCooldownPercent_C_ExecuteUbergraph_DU_GenericCooldownPercent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Class = K2Node_Event_Class;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_Event_Ability = K2Node_Event_Ability;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_AddAbilityCooldownPercentageModifier_Value_ImplicitCast = CallFunc_AddAbilityCooldownPercentageModifier_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


