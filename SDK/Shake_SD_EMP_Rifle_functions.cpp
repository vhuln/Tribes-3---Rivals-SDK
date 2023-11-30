#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shake_SD_EMP_Rifle.Shake_SD_EMP_Rifle_C
// (None)

class UClass* UShake_SD_EMP_Rifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shake_SD_EMP_Rifle_C");

	return Clss;
}


// Shake_SD_EMP_Rifle_C Shake_SD_EMP_Rifle.Default__Shake_SD_EMP_Rifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShake_SD_EMP_Rifle_C* UShake_SD_EMP_Rifle_C::GetDefaultObj()
{
	static class UShake_SD_EMP_Rifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShake_SD_EMP_Rifle_C*>(UShake_SD_EMP_Rifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


