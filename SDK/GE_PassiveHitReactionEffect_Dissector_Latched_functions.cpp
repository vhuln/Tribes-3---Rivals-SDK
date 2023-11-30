#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PassiveHitReactionEffect_Dissector_Latched.GE_PassiveHitReactionEffect_Dissector_Latched_C
// (None)

class UClass* UGE_PassiveHitReactionEffect_Dissector_Latched_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PassiveHitReactionEffect_Dissector_Latched_C");

	return Clss;
}


// GE_PassiveHitReactionEffect_Dissector_Latched_C GE_PassiveHitReactionEffect_Dissector_Latched.Default__GE_PassiveHitReactionEffect_Dissector_Latched_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PassiveHitReactionEffect_Dissector_Latched_C* UGE_PassiveHitReactionEffect_Dissector_Latched_C::GetDefaultObj()
{
	static class UGE_PassiveHitReactionEffect_Dissector_Latched_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PassiveHitReactionEffect_Dissector_Latched_C*>(UGE_PassiveHitReactionEffect_Dissector_Latched_C::StaticClass()->DefaultObject);

	return Default;
}

}


