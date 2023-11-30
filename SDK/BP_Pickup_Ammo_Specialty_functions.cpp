#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Pickup_Ammo_Specialty.BP_Pickup_Ammo_Specialty_C
// (Actor)

class UClass* ABP_Pickup_Ammo_Specialty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pickup_Ammo_Specialty_C");

	return Clss;
}


// BP_Pickup_Ammo_Specialty_C BP_Pickup_Ammo_Specialty.Default__BP_Pickup_Ammo_Specialty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Pickup_Ammo_Specialty_C* ABP_Pickup_Ammo_Specialty_C::GetDefaultObj()
{
	static class ABP_Pickup_Ammo_Specialty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Pickup_Ammo_Specialty_C*>(ABP_Pickup_Ammo_Specialty_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Pickup_Ammo_Specialty.BP_Pickup_Ammo_Specialty_C.GetContextPingType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EValPingType            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EValPingType ABP_Pickup_Ammo_Specialty_C::GetContextPingType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Pickup_Ammo_Specialty_C", "GetContextPingType");

	Params::ABP_Pickup_Ammo_Specialty_C_GetContextPingType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


