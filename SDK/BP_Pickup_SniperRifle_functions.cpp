#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Pickup_SniperRifle.BP_Pickup_SniperRifle_C
// (Actor)

class UClass* ABP_Pickup_SniperRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Pickup_SniperRifle_C");

	return Clss;
}


// BP_Pickup_SniperRifle_C BP_Pickup_SniperRifle.Default__BP_Pickup_SniperRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Pickup_SniperRifle_C* ABP_Pickup_SniperRifle_C::GetDefaultObj()
{
	static class ABP_Pickup_SniperRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Pickup_SniperRifle_C*>(ABP_Pickup_SniperRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


