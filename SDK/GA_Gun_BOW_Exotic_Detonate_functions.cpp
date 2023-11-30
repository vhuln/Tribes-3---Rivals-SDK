#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Gun_BOW_Exotic_Detonate.GA_Gun_BOW_Exotic_Detonate_C
// (None)

class UClass* UGA_Gun_BOW_Exotic_Detonate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Gun_BOW_Exotic_Detonate_C");

	return Clss;
}


// GA_Gun_BOW_Exotic_Detonate_C GA_Gun_BOW_Exotic_Detonate.Default__GA_Gun_BOW_Exotic_Detonate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Gun_BOW_Exotic_Detonate_C* UGA_Gun_BOW_Exotic_Detonate_C::GetDefaultObj()
{
	static class UGA_Gun_BOW_Exotic_Detonate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Gun_BOW_Exotic_Detonate_C*>(UGA_Gun_BOW_Exotic_Detonate_C::StaticClass()->DefaultObject);

	return Default;
}

}


