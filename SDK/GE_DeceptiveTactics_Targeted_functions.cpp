#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DeceptiveTactics_Targeted.GE_DeceptiveTactics_Targeted_C
// (None)

class UClass* UGE_DeceptiveTactics_Targeted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DeceptiveTactics_Targeted_C");

	return Clss;
}


// GE_DeceptiveTactics_Targeted_C GE_DeceptiveTactics_Targeted.Default__GE_DeceptiveTactics_Targeted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DeceptiveTactics_Targeted_C* UGE_DeceptiveTactics_Targeted_C::GetDefaultObj()
{
	static class UGE_DeceptiveTactics_Targeted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DeceptiveTactics_Targeted_C*>(UGE_DeceptiveTactics_Targeted_C::StaticClass()->DefaultObject);

	return Default;
}

}


