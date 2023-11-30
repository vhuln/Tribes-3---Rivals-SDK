#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TrapAvoided.GE_TrapAvoided_C
// (None)

class UClass* UGE_TrapAvoided_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TrapAvoided_C");

	return Clss;
}


// GE_TrapAvoided_C GE_TrapAvoided.Default__GE_TrapAvoided_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TrapAvoided_C* UGE_TrapAvoided_C::GetDefaultObj()
{
	static class UGE_TrapAvoided_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TrapAvoided_C*>(UGE_TrapAvoided_C::StaticClass()->DefaultObject);

	return Default;
}

}


