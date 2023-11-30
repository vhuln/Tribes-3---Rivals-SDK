#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PlayerDefaultAttributes_Bot_Dissector.GE_PlayerDefaultAttributes_Bot_Dissector_C
// (None)

class UClass* UGE_PlayerDefaultAttributes_Bot_Dissector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PlayerDefaultAttributes_Bot_Dissector_C");

	return Clss;
}


// GE_PlayerDefaultAttributes_Bot_Dissector_C GE_PlayerDefaultAttributes_Bot_Dissector.Default__GE_PlayerDefaultAttributes_Bot_Dissector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PlayerDefaultAttributes_Bot_Dissector_C* UGE_PlayerDefaultAttributes_Bot_Dissector_C::GetDefaultObj()
{
	static class UGE_PlayerDefaultAttributes_Bot_Dissector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PlayerDefaultAttributes_Bot_Dissector_C*>(UGE_PlayerDefaultAttributes_Bot_Dissector_C::StaticClass()->DefaultObject);

	return Default;
}

}


