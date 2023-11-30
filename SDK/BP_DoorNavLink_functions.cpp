#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DoorNavLink.BP_DoorNavLink_C
// (Actor)

class UClass* ABP_DoorNavLink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DoorNavLink_C");

	return Clss;
}


// BP_DoorNavLink_C BP_DoorNavLink.Default__BP_DoorNavLink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DoorNavLink_C* ABP_DoorNavLink_C::GetDefaultObj()
{
	static class ABP_DoorNavLink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DoorNavLink_C*>(ABP_DoorNavLink_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DoorNavLink.BP_DoorNavLink_C.GetDoorChannelTime
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DestructibleDoor_C*      K2Node_DynamicCast_AsBP_Destructible_Door                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_WidgetInteraction_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTotalChannelTime_Total_Channel_Time                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_DoorNavLink_C::GetDoorChannelTime(class ABP_DestructibleDoor_C* K2Node_DynamicCast_AsBP_Destructible_Door, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class ABP_WidgetInteraction_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetTotalChannelTime_Total_Channel_Time, float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DoorNavLink_C", "GetDoorChannelTime");

	Params::ABP_DoorNavLink_C_GetDoorChannelTime_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Destructible_Door = K2Node_DynamicCast_AsBP_Destructible_Door;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTotalChannelTime_Total_Channel_Time = CallFunc_GetTotalChannelTime_Total_Channel_Time;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_DoorNavLink.BP_DoorNavLink_C.DoorStatusChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DoorOpen                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DoorNavLink_C::DoorStatusChanged(bool DoorOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DoorNavLink_C", "DoorStatusChanged");

	Params::ABP_DoorNavLink_C_DoorStatusChanged_Params Parms{};

	Parms.DoorOpen = DoorOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DoorNavLink.BP_DoorNavLink_C.ReceiveSmartLinkReached
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class AActor*                      Agent                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          Destination                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DoorNavLink_C::ReceiveSmartLinkReached(class AActor* Agent, struct CoreUObject_Vector& Destination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DoorNavLink_C", "ReceiveSmartLinkReached");

	Params::ABP_DoorNavLink_C_ReceiveSmartLinkReached_Params Parms{};

	Parms.Agent = Agent;
	Parms.Destination = Destination;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DoorNavLink.BP_DoorNavLink_C.OnInteractionActorSet
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DoorNavLink_C::OnInteractionActorSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DoorNavLink_C", "OnInteractionActorSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DoorNavLink.BP_DoorNavLink_C.EventCurrentActorDied
// (BlueprintEvent)
// Parameters:

void ABP_DoorNavLink_C::EventCurrentActorDied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DoorNavLink_C", "EventCurrentActorDied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DoorNavLink.BP_DoorNavLink_C.OpenDoor
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_DoorNavLink_C::OpenDoor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DoorNavLink_C", "OpenDoor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DoorNavLink.BP_DoorNavLink_C.ExecuteUbergraph_BP_DoorNavLink
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DestructibleDoor_C*      K2Node_DynamicCast_AsBP_Destructible_Door                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Agent                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          K2Node_Event_Destination                                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DestructibleDoor_C*      K2Node_DynamicCast_AsBP_Destructible_Door_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_DestructibleDoor_C*      K2Node_DynamicCast_AsBP_Destructible_Door_2                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>CallFunc_Interact_self_CastInput                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_DoorOpen                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DestructibleDoor_C*      K2Node_DynamicCast_AsBP_Destructible_Door_3                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DoorNavLink_C::ExecuteUbergraph_BP_DoorNavLink(int32 EntryPoint, class ABP_DestructibleDoor_C* K2Node_DynamicCast_AsBP_Destructible_Door, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Agent, const struct CoreUObject_Vector& K2Node_Event_Destination, class ABP_DestructibleDoor_C* K2Node_DynamicCast_AsBP_Destructible_Door_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_DestructibleDoor_C* K2Node_DynamicCast_AsBP_Destructible_Door_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IValInteractable> CallFunc_Interact_self_CastInput, class AController* CallFunc_GetController_ReturnValue, bool K2Node_CustomEvent_DoorOpen, class ABP_DestructibleDoor_C* K2Node_DynamicCast_AsBP_Destructible_Door_3, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DoorNavLink_C", "ExecuteUbergraph_BP_DoorNavLink");

	Params::ABP_DoorNavLink_C_ExecuteUbergraph_BP_DoorNavLink_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBP_Destructible_Door = K2Node_DynamicCast_AsBP_Destructible_Door;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Agent = K2Node_Event_Agent;
	Parms.K2Node_Event_Destination = K2Node_Event_Destination;
	Parms.K2Node_DynamicCast_AsBP_Destructible_Door_1 = K2Node_DynamicCast_AsBP_Destructible_Door_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBP_Destructible_Door_2 = K2Node_DynamicCast_AsBP_Destructible_Door_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Interact_self_CastInput = CallFunc_Interact_self_CastInput;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_CustomEvent_DoorOpen = K2Node_CustomEvent_DoorOpen;
	Parms.K2Node_DynamicCast_AsBP_Destructible_Door_3 = K2Node_DynamicCast_AsBP_Destructible_Door_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


