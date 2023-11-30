#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Gun_Sniper_Rifle.GA_Gun_Sniper_Rifle_C
// (None)

class UClass* UGA_Gun_Sniper_Rifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Gun_Sniper_Rifle_C");

	return Clss;
}


// GA_Gun_Sniper_Rifle_C GA_Gun_Sniper_Rifle.Default__GA_Gun_Sniper_Rifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Gun_Sniper_Rifle_C* UGA_Gun_Sniper_Rifle_C::GetDefaultObj()
{
	static class UGA_Gun_Sniper_Rifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Gun_Sniper_Rifle_C*>(UGA_Gun_Sniper_Rifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


