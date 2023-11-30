#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LandingCameraShake_Anim.LandingCameraShake_Anim_C
// (None)

class UClass* ULandingCameraShake_Anim_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LandingCameraShake_Anim_C");

	return Clss;
}


// LandingCameraShake_Anim_C LandingCameraShake_Anim.Default__LandingCameraShake_Anim_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULandingCameraShake_Anim_C* ULandingCameraShake_Anim_C::GetDefaultObj()
{
	static class ULandingCameraShake_Anim_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULandingCameraShake_Anim_C*>(ULandingCameraShake_Anim_C::StaticClass()->DefaultObject);

	return Default;
}

}


