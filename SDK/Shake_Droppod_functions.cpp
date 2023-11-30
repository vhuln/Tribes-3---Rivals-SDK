#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shake_Droppod.Shake_Droppod_C
// (None)

class UClass* UShake_Droppod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shake_Droppod_C");

	return Clss;
}


// Shake_Droppod_C Shake_Droppod.Default__Shake_Droppod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShake_Droppod_C* UShake_Droppod_C::GetDefaultObj()
{
	static class UShake_Droppod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShake_Droppod_C*>(UShake_Droppod_C::StaticClass()->DefaultObject);

	return Default;
}

}


