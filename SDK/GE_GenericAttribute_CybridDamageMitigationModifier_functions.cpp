#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GenericAttribute_CybridDamageMitigationModifier.GE_GenericAttribute_CybridDamageMitigationModifier_C
// (None)

class UClass* UGE_GenericAttribute_CybridDamageMitigationModifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GenericAttribute_CybridDamageMitigationModifier_C");

	return Clss;
}


// GE_GenericAttribute_CybridDamageMitigationModifier_C GE_GenericAttribute_CybridDamageMitigationModifier.Default__GE_GenericAttribute_CybridDamageMitigationModifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GenericAttribute_CybridDamageMitigationModifier_C* UGE_GenericAttribute_CybridDamageMitigationModifier_C::GetDefaultObj()
{
	static class UGE_GenericAttribute_CybridDamageMitigationModifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GenericAttribute_CybridDamageMitigationModifier_C*>(UGE_GenericAttribute_CybridDamageMitigationModifier_C::StaticClass()->DefaultObject);

	return Default;
}

}


