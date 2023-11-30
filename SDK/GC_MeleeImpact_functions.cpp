#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_MeleeImpact.GC_MeleeImpact_C
// (None)

class UClass* UGC_MeleeImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_MeleeImpact_C");

	return Clss;
}


// GC_MeleeImpact_C GC_MeleeImpact.Default__GC_MeleeImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_MeleeImpact_C* UGC_MeleeImpact_C::GetDefaultObj()
{
	static class UGC_MeleeImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_MeleeImpact_C*>(UGC_MeleeImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


