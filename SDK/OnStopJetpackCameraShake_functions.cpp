#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OnStopJetpackCameraShake.OnStopJetpackCameraShake_C
// (None)

class UClass* UOnStopJetpackCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnStopJetpackCameraShake_C");

	return Clss;
}


// OnStopJetpackCameraShake_C OnStopJetpackCameraShake.Default__OnStopJetpackCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOnStopJetpackCameraShake_C* UOnStopJetpackCameraShake_C::GetDefaultObj()
{
	static class UOnStopJetpackCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnStopJetpackCameraShake_C*>(UOnStopJetpackCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


