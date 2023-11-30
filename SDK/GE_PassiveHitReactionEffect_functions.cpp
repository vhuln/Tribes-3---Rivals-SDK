#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PassiveHitReactionEffect.GE_PassiveHitReactionEffect_C
// (None)

class UClass* UGE_PassiveHitReactionEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PassiveHitReactionEffect_C");

	return Clss;
}


// GE_PassiveHitReactionEffect_C GE_PassiveHitReactionEffect.Default__GE_PassiveHitReactionEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PassiveHitReactionEffect_C* UGE_PassiveHitReactionEffect_C::GetDefaultObj()
{
	static class UGE_PassiveHitReactionEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PassiveHitReactionEffect_C*>(UGE_PassiveHitReactionEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


