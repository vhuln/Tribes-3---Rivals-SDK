#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Stealth_Temporary.GE_Stealth_Temporary_C
// (None)

class UClass* UGE_Stealth_Temporary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Stealth_Temporary_C");

	return Clss;
}


// GE_Stealth_Temporary_C GE_Stealth_Temporary.Default__GE_Stealth_Temporary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Stealth_Temporary_C* UGE_Stealth_Temporary_C::GetDefaultObj()
{
	static class UGE_Stealth_Temporary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Stealth_Temporary_C*>(UGE_Stealth_Temporary_C::StaticClass()->DefaultObject);

	return Default;
}

}


