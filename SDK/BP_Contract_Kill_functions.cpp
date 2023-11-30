#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Contract_Kill.BP_Contract_Kill_C
// (None)

class UClass* UBP_Contract_Kill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Contract_Kill_C");

	return Clss;
}


// BP_Contract_Kill_C BP_Contract_Kill.Default__BP_Contract_Kill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Contract_Kill_C* UBP_Contract_Kill_C::GetDefaultObj()
{
	static class UBP_Contract_Kill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Contract_Kill_C*>(UBP_Contract_Kill_C::StaticClass()->DefaultObject);

	return Default;
}

}


