#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ShieldPackUsed.GE_ShieldPackUsed_C
// (None)

class UClass* UGE_ShieldPackUsed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ShieldPackUsed_C");

	return Clss;
}


// GE_ShieldPackUsed_C GE_ShieldPackUsed.Default__GE_ShieldPackUsed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ShieldPackUsed_C* UGE_ShieldPackUsed_C::GetDefaultObj()
{
	static class UGE_ShieldPackUsed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ShieldPackUsed_C*>(UGE_ShieldPackUsed_C::StaticClass()->DefaultObject);

	return Default;
}

}


