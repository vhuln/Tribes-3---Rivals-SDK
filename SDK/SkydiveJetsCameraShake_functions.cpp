#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkydiveJetsCameraShake.SkydiveJetsCameraShake_C
// (None)

class UClass* USkydiveJetsCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkydiveJetsCameraShake_C");

	return Clss;
}


// SkydiveJetsCameraShake_C SkydiveJetsCameraShake.Default__SkydiveJetsCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkydiveJetsCameraShake_C* USkydiveJetsCameraShake_C::GetDefaultObj()
{
	static class USkydiveJetsCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkydiveJetsCameraShake_C*>(USkydiveJetsCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


