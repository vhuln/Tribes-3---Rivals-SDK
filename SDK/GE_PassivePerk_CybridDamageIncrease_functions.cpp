#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PassivePerk_CybridDamageIncrease.GE_PassivePerk_CybridDamageIncrease_C
// (None)

class UClass* UGE_PassivePerk_CybridDamageIncrease_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PassivePerk_CybridDamageIncrease_C");

	return Clss;
}


// GE_PassivePerk_CybridDamageIncrease_C GE_PassivePerk_CybridDamageIncrease.Default__GE_PassivePerk_CybridDamageIncrease_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PassivePerk_CybridDamageIncrease_C* UGE_PassivePerk_CybridDamageIncrease_C::GetDefaultObj()
{
	static class UGE_PassivePerk_CybridDamageIncrease_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PassivePerk_CybridDamageIncrease_C*>(UGE_PassivePerk_CybridDamageIncrease_C::StaticClass()->DefaultObject);

	return Default;
}

}


