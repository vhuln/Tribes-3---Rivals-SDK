#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharPlayer_Scanner.BP_CharPlayer_Scanner_C
// (Actor, Pawn)

class UClass* ABP_CharPlayer_Scanner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharPlayer_Scanner_C");

	return Clss;
}


// BP_CharPlayer_Scanner_C BP_CharPlayer_Scanner.Default__BP_CharPlayer_Scanner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CharPlayer_Scanner_C* ABP_CharPlayer_Scanner_C::GetDefaultObj()
{
	static class ABP_CharPlayer_Scanner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CharPlayer_Scanner_C*>(ABP_CharPlayer_Scanner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CharPlayer_Scanner.BP_CharPlayer_Scanner_C.On_AIFSM_AlertState_end
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CharPlayer_Scanner_C::On_AIFSM_AlertState_end()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Scanner_C", "On_AIFSM_AlertState_end");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharPlayer_Scanner.BP_CharPlayer_Scanner_C.On_AIFSM_AlertState_Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharPlayer_Scanner_C::On_AIFSM_AlertState_Start(bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Scanner_C", "On_AIFSM_AlertState_Start");

	Params::ABP_CharPlayer_Scanner_C_On_AIFSM_AlertState_Start_Params Parms{};

	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharPlayer_Scanner.BP_CharPlayer_Scanner_C.On_AIFSM_ScanState_End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CharPlayer_Scanner_C::On_AIFSM_ScanState_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Scanner_C", "On_AIFSM_ScanState_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharPlayer_Scanner.BP_CharPlayer_Scanner_C.On_AIFSM_ScanState_Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CharPlayer_Scanner_C::On_AIFSM_ScanState_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Scanner_C", "On_AIFSM_ScanState_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharPlayer_Scanner.BP_CharPlayer_Scanner_C.DeactivateScanLaser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CharPlayer_Scanner_C::DeactivateScanLaser()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Scanner_C", "DeactivateScanLaser");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharPlayer_Scanner.BP_CharPlayer_Scanner_C.ActivateScanLaser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharPlayer_Scanner_C::ActivateScanLaser(bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Scanner_C", "ActivateScanLaser");

	Params::ABP_CharPlayer_Scanner_C_ActivateScanLaser_Params Parms{};

	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharPlayer_Scanner.BP_CharPlayer_Scanner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CharPlayer_Scanner_C::UserConstructionScript(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Scanner_C", "UserConstructionScript");

	Params::ABP_CharPlayer_Scanner_C_UserConstructionScript_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharPlayer_Scanner.BP_CharPlayer_Scanner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CharPlayer_Scanner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Scanner_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharPlayer_Scanner.BP_CharPlayer_Scanner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharPlayer_Scanner_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Scanner_C", "ReceiveTick");

	Params::ABP_CharPlayer_Scanner_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharPlayer_Scanner.BP_CharPlayer_Scanner_C.CybridBeamDistanceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OldValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharPlayer_Scanner_C::CybridBeamDistanceChanged(float OldValue, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Scanner_C", "CybridBeamDistanceChanged");

	Params::ABP_CharPlayer_Scanner_C_CybridBeamDistanceChanged_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharPlayer_Scanner.BP_CharPlayer_Scanner_C.OnViewRotationRepped
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CharPlayer_Scanner_C::OnViewRotationRepped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Scanner_C", "OnViewRotationRepped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharPlayer_Scanner.BP_CharPlayer_Scanner_C.EventDied
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CharPlayer_Scanner_C::EventDied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Scanner_C", "EventDied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharPlayer_Scanner.BP_CharPlayer_Scanner_C.ExecuteUbergraph_BP_CharPlayer_Scanner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_OldValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_HitResult            CallFunc_K2_AddRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_GetCustomViewRotationAsRotator_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_HitResult            CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_UpdateLoseSightRadius_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateSightRadius_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateSightRadius_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateLoseSightRadius_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCustomViewLocationOffset_Value_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateSightRadius_NewSightRadius_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateLoseSightRadius_NewLoseSightRadius_ImplicitCast   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateSightRadius_NewSightRadius_ImplicitCast_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateLoseSightRadius_NewLoseSightRadius_ImplicitCast_1 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharPlayer_Scanner_C::ExecuteUbergraph_BP_CharPlayer_Scanner(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_OldValue, float K2Node_CustomEvent_NewValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct Engine_HitResult& CallFunc_K2_AddRelativeRotation_SweepHitResult, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, const struct CoreUObject_Rotator& CallFunc_GetCustomViewRotationAsRotator_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_UpdateLoseSightRadius_ReturnValue, bool CallFunc_UpdateSightRadius_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_2, float K2Node_Event_DeltaSeconds, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_UpdateSightRadius_ReturnValue_1, bool CallFunc_UpdateLoseSightRadius_ReturnValue_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetCustomViewLocationOffset_Value_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, float CallFunc_UpdateSightRadius_NewSightRadius_ImplicitCast, float CallFunc_UpdateLoseSightRadius_NewLoseSightRadius_ImplicitCast, float CallFunc_UpdateSightRadius_NewSightRadius_ImplicitCast_1, float CallFunc_UpdateLoseSightRadius_NewLoseSightRadius_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Scanner_C", "ExecuteUbergraph_BP_CharPlayer_Scanner");

	Params::ABP_CharPlayer_Scanner_C_ExecuteUbergraph_BP_CharPlayer_Scanner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_OldValue = K2Node_CustomEvent_OldValue;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_K2_AddRelativeRotation_SweepHitResult = CallFunc_K2_AddRelativeRotation_SweepHitResult;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_GetCustomViewRotationAsRotator_ReturnValue = CallFunc_GetCustomViewRotationAsRotator_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_UpdateLoseSightRadius_ReturnValue = CallFunc_UpdateLoseSightRadius_ReturnValue;
	Parms.CallFunc_UpdateSightRadius_ReturnValue = CallFunc_UpdateSightRadius_ReturnValue;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1 = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1;
	Parms.CallFunc_GetFloatAttribute_ReturnValue_1 = CallFunc_GetFloatAttribute_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_2 = CallFunc_IsDedicatedServer_ReturnValue_2;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_UpdateSightRadius_ReturnValue_1 = CallFunc_UpdateSightRadius_ReturnValue_1;
	Parms.CallFunc_UpdateLoseSightRadius_ReturnValue_1 = CallFunc_UpdateLoseSightRadius_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetCustomViewLocationOffset_Value_ImplicitCast = CallFunc_SetCustomViewLocationOffset_Value_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast_1 = CallFunc_Add_DoubleDouble_B_ImplicitCast_1;
	Parms.CallFunc_UpdateSightRadius_NewSightRadius_ImplicitCast = CallFunc_UpdateSightRadius_NewSightRadius_ImplicitCast;
	Parms.CallFunc_UpdateLoseSightRadius_NewLoseSightRadius_ImplicitCast = CallFunc_UpdateLoseSightRadius_NewLoseSightRadius_ImplicitCast;
	Parms.CallFunc_UpdateSightRadius_NewSightRadius_ImplicitCast_1 = CallFunc_UpdateSightRadius_NewSightRadius_ImplicitCast_1;
	Parms.CallFunc_UpdateLoseSightRadius_NewLoseSightRadius_ImplicitCast_1 = CallFunc_UpdateLoseSightRadius_NewLoseSightRadius_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


