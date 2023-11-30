#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RegenStation_RegenStack.GE_RegenStation_RegenStack_C
// (None)

class UClass* UGE_RegenStation_RegenStack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RegenStation_RegenStack_C");

	return Clss;
}


// GE_RegenStation_RegenStack_C GE_RegenStation_RegenStack.Default__GE_RegenStation_RegenStack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RegenStation_RegenStack_C* UGE_RegenStation_RegenStack_C::GetDefaultObj()
{
	static class UGE_RegenStation_RegenStack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RegenStation_RegenStack_C*>(UGE_RegenStation_RegenStack_C::StaticClass()->DefaultObject);

	return Default;
}

}


