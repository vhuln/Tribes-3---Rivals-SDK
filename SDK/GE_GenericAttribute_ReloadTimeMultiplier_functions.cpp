#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GenericAttribute_ReloadTimeMultiplier.GE_GenericAttribute_ReloadTimeMultiplier_C
// (None)

class UClass* UGE_GenericAttribute_ReloadTimeMultiplier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GenericAttribute_ReloadTimeMultiplier_C");

	return Clss;
}


// GE_GenericAttribute_ReloadTimeMultiplier_C GE_GenericAttribute_ReloadTimeMultiplier.Default__GE_GenericAttribute_ReloadTimeMultiplier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GenericAttribute_ReloadTimeMultiplier_C* UGE_GenericAttribute_ReloadTimeMultiplier_C::GetDefaultObj()
{
	static class UGE_GenericAttribute_ReloadTimeMultiplier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GenericAttribute_ReloadTimeMultiplier_C*>(UGE_GenericAttribute_ReloadTimeMultiplier_C::StaticClass()->DefaultObject);

	return Default;
}

}


