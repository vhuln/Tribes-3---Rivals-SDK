#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KineticWeaponsFilter.KineticWeaponsFilter_C
// (None)

class UClass* UKineticWeaponsFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KineticWeaponsFilter_C");

	return Clss;
}


// KineticWeaponsFilter_C KineticWeaponsFilter.Default__KineticWeaponsFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKineticWeaponsFilter_C* UKineticWeaponsFilter_C::GetDefaultObj()
{
	static class UKineticWeaponsFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKineticWeaponsFilter_C*>(UKineticWeaponsFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


