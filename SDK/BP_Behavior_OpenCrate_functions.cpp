#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Behavior_OpenCrate.BP_Behavior_OpenCrate_C
// (None)

class UClass* UBP_Behavior_OpenCrate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Behavior_OpenCrate_C");

	return Clss;
}


// BP_Behavior_OpenCrate_C BP_Behavior_OpenCrate.Default__BP_Behavior_OpenCrate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Behavior_OpenCrate_C* UBP_Behavior_OpenCrate_C::GetDefaultObj()
{
	static class UBP_Behavior_OpenCrate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Behavior_OpenCrate_C*>(UBP_Behavior_OpenCrate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Behavior_OpenCrate.BP_Behavior_OpenCrate_C.LootAllTheLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Behavior_OpenCrate_C::LootAllTheLoot(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Behavior_OpenCrate_C", "LootAllTheLoot");

	Params::UBP_Behavior_OpenCrate_C_LootAllTheLoot_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Behavior_OpenCrate.BP_Behavior_OpenCrate_C.OnFinish_2C42823C4A183801E7CFCF8EEC6E25FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Behavior_OpenCrate_C::OnFinish_2C42823C4A183801E7CFCF8EEC6E25FB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Behavior_OpenCrate_C", "OnFinish_2C42823C4A183801E7CFCF8EEC6E25FB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Behavior_OpenCrate.BP_Behavior_OpenCrate_C.OnFinish_3BFA45BA4CD9F7848F430EA8066611FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Behavior_OpenCrate_C::OnFinish_3BFA45BA4CD9F7848F430EA8066611FB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Behavior_OpenCrate_C", "OnFinish_3BFA45BA4CD9F7848F430EA8066611FB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Behavior_OpenCrate.BP_Behavior_OpenCrate_C.K2_OnTriggeredCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACharacter*                  Avatar                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameplayBehaviorConfig*     Config                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      SmartObjectOwner                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Behavior_OpenCrate_C::K2_OnTriggeredCharacter(class ACharacter* Avatar, class UGameplayBehaviorConfig* Config, class AActor* SmartObjectOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Behavior_OpenCrate_C", "K2_OnTriggeredCharacter");

	Params::UBP_Behavior_OpenCrate_C_K2_OnTriggeredCharacter_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.Config = Config;
	Parms.SmartObjectOwner = SmartObjectOwner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Behavior_OpenCrate.BP_Behavior_OpenCrate_C.K2_OnFinishedCharacter
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACharacter*                  Avatar                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bWasInterrupted                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Behavior_OpenCrate_C::K2_OnFinishedCharacter(class ACharacter* Avatar, bool bWasInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Behavior_OpenCrate_C", "K2_OnFinishedCharacter");

	Params::UBP_Behavior_OpenCrate_C_K2_OnFinishedCharacter_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.bWasInterrupted = bWasInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Behavior_OpenCrate.BP_Behavior_OpenCrate_C.OnCrateStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECrateState             NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Behavior_OpenCrate_C::OnCrateStateChanged(enum class ECrateState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Behavior_OpenCrate_C", "OnCrateStateChanged");

	Params::UBP_Behavior_OpenCrate_C_OnCrateStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Behavior_OpenCrate.BP_Behavior_OpenCrate_C.ExecuteUbergraph_BP_Behavior_OpenCrate
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTaskOwnerInterface>CallFunc_TaskWaitDelay_TaskOwner_CastInput                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UGameplayTask_WaitDelay*     CallFunc_TaskWaitDelay_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTaskOwnerInterface>CallFunc_TaskWaitDelay_TaskOwner_CastInput_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UGameplayTask_WaitDelay*     CallFunc_TaskWaitDelay_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_Event_Avatar_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGameplayBehaviorConfig*     K2Node_Event_Config                                              (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_SmartObjectOwner                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValBaseCrate*               K2Node_DynamicCast_AsVal_Base_Crate                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>CallFunc_CanInteract_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInteract_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_Event_Avatar                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasInterrupted                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECrateState             K2Node_CustomEvent_NewState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>CallFunc_Interact_self_CastInput                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>CallFunc_StartChanneledInteract_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>CallFunc_EndChanneledInteract_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>CallFunc_EndInteraction_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Behavior_OpenCrate_C::ExecuteUbergraph_BP_Behavior_OpenCrate(int32 EntryPoint, TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput, class UGameplayTask_WaitDelay* CallFunc_TaskWaitDelay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameplayTaskOwnerInterface> CallFunc_TaskWaitDelay_TaskOwner_CastInput_1, class UGameplayTask_WaitDelay* CallFunc_TaskWaitDelay_ReturnValue_1, class ACharacter* K2Node_Event_Avatar_1, class UGameplayBehaviorConfig* K2Node_Event_Config, class AActor* K2Node_Event_SmartObjectOwner, class AValBaseCrate* K2Node_DynamicCast_AsVal_Base_Crate, bool K2Node_DynamicCast_bSuccess, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IValInteractable> CallFunc_CanInteract_self_CastInput, bool CallFunc_CanInteract_ReturnValue, class ACharacter* K2Node_Event_Avatar, bool K2Node_Event_bWasInterrupted, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ECrateState K2Node_CustomEvent_NewState, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IValInteractable> CallFunc_Interact_self_CastInput, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IValInteractable> CallFunc_StartChanneledInteract_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class IValInteractable> CallFunc_EndChanneledInteract_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TScriptInterface<class IValInteractable> CallFunc_EndInteraction_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Behavior_OpenCrate_C", "ExecuteUbergraph_BP_Behavior_OpenCrate");

	Params::UBP_Behavior_OpenCrate_C_ExecuteUbergraph_BP_Behavior_OpenCrate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_TaskWaitDelay_TaskOwner_CastInput = CallFunc_TaskWaitDelay_TaskOwner_CastInput;
	Parms.CallFunc_TaskWaitDelay_ReturnValue = CallFunc_TaskWaitDelay_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TaskWaitDelay_TaskOwner_CastInput_1 = CallFunc_TaskWaitDelay_TaskOwner_CastInput_1;
	Parms.CallFunc_TaskWaitDelay_ReturnValue_1 = CallFunc_TaskWaitDelay_ReturnValue_1;
	Parms.K2Node_Event_Avatar_1 = K2Node_Event_Avatar_1;
	Parms.K2Node_Event_Config = K2Node_Event_Config;
	Parms.K2Node_Event_SmartObjectOwner = K2Node_Event_SmartObjectOwner;
	Parms.K2Node_DynamicCast_AsVal_Base_Crate = K2Node_DynamicCast_AsVal_Base_Crate;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CanInteract_self_CastInput = CallFunc_CanInteract_self_CastInput;
	Parms.CallFunc_CanInteract_ReturnValue = CallFunc_CanInteract_ReturnValue;
	Parms.K2Node_Event_Avatar = K2Node_Event_Avatar;
	Parms.K2Node_Event_bWasInterrupted = K2Node_Event_bWasInterrupted;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NewState = K2Node_CustomEvent_NewState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Interact_self_CastInput = CallFunc_Interact_self_CastInput;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_StartChanneledInteract_self_CastInput = CallFunc_StartChanneledInteract_self_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_EndChanneledInteract_self_CastInput = CallFunc_EndChanneledInteract_self_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_EndInteraction_self_CastInput = CallFunc_EndInteraction_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}

}


