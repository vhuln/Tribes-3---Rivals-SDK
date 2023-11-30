#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shake_Shotgun_SemiAuto.Shake_Shotgun_SemiAuto_C
// (None)

class UClass* UShake_Shotgun_SemiAuto_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shake_Shotgun_SemiAuto_C");

	return Clss;
}


// Shake_Shotgun_SemiAuto_C Shake_Shotgun_SemiAuto.Default__Shake_Shotgun_SemiAuto_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class UShake_Shotgun_SemiAuto_C* UShake_Shotgun_SemiAuto_C::GetDefaultObj()
{
	static class UShake_Shotgun_SemiAuto_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShake_Shotgun_SemiAuto_C*>(UShake_Shotgun_SemiAuto_C::StaticClass()->DefaultObject);

	return Default;
}

}


