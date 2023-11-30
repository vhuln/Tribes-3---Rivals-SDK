#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_SD_SilencedPistol.BP_Projectile_SD_SilencedPistol_C
// (Actor)

class UClass* ABP_Projectile_SD_SilencedPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_SD_SilencedPistol_C");

	return Clss;
}


// BP_Projectile_SD_SilencedPistol_C BP_Projectile_SD_SilencedPistol.Default__BP_Projectile_SD_SilencedPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_SD_SilencedPistol_C* ABP_Projectile_SD_SilencedPistol_C::GetDefaultObj()
{
	static class ABP_Projectile_SD_SilencedPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_SD_SilencedPistol_C*>(ABP_Projectile_SD_SilencedPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


