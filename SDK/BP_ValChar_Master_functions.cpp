#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValChar_Master.BP_ValChar_Master_C
// (Actor, Pawn)

class UClass* ABP_ValChar_Master_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValChar_Master_C");

	return Clss;
}


// BP_ValChar_Master_C BP_ValChar_Master.Default__BP_ValChar_Master_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ValChar_Master_C* ABP_ValChar_Master_C::GetDefaultObj()
{
	static class ABP_ValChar_Master_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ValChar_Master_C*>(ABP_ValChar_Master_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ValChar_Master.BP_ValChar_Master_C.GetEquippedAbilityProjectileClass
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct GameplayTags_GameplayTag    Slot                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AValProjectile>  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetEquippedAbility_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGA_Gun_Master_C*            K2Node_DynamicCast_AsGA_Gun_Master                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

TSubclassOf<class AValProjectile> ABP_ValChar_Master_C::GetEquippedAbilityProjectileClass(struct GameplayTags_GameplayTag& Slot, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetEquippedAbility_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "GetEquippedAbilityProjectileClass");

	Params::ABP_ValChar_Master_C_GetEquippedAbilityProjectileClass_Params Parms{};

	Parms.Slot = Slot;
	Parms.CallFunc_GetEquippedAbility_ReturnValue = CallFunc_GetEquippedAbility_ReturnValue;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue = CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue;
	Parms.K2Node_DynamicCast_AsGA_Gun_Master = K2Node_DynamicCast_AsGA_Gun_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.OnCurrentRoyaleFogData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_CurrentFogCircleDataCallFunc_GetCurrentData_ReturnValue                              (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_C::OnCurrentRoyaleFogData(const struct Valhalla_CurrentFogCircleData& CallFunc_GetCurrentData_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "OnCurrentRoyaleFogData");

	Params::ABP_ValChar_Master_C_OnCurrentRoyaleFogData_Params Parms{};

	Parms.CallFunc_GetCurrentData_ReturnValue = CallFunc_GetCurrentData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.OnActiveRoyaleFog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValGameState_Frontier*      K2Node_DynamicCast_AsVal_Game_State_Frontier                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValRoyaleFogVolume*         CallFunc_GetActiveRoyaleFog_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_C::OnActiveRoyaleFog(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AValGameState_Frontier* K2Node_DynamicCast_AsVal_Game_State_Frontier, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AValRoyaleFogVolume* CallFunc_GetActiveRoyaleFog_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "OnActiveRoyaleFog");

	Params::ABP_ValChar_Master_C_OnActiveRoyaleFog_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_State_Frontier = K2Node_DynamicCast_AsVal_Game_State_Frontier;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActiveRoyaleFog_ReturnValue = CallFunc_GetActiveRoyaleFog_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.PlayEnemyKilledSFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerType             TargetPlayerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Headshot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMovingOnGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_C::PlayEnemyKilledSFX(class AActor* Actor, enum class EPlayerType TargetPlayerType, bool Headshot, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "PlayEnemyKilledSFX");

	Params::ABP_ValChar_Master_C_PlayEnemyKilledSFX_Params Parms{};

	Parms.Actor = Actor;
	Parms.TargetPlayerType = TargetPlayerType;
	Parms.Headshot = Headshot;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_IsMovingOnGround_ReturnValue = CallFunc_IsMovingOnGround_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.RemoveMasteryZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_C::RemoveMasteryZoom(bool CallFunc_RemoveActiveGameplayEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "RemoveMasteryZoom");

	Params::ABP_ValChar_Master_C_RemoveMasteryZoom_Params Parms{};

	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.ApplyMasteryZoom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_MakeOutgoingSpec_ReturnValue                            (None)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_AssignTagSetByCallerMagnitude_ReturnValue               (None)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_C::ApplyMasteryZoom(const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "ApplyMasteryZoom");

	Params::ABP_ValChar_Master_C_ApplyMasteryZoom_Params Parms{};

	Parms.CallFunc_MakeOutgoingSpec_ReturnValue = CallFunc_MakeOutgoingSpec_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.GetStealthDetectionRadius
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_ValChar_Master_C::GetStealthDetectionRadius(bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "GetStealthDetectionRadius");

	Params::ABP_ValChar_Master_C_GetStealthDetectionRadius_Params Parms{};

	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.GetEquippedAbilityTimeBetweenShots
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct GameplayTags_GameplayTag    Slot                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetEquippedAbility_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_Gun_Master_C*            K2Node_DynamicCast_AsGA_Gun_Master                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTimeBetweenShots_TimeBetweenShots                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_ValChar_Master_C::GetEquippedAbilityTimeBetweenShots(struct GameplayTags_GameplayTag& Slot, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetEquippedAbility_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetTimeBetweenShots_TimeBetweenShots, float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "GetEquippedAbilityTimeBetweenShots");

	Params::ABP_ValChar_Master_C_GetEquippedAbilityTimeBetweenShots_Params Parms{};

	Parms.Slot = Slot;
	Parms.CallFunc_GetEquippedAbility_ReturnValue = CallFunc_GetEquippedAbility_ReturnValue;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue = CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsGA_Gun_Master = K2Node_DynamicCast_AsGA_Gun_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTimeBetweenShots_TimeBetweenShots = CallFunc_GetTimeBetweenShots_TimeBetweenShots;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.GetEquippedAbilityFireMode
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct GameplayTags_GameplayTag    Slot                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetEquippedAbility_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGA_Gun_Master_C*            K2Node_DynamicCast_AsGA_Gun_Master                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct GameplayTags_GameplayTag ABP_ValChar_Master_C::GetEquippedAbilityFireMode(struct GameplayTags_GameplayTag& Slot, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetEquippedAbility_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "GetEquippedAbilityFireMode");

	Params::ABP_ValChar_Master_C_GetEquippedAbilityFireMode_Params Parms{};

	Parms.Slot = Slot;
	Parms.CallFunc_GetEquippedAbility_ReturnValue = CallFunc_GetEquippedAbility_ReturnValue;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue = CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsGA_Gun_Master = K2Node_DynamicCast_AsGA_Gun_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.CheckShieldBreakFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_C::CheckShieldBreakFX(int32 OldValue, int32 NewValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue, float CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "CheckShieldBreakFX");

	Params::ABP_ValChar_Master_C_CheckShieldBreakFX_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsLocallyViewed_ReturnValue = CallFunc_IsLocallyViewed_ReturnValue;
	Parms.CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue = CallFunc_GetUnscaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.AttemptReload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetActiveEquippedAbility_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ValAmmoData        CallFunc_GetCurrentAmmo_ReturnValue                              (NoDestructor)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGA_Gun_Master_C*            K2Node_DynamicCast_AsGA_Gun_Master                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetActiveEquippedAbility_ReturnValue_1                  (NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_FindAbilitySpecHandleForClass_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BatchRPCTryActivateAbility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_C::AttemptReload(const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue, const struct Valhalla_ValAmmoData& CallFunc_GetCurrentAmmo_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, class UGA_Gun_Master_C* K2Node_DynamicCast_AsGA_Gun_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue_1, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_FindAbilitySpecHandleForClass_ReturnValue, bool CallFunc_BatchRPCTryActivateAbility_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "AttemptReload");

	Params::ABP_ValChar_Master_C_AttemptReload_Params Parms{};

	Parms.CallFunc_GetActiveEquippedAbility_ReturnValue = CallFunc_GetActiveEquippedAbility_ReturnValue;
	Parms.CallFunc_GetCurrentAmmo_ReturnValue = CallFunc_GetCurrentAmmo_ReturnValue;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue = CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue;
	Parms.K2Node_DynamicCast_AsGA_Gun_Master = K2Node_DynamicCast_AsGA_Gun_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetActiveEquippedAbility_ReturnValue_1 = CallFunc_GetActiveEquippedAbility_ReturnValue_1;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1 = CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1;
	Parms.CallFunc_FindAbilitySpecHandleForClass_ReturnValue = CallFunc_FindAbilitySpecHandleForClass_ReturnValue;
	Parms.CallFunc_BatchRPCTryActivateAbility_ReturnValue = CallFunc_BatchRPCTryActivateAbility_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.SetHealthShieldRTPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ValChar_Master_C::SetHealthShieldRTPC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "SetHealthShieldRTPC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.IsLocalCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_C::IsLocalCharacter(bool* Value, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "IsLocalCharacter");

	Params::ABP_ValChar_Master_C_IsLocalCharacter_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ValChar_Master_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.EventDied
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ValChar_Master_C::EventDied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "EventDied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.EquipSlotUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    EquipSlot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_C::EquipSlotUpdated(const struct GameplayTags_GameplayTag& EquipSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "EquipSlotUpdated");

	Params::ABP_ValChar_Master_C_EquipSlotUpdated_Params Parms{};

	Parms.EquipSlot = EquipSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.EventRespawned
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ValChar_Master_C::EventRespawned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "EventRespawned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.OnDamagedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_DamageData         DamageData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ValChar_Master_C::OnDamagedEvent(const struct Valhalla_DamageData& DamageData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "OnDamagedEvent");

	Params::ABP_ValChar_Master_C_OnDamagedEvent_Params Parms{};

	Parms.DamageData = DamageData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.OnDealtDamageEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_DamageData         Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_C::OnDealtDamageEvent(const struct Valhalla_DamageData& Data, class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "OnDealtDamageEvent");

	Params::ABP_ValChar_Master_C_OnDealtDamageEvent_Params Parms{};

	Parms.Data = Data;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.On Shield Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_C::On_Shield_Changed(int32 OldValue, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "On Shield Changed");

	Params::ABP_ValChar_Master_C_On_Shield_Changed_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.ReserveAmmoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OldValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_C::ReserveAmmoChanged(float OldValue, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "ReserveAmmoChanged");

	Params::ABP_ValChar_Master_C_ReserveAmmoChanged_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.ToggleMasteryAim
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ValChar_Master_C::ToggleMasteryAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "ToggleMasteryAim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.ExecuteUbergraph_BP_ValChar_Master
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_EquipSlot                                     (NoDestructor, HasGetValueTypeHash)
// struct Valhalla_DamageData         K2Node_CustomEvent_DamageData                                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_DamageData         K2Node_CustomEvent_Data                                          (None)
// class AActor*                      K2Node_CustomEvent_Target                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OldValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NewValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_OldValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValGameState_Frontier*      K2Node_DynamicCast_AsVal_Game_State_Frontier                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValDeviceAudioVisual*       CallFunc_GetActiveEquipSlotAV_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ValChar_Master_C::ExecuteUbergraph_BP_ValChar_Master(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_EquipSlot, const struct Valhalla_DamageData& K2Node_CustomEvent_DamageData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct Valhalla_DamageData& K2Node_CustomEvent_Data, class AActor* K2Node_CustomEvent_Target, bool CallFunc_IsLocallyViewed_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 K2Node_CustomEvent_OldValue_1, int32 K2Node_CustomEvent_NewValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_OldValue, float K2Node_CustomEvent_NewValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsLocallyViewed_ReturnValue_1, bool CallFunc_IsLocallyViewed_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AValGameState_Frontier* K2Node_DynamicCast_AsVal_Game_State_Frontier, bool K2Node_DynamicCast_bSuccess, class UValDeviceAudioVisual* CallFunc_GetActiveEquipSlotAV_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "ExecuteUbergraph_BP_ValChar_Master");

	Params::ABP_ValChar_Master_C_ExecuteUbergraph_BP_ValChar_Master_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.K2Node_CustomEvent_EquipSlot = K2Node_CustomEvent_EquipSlot;
	Parms.K2Node_CustomEvent_DamageData = K2Node_CustomEvent_DamageData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Data = K2Node_CustomEvent_Data;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.CallFunc_IsLocallyViewed_ReturnValue = CallFunc_IsLocallyViewed_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_OldValue_1 = K2Node_CustomEvent_OldValue_1;
	Parms.K2Node_CustomEvent_NewValue_1 = K2Node_CustomEvent_NewValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_OldValue = K2Node_CustomEvent_OldValue;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsLocallyViewed_ReturnValue_1 = CallFunc_IsLocallyViewed_ReturnValue_1;
	Parms.CallFunc_IsLocallyViewed_ReturnValue_2 = CallFunc_IsLocallyViewed_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_DynamicCast_AsVal_Game_State_Frontier = K2Node_DynamicCast_AsVal_Game_State_Frontier;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActiveEquipSlotAV_ReturnValue = CallFunc_GetActiveEquipSlotAV_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ValChar_Master.BP_ValChar_Master_C.SpawnAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ValChar_Master_C::SpawnAdded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ValChar_Master_C", "SpawnAdded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


