#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TetherEffect.GE_TetherEffect_C
// (None)

class UClass* UGE_TetherEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TetherEffect_C");

	return Clss;
}


// GE_TetherEffect_C GE_TetherEffect.Default__GE_TetherEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TetherEffect_C* UGE_TetherEffect_C::GetDefaultObj()
{
	static class UGE_TetherEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TetherEffect_C*>(UGE_TetherEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


