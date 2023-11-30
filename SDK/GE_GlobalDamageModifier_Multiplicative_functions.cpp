#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GlobalDamageModifier_Multiplicative.GE_GlobalDamageModifier_Multiplicative_C
// (None)

class UClass* UGE_GlobalDamageModifier_Multiplicative_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GlobalDamageModifier_Multiplicative_C");

	return Clss;
}


// GE_GlobalDamageModifier_Multiplicative_C GE_GlobalDamageModifier_Multiplicative.Default__GE_GlobalDamageModifier_Multiplicative_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GlobalDamageModifier_Multiplicative_C* UGE_GlobalDamageModifier_Multiplicative_C::GetDefaultObj()
{
	static class UGE_GlobalDamageModifier_Multiplicative_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GlobalDamageModifier_Multiplicative_C*>(UGE_GlobalDamageModifier_Multiplicative_C::StaticClass()->DefaultObject);

	return Default;
}

}


