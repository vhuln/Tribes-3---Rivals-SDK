#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_SD_Pistol.BP_Projectile_SD_Pistol_C
// (Actor)

class UClass* ABP_Projectile_SD_Pistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_SD_Pistol_C");

	return Clss;
}


// BP_Projectile_SD_Pistol_C BP_Projectile_SD_Pistol.Default__BP_Projectile_SD_Pistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_SD_Pistol_C* ABP_Projectile_SD_Pistol_C::GetDefaultObj()
{
	static class ABP_Projectile_SD_Pistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_SD_Pistol_C*>(ABP_Projectile_SD_Pistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


