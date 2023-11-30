#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shake_Bow.Shake_Bow_C
// (None)

class UClass* UShake_Bow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shake_Bow_C");

	return Clss;
}


// Shake_Bow_C Shake_Bow.Default__Shake_Bow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShake_Bow_C* UShake_Bow_C::GetDefaultObj()
{
	static class UShake_Bow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShake_Bow_C*>(UShake_Bow_C::StaticClass()->DefaultObject);

	return Default;
}

}


