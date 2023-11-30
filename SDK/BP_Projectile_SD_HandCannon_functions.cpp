#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_SD_HandCannon.BP_Projectile_SD_HandCannon_C
// (Actor)

class UClass* ABP_Projectile_SD_HandCannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_SD_HandCannon_C");

	return Clss;
}


// BP_Projectile_SD_HandCannon_C BP_Projectile_SD_HandCannon.Default__BP_Projectile_SD_HandCannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_SD_HandCannon_C* ABP_Projectile_SD_HandCannon_C::GetDefaultObj()
{
	static class ABP_Projectile_SD_HandCannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_SD_HandCannon_C*>(ABP_Projectile_SD_HandCannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


