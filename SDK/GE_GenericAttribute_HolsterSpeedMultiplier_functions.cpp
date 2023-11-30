#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GenericAttribute_HolsterSpeedMultiplier.GE_GenericAttribute_HolsterSpeedMultiplier_C
// (None)

class UClass* UGE_GenericAttribute_HolsterSpeedMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GenericAttribute_HolsterSpeedMultiplier_C");

	return Clss;
}


// GE_GenericAttribute_HolsterSpeedMultiplier_C GE_GenericAttribute_HolsterSpeedMultiplier.Default__GE_GenericAttribute_HolsterSpeedMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GenericAttribute_HolsterSpeedMultiplier_C* UGE_GenericAttribute_HolsterSpeedMultiplier_C::GetDefaultObj()
{
	static class UGE_GenericAttribute_HolsterSpeedMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GenericAttribute_HolsterSpeedMultiplier_C*>(UGE_GenericAttribute_HolsterSpeedMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


