#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SD_DMR.GA_SD_DMR_C
// (None)

class UClass* UGA_SD_DMR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SD_DMR_C");

	return Clss;
}


// GA_SD_DMR_C GA_SD_DMR.Default__GA_SD_DMR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SD_DMR_C* UGA_SD_DMR_C::GetDefaultObj()
{
	static class UGA_SD_DMR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SD_DMR_C*>(UGA_SD_DMR_C::StaticClass()->DefaultObject);

	return Default;
}

}


