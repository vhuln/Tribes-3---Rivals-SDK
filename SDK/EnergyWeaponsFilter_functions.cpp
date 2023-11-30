#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnergyWeaponsFilter.EnergyWeaponsFilter_C
// (None)

class UClass* UEnergyWeaponsFilter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnergyWeaponsFilter_C");

	return Clss;
}


// EnergyWeaponsFilter_C EnergyWeaponsFilter.Default__EnergyWeaponsFilter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnergyWeaponsFilter_C* UEnergyWeaponsFilter_C::GetDefaultObj()
{
	static class UEnergyWeaponsFilter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnergyWeaponsFilter_C*>(UEnergyWeaponsFilter_C::StaticClass()->DefaultObject);

	return Default;
}

}


