#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SD_Shotgun_Double.GA_SD_Shotgun_Double_C
// (None)

class UClass* UGA_SD_Shotgun_Double_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SD_Shotgun_Double_C");

	return Clss;
}


// GA_SD_Shotgun_Double_C GA_SD_Shotgun_Double.Default__GA_SD_Shotgun_Double_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SD_Shotgun_Double_C* UGA_SD_Shotgun_Double_C::GetDefaultObj()
{
	static class UGA_SD_Shotgun_Double_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SD_Shotgun_Double_C*>(UGA_SD_Shotgun_Double_C::StaticClass()->DefaultObject);

	return Default;
}

}


