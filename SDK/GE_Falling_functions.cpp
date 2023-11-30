#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Falling.GE_Falling_C
// (None)

class UClass* UGE_Falling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Falling_C");

	return Clss;
}


// GE_Falling_C GE_Falling.Default__GE_Falling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Falling_C* UGE_Falling_C::GetDefaultObj()
{
	static class UGE_Falling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Falling_C*>(UGE_Falling_C::StaticClass()->DefaultObject);

	return Default;
}

}


