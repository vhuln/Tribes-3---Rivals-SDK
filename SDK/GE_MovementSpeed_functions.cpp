#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MovementSpeed.GE_MovementSpeed_C
// (None)

class UClass* UGE_MovementSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MovementSpeed_C");

	return Clss;
}


// GE_MovementSpeed_C GE_MovementSpeed.Default__GE_MovementSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MovementSpeed_C* UGE_MovementSpeed_C::GetDefaultObj()
{
	static class UGE_MovementSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MovementSpeed_C*>(UGE_MovementSpeed_C::StaticClass()->DefaultObject);

	return Default;
}

}


