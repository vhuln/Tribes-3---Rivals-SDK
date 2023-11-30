#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_CacheMovementLocation.BTT_CacheMovementLocation_C
// (None)

class UClass* UBTT_CacheMovementLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_CacheMovementLocation_C");

	return Clss;
}


// BTT_CacheMovementLocation_C BTT_CacheMovementLocation.Default__BTT_CacheMovementLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class UBTT_CacheMovementLocation_C* UBTT_CacheMovementLocation_C::GetDefaultObj()
{
	static class UBTT_CacheMovementLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_CacheMovementLocation_C*>(UBTT_CacheMovementLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_CacheMovementLocation.BTT_CacheMovementLocation_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_CacheMovementLocation_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_CacheMovementLocation_C", "ReceiveExecuteAI");

	Params::UBTT_CacheMovementLocation_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_CacheMovementLocation.BTT_CacheMovementLocation_C.ExecuteUbergraph_BTT_CacheMovementLocation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GetBlackboardValueAsVector_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GetBlackboardValueAsVector_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_CacheMovementLocation_C::ExecuteUbergraph_BTT_CacheMovementLocation(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const struct CoreUObject_Vector& CallFunc_GetBlackboardValueAsVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetBlackboardValueAsVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_CacheMovementLocation_C", "ExecuteUbergraph_BTT_CacheMovementLocation");

	Params::UBTT_CacheMovementLocation_C_ExecuteUbergraph_BTT_CacheMovementLocation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetBlackboardValueAsVector_ReturnValue = CallFunc_GetBlackboardValueAsVector_ReturnValue;
	Parms.CallFunc_GetBlackboardValueAsVector_ReturnValue_1 = CallFunc_GetBlackboardValueAsVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


