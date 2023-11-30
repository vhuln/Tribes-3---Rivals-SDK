#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Weapon_Turret_Stats.GE_Weapon_Turret_Stats_C
// (None)

class UClass* UGE_Weapon_Turret_Stats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Weapon_Turret_Stats_C");

	return Clss;
}


// GE_Weapon_Turret_Stats_C GE_Weapon_Turret_Stats.Default__GE_Weapon_Turret_Stats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Weapon_Turret_Stats_C* UGE_Weapon_Turret_Stats_C::GetDefaultObj()
{
	static class UGE_Weapon_Turret_Stats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Weapon_Turret_Stats_C*>(UGE_Weapon_Turret_Stats_C::StaticClass()->DefaultObject);

	return Default;
}

}


