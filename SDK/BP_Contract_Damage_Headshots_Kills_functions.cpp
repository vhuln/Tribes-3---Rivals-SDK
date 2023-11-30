#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Contract_Damage_Headshots_Kills.BP_Contract_Damage_Headshots_Kills_C
// (None)

class UClass* UBP_Contract_Damage_Headshots_Kills_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Contract_Damage_Headshots_Kills_C");

	return Clss;
}


// BP_Contract_Damage_Headshots_Kills_C BP_Contract_Damage_Headshots_Kills.Default__BP_Contract_Damage_Headshots_Kills_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Contract_Damage_Headshots_Kills_C* UBP_Contract_Damage_Headshots_Kills_C::GetDefaultObj()
{
	static class UBP_Contract_Damage_Headshots_Kills_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Contract_Damage_Headshots_Kills_C*>(UBP_Contract_Damage_Headshots_Kills_C::StaticClass()->DefaultObject);

	return Default;
}

}


