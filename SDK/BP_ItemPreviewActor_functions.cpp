#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemPreviewActor.BP_ItemPreviewActor_C
// (Actor)

class UClass* ABP_ItemPreviewActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemPreviewActor_C");

	return Clss;
}


// BP_ItemPreviewActor_C BP_ItemPreviewActor.Default__BP_ItemPreviewActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemPreviewActor_C* ABP_ItemPreviewActor_C::GetDefaultObj()
{
	static class ABP_ItemPreviewActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemPreviewActor_C*>(ABP_ItemPreviewActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheAppearanceAudioVisual
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValDeviceAudioVisual*       CallFunc_GetAppearanceAudioVisual_AudioVisual                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::CacheAppearanceAudioVisual(class UValDeviceAudioVisual* CallFunc_GetAppearanceAudioVisual_AudioVisual)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "CacheAppearanceAudioVisual");

	Params::ABP_ItemPreviewActor_C_CacheAppearanceAudioVisual_Params Parms{};

	Parms.CallFunc_GetAppearanceAudioVisual_AudioVisual = CallFunc_GetAppearanceAudioVisual_AudioVisual;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheAppearanceAsset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValEquipmentAsset*          CallFunc_GetAppearanceAsset_Asset                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::CacheAppearanceAsset(class UValEquipmentAsset* CallFunc_GetAppearanceAsset_Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "CacheAppearanceAsset");

	Params::ABP_ItemPreviewActor_C_CacheAppearanceAsset_Params Parms{};

	Parms.CallFunc_GetAppearanceAsset_Asset = CallFunc_GetAppearanceAsset_Asset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheAppearanceTag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    CallFunc_GetAppearanceTag_Tag                                    (NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::CacheAppearanceTag(const struct GameplayTags_GameplayTag& CallFunc_GetAppearanceTag_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "CacheAppearanceTag");

	Params::ABP_ItemPreviewActor_C_CacheAppearanceTag_Params Parms{};

	Parms.CallFunc_GetAppearanceTag_Tag = CallFunc_GetAppearanceTag_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheInventoryItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_InventoryItem      InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Changed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAllTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_GuidGuid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::CacheInventoryItem(const struct Valhalla_InventoryItem& InventoryItem, bool* Changed, bool CallFunc_HasAllTags_ReturnValue, bool CallFunc_NotEqual_GuidGuid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "CacheInventoryItem");

	Params::ABP_ItemPreviewActor_C_CacheInventoryItem_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.CallFunc_HasAllTags_ReturnValue = CallFunc_HasAllTags_ReturnValue;
	Parms.CallFunc_NotEqual_GuidGuid_ReturnValue = CallFunc_NotEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Changed != nullptr)
		*Changed = Parms.Changed;

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheAssetScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Changed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAssetScale_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::CacheAssetScale(bool* Changed, double CallFunc_GetAssetScale_Value, bool CallFunc_NotEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "CacheAssetScale");

	Params::ABP_ItemPreviewActor_C_CacheAssetScale_Params Parms{};

	Parms.CallFunc_GetAssetScale_Value = CallFunc_GetAssetScale_Value;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Changed != nullptr)
		*Changed = Parms.Changed;

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheAssetAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Changed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               CallFunc_GetAssetAnim_Value                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::CacheAssetAnim(bool* Changed, class UAnimSequence* CallFunc_GetAssetAnim_Value, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "CacheAssetAnim");

	Params::ABP_ItemPreviewActor_C_CacheAssetAnim_Params Parms{};

	Parms.CallFunc_GetAssetAnim_Value = CallFunc_GetAssetAnim_Value;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Changed != nullptr)
		*Changed = Parms.Changed;

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Changed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_Material                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::CacheMaterial(bool* Changed, class UMaterialInterface* CallFunc_GetMaterial_Material, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "CacheMaterial");

	Params::ABP_ItemPreviewActor_C_CacheMaterial_Params Parms{};

	Parms.CallFunc_GetMaterial_Material = CallFunc_GetMaterial_Material;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Changed != nullptr)
		*Changed = Parms.Changed;

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.CacheData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          CallFunc_GetMaterial_Material                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValDeviceAudioVisual*       CallFunc_GetAppearanceAudioVisual_AudioVisual                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValEquipmentAsset*          CallFunc_GetAppearanceAsset_Asset                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetAppearanceTag_Tag                                    (NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::CacheData(class UMaterialInterface* CallFunc_GetMaterial_Material, class UValDeviceAudioVisual* CallFunc_GetAppearanceAudioVisual_AudioVisual, class UValEquipmentAsset* CallFunc_GetAppearanceAsset_Asset, const struct GameplayTags_GameplayTag& CallFunc_GetAppearanceTag_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "CacheData");

	Params::ABP_ItemPreviewActor_C_CacheData_Params Parms{};

	Parms.CallFunc_GetMaterial_Material = CallFunc_GetMaterial_Material;
	Parms.CallFunc_GetAppearanceAudioVisual_AudioVisual = CallFunc_GetAppearanceAudioVisual_AudioVisual;
	Parms.CallFunc_GetAppearanceAsset_Asset = CallFunc_GetAppearanceAsset_Asset;
	Parms.CallFunc_GetAppearanceTag_Tag = CallFunc_GetAppearanceTag_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateDetailData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    EquipSlot                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_InventoryItem      Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ItemPreviewActor_C::UpdateDetailData(struct GameplayTags_GameplayTag& EquipSlot, struct Valhalla_InventoryItem& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "UpdateDetailData");

	Params::ABP_ItemPreviewActor_C_UpdateDetailData_Params Parms{};

	Parms.EquipSlot = EquipSlot;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.GetAppearanceAudioVisual
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValDeviceAudioVisual*       AudioVisual                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsVal_Device                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::GetAppearanceAudioVisual(class UValDeviceAudioVisual** AudioVisual, bool CallFunc_IsValid_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsVal_Device, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "GetAppearanceAudioVisual");

	Params::ABP_ItemPreviewActor_C_GetAppearanceAudioVisual_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsVal_Device = K2Node_ClassDynamicCast_AsVal_Device;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AudioVisual != nullptr)
		*AudioVisual = Parms.AudioVisual;

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.GetAppearanceAsset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValEquipmentAsset*          Asset                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValGameState*               CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValGameState_Lobby*         K2Node_DynamicCast_AsVal_Game_State_Lobby                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct Valhalla_WeaponCosmeticConfig>CallFunc_GetWeaponCosmeticConfigs_WeaponCosmeticConfigs          (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_WeaponCosmeticConfigCallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               K2Node_DynamicCast_AsVal_Item_Asset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::GetAppearanceAsset(class UValEquipmentAsset** Asset, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AValGameState* CallFunc_GetGameState_ReturnValue, class AValGameState_Lobby* K2Node_DynamicCast_AsVal_Game_State_Lobby, bool K2Node_DynamicCast_bSuccess, TArray<struct Valhalla_WeaponCosmeticConfig>& CallFunc_GetWeaponCosmeticConfigs_WeaponCosmeticConfigs, int32 CallFunc_Array_Length_ReturnValue, const struct Valhalla_WeaponCosmeticConfig& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UValItemAsset* K2Node_DynamicCast_AsVal_Item_Asset, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "GetAppearanceAsset");

	Params::ABP_ItemPreviewActor_C_GetAppearanceAsset_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Game_State_Lobby = K2Node_DynamicCast_AsVal_Game_State_Lobby;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWeaponCosmeticConfigs_WeaponCosmeticConfigs = CallFunc_GetWeaponCosmeticConfigs_WeaponCosmeticConfigs;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Item_Asset = K2Node_DynamicCast_AsVal_Item_Asset;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Asset != nullptr)
		*Asset = Parms.Asset;

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.GetAppearanceTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct GameplayTags_GameplayTag>CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// class UValItemAsset*               CallFunc_GetItemAssetById_ItemAsset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemAssetById_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::GetAppearanceTag(struct GameplayTags_GameplayTag* Tag, bool CallFunc_IsGameplayTagValid_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, TArray<struct GameplayTags_GameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "GetAppearanceTag");

	Params::ABP_ItemPreviewActor_C_GetAppearanceTag_Params Parms{};

	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_GetItemAssetById_ItemAsset = CallFunc_GetItemAssetById_ItemAsset;
	Parms.CallFunc_GetItemAssetById_ReturnValue = CallFunc_GetItemAssetById_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue_1 = CallFunc_GetInventoryManager_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Tag != nullptr)
		*Tag = std::move(Parms.Tag);

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.GetAssetAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValEquipmentAsset*          Asset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Value                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               K2Node_DynamicCast_AsAnim_Sequence                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::GetAssetAnim(class UValEquipmentAsset* Asset, class UAnimSequence** Value, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UAnimSequence* K2Node_DynamicCast_AsAnim_Sequence, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "GetAssetAnim");

	Params::ABP_ItemPreviewActor_C_GetAssetAnim_Params Parms{};

	Parms.Asset = Asset;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsAnim_Sequence = K2Node_DynamicCast_AsAnim_Sequence;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.GetAssetScale
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValEquipmentAsset*          Asset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::GetAssetScale(class UValEquipmentAsset* Asset, double* Value, bool CallFunc_IsValid_ReturnValue, double K2Node_FunctionResult_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "GetAssetScale");

	Params::ABP_ItemPreviewActor_C_GetAssetScale_Params Parms{};

	Parms.Asset = Asset;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_FunctionResult_Value_ImplicitCast = K2Node_FunctionResult_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.GetMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Material                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               CallFunc_GetItemAssetById_ItemAsset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemAssetById_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               CallFunc_GetItemAssetById_ItemAsset_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemAssetById_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::GetMaterial(class UMaterialInterface** Material, bool CallFunc_Array_IsValidIndex_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset, bool CallFunc_GetItemAssetById_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_1, class UValItemAsset* CallFunc_GetItemAssetById_ItemAsset_1, bool CallFunc_GetItemAssetById_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "GetMaterial");

	Params::ABP_ItemPreviewActor_C_GetMaterial_Params Parms{};

	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_GetItemAssetById_ItemAsset = CallFunc_GetItemAssetById_ItemAsset;
	Parms.CallFunc_GetItemAssetById_ReturnValue = CallFunc_GetItemAssetById_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue_1 = CallFunc_GetInventoryManager_ReturnValue_1;
	Parms.CallFunc_GetItemAssetById_ItemAsset_1 = CallFunc_GetItemAssetById_ItemAsset_1;
	Parms.CallFunc_GetItemAssetById_ReturnValue_1 = CallFunc_GetItemAssetById_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue_2 = CallFunc_GetInventoryManager_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Material != nullptr)
		*Material = Parms.Material;

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_InventoryItem      Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AValVendorManager*           LocalVendorManager                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UValDeviceAudioVisual*       LocalAudioVisual                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          LocalMaterial                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CacheInventoryItem_Changed                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::UpdateData(struct Valhalla_InventoryItem& Item, class AValVendorManager* LocalVendorManager, class UValDeviceAudioVisual* LocalAudioVisual, class UMaterialInterface* LocalMaterial, bool CallFunc_CacheInventoryItem_Changed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "UpdateData");

	Params::ABP_ItemPreviewActor_C_UpdateData_Params Parms{};

	Parms.Item = Item;
	Parms.LocalVendorManager = LocalVendorManager;
	Parms.LocalAudioVisual = LocalAudioVisual;
	Parms.LocalMaterial = LocalMaterial;
	Parms.CallFunc_CacheInventoryItem_Changed = CallFunc_CacheInventoryItem_Changed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateAssetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ItemPreviewActor_C::UpdateAssetScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "UpdateAssetScale");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateAssetAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequence*               CallFunc_GetAssetAnim_Value                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::UpdateAssetAnim(class UAnimSequence* CallFunc_GetAssetAnim_Value, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "UpdateAssetAnim");

	Params::ABP_ItemPreviewActor_C_UpdateAssetAnim_Params Parms{};

	Parms.CallFunc_GetAssetAnim_Value = CallFunc_GetAssetAnim_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LocalParameter                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>LocalOverrides                                                   (Edit, BlueprintVisible)
// class UMaterialInstanceDynamic*    LocalMID                                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              LocalIndex                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetMaterialOverrideParams1P_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterialOverride1P_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::UpdateMaterial(class FName LocalParameter, const TArray<class UMaterialInstanceDynamic*>& LocalOverrides, class UMaterialInstanceDynamic* LocalMID, int32 LocalIndex, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UTexture2D* CallFunc_GetMaterialOverrideParams1P_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterialOverride1P_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "UpdateMaterial");

	Params::ABP_ItemPreviewActor_C_UpdateMaterial_Params Parms{};

	Parms.LocalParameter = LocalParameter;
	Parms.LocalOverrides = LocalOverrides;
	Parms.LocalMID = LocalMID;
	Parms.LocalIndex = LocalIndex;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMaterialOverrideParams1P_ReturnValue = CallFunc_GetMaterialOverrideParams1P_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetMaterialOverride1P_ReturnValue = CallFunc_GetMaterialOverride1P_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Rotator         Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct Engine_HitResult            CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ItemPreviewActor_C::UpdateRotation(const struct CoreUObject_Rotator& Rotation, const struct Engine_HitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "UpdateRotation");

	Params::ABP_ItemPreviewActor_C_UpdateRotation_Params Parms{};

	Parms.Rotation = Rotation;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ItemPreviewActor_C::UpdateDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "UpdateDisplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequence*               CallFunc_GetAssetAnim_Value                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAssetScale_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_Vector          CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetABP3P_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetMesh3P_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::UpdateMesh(class UAnimSequence* CallFunc_GetAssetAnim_Value, double CallFunc_GetAssetScale_Value, bool CallFunc_IsValid_ReturnValue, const struct CoreUObject_Vector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UClass* CallFunc_GetABP3P_ReturnValue, class USkeletalMesh* CallFunc_GetMesh3P_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "UpdateMesh");

	Params::ABP_ItemPreviewActor_C_UpdateMesh_Params Parms{};

	Parms.CallFunc_GetAssetAnim_Value = CallFunc_GetAssetAnim_Value;
	Parms.CallFunc_GetAssetScale_Value = CallFunc_GetAssetScale_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetABP3P_ReturnValue = CallFunc_GetABP3P_ReturnValue;
	Parms.CallFunc_GetMesh3P_ReturnValue = CallFunc_GetMesh3P_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.UpdateItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*               Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimSequence*               Anim                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValAbilityAudioVisual*      AudioVisual                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        LocalParameter                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInstanceDynamic*>LocalOverrides                                                   (Edit, BlueprintVisible)
// class UMaterialInstanceDynamic*    LocalMID                                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              LocalIndex                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::UpdateItem(class USkeletalMesh* Mesh, class UAnimSequence* Anim, double Scale, class UValAbilityAudioVisual* AudioVisual, class FName LocalParameter, const TArray<class UMaterialInstanceDynamic*>& LocalOverrides, class UMaterialInstanceDynamic* LocalMID, int32 LocalIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "UpdateItem");

	Params::ABP_ItemPreviewActor_C_UpdateItem_Params Parms{};

	Parms.Mesh = Mesh;
	Parms.Anim = Anim;
	Parms.Scale = Scale;
	Parms.AudioVisual = AudioVisual;
	Parms.LocalParameter = LocalParameter;
	Parms.LocalOverrides = LocalOverrides;
	Parms.LocalMID = LocalMID;
	Parms.LocalIndex = LocalIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ItemPreviewActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ItemPreviewActor.BP_ItemPreviewActor_C.ExecuteUbergraph_BP_ItemPreviewActor
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ItemPreviewActor_C::ExecuteUbergraph_BP_ItemPreviewActor(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemPreviewActor_C", "ExecuteUbergraph_BP_ItemPreviewActor");

	Params::ABP_ItemPreviewActor_C_ExecuteUbergraph_BP_ItemPreviewActor_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


