#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DeathWeapon.BP_DeathWeapon_C
// (Actor)

class UClass* ABP_DeathWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DeathWeapon_C");

	return Clss;
}


// BP_DeathWeapon_C BP_DeathWeapon.Default__BP_DeathWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DeathWeapon_C* ABP_DeathWeapon_C::GetDefaultObj()
{
	static class ABP_DeathWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DeathWeapon_C*>(ABP_DeathWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


