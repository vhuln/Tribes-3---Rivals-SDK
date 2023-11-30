#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValLootManager.BP_ValLootManager_C
// (None)

class UClass* UBP_ValLootManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValLootManager_C");

	return Clss;
}


// BP_ValLootManager_C BP_ValLootManager.Default__BP_ValLootManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ValLootManager_C* UBP_ValLootManager_C::GetDefaultObj()
{
	static class UBP_ValLootManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ValLootManager_C*>(UBP_ValLootManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


