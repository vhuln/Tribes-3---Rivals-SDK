#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C
// (Actor, Pawn)

class UClass* ABP_CharPlayer_Decoy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CharPlayer_Decoy_C");

	return Clss;
}


// BP_CharPlayer_Decoy_C BP_CharPlayer_Decoy.Default__BP_CharPlayer_Decoy_C
// (Public, ClassDefaultObject, ArchetypeObject, NeedPostLoad, WasLoaded, LoadCompleted)

class ABP_CharPlayer_Decoy_C* ABP_CharPlayer_Decoy_C::GetDefaultObj()
{
	static class ABP_CharPlayer_Decoy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CharPlayer_Decoy_C*>(ABP_CharPlayer_Decoy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C.InitializePassivePerks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MarksmanClassComponent_C*K2Node_DynamicCast_AsBP_Marksman_Class_Component                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasModsForTag_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharPlayer_Decoy_C::InitializePassivePerks(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class UBP_MarksmanClassComponent_C* K2Node_DynamicCast_AsBP_Marksman_Class_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasModsForTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Decoy_C", "InitializePassivePerks");

	Params::ABP_CharPlayer_Decoy_C_InitializePassivePerks_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Marksman_Class_Component = K2Node_DynamicCast_AsBP_Marksman_Class_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_HasModsForTag_ReturnValue = CallFunc_HasModsForTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C.OnDecoyDamaged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_DamageData         DamageData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                      LocalInstigator                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharPlayer_Decoy_C::OnDecoyDamaged(const struct Valhalla_DamageData& DamageData, class AActor* LocalInstigator, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Decoy_C", "OnDecoyDamaged");

	Params::ABP_CharPlayer_Decoy_C_OnDecoyDamaged_Params Parms{};

	Parms.DamageData = DamageData;
	Parms.LocalInstigator = LocalInstigator;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C.RemoveComponents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CharPlayer_Decoy_C::RemoveComponents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Decoy_C", "RemoveComponents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CharPlayer_Decoy_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Decoy_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C.EventHoldKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValAbilityInputID      Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CharPlayer_Decoy_C::EventHoldKey(double Duration, enum class EValAbilityInputID Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Decoy_C", "EventHoldKey");

	Params::ABP_CharPlayer_Decoy_C_EventHoldKey_Params Parms{};

	Parms.Duration = Duration;
	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C.OnTargetActorUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     PreviousTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CharPlayer_Decoy_C::OnTargetActorUpdated(class UObject* PreviousTarget, class UObject* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Decoy_C", "OnTargetActorUpdated");

	Params::ABP_CharPlayer_Decoy_C_OnTargetActorUpdated_Params Parms{};

	Parms.PreviousTarget = PreviousTarget;
	Parms.NewTarget = NewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C.ClientOnTargetUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OldTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CharPlayer_Decoy_C::ClientOnTargetUpdated(class AActor* OldTarget, class AActor* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Decoy_C", "ClientOnTargetUpdated");

	Params::ABP_CharPlayer_Decoy_C_ClientOnTargetUpdated_Params Parms{};

	Parms.OldTarget = OldTarget;
	Parms.NewTarget = NewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CharPlayer_Decoy.BP_CharPlayer_Decoy_C.ExecuteUbergraph_BP_CharPlayer_Decoy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_Duration                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValAbilityInputID      K2Node_Event_Key                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_PreviousTarget                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_NewTarget_1                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OldTarget                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_NewTarget                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponentBudgeted*CallFunc_GetJetpackMesh_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_ActiveGameplayEffectHandleCallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)

void ABP_CharPlayer_Decoy_C::ExecuteUbergraph_BP_CharPlayer_Decoy(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, double K2Node_Event_Duration, enum class EValAbilityInputID K2Node_Event_Key, class UObject* K2Node_Event_PreviousTarget, class UObject* K2Node_Event_NewTarget_1, class AActor* K2Node_Event_OldTarget, class AActor* K2Node_Event_NewTarget, const struct CoreUObject_Vector& CallFunc_GetSocketLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class USkeletalMeshComponentBudgeted* CallFunc_GetJetpackMesh_ReturnValue, const struct GameplayAbilities_ActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CharPlayer_Decoy_C", "ExecuteUbergraph_BP_CharPlayer_Decoy");

	Params::ABP_CharPlayer_Decoy_C_ExecuteUbergraph_BP_CharPlayer_Decoy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_Duration = K2Node_Event_Duration;
	Parms.K2Node_Event_Key = K2Node_Event_Key;
	Parms.K2Node_Event_PreviousTarget = K2Node_Event_PreviousTarget;
	Parms.K2Node_Event_NewTarget_1 = K2Node_Event_NewTarget_1;
	Parms.K2Node_Event_OldTarget = K2Node_Event_OldTarget;
	Parms.K2Node_Event_NewTarget = K2Node_Event_NewTarget;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_GetJetpackMesh_ReturnValue = CallFunc_GetJetpackMesh_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


