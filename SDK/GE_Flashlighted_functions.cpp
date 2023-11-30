#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Flashlighted.GE_Flashlighted_C
// (None)

class UClass* UGE_Flashlighted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Flashlighted_C");

	return Clss;
}


// GE_Flashlighted_C GE_Flashlighted.Default__GE_Flashlighted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Flashlighted_C* UGE_Flashlighted_C::GetDefaultObj()
{
	static class UGE_Flashlighted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Flashlighted_C*>(UGE_Flashlighted_C::StaticClass()->DefaultObject);

	return Default;
}

}


