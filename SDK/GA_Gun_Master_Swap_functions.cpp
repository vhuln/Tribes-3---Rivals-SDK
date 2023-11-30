#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Gun_Master_Swap.GA_Gun_Master_Swap_C
// (None)

class UClass* UGA_Gun_Master_Swap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Gun_Master_Swap_C");

	return Clss;
}


// GA_Gun_Master_Swap_C GA_Gun_Master_Swap.Default__GA_Gun_Master_Swap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Gun_Master_Swap_C* UGA_Gun_Master_Swap_C::GetDefaultObj()
{
	static class UGA_Gun_Master_Swap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Gun_Master_Swap_C*>(UGA_Gun_Master_Swap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.BindToAbilitiesActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValAT_GameplayTagAddedRemoved*CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::BindToAbilitiesActive(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "BindToAbilitiesActive");

	Params::UGA_Gun_Master_Swap_C_BindToAbilitiesActive_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue = CallFunc_GetAbilitySystemComponentFromActorInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue = CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.Get Draw Time Modifiers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             OutPercentModifier                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             OutFlatModifier                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             FlatModifier                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             PercentModifier                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetSwapEquipSlot_EquipSlot                              (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSwapTimeModifier_OutFlatModifier_ImplicitCast        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSwapTimeModifier_OutPercentModifier_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::Get_Draw_Time_Modifiers(double* OutPercentModifier, double* OutFlatModifier, double FlatModifier, double PercentModifier, bool CallFunc_IsValid_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetSwapEquipSlot_EquipSlot, float CallFunc_GetSwapTimeModifier_OutFlatModifier_ImplicitCast, float CallFunc_GetSwapTimeModifier_OutPercentModifier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "Get Draw Time Modifiers");

	Params::UGA_Gun_Master_Swap_C_Get_Draw_Time_Modifiers_Params Parms{};

	Parms.FlatModifier = FlatModifier;
	Parms.PercentModifier = PercentModifier;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSwapEquipSlot_EquipSlot = CallFunc_GetSwapEquipSlot_EquipSlot;
	Parms.CallFunc_GetSwapTimeModifier_OutFlatModifier_ImplicitCast = CallFunc_GetSwapTimeModifier_OutFlatModifier_ImplicitCast;
	Parms.CallFunc_GetSwapTimeModifier_OutPercentModifier_ImplicitCast = CallFunc_GetSwapTimeModifier_OutPercentModifier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPercentModifier != nullptr)
		*OutPercentModifier = Parms.OutPercentModifier;

	if (OutFlatModifier != nullptr)
		*OutFlatModifier = Parms.OutFlatModifier;

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.PlayDrawAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeRemaining                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMesh3P_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetGunMesh1P_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayDraw_DrawDuration_ImplicitCast                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayDraw_DrawDuration_ImplicitCast_1                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::PlayDrawAnim(double TimeRemaining, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_PlayDraw_DrawDuration_ImplicitCast, float CallFunc_PlayDraw_DrawDuration_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "PlayDrawAnim");

	Params::UGA_Gun_Master_Swap_C_PlayDrawAnim_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.CallFunc_GetMesh3P_ReturnValue = CallFunc_GetMesh3P_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGunMesh1P_ReturnValue = CallFunc_GetGunMesh1P_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance = K2Node_DynamicCast_AsVal_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance_1 = K2Node_DynamicCast_AsVal_Anim_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayDraw_DrawDuration_ImplicitCast = CallFunc_PlayDraw_DrawDuration_ImplicitCast;
	Parms.CallFunc_PlayDraw_DrawDuration_ImplicitCast_1 = CallFunc_PlayDraw_DrawDuration_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.Get Draw Active Time
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ActiveTime                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DateTimeDateTime_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSinceDate_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ActiveTime_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::Get_Draw_Active_Time(double* ActiveTime, bool Temp_bool_Variable, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DateTimeDateTime_ReturnValue, double K2Node_Select_Default, float CallFunc_GetTimeSinceDate_ReturnValue, double K2Node_FunctionResult_ActiveTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "Get Draw Active Time");

	Params::UGA_Gun_Master_Swap_C_Get_Draw_Active_Time_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_DateTimeMinValue_ReturnValue = CallFunc_DateTimeMinValue_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DateTimeDateTime_ReturnValue = CallFunc_NotEqual_DateTimeDateTime_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTimeSinceDate_ReturnValue = CallFunc_GetTimeSinceDate_ReturnValue;
	Parms.K2Node_FunctionResult_ActiveTime_ImplicitCast = K2Node_FunctionResult_ActiveTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveTime != nullptr)
		*ActiveTime = Parms.ActiveTime;

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.Get Holster Active Time
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ActiveTime                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DateTimeDateTime_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSinceDate_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ActiveTime_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::Get_Holster_Active_Time(double* ActiveTime, bool Temp_bool_Variable, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DateTimeDateTime_ReturnValue, double K2Node_Select_Default, float CallFunc_GetTimeSinceDate_ReturnValue, double K2Node_FunctionResult_ActiveTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "Get Holster Active Time");

	Params::UGA_Gun_Master_Swap_C_Get_Holster_Active_Time_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_DateTimeMinValue_ReturnValue = CallFunc_DateTimeMinValue_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DateTimeDateTime_ReturnValue = CallFunc_NotEqual_DateTimeDateTime_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTimeSinceDate_ReturnValue = CallFunc_GetTimeSinceDate_ReturnValue;
	Parms.K2Node_FunctionResult_ActiveTime_ImplicitCast = K2Node_FunctionResult_ActiveTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ActiveTime != nullptr)
		*ActiveTime = Parms.ActiveTime;

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.CancelAnims
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetGunMesh1P_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::CancelAnims(const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue, class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "CancelAnims");

	Params::UGA_Gun_Master_Swap_C_CancelAnims_Params Parms{};

	Parms.CallFunc_DateTimeMinValue_ReturnValue = CallFunc_DateTimeMinValue_ReturnValue;
	Parms.CallFunc_GetGunMesh1P_ReturnValue = CallFunc_GetGunMesh1P_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance = K2Node_DynamicCast_AsVal_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.PlayConditionalDrawAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeRemaining                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMesh3P_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetGunMesh1P_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_1_ImplicitCast                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_0_ImplicitCast                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::PlayConditionalDrawAnim(double TimeRemaining, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool Temp_bool_Variable, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, float K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Select_Option_1_ImplicitCast, float K2Node_Select_Option_0_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "PlayConditionalDrawAnim");

	Params::UGA_Gun_Master_Swap_C_PlayConditionalDrawAnim_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetMesh3P_ReturnValue = CallFunc_GetMesh3P_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance = K2Node_DynamicCast_AsVal_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGunMesh1P_ReturnValue = CallFunc_GetGunMesh1P_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance_1 = K2Node_DynamicCast_AsVal_Anim_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Option_1_ImplicitCast = K2Node_Select_Option_1_ImplicitCast;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.GetDrawTimeRemaining
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ElapsedTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TimeRemaining                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_UtcNow_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSinceDate_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DateTimeDateTime_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_AdjustedDraw_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::GetDrawTimeRemaining(double ElapsedTime, double* TimeRemaining, const struct CoreUObject_DateTime& CallFunc_UtcNow_ReturnValue, float CallFunc_GetTimeSinceDate_ReturnValue, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue, bool Temp_bool_Variable, bool CallFunc_NotEqual_DateTimeDateTime_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double K2Node_Select_Default, double K2Node_VariableSet_AdjustedDraw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "GetDrawTimeRemaining");

	Params::UGA_Gun_Master_Swap_C_GetDrawTimeRemaining_Params Parms{};

	Parms.ElapsedTime = ElapsedTime;
	Parms.CallFunc_UtcNow_ReturnValue = CallFunc_UtcNow_ReturnValue;
	Parms.CallFunc_GetTimeSinceDate_ReturnValue = CallFunc_GetTimeSinceDate_ReturnValue;
	Parms.CallFunc_DateTimeMinValue_ReturnValue = CallFunc_DateTimeMinValue_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_NotEqual_DateTimeDateTime_ReturnValue = CallFunc_NotEqual_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_VariableSet_AdjustedDraw_ImplicitCast = K2Node_VariableSet_AdjustedDraw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (TimeRemaining != nullptr)
		*TimeRemaining = Parms.TimeRemaining;

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.PlayConditionalHolsterAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeRemaining                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMesh3P_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetGunMesh1P_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_1_ImplicitCast                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_0_ImplicitCast                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::PlayConditionalHolsterAnim(double TimeRemaining, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool Temp_bool_Variable, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, float K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Select_Option_1_ImplicitCast, float K2Node_Select_Option_0_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "PlayConditionalHolsterAnim");

	Params::UGA_Gun_Master_Swap_C_PlayConditionalHolsterAnim_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetMesh3P_ReturnValue = CallFunc_GetMesh3P_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance = K2Node_DynamicCast_AsVal_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGunMesh1P_ReturnValue = CallFunc_GetGunMesh1P_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance_1 = K2Node_DynamicCast_AsVal_Anim_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Option_1_ImplicitCast = K2Node_Select_Option_1_ImplicitCast;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.PlayCancelDrawAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeRemaning                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMesh3P_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetGunMesh1P_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_1_ImplicitCast                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_0_ImplicitCast                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::PlayCancelDrawAnim(double TimeRemaning, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool Temp_bool_Variable, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, float K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Select_Option_1_ImplicitCast, float K2Node_Select_Option_0_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "PlayCancelDrawAnim");

	Params::UGA_Gun_Master_Swap_C_PlayCancelDrawAnim_Params Parms{};

	Parms.TimeRemaning = TimeRemaning;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetMesh3P_ReturnValue = CallFunc_GetMesh3P_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance = K2Node_DynamicCast_AsVal_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGunMesh1P_ReturnValue = CallFunc_GetGunMesh1P_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance_1 = K2Node_DynamicCast_AsVal_Anim_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Option_1_ImplicitCast = K2Node_Select_Option_1_ImplicitCast;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.HasSwapChainLooped
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetSwapEquipSlot_EquipSlot                              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_Gun_Master_Swap_C::HasSwapChainLooped(const struct GameplayTags_GameplayTag& CallFunc_GetSwapEquipSlot_EquipSlot, bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "HasSwapChainLooped");

	Params::UGA_Gun_Master_Swap_C_HasSwapChainLooped_Params Parms{};

	Parms.CallFunc_GetSwapEquipSlot_EquipSlot = CallFunc_GetSwapEquipSlot_EquipSlot;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.Get Holster Time Remaining
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeRemaining                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_UtcNow_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSinceDate_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DateTimeDateTime_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_AdjustedHolster_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::Get_Holster_Time_Remaining(double* TimeRemaining, const struct CoreUObject_DateTime& CallFunc_UtcNow_ReturnValue, float CallFunc_GetTimeSinceDate_ReturnValue, bool Temp_bool_Variable, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_NotEqual_DateTimeDateTime_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double K2Node_Select_Default, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double K2Node_Select_Default_1, double K2Node_VariableSet_AdjustedHolster_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "Get Holster Time Remaining");

	Params::UGA_Gun_Master_Swap_C_Get_Holster_Time_Remaining_Params Parms{};

	Parms.CallFunc_UtcNow_ReturnValue = CallFunc_UtcNow_ReturnValue;
	Parms.CallFunc_GetTimeSinceDate_ReturnValue = CallFunc_GetTimeSinceDate_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_DateTimeMinValue_ReturnValue = CallFunc_DateTimeMinValue_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_NotEqual_DateTimeDateTime_ReturnValue = CallFunc_NotEqual_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_VariableSet_AdjustedHolster_ImplicitCast = K2Node_VariableSet_AdjustedHolster_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (TimeRemaining != nullptr)
		*TimeRemaining = Parms.TimeRemaining;

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.PlayCancelHolsterAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeRemaining                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMesh3P_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetGunMesh1P_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_1_ImplicitCast                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Option_0_ImplicitCast                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::PlayCancelHolsterAnim(double TimeRemaining, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool Temp_bool_Variable, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, float K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Select_Option_1_ImplicitCast, float K2Node_Select_Option_0_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "PlayCancelHolsterAnim");

	Params::UGA_Gun_Master_Swap_C_PlayCancelHolsterAnim_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetMesh3P_ReturnValue = CallFunc_GetMesh3P_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance = K2Node_DynamicCast_AsVal_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGunMesh1P_ReturnValue = CallFunc_GetGunMesh1P_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance_1 = K2Node_DynamicCast_AsVal_Anim_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Option_1_ImplicitCast = K2Node_Select_Option_1_ImplicitCast;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.PlayHolsterAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimeRemaining                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetMesh3P_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetGunMesh1P_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAnimInstance*            K2Node_DynamicCast_AsVal_Anim_Instance_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayHolster_HolsterDuration_ImplicitCast                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayHolster_HolsterDuration_ImplicitCast_1              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::PlayHolsterAnim(double TimeRemaining, class USkeletalMeshComponent* CallFunc_GetMesh3P_ReturnValue, bool CallFunc_IsValid_ReturnValue, class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UValAnimInstance* K2Node_DynamicCast_AsVal_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_PlayHolster_HolsterDuration_ImplicitCast, float CallFunc_PlayHolster_HolsterDuration_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "PlayHolsterAnim");

	Params::UGA_Gun_Master_Swap_C_PlayHolsterAnim_Params Parms{};

	Parms.TimeRemaining = TimeRemaining;
	Parms.CallFunc_GetMesh3P_ReturnValue = CallFunc_GetMesh3P_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGunMesh1P_ReturnValue = CallFunc_GetGunMesh1P_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance = K2Node_DynamicCast_AsVal_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVal_Anim_Instance_1 = K2Node_DynamicCast_AsVal_Anim_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayHolster_HolsterDuration_ImplicitCast = CallFunc_PlayHolster_HolsterDuration_ImplicitCast;
	Parms.CallFunc_PlayHolster_HolsterDuration_ImplicitCast_1 = CallFunc_PlayHolster_HolsterDuration_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.OnSync_8DE92E474564667F350D97BBADD3440F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Gun_Master_Swap_C::OnSync_8DE92E474564667F350D97BBADD3440F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "OnSync_8DE92E474564667F350D97BBADD3440F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Gun_Master_Swap_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bWasRetriggered                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::K2_OnEndAbility(bool bWasCancelled, bool bWasRetriggered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "K2_OnEndAbility");

	Params::UGA_Gun_Master_Swap_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;
	Parms.bWasRetriggered = bWasRetriggered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.OnSlotRequested
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    SwapEquipSlot                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::OnSlotRequested(struct GameplayTags_GameplayTag& SwapEquipSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "OnSlotRequested");

	Params::UGA_Gun_Master_Swap_C_OnSlotRequested_Params Parms{};

	Parms.SwapEquipSlot = SwapEquipSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.BeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UGA_Gun_Master_Swap_C::BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "BeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.OnPendingDeviceRequested
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    PendingEquipSlot                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::OnPendingDeviceRequested(struct GameplayTags_GameplayTag& PendingEquipSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "OnPendingDeviceRequested");

	Params::UGA_Gun_Master_Swap_C_OnPendingDeviceRequested_Params Parms{};

	Parms.PendingEquipSlot = PendingEquipSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.OnTagAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::OnTagAdded(const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "OnTagAdded");

	Params::UGA_Gun_Master_Swap_C_OnTagAdded_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gun_Master_Swap.GA_Gun_Master_Swap_C.ExecuteUbergraph_GA_Gun_Master_Swap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSwapChainLooped_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_UtcNow_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_UtcNow_ReturnValue_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_UtcNow_ReturnValue_2                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_UtcNow_ReturnValue_3                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Draw_Active_Time_ActiveTime                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentDrawTime_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNextDrawTime_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetPredictedSwappedToAbility_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNextHolsterTime_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentHolsterTime_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetActiveEquippedAbility_ReturnValue                    (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Holster_Active_Time_ActiveTime                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Draw_Active_Time_ActiveTime_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ValChar_Master_C*        K2Node_DynamicCast_AsBP_Val_Char_Master                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValDevice*                  K2Node_DynamicCast_AsVal_Device                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValDeviceAudioVisual*       CallFunc_GetAudioVisual_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowDeviceAudioVisual_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetSwapEquipSlot_EquipSlot                              (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasRetriggered                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetGunMesh1P_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetActiveEquippedAbility_ReturnValue_1                  (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValDevice*                  K2Node_DynamicCast_AsVal_Device_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValDeviceAudioVisual*       CallFunc_GetAudioVisual_ReturnValue_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowDeviceAudioVisual_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue_3                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_UtcNow_ReturnValue_4                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_UtcNow_ReturnValue_5                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSwapChainLooped_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_SwapEquipSlot                                 (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetActiveEquipSlotTag_ReturnValue                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_UtcNow_ReturnValue_6                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_UtcNow_ReturnValue_7                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Holster_Time_Remaining_TimeRemaining                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Holster_Time_Remaining_TimeRemaining_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue_4                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue_5                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue_6                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetActiveEquipSlotTag_ReturnValue_1                     (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue_7                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue_8                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_PendingEquipSlot                              (ConstParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_UtcNow_ReturnValue_8                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSinceDate_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue_9                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SwapDevice_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DateTimeDateTime_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentHolsterTime_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetValPlayerController_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPredictionTime_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSinceDate_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue_10                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_DateTime        CallFunc_DateTimeMinValue_ReturnValue_11                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Draw_Time_Modifiers_OutPercentModifier              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Draw_Time_Modifiers_OutFlatModifier                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_3         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStandalone_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Draw_Time_Modifiers_OutPercentModifier_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Get_Draw_Time_Modifiers_OutFlatModifier_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_2       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_NetworkSyncPoint*CallFunc_WaitNetSync_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_MakeLiteralGameplayTag_ReturnValue_1                    (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_MakeLiteralGameplayTag_ReturnValue_2                    (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGameplayTagCount_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            CallFunc_GetActiveSwappedAbility_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_Tag                                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ServerSetSwappingInfo_DrawTime_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_A_ImplicitCast_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast_5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ServerSetSwappingInfo_HolsterTime_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gun_Master_Swap_C::ExecuteUbergraph_GA_Gun_Master_Swap(int32 EntryPoint, bool CallFunc_HasSwapChainLooped_ReturnValue, const struct CoreUObject_DateTime& CallFunc_UtcNow_ReturnValue, const struct CoreUObject_DateTime& CallFunc_UtcNow_ReturnValue_1, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue, const struct CoreUObject_DateTime& CallFunc_UtcNow_ReturnValue_2, const struct CoreUObject_DateTime& CallFunc_UtcNow_ReturnValue_3, double CallFunc_Get_Draw_Active_Time_ActiveTime, float CallFunc_GetCurrentDrawTime_ReturnValue, float CallFunc_GetNextDrawTime_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetPredictedSwappedToAbility_ReturnValue, float CallFunc_GetNextHolsterTime_ReturnValue, float CallFunc_GetCurrentHolsterTime_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue, double CallFunc_Get_Holster_Active_Time_ActiveTime, double CallFunc_Get_Draw_Active_Time_ActiveTime_1, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ABP_ValChar_Master_C* K2Node_DynamicCast_AsBP_Val_Char_Master, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue_2, class UValDevice* K2Node_DynamicCast_AsVal_Device, bool K2Node_DynamicCast_bSuccess_1, class UValDeviceAudioVisual* CallFunc_GetAudioVisual_ReturnValue, bool CallFunc_ShowDeviceAudioVisual_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetSwapEquipSlot_EquipSlot, bool K2Node_Event_bWasCancelled, bool K2Node_Event_bWasRetriggered, class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetActiveEquippedAbility_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, class UValDevice* K2Node_DynamicCast_AsVal_Device_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, class UValDeviceAudioVisual* CallFunc_GetAudioVisual_ReturnValue_1, bool CallFunc_ShowDeviceAudioVisual_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue_3, const struct CoreUObject_DateTime& CallFunc_UtcNow_ReturnValue_4, const struct CoreUObject_DateTime& CallFunc_UtcNow_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasSwapChainLooped_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_SwapEquipSlot, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, const struct CoreUObject_DateTime& CallFunc_UtcNow_ReturnValue_6, const struct CoreUObject_DateTime& CallFunc_UtcNow_ReturnValue_7, double CallFunc_Get_Holster_Time_Remaining_TimeRemaining, double CallFunc_Get_Holster_Time_Remaining_TimeRemaining_1, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue_4, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue_5, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue_6, bool CallFunc_IsGameplayTagValid_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue_1, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue_7, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue_8, bool CallFunc_IsDedicatedServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_PendingEquipSlot, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_3, const struct CoreUObject_DateTime& CallFunc_UtcNow_ReturnValue_8, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, float CallFunc_GetTimeSinceDate_ReturnValue, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue_9, bool CallFunc_SwapDevice_ReturnValue, bool CallFunc_NotEqual_DateTimeDateTime_ReturnValue, float CallFunc_GetCurrentHolsterTime_ReturnValue_1, class AValPlayerController* CallFunc_GetValPlayerController_ReturnValue, float CallFunc_GetPredictionTime_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue, float CallFunc_GetTimeSinceDate_ReturnValue_1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue_10, double CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2, float CallFunc_GetFloatAttribute_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, const struct CoreUObject_DateTime& CallFunc_DateTimeMinValue_ReturnValue_11, double CallFunc_Get_Draw_Time_Modifiers_OutPercentModifier, double CallFunc_Get_Draw_Time_Modifiers_OutFlatModifier, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_3, float CallFunc_GetFloatAttribute_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_4, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue_6, double CallFunc_Divide_DoubleDouble_ReturnValue_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, bool CallFunc_IsStandalone_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Get_Draw_Time_Modifiers_OutPercentModifier_1, double CallFunc_Get_Draw_Time_Modifiers_OutFlatModifier_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Add_DoubleDouble_ReturnValue_7, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_2, class UAbilityTask_NetworkSyncPoint* CallFunc_WaitNetSync_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue_2, int32 CallFunc_GetGameplayTagCount_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_8, class UGameplayAbility* CallFunc_GetActiveSwappedAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag, bool CallFunc_IsValid_ReturnValue_10, float CallFunc_ServerSetSwappingInfo_DrawTime_ImplicitCast, float CallFunc_RetriggerableDelay_Duration_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3, float CallFunc_RetriggerableDelay_Duration_ImplicitCast_1, float CallFunc_RetriggerableDelay_Duration_ImplicitCast_2, float CallFunc_RetriggerableDelay_Duration_ImplicitCast_3, float CallFunc_RetriggerableDelay_Duration_ImplicitCast_4, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast_1, double CallFunc_SelectFloat_A_ImplicitCast_2, double CallFunc_SelectFloat_A_ImplicitCast_3, float CallFunc_RetriggerableDelay_Duration_ImplicitCast_5, float CallFunc_ServerSetSwappingInfo_HolsterTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gun_Master_Swap_C", "ExecuteUbergraph_GA_Gun_Master_Swap");

	Params::UGA_Gun_Master_Swap_C_ExecuteUbergraph_GA_Gun_Master_Swap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasSwapChainLooped_ReturnValue = CallFunc_HasSwapChainLooped_ReturnValue;
	Parms.CallFunc_UtcNow_ReturnValue = CallFunc_UtcNow_ReturnValue;
	Parms.CallFunc_UtcNow_ReturnValue_1 = CallFunc_UtcNow_ReturnValue_1;
	Parms.CallFunc_DateTimeMinValue_ReturnValue = CallFunc_DateTimeMinValue_ReturnValue;
	Parms.CallFunc_UtcNow_ReturnValue_2 = CallFunc_UtcNow_ReturnValue_2;
	Parms.CallFunc_UtcNow_ReturnValue_3 = CallFunc_UtcNow_ReturnValue_3;
	Parms.CallFunc_Get_Draw_Active_Time_ActiveTime = CallFunc_Get_Draw_Active_Time_ActiveTime;
	Parms.CallFunc_GetCurrentDrawTime_ReturnValue = CallFunc_GetCurrentDrawTime_ReturnValue;
	Parms.CallFunc_GetNextDrawTime_ReturnValue = CallFunc_GetNextDrawTime_ReturnValue;
	Parms.CallFunc_GetPredictedSwappedToAbility_ReturnValue = CallFunc_GetPredictedSwappedToAbility_ReturnValue;
	Parms.CallFunc_GetNextHolsterTime_ReturnValue = CallFunc_GetNextHolsterTime_ReturnValue;
	Parms.CallFunc_GetCurrentHolsterTime_ReturnValue = CallFunc_GetCurrentHolsterTime_ReturnValue;
	Parms.CallFunc_GetActiveEquippedAbility_ReturnValue = CallFunc_GetActiveEquippedAbility_ReturnValue;
	Parms.CallFunc_Get_Holster_Active_Time_ActiveTime = CallFunc_Get_Holster_Active_Time_ActiveTime;
	Parms.CallFunc_Get_Draw_Active_Time_ActiveTime_1 = CallFunc_Get_Draw_Active_Time_ActiveTime_1;
	Parms.CallFunc_DateTimeMinValue_ReturnValue_1 = CallFunc_DateTimeMinValue_ReturnValue_1;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Val_Char_Master = K2Node_DynamicCast_AsBP_Val_Char_Master;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DateTimeMinValue_ReturnValue_2 = CallFunc_DateTimeMinValue_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsVal_Device = K2Node_DynamicCast_AsVal_Device;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAudioVisual_ReturnValue = CallFunc_GetAudioVisual_ReturnValue;
	Parms.CallFunc_ShowDeviceAudioVisual_ReturnValue = CallFunc_ShowDeviceAudioVisual_ReturnValue;
	Parms.CallFunc_GetSwapEquipSlot_EquipSlot = CallFunc_GetSwapEquipSlot_EquipSlot;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_Event_bWasRetriggered = K2Node_Event_bWasRetriggered;
	Parms.CallFunc_GetGunMesh1P_ReturnValue = CallFunc_GetGunMesh1P_ReturnValue;
	Parms.CallFunc_GetActiveEquippedAbility_ReturnValue_1 = CallFunc_GetActiveEquippedAbility_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue = CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Device_1 = K2Node_DynamicCast_AsVal_Device_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAudioVisual_ReturnValue_1 = CallFunc_GetAudioVisual_ReturnValue_1;
	Parms.CallFunc_ShowDeviceAudioVisual_ReturnValue_1 = CallFunc_ShowDeviceAudioVisual_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_DateTimeMinValue_ReturnValue_3 = CallFunc_DateTimeMinValue_ReturnValue_3;
	Parms.CallFunc_UtcNow_ReturnValue_4 = CallFunc_UtcNow_ReturnValue_4;
	Parms.CallFunc_UtcNow_ReturnValue_5 = CallFunc_UtcNow_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasSwapChainLooped_ReturnValue_1 = CallFunc_HasSwapChainLooped_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_SwapEquipSlot = K2Node_CustomEvent_SwapEquipSlot;
	Parms.CallFunc_GetActiveEquipSlotTag_ReturnValue = CallFunc_GetActiveEquipSlotTag_ReturnValue;
	Parms.CallFunc_UtcNow_ReturnValue_6 = CallFunc_UtcNow_ReturnValue_6;
	Parms.CallFunc_UtcNow_ReturnValue_7 = CallFunc_UtcNow_ReturnValue_7;
	Parms.CallFunc_Get_Holster_Time_Remaining_TimeRemaining = CallFunc_Get_Holster_Time_Remaining_TimeRemaining;
	Parms.CallFunc_Get_Holster_Time_Remaining_TimeRemaining_1 = CallFunc_Get_Holster_Time_Remaining_TimeRemaining_1;
	Parms.CallFunc_DateTimeMinValue_ReturnValue_4 = CallFunc_DateTimeMinValue_ReturnValue_4;
	Parms.CallFunc_DateTimeMinValue_ReturnValue_5 = CallFunc_DateTimeMinValue_ReturnValue_5;
	Parms.CallFunc_DateTimeMinValue_ReturnValue_6 = CallFunc_DateTimeMinValue_ReturnValue_6;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_GetActiveEquipSlotTag_ReturnValue_1 = CallFunc_GetActiveEquipSlotTag_ReturnValue_1;
	Parms.CallFunc_DateTimeMinValue_ReturnValue_7 = CallFunc_DateTimeMinValue_ReturnValue_7;
	Parms.CallFunc_DateTimeMinValue_ReturnValue_8 = CallFunc_DateTimeMinValue_ReturnValue_8;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_PendingEquipSlot = K2Node_CustomEvent_PendingEquipSlot;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_UtcNow_ReturnValue_8 = CallFunc_UtcNow_ReturnValue_8;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_GetTimeSinceDate_ReturnValue = CallFunc_GetTimeSinceDate_ReturnValue;
	Parms.CallFunc_DateTimeMinValue_ReturnValue_9 = CallFunc_DateTimeMinValue_ReturnValue_9;
	Parms.CallFunc_SwapDevice_ReturnValue = CallFunc_SwapDevice_ReturnValue;
	Parms.CallFunc_NotEqual_DateTimeDateTime_ReturnValue = CallFunc_NotEqual_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_GetCurrentHolsterTime_ReturnValue_1 = CallFunc_GetCurrentHolsterTime_ReturnValue_1;
	Parms.CallFunc_GetValPlayerController_ReturnValue = CallFunc_GetValPlayerController_ReturnValue;
	Parms.CallFunc_GetPredictionTime_ReturnValue = CallFunc_GetPredictionTime_ReturnValue;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetTimeSinceDate_ReturnValue_1 = CallFunc_GetTimeSinceDate_ReturnValue_1;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1 = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1;
	Parms.CallFunc_GetFloatAttribute_ReturnValue_1 = CallFunc_GetFloatAttribute_ReturnValue_1;
	Parms.CallFunc_DateTimeMinValue_ReturnValue_10 = CallFunc_DateTimeMinValue_ReturnValue_10;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1 = CallFunc_NotEqual_DateTimeDateTime_ReturnValue_1;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2 = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2;
	Parms.CallFunc_GetFloatAttribute_ReturnValue_2 = CallFunc_GetFloatAttribute_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = CallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_DateTimeMinValue_ReturnValue_11 = CallFunc_DateTimeMinValue_ReturnValue_11;
	Parms.CallFunc_Get_Draw_Time_Modifiers_OutPercentModifier = CallFunc_Get_Draw_Time_Modifiers_OutPercentModifier;
	Parms.CallFunc_Get_Draw_Time_Modifiers_OutFlatModifier = CallFunc_Get_Draw_Time_Modifiers_OutFlatModifier;
	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_3 = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_3;
	Parms.CallFunc_GetFloatAttribute_ReturnValue_3 = CallFunc_GetFloatAttribute_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_3 = CallFunc_Add_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_4 = CallFunc_Add_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_5 = CallFunc_Add_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_6 = CallFunc_Add_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_3 = CallFunc_Divide_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_IsStandalone_ReturnValue = CallFunc_IsStandalone_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Get_Draw_Time_Modifiers_OutPercentModifier_1 = CallFunc_Get_Draw_Time_Modifiers_OutPercentModifier_1;
	Parms.CallFunc_Get_Draw_Time_Modifiers_OutFlatModifier_1 = CallFunc_Get_Draw_Time_Modifiers_OutFlatModifier_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_7 = CallFunc_Add_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1 = CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_1;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_2 = CallFunc_LessEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_2 = CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue_2;
	Parms.CallFunc_WaitNetSync_ReturnValue = CallFunc_WaitNetSync_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_1 = CallFunc_MakeLiteralGameplayTag_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue_2 = CallFunc_MakeLiteralGameplayTag_ReturnValue_2;
	Parms.CallFunc_GetGameplayTagCount_ReturnValue = CallFunc_GetGameplayTagCount_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_1 = CallFunc_IsGameplayTagValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetActiveSwappedAbility_ReturnValue = CallFunc_GetActiveSwappedAbility_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_CustomEvent_Tag = K2Node_CustomEvent_Tag;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_ServerSetSwappingInfo_DrawTime_ImplicitCast = CallFunc_ServerSetSwappingInfo_DrawTime_ImplicitCast;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast = CallFunc_RetriggerableDelay_Duration_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3 = CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast_1 = CallFunc_RetriggerableDelay_Duration_ImplicitCast_1;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast_2 = CallFunc_RetriggerableDelay_Duration_ImplicitCast_2;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast_3 = CallFunc_RetriggerableDelay_Duration_ImplicitCast_3;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast_4 = CallFunc_RetriggerableDelay_Duration_ImplicitCast_4;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast = CallFunc_Add_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast_1 = CallFunc_Add_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_SelectFloat_A_ImplicitCast_1 = CallFunc_SelectFloat_A_ImplicitCast_1;
	Parms.CallFunc_SelectFloat_A_ImplicitCast_2 = CallFunc_SelectFloat_A_ImplicitCast_2;
	Parms.CallFunc_SelectFloat_A_ImplicitCast_3 = CallFunc_SelectFloat_A_ImplicitCast_3;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast_5 = CallFunc_RetriggerableDelay_Duration_ImplicitCast_5;
	Parms.CallFunc_ServerSetSwappingInfo_HolsterTime_ImplicitCast = CallFunc_ServerSetSwappingInfo_HolsterTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


