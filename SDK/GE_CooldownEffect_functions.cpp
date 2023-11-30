#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_CooldownEffect.GE_CooldownEffect_C
// (None)

class UClass* UGE_CooldownEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_CooldownEffect_C");

	return Clss;
}


// GE_CooldownEffect_C GE_CooldownEffect.Default__GE_CooldownEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_CooldownEffect_C* UGE_CooldownEffect_C::GetDefaultObj()
{
	static class UGE_CooldownEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_CooldownEffect_C*>(UGE_CooldownEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


