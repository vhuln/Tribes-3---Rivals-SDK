#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Lobby_LoadoutCustomization.UI_Lobby_LoadoutCustomization_C
// (None)

class UClass* UUI_Lobby_LoadoutCustomization_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Lobby_LoadoutCustomization_C");

	return Clss;
}


// UI_Lobby_LoadoutCustomization_C UI_Lobby_LoadoutCustomization.Default__UI_Lobby_LoadoutCustomization_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Lobby_LoadoutCustomization_C* UUI_Lobby_LoadoutCustomization_C::GetDefaultObj()
{
	static class UUI_Lobby_LoadoutCustomization_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Lobby_LoadoutCustomization_C*>(UUI_Lobby_LoadoutCustomization_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Lobby_LoadoutCustomization.UI_Lobby_LoadoutCustomization_C.HandleBackPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RemoveViewRoute_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_LoadoutCustomization_C::HandleBackPressed(bool CallFunc_RemoveViewRoute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_LoadoutCustomization_C", "HandleBackPressed");

	Params::UUI_Lobby_LoadoutCustomization_C_HandleBackPressed_Params Parms{};

	Parms.CallFunc_RemoveViewRoute_ReturnValue = CallFunc_RemoveViewRoute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_LoadoutCustomization.UI_Lobby_LoadoutCustomization_C.Get Preview Manager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValPreviewManager*          PreviewManager                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController_City*   K2Node_DynamicCast_AsVal_Player_Controller_City                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValPreviewManager*          CallFunc_GetPreviewManager_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_LoadoutCustomization_C::Get_Preview_Manager(class UValPreviewManager** PreviewManager, bool* Valid, bool CallFunc_IsValid_ReturnValue, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, class AValPlayerController_City* K2Node_DynamicCast_AsVal_Player_Controller_City, bool K2Node_DynamicCast_bSuccess, class UValPreviewManager* CallFunc_GetPreviewManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_LoadoutCustomization_C", "Get Preview Manager");

	Params::UUI_Lobby_LoadoutCustomization_C_Get_Preview_Manager_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Player_Controller_City = K2Node_DynamicCast_AsVal_Player_Controller_City;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPreviewManager_ReturnValue = CallFunc_GetPreviewManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (PreviewManager != nullptr)
		*PreviewManager = Parms.PreviewManager;

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function UI_Lobby_LoadoutCustomization.UI_Lobby_LoadoutCustomization_C.UpdateArmoryPreview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValPreviewManager*          CallFunc_Get_Preview_Manager_PreviewManager                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Preview_Manager_Valid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_LoadoutCustomization_C::UpdateArmoryPreview(class UValPreviewManager* CallFunc_Get_Preview_Manager_PreviewManager, bool CallFunc_Get_Preview_Manager_Valid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_LoadoutCustomization_C", "UpdateArmoryPreview");

	Params::UUI_Lobby_LoadoutCustomization_C_UpdateArmoryPreview_Params Parms{};

	Parms.CallFunc_Get_Preview_Manager_PreviewManager = CallFunc_Get_Preview_Manager_PreviewManager;
	Parms.CallFunc_Get_Preview_Manager_Valid = CallFunc_Get_Preview_Manager_Valid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_LoadoutCustomization.UI_Lobby_LoadoutCustomization_C.UpdateCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        VendorCameraTag                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ArmoryCameraTag                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ACameraActor*>        CallFunc_GetAllActorsOfClassWithTag_OutActors                    (ReferenceParm)
// class ACameraActor*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_LoadoutCustomization_C::UpdateCamera(class FName VendorCameraTag, class FName ArmoryCameraTag, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class ACameraActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_LoadoutCustomization_C", "UpdateCamera");

	Params::UUI_Lobby_LoadoutCustomization_C_UpdateCamera_Params Parms{};

	Parms.VendorCameraTag = VendorCameraTag;
	Parms.ArmoryCameraTag = ArmoryCameraTag;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClassWithTag_OutActors = CallFunc_GetAllActorsOfClassWithTag_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_LoadoutCustomization.UI_Lobby_LoadoutCustomization_C.OnClassOptionSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ClassButton_C*          OptionWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValPreviewManager*          CallFunc_Get_Preview_Manager_PreviewManager                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Preview_Manager_Valid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValLoadoutConfig*           CallFunc_GetLoadoutConfig_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValLoadoutAsset*            CallFunc_GetLoadoutAssetByTypeAndClass_OutLoadoutAsset           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLoadoutAssetByTypeAndClass_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSlotIdByEquipSlot_SlotId                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSlotIdByEquipSlot_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValItemAsset*               CallFunc_GetEquippedClassSlotItem_ItemAsset                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEquippedClassSlotItem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_LoadoutCustomization_C::OnClassOptionSelected(class UWBP_ClassButton_C* OptionWidget, class UValPreviewManager* CallFunc_Get_Preview_Manager_PreviewManager, bool CallFunc_Get_Preview_Manager_Valid, bool CallFunc_IsValid_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class UValLoadoutConfig* CallFunc_GetLoadoutConfig_ReturnValue, class UValLoadoutAsset* CallFunc_GetLoadoutAssetByTypeAndClass_OutLoadoutAsset, bool CallFunc_GetLoadoutAssetByTypeAndClass_ReturnValue, int32 CallFunc_GetSlotIdByEquipSlot_SlotId, bool CallFunc_GetSlotIdByEquipSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValItemAsset* CallFunc_GetEquippedClassSlotItem_ItemAsset, bool CallFunc_GetEquippedClassSlotItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_LoadoutCustomization_C", "OnClassOptionSelected");

	Params::UUI_Lobby_LoadoutCustomization_C_OnClassOptionSelected_Params Parms{};

	Parms.OptionWidget = OptionWidget;
	Parms.CallFunc_Get_Preview_Manager_PreviewManager = CallFunc_Get_Preview_Manager_PreviewManager;
	Parms.CallFunc_Get_Preview_Manager_Valid = CallFunc_Get_Preview_Manager_Valid;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_GetLoadoutConfig_ReturnValue = CallFunc_GetLoadoutConfig_ReturnValue;
	Parms.CallFunc_GetLoadoutAssetByTypeAndClass_OutLoadoutAsset = CallFunc_GetLoadoutAssetByTypeAndClass_OutLoadoutAsset;
	Parms.CallFunc_GetLoadoutAssetByTypeAndClass_ReturnValue = CallFunc_GetLoadoutAssetByTypeAndClass_ReturnValue;
	Parms.CallFunc_GetSlotIdByEquipSlot_SlotId = CallFunc_GetSlotIdByEquipSlot_SlotId;
	Parms.CallFunc_GetSlotIdByEquipSlot_ReturnValue = CallFunc_GetSlotIdByEquipSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetEquippedClassSlotItem_ItemAsset = CallFunc_GetEquippedClassSlotItem_ItemAsset;
	Parms.CallFunc_GetEquippedClassSlotItem_ReturnValue = CallFunc_GetEquippedClassSlotItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_LoadoutCustomization.UI_Lobby_LoadoutCustomization_C.CreateClassButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    EquippedClass                                                    (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_ClassButton_C*>  CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ClassButton_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ClassButton_C*          CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_Margin            K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ClassButton_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct GameplayTags_GameplayTag>CallFunc_GetCharacterClasses_CharacterClasses                    (ReferenceParm)
// struct GameplayTags_GameplayTag    CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetCharacterClass_ReturnValue                           (NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_LoadoutCustomization_C::CreateClassButtons(const struct GameplayTags_GameplayTag& EquippedClass, TArray<class UWBP_ClassButton_C*>& CallFunc_Map_Values_Values, int32 Temp_int_Array_Index_Variable, class UWBP_ClassButton_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWBP_ClassButton_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct SlateCore_Margin& K2Node_MakeStruct_Margin, int32 Temp_int_Loop_Counter_Variable, class UWBP_ClassButton_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct GameplayTags_GameplayTag>& CallFunc_GetCharacterClasses_CharacterClasses, const struct GameplayTags_GameplayTag& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct GameplayTags_GameplayTag& CallFunc_GetCharacterClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_LoadoutCustomization_C", "CreateClassButtons");

	Params::UUI_Lobby_LoadoutCustomization_C_CreateClassButtons_Params Parms{};

	Parms.EquippedClass = EquippedClass;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCharacterClasses_CharacterClasses = CallFunc_GetCharacterClasses_CharacterClasses;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCharacterClass_ReturnValue = CallFunc_GetCharacterClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_LoadoutCustomization.UI_Lobby_LoadoutCustomization_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_LoadoutCustomization_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_LoadoutCustomization_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_LoadoutCustomization.UI_Lobby_LoadoutCustomization_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_LoadoutCustomization_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_LoadoutCustomization_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_LoadoutCustomization.UI_Lobby_LoadoutCustomization_C.OnHide
// (Event, Public, BlueprintEvent)
// Parameters:

void UUI_Lobby_LoadoutCustomization_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_LoadoutCustomization_C", "OnHide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_LoadoutCustomization.UI_Lobby_LoadoutCustomization_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Lobby_LoadoutCustomization_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_LoadoutCustomization_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Lobby_LoadoutCustomization.UI_Lobby_LoadoutCustomization_C.OnClassSelectionConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_LoadoutCustomization_C::OnClassSelectionConfirmed(const struct GameplayTags_GameplayTag& Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_LoadoutCustomization_C", "OnClassSelectionConfirmed");

	Params::UUI_Lobby_LoadoutCustomization_C_OnClassSelectionConfirmed_Params Parms{};

	Parms.Class = Class;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Lobby_LoadoutCustomization.UI_Lobby_LoadoutCustomization_C.ExecuteUbergraph_UI_Lobby_LoadoutCustomization
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// struct GameplayTags_GameplayTag    K2Node_CustomEvent_Class                                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Lobby_LoadoutCustomization_C::ExecuteUbergraph_UI_Lobby_LoadoutCustomization(int32 EntryPoint, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class FName>& K2Node_MakeArray_Array, const struct GameplayTags_GameplayTag& K2Node_CustomEvent_Class, bool CallFunc_IsGameplayTagValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Lobby_LoadoutCustomization_C", "ExecuteUbergraph_UI_Lobby_LoadoutCustomization");

	Params::UUI_Lobby_LoadoutCustomization_C_ExecuteUbergraph_UI_Lobby_LoadoutCustomization_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CustomEvent_Class = K2Node_CustomEvent_Class;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetInventoryManager_ReturnValue_1 = CallFunc_GetInventoryManager_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


