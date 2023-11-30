#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Gun_SMG_CD.GA_Gun_SMG_CD_C
// (None)

class UClass* UGA_Gun_SMG_CD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Gun_SMG_CD_C");

	return Clss;
}


// GA_Gun_SMG_CD_C GA_Gun_SMG_CD.Default__GA_Gun_SMG_CD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Gun_SMG_CD_C* UGA_Gun_SMG_CD_C::GetDefaultObj()
{
	static class UGA_Gun_SMG_CD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Gun_SMG_CD_C*>(UGA_Gun_SMG_CD_C::StaticClass()->DefaultObject);

	return Default;
}

}


