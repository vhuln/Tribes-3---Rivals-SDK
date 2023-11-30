#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PlayerDefaultAttributes.GE_PlayerDefaultAttributes_C
// (None)

class UClass* UGE_PlayerDefaultAttributes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PlayerDefaultAttributes_C");

	return Clss;
}


// GE_PlayerDefaultAttributes_C GE_PlayerDefaultAttributes.Default__GE_PlayerDefaultAttributes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PlayerDefaultAttributes_C* UGE_PlayerDefaultAttributes_C::GetDefaultObj()
{
	static class UGE_PlayerDefaultAttributes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PlayerDefaultAttributes_C*>(UGE_PlayerDefaultAttributes_C::StaticClass()->DefaultObject);

	return Default;
}

}


