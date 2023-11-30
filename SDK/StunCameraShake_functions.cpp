#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StunCameraShake.StunCameraShake_C
// (None)

class UClass* UStunCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StunCameraShake_C");

	return Clss;
}


// StunCameraShake_C StunCameraShake.Default__StunCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStunCameraShake_C* UStunCameraShake_C::GetDefaultObj()
{
	static class UStunCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStunCameraShake_C*>(UStunCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


