#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EngineerClassComponent.BP_EngineerClassComponent_C
// (None)

class UClass* UBP_EngineerClassComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EngineerClassComponent_C");

	return Clss;
}


// BP_EngineerClassComponent_C BP_EngineerClassComponent.Default__BP_EngineerClassComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_EngineerClassComponent_C* UBP_EngineerClassComponent_C::GetDefaultObj()
{
	static class UBP_EngineerClassComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_EngineerClassComponent_C*>(UBP_EngineerClassComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EngineerClassComponent.BP_EngineerClassComponent_C.ApplyDamageOutputModifier
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OutPercentModifier                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutFlatModifier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectContextHandleDamageContext                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AValCharacter*               LocalChar                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_EffectContextGetSourceObject_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetActiveEquippedAbility_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               CallFunc_GetValCharacter_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_EngineerClassComponent_C::ApplyDamageOutputModifier(float& OutPercentModifier, float& OutFlatModifier, float Damage, struct GameplayAbilities_GameplayEffectContextHandle& DamageContext, class AValCharacter* LocalChar, bool CallFunc_RandomBoolWithWeight_ReturnValue, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AValCharacter* CallFunc_GetValCharacter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EngineerClassComponent_C", "ApplyDamageOutputModifier");

	Params::UBP_EngineerClassComponent_C_ApplyDamageOutputModifier_Params Parms{};

	Parms.OutPercentModifier = OutPercentModifier;
	Parms.OutFlatModifier = OutFlatModifier;
	Parms.Damage = Damage;
	Parms.DamageContext = DamageContext;
	Parms.LocalChar = LocalChar;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_EffectContextGetSourceObject_ReturnValue = CallFunc_EffectContextGetSourceObject_ReturnValue;
	Parms.CallFunc_GetActiveEquippedAbility_ReturnValue = CallFunc_GetActiveEquippedAbility_ReturnValue;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue = CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetValCharacter_ReturnValue = CallFunc_GetValCharacter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EngineerClassComponent.BP_EngineerClassComponent_C.CalcPropertyModifiers
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<float>                      NewLocalVar                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetPassivePropertyModValues_OutValues                   (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      CallFunc_GetPassivePropertyModValues_OutValues_1                 (ReferenceParm)

void UBP_EngineerClassComponent_C::CalcPropertyModifiers(const TArray<float>& NewLocalVar, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<float>& CallFunc_GetPassivePropertyModValues_OutValues, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<float>& CallFunc_GetPassivePropertyModValues_OutValues_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EngineerClassComponent_C", "CalcPropertyModifiers");

	Params::UBP_EngineerClassComponent_C_CalcPropertyModifiers_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetPassivePropertyModValues_OutValues = CallFunc_GetPassivePropertyModValues_OutValues;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPassivePropertyModValues_OutValues_1 = CallFunc_GetPassivePropertyModValues_OutValues_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


