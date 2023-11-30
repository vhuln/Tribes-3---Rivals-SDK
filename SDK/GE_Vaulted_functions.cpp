#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Vaulted.GE_Vaulted_C
// (None)

class UClass* UGE_Vaulted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Vaulted_C");

	return Clss;
}


// GE_Vaulted_C GE_Vaulted.Default__GE_Vaulted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Vaulted_C* UGE_Vaulted_C::GetDefaultObj()
{
	static class UGE_Vaulted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Vaulted_C*>(UGE_Vaulted_C::StaticClass()->DefaultObject);

	return Default;
}

}


