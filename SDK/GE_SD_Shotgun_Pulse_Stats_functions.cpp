#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SD_Shotgun_Pulse_Stats.GE_SD_Shotgun_Pulse_Stats_C
// (None)

class UClass* UGE_SD_Shotgun_Pulse_Stats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SD_Shotgun_Pulse_Stats_C");

	return Clss;
}


// GE_SD_Shotgun_Pulse_Stats_C GE_SD_Shotgun_Pulse_Stats.Default__GE_SD_Shotgun_Pulse_Stats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SD_Shotgun_Pulse_Stats_C* UGE_SD_Shotgun_Pulse_Stats_C::GetDefaultObj()
{
	static class UGE_SD_Shotgun_Pulse_Stats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SD_Shotgun_Pulse_Stats_C*>(UGE_SD_Shotgun_Pulse_Stats_C::StaticClass()->DefaultObject);

	return Default;
}

}


