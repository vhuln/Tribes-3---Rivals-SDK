#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_Pistol_Hand_Cannon.BP_Projectile_Pistol_Hand_Cannon_C
// (Actor)

class UClass* ABP_Projectile_Pistol_Hand_Cannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_Pistol_Hand_Cannon_C");

	return Clss;
}


// BP_Projectile_Pistol_Hand_Cannon_C BP_Projectile_Pistol_Hand_Cannon.Default__BP_Projectile_Pistol_Hand_Cannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_Pistol_Hand_Cannon_C* ABP_Projectile_Pistol_Hand_Cannon_C::GetDefaultObj()
{
	static class ABP_Projectile_Pistol_Hand_Cannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_Pistol_Hand_Cannon_C*>(ABP_Projectile_Pistol_Hand_Cannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


