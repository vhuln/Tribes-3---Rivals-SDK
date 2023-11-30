#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Turret_Weapon.GA_Turret_Weapon_C
// (None)

class UClass* UGA_Turret_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Turret_Weapon_C");

	return Clss;
}


// GA_Turret_Weapon_C GA_Turret_Weapon.Default__GA_Turret_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Turret_Weapon_C* UGA_Turret_Weapon_C::GetDefaultObj()
{
	static class UGA_Turret_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Turret_Weapon_C*>(UGA_Turret_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Turret_Weapon.GA_Turret_Weapon_C.ValCheckCost
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct GameplayAbilities_GameplayAbilitySpecHandleHandle                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilityActorInfoActorInfo                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Turret_Weapon_C::ValCheckCost(const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Turret_Weapon_C", "ValCheckCost");

	Params::UGA_Turret_Weapon_C_ValCheckCost_Params Parms{};

	Parms.Handle = Handle;
	Parms.ActorInfo = ActorInfo;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Turret_Weapon.GA_Turret_Weapon_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Turret_Weapon_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Turret_Weapon_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Turret_Weapon.GA_Turret_Weapon_C.ExecuteUbergraph_GA_Turret_Weapon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Turret_Weapon_C::ExecuteUbergraph_GA_Turret_Weapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Turret_Weapon_C", "ExecuteUbergraph_GA_Turret_Weapon");

	Params::UGA_Turret_Weapon_C_ExecuteUbergraph_GA_Turret_Weapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


