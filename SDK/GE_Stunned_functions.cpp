#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Stunned.GE_Stunned_C
// (None)

class UClass* UGE_Stunned_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Stunned_C");

	return Clss;
}


// GE_Stunned_C GE_Stunned.Default__GE_Stunned_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Stunned_C* UGE_Stunned_C::GetDefaultObj()
{
	static class UGE_Stunned_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Stunned_C*>(UGE_Stunned_C::StaticClass()->DefaultObject);

	return Default;
}

}


