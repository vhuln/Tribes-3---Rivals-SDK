#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MoveDamageEffect.GE_MoveDamageEffect_C
// (None)

class UClass* UGE_MoveDamageEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MoveDamageEffect_C");

	return Clss;
}


// GE_MoveDamageEffect_C GE_MoveDamageEffect.Default__GE_MoveDamageEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MoveDamageEffect_C* UGE_MoveDamageEffect_C::GetDefaultObj()
{
	static class UGE_MoveDamageEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MoveDamageEffect_C*>(UGE_MoveDamageEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


