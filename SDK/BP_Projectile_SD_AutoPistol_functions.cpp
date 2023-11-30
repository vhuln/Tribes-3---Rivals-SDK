#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_SD_AutoPistol.BP_Projectile_SD_AutoPistol_C
// (Actor)

class UClass* ABP_Projectile_SD_AutoPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_SD_AutoPistol_C");

	return Clss;
}


// BP_Projectile_SD_AutoPistol_C BP_Projectile_SD_AutoPistol.Default__BP_Projectile_SD_AutoPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_SD_AutoPistol_C* ABP_Projectile_SD_AutoPistol_C::GetDefaultObj()
{
	static class ABP_Projectile_SD_AutoPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_SD_AutoPistol_C*>(ABP_Projectile_SD_AutoPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


