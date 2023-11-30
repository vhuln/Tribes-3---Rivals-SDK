#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Interacting.GE_Interacting_C
// (None)

class UClass* UGE_Interacting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Interacting_C");

	return Clss;
}


// GE_Interacting_C GE_Interacting.Default__GE_Interacting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Interacting_C* UGE_Interacting_C::GetDefaultObj()
{
	static class UGE_Interacting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Interacting_C*>(UGE_Interacting_C::StaticClass()->DefaultObject);

	return Default;
}

}


