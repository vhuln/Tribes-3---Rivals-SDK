#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Detected.GE_Detected_C
// (None)

class UClass* UGE_Detected_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Detected_C");

	return Clss;
}


// GE_Detected_C GE_Detected.Default__GE_Detected_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Detected_C* UGE_Detected_C::GetDefaultObj()
{
	static class UGE_Detected_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Detected_C*>(UGE_Detected_C::StaticClass()->DefaultObject);

	return Default;
}

}


