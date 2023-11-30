#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PassiveHitReactionEffect_Dissector.GE_PassiveHitReactionEffect_Dissector_C
// (None)

class UClass* UGE_PassiveHitReactionEffect_Dissector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PassiveHitReactionEffect_Dissector_C");

	return Clss;
}


// GE_PassiveHitReactionEffect_Dissector_C GE_PassiveHitReactionEffect_Dissector.Default__GE_PassiveHitReactionEffect_Dissector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PassiveHitReactionEffect_Dissector_C* UGE_PassiveHitReactionEffect_Dissector_C::GetDefaultObj()
{
	static class UGE_PassiveHitReactionEffect_Dissector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PassiveHitReactionEffect_Dissector_C*>(UGE_PassiveHitReactionEffect_Dissector_C::StaticClass()->DefaultObject);

	return Default;
}

}


