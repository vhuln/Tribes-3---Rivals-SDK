#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Pickup_SniperRifle_Charge.BP_Pickup_SniperRifle_Charge_C
// (Actor)

class UClass* ABP_Pickup_SniperRifle_Charge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pickup_SniperRifle_Charge_C");

	return Clss;
}


// BP_Pickup_SniperRifle_Charge_C BP_Pickup_SniperRifle_Charge.Default__BP_Pickup_SniperRifle_Charge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Pickup_SniperRifle_Charge_C* ABP_Pickup_SniperRifle_Charge_C::GetDefaultObj()
{
	static class ABP_Pickup_SniperRifle_Charge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Pickup_SniperRifle_Charge_C*>(ABP_Pickup_SniperRifle_Charge_C::StaticClass()->DefaultObject);

	return Default;
}

}


