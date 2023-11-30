#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DissectorChaseIntroEffect.GE_DissectorChaseIntroEffect_C
// (None)

class UClass* UGE_DissectorChaseIntroEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DissectorChaseIntroEffect_C");

	return Clss;
}


// GE_DissectorChaseIntroEffect_C GE_DissectorChaseIntroEffect.Default__GE_DissectorChaseIntroEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DissectorChaseIntroEffect_C* UGE_DissectorChaseIntroEffect_C::GetDefaultObj()
{
	static class UGE_DissectorChaseIntroEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DissectorChaseIntroEffect_C*>(UGE_DissectorChaseIntroEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


