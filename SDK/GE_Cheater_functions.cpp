#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Cheater.GE_Cheater_C
// (None)

class UClass* UGE_Cheater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Cheater_C");

	return Clss;
}


// GE_Cheater_C GE_Cheater.Default__GE_Cheater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Cheater_C* UGE_Cheater_C::GetDefaultObj()
{
	static class UGE_Cheater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Cheater_C*>(UGE_Cheater_C::StaticClass()->DefaultObject);

	return Default;
}

}


