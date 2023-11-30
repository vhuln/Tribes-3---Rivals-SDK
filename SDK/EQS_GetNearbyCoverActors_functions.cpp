#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EQS_GetNearbyCoverActors.EQS_GetNearbyCoverActors_C
// (None)

class UClass* UEQS_GetNearbyCoverActors_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EQS_GetNearbyCoverActors_C");

	return Clss;
}


// EQS_GetNearbyCoverActors_C EQS_GetNearbyCoverActors.Default__EQS_GetNearbyCoverActors_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEQS_GetNearbyCoverActors_C* UEQS_GetNearbyCoverActors_C::GetDefaultObj()
{
	static class UEQS_GetNearbyCoverActors_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEQS_GetNearbyCoverActors_C*>(UEQS_GetNearbyCoverActors_C::StaticClass()->DefaultObject);

	return Default;
}

}


