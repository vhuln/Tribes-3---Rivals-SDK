#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ShieldRegen.GE_ShieldRegen_C
// (None)

class UClass* UGE_ShieldRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ShieldRegen_C");

	return Clss;
}


// GE_ShieldRegen_C GE_ShieldRegen.Default__GE_ShieldRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ShieldRegen_C* UGE_ShieldRegen_C::GetDefaultObj()
{
	static class UGE_ShieldRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ShieldRegen_C*>(UGE_ShieldRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


