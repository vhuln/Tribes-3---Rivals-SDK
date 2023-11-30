#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkydiveLandCameraShake.SkydiveLandCameraShake_C
// (None)

class UClass* USkydiveLandCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkydiveLandCameraShake_C");

	return Clss;
}


// SkydiveLandCameraShake_C SkydiveLandCameraShake.Default__SkydiveLandCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkydiveLandCameraShake_C* USkydiveLandCameraShake_C::GetDefaultObj()
{
	static class USkydiveLandCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkydiveLandCameraShake_C*>(USkydiveLandCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


