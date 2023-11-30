#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DeathCrate_Cybrid.BP_DeathCrate_Cybrid_C
// (Actor)

class UClass* ABP_DeathCrate_Cybrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DeathCrate_Cybrid_C");

	return Clss;
}


// BP_DeathCrate_Cybrid_C BP_DeathCrate_Cybrid.Default__BP_DeathCrate_Cybrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DeathCrate_Cybrid_C* ABP_DeathCrate_Cybrid_C::GetDefaultObj()
{
	static class ABP_DeathCrate_Cybrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DeathCrate_Cybrid_C*>(ABP_DeathCrate_Cybrid_C::StaticClass()->DefaultObject);

	return Default;
}

}


