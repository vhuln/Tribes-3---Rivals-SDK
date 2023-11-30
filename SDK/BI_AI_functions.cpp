#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BI_AI.BI_AI_C
// (None)

class UClass* IBI_AI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BI_AI_C");

	return Clss;
}


// BI_AI_C BI_AI.Default__BI_AI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBI_AI_C* IBI_AI_C::GetDefaultObj()
{
	static class IBI_AI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBI_AI_C*>(IBI_AI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BI_AI.BI_AI_C.GetFacingDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Vector          Direction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_AI_C::GetFacingDirection(struct CoreUObject_Vector* Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_AI_C", "GetFacingDirection");

	Params::IBI_AI_C_GetFacingDirection_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);

}


// Function BI_AI.BI_AI_C.GetMuzzleLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Vector          MuzzleLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBI_AI_C::GetMuzzleLocation(struct CoreUObject_Vector* MuzzleLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_AI_C", "GetMuzzleLocation");

	Params::IBI_AI_C_GetMuzzleLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MuzzleLocation != nullptr)
		*MuzzleLocation = std::move(Parms.MuzzleLocation);

}


// Function BI_AI.BI_AI_C.GetThreatSystem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValThreatComponent*         ThreatSystem                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBI_AI_C::GetThreatSystem(class UValThreatComponent** ThreatSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_AI_C", "GetThreatSystem");

	Params::IBI_AI_C_GetThreatSystem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ThreatSystem != nullptr)
		*ThreatSystem = Parms.ThreatSystem;

}


// Function BI_AI.BI_AI_C.GetAbilitySystem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystem                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBI_AI_C::GetAbilitySystem(class UAbilitySystemComponent** AbilitySystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_AI_C", "GetAbilitySystem");

	Params::IBI_AI_C_GetAbilitySystem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AbilitySystem != nullptr)
		*AbilitySystem = Parms.AbilitySystem;

}


// Function BI_AI.BI_AI_C.GetAIMuzzle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             Muzzle                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBI_AI_C::GetAIMuzzle(class USceneComponent** Muzzle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_AI_C", "GetAIMuzzle");

	Params::IBI_AI_C_GetAIMuzzle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Muzzle != nullptr)
		*Muzzle = Parms.Muzzle;

}

}


