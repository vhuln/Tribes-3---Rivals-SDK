#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Silent.GE_Silent_C
// (None)

class UClass* UGE_Silent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Silent_C");

	return Clss;
}


// GE_Silent_C GE_Silent.Default__GE_Silent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Silent_C* UGE_Silent_C::GetDefaultObj()
{
	static class UGE_Silent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Silent_C*>(UGE_Silent_C::StaticClass()->DefaultObject);

	return Default;
}

}


