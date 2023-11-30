#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Contract_InterruptExtraction.BP_Contract_InterruptExtraction_C
// (None)

class UClass* UBP_Contract_InterruptExtraction_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Contract_InterruptExtraction_C");

	return Clss;
}


// BP_Contract_InterruptExtraction_C BP_Contract_InterruptExtraction.Default__BP_Contract_InterruptExtraction_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Contract_InterruptExtraction_C* UBP_Contract_InterruptExtraction_C::GetDefaultObj()
{
	static class UBP_Contract_InterruptExtraction_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Contract_InterruptExtraction_C*>(UBP_Contract_InterruptExtraction_C::StaticClass()->DefaultObject);

	return Default;
}

}


