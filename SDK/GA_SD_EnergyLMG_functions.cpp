#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SD_EnergyLMG.GA_SD_EnergyLMG_C
// (None)

class UClass* UGA_SD_EnergyLMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SD_EnergyLMG_C");

	return Clss;
}


// GA_SD_EnergyLMG_C GA_SD_EnergyLMG.Default__GA_SD_EnergyLMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SD_EnergyLMG_C* UGA_SD_EnergyLMG_C::GetDefaultObj()
{
	static class UGA_SD_EnergyLMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SD_EnergyLMG_C*>(UGA_SD_EnergyLMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


