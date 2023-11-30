#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SD_Pistol.GA_SD_Pistol_C
// (None)

class UClass* UGA_SD_Pistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SD_Pistol_C");

	return Clss;
}


// GA_SD_Pistol_C GA_SD_Pistol.Default__GA_SD_Pistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SD_Pistol_C* UGA_SD_Pistol_C::GetDefaultObj()
{
	static class UGA_SD_Pistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SD_Pistol_C*>(UGA_SD_Pistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


