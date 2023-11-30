#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DissectorLatch.GE_DissectorLatch_C
// (None)

class UClass* UGE_DissectorLatch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DissectorLatch_C");

	return Clss;
}


// GE_DissectorLatch_C GE_DissectorLatch.Default__GE_DissectorLatch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DissectorLatch_C* UGE_DissectorLatch_C::GetDefaultObj()
{
	static class UGE_DissectorLatch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DissectorLatch_C*>(UGE_DissectorLatch_C::StaticClass()->DefaultObject);

	return Default;
}

}


