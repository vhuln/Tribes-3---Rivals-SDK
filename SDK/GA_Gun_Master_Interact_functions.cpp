#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Gun_Master_Interact.GA_Gun_Master_Interact_C
// (None)

class UClass* UGA_Gun_Master_Interact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Gun_Master_Interact_C");

	return Clss;
}


// GA_Gun_Master_Interact_C GA_Gun_Master_Interact.Default__GA_Gun_Master_Interact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Gun_Master_Interact_C* UGA_Gun_Master_Interact_C::GetDefaultObj()
{
	static class UGA_Gun_Master_Interact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Gun_Master_Interact_C*>(UGA_Gun_Master_Interact_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Gun_Master_Interact.GA_Gun_Master_Interact_C.CreateEffectSpec
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayAbilities_GameplayEffectSpecHandleSpec_Handle                                                      (Parm, OutParm)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_AddGrantedTag_ReturnValue                               (None)

void UGA_Gun_Master_Interact_C::CreateEffectSpec(struct GameplayAbilities_GameplayEffectSpecHandle* Spec_Handle, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AddGrantedTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Interact_C", "CreateEffectSpec");

	Params::UGA_Gun_Master_Interact_C_CreateEffectSpec_Params Parms{};

	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddGrantedTag_ReturnValue = CallFunc_AddGrantedTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Spec_Handle != nullptr)
		*Spec_Handle = std::move(Parms.Spec_Handle);

}


// Function GA_Gun_Master_Interact.GA_Gun_Master_Interact_C.Update Channel Time
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Channel_Time                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>K2Node_DynamicCast_AsVal_Interactable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChannelTime_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Channel_Time_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Interact_C::Update_Channel_Time(double* Channel_Time, float Temp_real_Variable, TScriptInterface<class IValInteractable> K2Node_DynamicCast_AsVal_Interactable, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetChannelTime_ReturnValue, double K2Node_FunctionResult_Channel_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Interact_C", "Update Channel Time");

	Params::UGA_Gun_Master_Interact_C_Update_Channel_Time_Params Parms{};

	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.K2Node_DynamicCast_AsVal_Interactable = K2Node_DynamicCast_AsVal_Interactable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChannelTime_ReturnValue = CallFunc_GetChannelTime_ReturnValue;
	Parms.K2Node_FunctionResult_Channel_Time_ImplicitCast = K2Node_FunctionResult_Channel_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Channel_Time != nullptr)
		*Channel_Time = Parms.Channel_Time;

}


// Function GA_Gun_Master_Interact.GA_Gun_Master_Interact_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct GameplayAbilities_GameplayAbilityActorInfoActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct GameplayAbilities_GameplayAbilitySpecHandleHandle                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerRelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetBestInteraction_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Gun_Master_Interact_C::K2_CanActivateAbility(const struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayTags_GameplayTagContainer* RelevantTags, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetBestInteraction_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Interact_C", "K2_CanActivateAbility");

	Params::UGA_Gun_Master_Interact_C_K2_CanActivateAbility_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Handle = Handle;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBestInteraction_ReturnValue = CallFunc_GetBestInteraction_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;

}


// Function GA_Gun_Master_Interact.GA_Gun_Master_Interact_C.PlayHolsterAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      CallFunc_GetGunMesh1P_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMesh3P_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayHolster_HolsterDuration_ImplicitCast                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayHolster_HolsterDuration_ImplicitCast_1              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Interact_C::PlayHolsterAnim(class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance, bool K2Node_DynamicCast_bSuccess, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_PlayHolster_HolsterDuration_ImplicitCast, float CallFunc_PlayHolster_HolsterDuration_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Interact_C", "PlayHolsterAnim");

	Params::UGA_Gun_Master_Interact_C_PlayHolsterAnim_Params Parms{};

	Parms.CallFunc_GetGunMesh1P_ReturnValue = CallFunc_GetGunMesh1P_ReturnValue;
	Parms.CallFunc_GetMesh3P_ReturnValue = CallFunc_GetMesh3P_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance = K2Node_DynamicCast_AsVal_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance_1 = K2Node_DynamicCast_AsVal_Anim_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_PlayHolster_HolsterDuration_ImplicitCast = CallFunc_PlayHolster_HolsterDuration_ImplicitCast;
	Parms.CallFunc_PlayHolster_HolsterDuration_ImplicitCast_1 = CallFunc_PlayHolster_HolsterDuration_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Interact.GA_Gun_Master_Interact_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Gun_Master_Interact_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Interact_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Gun_Master_Interact.GA_Gun_Master_Interact_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasRetriggered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Interact_C::K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Interact_C", "K2_OnEndAbility");

	Params::UGA_Gun_Master_Interact_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;
	Parms.bWasRetriggered = bWasRetriggered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Interact.GA_Gun_Master_Interact_C.StartInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Gun_Master_Interact_C::StartInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Interact_C", "StartInteract");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Gun_Master_Interact.GA_Gun_Master_Interact_C.OnBestInteractionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Interactable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Interact_C::OnBestInteractionChanged(class AActor* Interactable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Interact_C", "OnBestInteractionChanged");

	Params::UGA_Gun_Master_Interact_C_OnBestInteractionChanged_Params Parms{};

	Parms.Interactable = Interactable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Interact.GA_Gun_Master_Interact_C.ModifySwappable
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AValCharacter*               Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Interact_C::ModifySwappable(class AValCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Interact_C", "ModifySwappable");

	Params::UGA_Gun_Master_Interact_C_ModifySwappable_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Interact.GA_Gun_Master_Interact_C.ExecuteUbergraph_GA_Gun_Master_Interact
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNextDrawTime_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValDevice*                  CallFunc_GetPredictedInteractableAbility_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentHolsterTime_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetActiveEquippedAbility_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Engine_TimerHandle          CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerBanned_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerTemp_struct_Variable                                             (None)
// struct GameplayTags_GameplayTagContainerTemp_struct_Variable_1                                           (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ValChar_Master_C*        K2Node_DynamicCast_AsBP_Val_Char_Master                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>K2Node_DynamicCast_AsVal_Interactable                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInteractionFailureType CallFunc_GetBlockInteractReason_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValDeviceAudioVisual*       CallFunc_GetAudioVisual_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerTemp_struct_Variable_2                                           (None)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasRetriggered                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerTemp_struct_Variable_3                                           (None)
// struct GameplayTags_GameplayTagContainerTemp_struct_Variable_4                                           (None)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerTemp_struct_Variable_5                                           (None)
// struct GameplayTags_GameplayTagContainerTemp_struct_Variable_6                                           (None)
// class AActor*                      K2Node_CustomEvent_Interactable                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityActive_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>K2Node_DynamicCast_AsVal_Interactable_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>K2Node_DynamicCast_AsVal_Interactable_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>K2Node_DynamicCast_AsVal_Interactable_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>K2Node_DynamicCast_AsVal_Interactable_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DestructibleDoor_C*      K2Node_DynamicCast_AsBP_Destructible_Door                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EInteractableTargetType Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValBaseCrate*               K2Node_DynamicCast_AsVal_Base_Crate                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECrateState             CallFunc_GetCurrentState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>K2Node_DynamicCast_AsVal_Interactable_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetBestInteraction_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>K2Node_DynamicCast_AsVal_Interactable_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowDeviceAudioVisual_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetGunMesh1P_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetActiveEquippedAbility_ReturnValue_1                  (NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValDevice*                  K2Node_DynamicCast_AsVal_Device                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValDeviceAudioVisual*       CallFunc_GetAudioVisual_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowDeviceAudioVisual_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_Event_Character                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChannelTime_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTotalChannelTimeWithChanneler_ChannelTime            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Update_Channel_Time_Channel_Time                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_CreateEffectSpec_Spec_Handle                            (None)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_BP_ApplyGameplayEffectSpecToSelfWithPrediction_ReturnValue(NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerK2Node_Select_Default                                            (None)
// bool                               CallFunc_K2_HasAuthority_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerK2Node_Select_Default_1                                          (None)
// struct GameplayAbilities_GameplayCueParametersCallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// bool                               CallFunc_K2_HasAuthority_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CachedDrawSpeed_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CachedHolsterSpeed_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Interact_C::ExecuteUbergraph_GA_Gun_Master_Interact(int32 EntryPoint, bool CallFunc_K2_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetNextDrawTime_ReturnValue, class UValDevice* CallFunc_GetPredictedInteractableAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetCurrentHolsterTime_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, const struct Engine_TimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsPlayerBanned_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct GameplayTags_GameplayTagContainer& Temp_struct_Variable, const struct GameplayTags_GameplayTagContainer& Temp_struct_Variable_1, bool Temp_bool_Variable, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_4, TScriptInterface<class IValInteractable> K2Node_DynamicCast_AsVal_Interactable, bool K2Node_DynamicCast_bSuccess_1, enum class EInteractionFailureType CallFunc_GetBlockInteractReason_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UValDeviceAudioVisual* CallFunc_GetAudioVisual_ReturnValue, const struct GameplayTags_GameplayTagContainer& Temp_struct_Variable_2, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, const struct GameplayTags_GameplayTagContainer& Temp_struct_Variable_3, const struct GameplayTags_GameplayTagContainer& Temp_struct_Variable_4, bool CallFunc_BooleanAND_ReturnValue_1, const struct GameplayTags_GameplayTagContainer& Temp_struct_Variable_5, const struct GameplayTags_GameplayTagContainer& Temp_struct_Variable_6, class AActor* K2Node_CustomEvent_Interactable, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsAbilityActive_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TScriptInterface<class IValInteractable> K2Node_DynamicCast_AsVal_Interactable_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IValInteractable> K2Node_DynamicCast_AsVal_Interactable_2, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IValInteractable> K2Node_DynamicCast_AsVal_Interactable_3, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IValInteractable> K2Node_DynamicCast_AsVal_Interactable_4, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_5, class ABP_DestructibleDoor_C* K2Node_DynamicCast_AsBP_Destructible_Door, bool K2Node_DynamicCast_bSuccess_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EInteractableTargetType Temp_byte_Variable, class AValBaseCrate* K2Node_DynamicCast_AsVal_Base_Crate, bool K2Node_DynamicCast_bSuccess_7, class UClass* CallFunc_GetObjectClass_ReturnValue, enum class ECrateState CallFunc_GetCurrentState_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_2, bool CallFunc_ClassIsChildOf_ReturnValue_3, bool CallFunc_ClassIsChildOf_ReturnValue_4, TScriptInterface<class IValInteractable> K2Node_DynamicCast_AsVal_Interactable_5, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_IsValid_ReturnValue_6, class AActor* CallFunc_GetBestInteraction_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, TScriptInterface<class IValInteractable> K2Node_DynamicCast_AsVal_Interactable_6, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_ShowDeviceAudioVisual_ReturnValue, class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue_1, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1, class UValDevice* K2Node_DynamicCast_AsVal_Device, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsValid_ReturnValue_9, class UValDeviceAudioVisual* CallFunc_GetAudioVisual_ReturnValue_1, bool CallFunc_ShowDeviceAudioVisual_ReturnValue_1, class AValCharacter* K2Node_Event_Character, bool CallFunc_IsValid_ReturnValue_10, float CallFunc_GetChannelTime_ReturnValue, float Temp_real_Variable, double CallFunc_GetTotalChannelTimeWithChanneler_ChannelTime, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_Update_Channel_Time_Channel_Time, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_CreateEffectSpec_Spec_Handle, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelfWithPrediction_ReturnValue, const struct GameplayTags_GameplayTagContainer& K2Node_Select_Default, bool CallFunc_K2_HasAuthority_ReturnValue_1, const struct GameplayTags_GameplayTagContainer& K2Node_Select_Default_1, const struct GameplayAbilities_GameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue_2, bool CallFunc_K2_HasAuthority_ReturnValue_3, double K2Node_VariableSet_CachedDrawSpeed_ImplicitCast, double K2Node_VariableSet_CachedHolsterSpeed_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Interact_C", "ExecuteUbergraph_GA_Gun_Master_Interact");

	Params::UGA_Gun_Master_Interact_C_ExecuteUbergraph_GA_Gun_Master_Interact_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetNextDrawTime_ReturnValue = CallFunc_GetNextDrawTime_ReturnValue;
	Parms.CallFunc_GetPredictedInteractableAbility_ReturnValue = CallFunc_GetPredictedInteractableAbility_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCurrentHolsterTime_ReturnValue = CallFunc_GetCurrentHolsterTime_ReturnValue;
	Parms.CallFunc_GetActiveEquippedAbility_ReturnValue = CallFunc_GetActiveEquippedAbility_ReturnValue;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue = CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsPlayerBanned_ReturnValue = CallFunc_IsPlayerBanned_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Val_Char_Master = K2Node_DynamicCast_AsBP_Val_Char_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsVal_Interactable = K2Node_DynamicCast_AsVal_Interactable;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBlockInteractReason_ReturnValue = CallFunc_GetBlockInteractReason_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAudioVisual_ReturnValue = CallFunc_GetAudioVisual_ReturnValue;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_bWasRetriggered = K2Node_Event_bWasRetriggered;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.K2Node_CustomEvent_Interactable = K2Node_CustomEvent_Interactable;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_IsAbilityActive_ReturnValue = CallFunc_IsAbilityActive_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Interactable_1 = K2Node_DynamicCast_AsVal_Interactable_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsVal_Interactable_2 = K2Node_DynamicCast_AsVal_Interactable_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsVal_Interactable_3 = K2Node_DynamicCast_AsVal_Interactable_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsVal_Interactable_4 = K2Node_DynamicCast_AsVal_Interactable_4;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_Destructible_Door = K2Node_DynamicCast_AsBP_Destructible_Door;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_DynamicCast_AsVal_Base_Crate = K2Node_DynamicCast_AsVal_Base_Crate;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetCurrentState_ReturnValue = CallFunc_GetCurrentState_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_1 = CallFunc_ClassIsChildOf_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_2 = CallFunc_ClassIsChildOf_ReturnValue_2;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_3 = CallFunc_ClassIsChildOf_ReturnValue_3;
	Parms.CallFunc_ClassIsChildOf_ReturnValue_4 = CallFunc_ClassIsChildOf_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsVal_Interactable_5 = K2Node_DynamicCast_AsVal_Interactable_5;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetBestInteraction_ReturnValue = CallFunc_GetBestInteraction_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsVal_Interactable_6 = K2Node_DynamicCast_AsVal_Interactable_6;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_ShowDeviceAudioVisual_ReturnValue = CallFunc_ShowDeviceAudioVisual_ReturnValue;
	Parms.CallFunc_GetGunMesh1P_ReturnValue = CallFunc_GetGunMesh1P_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetActiveEquippedAbility_ReturnValue_1 = CallFunc_GetActiveEquippedAbility_ReturnValue_1;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1 = CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVal_Device = K2Node_DynamicCast_AsVal_Device;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetAudioVisual_ReturnValue_1 = CallFunc_GetAudioVisual_ReturnValue_1;
	Parms.CallFunc_ShowDeviceAudioVisual_ReturnValue_1 = CallFunc_ShowDeviceAudioVisual_ReturnValue_1;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetChannelTime_ReturnValue = CallFunc_GetChannelTime_ReturnValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_GetTotalChannelTimeWithChanneler_ChannelTime = CallFunc_GetTotalChannelTimeWithChanneler_ChannelTime;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Update_Channel_Time_Channel_Time = CallFunc_Update_Channel_Time_Channel_Time;
	Parms.CallFunc_CreateEffectSpec_Spec_Handle = CallFunc_CreateEffectSpec_Spec_Handle;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelfWithPrediction_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelfWithPrediction_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_HasAuthority_ReturnValue_1 = CallFunc_K2_HasAuthority_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_K2_HasAuthority_ReturnValue_2 = CallFunc_K2_HasAuthority_ReturnValue_2;
	Parms.CallFunc_K2_HasAuthority_ReturnValue_3 = CallFunc_K2_HasAuthority_ReturnValue_3;
	Parms.K2Node_VariableSet_CachedDrawSpeed_ImplicitCast = K2Node_VariableSet_CachedDrawSpeed_ImplicitCast;
	Parms.K2Node_VariableSet_CachedHolsterSpeed_ImplicitCast = K2Node_VariableSet_CachedHolsterSpeed_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast_1 = CallFunc_Delay_Duration_ImplicitCast_1;
	Parms.CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast = CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


