#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Gun_Assault_Rifle_NoSpread.GA_Gun_Assault_Rifle_NoSpread_C
// (None)

class UClass* UGA_Gun_Assault_Rifle_NoSpread_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Gun_Assault_Rifle_NoSpread_C");

	return Clss;
}


// GA_Gun_Assault_Rifle_NoSpread_C GA_Gun_Assault_Rifle_NoSpread.Default__GA_Gun_Assault_Rifle_NoSpread_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Gun_Assault_Rifle_NoSpread_C* UGA_Gun_Assault_Rifle_NoSpread_C::GetDefaultObj()
{
	static class UGA_Gun_Assault_Rifle_NoSpread_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Gun_Assault_Rifle_NoSpread_C*>(UGA_Gun_Assault_Rifle_NoSpread_C::StaticClass()->DefaultObject);

	return Default;
}

}


