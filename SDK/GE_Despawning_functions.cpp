#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Despawning.GE_Despawning_C
// (None)

class UClass* UGE_Despawning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Despawning_C");

	return Clss;
}


// GE_Despawning_C GE_Despawning.Default__GE_Despawning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Despawning_C* UGE_Despawning_C::GetDefaultObj()
{
	static class UGE_Despawning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Despawning_C*>(UGE_Despawning_C::StaticClass()->DefaultObject);

	return Default;
}

}


