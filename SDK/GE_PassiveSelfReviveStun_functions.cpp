#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PassiveSelfReviveStun.GE_PassiveSelfReviveStun_C
// (None)

class UClass* UGE_PassiveSelfReviveStun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PassiveSelfReviveStun_C");

	return Clss;
}


// GE_PassiveSelfReviveStun_C GE_PassiveSelfReviveStun.Default__GE_PassiveSelfReviveStun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PassiveSelfReviveStun_C* UGE_PassiveSelfReviveStun_C::GetDefaultObj()
{
	static class UGE_PassiveSelfReviveStun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PassiveSelfReviveStun_C*>(UGE_PassiveSelfReviveStun_C::StaticClass()->DefaultObject);

	return Default;
}

}


