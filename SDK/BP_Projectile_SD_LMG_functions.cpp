#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_SD_LMG.BP_Projectile_SD_LMG_C
// (Actor)

class UClass* ABP_Projectile_SD_LMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_SD_LMG_C");

	return Clss;
}


// BP_Projectile_SD_LMG_C BP_Projectile_SD_LMG.Default__BP_Projectile_SD_LMG_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class ABP_Projectile_SD_LMG_C* ABP_Projectile_SD_LMG_C::GetDefaultObj()
{
	static class ABP_Projectile_SD_LMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_SD_LMG_C*>(ABP_Projectile_SD_LMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


