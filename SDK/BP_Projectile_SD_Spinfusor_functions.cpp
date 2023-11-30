#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_SD_Spinfusor.BP_Projectile_SD_Spinfusor_C
// (Actor)

class UClass* ABP_Projectile_SD_Spinfusor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_SD_Spinfusor_C");

	return Clss;
}


// BP_Projectile_SD_Spinfusor_C BP_Projectile_SD_Spinfusor.Default__BP_Projectile_SD_Spinfusor_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class ABP_Projectile_SD_Spinfusor_C* ABP_Projectile_SD_Spinfusor_C::GetDefaultObj()
{
	static class ABP_Projectile_SD_Spinfusor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_SD_Spinfusor_C*>(ABP_Projectile_SD_Spinfusor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Projectile_SD_Spinfusor.BP_Projectile_SD_Spinfusor_C.OnStoppingHit
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Projectile_SD_Spinfusor_C::OnStoppingHit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_SD_Spinfusor_C", "OnStoppingHit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Projectile_SD_Spinfusor.BP_Projectile_SD_Spinfusor_C.ExecuteUbergraph_BP_Projectile_SD_Spinfusor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_SD_Spinfusor_C::ExecuteUbergraph_BP_Projectile_SD_Spinfusor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_SD_Spinfusor_C", "ExecuteUbergraph_BP_Projectile_SD_Spinfusor");

	Params::ABP_Projectile_SD_Spinfusor_C_ExecuteUbergraph_BP_Projectile_SD_Spinfusor_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


