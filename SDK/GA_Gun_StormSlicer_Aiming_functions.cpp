#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Gun_StormSlicer_Aiming.GA_Gun_StormSlicer_Aiming_C
// (None)

class UClass* UGA_Gun_StormSlicer_Aiming_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Gun_StormSlicer_Aiming_C");

	return Clss;
}


// GA_Gun_StormSlicer_Aiming_C GA_Gun_StormSlicer_Aiming.Default__GA_Gun_StormSlicer_Aiming_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Gun_StormSlicer_Aiming_C* UGA_Gun_StormSlicer_Aiming_C::GetDefaultObj()
{
	static class UGA_Gun_StormSlicer_Aiming_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Gun_StormSlicer_Aiming_C*>(UGA_Gun_StormSlicer_Aiming_C::StaticClass()->DefaultObject);

	return Default;
}

}


