#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OnCrouchCameraShake.OnCrouchCameraShake_C
// (None)

class UClass* UOnCrouchCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnCrouchCameraShake_C");

	return Clss;
}


// OnCrouchCameraShake_C OnCrouchCameraShake.Default__OnCrouchCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOnCrouchCameraShake_C* UOnCrouchCameraShake_C::GetDefaultObj()
{
	static class UOnCrouchCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnCrouchCameraShake_C*>(UOnCrouchCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


