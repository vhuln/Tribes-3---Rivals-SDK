#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BossRoom_TeleportTarget.BP_BossRoom_TeleportTarget_C
// (Actor)

class UClass* ABP_BossRoom_TeleportTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BossRoom_TeleportTarget_C");

	return Clss;
}


// BP_BossRoom_TeleportTarget_C BP_BossRoom_TeleportTarget.Default__BP_BossRoom_TeleportTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BossRoom_TeleportTarget_C* ABP_BossRoom_TeleportTarget_C::GetDefaultObj()
{
	static class ABP_BossRoom_TeleportTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BossRoom_TeleportTarget_C*>(ABP_BossRoom_TeleportTarget_C::StaticClass()->DefaultObject);

	return Default;
}

}


