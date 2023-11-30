#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shake_Frag_Grenade.Shake_Frag_Grenade_C
// (None)

class UClass* UShake_Frag_Grenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shake_Frag_Grenade_C");

	return Clss;
}


// Shake_Frag_Grenade_C Shake_Frag_Grenade.Default__Shake_Frag_Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShake_Frag_Grenade_C* UShake_Frag_Grenade_C::GetDefaultObj()
{
	static class UShake_Frag_Grenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShake_Frag_Grenade_C*>(UShake_Frag_Grenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


