#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_SD_EnergyLMG.BP_Projectile_SD_EnergyLMG_C
// (Actor)

class UClass* ABP_Projectile_SD_EnergyLMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_SD_EnergyLMG_C");

	return Clss;
}


// BP_Projectile_SD_EnergyLMG_C BP_Projectile_SD_EnergyLMG.Default__BP_Projectile_SD_EnergyLMG_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class ABP_Projectile_SD_EnergyLMG_C* ABP_Projectile_SD_EnergyLMG_C::GetDefaultObj()
{
	static class ABP_Projectile_SD_EnergyLMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_SD_EnergyLMG_C*>(ABP_Projectile_SD_EnergyLMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


