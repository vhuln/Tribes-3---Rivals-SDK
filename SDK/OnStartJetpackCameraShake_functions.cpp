#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OnStartJetpackCameraShake.OnStartJetpackCameraShake_C
// (None)

class UClass* UOnStartJetpackCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OnStartJetpackCameraShake_C");

	return Clss;
}


// OnStartJetpackCameraShake_C OnStartJetpackCameraShake.Default__OnStartJetpackCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOnStartJetpackCameraShake_C* UOnStartJetpackCameraShake_C::GetDefaultObj()
{
	static class UOnStartJetpackCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnStartJetpackCameraShake_C*>(UOnStartJetpackCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


