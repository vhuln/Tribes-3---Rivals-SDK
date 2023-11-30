#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_AR_NoSpread.BP_Projectile_AR_NoSpread_C
// (Actor)

class UClass* ABP_Projectile_AR_NoSpread_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_AR_NoSpread_C");

	return Clss;
}


// BP_Projectile_AR_NoSpread_C BP_Projectile_AR_NoSpread.Default__BP_Projectile_AR_NoSpread_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_AR_NoSpread_C* ABP_Projectile_AR_NoSpread_C::GetDefaultObj()
{
	static class ABP_Projectile_AR_NoSpread_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_AR_NoSpread_C*>(ABP_Projectile_AR_NoSpread_C::StaticClass()->DefaultObject);

	return Default;
}

}


