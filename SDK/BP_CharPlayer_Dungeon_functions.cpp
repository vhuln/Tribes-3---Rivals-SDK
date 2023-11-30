#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharPlayer_Dungeon.BP_CharPlayer_Dungeon_C
// (Actor, Pawn)

class UClass* ABP_CharPlayer_Dungeon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharPlayer_Dungeon_C");

	return Clss;
}


// BP_CharPlayer_Dungeon_C BP_CharPlayer_Dungeon.Default__BP_CharPlayer_Dungeon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CharPlayer_Dungeon_C* ABP_CharPlayer_Dungeon_C::GetDefaultObj()
{
	static class ABP_CharPlayer_Dungeon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CharPlayer_Dungeon_C*>(ABP_CharPlayer_Dungeon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CharPlayer_Dungeon.BP_CharPlayer_Dungeon_C.BP_ReleaseHeldItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CharPlayer_Dungeon_C::BP_ReleaseHeldItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Dungeon_C", "BP_ReleaseHeldItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharPlayer_Dungeon.BP_CharPlayer_Dungeon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharPlayer_Dungeon_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Dungeon_C", "ReceiveTick");

	Params::ABP_CharPlayer_Dungeon_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharPlayer_Dungeon.BP_CharPlayer_Dungeon_C.ExecuteUbergraph_BP_CharPlayer_Dungeon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHoldingObject_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetValPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_GetViewRotation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharPlayer_Dungeon_C::ExecuteUbergraph_BP_CharPlayer_Dungeon(int32 EntryPoint, float K2Node_Event_DeltaSeconds, const struct CoreUObject_Vector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsHoldingObject_ReturnValue, class AValPlayerController* CallFunc_GetValPlayerController_ReturnValue, const struct CoreUObject_Rotator& CallFunc_GetViewRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Vector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetComponentLocation_ReturnValue_2, double CallFunc_VSize_ReturnValue, const struct CoreUObject_Vector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Dungeon_C", "ExecuteUbergraph_BP_CharPlayer_Dungeon");

	Params::ABP_CharPlayer_Dungeon_C_ExecuteUbergraph_BP_CharPlayer_Dungeon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_IsHoldingObject_ReturnValue = CallFunc_IsHoldingObject_ReturnValue;
	Parms.CallFunc_GetValPlayerController_ReturnValue = CallFunc_GetValPlayerController_ReturnValue;
	Parms.CallFunc_GetViewRotation_ReturnValue = CallFunc_GetViewRotation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


