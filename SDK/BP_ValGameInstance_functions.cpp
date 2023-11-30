#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValGameInstance.BP_ValGameInstance_C
// (None)

class UClass* UBP_ValGameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValGameInstance_C");

	return Clss;
}


// BP_ValGameInstance_C BP_ValGameInstance.Default__BP_ValGameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ValGameInstance_C* UBP_ValGameInstance_C::GetDefaultObj()
{
	static class UBP_ValGameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ValGameInstance_C*>(UBP_ValGameInstance_C::StaticClass()->DefaultObject);

	return Default;
}

}


