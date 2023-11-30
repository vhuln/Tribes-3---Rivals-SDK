#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Sprinting.GE_Sprinting_C
// (None)

class UClass* UGE_Sprinting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Sprinting_C");

	return Clss;
}


// GE_Sprinting_C GE_Sprinting.Default__GE_Sprinting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Sprinting_C* UGE_Sprinting_C::GetDefaultObj()
{
	static class UGE_Sprinting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Sprinting_C*>(UGE_Sprinting_C::StaticClass()->DefaultObject);

	return Default;
}

}


