#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SpaceDungeon_DomeShield_Knockback.GA_SpaceDungeon_DomeShield_Knockback_C
// (None)

class UClass* UGA_SpaceDungeon_DomeShield_Knockback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SpaceDungeon_DomeShield_Knockback_C");

	return Clss;
}


// GA_SpaceDungeon_DomeShield_Knockback_C GA_SpaceDungeon_DomeShield_Knockback.Default__GA_SpaceDungeon_DomeShield_Knockback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SpaceDungeon_DomeShield_Knockback_C* UGA_SpaceDungeon_DomeShield_Knockback_C::GetDefaultObj()
{
	static class UGA_SpaceDungeon_DomeShield_Knockback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SpaceDungeon_DomeShield_Knockback_C*>(UGA_SpaceDungeon_DomeShield_Knockback_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_SpaceDungeon_DomeShield_Knockback.GA_SpaceDungeon_DomeShield_Knockback_C.Get Enemy Damage Dealt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ShouldDamageEnemies                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DamageIsPercent                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DamageDealt                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpaceDungeon_DomeShield_Knockback_C::Get_Enemy_Damage_Dealt(bool* ShouldDamageEnemies, bool* DamageIsPercent, double* DamageDealt, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SpaceDungeon_DomeShield_Knockback_C", "Get Enemy Damage Dealt");

	Params::UGA_SpaceDungeon_DomeShield_Knockback_C_Get_Enemy_Damage_Dealt_Params Parms{};

	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldDamageEnemies != nullptr)
		*ShouldDamageEnemies = Parms.ShouldDamageEnemies;

	if (DamageIsPercent != nullptr)
		*DamageIsPercent = Parms.DamageIsPercent;

	if (DamageDealt != nullptr)
		*DamageDealt = Parms.DamageDealt;

}


// Function GA_SpaceDungeon_DomeShield_Knockback.GA_SpaceDungeon_DomeShield_Knockback_C.GetShieldScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             Scale                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpaceDungeon_DomeShield_Knockback_C::GetShieldScale(double* Scale, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SpaceDungeon_DomeShield_Knockback_C", "GetShieldScale");

	Params::UGA_SpaceDungeon_DomeShield_Knockback_C_GetShieldScale_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Scale != nullptr)
		*Scale = Parms.Scale;

}


// Function GA_SpaceDungeon_DomeShield_Knockback.GA_SpaceDungeon_DomeShield_Knockback_C.CalcAbilityPropertyModifiers
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CooldownMod                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetAbilityPropertyModValues_OutValues                   (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetAbilityPropertyModValues_OutValues_1                 (ReferenceParm)
// float                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetAbilityPropertyModValues_OutValues_2                 (ReferenceParm)
// float                              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_ScalableFloatK2Node_MakeStruct_ScalableFloat                                  (None)
// TArray<float>                      CallFunc_GetAbilityPropertyModValues_OutValues_3                 (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CooldownMod_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_Value_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpaceDungeon_DomeShield_Knockback_C::CalcAbilityPropertyModifiers(double CooldownMod, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues, int32 Temp_int_Array_Index_Variable_3, float CallFunc_Array_Get_Item, double CallFunc_Add_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_1, float CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_2, float CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, double CallFunc_FMax_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct GameplayAbilities_ScalableFloat& K2Node_MakeStruct_ScalableFloat, TArray<float>& CallFunc_GetAbilityPropertyModValues_OutValues_3, int32 CallFunc_Array_Length_ReturnValue_3, float CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double K2Node_VariableSet_CooldownMod_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float K2Node_MakeStruct_Value_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SpaceDungeon_DomeShield_Knockback_C", "CalcAbilityPropertyModifiers");

	Params::UGA_SpaceDungeon_DomeShield_Knockback_C_CalcAbilityPropertyModifiers_Params Parms{};

	Parms.CooldownMod = CooldownMod;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_GetAbilityPropertyModValues_OutValues = CallFunc_GetAbilityPropertyModValues_OutValues;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAbilityPropertyModValues_OutValues_1 = CallFunc_GetAbilityPropertyModValues_OutValues_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAbilityPropertyModValues_OutValues_2 = CallFunc_GetAbilityPropertyModValues_OutValues_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_ScalableFloat = K2Node_MakeStruct_ScalableFloat;
	Parms.CallFunc_GetAbilityPropertyModValues_OutValues_3 = CallFunc_GetAbilityPropertyModValues_OutValues_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.K2Node_VariableSet_CooldownMod_ImplicitCast = K2Node_VariableSet_CooldownMod_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.K2Node_MakeStruct_Value_ImplicitCast = K2Node_MakeStruct_Value_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_2 = CallFunc_Add_DoubleDouble_A_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SpaceDungeon_DomeShield_Knockback.GA_SpaceDungeon_DomeShield_Knockback_C.Calc Ability Modifiers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTotalAbilityPropertyModValue_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpaceDungeon_DomeShield_Knockback_C::Calc_Ability_Modifiers(bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTotalAbilityPropertyModValue_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SpaceDungeon_DomeShield_Knockback_C", "Calc Ability Modifiers");

	Params::UGA_SpaceDungeon_DomeShield_Knockback_C_Calc_Ability_Modifiers_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTotalAbilityPropertyModValue_ReturnValue = CallFunc_GetTotalAbilityPropertyModValue_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SpaceDungeon_DomeShield_Knockback.GA_SpaceDungeon_DomeShield_Knockback_C.GetAbilityDuration
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGA_SpaceDungeon_DomeShield_Knockback_C::GetAbilityDuration(double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SpaceDungeon_DomeShield_Knockback_C", "GetAbilityDuration");

	Params::UGA_SpaceDungeon_DomeShield_Knockback_C_GetAbilityDuration_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_SpaceDungeon_DomeShield_Knockback.GA_SpaceDungeon_DomeShield_Knockback_C.OnDomeShieldDurationFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_SpaceDungeon_DomeShield_Knockback_C::OnDomeShieldDurationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SpaceDungeon_DomeShield_Knockback_C", "OnDomeShieldDurationFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SpaceDungeon_DomeShield_Knockback.GA_SpaceDungeon_DomeShield_Knockback_C.OnDomeShieldDestroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_SpaceDungeon_DomeShield_Knockback_C::OnDomeShieldDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SpaceDungeon_DomeShield_Knockback_C", "OnDomeShieldDestroyed");

	Params::UGA_SpaceDungeon_DomeShield_Knockback_C_OnDomeShieldDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SpaceDungeon_DomeShield_Knockback.GA_SpaceDungeon_DomeShield_Knockback_C.SpawnDeployable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsePreviewTransform                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Transform       PreviewTransform                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Spawned                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Enemy_Damage_Dealt_ShouldDamageEnemies              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Enemy_Damage_Dealt_DamageIsPercent                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Enemy_Damage_Dealt_DamageDealt                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityDuration_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetShieldScale_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Transform       CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct CoreUObject_Vector          CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Transform       CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ADomeShield_Deployable_Dungeon_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetDoublePropertyByName_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpaceDungeon_DomeShield_Knockback_C::SpawnDeployable(bool UsePreviewTransform, const struct CoreUObject_Transform& PreviewTransform, class AActor** Spawned, bool CallFunc_Get_Enemy_Damage_Dealt_ShouldDamageEnemies, bool CallFunc_Get_Enemy_Damage_Dealt_DamageIsPercent, double CallFunc_Get_Enemy_Damage_Dealt_DamageDealt, float CallFunc_GetAbilityDuration_ReturnValue, double CallFunc_GetShieldScale_Scale, const struct CoreUObject_Transform& CallFunc_GetTransform_ReturnValue, const struct CoreUObject_Vector& CallFunc_BreakTransform_Location, const struct CoreUObject_Rotator& CallFunc_BreakTransform_Rotation, const struct CoreUObject_Vector& CallFunc_BreakTransform_Scale, const struct CoreUObject_Transform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ADomeShield_Deployable_Dungeon_C* CallFunc_FinishSpawningActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_HasAuthority_ReturnValue, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SpaceDungeon_DomeShield_Knockback_C", "SpawnDeployable");

	Params::UGA_SpaceDungeon_DomeShield_Knockback_C_SpawnDeployable_Params Parms{};

	Parms.UsePreviewTransform = UsePreviewTransform;
	Parms.PreviewTransform = PreviewTransform;
	Parms.CallFunc_Get_Enemy_Damage_Dealt_ShouldDamageEnemies = CallFunc_Get_Enemy_Damage_Dealt_ShouldDamageEnemies;
	Parms.CallFunc_Get_Enemy_Damage_Dealt_DamageIsPercent = CallFunc_Get_Enemy_Damage_Dealt_DamageIsPercent;
	Parms.CallFunc_Get_Enemy_Damage_Dealt_DamageDealt = CallFunc_Get_Enemy_Damage_Dealt_DamageDealt;
	Parms.CallFunc_GetAbilityDuration_ReturnValue = CallFunc_GetAbilityDuration_ReturnValue;
	Parms.CallFunc_GetShieldScale_Scale = CallFunc_GetShieldScale_Scale;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.CallFunc_SetDoublePropertyByName_Value_ImplicitCast = CallFunc_SetDoublePropertyByName_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Spawned != nullptr)
		*Spawned = Parms.Spawned;

}


// Function GA_SpaceDungeon_DomeShield_Knockback.GA_SpaceDungeon_DomeShield_Knockback_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_SpaceDungeon_DomeShield_Knockback_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SpaceDungeon_DomeShield_Knockback_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SpaceDungeon_DomeShield_Knockback.GA_SpaceDungeon_DomeShield_Knockback_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasRetriggered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpaceDungeon_DomeShield_Knockback_C::K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SpaceDungeon_DomeShield_Knockback_C", "K2_OnEndAbility");

	Params::UGA_SpaceDungeon_DomeShield_Knockback_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;
	Parms.bWasRetriggered = bWasRetriggered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SpaceDungeon_DomeShield_Knockback.GA_SpaceDungeon_DomeShield_Knockback_C.BeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_SpaceDungeon_DomeShield_Knockback_C::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SpaceDungeon_DomeShield_Knockback_C", "BeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_SpaceDungeon_DomeShield_Knockback.GA_SpaceDungeon_DomeShield_Knockback_C.SetAbilityDuration
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpaceDungeon_DomeShield_Knockback_C::SetAbilityDuration(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SpaceDungeon_DomeShield_Knockback_C", "SetAbilityDuration");

	Params::UGA_SpaceDungeon_DomeShield_Knockback_C_SetAbilityDuration_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_SpaceDungeon_DomeShield_Knockback.GA_SpaceDungeon_DomeShield_Knockback_C.ExecuteUbergraph_GA_SpaceDungeon_DomeShield_Knockback
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasRetriggered                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_ScalableFloatCallFunc_Array_Get_Item                                          (None)
// double                             K2Node_VariableSet_Duration_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_SpaceDungeon_DomeShield_Knockback_C::ExecuteUbergraph_GA_SpaceDungeon_DomeShield_Knockback(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, float K2Node_Event_Value, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct GameplayAbilities_ScalableFloat& CallFunc_Array_Get_Item, double K2Node_VariableSet_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_SpaceDungeon_DomeShield_Knockback_C", "ExecuteUbergraph_GA_SpaceDungeon_DomeShield_Knockback");

	Params::UGA_SpaceDungeon_DomeShield_Knockback_C_ExecuteUbergraph_GA_SpaceDungeon_DomeShield_Knockback_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_bWasRetriggered = K2Node_Event_bWasRetriggered;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_VariableSet_Duration_ImplicitCast = K2Node_VariableSet_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


