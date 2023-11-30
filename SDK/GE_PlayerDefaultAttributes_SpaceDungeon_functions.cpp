#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PlayerDefaultAttributes_SpaceDungeon.GE_PlayerDefaultAttributes_SpaceDungeon_C
// (None)

class UClass* UGE_PlayerDefaultAttributes_SpaceDungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PlayerDefaultAttributes_SpaceDungeon_C");

	return Clss;
}


// GE_PlayerDefaultAttributes_SpaceDungeon_C GE_PlayerDefaultAttributes_SpaceDungeon.Default__GE_PlayerDefaultAttributes_SpaceDungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PlayerDefaultAttributes_SpaceDungeon_C* UGE_PlayerDefaultAttributes_SpaceDungeon_C::GetDefaultObj()
{
	static class UGE_PlayerDefaultAttributes_SpaceDungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PlayerDefaultAttributes_SpaceDungeon_C*>(UGE_PlayerDefaultAttributes_SpaceDungeon_C::StaticClass()->DefaultObject);

	return Default;
}

}


