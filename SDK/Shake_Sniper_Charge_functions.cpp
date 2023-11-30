#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shake_Sniper_Charge.Shake_Sniper_Charge_C
// (None)

class UClass* UShake_Sniper_Charge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shake_Sniper_Charge_C");

	return Clss;
}


// Shake_Sniper_Charge_C Shake_Sniper_Charge.Default__Shake_Sniper_Charge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShake_Sniper_Charge_C* UShake_Sniper_Charge_C::GetDefaultObj()
{
	static class UShake_Sniper_Charge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShake_Sniper_Charge_C*>(UShake_Sniper_Charge_C::StaticClass()->DefaultObject);

	return Default;
}

}


