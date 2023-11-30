#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AU_HeadshotDamageMitigation.AU_HeadshotDamageMitigation_C
// (None)

class UClass* UAU_HeadshotDamageMitigation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AU_HeadshotDamageMitigation_C");

	return Clss;
}


// AU_HeadshotDamageMitigation_C AU_HeadshotDamageMitigation.Default__AU_HeadshotDamageMitigation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAU_HeadshotDamageMitigation_C* UAU_HeadshotDamageMitigation_C::GetDefaultObj()
{
	static class UAU_HeadshotDamageMitigation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAU_HeadshotDamageMitigation_C*>(UAU_HeadshotDamageMitigation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AU_HeadshotDamageMitigation.AU_HeadshotDamageMitigation_C.ApplyLimbResistanceModifier
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OutLimbDamageModifier                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectContextHandleDamageContext                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionEntry_OutLimbDamageModifier_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSetRef_Target_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAU_HeadshotDamageMitigation_C::ApplyLimbResistanceModifier(float& OutLimbDamageModifier, float Damage, struct GameplayAbilities_GameplayEffectContextHandle& DamageContext, double CallFunc_Subtract_DoubleDouble_ReturnValue, float K2Node_FunctionEntry_OutLimbDamageModifier_ImplicitCast, double K2Node_VariableSetRef_Target_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AU_HeadshotDamageMitigation_C", "ApplyLimbResistanceModifier");

	Params::UAU_HeadshotDamageMitigation_C_ApplyLimbResistanceModifier_Params Parms{};

	Parms.OutLimbDamageModifier = OutLimbDamageModifier;
	Parms.Damage = Damage;
	Parms.DamageContext = DamageContext;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.K2Node_FunctionEntry_OutLimbDamageModifier_ImplicitCast = K2Node_FunctionEntry_OutLimbDamageModifier_ImplicitCast;
	Parms.K2Node_VariableSetRef_Target_ImplicitCast = K2Node_VariableSetRef_Target_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AU_HeadshotDamageMitigation.AU_HeadshotDamageMitigation_C.EventActivateUpgrade
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAU_HeadshotDamageMitigation_C::EventActivateUpgrade(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AU_HeadshotDamageMitigation_C", "EventActivateUpgrade");

	Params::UAU_HeadshotDamageMitigation_C_EventActivateUpgrade_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AU_HeadshotDamageMitigation.AU_HeadshotDamageMitigation_C.ExecuteUbergraph_AU_HeadshotDamageMitigation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_HeadshotDamageMitigation_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAU_HeadshotDamageMitigation_C::ExecuteUbergraph_AU_HeadshotDamageMitigation(int32 EntryPoint, float K2Node_Event_Value, double K2Node_VariableSet_HeadshotDamageMitigation_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AU_HeadshotDamageMitigation_C", "ExecuteUbergraph_AU_HeadshotDamageMitigation");

	Params::UAU_HeadshotDamageMitigation_C_ExecuteUbergraph_AU_HeadshotDamageMitigation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_VariableSet_HeadshotDamageMitigation_ImplicitCast = K2Node_VariableSet_HeadshotDamageMitigation_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


