#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Skydiving.GE_Skydiving_C
// (None)

class UClass* UGE_Skydiving_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Skydiving_C");

	return Clss;
}


// GE_Skydiving_C GE_Skydiving.Default__GE_Skydiving_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Skydiving_C* UGE_Skydiving_C::GetDefaultObj()
{
	static class UGE_Skydiving_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Skydiving_C*>(UGE_Skydiving_C::StaticClass()->DefaultObject);

	return Default;
}

}


