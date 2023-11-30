#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SD_EMP_Rifle.GA_SD_EMP_Rifle_C
// (None)

class UClass* UGA_SD_EMP_Rifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SD_EMP_Rifle_C");

	return Clss;
}


// GA_SD_EMP_Rifle_C GA_SD_EMP_Rifle.Default__GA_SD_EMP_Rifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SD_EMP_Rifle_C* UGA_SD_EMP_Rifle_C::GetDefaultObj()
{
	static class UGA_SD_EMP_Rifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SD_EMP_Rifle_C*>(UGA_SD_EMP_Rifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


