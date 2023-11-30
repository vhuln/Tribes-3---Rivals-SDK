#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shake_Sniper.Shake_Sniper_C
// (None)

class UClass* UShake_Sniper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shake_Sniper_C");

	return Clss;
}


// Shake_Sniper_C Shake_Sniper.Default__Shake_Sniper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShake_Sniper_C* UShake_Sniper_C::GetDefaultObj()
{
	static class UShake_Sniper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShake_Sniper_C*>(UShake_Sniper_C::StaticClass()->DefaultObject);

	return Default;
}

}


