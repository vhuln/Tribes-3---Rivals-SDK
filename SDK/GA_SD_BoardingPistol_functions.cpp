#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SD_BoardingPistol.GA_SD_BoardingPistol_C
// (None)

class UClass* UGA_SD_BoardingPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SD_BoardingPistol_C");

	return Clss;
}


// GA_SD_BoardingPistol_C GA_SD_BoardingPistol.Default__GA_SD_BoardingPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SD_BoardingPistol_C* UGA_SD_BoardingPistol_C::GetDefaultObj()
{
	static class UGA_SD_BoardingPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SD_BoardingPistol_C*>(UGA_SD_BoardingPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


