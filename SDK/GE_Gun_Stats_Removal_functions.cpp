#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Gun_Stats_Removal.GE_Gun_Stats_Removal_C
// (None)

class UClass* UGE_Gun_Stats_Removal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Gun_Stats_Removal_C");

	return Clss;
}


// GE_Gun_Stats_Removal_C GE_Gun_Stats_Removal.Default__GE_Gun_Stats_Removal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Gun_Stats_Removal_C* UGE_Gun_Stats_Removal_C::GetDefaultObj()
{
	static class UGE_Gun_Stats_Removal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Gun_Stats_Removal_C*>(UGE_Gun_Stats_Removal_C::StaticClass()->DefaultObject);

	return Default;
}

}


