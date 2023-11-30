#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValPlayerAttributeConfig.BP_ValPlayerAttributeConfig_C
// (None)

class UClass* UBP_ValPlayerAttributeConfig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValPlayerAttributeConfig_C");

	return Clss;
}


// BP_ValPlayerAttributeConfig_C BP_ValPlayerAttributeConfig.Default__BP_ValPlayerAttributeConfig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ValPlayerAttributeConfig_C* UBP_ValPlayerAttributeConfig_C::GetDefaultObj()
{
	static class UBP_ValPlayerAttributeConfig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ValPlayerAttributeConfig_C*>(UBP_ValPlayerAttributeConfig_C::StaticClass()->DefaultObject);

	return Default;
}

}


