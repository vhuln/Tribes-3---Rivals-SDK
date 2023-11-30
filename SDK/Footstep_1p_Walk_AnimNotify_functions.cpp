#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Footstep_1p_Walk_AnimNotify.Footstep_1p_Walk_AnimNotify_C
// (None)

class UClass* UFootstep_1p_Walk_AnimNotify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Footstep_1p_Walk_AnimNotify_C");

	return Clss;
}


// Footstep_1p_Walk_AnimNotify_C Footstep_1p_Walk_AnimNotify.Default__Footstep_1p_Walk_AnimNotify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFootstep_1p_Walk_AnimNotify_C* UFootstep_1p_Walk_AnimNotify_C::GetDefaultObj()
{
	static class UFootstep_1p_Walk_AnimNotify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFootstep_1p_Walk_AnimNotify_C*>(UFootstep_1p_Walk_AnimNotify_C::StaticClass()->DefaultObject);

	return Default;
}

}


