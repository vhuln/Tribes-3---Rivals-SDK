#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GlobalStaggerModifier.GE_GlobalStaggerModifier_C
// (None)

class UClass* UGE_GlobalStaggerModifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GlobalStaggerModifier_C");

	return Clss;
}


// GE_GlobalStaggerModifier_C GE_GlobalStaggerModifier.Default__GE_GlobalStaggerModifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GlobalStaggerModifier_C* UGE_GlobalStaggerModifier_C::GetDefaultObj()
{
	static class UGE_GlobalStaggerModifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GlobalStaggerModifier_C*>(UGE_GlobalStaggerModifier_C::StaticClass()->DefaultObject);

	return Default;
}

}


