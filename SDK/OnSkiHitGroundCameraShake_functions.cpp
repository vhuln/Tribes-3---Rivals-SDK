#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OnSkiHitGroundCameraShake.OnSkiHitGroundCameraShake_C
// (None)

class UClass* UOnSkiHitGroundCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnSkiHitGroundCameraShake_C");

	return Clss;
}


// OnSkiHitGroundCameraShake_C OnSkiHitGroundCameraShake.Default__OnSkiHitGroundCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOnSkiHitGroundCameraShake_C* UOnSkiHitGroundCameraShake_C::GetDefaultObj()
{
	static class UOnSkiHitGroundCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnSkiHitGroundCameraShake_C*>(UOnSkiHitGroundCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


