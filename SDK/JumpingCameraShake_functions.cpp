#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass JumpingCameraShake.JumpingCameraShake_C
// (None)

class UClass* UJumpingCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JumpingCameraShake_C");

	return Clss;
}


// JumpingCameraShake_C JumpingCameraShake.Default__JumpingCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJumpingCameraShake_C* UJumpingCameraShake_C::GetDefaultObj()
{
	static class UJumpingCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJumpingCameraShake_C*>(UJumpingCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


