#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Gun_Shotgun.GA_Gun_Shotgun_C
// (None)

class UClass* UGA_Gun_Shotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Gun_Shotgun_C");

	return Clss;
}


// GA_Gun_Shotgun_C GA_Gun_Shotgun.Default__GA_Gun_Shotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Gun_Shotgun_C* UGA_Gun_Shotgun_C::GetDefaultObj()
{
	static class UGA_Gun_Shotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Gun_Shotgun_C*>(UGA_Gun_Shotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


