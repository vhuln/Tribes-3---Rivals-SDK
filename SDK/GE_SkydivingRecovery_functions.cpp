#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SkydivingRecovery.GE_SkydivingRecovery_C
// (None)

class UClass* UGE_SkydivingRecovery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SkydivingRecovery_C");

	return Clss;
}


// GE_SkydivingRecovery_C GE_SkydivingRecovery.Default__GE_SkydivingRecovery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SkydivingRecovery_C* UGE_SkydivingRecovery_C::GetDefaultObj()
{
	static class UGE_SkydivingRecovery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SkydivingRecovery_C*>(UGE_SkydivingRecovery_C::StaticClass()->DefaultObject);

	return Default;
}

}


