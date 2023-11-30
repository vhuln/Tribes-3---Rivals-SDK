#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Browsing.GE_Browsing_C
// (None)

class UClass* UGE_Browsing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Browsing_C");

	return Clss;
}


// GE_Browsing_C GE_Browsing.Default__GE_Browsing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Browsing_C* UGE_Browsing_C::GetDefaultObj()
{
	static class UGE_Browsing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Browsing_C*>(UGE_Browsing_C::StaticClass()->DefaultObject);

	return Default;
}

}


