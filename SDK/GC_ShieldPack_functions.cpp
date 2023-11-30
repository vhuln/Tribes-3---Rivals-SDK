#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_ShieldPack.GC_ShieldPack_C
// (Actor)

class UClass* AGC_ShieldPack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_ShieldPack_C");

	return Clss;
}


// GC_ShieldPack_C GC_ShieldPack.Default__GC_ShieldPack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_ShieldPack_C* AGC_ShieldPack_C::GetDefaultObj()
{
	static class AGC_ShieldPack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_ShieldPack_C*>(AGC_ShieldPack_C::StaticClass()->DefaultObject);

	return Default;
}

}


