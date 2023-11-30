#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SD_HandCannon.GA_SD_HandCannon_C
// (None)

class UClass* UGA_SD_HandCannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SD_HandCannon_C");

	return Clss;
}


// GA_SD_HandCannon_C GA_SD_HandCannon.Default__GA_SD_HandCannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SD_HandCannon_C* UGA_SD_HandCannon_C::GetDefaultObj()
{
	static class UGA_SD_HandCannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SD_HandCannon_C*>(UGA_SD_HandCannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


