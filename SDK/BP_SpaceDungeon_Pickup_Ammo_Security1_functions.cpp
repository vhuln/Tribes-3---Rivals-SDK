#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpaceDungeon_Pickup_Ammo_Security1.BP_SpaceDungeon_Pickup_Ammo_Security1_C
// (Actor)

class UClass* ABP_SpaceDungeon_Pickup_Ammo_Security1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpaceDungeon_Pickup_Ammo_Security1_C");

	return Clss;
}


// BP_SpaceDungeon_Pickup_Ammo_Security1_C BP_SpaceDungeon_Pickup_Ammo_Security1.Default__BP_SpaceDungeon_Pickup_Ammo_Security1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpaceDungeon_Pickup_Ammo_Security1_C* ABP_SpaceDungeon_Pickup_Ammo_Security1_C::GetDefaultObj()
{
	static class ABP_SpaceDungeon_Pickup_Ammo_Security1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpaceDungeon_Pickup_Ammo_Security1_C*>(ABP_SpaceDungeon_Pickup_Ammo_Security1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SpaceDungeon_Pickup_Ammo_Security1.BP_SpaceDungeon_Pickup_Ammo_Security1_C.GetContextDescriptionOverride
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ABP_SpaceDungeon_Pickup_Ammo_Security1_C::GetContextDescriptionOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpaceDungeon_Pickup_Ammo_Security1_C", "GetContextDescriptionOverride");

	Params::ABP_SpaceDungeon_Pickup_Ammo_Security1_C_GetContextDescriptionOverride_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SpaceDungeon_Pickup_Ammo_Security1.BP_SpaceDungeon_Pickup_Ammo_Security1_C.GetContextTitleOverride
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText ABP_SpaceDungeon_Pickup_Ammo_Security1_C::GetContextTitleOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpaceDungeon_Pickup_Ammo_Security1_C", "GetContextTitleOverride");

	Params::ABP_SpaceDungeon_Pickup_Ammo_Security1_C_GetContextTitleOverride_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SpaceDungeon_Pickup_Ammo_Security1.BP_SpaceDungeon_Pickup_Ammo_Security1_C.GetPreviewDetectionOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct CoreUObject_Vector ABP_SpaceDungeon_Pickup_Ammo_Security1_C::GetPreviewDetectionOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpaceDungeon_Pickup_Ammo_Security1_C", "GetPreviewDetectionOffset");

	Params::ABP_SpaceDungeon_Pickup_Ammo_Security1_C_GetPreviewDetectionOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SpaceDungeon_Pickup_Ammo_Security1.BP_SpaceDungeon_Pickup_Ammo_Security1_C.GetContextPingRarity
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERarity                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ERarity ABP_SpaceDungeon_Pickup_Ammo_Security1_C::GetContextPingRarity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpaceDungeon_Pickup_Ammo_Security1_C", "GetContextPingRarity");

	Params::ABP_SpaceDungeon_Pickup_Ammo_Security1_C_GetContextPingRarity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SpaceDungeon_Pickup_Ammo_Security1.BP_SpaceDungeon_Pickup_Ammo_Security1_C.GetPingOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct CoreUObject_Vector          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct CoreUObject_Vector ABP_SpaceDungeon_Pickup_Ammo_Security1_C::GetPingOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpaceDungeon_Pickup_Ammo_Security1_C", "GetPingOffset");

	Params::ABP_SpaceDungeon_Pickup_Ammo_Security1_C_GetPingOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SpaceDungeon_Pickup_Ammo_Security1.BP_SpaceDungeon_Pickup_Ammo_Security1_C.GetContextPingType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EValPingType            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EValPingType ABP_SpaceDungeon_Pickup_Ammo_Security1_C::GetContextPingType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpaceDungeon_Pickup_Ammo_Security1_C", "GetContextPingType");

	Params::ABP_SpaceDungeon_Pickup_Ammo_Security1_C_GetContextPingType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SpaceDungeon_Pickup_Ammo_Security1.BP_SpaceDungeon_Pickup_Ammo_Security1_C.OnRep_R_DisplayMagazineCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SpaceDungeon_Pickup_Ammo_Security1_C::OnRep_R_DisplayMagazineCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpaceDungeon_Pickup_Ammo_Security1_C", "OnRep_R_DisplayMagazineCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SpaceDungeon_Pickup_Ammo_Security1.BP_SpaceDungeon_Pickup_Ammo_Security1_C.OnRep_R_MagazineCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SpaceDungeon_Pickup_Ammo_Security1_C::OnRep_R_MagazineCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpaceDungeon_Pickup_Ammo_Security1_C", "OnRep_R_MagazineCount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SpaceDungeon_Pickup_Ammo_Security1.BP_SpaceDungeon_Pickup_Ammo_Security1_C.UpdateCountLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void ABP_SpaceDungeon_Pickup_Ammo_Security1_C::UpdateCountLabel(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpaceDungeon_Pickup_Ammo_Security1_C", "UpdateCountLabel");

	Params::ABP_SpaceDungeon_Pickup_Ammo_Security1_C_UpdateCountLabel_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpaceDungeon_Pickup_Ammo_Security1.BP_SpaceDungeon_Pickup_Ammo_Security1_C.CustomPickupFunc
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValCharacter*               ValCharacter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MagazinesToAdd                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERarity                 CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStackSize_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_SpaceDungeon_Pickup_Ammo_Security1_C::CustomPickupFunc(class AValCharacter* ValCharacter, int32 MagazinesToAdd, enum class ERarity CallFunc_GetRarity_ReturnValue, int32 CallFunc_GetStackSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpaceDungeon_Pickup_Ammo_Security1_C", "CustomPickupFunc");

	Params::ABP_SpaceDungeon_Pickup_Ammo_Security1_C_CustomPickupFunc_Params Parms{};

	Parms.ValCharacter = ValCharacter;
	Parms.MagazinesToAdd = MagazinesToAdd;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_GetStackSize_ReturnValue = CallFunc_GetStackSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_SpaceDungeon_Pickup_Ammo_Security1.BP_SpaceDungeon_Pickup_Ammo_Security1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SpaceDungeon_Pickup_Ammo_Security1_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpaceDungeon_Pickup_Ammo_Security1_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SpaceDungeon_Pickup_Ammo_Security1.BP_SpaceDungeon_Pickup_Ammo_Security1_C.OnPickupComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AValCharacter*               ValCharacter                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceDungeon_Pickup_Ammo_Security1_C::OnPickupComplete(class AValCharacter* ValCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpaceDungeon_Pickup_Ammo_Security1_C", "OnPickupComplete");

	Params::ABP_SpaceDungeon_Pickup_Ammo_Security1_C_OnPickupComplete_Params Parms{};

	Parms.ValCharacter = ValCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpaceDungeon_Pickup_Ammo_Security1.BP_SpaceDungeon_Pickup_Ammo_Security1_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceDungeon_Pickup_Ammo_Security1_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpaceDungeon_Pickup_Ammo_Security1_C", "ReceiveTick");

	Params::ABP_SpaceDungeon_Pickup_Ammo_Security1_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SpaceDungeon_Pickup_Ammo_Security1.BP_SpaceDungeon_Pickup_Ammo_Security1_C.ExecuteUbergraph_BP_SpaceDungeon_Pickup_Ammo_Security1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_Event_ValCharacter                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ValAmmoData        CallFunc_GetCurrentAmmo_ReturnValue                              (NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetActiveEquipSlotTag_ReturnValue                       (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_GetEquippedAbility_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// class UValAbilitySystemComponent*  K2Node_DynamicCast_AsVal_Ability_System_Component                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameplayAbility*         CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayAbilities_GameplayAbilitySpecHandleCallFunc_FindAbilitySpecHandleForClass_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BatchRPCTryActivateAbility_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GetAxes_X                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GetAxes_Y                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_GetAxes_Z                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Rotator         CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct CoreUObject_Rotator         CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct Engine_HitResult            CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SpaceDungeon_Pickup_Ammo_Security1_C::ExecuteUbergraph_BP_SpaceDungeon_Pickup_Ammo_Security1(int32 EntryPoint, class AValCharacter* K2Node_Event_ValCharacter, const struct Valhalla_ValAmmoData& CallFunc_GetCurrentAmmo_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetActiveEquipSlotTag_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_GetEquippedAbility_ReturnValue, class UValAbilitySystemComponent* K2Node_DynamicCast_AsVal_Ability_System_Component, bool K2Node_DynamicCast_bSuccess, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, class UValGameplayAbility* CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct GameplayAbilities_GameplayAbilitySpecHandle& CallFunc_FindAbilitySpecHandleForClass_ReturnValue, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_BatchRPCTryActivateAbility_ReturnValue, const struct CoreUObject_Rotator& CallFunc_FindLookAtRotation_ReturnValue, float K2Node_Event_DeltaSeconds, const struct CoreUObject_Vector& CallFunc_GetAxes_X, const struct CoreUObject_Vector& CallFunc_GetAxes_Y, const struct CoreUObject_Vector& CallFunc_GetAxes_Z, const struct CoreUObject_Rotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct CoreUObject_Rotator& CallFunc_ComposeRotators_ReturnValue, const struct Engine_HitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SpaceDungeon_Pickup_Ammo_Security1_C", "ExecuteUbergraph_BP_SpaceDungeon_Pickup_Ammo_Security1");

	Params::ABP_SpaceDungeon_Pickup_Ammo_Security1_C_ExecuteUbergraph_BP_SpaceDungeon_Pickup_Ammo_Security1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ValCharacter = K2Node_Event_ValCharacter;
	Parms.CallFunc_GetCurrentAmmo_ReturnValue = CallFunc_GetCurrentAmmo_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetActiveEquipSlotTag_ReturnValue = CallFunc_GetActiveEquipSlotTag_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetEquippedAbility_ReturnValue = CallFunc_GetEquippedAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Ability_System_Component = K2Node_DynamicCast_AsVal_Ability_System_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue = CallFunc_GetPrimaryAbilityInstanceFromHandle_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_FindAbilitySpecHandleForClass_ReturnValue = CallFunc_FindAbilitySpecHandleForClass_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BatchRPCTryActivateAbility_ReturnValue = CallFunc_BatchRPCTryActivateAbility_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetAxes_X = CallFunc_GetAxes_X;
	Parms.CallFunc_GetAxes_Y = CallFunc_GetAxes_Y;
	Parms.CallFunc_GetAxes_Z = CallFunc_GetAxes_Z;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


