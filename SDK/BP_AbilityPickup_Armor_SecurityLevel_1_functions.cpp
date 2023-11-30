#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AbilityPickup_Armor_SecurityLevel_1.BP_AbilityPickup_Armor_SecurityLevel_1_C
// (Actor)

class UClass* ABP_AbilityPickup_Armor_SecurityLevel_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AbilityPickup_Armor_SecurityLevel_1_C");

	return Clss;
}


// BP_AbilityPickup_Armor_SecurityLevel_1_C BP_AbilityPickup_Armor_SecurityLevel_1.Default__BP_AbilityPickup_Armor_SecurityLevel_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AbilityPickup_Armor_SecurityLevel_1_C* ABP_AbilityPickup_Armor_SecurityLevel_1_C::GetDefaultObj()
{
	static class ABP_AbilityPickup_Armor_SecurityLevel_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AbilityPickup_Armor_SecurityLevel_1_C*>(ABP_AbilityPickup_Armor_SecurityLevel_1_C::StaticClass()->DefaultObject);

	return Default;
}

}


