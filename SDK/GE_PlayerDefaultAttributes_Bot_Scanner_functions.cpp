#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PlayerDefaultAttributes_Bot_Scanner.GE_PlayerDefaultAttributes_Bot_Scanner_C
// (None)

class UClass* UGE_PlayerDefaultAttributes_Bot_Scanner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PlayerDefaultAttributes_Bot_Scanner_C");

	return Clss;
}


// GE_PlayerDefaultAttributes_Bot_Scanner_C GE_PlayerDefaultAttributes_Bot_Scanner.Default__GE_PlayerDefaultAttributes_Bot_Scanner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PlayerDefaultAttributes_Bot_Scanner_C* UGE_PlayerDefaultAttributes_Bot_Scanner_C::GetDefaultObj()
{
	static class UGE_PlayerDefaultAttributes_Bot_Scanner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PlayerDefaultAttributes_Bot_Scanner_C*>(UGE_PlayerDefaultAttributes_Bot_Scanner_C::StaticClass()->DefaultObject);

	return Default;
}

}


