#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Silence_4Seconds.GE_Silence_4Seconds_C
// (None)

class UClass* UGE_Silence_4Seconds_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Silence_4Seconds_C");

	return Clss;
}


// GE_Silence_4Seconds_C GE_Silence_4Seconds.Default__GE_Silence_4Seconds_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Silence_4Seconds_C* UGE_Silence_4Seconds_C::GetDefaultObj()
{
	static class UGE_Silence_4Seconds_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Silence_4Seconds_C*>(UGE_Silence_4Seconds_C::StaticClass()->DefaultObject);

	return Default;
}

}


