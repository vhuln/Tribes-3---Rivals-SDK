#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MedicClassComponent.BP_MedicClassComponent_C
// (None)

class UClass* UBP_MedicClassComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MedicClassComponent_C");

	return Clss;
}


// BP_MedicClassComponent_C BP_MedicClassComponent.Default__BP_MedicClassComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MedicClassComponent_C* UBP_MedicClassComponent_C::GetDefaultObj()
{
	static class UBP_MedicClassComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MedicClassComponent_C*>(UBP_MedicClassComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


