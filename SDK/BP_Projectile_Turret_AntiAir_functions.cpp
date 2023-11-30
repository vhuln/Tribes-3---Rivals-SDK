#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_Turret_AntiAir.BP_Projectile_Turret_AntiAir_C
// (Actor)

class UClass* ABP_Projectile_Turret_AntiAir_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_Turret_AntiAir_C");

	return Clss;
}


// BP_Projectile_Turret_AntiAir_C BP_Projectile_Turret_AntiAir.Default__BP_Projectile_Turret_AntiAir_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class ABP_Projectile_Turret_AntiAir_C* ABP_Projectile_Turret_AntiAir_C::GetDefaultObj()
{
	static class ABP_Projectile_Turret_AntiAir_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_Turret_AntiAir_C*>(ABP_Projectile_Turret_AntiAir_C::StaticClass()->DefaultObject);

	return Default;
}

}


