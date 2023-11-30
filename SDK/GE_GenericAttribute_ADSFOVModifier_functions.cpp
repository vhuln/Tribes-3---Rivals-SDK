#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GenericAttribute_ADSFOVModifier.GE_GenericAttribute_ADSFOVModifier_C
// (None)

class UClass* UGE_GenericAttribute_ADSFOVModifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GenericAttribute_ADSFOVModifier_C");

	return Clss;
}


// GE_GenericAttribute_ADSFOVModifier_C GE_GenericAttribute_ADSFOVModifier.Default__GE_GenericAttribute_ADSFOVModifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GenericAttribute_ADSFOVModifier_C* UGE_GenericAttribute_ADSFOVModifier_C::GetDefaultObj()
{
	static class UGE_GenericAttribute_ADSFOVModifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GenericAttribute_ADSFOVModifier_C*>(UGE_GenericAttribute_ADSFOVModifier_C::StaticClass()->DefaultObject);

	return Default;
}

}


