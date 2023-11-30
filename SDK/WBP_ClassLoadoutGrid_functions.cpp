#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C
// (None)

class UClass* UWBP_ClassLoadoutGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ClassLoadoutGrid_C");

	return Clss;
}


// WBP_ClassLoadoutGrid_C WBP_ClassLoadoutGrid.Default__WBP_ClassLoadoutGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ClassLoadoutGrid_C* UWBP_ClassLoadoutGrid_C::GetDefaultObj()
{
	static class UWBP_ClassLoadoutGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ClassLoadoutGrid_C*>(UWBP_ClassLoadoutGrid_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.CacheSections
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ClassLoadoutOptionSection_C*K2Node_DynamicCast_AsWBP_Class_Loadout_Option_Section            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutGrid_C::CacheSections(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ClassLoadoutOptionSection_C* K2Node_DynamicCast_AsWBP_Class_Loadout_Option_Section, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "CacheSections");

	Params::UWBP_ClassLoadoutGrid_C_CacheSections_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Class_Loadout_Option_Section = K2Node_DynamicCast_AsWBP_Class_Loadout_Option_Section;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ClassLoadoutGrid_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.UpdateSelectionMade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CachedInitialSelectionMade                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutGrid_C::UpdateSelectionMade(bool CachedInitialSelectionMade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "UpdateSelectionMade");

	Params::UWBP_ClassLoadoutGrid_C_UpdateSelectionMade_Params Parms{};

	Parms.CachedInitialSelectionMade = CachedInitialSelectionMade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.UpdateEquipButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutGrid_C::UpdateEquipButtonEnabled(bool bEnabled, int32 CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "UpdateEquipButtonEnabled");

	Params::UWBP_ClassLoadoutGrid_C_UpdateEquipButtonEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.GetSelectedClass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerState_Frontier*    K2Node_DynamicCast_AsVal_Player_State_Frontier                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetQueuedLoadoutTag_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetCharacterClass_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)

struct GameplayTags_GameplayTag UWBP_ClassLoadoutGrid_C::GetSelectedClass(bool* Found, bool Temp_bool_Variable, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValPlayerState_Frontier* K2Node_DynamicCast_AsVal_Player_State_Frontier, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct GameplayTags_GameplayTag& CallFunc_GetQueuedLoadoutTag_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct GameplayTags_GameplayTag& CallFunc_GetCharacterClass_ReturnValue, const struct GameplayTags_GameplayTag& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "GetSelectedClass");

	Params::UWBP_ClassLoadoutGrid_C_GetSelectedClass_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Player_State_Frontier = K2Node_DynamicCast_AsVal_Player_State_Frontier;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetQueuedLoadoutTag_ReturnValue = CallFunc_GetQueuedLoadoutTag_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCharacterClass_ReturnValue = CallFunc_GetCharacterClass_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	return Parms.ReturnValue;

}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.UpdateAvailabilityForSelectedClass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_ClassCountData     CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_ClassLoadoutGrid_C::UpdateAvailabilityForSelectedClass(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct Valhalla_ClassCountData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "UpdateAvailabilityForSelectedClass");

	Params::UWBP_ClassLoadoutGrid_C_UpdateAvailabilityForSelectedClass_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.UpdateClassCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Valhalla_ClassCountData>ClassCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ClassLoadoutGrid_C::UpdateClassCount(TArray<struct Valhalla_ClassCountData>& ClassCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "UpdateClassCount");

	Params::UWBP_ClassLoadoutGrid_C_UpdateClassCount_Params Parms{};

	Parms.ClassCount = ClassCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.GetInventoryManager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValInventoryManager*        InventoryManager                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValPlayerController*        CallFunc_GetPlayer_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutGrid_C::GetInventoryManager(class AValInventoryManager** InventoryManager, bool* Valid, class AValPlayerController* CallFunc_GetPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "GetInventoryManager");

	Params::UWBP_ClassLoadoutGrid_C_GetInventoryManager_Params Parms{};

	Parms.CallFunc_GetPlayer_ReturnValue = CallFunc_GetPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InventoryManager != nullptr)
		*InventoryManager = Parms.InventoryManager;

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.UpdateButtonState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LocalSelectedClass                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct GameplayTags_GameplayTag    CallFunc_GetSelectedClass_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSelectedClass_Found                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateAvailabilityForSelectedClass_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutGrid_C::UpdateButtonState(bool LocalSelectedClass, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_2, const struct GameplayTags_GameplayTag& CallFunc_GetSelectedClass_ReturnValue, bool CallFunc_GetSelectedClass_Found, bool CallFunc_UpdateAvailabilityForSelectedClass_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_3, bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "UpdateButtonState");

	Params::UWBP_ClassLoadoutGrid_C_UpdateButtonState_Params Parms{};

	Parms.LocalSelectedClass = LocalSelectedClass;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_2 = CallFunc_SelectInt_ReturnValue_2;
	Parms.CallFunc_GetSelectedClass_ReturnValue = CallFunc_GetSelectedClass_ReturnValue;
	Parms.CallFunc_GetSelectedClass_Found = CallFunc_GetSelectedClass_Found;
	Parms.CallFunc_UpdateAvailabilityForSelectedClass_ReturnValue = CallFunc_UpdateAvailabilityForSelectedClass_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_3 = CallFunc_SelectInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.HandleOnOptionUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ClassLoadoutGrid_C::HandleOnOptionUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "HandleOnOptionUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.HandleOnOptionHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_LoadoutEntry_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutGrid_C::HandleOnOptionHovered(class UWBP_LoadoutEntry_C* Widget, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "HandleOnOptionHovered");

	Params::UWBP_ClassLoadoutGrid_C_HandleOnOptionHovered_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.BindSections
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_ClassLoadoutOptionSection_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutGrid_C::BindSections(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_ClassLoadoutOptionSection_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "BindSections");

	Params::UWBP_ClassLoadoutGrid_C_BindSections_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.UpdateClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ClassLoadoutOptionSection_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutGrid_C::UpdateClass(const struct GameplayTags_GameplayTag& Class, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_ClassLoadoutOptionSection_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "UpdateClass");

	Params::UWBP_ClassLoadoutGrid_C_UpdateClass_Params Parms{};

	Parms.Class = Class;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.BndEvt__WBP_ClassLoadoutGrid_EquipButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ClassLoadoutGrid_C::BndEvt__WBP_ClassLoadoutGrid_EquipButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "BndEvt__WBP_ClassLoadoutGrid_EquipButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.ExecuteUbergraph_WBP_ClassLoadoutGrid
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutGrid_C::ExecuteUbergraph_WBP_ClassLoadoutGrid(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "ExecuteUbergraph_WBP_ClassLoadoutGrid");

	Params::UWBP_ClassLoadoutGrid_C_ExecuteUbergraph_WBP_ClassLoadoutGrid_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassLoadoutGrid.WBP_ClassLoadoutGrid_C.OnClassSelectionConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Class                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassLoadoutGrid_C::OnClassSelectionConfirmed__DelegateSignature(const struct GameplayTags_GameplayTag& Class)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassLoadoutGrid_C", "OnClassSelectionConfirmed__DelegateSignature");

	Params::UWBP_ClassLoadoutGrid_C_OnClassSelectionConfirmed__DelegateSignature_Params Parms{};

	Parms.Class = Class;

	UObject::ProcessEvent(Func, &Parms);

}

}


