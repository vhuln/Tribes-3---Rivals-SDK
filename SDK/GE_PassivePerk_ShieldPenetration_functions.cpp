#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PassivePerk_ShieldPenetration.GE_PassivePerk_ShieldPenetration_C
// (None)

class UClass* UGE_PassivePerk_ShieldPenetration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PassivePerk_ShieldPenetration_C");

	return Clss;
}


// GE_PassivePerk_ShieldPenetration_C GE_PassivePerk_ShieldPenetration.Default__GE_PassivePerk_ShieldPenetration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PassivePerk_ShieldPenetration_C* UGE_PassivePerk_ShieldPenetration_C::GetDefaultObj()
{
	static class UGE_PassivePerk_ShieldPenetration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PassivePerk_ShieldPenetration_C*>(UGE_PassivePerk_ShieldPenetration_C::StaticClass()->DefaultObject);

	return Default;
}

}


