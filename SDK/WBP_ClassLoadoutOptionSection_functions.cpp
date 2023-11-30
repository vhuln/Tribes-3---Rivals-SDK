#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C
// (None)

class UClass* UWBP_ClassLoadoutOptionSection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ClassLoadoutOptionSection_C");

	return Clss;
}


// WBP_ClassLoadoutOptionSection_C WBP_ClassLoadoutOptionSection.Default__WBP_ClassLoadoutOptionSection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ClassLoadoutOptionSection_C* UWBP_ClassLoadoutOptionSection_C::GetDefaultObj()
{
	static class UWBP_ClassLoadoutOptionSection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ClassLoadoutOptionSection_C*>(UWBP_ClassLoadoutOptionSection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.GetInventoryManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValInventoryManager*        InventoryManager                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutOptionSection_C::GetInventoryManager(class AValInventoryManager** InventoryManager, bool* Valid, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "GetInventoryManager");

	Params::UWBP_ClassLoadoutOptionSection_C_GetInventoryManager_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryManager != nullptr)
		*InventoryManager = Parms.InventoryManager;

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.CreateOptionWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_LoadoutEntry_C*         Output                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_LoadoutEntry_C*         OptionWidget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_LoadoutEntry_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGridPositionAt_Row                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGridPositionAt_Column                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutOptionSection_C::CreateOptionWidget(class UWBP_LoadoutEntry_C** Output, class UWBP_LoadoutEntry_C* OptionWidget, class UWBP_LoadoutEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetGridPositionAt_Row, int32 CallFunc_GetGridPositionAt_Column, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "CreateOptionWidget");

	Params::UWBP_ClassLoadoutOptionSection_C_CreateOptionWidget_Params Parms{};

	Parms.OptionWidget = OptionWidget;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetGridPositionAt_Row = CallFunc_GetGridPositionAt_Row;
	Parms.CallFunc_GetGridPositionAt_Column = CallFunc_GetGridPositionAt_Column;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_InventoryManager                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInventoryManager_Valid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutOptionSection_C::OnInitialized(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_InventoryManager, bool CallFunc_GetInventoryManager_Valid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "OnInitialized");

	Params::UWBP_ClassLoadoutOptionSection_C_OnInitialized_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_GetInventoryManager_InventoryManager = CallFunc_GetInventoryManager_InventoryManager;
	Parms.CallFunc_GetInventoryManager_Valid = CallFunc_GetInventoryManager_Valid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutOptionSection_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "PreConstruct");

	Params::UWBP_ClassLoadoutOptionSection_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.HandleOnOptionUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ClassLoadoutOptionSection_C::HandleOnOptionUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "HandleOnOptionUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.HandleOnOptionHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_LoadoutEntry_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutOptionSection_C::HandleOnOptionHovered(class UWBP_LoadoutEntry_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "HandleOnOptionHovered");

	Params::UWBP_ClassLoadoutOptionSection_C_HandleOnOptionHovered_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.OnInventoryManagerReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValInventoryManager*        InventoryManager                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutOptionSection_C::OnInventoryManagerReady(class AValInventoryManager* InventoryManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "OnInventoryManagerReady");

	Params::UWBP_ClassLoadoutOptionSection_C_OnInventoryManagerReady_Params Parms{};

	Parms.InventoryManager = InventoryManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.OnItemSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_LoadoutEntry_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               LocalSelectedItem                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetEquipSlotBySlotId_EquipSlot                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquipSlotBySlotId_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController_City*   K2Node_DynamicCast_AsVal_Player_Controller_City                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValPreviewManager*          CallFunc_GetPreviewManager_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_InventoryManager                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInventoryManager_Valid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EquipClassSlotItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutOptionSection_C::OnItemSelected(class UWBP_LoadoutEntry_C* Widget, class UValItemAsset* LocalSelectedItem, const struct GameplayTags_GameplayTag& CallFunc_GetEquipSlotBySlotId_EquipSlot, bool CallFunc_GetEquipSlotBySlotId_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValPlayerController_City* K2Node_DynamicCast_AsVal_Player_Controller_City, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class UValPreviewManager* CallFunc_GetPreviewManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AValInventoryManager* CallFunc_GetInventoryManager_InventoryManager, bool CallFunc_GetInventoryManager_Valid, bool CallFunc_EquipClassSlotItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "OnItemSelected");

	Params::UWBP_ClassLoadoutOptionSection_C_OnItemSelected_Params Parms{};

	Parms.Widget = Widget;
	Parms.LocalSelectedItem = LocalSelectedItem;
	Parms.CallFunc_GetEquipSlotBySlotId_EquipSlot = CallFunc_GetEquipSlotBySlotId_EquipSlot;
	Parms.CallFunc_GetEquipSlotBySlotId_ReturnValue = CallFunc_GetEquipSlotBySlotId_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Player_Controller_City = K2Node_DynamicCast_AsVal_Player_Controller_City;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPreviewManager_ReturnValue = CallFunc_GetPreviewManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetInventoryManager_InventoryManager = CallFunc_GetInventoryManager_InventoryManager;
	Parms.CallFunc_GetInventoryManager_Valid = CallFunc_GetInventoryManager_Valid;
	Parms.CallFunc_EquipClassSlotItem_ReturnValue = CallFunc_EquipClassSlotItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.GetOptionWidgetAt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_LoadoutEntry_C*         Output                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_LoadoutEntry_C*         CallFunc_CreateOptionWidget_Output                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_LoadoutEntry_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutOptionSection_C::GetOptionWidgetAt(int32 Index, class UWBP_LoadoutEntry_C** Output, class UWBP_LoadoutEntry_C* CallFunc_CreateOptionWidget_Output, class UWBP_LoadoutEntry_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "GetOptionWidgetAt");

	Params::UWBP_ClassLoadoutOptionSection_C_GetOptionWidgetAt_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_CreateOptionWidget_Output = CallFunc_CreateOptionWidget_Output;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.GetGridPositionAt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Row                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Column                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutOptionSection_C::GetGridPositionAt(int32 Index, int32* Row, int32* Column, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "GetGridPositionAt");

	Params::UWBP_ClassLoadoutOptionSection_C_GetGridPositionAt_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Row != nullptr)
		*Row = Parms.Row;

	if (Column != nullptr)
		*Column = Parms.Column;

}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.UpdateClassOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewLocalVar                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               LocalEquippedAsset                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_LoadoutEntry_C*         LocalOptionWidget                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               LocalItemAsset                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_LoadoutEntry_C*         CallFunc_GetOptionWidgetAt_Output                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_LoadoutEntry_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UValItemAsset*>       CallFunc_GetClassSlotOptions_OptionAssets                        (ReferenceParm)
// int32                              CallFunc_GetSlotIdByEquipSlot_SlotId                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSlotIdByEquipSlot_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_InventoryManager                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInventoryManager_Valid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               CallFunc_GetEquippedClassSlotItem_ItemAsset                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedClassSlotItem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutOptionSection_C::UpdateClassOptions(int32 NewLocalVar, class UValItemAsset* LocalEquippedAsset, class UWBP_LoadoutEntry_C* LocalOptionWidget, class UValItemAsset* LocalItemAsset, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWBP_LoadoutEntry_C* CallFunc_GetOptionWidgetAt_Output, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsGameplayTagValid_ReturnValue, class UWBP_LoadoutEntry_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TArray<class UValItemAsset*>& CallFunc_GetClassSlotOptions_OptionAssets, int32 CallFunc_GetSlotIdByEquipSlot_SlotId, bool CallFunc_GetSlotIdByEquipSlot_ReturnValue, class UValItemAsset* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Array_IsNotEmpty_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_InventoryManager, bool CallFunc_GetInventoryManager_Valid, bool CallFunc_IsGameplayTagValid_ReturnValue_1, class UValItemAsset* CallFunc_GetEquippedClassSlotItem_ItemAsset, bool CallFunc_GetEquippedClassSlotItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "UpdateClassOptions");

	Params::UWBP_ClassLoadoutOptionSection_C_UpdateClassOptions_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.LocalEquippedAsset = LocalEquippedAsset;
	Parms.LocalOptionWidget = LocalOptionWidget;
	Parms.LocalItemAsset = LocalItemAsset;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOptionWidgetAt_Output = CallFunc_GetOptionWidgetAt_Output;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetClassSlotOptions_OptionAssets = CallFunc_GetClassSlotOptions_OptionAssets;
	Parms.CallFunc_GetSlotIdByEquipSlot_SlotId = CallFunc_GetSlotIdByEquipSlot_SlotId;
	Parms.CallFunc_GetSlotIdByEquipSlot_ReturnValue = CallFunc_GetSlotIdByEquipSlot_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_GetInventoryManager_InventoryManager = CallFunc_GetInventoryManager_InventoryManager;
	Parms.CallFunc_GetInventoryManager_Valid = CallFunc_GetInventoryManager_Valid;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue_1 = CallFunc_IsGameplayTagValid_ReturnValue_1;
	Parms.CallFunc_GetEquippedClassSlotItem_ItemAsset = CallFunc_GetEquippedClassSlotItem_ItemAsset;
	Parms.CallFunc_GetEquippedClassSlotItem_ReturnValue = CallFunc_GetEquippedClassSlotItem_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.UpdatePlaceholders
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_LoadoutEntry_Placeholder_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGridPositionAt_Row                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGridPositionAt_Column                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutOptionSection_C::UpdatePlaceholders(int32 Temp_int_Variable, class UWBP_LoadoutEntry_Placeholder_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetGridPositionAt_Row, int32 CallFunc_GetGridPositionAt_Column, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "UpdatePlaceholders");

	Params::UWBP_ClassLoadoutOptionSection_C_UpdatePlaceholders_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetGridPositionAt_Row = CallFunc_GetGridPositionAt_Row;
	Parms.CallFunc_GetGridPositionAt_Column = CallFunc_GetGridPositionAt_Column;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.UpdateEquipSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    EquipSlot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UValGameInstance*            CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValDataTableManager*        CallFunc_GetDataTableManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetGameplayText_Text                                    (None)
// bool                               CallFunc_GetGameplayText_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValGameInstance*            CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutOptionSection_C::UpdateEquipSlot(const struct GameplayTags_GameplayTag& EquipSlot, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValDataTableManager* CallFunc_GetDataTableManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetGameplayText_Text, bool CallFunc_GetGameplayText_ReturnValue, class UValGameInstance* CallFunc_GetGameInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "UpdateEquipSlot");

	Params::UWBP_ClassLoadoutOptionSection_C_UpdateEquipSlot_Params Parms{};

	Parms.EquipSlot = EquipSlot;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetDataTableManager_ReturnValue = CallFunc_GetDataTableManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameplayText_Text = CallFunc_GetGameplayText_Text;
	Parms.CallFunc_GetGameplayText_ReturnValue = CallFunc_GetGameplayText_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.UpdateClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    ClassTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutOptionSection_C::UpdateClass(const struct GameplayTags_GameplayTag& ClassTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "UpdateClass");

	Params::UWBP_ClassLoadoutOptionSection_C_UpdateClass_Params Parms{};

	Parms.ClassTag = ClassTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.OnOptionUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ClassLoadoutOptionSection_C::OnOptionUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "OnOptionUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ClassLoadoutOptionSection.WBP_ClassLoadoutOptionSection_C.OnOptionHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_LoadoutEntry_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutOptionSection_C::OnOptionHovered__DelegateSignature(class UWBP_LoadoutEntry_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutOptionSection_C", "OnOptionHovered__DelegateSignature");

	Params::UWBP_ClassLoadoutOptionSection_C_OnOptionHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


