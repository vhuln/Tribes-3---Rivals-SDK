#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_SD_PulsePistol.BP_Projectile_SD_PulsePistol_C
// (Actor)

class UClass* ABP_Projectile_SD_PulsePistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_SD_PulsePistol_C");

	return Clss;
}


// BP_Projectile_SD_PulsePistol_C BP_Projectile_SD_PulsePistol.Default__BP_Projectile_SD_PulsePistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_SD_PulsePistol_C* ABP_Projectile_SD_PulsePistol_C::GetDefaultObj()
{
	static class ABP_Projectile_SD_PulsePistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_SD_PulsePistol_C*>(ABP_Projectile_SD_PulsePistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


