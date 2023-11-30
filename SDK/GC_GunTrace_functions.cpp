#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_GunTrace.GC_GunTrace_C
// (None)

class UClass* UGC_GunTrace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_GunTrace_C");

	return Clss;
}


// GC_GunTrace_C GC_GunTrace.Default__GC_GunTrace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_GunTrace_C* UGC_GunTrace_C::GetDefaultObj()
{
	static class UGC_GunTrace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_GunTrace_C*>(UGC_GunTrace_C::StaticClass()->DefaultObject);

	return Default;
}

}


