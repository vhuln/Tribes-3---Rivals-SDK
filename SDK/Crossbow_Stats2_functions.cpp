#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Crossbow_Stats2.Crossbow_Stats2_C
// (None)

class UClass* UCrossbow_Stats2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crossbow_Stats2_C");

	return Clss;
}


// Crossbow_Stats2_C Crossbow_Stats2.Default__Crossbow_Stats2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrossbow_Stats2_C* UCrossbow_Stats2_C::GetDefaultObj()
{
	static class UCrossbow_Stats2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrossbow_Stats2_C*>(UCrossbow_Stats2_C::StaticClass()->DefaultObject);

	return Default;
}

}


