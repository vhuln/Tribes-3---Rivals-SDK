#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shake_Shotgun.Shake_Shotgun_C
// (None)

class UClass* UShake_Shotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shake_Shotgun_C");

	return Clss;
}


// Shake_Shotgun_C Shake_Shotgun.Default__Shake_Shotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class UShake_Shotgun_C* UShake_Shotgun_C::GetDefaultObj()
{
	static class UShake_Shotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShake_Shotgun_C*>(UShake_Shotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


