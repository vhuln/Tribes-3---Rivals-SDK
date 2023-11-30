#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RegenStation_MKII.GE_RegenStation_MKII_C
// (None)

class UClass* UGE_RegenStation_MKII_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RegenStation_MKII_C");

	return Clss;
}


// GE_RegenStation_MKII_C GE_RegenStation_MKII.Default__GE_RegenStation_MKII_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RegenStation_MKII_C* UGE_RegenStation_MKII_C::GetDefaultObj()
{
	static class UGE_RegenStation_MKII_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RegenStation_MKII_C*>(UGE_RegenStation_MKII_C::StaticClass()->DefaultObject);

	return Default;
}

}


