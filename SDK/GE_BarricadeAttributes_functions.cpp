#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_BarricadeAttributes.GE_BarricadeAttributes_C
// (None)

class UClass* UGE_BarricadeAttributes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_BarricadeAttributes_C");

	return Clss;
}


// GE_BarricadeAttributes_C GE_BarricadeAttributes.Default__GE_BarricadeAttributes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_BarricadeAttributes_C* UGE_BarricadeAttributes_C::GetDefaultObj()
{
	static class UGE_BarricadeAttributes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_BarricadeAttributes_C*>(UGE_BarricadeAttributes_C::StaticClass()->DefaultObject);

	return Default;
}

}


