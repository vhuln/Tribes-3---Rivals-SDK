#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Weapon_Anti-Air_Stats.GE_Weapon_Anti-Air_Stats_C
// (None)

class UClass* UGE_Weapon_AntiMinusAir_Stats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Weapon_Anti-Air_Stats_C");

	return Clss;
}


// GE_Weapon_Anti-Air_Stats_C GE_Weapon_Anti-Air_Stats.Default__GE_Weapon_Anti-Air_Stats_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class UGE_Weapon_AntiMinusAir_Stats_C* UGE_Weapon_AntiMinusAir_Stats_C::GetDefaultObj()
{
	static class UGE_Weapon_AntiMinusAir_Stats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Weapon_AntiMinusAir_Stats_C*>(UGE_Weapon_AntiMinusAir_Stats_C::StaticClass()->DefaultObject);

	return Default;
}

}


