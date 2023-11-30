#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharacterFootprint.BP_CharacterFootprint_C
// (Actor)

class UClass* ABP_CharacterFootprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharacterFootprint_C");

	return Clss;
}


// BP_CharacterFootprint_C BP_CharacterFootprint.Default__BP_CharacterFootprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CharacterFootprint_C* ABP_CharacterFootprint_C::GetDefaultObj()
{
	static class ABP_CharacterFootprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CharacterFootprint_C*>(ABP_CharacterFootprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CharacterFootprint.BP_CharacterFootprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CharacterFootprint_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterFootprint_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterFootprint.BP_CharacterFootprint_C.BPUpdateFootprint
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_CharacterFootprint_C::BPUpdateFootprint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterFootprint_C", "BPUpdateFootprint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharacterFootprint.BP_CharacterFootprint_C.ExecuteUbergraph_BP_CharacterFootprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Transform       CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_FindRelativeLookAtRotation_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct Engine_HitResult            CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_CharacterFootprint_C::ExecuteUbergraph_BP_CharacterFootprint(int32 EntryPoint, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, const struct CoreUObject_Transform& CallFunc_GetTransform_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, const struct CoreUObject_Rotator& CallFunc_FindRelativeLookAtRotation_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharacterFootprint_C", "ExecuteUbergraph_BP_CharacterFootprint");

	Params::ABP_CharacterFootprint_C_ExecuteUbergraph_BP_CharacterFootprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_FindRelativeLookAtRotation_ReturnValue = CallFunc_FindRelativeLookAtRotation_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


