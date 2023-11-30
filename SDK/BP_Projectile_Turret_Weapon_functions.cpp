#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_Turret_Weapon.BP_Projectile_Turret_Weapon_C
// (Actor)

class UClass* ABP_Projectile_Turret_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_Turret_Weapon_C");

	return Clss;
}


// BP_Projectile_Turret_Weapon_C BP_Projectile_Turret_Weapon.Default__BP_Projectile_Turret_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_Turret_Weapon_C* ABP_Projectile_Turret_Weapon_C::GetDefaultObj()
{
	static class ABP_Projectile_Turret_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_Turret_Weapon_C*>(ABP_Projectile_Turret_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


