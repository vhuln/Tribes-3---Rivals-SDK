#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PostAttack.GE_PostAttack_C
// (None)

class UClass* UGE_PostAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PostAttack_C");

	return Clss;
}


// GE_PostAttack_C GE_PostAttack.Default__GE_PostAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PostAttack_C* UGE_PostAttack_C::GetDefaultObj()
{
	static class UGE_PostAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PostAttack_C*>(UGE_PostAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


