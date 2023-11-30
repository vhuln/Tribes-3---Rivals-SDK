#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PostAttack_Missed.GE_PostAttack_Missed_C
// (None)

class UClass* UGE_PostAttack_Missed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PostAttack_Missed_C");

	return Clss;
}


// GE_PostAttack_Missed_C GE_PostAttack_Missed.Default__GE_PostAttack_Missed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PostAttack_Missed_C* UGE_PostAttack_Missed_C::GetDefaultObj()
{
	static class UGE_PostAttack_Missed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PostAttack_Missed_C*>(UGE_PostAttack_Missed_C::StaticClass()->DefaultObject);

	return Default;
}

}


