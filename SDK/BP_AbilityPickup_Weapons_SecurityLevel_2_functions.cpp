#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AbilityPickup_Weapons_SecurityLevel_2.BP_AbilityPickup_Weapons_SecurityLevel_2_C
// (Actor)

class UClass* ABP_AbilityPickup_Weapons_SecurityLevel_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AbilityPickup_Weapons_SecurityLevel_2_C");

	return Clss;
}


// BP_AbilityPickup_Weapons_SecurityLevel_2_C BP_AbilityPickup_Weapons_SecurityLevel_2.Default__BP_AbilityPickup_Weapons_SecurityLevel_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AbilityPickup_Weapons_SecurityLevel_2_C* ABP_AbilityPickup_Weapons_SecurityLevel_2_C::GetDefaultObj()
{
	static class ABP_AbilityPickup_Weapons_SecurityLevel_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AbilityPickup_Weapons_SecurityLevel_2_C*>(ABP_AbilityPickup_Weapons_SecurityLevel_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


