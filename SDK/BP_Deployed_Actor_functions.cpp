#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Deployed_Actor.BP_Deployed_Actor_C
// (Actor)

class UClass* ABP_Deployed_Actor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Deployed_Actor_C");

	return Clss;
}


// BP_Deployed_Actor_C BP_Deployed_Actor.Default__BP_Deployed_Actor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Deployed_Actor_C* ABP_Deployed_Actor_C::GetDefaultObj()
{
	static class ABP_Deployed_Actor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Deployed_Actor_C*>(ABP_Deployed_Actor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.GetASC
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UAbilitySystemComponent* ABP_Deployed_Actor_C::GetASC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "GetASC");

	Params::ABP_Deployed_Actor_C_GetASC_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.OnReEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Deployed_Actor_C::OnReEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "OnReEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.OnDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Deployed_Actor_C::OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "OnDisabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.OnRep_Lifetime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Deployed_Actor_C::OnRep_Lifetime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "OnRep_Lifetime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.CheckReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Deployed_Actor_C::CheckReady(bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "CheckReady");

	Params::ABP_Deployed_Actor_C_CheckReady_Params Parms{};

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.OnRep_AudioVisual
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CheckReady_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deployed_Actor_C::OnRep_AudioVisual(bool CallFunc_CheckReady_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "OnRep_AudioVisual");

	Params::ABP_Deployed_Actor_C_OnRep_AudioVisual_Params Parms{};

	Parms.CallFunc_CheckReady_ReturnValue = CallFunc_CheckReady_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.OnRep_ArmingTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CheckReady_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deployed_Actor_C::OnRep_ArmingTime(bool CallFunc_CheckReady_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "OnRep_ArmingTime");

	Params::ABP_Deployed_Actor_C_OnRep_ArmingTime_Params Parms{};

	Parms.CallFunc_CheckReady_ReturnValue = CallFunc_CheckReady_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.OnRep_AOERadius
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CheckReady_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deployed_Actor_C::OnRep_AOERadius(bool CallFunc_CheckReady_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "OnRep_AOERadius");

	Params::ABP_Deployed_Actor_C_OnRep_AOERadius_Params Parms{};

	Parms.CallFunc_CheckReady_ReturnValue = CallFunc_CheckReady_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.OnCombatReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Deployed_Actor_C::OnCombatReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "OnCombatReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.InitActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             ArmingTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AoERadius                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValDeployableAudioVisual*   AudioVisual                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    AOEGameplayCueTag                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UClass*                      GameplayEffect                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             EffectMagnitude                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    GETag                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              AdditionalEffects                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EValOwnedSpawnType      InSpawnType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    InRangeGameplayCueTag                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// double                             InLifetime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deployed_Actor_C::InitActor(double ArmingTime, double AoERadius, class UValDeployableAudioVisual* AudioVisual, const struct GameplayTags_GameplayTag& AOEGameplayCueTag, class UClass* GameplayEffect, double EffectMagnitude, const struct GameplayTags_GameplayTag& GETag, TArray<class UClass*>& AdditionalEffects, enum class EValOwnedSpawnType InSpawnType, const struct GameplayTags_GameplayTag& InRangeGameplayCueTag, double InLifetime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "InitActor");

	Params::ABP_Deployed_Actor_C_InitActor_Params Parms{};

	Parms.ArmingTime = ArmingTime;
	Parms.AoERadius = AoERadius;
	Parms.AudioVisual = AudioVisual;
	Parms.AOEGameplayCueTag = AOEGameplayCueTag;
	Parms.GameplayEffect = GameplayEffect;
	Parms.EffectMagnitude = EffectMagnitude;
	Parms.GETag = GETag;
	Parms.AdditionalEffects = AdditionalEffects;
	Parms.InSpawnType = InSpawnType;
	Parms.InRangeGameplayCueTag = InRangeGameplayCueTag;
	Parms.InLifetime = InLifetime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.UpdateMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*               InMesh                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ABPClass                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deployed_Actor_C::UpdateMesh(class USkeletalMesh* InMesh, class UClass* ABPClass, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "UpdateMesh");

	Params::ABP_Deployed_Actor_C_UpdateMesh_Params Parms{};

	Parms.InMesh = InMesh;
	Parms.ABPClass = ABPClass;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.OnTagRemoved_92721B6A4A826BF65C345AB19E014CE9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Deployed_Actor_C::OnTagRemoved_92721B6A4A826BF65C345AB19E014CE9(const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "OnTagRemoved_92721B6A4A826BF65C345AB19E014CE9");

	Params::ABP_Deployed_Actor_C_OnTagRemoved_92721B6A4A826BF65C345AB19E014CE9_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.OnTagAdded_92721B6A4A826BF65C345AB19E014CE9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Deployed_Actor_C::OnTagAdded_92721B6A4A826BF65C345AB19E014CE9(const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "OnTagAdded_92721B6A4A826BF65C345AB19E014CE9");

	Params::ABP_Deployed_Actor_C_OnTagAdded_92721B6A4A826BF65C345AB19E014CE9_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.OnTagRemoved_4440520E4B3CC7620A7C3BB953F9D01C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Deployed_Actor_C::OnTagRemoved_4440520E4B3CC7620A7C3BB953F9D01C(const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "OnTagRemoved_4440520E4B3CC7620A7C3BB953F9D01C");

	Params::ABP_Deployed_Actor_C_OnTagRemoved_4440520E4B3CC7620A7C3BB953F9D01C_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.OnTagAdded_4440520E4B3CC7620A7C3BB953F9D01C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Deployed_Actor_C::OnTagAdded_4440520E4B3CC7620A7C3BB953F9D01C(const struct GameplayTags_GameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "OnTagAdded_4440520E4B3CC7620A7C3BB953F9D01C");

	Params::ABP_Deployed_Actor_C_OnTagAdded_4440520E4B3CC7620A7C3BB953F9D01C_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Deployed_Actor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Deployed_Actor.BP_Deployed_Actor_C.ExecuteUbergraph_BP_Deployed_Actor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_Tag_3                                         (NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_Tag_2                                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_Tag_1                                         (NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_Tag                                           (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// class UValAT_GameplayTagAddedRemoved*CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAT_GameplayTagAddedRemoved*CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Deployed_Actor_C::ExecuteUbergraph_BP_Deployed_Actor(int32 EntryPoint, float CallFunc_ApplyDamage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_3, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct GameplayTags_GameplayTag& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag_1, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Tag, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct GameplayTags_GameplayTag& Temp_struct_Variable_1, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Deployed_Actor_C", "ExecuteUbergraph_BP_Deployed_Actor");

	Params::ABP_Deployed_Actor_C_ExecuteUbergraph_BP_Deployed_Actor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Tag_3 = K2Node_CustomEvent_Tag_3;
	Parms.K2Node_CustomEvent_Tag_2 = K2Node_CustomEvent_Tag_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Tag_1 = K2Node_CustomEvent_Tag_1;
	Parms.K2Node_CustomEvent_Tag = K2Node_CustomEvent_Tag;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue = CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue;
	Parms.CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_1 = CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


