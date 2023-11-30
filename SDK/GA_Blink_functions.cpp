#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Blink.GA_Blink_C
// (None)

class UClass* UGA_Blink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Blink_C");

	return Clss;
}


// GA_Blink_C GA_Blink.Default__GA_Blink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Blink_C* UGA_Blink_C::GetDefaultObj()
{
	static class UGA_Blink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Blink_C*>(UGA_Blink_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Blink.GA_Blink_C.GetAbilityProjectileSpeed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGA_Blink_C::GetAbilityProjectileSpeed(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "GetAbilityProjectileSpeed");

	Params::UGA_Blink_C_GetAbilityProjectileSpeed_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Blink.GA_Blink_C.GetAbilityDeployTime
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGA_Blink_C::GetAbilityDeployTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "GetAbilityDeployTime");

	Params::UGA_Blink_C_GetAbilityDeployTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Blink.GA_Blink_C.GetAbilityEffectsToApply
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<TSubclassOf<class UGameplayEffect>>ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper)

TArray<TSubclassOf<class UGameplayEffect>> UGA_Blink_C::GetAbilityEffectsToApply()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "GetAbilityEffectsToApply");

	Params::UGA_Blink_C_GetAbilityEffectsToApply_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Blink.GA_Blink_C.GetAbilityCastTime
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGA_Blink_C::GetAbilityCastTime(float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "GetAbilityCastTime");

	Params::UGA_Blink_C_GetAbilityCastTime_Params Parms{};

	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Blink.GA_Blink_C.GetAbilityCooldownModifier
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGA_Blink_C::GetAbilityCooldownModifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "GetAbilityCooldownModifier");

	Params::UGA_Blink_C_GetAbilityCooldownModifier_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Blink.GA_Blink_C.GetAbilityDuration
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGA_Blink_C::GetAbilityDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "GetAbilityDuration");

	Params::UGA_Blink_C_GetAbilityDuration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Blink.GA_Blink_C.GetAbilityRange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UGA_Blink_C::GetAbilityRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "GetAbilityRange");

	Params::UGA_Blink_C_GetAbilityRange_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Blink.GA_Blink_C.ApplyDamageResistanceModifier
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OutPercentModifier                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutFlatModifier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutShieldModifier                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectContextHandleDamageContext                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Blink_C::ApplyDamageResistanceModifier(float& OutPercentModifier, float& OutFlatModifier, float& OutShieldModifier, float Damage, struct GameplayAbilities_GameplayEffectContextHandle& DamageContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "ApplyDamageResistanceModifier");

	Params::UGA_Blink_C_ApplyDamageResistanceModifier_Params Parms{};

	Parms.OutPercentModifier = OutPercentModifier;
	Parms.OutFlatModifier = OutFlatModifier;
	Parms.OutShieldModifier = OutShieldModifier;
	Parms.Damage = Damage;
	Parms.DamageContext = DamageContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.DoubleBlinkExpired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Blink_C::DoubleBlinkExpired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "DoubleBlinkExpired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Blink.GA_Blink_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct GameplayAbilities_GameplayAbilityActorInfoActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct GameplayAbilities_GameplayAbilitySpecHandleHandle                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTagContainerRelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ValChar_Master_C*        K2Node_DynamicCast_AsBP_Val_Char_Master                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValCharacterMovementComponent*K2Node_DynamicCast_AsVal_Character_Movement_Component            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Blink_C::K2_CanActivateAbility(const struct GameplayAbilities_GameplayAbilityActorInfo& ActorInfo, const struct GameplayAbilities_GameplayAbilitySpecHandle& Handle, struct GameplayTags_GameplayTagContainer* RelevantTags, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UValCharacterMovementComponent* K2Node_DynamicCast_AsVal_Character_Movement_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsFalling_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "K2_CanActivateAbility");

	Params::UGA_Blink_C_K2_CanActivateAbility_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Handle = Handle;
	Parms.K2Node_DynamicCast_AsBP_Val_Char_Master = K2Node_DynamicCast_AsBP_Val_Char_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Character_Movement_Component = K2Node_DynamicCast_AsVal_Character_Movement_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;

}


// Function GA_Blink.GA_Blink_C.Reload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReserveAmmo                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ClipAmmo                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ClipAmmoMax                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmmoClips                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInstigatorLocallyControlled_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ValAmmoData        CallFunc_GetCurrentAmmo_ReturnValue                              (NoDestructor)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddClipAndReserveAmmo_ClipAmount_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AddClipAndReserveAmmo_ReserveAmount_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::Reload(int32 ReserveAmmo, int32 ClipAmmo, int32 ClipAmmoMax, int32 AmmoClips, bool CallFunc_IsInstigatorLocallyControlled_ReturnValue, const struct Valhalla_ValAmmoData& CallFunc_GetCurrentAmmo_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_Round_ReturnValue_2, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Round_A_ImplicitCast, double CallFunc_Round_A_ImplicitCast_1, double CallFunc_Round_A_ImplicitCast_2, float CallFunc_AddClipAndReserveAmmo_ClipAmount_ImplicitCast, float CallFunc_AddClipAndReserveAmmo_ReserveAmount_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "Reload");

	Params::UGA_Blink_C_Reload_Params Parms{};

	Parms.ReserveAmmo = ReserveAmmo;
	Parms.ClipAmmo = ClipAmmo;
	Parms.ClipAmmoMax = ClipAmmoMax;
	Parms.AmmoClips = AmmoClips;
	Parms.CallFunc_IsInstigatorLocallyControlled_ReturnValue = CallFunc_IsInstigatorLocallyControlled_ReturnValue;
	Parms.CallFunc_GetCurrentAmmo_ReturnValue = CallFunc_GetCurrentAmmo_ReturnValue;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue_2 = CallFunc_Round_ReturnValue_2;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;
	Parms.CallFunc_Round_A_ImplicitCast_1 = CallFunc_Round_A_ImplicitCast_1;
	Parms.CallFunc_Round_A_ImplicitCast_2 = CallFunc_Round_A_ImplicitCast_2;
	Parms.CallFunc_AddClipAndReserveAmmo_ClipAmount_ImplicitCast = CallFunc_AddClipAndReserveAmmo_ClipAmount_ImplicitCast;
	Parms.CallFunc_AddClipAndReserveAmmo_ReserveAmount_ImplicitCast = CallFunc_AddClipAndReserveAmmo_ReserveAmount_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.GetBlinkDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Vector          Direction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GetActorEyesViewPoint_OutLocation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_GetActorEyesViewPoint_OutRotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct CoreUObject_Vector          CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Vector_Normal2D_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSizeXYSquared_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_SelectVector_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::GetBlinkDirection(struct CoreUObject_Vector* Direction, const struct CoreUObject_Vector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct CoreUObject_Rotator& CallFunc_GetActorEyesViewPoint_OutRotation, const struct CoreUObject_Vector& CallFunc_GetForwardVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_Vector_Normal2D_ReturnValue, double CallFunc_VSizeXYSquared_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, const struct CoreUObject_Vector& CallFunc_SelectVector_ReturnValue, const struct CoreUObject_Vector& CallFunc_SelectVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "GetBlinkDirection");

	Params::UGA_Blink_C_GetBlinkDirection_Params Parms{};

	Parms.CallFunc_GetActorEyesViewPoint_OutLocation = CallFunc_GetActorEyesViewPoint_OutLocation;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation = CallFunc_GetActorEyesViewPoint_OutRotation;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Vector_Normal2D_ReturnValue = CallFunc_Vector_Normal2D_ReturnValue;
	Parms.CallFunc_VSizeXYSquared_ReturnValue = CallFunc_VSizeXYSquared_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue_1 = CallFunc_SelectVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);

}


// Function GA_Blink.GA_Blink_C.PlayFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Vector          Start                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          End                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayCueParametersCallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// struct GameplayAbilities_GameplayCueParametersCallFunc_MakeGameplayCueParameters_ReturnValue_1                 (ContainsInstancedReference)
// bool                               CallFunc_IsLocallyViewed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetThirdPersonCameraAlpha_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::PlayFX(const struct CoreUObject_Vector& Start, const struct CoreUObject_Vector& End, const struct GameplayAbilities_GameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, const struct GameplayAbilities_GameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_1, bool CallFunc_IsLocallyViewed_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetThirdPersonCameraAlpha_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "PlayFX");

	Params::UGA_Blink_C_PlayFX_Params Parms{};

	Parms.Start = Start;
	Parms.End = End;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_1 = CallFunc_MakeGameplayCueParameters_ReturnValue_1;
	Parms.CallFunc_IsLocallyViewed_ReturnValue = CallFunc_IsLocallyViewed_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_1 = CallFunc_SpawnSystemAtLocation_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetThirdPersonCameraAlpha_ReturnValue = CallFunc_GetThirdPersonCameraAlpha_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      CallFunc_GetMesh1P_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetWalkableFloorAngle_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilityActorInfoCallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// class ABP_ValChar_Master_C*        K2Node_DynamicCast_AsBP_Val_Char_Master                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_MaxWalkableFloorAngle_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::Reset(class USkeletalMeshComponent* CallFunc_GetMesh1P_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_K2_GetWalkableFloorAngle_ReturnValue, const struct GameplayAbilities_GameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, double K2Node_VariableSet_MaxWalkableFloorAngle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "Reset");

	Params::UGA_Blink_C_Reset_Params Parms{};

	Parms.CallFunc_GetMesh1P_ReturnValue = CallFunc_GetMesh1P_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetWalkableFloorAngle_ReturnValue = CallFunc_K2_GetWalkableFloorAngle_ReturnValue;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Val_Char_Master = K2Node_DynamicCast_AsBP_Val_Char_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_VariableSet_MaxWalkableFloorAngle_ImplicitCast = K2Node_VariableSet_MaxWalkableFloorAngle_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.Step Blink Test
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Vector          StartPosition                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             HalfHeight                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ValChar_Master_C*        Char                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          StepLocation                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ZStepAngle                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Hit                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          Sphere_Impact_Point                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          BlinkToNonAdjusted                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDrawDebugTrace         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDrawDebugTrace         Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDrawDebugTrace         Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDrawDebugTrace         Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleRadius_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDrawDebugTrace         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct CoreUObject_Vector          CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_HitResult            CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// struct CoreUObject_Vector          CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDrawDebugTrace         K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_HitResult            CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DegAcos_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SphereTraceSingle_Radius_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::Step_Blink_Test(const struct CoreUObject_Vector& StartPosition, const struct CoreUObject_Vector& Direction, double Distance, double HalfHeight, class ABP_ValChar_Master_C* Char, struct CoreUObject_Vector* StepLocation, double* ZStepAngle, bool* Hit, const struct CoreUObject_Vector& Sphere_Impact_Point, const struct CoreUObject_Vector& BlinkToNonAdjusted, enum class EDrawDebugTrace Temp_byte_Variable, const struct CoreUObject_Vector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue, bool Temp_bool_Variable, enum class EDrawDebugTrace Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class EDrawDebugTrace Temp_byte_Variable_2, enum class EDrawDebugTrace Temp_byte_Variable_3, const struct CoreUObject_Vector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Multiply_VectorFloat_ReturnValue_2, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue_1, float CallFunc_GetScaledCapsuleRadius_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue, enum class EDrawDebugTrace K2Node_Select_Default, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue_2, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue_3, TArray<class AActor*>& K2Node_MakeArray_Array, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue_1, const struct Engine_HitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct CoreUObject_Vector& CallFunc_Add_VectorVector_ReturnValue_4, bool Temp_bool_Variable_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue_2, enum class EDrawDebugTrace K2Node_Select_Default_1, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue, const struct Engine_HitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct CoreUObject_Vector& K2Node_Select_Default_2, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Location_1, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactPoint_1, const struct CoreUObject_Vector& CallFunc_BreakHitResult_Normal_1, const struct CoreUObject_Vector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceStart_1, const struct CoreUObject_Vector& CallFunc_BreakHitResult_TraceEnd_1, const struct CoreUObject_Vector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_Normal_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_DegAcos_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SphereTraceSingle_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "Step Blink Test");

	Params::UGA_Blink_C_Step_Blink_Test_Params Parms{};

	Parms.StartPosition = StartPosition;
	Parms.Direction = Direction;
	Parms.Distance = Distance;
	Parms.HalfHeight = HalfHeight;
	Parms.Char = Char;
	Parms.Sphere_Impact_Point = Sphere_Impact_Point;
	Parms.BlinkToNonAdjusted = BlinkToNonAdjusted;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_GetScaledCapsuleRadius_ReturnValue = CallFunc_GetScaledCapsuleRadius_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = CallFunc_Add_VectorVector_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_SphereTraceSingle_OutHit = CallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = CallFunc_SphereTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = CallFunc_Add_VectorVector_ReturnValue_4;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_BoneName_1 = CallFunc_BreakHitResult_BoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_DegAcos_ReturnValue = CallFunc_DegAcos_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SphereTraceSingle_Radius_ImplicitCast = CallFunc_SphereTraceSingle_Radius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (StepLocation != nullptr)
		*StepLocation = std::move(Parms.StepLocation);

	if (ZStepAngle != nullptr)
		*ZStepAngle = Parms.ZStepAngle;

	if (Hit != nullptr)
		*Hit = Parms.Hit;

}


// Function GA_Blink.GA_Blink_C.OnFinish_A6A1D328499F60DD6C37BDA6505A2685
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Blink_C::OnFinish_A6A1D328499F60DD6C37BDA6505A2685()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "OnFinish_A6A1D328499F60DD6C37BDA6505A2685");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Blink.GA_Blink_C.ValidData_25BF4A5A4DF891062AAFA4992517EFB1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayAbilities_GameplayAbilityTargetDataHandleData                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Blink_C::ValidData_25BF4A5A4DF891062AAFA4992517EFB1(struct GameplayAbilities_GameplayAbilityTargetDataHandle& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "ValidData_25BF4A5A4DF891062AAFA4992517EFB1");

	Params::UGA_Blink_C_ValidData_25BF4A5A4DF891062AAFA4992517EFB1_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.OnTagRemoved_035831294DE39697BEC6588B690BE1FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::OnTagRemoved_035831294DE39697BEC6588B690BE1FA(const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "OnTagRemoved_035831294DE39697BEC6588B690BE1FA");

	Params::UGA_Blink_C_OnTagRemoved_035831294DE39697BEC6588B690BE1FA_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.OnTagAdded_035831294DE39697BEC6588B690BE1FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::OnTagAdded_035831294DE39697BEC6588B690BE1FA(const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "OnTagAdded_035831294DE39697BEC6588B690BE1FA");

	Params::UGA_Blink_C_OnTagAdded_035831294DE39697BEC6588B690BE1FA_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.AddAbilityEffectToApply
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UGameplayEffect> Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UGA_Blink_C::AddAbilityEffectToApply(TSubclassOf<class UGameplayEffect> Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "AddAbilityEffectToApply");

	Params::UGA_Blink_C_AddAbilityEffectToApply_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.SetAbilityDeployTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::SetAbilityDeployTime(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "SetAbilityDeployTime");

	Params::UGA_Blink_C_SetAbilityDeployTime_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.SetAbilityDuration
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::SetAbilityDuration(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "SetAbilityDuration");

	Params::UGA_Blink_C_SetAbilityDuration_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.SetAbilityProjectileSpeed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::SetAbilityProjectileSpeed(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "SetAbilityProjectileSpeed");

	Params::UGA_Blink_C_SetAbilityProjectileSpeed_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.SetAbilityRange
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::SetAbilityRange(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "SetAbilityRange");

	Params::UGA_Blink_C_SetAbilityRange_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Blink_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Blink.GA_Blink_C.RemoveTeleportCues
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Blink_C::RemoveTeleportCues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "RemoveTeleportCues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Blink.GA_Blink_C.TeleportCues
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ValChar_Master_C*        Char                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          InitialLocation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          Destination                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::TeleportCues(class ABP_ValChar_Master_C* Char, const struct CoreUObject_Vector& InitialLocation, const struct CoreUObject_Vector& Destination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "TeleportCues");

	Params::UGA_Blink_C_TeleportCues_Params Parms{};

	Parms.Char = Char;
	Parms.InitialLocation = InitialLocation;
	Parms.Destination = Destination;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.PickTeleportLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Blink_C::PickTeleportLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "PickTeleportLocation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Blink.GA_Blink_C.SetAbilityCastTime
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::SetAbilityCastTime(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "SetAbilityCastTime");

	Params::UGA_Blink_C_SetAbilityCastTime_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.ApplyTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayAbilities_GameplayAbilityTargetDataHandleTargetData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Blink_C::ApplyTeleport(const struct GameplayAbilities_GameplayAbilityTargetDataHandle& TargetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "ApplyTeleport");

	Params::UGA_Blink_C_ApplyTeleport_Params Parms{};

	Parms.TargetData = TargetData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasRetriggered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "K2_OnEndAbility");

	Params::UGA_Blink_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;
	Parms.bWasRetriggered = bWasRetriggered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.OmnidirectionalUpgrade
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Blink_C::OmnidirectionalUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "OmnidirectionalUpgrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Blink.GA_Blink_C.SetAbilityCooldownModifier
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::SetAbilityCooldownModifier(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "SetAbilityCooldownModifier");

	Params::UGA_Blink_C_SetAbilityCooldownModifier_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Blink.GA_Blink_C.ExtendDistance
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Blink_C::ExtendDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "ExtendDistance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Blink.GA_Blink_C.ExecuteUbergraph_GA_Blink
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue              (None)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_SetDuration_ReturnValue                                 (None)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_1            (None)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue           (NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_SetDuration_ReturnValue_1                               (None)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1         (NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_2            (None)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_SetDuration_ReturnValue_2                               (None)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_AssignTagSetByCallerMagnitude_ReturnValue               (None)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_2         (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATeamState*                  CallFunc_GetTeamStateFromObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetMembers_OutMembers                                   (ReferenceParm)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_DynamicCast_AsPlayer_State                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_ReturnValue                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValDamageable>CallFunc_IsAlive_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_3            (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1             (None)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_4            (None)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_SetDuration_ReturnValue_3                               (None)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_3         (NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UGameplayEffect> K2Node_Event_Value_6                                             (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              K2Node_Event_Value_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Value_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Value_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Value_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_HitResult            CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_Tag                                           (NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_Tag_1                                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ValChar_Master_C*        K2Node_CustomEvent_Char                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          K2Node_CustomEvent_InitialLocation                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          K2Node_CustomEvent_Destination                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayCueParametersCallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// struct GameplayAbilities_GameplayCueParametersCallFunc_MakeGameplayCueParameters_ReturnValue_1                 (ContainsInstancedReference)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GetBlinkDirection_Direction                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Value_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_Step_Blink_Test_StepLocation                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Step_Blink_Test_ZStepAngle                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Step_Blink_Test_Hit                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Transform       CallFunc_GetTargetDataOrigin_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct CoreUObject_Vector          CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GetTargetDataEndPoint_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_HitResult            CallFunc_MakeHitResult_ReturnValue                               (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct Engine_HitResult>    K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct GameplayAbilities_GameplayAbilityTargetDataHandleCallFunc_MakeGameplayAbilityTargetDataHandleFromHitResults_ReturnValue(None)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasRetriggered                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValAT_ServerWaitForClientTargetData*CallFunc_ServerWaitForClientTargetData_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilityTargetDataHandleTemp_struct_Variable_1                                           (None)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilityTargetDataHandleK2Node_CustomEvent_Data                                          (ConstParm)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_5            (None)
// struct GameplayAbilities_GameplayEffectSpecHandleCallFunc_SetDuration_ReturnValue_4                               (None)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_4         (NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValAT_GameplayTagAddedRemoved*CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CheckAbilityCooldown_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CharPlayer_C*            K2Node_DynamicCast_AsBP_Char_Player                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyViewed_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_WaitDelay_Time_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CastTime_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Step_Blink_Test_HalfHeight_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Blink_C::ExecuteUbergraph_GA_Blink(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_1, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue_1, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_2, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue_2, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_2, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class ATeamState* CallFunc_GetTeamStateFromObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UObject*>& CallFunc_GetMembers_OutMembers, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* K2Node_DynamicCast_AsPlayer_State, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetPawn_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, TScriptInterface<class IValDamageable> CallFunc_IsAlive_self_CastInput, bool CallFunc_IsAlive_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct GameplayTags_GameplayTag& Temp_struct_Variable, bool CallFunc_BooleanAND_ReturnValue_1, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_4, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue_3, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_3, TSubclassOf<class UGameplayEffect> K2Node_Event_Value_6, float K2Node_Event_Value_5, float K2Node_Event_Value_4, float K2Node_Event_Value_3, float K2Node_Event_Value_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ABP_ValChar_Master_C* K2Node_CustomEvent_Char, const struct CoreUObject_Vector& K2Node_CustomEvent_InitialLocation, const struct CoreUObject_Vector& K2Node_CustomEvent_Destination, const struct GameplayAbilities_GameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, const struct GameplayAbilities_GameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue_1, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct CoreUObject_Vector& CallFunc_GetBlinkDirection_Direction, float K2Node_Event_Value_1, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct CoreUObject_Vector& CallFunc_Step_Blink_Test_StepLocation, double CallFunc_Step_Blink_Test_ZStepAngle, bool CallFunc_Step_Blink_Test_Hit, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, const struct GameplayAbilities_GameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct CoreUObject_Transform& CallFunc_GetTargetDataOrigin_ReturnValue, const struct CoreUObject_Vector& CallFunc_BreakTransform_Location, const struct CoreUObject_Rotator& CallFunc_BreakTransform_Rotation, const struct CoreUObject_Vector& CallFunc_BreakTransform_Scale, const struct CoreUObject_Vector& CallFunc_GetTargetDataEndPoint_ReturnValue, const struct Engine_HitResult& CallFunc_MakeHitResult_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, TArray<struct Engine_HitResult>& K2Node_MakeArray_Array, const struct GameplayAbilities_GameplayAbilityTargetDataHandle& CallFunc_MakeGameplayAbilityTargetDataHandleFromHitResults_ReturnValue, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, class UValAT_ServerWaitForClientTargetData* CallFunc_ServerWaitForClientTargetData_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, const struct GameplayAbilities_GameplayAbilityTargetDataHandle& Temp_struct_Variable_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, float K2Node_Event_Value, const struct GameplayAbilities_GameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_5, const struct GameplayAbilities_GameplayEffectSpecHandle& CallFunc_SetDuration_ReturnValue_4, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_4, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_K2_CheckAbilityCooldown_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ABP_CharPlayer_C* K2Node_DynamicCast_AsBP_Char_Player, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsLocallyViewed_ReturnValue, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, float CallFunc_WaitDelay_Time_ImplicitCast, double K2Node_VariableSet_CastTime_ImplicitCast, double CallFunc_Step_Blink_Test_HalfHeight_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Blink_C", "ExecuteUbergraph_GA_Blink");

	Params::UGA_Blink_C_ExecuteUbergraph_GA_Blink_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue;
	Parms.CallFunc_SetDuration_ReturnValue = CallFunc_SetDuration_ReturnValue;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_1 = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_1;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue;
	Parms.CallFunc_SetDuration_ReturnValue_1 = CallFunc_SetDuration_ReturnValue_1;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1 = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_1;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_2 = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_2;
	Parms.CallFunc_SetDuration_ReturnValue_2 = CallFunc_SetDuration_ReturnValue_2;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_2 = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTeamStateFromObject_ReturnValue = CallFunc_GetTeamStateFromObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMembers_OutMembers = CallFunc_GetMembers_OutMembers;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_State = K2Node_DynamicCast_AsPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPawn_ReturnValue = CallFunc_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsAlive_self_CastInput = CallFunc_IsAlive_self_CastInput;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_3 = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1 = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_4 = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_4;
	Parms.CallFunc_SetDuration_ReturnValue_3 = CallFunc_SetDuration_ReturnValue_3;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_3 = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_3;
	Parms.K2Node_Event_Value_6 = K2Node_Event_Value_6;
	Parms.K2Node_Event_Value_5 = K2Node_Event_Value_5;
	Parms.K2Node_Event_Value_4 = K2Node_Event_Value_4;
	Parms.K2Node_Event_Value_3 = K2Node_Event_Value_3;
	Parms.K2Node_Event_Value_2 = K2Node_Event_Value_2;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.K2Node_CustomEvent_Tag = K2Node_CustomEvent_Tag;
	Parms.K2Node_CustomEvent_Tag_1 = K2Node_CustomEvent_Tag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Char = K2Node_CustomEvent_Char;
	Parms.K2Node_CustomEvent_InitialLocation = K2Node_CustomEvent_InitialLocation;
	Parms.K2Node_CustomEvent_Destination = K2Node_CustomEvent_Destination;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue_1 = CallFunc_MakeGameplayCueParameters_ReturnValue_1;
	Parms.CallFunc_WaitDelay_ReturnValue = CallFunc_WaitDelay_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetBlinkDirection_Direction = CallFunc_GetBlinkDirection_Direction;
	Parms.K2Node_Event_Value_1 = K2Node_Event_Value_1;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Step_Blink_Test_StepLocation = CallFunc_Step_Blink_Test_StepLocation;
	Parms.CallFunc_Step_Blink_Test_ZStepAngle = CallFunc_Step_Blink_Test_ZStepAngle;
	Parms.CallFunc_Step_Blink_Test_Hit = CallFunc_Step_Blink_Test_Hit;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetTargetDataOrigin_ReturnValue = CallFunc_GetTargetDataOrigin_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetTargetDataEndPoint_ReturnValue = CallFunc_GetTargetDataEndPoint_ReturnValue;
	Parms.CallFunc_MakeHitResult_ReturnValue = CallFunc_MakeHitResult_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeGameplayAbilityTargetDataHandleFromHitResults_ReturnValue = CallFunc_MakeGameplayAbilityTargetDataHandleFromHitResults_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_bWasRetriggered = K2Node_Event_bWasRetriggered;
	Parms.CallFunc_ServerWaitForClientTargetData_ReturnValue = CallFunc_ServerWaitForClientTargetData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_2 = CallFunc_LessEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_CustomEvent_Data = K2Node_CustomEvent_Data;
	Parms.CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_5 = CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue_5;
	Parms.CallFunc_SetDuration_ReturnValue_4 = CallFunc_SetDuration_ReturnValue_4;
	Parms.CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_4 = CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue_4;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue = CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_K2_CheckAbilityCooldown_ReturnValue = CallFunc_K2_CheckAbilityCooldown_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_3 = CallFunc_LessEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Char_Player = K2Node_DynamicCast_AsBP_Char_Player;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsLocallyViewed_ReturnValue = CallFunc_IsLocallyViewed_ReturnValue;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast;
	Parms.CallFunc_WaitDelay_Time_ImplicitCast = CallFunc_WaitDelay_Time_ImplicitCast;
	Parms.K2Node_VariableSet_CastTime_ImplicitCast = K2Node_VariableSet_CastTime_ImplicitCast;
	Parms.CallFunc_Step_Blink_Test_HalfHeight_ImplicitCast = CallFunc_Step_Blink_Test_HalfHeight_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


