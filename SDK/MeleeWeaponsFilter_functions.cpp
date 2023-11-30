#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MeleeWeaponsFilter.MeleeWeaponsFilter_C
// (None)

class UClass* UMeleeWeaponsFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeleeWeaponsFilter_C");

	return Clss;
}


// MeleeWeaponsFilter_C MeleeWeaponsFilter.Default__MeleeWeaponsFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMeleeWeaponsFilter_C* UMeleeWeaponsFilter_C::GetDefaultObj()
{
	static class UMeleeWeaponsFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMeleeWeaponsFilter_C*>(UMeleeWeaponsFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


