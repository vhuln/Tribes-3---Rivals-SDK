#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AR_Exotic_StackExplode_Stack.GE_AR_Exotic_StackExplode_Stack_C
// (None)

class UClass* UGE_AR_Exotic_StackExplode_Stack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AR_Exotic_StackExplode_Stack_C");

	return Clss;
}


// GE_AR_Exotic_StackExplode_Stack_C GE_AR_Exotic_StackExplode_Stack.Default__GE_AR_Exotic_StackExplode_Stack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AR_Exotic_StackExplode_Stack_C* UGE_AR_Exotic_StackExplode_Stack_C::GetDefaultObj()
{
	static class UGE_AR_Exotic_StackExplode_Stack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AR_Exotic_StackExplode_Stack_C*>(UGE_AR_Exotic_StackExplode_Stack_C::StaticClass()->DefaultObject);

	return Default;
}

}


