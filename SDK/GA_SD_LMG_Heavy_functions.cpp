#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SD_LMG_Heavy.GA_SD_LMG_Heavy_C
// (None)

class UClass* UGA_SD_LMG_Heavy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SD_LMG_Heavy_C");

	return Clss;
}


// GA_SD_LMG_Heavy_C GA_SD_LMG_Heavy.Default__GA_SD_LMG_Heavy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SD_LMG_Heavy_C* UGA_SD_LMG_Heavy_C::GetDefaultObj()
{
	static class UGA_SD_LMG_Heavy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SD_LMG_Heavy_C*>(UGA_SD_LMG_Heavy_C::StaticClass()->DefaultObject);

	return Default;
}

}


