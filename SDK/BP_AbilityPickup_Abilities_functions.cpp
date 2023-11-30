#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AbilityPickup_Abilities.BP_AbilityPickup_Abilities_C
// (Actor)

class UClass* ABP_AbilityPickup_Abilities_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AbilityPickup_Abilities_C");

	return Clss;
}


// BP_AbilityPickup_Abilities_C BP_AbilityPickup_Abilities.Default__BP_AbilityPickup_Abilities_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AbilityPickup_Abilities_C* ABP_AbilityPickup_Abilities_C::GetDefaultObj()
{
	static class ABP_AbilityPickup_Abilities_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AbilityPickup_Abilities_C*>(ABP_AbilityPickup_Abilities_C::StaticClass()->DefaultObject);

	return Default;
}

}


