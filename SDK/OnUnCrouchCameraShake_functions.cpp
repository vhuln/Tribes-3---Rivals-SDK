#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OnUnCrouchCameraShake.OnUnCrouchCameraShake_C
// (None)

class UClass* UOnUnCrouchCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnUnCrouchCameraShake_C");

	return Clss;
}


// OnUnCrouchCameraShake_C OnUnCrouchCameraShake.Default__OnUnCrouchCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOnUnCrouchCameraShake_C* UOnUnCrouchCameraShake_C::GetDefaultObj()
{
	static class UOnUnCrouchCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnUnCrouchCameraShake_C*>(UOnUnCrouchCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


