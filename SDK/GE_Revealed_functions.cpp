#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Revealed.GE_Revealed_C
// (None)

class UClass* UGE_Revealed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Revealed_C");

	return Clss;
}


// GE_Revealed_C GE_Revealed.Default__GE_Revealed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Revealed_C* UGE_Revealed_C::GetDefaultObj()
{
	static class UGE_Revealed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Revealed_C*>(UGE_Revealed_C::StaticClass()->DefaultObject);

	return Default;
}

}


