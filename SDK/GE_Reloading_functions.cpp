#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Reloading.GE_Reloading_C
// (None)

class UClass* UGE_Reloading_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Reloading_C");

	return Clss;
}


// GE_Reloading_C GE_Reloading.Default__GE_Reloading_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Reloading_C* UGE_Reloading_C::GetDefaultObj()
{
	static class UGE_Reloading_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Reloading_C*>(UGE_Reloading_C::StaticClass()->DefaultObject);

	return Default;
}

}


