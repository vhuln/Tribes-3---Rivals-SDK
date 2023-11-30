#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Skiing.GE_Skiing_C
// (None)

class UClass* UGE_Skiing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Skiing_C");

	return Clss;
}


// GE_Skiing_C GE_Skiing.Default__GE_Skiing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Skiing_C* UGE_Skiing_C::GetDefaultObj()
{
	static class UGE_Skiing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Skiing_C*>(UGE_Skiing_C::StaticClass()->DefaultObject);

	return Default;
}

}


