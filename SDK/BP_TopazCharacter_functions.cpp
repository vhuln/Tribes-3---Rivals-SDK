#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TopazCharacter.BP_TopazCharacter_C
// (Actor, Pawn)

class UClass* ABP_TopazCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TopazCharacter_C");

	return Clss;
}


// BP_TopazCharacter_C BP_TopazCharacter.Default__BP_TopazCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TopazCharacter_C* ABP_TopazCharacter_C::GetDefaultObj()
{
	static class ABP_TopazCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TopazCharacter_C*>(ABP_TopazCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_TopazCharacter.BP_TopazCharacter_C.OnSkiStartedEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_TopazCharacter_C::OnSkiStartedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TopazCharacter_C", "OnSkiStartedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TopazCharacter.BP_TopazCharacter_C.OnSkiStoppedEvent
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_TopazCharacter_C::OnSkiStoppedEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TopazCharacter_C", "OnSkiStoppedEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TopazCharacter.BP_TopazCharacter_C.RouteHistoryCheat
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Command                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_TopazCharacter_C::RouteHistoryCheat(const class FString& Command)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TopazCharacter_C", "RouteHistoryCheat");

	Params::ABP_TopazCharacter_C_RouteHistoryCheat_Params Parms{};

	Parms.Command = Command;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TopazCharacter.BP_TopazCharacter_C.Launch
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_TopazCharacter_C::Launch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TopazCharacter_C", "Launch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_TopazCharacter.BP_TopazCharacter_C.OnPickup
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AValPickup*                  Pickup                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_TopazCharacter_C::OnPickup(class AValPickup* Pickup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TopazCharacter_C", "OnPickup");

	Params::ABP_TopazCharacter_C_OnPickup_Params Parms{};

	Parms.Pickup = Pickup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_TopazCharacter.BP_TopazCharacter_C.ExecuteUbergraph_BP_TopazCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetThirdPersonCameraAlpha_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Command                                             (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnemyWith_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Transform       Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URouteHistoryComponent_C*    CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPickup*                  K2Node_Event_Pickup                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerControllerFromID_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ValPlayerController_Topaz_C*K2Node_DynamicCast_AsBP_Val_Player_Controller_Topaz              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TopazCharacter_C::ExecuteUbergraph_BP_TopazCharacter(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, const class FString& K2Node_Event_Command, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEnemyWith_ReturnValue, const struct CoreUObject_Transform& Temp_struct_Variable, const struct CoreUObject_Rotator& CallFunc_K2_GetActorRotation_ReturnValue, class URouteHistoryComponent_C* CallFunc_AddComponent_ReturnValue, const struct CoreUObject_Vector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Multiply_VectorVector_ReturnValue, class AValPickup* K2Node_Event_Pickup, bool CallFunc_IsLocallyViewed_ReturnValue_1, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, class ABP_ValPlayerController_Topaz_C* K2Node_DynamicCast_AsBP_Val_Player_Controller_Topaz, bool K2Node_DynamicCast_bSuccess, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_TopazCharacter_C", "ExecuteUbergraph_BP_TopazCharacter");

	Params::ABP_TopazCharacter_C_ExecuteUbergraph_BP_TopazCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetThirdPersonCameraAlpha_ReturnValue = CallFunc_GetThirdPersonCameraAlpha_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsLocallyViewed_ReturnValue = CallFunc_IsLocallyViewed_ReturnValue;
	Parms.K2Node_Event_Command = K2Node_Event_Command;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsEnemyWith_ReturnValue = CallFunc_IsEnemyWith_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.K2Node_Event_Pickup = K2Node_Event_Pickup;
	Parms.CallFunc_IsLocallyViewed_ReturnValue_1 = CallFunc_IsLocallyViewed_ReturnValue_1;
	Parms.CallFunc_GetPlayerControllerFromID_ReturnValue = CallFunc_GetPlayerControllerFromID_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Val_Player_Controller_Topaz = K2Node_DynamicCast_AsBP_Val_Player_Controller_Topaz;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


