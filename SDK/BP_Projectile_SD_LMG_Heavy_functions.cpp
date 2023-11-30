#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_SD_LMG_Heavy.BP_Projectile_SD_LMG_Heavy_C
// (Actor)

class UClass* ABP_Projectile_SD_LMG_Heavy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_SD_LMG_Heavy_C");

	return Clss;
}


// BP_Projectile_SD_LMG_Heavy_C BP_Projectile_SD_LMG_Heavy.Default__BP_Projectile_SD_LMG_Heavy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_SD_LMG_Heavy_C* ABP_Projectile_SD_LMG_Heavy_C::GetDefaultObj()
{
	static class ABP_Projectile_SD_LMG_Heavy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_SD_LMG_Heavy_C*>(ABP_Projectile_SD_LMG_Heavy_C::StaticClass()->DefaultObject);

	return Default;
}

}


