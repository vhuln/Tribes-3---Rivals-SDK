#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Gun_Pistol_Hand_Cannon.GA_Gun_Pistol_Hand_Cannon_C
// (None)

class UClass* UGA_Gun_Pistol_Hand_Cannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Gun_Pistol_Hand_Cannon_C");

	return Clss;
}


// GA_Gun_Pistol_Hand_Cannon_C GA_Gun_Pistol_Hand_Cannon.Default__GA_Gun_Pistol_Hand_Cannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Gun_Pistol_Hand_Cannon_C* UGA_Gun_Pistol_Hand_Cannon_C::GetDefaultObj()
{
	static class UGA_Gun_Pistol_Hand_Cannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Gun_Pistol_Hand_Cannon_C*>(UGA_Gun_Pistol_Hand_Cannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


