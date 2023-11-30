#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ExplosionMedium_CameraShake.ExplosionMedium_CameraShake_C
// (None)

class UClass* UExplosionMedium_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExplosionMedium_CameraShake_C");

	return Clss;
}


// ExplosionMedium_CameraShake_C ExplosionMedium_CameraShake.Default__ExplosionMedium_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UExplosionMedium_CameraShake_C* UExplosionMedium_CameraShake_C::GetDefaultObj()
{
	static class UExplosionMedium_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UExplosionMedium_CameraShake_C*>(UExplosionMedium_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


