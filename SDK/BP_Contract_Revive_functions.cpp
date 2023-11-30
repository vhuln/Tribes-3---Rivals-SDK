#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Contract_Revive.BP_Contract_Revive_C
// (None)

class UClass* UBP_Contract_Revive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Contract_Revive_C");

	return Clss;
}


// BP_Contract_Revive_C BP_Contract_Revive.Default__BP_Contract_Revive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Contract_Revive_C* UBP_Contract_Revive_C::GetDefaultObj()
{
	static class UBP_Contract_Revive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Contract_Revive_C*>(UBP_Contract_Revive_C::StaticClass()->DefaultObject);

	return Default;
}

}


