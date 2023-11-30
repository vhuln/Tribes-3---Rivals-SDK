#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SD_SilencedPistol_Instant.GA_SD_SilencedPistol_Instant_C
// (None)

class UClass* UGA_SD_SilencedPistol_Instant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SD_SilencedPistol_Instant_C");

	return Clss;
}


// GA_SD_SilencedPistol_Instant_C GA_SD_SilencedPistol_Instant.Default__GA_SD_SilencedPistol_Instant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SD_SilencedPistol_Instant_C* UGA_SD_SilencedPistol_Instant_C::GetDefaultObj()
{
	static class UGA_SD_SilencedPistol_Instant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SD_SilencedPistol_Instant_C*>(UGA_SD_SilencedPistol_Instant_C::StaticClass()->DefaultObject);

	return Default;
}

}


