#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_SMG.BP_Projectile_SMG_C
// (Actor)

class UClass* ABP_Projectile_SMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_SMG_C");

	return Clss;
}


// BP_Projectile_SMG_C BP_Projectile_SMG.Default__BP_Projectile_SMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_SMG_C* ABP_Projectile_SMG_C::GetDefaultObj()
{
	static class ABP_Projectile_SMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_SMG_C*>(ABP_Projectile_SMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


