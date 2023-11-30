#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SpaceBarEffect.GE_SpaceBarEffect_C
// (None)

class UClass* UGE_SpaceBarEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SpaceBarEffect_C");

	return Clss;
}


// GE_SpaceBarEffect_C GE_SpaceBarEffect.Default__GE_SpaceBarEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SpaceBarEffect_C* UGE_SpaceBarEffect_C::GetDefaultObj()
{
	static class UGE_SpaceBarEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SpaceBarEffect_C*>(UGE_SpaceBarEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


