#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_QuickMeleeing.GE_QuickMeleeing_C
// (None)

class UClass* UGE_QuickMeleeing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_QuickMeleeing_C");

	return Clss;
}


// GE_QuickMeleeing_C GE_QuickMeleeing.Default__GE_QuickMeleeing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_QuickMeleeing_C* UGE_QuickMeleeing_C::GetDefaultObj()
{
	static class UGE_QuickMeleeing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_QuickMeleeing_C*>(UGE_QuickMeleeing_C::StaticClass()->DefaultObject);

	return Default;
}

}


