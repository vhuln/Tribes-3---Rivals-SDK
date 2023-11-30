#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Dead.GE_Dead_C
// (None)

class UClass* UGE_Dead_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Dead_C");

	return Clss;
}


// GE_Dead_C GE_Dead.Default__GE_Dead_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Dead_C* UGE_Dead_C::GetDefaultObj()
{
	static class UGE_Dead_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Dead_C*>(UGE_Dead_C::StaticClass()->DefaultObject);

	return Default;
}

}


