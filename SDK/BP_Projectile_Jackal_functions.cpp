#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Projectile_Jackal.BP_Projectile_Jackal_C
// (Actor)

class UClass* ABP_Projectile_Jackal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Projectile_Jackal_C");

	return Clss;
}


// BP_Projectile_Jackal_C BP_Projectile_Jackal.Default__BP_Projectile_Jackal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Projectile_Jackal_C* ABP_Projectile_Jackal_C::GetDefaultObj()
{
	static class ABP_Projectile_Jackal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Projectile_Jackal_C*>(ABP_Projectile_Jackal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Projectile_Jackal.BP_Projectile_Jackal_C.OnTravelStopped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Projectile_Jackal_C::OnTravelStopped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Jackal_C", "OnTravelStopped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Projectile_Jackal.BP_Projectile_Jackal_C.Attach to Object
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValCharacter*               ActorAttachTo                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          ImpactLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Jackal_C::Attach_to_Object(class AValCharacter* ActorAttachTo, const struct CoreUObject_Vector& ImpactLocation, const struct CoreUObject_Vector& ImpactNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Jackal_C", "Attach to Object");

	Params::ABP_Projectile_Jackal_C_Attach_to_Object_Params Parms{};

	Parms.ActorAttachTo = ActorAttachTo;
	Parms.ImpactLocation = ImpactLocation;
	Parms.ImpactNormal = ImpactNormal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Projectile_Jackal.BP_Projectile_Jackal_C.Fizzle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Projectile_Jackal_C::Fizzle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Jackal_C", "Fizzle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Projectile_Jackal.BP_Projectile_Jackal_C.Detonate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Fizzle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Jackal_C::Detonate(bool Fizzle, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Projectile_Jackal_C", "Detonate");

	Params::ABP_Projectile_Jackal_C_Detonate_Params Parms{};

	Parms.Fizzle = Fizzle;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


