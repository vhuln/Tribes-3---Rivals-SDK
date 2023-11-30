#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Flashlight.GE_Flashlight_C
// (None)

class UClass* UGE_Flashlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Flashlight_C");

	return Clss;
}


// GE_Flashlight_C GE_Flashlight.Default__GE_Flashlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Flashlight_C* UGE_Flashlight_C::GetDefaultObj()
{
	static class UGE_Flashlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Flashlight_C*>(UGE_Flashlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


