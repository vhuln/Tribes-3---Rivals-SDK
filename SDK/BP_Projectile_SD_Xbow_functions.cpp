#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_SD_Xbow.BP_Projectile_SD_Xbow_C
// (Actor)

class UClass* ABP_Projectile_SD_Xbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_SD_Xbow_C");

	return Clss;
}


// BP_Projectile_SD_Xbow_C BP_Projectile_SD_Xbow.Default__BP_Projectile_SD_Xbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_SD_Xbow_C* ABP_Projectile_SD_Xbow_C::GetDefaultObj()
{
	static class ABP_Projectile_SD_Xbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_SD_Xbow_C*>(ABP_Projectile_SD_Xbow_C::StaticClass()->DefaultObject);

	return Default;
}

}


