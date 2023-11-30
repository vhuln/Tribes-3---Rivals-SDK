#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Deployable_Buff.GA_Deployable_Buff_C
// (None)

class UClass* UGA_Deployable_Buff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Deployable_Buff_C");

	return Clss;
}


// GA_Deployable_Buff_C GA_Deployable_Buff.Default__GA_Deployable_Buff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Deployable_Buff_C* UGA_Deployable_Buff_C::GetDefaultObj()
{
	static class UGA_Deployable_Buff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Deployable_Buff_C*>(UGA_Deployable_Buff_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Deployable_Buff.GA_Deployable_Buff_C.SpawnDeployable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsePreviewTransform                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Transform       PreviewTransform                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Spawned                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityDeployTime_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct CoreUObject_Vector          CallFunc_GetMuzzleFireLocation_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Transform       CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAbilityRange_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Deployed_Actor_C*        CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Deployed_Buff_Station_C* K2Node_DynamicCast_AsBP_Deployed_Buff_Station                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class UGameplayEffect>>CallFunc_GetAbilityEffectsToApply_ReturnValue                    (ReferenceParm)
// double                             CallFunc_SetDoublePropertyByName_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Deployable_Buff_C::SpawnDeployable(bool UsePreviewTransform, const struct CoreUObject_Transform& PreviewTransform, class AActor** Spawned, bool CallFunc_K2_HasAuthority_ReturnValue, float CallFunc_GetAbilityDeployTime_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, const struct CoreUObject_Rotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct CoreUObject_Vector& CallFunc_GetMuzzleFireLocation_ReturnValue, const struct CoreUObject_Transform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_GetAbilityRange_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class ABP_Deployed_Actor_C* CallFunc_FinishSpawningActor_ReturnValue, class ABP_Deployed_Buff_Station_C* K2Node_DynamicCast_AsBP_Deployed_Buff_Station, bool K2Node_DynamicCast_bSuccess, TArray<TSubclassOf<class UGameplayEffect>>& CallFunc_GetAbilityEffectsToApply_ReturnValue, double CallFunc_SetDoublePropertyByName_Value_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Deployable_Buff_C", "SpawnDeployable");

	Params::UGA_Deployable_Buff_C_SpawnDeployable_Params Parms{};

	Parms.UsePreviewTransform = UsePreviewTransform;
	Parms.PreviewTransform = PreviewTransform;
	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.CallFunc_GetAbilityDeployTime_ReturnValue = CallFunc_GetAbilityDeployTime_ReturnValue;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetMuzzleFireLocation_ReturnValue = CallFunc_GetMuzzleFireLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_GetAbilityRange_ReturnValue = CallFunc_GetAbilityRange_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Deployed_Buff_Station = K2Node_DynamicCast_AsBP_Deployed_Buff_Station;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilityEffectsToApply_ReturnValue = CallFunc_GetAbilityEffectsToApply_ReturnValue;
	Parms.CallFunc_SetDoublePropertyByName_Value_ImplicitCast = CallFunc_SetDoublePropertyByName_Value_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Spawned != nullptr)
		*Spawned = Parms.Spawned;

}


// Function GA_Deployable_Buff.GA_Deployable_Buff_C.OnFinish_A8E6EBE3462CD186D644209270371D78
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Deployable_Buff_C::OnFinish_A8E6EBE3462CD186D644209270371D78()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Deployable_Buff_C", "OnFinish_A8E6EBE3462CD186D644209270371D78");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Deployable_Buff.GA_Deployable_Buff_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Deployable_Buff_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Deployable_Buff_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Deployable_Buff.GA_Deployable_Buff_C.ExecuteUbergraph_GA_Deployable_Buff
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_SpawnDeployable_Spawned                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_WaitDelay_Time_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Deployable_Buff_C::ExecuteUbergraph_GA_Deployable_Buff(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_SpawnDeployable_Spawned, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_WaitDelay_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Deployable_Buff_C", "ExecuteUbergraph_GA_Deployable_Buff");

	Params::UGA_Deployable_Buff_C_ExecuteUbergraph_GA_Deployable_Buff_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnDeployable_Spawned = CallFunc_SpawnDeployable_Spawned;
	Parms.CallFunc_WaitDelay_ReturnValue = CallFunc_WaitDelay_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_WaitDelay_Time_ImplicitCast = CallFunc_WaitDelay_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


