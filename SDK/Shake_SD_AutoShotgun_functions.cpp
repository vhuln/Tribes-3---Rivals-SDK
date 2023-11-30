#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shake_SD_AutoShotgun.Shake_SD_AutoShotgun_C
// (None)

class UClass* UShake_SD_AutoShotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shake_SD_AutoShotgun_C");

	return Clss;
}


// Shake_SD_AutoShotgun_C Shake_SD_AutoShotgun.Default__Shake_SD_AutoShotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShake_SD_AutoShotgun_C* UShake_SD_AutoShotgun_C::GetDefaultObj()
{
	static class UShake_SD_AutoShotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShake_SD_AutoShotgun_C*>(UShake_SD_AutoShotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


