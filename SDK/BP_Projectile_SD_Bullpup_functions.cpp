#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_SD_Bullpup.BP_Projectile_SD_Bullpup_C
// (Actor)

class UClass* ABP_Projectile_SD_Bullpup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_SD_Bullpup_C");

	return Clss;
}


// BP_Projectile_SD_Bullpup_C BP_Projectile_SD_Bullpup.Default__BP_Projectile_SD_Bullpup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_SD_Bullpup_C* ABP_Projectile_SD_Bullpup_C::GetDefaultObj()
{
	static class ABP_Projectile_SD_Bullpup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_SD_Bullpup_C*>(ABP_Projectile_SD_Bullpup_C::StaticClass()->DefaultObject);

	return Default;
}

}


