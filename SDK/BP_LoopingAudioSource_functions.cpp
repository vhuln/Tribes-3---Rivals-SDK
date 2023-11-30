#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LoopingAudioSource.BP_LoopingAudioSource_C
// (Actor)

class UClass* ABP_LoopingAudioSource_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LoopingAudioSource_C");

	return Clss;
}


// BP_LoopingAudioSource_C BP_LoopingAudioSource.Default__BP_LoopingAudioSource_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LoopingAudioSource_C* ABP_LoopingAudioSource_C::GetDefaultObj()
{
	static class ABP_LoopingAudioSource_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LoopingAudioSource_C*>(ABP_LoopingAudioSource_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LoopingAudioSource.BP_LoopingAudioSource_C.IsPaused
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPaused                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LoopingAudioSource_C::IsPaused(bool* IsPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoopingAudioSource_C", "IsPaused");

	Params::ABP_LoopingAudioSource_C_IsPaused_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPaused != nullptr)
		*IsPaused = Parms.IsPaused;

}


// Function BP_LoopingAudioSource.BP_LoopingAudioSource_C.ExecuteAudioAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAkActionOnEventType    ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ExecuteAction_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LoopingAudioSource_C::ExecuteAudioAction(enum class EAkActionOnEventType ActionType, int32 CallFunc_ExecuteAction_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoopingAudioSource_C", "ExecuteAudioAction");

	Params::ABP_LoopingAudioSource_C_ExecuteAudioAction_Params Parms{};

	Parms.ActionType = ActionType;
	Parms.CallFunc_ExecuteAction_ReturnValue = CallFunc_ExecuteAction_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LoopingAudioSource.BP_LoopingAudioSource_C.DisablePositionDebugSphere
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LoopingAudioSource_C::DisablePositionDebugSphere()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoopingAudioSource_C", "DisablePositionDebugSphere");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LoopingAudioSource.BP_LoopingAudioSource_C.EnablePositionDebugSphere
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_LinearColor     DebugColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LoopingAudioSource_C::EnablePositionDebugSphere(const struct CoreUObject_LinearColor& DebugColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoopingAudioSource_C", "EnablePositionDebugSphere");

	Params::ABP_LoopingAudioSource_C_EnablePositionDebugSphere_Params Parms{};

	Parms.DebugColor = DebugColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LoopingAudioSource.BP_LoopingAudioSource_C.StopAudioEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LoopingAudioSource_C::StopAudioEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoopingAudioSource_C", "StopAudioEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LoopingAudioSource.BP_LoopingAudioSource_C.PostAudioEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*               Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_LoopingAudioSource_C::PostAudioEvent(class UAkAudioEvent* Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoopingAudioSource_C", "PostAudioEvent");

	Params::ABP_LoopingAudioSource_C_PostAudioEvent_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LoopingAudioSource.BP_LoopingAudioSource_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_LoopingAudioSource_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoopingAudioSource_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LoopingAudioSource.BP_LoopingAudioSource_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LoopingAudioSource_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoopingAudioSource_C", "ReceiveTick");

	Params::ABP_LoopingAudioSource_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LoopingAudioSource.BP_LoopingAudioSource_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_LoopingAudioSource_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoopingAudioSource_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LoopingAudioSource.BP_LoopingAudioSource_C.ExecuteUbergraph_BP_LoopingAudioSource
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugSphere_Duration_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LoopingAudioSource_C::ExecuteUbergraph_BP_LoopingAudioSource(int32 EntryPoint, float K2Node_Event_DeltaSeconds, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_DrawDebugSphere_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_LoopingAudioSource_C", "ExecuteUbergraph_BP_LoopingAudioSource");

	Params::ABP_LoopingAudioSource_C_ExecuteUbergraph_BP_LoopingAudioSource_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_DrawDebugSphere_Duration_ImplicitCast = CallFunc_DrawDebugSphere_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


