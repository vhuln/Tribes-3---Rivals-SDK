#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_MarkLastCoverTime.BTT_MarkLastCoverTime_C
// (None)

class UClass* UBTT_MarkLastCoverTime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_MarkLastCoverTime_C");

	return Clss;
}


// BTT_MarkLastCoverTime_C BTT_MarkLastCoverTime.Default__BTT_MarkLastCoverTime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_MarkLastCoverTime_C* UBTT_MarkLastCoverTime_C::GetDefaultObj()
{
	static class UBTT_MarkLastCoverTime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_MarkLastCoverTime_C*>(UBTT_MarkLastCoverTime_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_MarkLastCoverTime.BTT_MarkLastCoverTime_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_MarkLastCoverTime_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_MarkLastCoverTime_C", "ReceiveExecuteAI");

	Params::UBTT_MarkLastCoverTime_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_MarkLastCoverTime.BTT_MarkLastCoverTime_C.ExecuteUbergraph_BTT_MarkLastCoverTime
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_MarkLastCoverTime_C::ExecuteUbergraph_BTT_MarkLastCoverTime(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, double CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_MarkLastCoverTime_C", "ExecuteUbergraph_BTT_MarkLastCoverTime");

	Params::UBTT_MarkLastCoverTime_C_ExecuteUbergraph_BTT_MarkLastCoverTime_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast = CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


