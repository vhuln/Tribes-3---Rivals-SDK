#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Jetpacking.GE_Jetpacking_C
// (None)

class UClass* UGE_Jetpacking_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Jetpacking_C");

	return Clss;
}


// GE_Jetpacking_C GE_Jetpacking.Default__GE_Jetpacking_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Jetpacking_C* UGE_Jetpacking_C::GetDefaultObj()
{
	static class UGE_Jetpacking_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Jetpacking_C*>(UGE_Jetpacking_C::StaticClass()->DefaultObject);

	return Default;
}

}


