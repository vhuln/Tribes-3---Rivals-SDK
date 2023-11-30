#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_Shotgun.BP_Projectile_Shotgun_C
// (Actor)

class UClass* ABP_Projectile_Shotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_Shotgun_C");

	return Clss;
}


// BP_Projectile_Shotgun_C BP_Projectile_Shotgun.Default__BP_Projectile_Shotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_Shotgun_C* ABP_Projectile_Shotgun_C::GetDefaultObj()
{
	static class ABP_Projectile_Shotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_Shotgun_C*>(ABP_Projectile_Shotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


