#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MovementSpeed_300Percent.GE_MovementSpeed_300Percent_C
// (None)

class UClass* UGE_MovementSpeed_300Percent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MovementSpeed_300Percent_C");

	return Clss;
}


// GE_MovementSpeed_300Percent_C GE_MovementSpeed_300Percent.Default__GE_MovementSpeed_300Percent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MovementSpeed_300Percent_C* UGE_MovementSpeed_300Percent_C::GetDefaultObj()
{
	static class UGE_MovementSpeed_300Percent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MovementSpeed_300Percent_C*>(UGE_MovementSpeed_300Percent_C::StaticClass()->DefaultObject);

	return Default;
}

}


