#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_City_ItemHeader.UI_City_ItemHeader_C
// (None)

class UClass* UUI_City_ItemHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_City_ItemHeader_C");

	return Clss;
}


// UI_City_ItemHeader_C UI_City_ItemHeader.Default__UI_City_ItemHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_City_ItemHeader_C* UUI_City_ItemHeader_C::GetDefaultObj()
{
	static class UUI_City_ItemHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_City_ItemHeader_C*>(UUI_City_ItemHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_City_ItemHeader.UI_City_ItemHeader_C.UpdateIsEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Equipped                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_City_ItemHeader_C::UpdateIsEquipped(bool Equipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_City_ItemHeader_C", "UpdateIsEquipped");

	Params::UUI_City_ItemHeader_C_UpdateIsEquipped_Params Parms{};

	Parms.Equipped = Equipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_City_ItemHeader.UI_City_ItemHeader_C.Check Dog Tag and Relation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDogTag                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFriendly                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_City_ItemHeader_C::Check_Dog_Tag_and_Relation(bool* IsDogTag, bool* IsFriendly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_City_ItemHeader_C", "Check Dog Tag and Relation");

	Params::UUI_City_ItemHeader_C_Check_Dog_Tag_and_Relation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDogTag != nullptr)
		*IsDogTag = Parms.IsDogTag;

	if (IsFriendly != nullptr)
		*IsFriendly = Parms.IsFriendly;

}


// Function UI_City_ItemHeader.UI_City_ItemHeader_C.Update Quantity Explicit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUI_City_ItemHeader_C::Update_Quantity_Explicit(int32 Quantity, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_City_ItemHeader_C", "Update Quantity Explicit");

	Params::UUI_City_ItemHeader_C_Update_Quantity_Explicit_Params Parms{};

	Parms.Quantity = Quantity;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_City_ItemHeader.UI_City_ItemHeader_C.SetPriceDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_City_ItemHeader_C::SetPriceDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_City_ItemHeader_C", "SetPriceDisplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_City_ItemHeader.UI_City_ItemHeader_C.GetBestGameplayText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        OutText                                                          (Parm, OutParm)
// class UValGameInstance*            CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValDataTableManager*        CallFunc_GetDataTableManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFirstGameplayTextByContainer_Text                    (None)
// bool                               CallFunc_GetFirstGameplayTextByContainer_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameInstance*            CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValDataTableManager*        CallFunc_GetDataTableManager_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameplayText_Text                                    (None)
// bool                               CallFunc_GetGameplayText_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_City_ItemHeader_C::GetBestGameplayText(class FText* OutText, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue, class FText CallFunc_GetFirstGameplayTextByContainer_Text, bool CallFunc_GetFirstGameplayTextByContainer_ReturnValue, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue_1, class FText CallFunc_GetGameplayText_Text, bool CallFunc_GetGameplayText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_City_ItemHeader_C", "GetBestGameplayText");

	Params::UUI_City_ItemHeader_C_GetBestGameplayText_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_GetDataTableManager_ReturnValue = CallFunc_GetDataTableManager_ReturnValue;
	Parms.CallFunc_GetFirstGameplayTextByContainer_Text = CallFunc_GetFirstGameplayTextByContainer_Text;
	Parms.CallFunc_GetFirstGameplayTextByContainer_ReturnValue = CallFunc_GetFirstGameplayTextByContainer_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_GetDataTableManager_ReturnValue_1 = CallFunc_GetDataTableManager_ReturnValue_1;
	Parms.CallFunc_GetGameplayText_Text = CallFunc_GetGameplayText_Text;
	Parms.CallFunc_GetGameplayText_ReturnValue = CallFunc_GetGameplayText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}


// Function UI_City_ItemHeader.UI_City_ItemHeader_C.Update Data from Equipment
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValItemAsset*               ItemAsset                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// enum class ERarity                 RarityOverride                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        NameOverride                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct Valhalla_InventoryItem      InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              UpgradeCount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AccountLevel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_Dog_Tag_and_Relation_isDogTag                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check_Dog_Tag_and_Relation_isFriendly                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UUI_City_ItemHeader_C::Update_Data_from_Equipment(class UValItemAsset*& ItemAsset, enum class ERarity RarityOverride, class FText NameOverride, const struct Valhalla_InventoryItem& InventoryItem, int32 UpgradeCount, int32 AccountLevel, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Check_Dog_Tag_and_Relation_isDogTag, bool CallFunc_Check_Dog_Tag_and_Relation_isFriendly, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_City_ItemHeader_C", "Update Data from Equipment");

	Params::UUI_City_ItemHeader_C_Update_Data_from_Equipment_Params Parms{};

	Parms.ItemAsset = ItemAsset;
	Parms.RarityOverride = RarityOverride;
	Parms.NameOverride = NameOverride;
	Parms.InventoryItem = InventoryItem;
	Parms.UpgradeCount = UpgradeCount;
	Parms.AccountLevel = AccountLevel;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Check_Dog_Tag_and_Relation_isDogTag = CallFunc_Check_Dog_Tag_and_Relation_isDogTag;
	Parms.CallFunc_Check_Dog_Tag_and_Relation_isFriendly = CallFunc_Check_Dog_Tag_and_Relation_isFriendly;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_City_ItemHeader.UI_City_ItemHeader_C.Update Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_City_ItemHeader_C::Update_Icon(TSoftObjectPtr<class UTexture2D> Icon, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_City_ItemHeader_C", "Update Icon");

	Params::UUI_City_ItemHeader_C_Update_Icon_Params Parms{};

	Parms.Icon = Icon;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


