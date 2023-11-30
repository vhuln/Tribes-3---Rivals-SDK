#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_WeaponAbilityLockout.GE_WeaponAbilityLockout_C
// (None)

class UClass* UGE_WeaponAbilityLockout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_WeaponAbilityLockout_C");

	return Clss;
}


// GE_WeaponAbilityLockout_C GE_WeaponAbilityLockout.Default__GE_WeaponAbilityLockout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_WeaponAbilityLockout_C* UGE_WeaponAbilityLockout_C::GetDefaultObj()
{
	static class UGE_WeaponAbilityLockout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_WeaponAbilityLockout_C*>(UGE_WeaponAbilityLockout_C::StaticClass()->DefaultObject);

	return Default;
}

}


