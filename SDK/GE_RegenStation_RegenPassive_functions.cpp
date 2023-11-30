#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RegenStation_RegenPassive.GE_RegenStation_RegenPassive_C
// (None)

class UClass* UGE_RegenStation_RegenPassive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RegenStation_RegenPassive_C");

	return Clss;
}


// GE_RegenStation_RegenPassive_C GE_RegenStation_RegenPassive.Default__GE_RegenStation_RegenPassive_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class UGE_RegenStation_RegenPassive_C* UGE_RegenStation_RegenPassive_C::GetDefaultObj()
{
	static class UGE_RegenStation_RegenPassive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RegenStation_RegenPassive_C*>(UGE_RegenStation_RegenPassive_C::StaticClass()->DefaultObject);

	return Default;
}

}


