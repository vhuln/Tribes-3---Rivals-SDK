#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GC_AR_Exotic_Stack.GC_AR_Exotic_Stack_C
// (Actor)

class UClass* AGC_AR_Exotic_Stack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GC_AR_Exotic_Stack_C");

	return Clss;
}


// GC_AR_Exotic_Stack_C GC_AR_Exotic_Stack.Default__GC_AR_Exotic_Stack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGC_AR_Exotic_Stack_C* AGC_AR_Exotic_Stack_C::GetDefaultObj()
{
	static class AGC_AR_Exotic_Stack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGC_AR_Exotic_Stack_C*>(AGC_AR_Exotic_Stack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GC_AR_Exotic_Stack.GC_AR_Exotic_Stack_C.OnQuickMeleeTagRemoved
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetActiveEquipSlotTag_ReturnValue                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVFXTP_Gun_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVFXFP_Gun_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStackAmount_Stack                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_AR_Exotic_Stack_C::OnQuickMeleeTagRemoved(const struct GameplayTags_GameplayTag& Tag, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class USkeletalMeshComponent* CallFunc_GetVFXTP_Gun_ReturnValue, class USkeletalMeshComponent* CallFunc_GetVFXFP_Gun_ReturnValue, int32 CallFunc_GetStackAmount_Stack, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_AR_Exotic_Stack_C", "OnQuickMeleeTagRemoved");

	Params::AGC_AR_Exotic_Stack_C_OnQuickMeleeTagRemoved_Params Parms{};

	Parms.Tag = Tag;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetActiveEquipSlotTag_ReturnValue = CallFunc_GetActiveEquipSlotTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetVFXTP_Gun_ReturnValue = CallFunc_GetVFXTP_Gun_ReturnValue;
	Parms.CallFunc_GetVFXFP_Gun_ReturnValue = CallFunc_GetVFXFP_Gun_ReturnValue;
	Parms.CallFunc_GetStackAmount_Stack = CallFunc_GetStackAmount_Stack;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_AR_Exotic_Stack.GC_AR_Exotic_Stack_C.OnSwappableAbilityTagRemoved
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetActiveEquipSlotTag_ReturnValue                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVFXTP_Gun_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVFXFP_Gun_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStackAmount_Stack                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_AR_Exotic_Stack_C::OnSwappableAbilityTagRemoved(const struct GameplayTags_GameplayTag& Tag, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class USkeletalMeshComponent* CallFunc_GetVFXTP_Gun_ReturnValue, class USkeletalMeshComponent* CallFunc_GetVFXFP_Gun_ReturnValue, int32 CallFunc_GetStackAmount_Stack, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_AR_Exotic_Stack_C", "OnSwappableAbilityTagRemoved");

	Params::AGC_AR_Exotic_Stack_C_OnSwappableAbilityTagRemoved_Params Parms{};

	Parms.Tag = Tag;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetActiveEquipSlotTag_ReturnValue = CallFunc_GetActiveEquipSlotTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetVFXTP_Gun_ReturnValue = CallFunc_GetVFXTP_Gun_ReturnValue;
	Parms.CallFunc_GetVFXFP_Gun_ReturnValue = CallFunc_GetVFXFP_Gun_ReturnValue;
	Parms.CallFunc_GetStackAmount_Stack = CallFunc_GetStackAmount_Stack;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_AR_Exotic_Stack.GC_AR_Exotic_Stack_C.On Third Person
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetActiveEquipSlotTag_ReturnValue                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_AR_Exotic_Stack_C::On_Third_Person(bool Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_AR_Exotic_Stack_C", "On Third Person");

	Params::AGC_AR_Exotic_Stack_C_On_Third_Person_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetActiveEquipSlotTag_ReturnValue = CallFunc_GetActiveEquipSlotTag_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_AR_Exotic_Stack.GC_AR_Exotic_Stack_C.BindToOnThirdPerson
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_AR_Exotic_Stack_C::BindToOnThirdPerson(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_AR_Exotic_Stack_C", "BindToOnThirdPerson");

	Params::AGC_AR_Exotic_Stack_C_BindToOnThirdPerson_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_AR_Exotic_Stack.GC_AR_Exotic_Stack_C.On Tag Added
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVFXTP_Gun_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVFXFP_Gun_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetActiveEquipSlotTag_ReturnValue                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_AR_Exotic_Stack_C::On_Tag_Added(const struct GameplayTags_GameplayTag& Tag, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetVFXTP_Gun_ReturnValue, class USkeletalMeshComponent* CallFunc_GetVFXFP_Gun_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_AR_Exotic_Stack_C", "On Tag Added");

	Params::AGC_AR_Exotic_Stack_C_On_Tag_Added_Params Parms{};

	Parms.Tag = Tag;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetVFXTP_Gun_ReturnValue = CallFunc_GetVFXTP_Gun_ReturnValue;
	Parms.CallFunc_GetVFXFP_Gun_ReturnValue = CallFunc_GetVFXFP_Gun_ReturnValue;
	Parms.CallFunc_GetActiveEquipSlotTag_ReturnValue = CallFunc_GetActiveEquipSlotTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_AR_Exotic_Stack.GC_AR_Exotic_Stack_C.On Tag Removed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayAbility*            CallFunc_GetActiveSwappedAbility_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetActiveEquipSlotTag_ReturnValue                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVFXTP_Gun_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVFXFP_Gun_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStackAmount_Stack                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_AR_Exotic_Stack_C::On_Tag_Removed(const struct GameplayTags_GameplayTag& Tag, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UGameplayAbility* CallFunc_GetActiveSwappedAbility_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class USkeletalMeshComponent* CallFunc_GetVFXTP_Gun_ReturnValue, class USkeletalMeshComponent* CallFunc_GetVFXFP_Gun_ReturnValue, int32 CallFunc_GetStackAmount_Stack, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_AR_Exotic_Stack_C", "On Tag Removed");

	Params::AGC_AR_Exotic_Stack_C_On_Tag_Removed_Params Parms{};

	Parms.Tag = Tag;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetActiveSwappedAbility_ReturnValue = CallFunc_GetActiveSwappedAbility_ReturnValue;
	Parms.CallFunc_GetActiveEquipSlotTag_ReturnValue = CallFunc_GetActiveEquipSlotTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetVFXTP_Gun_ReturnValue = CallFunc_GetVFXTP_Gun_ReturnValue;
	Parms.CallFunc_GetVFXFP_Gun_ReturnValue = CallFunc_GetVFXFP_Gun_ReturnValue;
	Parms.CallFunc_GetStackAmount_Stack = CallFunc_GetStackAmount_Stack;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_AR_Exotic_Stack.GC_AR_Exotic_Stack_C.BindToSwap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValAT_GameplayTagAddedRemoved*CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAT_GameplayTagAddedRemoved*CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_1        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAT_GameplayTagAddedRemoved*CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_2        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void AGC_AR_Exotic_Stack_C::BindToSwap(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_1, class UValAT_GameplayTagAddedRemoved* CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_AR_Exotic_Stack_C", "BindToSwap");

	Params::AGC_AR_Exotic_Stack_C_BindToSwap_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue = CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue;
	Parms.CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_1 = CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_1;
	Parms.CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_2 = CallFunc_ListenForGameplayTagAddedOrRemoved_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_AR_Exotic_Stack.GC_AR_Exotic_Stack_C.OnRemove
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayCueParametersParameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVFXTP_Gun_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVFXFP_Gun_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGC_AR_Exotic_Stack_C::OnRemove(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetVFXTP_Gun_ReturnValue, class USkeletalMeshComponent* CallFunc_GetVFXFP_Gun_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_AR_Exotic_Stack_C", "OnRemove");

	Params::AGC_AR_Exotic_Stack_C_OnRemove_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetVFXTP_Gun_ReturnValue = CallFunc_GetVFXTP_Gun_ReturnValue;
	Parms.CallFunc_GetVFXFP_Gun_ReturnValue = CallFunc_GetVFXFP_Gun_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GC_AR_Exotic_Stack.GC_AR_Exotic_Stack_C.CustomMatchFunc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayAbilities_ActiveGameplayEffectEffect                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bMatches                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_AR_Exotic_Stack_C::CustomMatchFunc(const struct GameplayAbilities_ActiveGameplayEffect& Effect, bool* bMatches)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_AR_Exotic_Stack_C", "CustomMatchFunc");

	Params::AGC_AR_Exotic_Stack_C_CustomMatchFunc_Params Parms{};

	Parms.Effect = Effect;

	UObject::ProcessEvent(Func, &Parms);

	if (bMatches != nullptr)
		*bMatches = Parms.bMatches;

}


// Function GC_AR_Exotic_Stack.GC_AR_Exotic_Stack_C.GetStackAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Stack                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayEffectQueryK2Node_MakeStruct_GameplayEffectQuery                            (ContainsInstancedReference)
// TArray<struct GameplayAbilities_ActiveGameplayEffectHandle>CallFunc_GetActiveEffects_ReturnValue                            (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveGameplayEffectStackCount_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGC_AR_Exotic_Stack_C::GetStackAmount(class AActor* Source, int32* Stack, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct GameplayAbilities_GameplayEffectQuery& K2Node_MakeStruct_GameplayEffectQuery, TArray<struct GameplayAbilities_ActiveGameplayEffectHandle>& CallFunc_GetActiveEffects_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_GetActiveGameplayEffectStackCount_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_AR_Exotic_Stack_C", "GetStackAmount");

	Params::AGC_AR_Exotic_Stack_C_GetStackAmount_Params Parms{};

	Parms.Source = Source;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_GameplayEffectQuery = K2Node_MakeStruct_GameplayEffectQuery;
	Parms.CallFunc_GetActiveEffects_ReturnValue = CallFunc_GetActiveEffects_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetActiveGameplayEffectStackCount_ReturnValue = CallFunc_GetActiveGameplayEffectStackCount_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Stack != nullptr)
		*Stack = Parms.Stack;

}


// Function GC_AR_Exotic_Stack.GC_AR_Exotic_Stack_C.Set Stack Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Stack                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVFXTP_Gun_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetVFXFP_Gun_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void AGC_AR_Exotic_Stack_C::Set_Stack_Value(int32 Stack, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetVFXTP_Gun_ReturnValue, class USkeletalMeshComponent* CallFunc_GetVFXFP_Gun_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_AR_Exotic_Stack_C", "Set Stack Value");

	Params::AGC_AR_Exotic_Stack_C_Set_Stack_Value_Params Parms{};

	Parms.Stack = Stack;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetVFXTP_Gun_ReturnValue = CallFunc_GetVFXTP_Gun_ReturnValue;
	Parms.CallFunc_GetVFXFP_Gun_ReturnValue = CallFunc_GetVFXFP_Gun_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GC_AR_Exotic_Stack.GC_AR_Exotic_Stack_C.OnActive
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      MyTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayCueParametersParameters                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CharPlayer_C*            K2Node_DynamicCast_AsBP_Char_Player                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetGunMesh3P_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetGunMesh1P_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Create_1P3P_VFX_Active_1PVFX                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              CallFunc_Create_1P3P_VFX_1P_System_Ref                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_Create_1P3P_VFX_Active_3PVFX                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              CallFunc_Create_1P3P_VFX_3P_System_Ref                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStackAmount_Stack                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetActiveEquipSlotTag_ReturnValue                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AGC_AR_Exotic_Stack_C::OnActive(class AActor* MyTarget, struct GameplayAbilities_GameplayCueParameters& Parameters, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, class ABP_CharPlayer_C* K2Node_DynamicCast_AsBP_Char_Player, bool K2Node_DynamicCast_bSuccess_1, class AValCharacter* K2Node_DynamicCast_AsVal_Character_1, bool K2Node_DynamicCast_bSuccess_2, class USkeletalMeshComponent* CallFunc_GetGunMesh3P_ReturnValue, class USkeletalMeshComponent* CallFunc_GetGunMesh1P_ReturnValue, class UNiagaraComponent* CallFunc_Create_1P3P_VFX_Active_1PVFX, class UNiagaraSystem* CallFunc_Create_1P3P_VFX_1P_System_Ref, class UNiagaraComponent* CallFunc_Create_1P3P_VFX_Active_3PVFX, class UNiagaraSystem* CallFunc_Create_1P3P_VFX_3P_System_Ref, int32 CallFunc_GetStackAmount_Stack, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GC_AR_Exotic_Stack_C", "OnActive");

	Params::AGC_AR_Exotic_Stack_C_OnActive_Params Parms{};

	Parms.MyTarget = MyTarget;
	Parms.Parameters = Parameters;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Char_Player = K2Node_DynamicCast_AsBP_Char_Player;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsVal_Character_1 = K2Node_DynamicCast_AsVal_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGunMesh3P_ReturnValue = CallFunc_GetGunMesh3P_ReturnValue;
	Parms.CallFunc_GetGunMesh1P_ReturnValue = CallFunc_GetGunMesh1P_ReturnValue;
	Parms.CallFunc_Create_1P3P_VFX_Active_1PVFX = CallFunc_Create_1P3P_VFX_Active_1PVFX;
	Parms.CallFunc_Create_1P3P_VFX_1P_System_Ref = CallFunc_Create_1P3P_VFX_1P_System_Ref;
	Parms.CallFunc_Create_1P3P_VFX_Active_3PVFX = CallFunc_Create_1P3P_VFX_Active_3PVFX;
	Parms.CallFunc_Create_1P3P_VFX_3P_System_Ref = CallFunc_Create_1P3P_VFX_3P_System_Ref;
	Parms.CallFunc_GetStackAmount_Stack = CallFunc_GetStackAmount_Stack;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetActiveEquipSlotTag_ReturnValue = CallFunc_GetActiveEquipSlotTag_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


