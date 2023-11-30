#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Gun_Bow_Exotic_Detonate_Instant.GA_Gun_Bow_Exotic_Detonate_Instant_C
// (None)

class UClass* UGA_Gun_Bow_Exotic_Detonate_Instant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Gun_Bow_Exotic_Detonate_Instant_C");

	return Clss;
}


// GA_Gun_Bow_Exotic_Detonate_Instant_C GA_Gun_Bow_Exotic_Detonate_Instant.Default__GA_Gun_Bow_Exotic_Detonate_Instant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Gun_Bow_Exotic_Detonate_Instant_C* UGA_Gun_Bow_Exotic_Detonate_Instant_C::GetDefaultObj()
{
	static class UGA_Gun_Bow_Exotic_Detonate_Instant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Gun_Bow_Exotic_Detonate_Instant_C*>(UGA_Gun_Bow_Exotic_Detonate_Instant_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Gun_Bow_Exotic_Detonate_Instant.GA_Gun_Bow_Exotic_Detonate_Instant_C.CacheRemoveMine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DetonateCrossbow_Mine_C* Mine                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Bow_Exotic_Detonate_Instant_C::CacheRemoveMine(class ABP_DetonateCrossbow_Mine_C* Mine, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Bow_Exotic_Detonate_Instant_C", "CacheRemoveMine");

	Params::UGA_Gun_Bow_Exotic_Detonate_Instant_C_CacheRemoveMine_Params Parms{};

	Parms.Mine = Mine;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Bow_Exotic_Detonate_Instant.GA_Gun_Bow_Exotic_Detonate_Instant_C.DetonateAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DetonateCrossbow_Mine_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Bow_Exotic_Detonate_Instant_C::DetonateAll(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_DetonateCrossbow_Mine_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Bow_Exotic_Detonate_Instant_C", "DetonateAll");

	Params::UGA_Gun_Bow_Exotic_Detonate_Instant_C_DetonateAll_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Bow_Exotic_Detonate_Instant.GA_Gun_Bow_Exotic_Detonate_Instant_C.CacheNewMine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DetonateCrossbow_Mine_C* Mine                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DetonateCrossbow_Mine_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Bow_Exotic_Detonate_Instant_C::CacheNewMine(class ABP_DetonateCrossbow_Mine_C* Mine, int32 CallFunc_Array_Add_ReturnValue, class ABP_DetonateCrossbow_Mine_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Bow_Exotic_Detonate_Instant_C", "CacheNewMine");

	Params::UGA_Gun_Bow_Exotic_Detonate_Instant_C_CacheNewMine_Params Parms{};

	Parms.Mine = Mine;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Bow_Exotic_Detonate_Instant.GA_Gun_Bow_Exotic_Detonate_Instant_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Gun_Bow_Exotic_Detonate_Instant_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Bow_Exotic_Detonate_Instant_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Gun_Bow_Exotic_Detonate_Instant.GA_Gun_Bow_Exotic_Detonate_Instant_C.ExecuteUbergraph_GA_Gun_Bow_Exotic_Detonate_Instant
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Bow_Exotic_Detonate_Instant_C::ExecuteUbergraph_GA_Gun_Bow_Exotic_Detonate_Instant(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Bow_Exotic_Detonate_Instant_C", "ExecuteUbergraph_GA_Gun_Bow_Exotic_Detonate_Instant");

	Params::UGA_Gun_Bow_Exotic_Detonate_Instant_C_ExecuteUbergraph_GA_Gun_Bow_Exotic_Detonate_Instant_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


