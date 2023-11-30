#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Gun_Tactical_Assault_Rifle_Instant.GA_Gun_Tactical_Assault_Rifle_Instant_C
// (None)

class UClass* UGA_Gun_Tactical_Assault_Rifle_Instant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Gun_Tactical_Assault_Rifle_Instant_C");

	return Clss;
}


// GA_Gun_Tactical_Assault_Rifle_Instant_C GA_Gun_Tactical_Assault_Rifle_Instant.Default__GA_Gun_Tactical_Assault_Rifle_Instant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Gun_Tactical_Assault_Rifle_Instant_C* UGA_Gun_Tactical_Assault_Rifle_Instant_C::GetDefaultObj()
{
	static class UGA_Gun_Tactical_Assault_Rifle_Instant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Gun_Tactical_Assault_Rifle_Instant_C*>(UGA_Gun_Tactical_Assault_Rifle_Instant_C::StaticClass()->DefaultObject);

	return Default;
}

}


