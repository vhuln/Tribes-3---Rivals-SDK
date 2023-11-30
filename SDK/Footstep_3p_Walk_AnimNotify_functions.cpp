#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Footstep_3p_Walk_AnimNotify.Footstep_3p_Walk_AnimNotify_C
// (None)

class UClass* UFootstep_3p_Walk_AnimNotify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Footstep_3p_Walk_AnimNotify_C");

	return Clss;
}


// Footstep_3p_Walk_AnimNotify_C Footstep_3p_Walk_AnimNotify.Default__Footstep_3p_Walk_AnimNotify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFootstep_3p_Walk_AnimNotify_C* UFootstep_3p_Walk_AnimNotify_C::GetDefaultObj()
{
	static class UFootstep_3p_Walk_AnimNotify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFootstep_3p_Walk_AnimNotify_C*>(UFootstep_3p_Walk_AnimNotify_C::StaticClass()->DefaultObject);

	return Default;
}

}


