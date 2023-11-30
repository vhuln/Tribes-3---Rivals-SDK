#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_BulletImpact.GC_BulletImpact_C
// (None)

class UClass* UGC_BulletImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_BulletImpact_C");

	return Clss;
}


// GC_BulletImpact_C GC_BulletImpact.Default__GC_BulletImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGC_BulletImpact_C* UGC_BulletImpact_C::GetDefaultObj()
{
	static class UGC_BulletImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGC_BulletImpact_C*>(UGC_BulletImpact_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_BulletImpact.GC_BulletImpact_C.PhysicalSurfaceToString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class EPhysicalSurface        Surface                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_GetSurfaceTypeAsString_SurfaceTypeAsString              (ZeroConstructor, HasGetValueTypeHash)

class FString UGC_BulletImpact_C::PhysicalSurfaceToString(enum class EPhysicalSurface Surface, const class FString& CallFunc_GetSurfaceTypeAsString_SurfaceTypeAsString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_BulletImpact_C", "PhysicalSurfaceToString");

	Params::UGC_BulletImpact_C_PhysicalSurfaceToString_Params Parms{};

	Parms.Surface = Surface;
	Parms.CallFunc_GetSurfaceTypeAsString_SurfaceTypeAsString = CallFunc_GetSurfaceTypeAsString_SurfaceTypeAsString;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


