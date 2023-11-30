#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_SeasonRewardIcon.WBP_SeasonRewardIcon_C
// (None)

class UClass* UWBP_SeasonRewardIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_SeasonRewardIcon_C");

	return Clss;
}


// WBP_SeasonRewardIcon_C WBP_SeasonRewardIcon.Default__WBP_SeasonRewardIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_SeasonRewardIcon_C* UWBP_SeasonRewardIcon_C::GetDefaultObj()
{
	static class UWBP_SeasonRewardIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_SeasonRewardIcon_C*>(UWBP_SeasonRewardIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_SeasonRewardIcon.WBP_SeasonRewardIcon_C.SetRandomRewardDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   LocalTexture                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SeasonRewardIcon_C::SetRandomRewardDisplay(TSoftObjectPtr<class UTexture2D> LocalTexture, TSoftObjectPtr<class UTexture2D> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SeasonRewardIcon_C", "SetRandomRewardDisplay");

	Params::UWBP_SeasonRewardIcon_C_SetRandomRewardDisplay_Params Parms{};

	Parms.LocalTexture = LocalTexture;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SeasonRewardIcon.WBP_SeasonRewardIcon_C.UpdateData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Valhalla_ExperienceLevelRewardItemCachedReward                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_SeasonRewardIcon_C::UpdateData(const struct Valhalla_ExperienceLevelRewardItem& CachedReward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SeasonRewardIcon_C", "UpdateData");

	Params::UWBP_SeasonRewardIcon_C_UpdateData_Params Parms{};

	Parms.CachedReward = CachedReward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SeasonRewardIcon.WBP_SeasonRewardIcon_C.UpdateItemAsset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValItemAsset*               ItemAsset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct GameplayTags_GameplayTag>LocalTags                                                        (Edit, BlueprintVisible)
// TArray<struct GameplayTags_GameplayTag>CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// TArray<struct GameplayTags_GameplayTag>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct GameplayTags_GameplayTagContainerCallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)
// TArray<struct GameplayTags_GameplayTag>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// struct GameplayTags_GameplayTagContainerCallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1         (None)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SeasonRewardIcon_C::UpdateItemAsset(class UValItemAsset* ItemAsset, const TArray<struct GameplayTags_GameplayTag>& LocalTags, TArray<struct GameplayTags_GameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, TArray<struct GameplayTags_GameplayTag>& K2Node_MakeArray_Array, const struct GameplayTags_GameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, TArray<struct GameplayTags_GameplayTag>& K2Node_MakeArray_Array_1, const struct GameplayTags_GameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1, bool CallFunc_HasAnyTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SeasonRewardIcon_C", "UpdateItemAsset");

	Params::UWBP_SeasonRewardIcon_C_UpdateItemAsset_Params Parms{};

	Parms.ItemAsset = ItemAsset;
	Parms.LocalTags = LocalTags;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1 = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue_1;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SeasonRewardIcon.WBP_SeasonRewardIcon_C.OnLoaded_1C0F454B48525EC3BDA1BD8AFB68FCDE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_SeasonRewardIcon_C::OnLoaded_1C0F454B48525EC3BDA1BD8AFB68FCDE(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SeasonRewardIcon_C", "OnLoaded_1C0F454B48525EC3BDA1BD8AFB68FCDE");

	Params::UWBP_SeasonRewardIcon_C_OnLoaded_1C0F454B48525EC3BDA1BD8AFB68FCDE_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SeasonRewardIcon.WBP_SeasonRewardIcon_C.LoadItemAssetAsync
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>      Asset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_SeasonRewardIcon_C::LoadItemAssetAsync(TSoftObjectPtr<class UObject> Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SeasonRewardIcon_C", "LoadItemAssetAsync");

	Params::UWBP_SeasonRewardIcon_C_LoadItemAssetAsync_Params Parms{};

	Parms.Asset = Asset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_SeasonRewardIcon.WBP_SeasonRewardIcon_C.ExecuteUbergraph_WBP_SeasonRewardIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      K2Node_CustomEvent_Asset                                         (HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               K2Node_DynamicCast_AsVal_Item_Asset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SeasonRewardIcon_C::ExecuteUbergraph_WBP_SeasonRewardIcon(int32 EntryPoint, TSoftObjectPtr<class UObject> K2Node_CustomEvent_Asset, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UValItemAsset* K2Node_DynamicCast_AsVal_Item_Asset, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_SeasonRewardIcon_C", "ExecuteUbergraph_WBP_SeasonRewardIcon");

	Params::UWBP_SeasonRewardIcon_C_ExecuteUbergraph_WBP_SeasonRewardIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Asset = K2Node_CustomEvent_Asset;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsVal_Item_Asset = K2Node_DynamicCast_AsVal_Item_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


