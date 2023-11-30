#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AxeHeavyAttackStats.GE_AxeHeavyAttackStats_C
// (None)

class UClass* UGE_AxeHeavyAttackStats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AxeHeavyAttackStats_C");

	return Clss;
}


// GE_AxeHeavyAttackStats_C GE_AxeHeavyAttackStats.Default__GE_AxeHeavyAttackStats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AxeHeavyAttackStats_C* UGE_AxeHeavyAttackStats_C::GetDefaultObj()
{
	static class UGE_AxeHeavyAttackStats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AxeHeavyAttackStats_C*>(UGE_AxeHeavyAttackStats_C::StaticClass()->DefaultObject);

	return Default;
}

}


