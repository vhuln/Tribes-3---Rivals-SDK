#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIController_Player.BP_AIController_Player_C
// (Actor)

class UClass* ABP_AIController_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIController_Player_C");

	return Clss;
}


// BP_AIController_Player_C BP_AIController_Player.Default__BP_AIController_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AIController_Player_C* ABP_AIController_Player_C::GetDefaultObj()
{
	static class ABP_AIController_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AIController_Player_C*>(ABP_AIController_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIController_Player.BP_AIController_Player_C.OnTargetUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     PreviousTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::OnTargetUpdated(class UObject* PreviousTarget, class UObject* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnTargetUpdated");

	Params::ABP_AIController_Player_C_OnTargetUpdated_Params Parms{};

	Parms.PreviousTarget = PreviousTarget;
	Parms.NewTarget = NewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.SetHearingSenseEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::SetHearingSenseEnabled(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "SetHearingSenseEnabled");

	Params::ABP_AIController_Player_C_SetHearingSenseEnabled_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnMatchStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchStarted_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValGameState*               K2Node_DynamicCast_AsVal_Game_State                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::OnMatchStateChanged(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasMatchStarted_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AValGameState* K2Node_DynamicCast_AsVal_Game_State, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnMatchStateChanged");

	Params::ABP_AIController_Player_C_OnMatchStateChanged_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasMatchStarted_ReturnValue = CallFunc_HasMatchStarted_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_State = K2Node_DynamicCast_AsVal_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.ConditionalEnableSenses
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValGameState*               K2Node_DynamicCast_AsVal_Game_State                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchStarted_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::ConditionalEnableSenses(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AValGameState* K2Node_DynamicCast_AsVal_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasMatchStarted_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "ConditionalEnableSenses");

	Params::ABP_AIController_Player_C_ConditionalEnableSenses_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_State = K2Node_DynamicCast_AsVal_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasMatchStarted_ReturnValue = CallFunc_HasMatchStarted_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnEquipSlotUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    EquipSlot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class FName                        EquipSlotKey                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::OnEquipSlotUpdated(const struct GameplayTags_GameplayTag& EquipSlot, class FName EquipSlotKey, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnEquipSlotUpdated");

	Params::ABP_AIController_Player_C_OnEquipSlotUpdated_Params Parms{};

	Parms.EquipSlot = EquipSlot;
	Parms.EquipSlotKey = EquipSlotKey;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue_1 = CallFunc_EqualEqual_GameplayTag_ReturnValue_1;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.RemoveBuildingLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Loot_Crate_C*            LootCrate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::RemoveBuildingLoot(class ABP_Loot_Crate_C* LootCrate, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "RemoveBuildingLoot");

	Params::ABP_AIController_Player_C_RemoveBuildingLoot_Params Parms{};

	Parms.LootCrate = LootCrate;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.RemoveActivePOI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AIController_Player_C::RemoveActivePOI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "RemoveActivePOI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIController_Player.BP_AIController_Player_C.RoyaleModeBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::RoyaleModeBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "RoyaleModeBindings");

	Params::ABP_AIController_Player_C_RoyaleModeBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.GetAcceptableRadius
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             SqrRadius                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_Vector_NetQuantize   Center                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValGameState_Frontier*      K2Node_DynamicCast_AsVal_Game_State_Frontier                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValGameMode_Royale*         K2Node_DynamicCast_AsVal_Game_Mode_Royale                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_FogPhase           CallFunc_GetCurrentFogPhase_ReturnValue                          (None)
// double                             CallFunc_Square_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Square_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::GetAcceptableRadius(double* SqrRadius, struct Engine_Vector_NetQuantize* Center, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AValGameState_Frontier* K2Node_DynamicCast_AsVal_Game_State_Frontier, bool K2Node_DynamicCast_bSuccess, class AValGameMode_Royale* K2Node_DynamicCast_AsVal_Game_Mode_Royale, bool K2Node_DynamicCast_bSuccess_1, const struct Valhalla_FogPhase& CallFunc_GetCurrentFogPhase_ReturnValue, double CallFunc_Square_ReturnValue, double CallFunc_Square_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "GetAcceptableRadius");

	Params::ABP_AIController_Player_C_GetAcceptableRadius_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_State_Frontier = K2Node_DynamicCast_AsVal_Game_State_Frontier;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsVal_Game_Mode_Royale = K2Node_DynamicCast_AsVal_Game_Mode_Royale;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCurrentFogPhase_ReturnValue = CallFunc_GetCurrentFogPhase_ReturnValue;
	Parms.CallFunc_Square_ReturnValue = CallFunc_Square_ReturnValue;
	Parms.CallFunc_Square_A_ImplicitCast = CallFunc_Square_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (SqrRadius != nullptr)
		*SqrRadius = Parms.SqrRadius;

	if (Center != nullptr)
		*Center = std::move(Parms.Center);

}


// Function BP_AIController_Player.BP_AIController_Player_C.On AIShield Percentage Change
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ShieldKeyName                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetShieldPercent_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValueAsFloat_FloatValue_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::On_AIShield_Percentage_Change(float Value, class FName ShieldKeyName, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, float CallFunc_GetShieldPercent_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "On AIShield Percentage Change");

	Params::ABP_AIController_Player_C_On_AIShield_Percentage_Change_Params Parms{};

	Parms.Value = Value;
	Parms.ShieldKeyName = ShieldKeyName;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetShieldPercent_ReturnValue = CallFunc_GetShieldPercent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetValueAsFloat_FloatValue_ImplicitCast = CallFunc_SetValueAsFloat_FloatValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.On Match State Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AIController_Player_C::On_Match_State_Changed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "On Match State Changed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIController_Player.BP_AIController_Player_C.SeenLootItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValPickup_Item*             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        LootCommon                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LootUnCommon                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LootRare                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LootEpic                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LootLegendary                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPickup_Item*             LootItem                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// enum class ERarity                 CallFunc_GetLootRarity_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPickupLootItem_Result                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPickupLootItem_Result_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPickupLootItem_Result_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPickupLootItem_Result_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPickupLootItem_Result_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::SeenLootItem(class AValPickup_Item* Item, class FName LootCommon, class FName LootUnCommon, class FName LootRare, class FName LootEpic, class FName LootLegendary, class AValPickup_Item* LootItem, enum class ERarity CallFunc_GetLootRarity_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CanPickupLootItem_Result, bool CallFunc_CanPickupLootItem_Result_1, bool CallFunc_CanPickupLootItem_Result_2, bool CallFunc_CanPickupLootItem_Result_3, bool CallFunc_CanPickupLootItem_Result_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "SeenLootItem");

	Params::ABP_AIController_Player_C_SeenLootItem_Params Parms{};

	Parms.Item = Item;
	Parms.LootCommon = LootCommon;
	Parms.LootUnCommon = LootUnCommon;
	Parms.LootRare = LootRare;
	Parms.LootEpic = LootEpic;
	Parms.LootLegendary = LootLegendary;
	Parms.LootItem = LootItem;
	Parms.CallFunc_GetLootRarity_ReturnValue = CallFunc_GetLootRarity_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CanPickupLootItem_Result = CallFunc_CanPickupLootItem_Result;
	Parms.CallFunc_CanPickupLootItem_Result_1 = CallFunc_CanPickupLootItem_Result_1;
	Parms.CallFunc_CanPickupLootItem_Result_2 = CallFunc_CanPickupLootItem_Result_2;
	Parms.CallFunc_CanPickupLootItem_Result_3 = CallFunc_CanPickupLootItem_Result_3;
	Parms.CallFunc_CanPickupLootItem_Result_4 = CallFunc_CanPickupLootItem_Result_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.CanPickupShieldPacks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_AIController_Player_C::CanPickupShieldPacks(bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "CanPickupShieldPacks");

	Params::ABP_AIController_Player_C_CanPickupShieldPacks_Params Parms{};

	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AIController_Player.BP_AIController_Player_C.CanPickupLootItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERarity                 Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerState*             K2Node_DynamicCast_AsVal_Player_State                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxPendingLegendaryLoot_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_PendingItem>CallFunc_GetPendingInventory_Inventory                           (ReferenceParm)
// int32                              CallFunc_GetMaxPendingLoot_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_PendingItem>CallFunc_GetPendingLegendaryInventory_Inventory                  (ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::CanPickupLootItem(enum class ERarity Rarity, bool* Result, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AValPlayerState* K2Node_DynamicCast_AsVal_Player_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetMaxPendingLegendaryLoot_ReturnValue, TArray<struct Valhalla_PendingItem>& CallFunc_GetPendingInventory_Inventory, int32 CallFunc_GetMaxPendingLoot_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<struct Valhalla_PendingItem>& CallFunc_GetPendingLegendaryInventory_Inventory, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "CanPickupLootItem");

	Params::ABP_AIController_Player_C_CanPickupLootItem_Params Parms{};

	Parms.Rarity = Rarity;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Player_State = K2Node_DynamicCast_AsVal_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMaxPendingLegendaryLoot_ReturnValue = CallFunc_GetMaxPendingLegendaryLoot_ReturnValue;
	Parms.CallFunc_GetPendingInventory_Inventory = CallFunc_GetPendingInventory_Inventory;
	Parms.CallFunc_GetMaxPendingLoot_ReturnValue = CallFunc_GetMaxPendingLoot_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPendingLegendaryInventory_Inventory = CallFunc_GetPendingLegendaryInventory_Inventory;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_AIController_Player.BP_AIController_Player_C.HasVisitedPOI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUtopia_Constructor_V3_C*    POI                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_AIController_Player_C::HasVisitedPOI(class AUtopia_Constructor_V3_C* POI, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "HasVisitedPOI");

	Params::ABP_AIController_Player_C_HasVisitedPOI_Params Parms{};

	Parms.POI = POI;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AIController_Player.BP_AIController_Player_C.GetPossiblePOIs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AUtopia_Constructor_V3_C*>POIs                                                             (Parm, OutParm)
// TArray<class AUtopia_Constructor_V3_C*>CallFunc_FilterPOIsByBuildingType_Filtered                       (ReferenceParm)
// TArray<class AUtopia_Constructor_V3_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// TArray<class AUtopia_Constructor_V3_C*>CallFunc_FilterPOIsByFog_Filtered                                (ReferenceParm)
// TArray<class AUtopia_Constructor_V3_C*>CallFunc_FilterPOIsByFog_Filtered_1                              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::GetPossiblePOIs(TArray<class AUtopia_Constructor_V3_C*>* POIs, TArray<class AUtopia_Constructor_V3_C*>& CallFunc_FilterPOIsByBuildingType_Filtered, TArray<class AUtopia_Constructor_V3_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class AUtopia_Constructor_V3_C*>& CallFunc_FilterPOIsByFog_Filtered, TArray<class AUtopia_Constructor_V3_C*>& CallFunc_FilterPOIsByFog_Filtered_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "GetPossiblePOIs");

	Params::ABP_AIController_Player_C_GetPossiblePOIs_Params Parms{};

	Parms.CallFunc_FilterPOIsByBuildingType_Filtered = CallFunc_FilterPOIsByBuildingType_Filtered;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_FilterPOIsByFog_Filtered = CallFunc_FilterPOIsByFog_Filtered;
	Parms.CallFunc_FilterPOIsByFog_Filtered_1 = CallFunc_FilterPOIsByFog_Filtered_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (POIs != nullptr)
		*POIs = std::move(Parms.POIs);

}


// Function BP_AIController_Player.BP_AIController_Player_C.FilterPOIsByFog
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AUtopia_Constructor_V3_C*>POIs                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class AUtopia_Constructor_V3_C*>Filtered                                                         (Parm, OutParm)
// struct Engine_Vector_NetQuantize   FogCenter                                                        (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// double                             SqrFogRadius                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AUtopia_Constructor_V3_C*>FilteredPOIs                                                     (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUtopia_Constructor_V3_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Square_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAcceptableRadius_SqrRadius                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_Vector_NetQuantize   CallFunc_GetAcceptableRadius_Center                              (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance2DSquared_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::FilterPOIsByFog(TArray<class AUtopia_Constructor_V3_C*>& POIs, TArray<class AUtopia_Constructor_V3_C*>* Filtered, const struct Engine_Vector_NetQuantize& FogCenter, double SqrFogRadius, const TArray<class AUtopia_Constructor_V3_C*>& FilteredPOIs, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AUtopia_Constructor_V3_C* CallFunc_Array_Get_Item, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_Square_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, double CallFunc_GetAcceptableRadius_SqrRadius, const struct Engine_Vector_NetQuantize& CallFunc_GetAcceptableRadius_Center, double CallFunc_Vector_Distance2DSquared_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "FilterPOIsByFog");

	Params::ABP_AIController_Player_C_FilterPOIsByFog_Params Parms{};

	Parms.POIs = POIs;
	Parms.FogCenter = FogCenter;
	Parms.SqrFogRadius = SqrFogRadius;
	Parms.FilteredPOIs = FilteredPOIs;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Square_ReturnValue = CallFunc_Square_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetAcceptableRadius_SqrRadius = CallFunc_GetAcceptableRadius_SqrRadius;
	Parms.CallFunc_GetAcceptableRadius_Center = CallFunc_GetAcceptableRadius_Center;
	Parms.CallFunc_Vector_Distance2DSquared_ReturnValue = CallFunc_Vector_Distance2DSquared_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Filtered != nullptr)
		*Filtered = std::move(Parms.Filtered);

}


// Function BP_AIController_Player.BP_AIController_Player_C.FilterPOIsByBuildingType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AUtopia_Constructor_V3_C*>POIs                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class AUtopia_Constructor_V3_C*>Filtered                                                         (Parm, OutParm)
// TArray<class AUtopia_Constructor_V3_C*>FilteredPOIs                                                     (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUtopia_Constructor_V3_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValBuildingPOI>CallFunc_GetBuildingType_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBuildingType           CallFunc_GetBuildingType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::FilterPOIsByBuildingType(TArray<class AUtopia_Constructor_V3_C*>& POIs, TArray<class AUtopia_Constructor_V3_C*>* Filtered, const TArray<class AUtopia_Constructor_V3_C*>& FilteredPOIs, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AUtopia_Constructor_V3_C* CallFunc_Array_Get_Item, TScriptInterface<class IValBuildingPOI> CallFunc_GetBuildingType_self_CastInput, enum class EBuildingType CallFunc_GetBuildingType_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "FilterPOIsByBuildingType");

	Params::ABP_AIController_Player_C_FilterPOIsByBuildingType_Params Parms{};

	Parms.POIs = POIs;
	Parms.FilteredPOIs = FilteredPOIs;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetBuildingType_self_CastInput = CallFunc_GetBuildingType_self_CastInput;
	Parms.CallFunc_GetBuildingType_ReturnValue = CallFunc_GetBuildingType_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Filtered != nullptr)
		*Filtered = std::move(Parms.Filtered);

}


// Function BP_AIController_Player.BP_AIController_Player_C.AddVisitedPOI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUtopia_Constructor_V3_C*    New                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AUtopia_Constructor_V3_C*    Previous                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::AddVisitedPOI(class AUtopia_Constructor_V3_C* New, class AUtopia_Constructor_V3_C* Previous, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "AddVisitedPOI");

	Params::ABP_AIController_Player_C_AddVisitedPOI_Params Parms{};

	Parms.New = New;
	Parms.Previous = Previous;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.CanPickupHealthPacks
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttribute_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_AIController_Player_C::CanPickupHealthPacks(bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "CanPickupHealthPacks");

	Params::ABP_AIController_Player_C_CanPickupHealthPacks_Params Parms{};

	Parms.CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttribute_ReturnValue = CallFunc_GetFloatAttribute_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AIController_Player.BP_AIController_Player_C.CanPickupBoost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPendingBoostSpace_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_AIController_Player_C::CanPickupBoost(bool CallFunc_HasPendingBoostSpace_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "CanPickupBoost");

	Params::ABP_AIController_Player_C_CanPickupBoost_Params Parms{};

	Parms.CallFunc_HasPendingBoostSpace_ReturnValue = CallFunc_HasPendingBoostSpace_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AIController_Player.BP_AIController_Player_C.CanInteractWithChest
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     LootCrate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValLootCrate*               K2Node_DynamicCast_AsVal_Loot_Crate                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IValInteractable>CallFunc_CanInteract_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInteract_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_AIController_Player_C::CanInteractWithChest(class UObject* LootCrate, class AValLootCrate* K2Node_DynamicCast_AsVal_Loot_Crate, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IValInteractable> CallFunc_CanInteract_self_CastInput, bool CallFunc_CanInteract_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "CanInteractWithChest");

	Params::ABP_AIController_Player_C_CanInteractWithChest_Params Parms{};

	Parms.LootCrate = LootCrate;
	Parms.K2Node_DynamicCast_AsVal_Loot_Crate = K2Node_DynamicCast_AsVal_Loot_Crate;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CanInteract_self_CastInput = CallFunc_CanInteract_self_CastInput;
	Parms.CallFunc_CanInteract_ReturnValue = CallFunc_CanInteract_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AIController_Player.BP_AIController_Player_C.RemoveTetherEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CharPlayer_Test_C*       K2Node_DynamicCast_AsBP_Char_Player_Test                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValAbilitySystemComponent*  K2Node_DynamicCast_AsVal_Ability_System_Component                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::RemoveTetherEffects(bool CallFunc_IsValid_ReturnValue, class ABP_CharPlayer_Test_C* K2Node_DynamicCast_AsBP_Char_Player_Test, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UValAbilitySystemComponent* K2Node_DynamicCast_AsVal_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "RemoveTetherEffects");

	Params::ABP_AIController_Player_C_RemoveTetherEffects_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Char_Player_Test = K2Node_DynamicCast_AsBP_Char_Player_Test;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Ability_System_Component = K2Node_DynamicCast_AsVal_Ability_System_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.UpdatePredictedLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Vector          PredictedLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PredictedLocationKeyName                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::UpdatePredictedLocation(const struct CoreUObject_Vector& PredictedLocation, class FName PredictedLocationKeyName, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "UpdatePredictedLocation");

	Params::ABP_AIController_Player_C_UpdatePredictedLocation_Params Parms{};

	Parms.PredictedLocation = PredictedLocation;
	Parms.PredictedLocationKeyName = PredictedLocationKeyName;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.UpdateAICanSetTargetActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBI_AI_C>   K2Node_DynamicCast_AsBI_AI                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValThreatComponent*         CallFunc_GetThreatSystem_ThreatSystem                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::UpdateAICanSetTargetActor(class APawn* CallFunc_K2_GetPawn_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, TScriptInterface<class IBI_AI_C> K2Node_DynamicCast_AsBI_AI, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, class UValThreatComponent* CallFunc_GetThreatSystem_ThreatSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "UpdateAICanSetTargetActor");

	Params::ABP_AIController_Player_C_UpdateAICanSetTargetActor_Params Parms{};

	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBI_AI = K2Node_DynamicCast_AsBI_AI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_GetThreatSystem_ThreatSystem = CallFunc_GetThreatSystem_ThreatSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.UpdateAICanShoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NoShoot                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::UpdateAICanShoot(class FName NoShoot, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "UpdateAICanShoot");

	Params::ABP_AIController_Player_C_UpdateAICanShoot_Params Parms{};

	Parms.NoShoot = NoShoot;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.UpdateAIIsPaused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::UpdateAIIsPaused(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "UpdateAIIsPaused");

	Params::ABP_AIController_Player_C_UpdateAIIsPaused_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.UpdateFogDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        DamageFogActor                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        DistanceToWall                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValUtopiaObjectivePoint*    CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AValUtopiaObjectivePoint*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValueAsFloat_FloatValue_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::UpdateFogDistance(class FName DamageFogActor, class FName DistanceToWall, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AValUtopiaObjectivePoint* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TArray<class AValUtopiaObjectivePoint*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "UpdateFogDistance");

	Params::ABP_AIController_Player_C_UpdateFogDistance_Params Parms{};

	Parms.DamageFogActor = DamageFogActor;
	Parms.DistanceToWall = DistanceToWall;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_B_ImplicitCast = CallFunc_Subtract_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_SetValueAsFloat_FloatValue_ImplicitCast = CallFunc_SetValueAsFloat_FloatValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.UpdateAIHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        HealthKeyName                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealthPercent_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValueAsFloat_FloatValue_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::UpdateAIHealth(class FName HealthKeyName, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetHealthPercent_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "UpdateAIHealth");

	Params::ABP_AIController_Player_C_UpdateAIHealth_Params Parms{};

	Parms.HealthKeyName = HealthKeyName;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHealthPercent_ReturnValue = CallFunc_GetHealthPercent_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetValueAsFloat_FloatValue_ImplicitCast = CallFunc_SetValueAsFloat_FloatValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.UpdateAIAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SpecialtyAmmoKeyName                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        AmmoKeyName                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ValAmmoData        CallFunc_GetCurrentAmmo_ReturnValue                              (NoDestructor)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_A_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValueAsFloat_FloatValue_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::UpdateAIAmmo(class FName SpecialtyAmmoKeyName, class FName AmmoKeyName, class FName CallFunc_MakeLiteralName_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, double CallFunc_FMax_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct Valhalla_ValAmmoData& CallFunc_GetCurrentAmmo_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, class FName K2Node_Select_Default, bool CallFunc_IsGameplayTagValid_ReturnValue, class FName K2Node_Select_Default_1, double CallFunc_FMax_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "UpdateAIAmmo");

	Params::ABP_AIController_Player_C_UpdateAIAmmo_Params Parms{};

	Parms.SpecialtyAmmoKeyName = SpecialtyAmmoKeyName;
	Parms.AmmoKeyName = AmmoKeyName;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCurrentAmmo_ReturnValue = CallFunc_GetCurrentAmmo_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue_1 = CallFunc_EqualEqual_GameplayTag_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_FMax_A_ImplicitCast = CallFunc_FMax_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetValueAsFloat_FloatValue_ImplicitCast = CallFunc_SetValueAsFloat_FloatValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnBotClassSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::OnBotClassSet(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnBotClassSet");

	Params::ABP_AIController_Player_C_OnBotClassSet_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.HasDirective
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EBotDirective           Directive                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Current                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValueAsEnum_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::HasDirective(enum class EBotDirective Directive, bool* Current, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_GetValueAsEnum_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "HasDirective");

	Params::ABP_AIController_Player_C_HasDirective_Params Parms{};

	Parms.Directive = Directive;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetValueAsEnum_ReturnValue = CallFunc_GetValueAsEnum_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Current != nullptr)
		*Current = Parms.Current;

}


// Function BP_AIController_Player.BP_AIController_Player_C.FrontierModeBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::FrontierModeBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "FrontierModeBindings");

	Params::ABP_AIController_Player_C_FrontierModeBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.On Portal State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameObjectiveState     Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PatrolPoint                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PortalDistance                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        PortalPoint                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::On_Portal_State(enum class EGameObjectiveState Value, class FName PatrolPoint, class FName PortalDistance, class FName PortalPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "On Portal State");

	Params::ABP_AIController_Player_C_On_Portal_State_Params Parms{};

	Parms.Value = Value;
	Parms.PatrolPoint = PatrolPoint;
	Parms.PortalDistance = PortalDistance;
	Parms.PortalPoint = PortalPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.SetBlackboardValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        DefendPointKey                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RangeKeyName                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValueAsFloat_FloatValue_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::SetBlackboardValues(class FName DefendPointKey, class FName RangeKeyName, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, const struct CoreUObject_Vector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast, float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "SetBlackboardValues");

	Params::ABP_AIController_Player_C_SetBlackboardValues_Params Parms{};

	Parms.DefendPointKey = DefendPointKey;
	Parms.RangeKeyName = RangeKeyName;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SetValueAsFloat_FloatValue_ImplicitCast = CallFunc_SetValueAsFloat_FloatValue_ImplicitCast;
	Parms.CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_1 = CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "ReceivePossess");

	Params::ABP_AIController_Player_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnUsingBlackBoard
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*        BlackboardComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBlackboardData*             BlackboardAsset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnUsingBlackBoard");

	Params::ABP_AIController_Player_C_OnUsingBlackBoard_Params Parms{};

	Parms.BlackboardComp = BlackboardComp;
	Parms.BlackboardAsset = BlackboardAsset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "ReceiveTick");

	Params::ABP_AIController_Player_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.UpdateBlackboardKeyValueAsBool
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::UpdateBlackboardKeyValueAsBool(class FName Key, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "UpdateBlackboardKeyValueAsBool");

	Params::ABP_AIController_Player_C_UpdateBlackboardKeyValueAsBool_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.SetTetherRadius
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::SetTetherRadius(float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "SetTetherRadius");

	Params::ABP_AIController_Player_C_SetTetherRadius_Params Parms{};

	Parms.Radius = Radius;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.UpdateBlackboardKeyValueAsVector
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::UpdateBlackboardKeyValueAsVector(class FName Key, const struct CoreUObject_Vector& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "UpdateBlackboardKeyValueAsVector");

	Params::ABP_AIController_Player_C_UpdateBlackboardKeyValueAsVector_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnTargetActorUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     PreviousTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     NewTarget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::OnTargetActorUpdated(class UObject* PreviousTarget, class UObject* NewTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnTargetActorUpdated");

	Params::ABP_AIController_Player_C_OnTargetActorUpdated_Params Parms{};

	Parms.PreviousTarget = PreviousTarget;
	Parms.NewTarget = NewTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_AIController_Player_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnTargetPerceptionUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct AIModule_AIStimulus         Stimulus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_AIController_Player_C::OnTargetPerceptionUpdated(class AActor* Actor, const struct AIModule_AIStimulus& Stimulus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnTargetPerceptionUpdated");

	Params::ABP_AIController_Player_C_OnTargetPerceptionUpdated_Params Parms{};

	Parms.Actor = Actor;
	Parms.Stimulus = Stimulus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.UpdateBlackboardKeyValueAsObject
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::UpdateBlackboardKeyValueAsObject(class FName Key, class UObject* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "UpdateBlackboardKeyValueAsObject");

	Params::ABP_AIController_Player_C_UpdateBlackboardKeyValueAsObject_Params Parms{};

	Parms.Key = Key;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnBotLeaderSet
// (Event, Public, BlueprintEvent)
// Parameters:
// class AValCharacter*               Leader                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::OnBotLeaderSet(class AValCharacter* Leader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnBotLeaderSet");

	Params::ABP_AIController_Player_C_OnBotLeaderSet_Params Parms{};

	Parms.Leader = Leader;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnLootCrateOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValLootCrate*               LootCrate                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::OnLootCrateOpened(class AValLootCrate* LootCrate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnLootCrateOpened");

	Params::ABP_AIController_Player_C_OnLootCrateOpened_Params Parms{};

	Parms.LootCrate = LootCrate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnPOILooted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AIController_Player_C::OnPOILooted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnPOILooted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnFogActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AIController_Player_C::OnFogActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnFogActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnFogWaitPhaseStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AIController_Player_C::OnFogWaitPhaseStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnFogWaitPhaseStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnFogPhaseStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AIController_Player_C::OnFogPhaseStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnFogPhaseStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIController_Player.BP_AIController_Player_C.BndEvt__BP_PlayerAIController_Val_AIPerception_K2Node_ComponentBoundEvent_6_ActorPerceptionUpdatedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct AIModule_AIStimulus         Stimulus                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_AIController_Player_C::BndEvt__BP_PlayerAIController_Val_AIPerception_K2Node_ComponentBoundEvent_6_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct AIModule_AIStimulus& Stimulus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "BndEvt__BP_PlayerAIController_Val_AIPerception_K2Node_ComponentBoundEvent_6_ActorPerceptionUpdatedDelegate__DelegateSignature");

	Params::ABP_AIController_Player_C_BndEvt__BP_PlayerAIController_Val_AIPerception_K2Node_ComponentBoundEvent_6_ActorPerceptionUpdatedDelegate__DelegateSignature_Params Parms{};

	Parms.Actor = Actor;
	Parms.Stimulus = Stimulus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.ToggleTargetingAllAI
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_AIController_Player_C::ToggleTargetingAllAI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "ToggleTargetingAllAI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIController_Player.BP_AIController_Player_C.ToggleShootingAllAI
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_AIController_Player_C::ToggleShootingAllAI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "ToggleShootingAllAI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIController_Player.BP_AIController_Player_C.TogglePauseAllAI
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_AIController_Player_C::TogglePauseAllAI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "TogglePauseAllAI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnAIHealthPercentageChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::OnAIHealthPercentageChanged(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnAIHealthPercentageChanged");

	Params::ABP_AIController_Player_C_OnAIHealthPercentageChanged_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnAIReservedAmmoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OldValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::OnAIReservedAmmoChanged(float OldValue, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnAIReservedAmmoChanged");

	Params::ABP_AIController_Player_C_OnAIReservedAmmoChanged_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnSightGainedOnActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::OnSightGainedOnActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnSightGainedOnActor");

	Params::ABP_AIController_Player_C_OnSightGainedOnActor_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnSightLostOnActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::OnSightLostOnActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnSightLostOnActor");

	Params::ABP_AIController_Player_C_OnSightLostOnActor_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.OnAIDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_DamageData         DamageData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_AIController_Player_C::OnAIDamaged(const struct Valhalla_DamageData& DamageData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "OnAIDamaged");

	Params::ABP_AIController_Player_C_OnAIDamaged_Params Parms{};

	Parms.DamageData = DamageData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AIController_Player.BP_AIController_Player_C.ExecuteUbergraph_BP_AIController_Player
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_PreviousTarget                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_NewTarget                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_Key_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          K2Node_Event_Value_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor_2                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct AIModule_AIStimulus         K2Node_CustomEvent_Stimulus                                      (NoDestructor)
// class FName                        K2Node_Event_Key                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_Value                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UAISense>        CallFunc_GetSenseClassForStimulus_ReturnValue                    (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_Event_Leader                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValLootCrate*               K2Node_CustomEvent_LootCrate                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Radius                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_Key_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Value_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValGameState*               K2Node_DynamicCast_AsVal_Game_State                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        K2Node_Event_BlackboardComp                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBlackboardData*             K2Node_Event_BlackboardAsset                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValGameState_Frontier*      K2Node_DynamicCast_AsVal_Game_State_Frontier                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_Actor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct AIModule_AIStimulus         K2Node_ComponentBoundEvent_Stimulus                              (NoDestructor)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_OldValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValAISightComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValCharacter*               K2Node_DynamicCast_AsVal_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_DamageData         K2Node_CustomEvent_DamageData                                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValAbilitySystemComponent*  K2Node_DynamicCast_AsVal_Ability_System_Component                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCybridCalmTowardsTarget_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_Player_C::ExecuteUbergraph_BP_AIController_Player(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UObject* K2Node_CustomEvent_PreviousTarget, class UObject* K2Node_CustomEvent_NewTarget, class FName K2Node_Event_Key_1, const struct CoreUObject_Vector& K2Node_Event_Value_1, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_CustomEvent_Actor_2, const struct AIModule_AIStimulus& K2Node_CustomEvent_Stimulus, class FName K2Node_Event_Key, class UObject* K2Node_Event_Value, TSubclassOf<class UAISense> CallFunc_GetSenseClassForStimulus_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchString_CmpSuccess, class AValCharacter* K2Node_Event_Leader, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class FName CallFunc_MakeLiteralName_ReturnValue_1, class AValLootCrate* K2Node_CustomEvent_LootCrate, float K2Node_Event_Radius, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FName K2Node_Event_Key_2, bool K2Node_Event_Value_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameStateBase* CallFunc_GetGameState_ReturnValue, float K2Node_Event_DeltaSeconds, class AValGameState* K2Node_DynamicCast_AsVal_Game_State, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* K2Node_Event_BlackboardComp, class UBlackboardData* K2Node_Event_BlackboardAsset, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, class AValGameState_Frontier* K2Node_DynamicCast_AsVal_Game_State_Frontier, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_ComponentBoundEvent_Actor, const struct AIModule_AIStimulus& K2Node_ComponentBoundEvent_Stimulus, float K2Node_CustomEvent_Value, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_OldValue, float K2Node_CustomEvent_NewValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UValAISightComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AActor* K2Node_CustomEvent_Actor_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AActor* K2Node_CustomEvent_Actor, class APawn* K2Node_Event_PossessedPawn, class AValCharacter* K2Node_DynamicCast_AsVal_Character, bool K2Node_DynamicCast_bSuccess_2, const struct Valhalla_DamageData& K2Node_CustomEvent_DamageData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UValAbilitySystemComponent* K2Node_DynamicCast_AsVal_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_3, bool Temp_bool_Variable, class AActor* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsCybridCalmTowardsTarget_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIController_Player_C", "ExecuteUbergraph_BP_AIController_Player");

	Params::ABP_AIController_Player_C_ExecuteUbergraph_BP_AIController_Player_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_PreviousTarget = K2Node_CustomEvent_PreviousTarget;
	Parms.K2Node_CustomEvent_NewTarget = K2Node_CustomEvent_NewTarget;
	Parms.K2Node_Event_Key_1 = K2Node_Event_Key_1;
	Parms.K2Node_Event_Value_1 = K2Node_Event_Value_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Actor_2 = K2Node_CustomEvent_Actor_2;
	Parms.K2Node_CustomEvent_Stimulus = K2Node_CustomEvent_Stimulus;
	Parms.K2Node_Event_Key = K2Node_Event_Key;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.CallFunc_GetSenseClassForStimulus_ReturnValue = CallFunc_GetSenseClassForStimulus_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_Event_Leader = K2Node_Event_Leader;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.K2Node_CustomEvent_LootCrate = K2Node_CustomEvent_LootCrate;
	Parms.K2Node_Event_Radius = K2Node_Event_Radius;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Event_Key_2 = K2Node_Event_Key_2;
	Parms.K2Node_Event_Value_2 = K2Node_Event_Value_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsVal_Game_State = K2Node_DynamicCast_AsVal_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_BlackboardComp = K2Node_Event_BlackboardComp;
	Parms.K2Node_Event_BlackboardAsset = K2Node_Event_BlackboardAsset;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsVal_Game_State_Frontier = K2Node_DynamicCast_AsVal_Game_State_Frontier;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_ComponentBoundEvent_Actor = K2Node_ComponentBoundEvent_Actor;
	Parms.K2Node_ComponentBoundEvent_Stimulus = K2Node_ComponentBoundEvent_Stimulus;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_OldValue = K2Node_CustomEvent_OldValue;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Actor_1 = K2Node_CustomEvent_Actor_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.K2Node_DynamicCast_AsVal_Character = K2Node_DynamicCast_AsVal_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_DamageData = K2Node_CustomEvent_DamageData;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Ability_System_Component = K2Node_DynamicCast_AsVal_Ability_System_Component;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsCybridCalmTowardsTarget_ReturnValue = CallFunc_IsCybridCalmTowardsTarget_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;

	UObject::ProcessEvent(Func, &Parms);

}

}


