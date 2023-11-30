#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GrenadeThorwn.GE_GrenadeThorwn_C
// (None)

class UClass* UGE_GrenadeThorwn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GrenadeThorwn_C");

	return Clss;
}


// GE_GrenadeThorwn_C GE_GrenadeThorwn.Default__GE_GrenadeThorwn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GrenadeThorwn_C* UGE_GrenadeThorwn_C::GetDefaultObj()
{
	static class UGE_GrenadeThorwn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GrenadeThorwn_C*>(UGE_GrenadeThorwn_C::StaticClass()->DefaultObject);

	return Default;
}

}


