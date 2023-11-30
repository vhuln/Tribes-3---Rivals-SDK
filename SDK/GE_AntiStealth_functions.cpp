#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_AntiStealth.GE_AntiStealth_C
// (None)

class UClass* UGE_AntiStealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_AntiStealth_C");

	return Clss;
}


// GE_AntiStealth_C GE_AntiStealth.Default__GE_AntiStealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_AntiStealth_C* UGE_AntiStealth_C::GetDefaultObj()
{
	static class UGE_AntiStealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_AntiStealth_C*>(UGE_AntiStealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


