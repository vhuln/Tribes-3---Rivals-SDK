#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Behavior_OpenDoor.BP_Behavior_OpenDoor_C
// (None)

class UClass* UBP_Behavior_OpenDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Behavior_OpenDoor_C");

	return Clss;
}


// BP_Behavior_OpenDoor_C BP_Behavior_OpenDoor.Default__BP_Behavior_OpenDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Behavior_OpenDoor_C* UBP_Behavior_OpenDoor_C::GetDefaultObj()
{
	static class UBP_Behavior_OpenDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Behavior_OpenDoor_C*>(UBP_Behavior_OpenDoor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Behavior_OpenDoor.BP_Behavior_OpenDoor_C.K2_OnTriggeredCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACharacter*                  Avatar                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameplayBehaviorConfig*     Config                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      SmartObjectOwner                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Behavior_OpenDoor_C::K2_OnTriggeredCharacter(class ACharacter* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Behavior_OpenDoor_C", "K2_OnTriggeredCharacter");

	Params::UBP_Behavior_OpenDoor_C_K2_OnTriggeredCharacter_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.Config = Config;
	Parms.SmartObjectOwner = SmartObjectOwner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Behavior_OpenDoor.BP_Behavior_OpenDoor_C.OnInteractEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Behavior_OpenDoor_C::OnInteractEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Behavior_OpenDoor_C", "OnInteractEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Behavior_OpenDoor.BP_Behavior_OpenDoor_C.K2_OnFinishedCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACharacter*                  Avatar                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bWasInterrupted                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Behavior_OpenDoor_C::K2_OnFinishedCharacter(class ACharacter* Avatar, bool bWasInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Behavior_OpenDoor_C", "K2_OnFinishedCharacter");

	Params::UBP_Behavior_OpenDoor_C_K2_OnFinishedCharacter_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.bWasInterrupted = bWasInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Behavior_OpenDoor.BP_Behavior_OpenDoor_C.ExecuteUbergraph_BP_Behavior_OpenDoor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_Event_Avatar_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameplayBehaviorConfig*     K2Node_Event_Config                                              (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_SmartObjectOwner                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValDoor*                    K2Node_DynamicCast_AsVal_Door                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_Event_Avatar                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasInterrupted                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>CallFunc_CanInteract_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInteract_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Behavior_OpenDoor_C::ExecuteUbergraph_BP_Behavior_OpenDoor(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ACharacter* K2Node_Event_Avatar_1, class UGameplayBehaviorConfig* K2Node_Event_Config, class AActor* K2Node_Event_SmartObjectOwner, class AValDoor* K2Node_DynamicCast_AsVal_Door, bool K2Node_DynamicCast_bSuccess, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ACharacter* K2Node_Event_Avatar, bool K2Node_Event_bWasInterrupted, TScriptInterface<class IValInteractable> CallFunc_CanInteract_self_CastInput, bool CallFunc_CanInteract_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Behavior_OpenDoor_C", "ExecuteUbergraph_BP_Behavior_OpenDoor");

	Params::UBP_Behavior_OpenDoor_C_ExecuteUbergraph_BP_Behavior_OpenDoor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Avatar_1 = K2Node_Event_Avatar_1;
	Parms.K2Node_Event_Config = K2Node_Event_Config;
	Parms.K2Node_Event_SmartObjectOwner = K2Node_Event_SmartObjectOwner;
	Parms.K2Node_DynamicCast_AsVal_Door = K2Node_DynamicCast_AsVal_Door;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_Avatar = K2Node_Event_Avatar;
	Parms.K2Node_Event_bWasInterrupted = K2Node_Event_bWasInterrupted;
	Parms.CallFunc_CanInteract_self_CastInput = CallFunc_CanInteract_self_CastInput;
	Parms.CallFunc_CanInteract_ReturnValue = CallFunc_CanInteract_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


