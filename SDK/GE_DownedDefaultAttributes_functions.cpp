#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DownedDefaultAttributes.GE_DownedDefaultAttributes_C
// (None)

class UClass* UGE_DownedDefaultAttributes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DownedDefaultAttributes_C");

	return Clss;
}


// GE_DownedDefaultAttributes_C GE_DownedDefaultAttributes.Default__GE_DownedDefaultAttributes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DownedDefaultAttributes_C* UGE_DownedDefaultAttributes_C::GetDefaultObj()
{
	static class UGE_DownedDefaultAttributes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DownedDefaultAttributes_C*>(UGE_DownedDefaultAttributes_C::StaticClass()->DefaultObject);

	return Default;
}

}


