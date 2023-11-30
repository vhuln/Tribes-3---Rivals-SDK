#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TempShield.GE_TempShield_C
// (None)

class UClass* UGE_TempShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TempShield_C");

	return Clss;
}


// GE_TempShield_C GE_TempShield.Default__GE_TempShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TempShield_C* UGE_TempShield_C::GetDefaultObj()
{
	static class UGE_TempShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TempShield_C*>(UGE_TempShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


