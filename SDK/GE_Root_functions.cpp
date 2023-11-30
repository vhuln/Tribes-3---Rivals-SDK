#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Root.GE_Root_C
// (None)

class UClass* UGE_Root_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Root_C");

	return Clss;
}


// GE_Root_C GE_Root.Default__GE_Root_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Root_C* UGE_Root_C::GetDefaultObj()
{
	static class UGE_Root_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Root_C*>(UGE_Root_C::StaticClass()->DefaultObject);

	return Default;
}

}


