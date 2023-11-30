#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SD_TacticalSMG.GA_SD_TacticalSMG_C
// (None)

class UClass* UGA_SD_TacticalSMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SD_TacticalSMG_C");

	return Clss;
}


// GA_SD_TacticalSMG_C GA_SD_TacticalSMG.Default__GA_SD_TacticalSMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SD_TacticalSMG_C* UGA_SD_TacticalSMG_C::GetDefaultObj()
{
	static class UGA_SD_TacticalSMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SD_TacticalSMG_C*>(UGA_SD_TacticalSMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


