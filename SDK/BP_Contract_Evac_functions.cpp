#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Contract_Evac.BP_Contract_Evac_C
// (None)

class UClass* UBP_Contract_Evac_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Contract_Evac_C");

	return Clss;
}


// BP_Contract_Evac_C BP_Contract_Evac.Default__BP_Contract_Evac_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Contract_Evac_C* UBP_Contract_Evac_C::GetDefaultObj()
{
	static class UBP_Contract_Evac_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Contract_Evac_C*>(UBP_Contract_Evac_C::StaticClass()->DefaultObject);

	return Default;
}

}


