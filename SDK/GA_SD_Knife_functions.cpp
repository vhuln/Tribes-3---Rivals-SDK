#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_SD_Knife.GA_SD_Knife_C
// (None)

class UClass* UGA_SD_Knife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_SD_Knife_C");

	return Clss;
}


// GA_SD_Knife_C GA_SD_Knife.Default__GA_SD_Knife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_SD_Knife_C* UGA_SD_Knife_C::GetDefaultObj()
{
	static class UGA_SD_Knife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_SD_Knife_C*>(UGA_SD_Knife_C::StaticClass()->DefaultObject);

	return Default;
}

}


