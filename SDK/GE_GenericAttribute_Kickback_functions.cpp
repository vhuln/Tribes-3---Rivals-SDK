#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GenericAttribute_Kickback.GE_GenericAttribute_Kickback_C
// (None)

class UClass* UGE_GenericAttribute_Kickback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GenericAttribute_Kickback_C");

	return Clss;
}


// GE_GenericAttribute_Kickback_C GE_GenericAttribute_Kickback.Default__GE_GenericAttribute_Kickback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GenericAttribute_Kickback_C* UGE_GenericAttribute_Kickback_C::GetDefaultObj()
{
	static class UGE_GenericAttribute_Kickback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GenericAttribute_Kickback_C*>(UGE_GenericAttribute_Kickback_C::StaticClass()->DefaultObject);

	return Default;
}

}


