#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShakePistol.ShakePistol_C
// (None)

class UClass* UShakePistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShakePistol_C");

	return Clss;
}


// ShakePistol_C ShakePistol.Default__ShakePistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShakePistol_C* UShakePistol_C::GetDefaultObj()
{
	static class UShakePistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShakePistol_C*>(UShakePistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


