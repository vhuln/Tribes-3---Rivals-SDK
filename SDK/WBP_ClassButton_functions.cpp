#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ClassButton.WBP_ClassButton_C
// (None)

class UClass* UWBP_ClassButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ClassButton_C");

	return Clss;
}


// WBP_ClassButton_C WBP_ClassButton.Default__WBP_ClassButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ClassButton_C* UWBP_ClassButton_C::GetDefaultObj()
{
	static class UWBP_ClassButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ClassButton_C*>(UWBP_ClassButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ClassButton.WBP_ClassButton_C.UpdateSelectedClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    SelectedClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassButton_C::UpdateSelectedClass(const struct GameplayTags_GameplayTag& SelectedClass, bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "UpdateSelectedClass");

	Params::UWBP_ClassButton_C_UpdateSelectedClass_Params Parms{};

	Parms.SelectedClass = SelectedClass;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassButton.WBP_ClassButton_C.IsSpotAvailable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Available                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassButton_C::IsSpotAvailable(bool* Available, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "IsSpotAvailable");

	Params::UWBP_ClassButton_C_IsSpotAvailable_Params Parms{};

	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Available != nullptr)
		*Available = Parms.Available;

}


// Function WBP_ClassButton.WBP_ClassButton_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    ClassTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class AValInventoryManager*        CallFunc_GetInventoryManager_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValLoadoutConfig*           CallFunc_GetLoadoutConfig_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValLoadoutAsset*            CallFunc_GetLoadoutAssetByTypeAndClass_OutLoadoutAsset           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLoadoutAssetByTypeAndClass_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassButton_C::Initialize(const struct GameplayTags_GameplayTag& ClassTag, class AValInventoryManager* CallFunc_GetInventoryManager_ReturnValue, class UValLoadoutConfig* CallFunc_GetLoadoutConfig_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UValLoadoutAsset* CallFunc_GetLoadoutAssetByTypeAndClass_OutLoadoutAsset, bool CallFunc_GetLoadoutAssetByTypeAndClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "Initialize");

	Params::UWBP_ClassButton_C_Initialize_Params Parms{};

	Parms.ClassTag = ClassTag;
	Parms.CallFunc_GetInventoryManager_ReturnValue = CallFunc_GetInventoryManager_ReturnValue;
	Parms.CallFunc_GetLoadoutConfig_ReturnValue = CallFunc_GetLoadoutConfig_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLoadoutAssetByTypeAndClass_OutLoadoutAsset = CallFunc_GetLoadoutAssetByTypeAndClass_OutLoadoutAsset;
	Parms.CallFunc_GetLoadoutAssetByTypeAndClass_ReturnValue = CallFunc_GetLoadoutAssetByTypeAndClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassButton.WBP_ClassButton_C.NavigateConfirm
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERH_INPUT_STATE         CallFunc_GetCurrentInputState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_ClassButton_C::NavigateConfirm(enum class ERH_INPUT_STATE CallFunc_GetCurrentInputState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "NavigateConfirm");

	Params::UWBP_ClassButton_C_NavigateConfirm_Params Parms{};

	Parms.CallFunc_GetCurrentInputState_ReturnValue = CallFunc_GetCurrentInputState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ClassButton.WBP_ClassButton_C.UpdateIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassButton_C::UpdateIsSelected(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "UpdateIsSelected");

	Params::UWBP_ClassButton_C_UpdateIsSelected_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassButton.WBP_ClassButton_C.UpdateClassData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentCount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_ClassButton_C::UpdateClassData(int32 CurrentCount, int32 MaxCount, bool CallFunc_Less_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "UpdateClassData");

	Params::UWBP_ClassButton_C_UpdateClassData_Params Parms{};

	Parms.CurrentCount = CurrentCount;
	Parms.MaxCount = MaxCount;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassButton.WBP_ClassButton_C.UpdateClassIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    Tag                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassButton_C::UpdateClassIcon(struct GameplayTags_GameplayTag& Tag, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "UpdateClassIcon");

	Params::UWBP_ClassButton_C_UpdateClassIcon_Params Parms{};

	Parms.Tag = Tag;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassButton.WBP_ClassButton_C.UpdateName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ClassText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UWBP_ClassButton_C::UpdateName(class FText ClassText, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "UpdateName");

	Params::UWBP_ClassButton_C_UpdateName_Params Parms{};

	Parms.ClassText = ClassText;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassButton.WBP_ClassButton_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ClassButton_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ClassButton.WBP_ClassButton_C.GamepadHover
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ClassButton_C::GamepadHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "GamepadHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ClassButton.WBP_ClassButton_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ClassButton_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ClassButton.WBP_ClassButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "PreConstruct");

	Params::UWBP_ClassButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassButton.WBP_ClassButton_C.BndEvt__WBP_ClassButton_UI_Button_Menu_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ClassButton_C::BndEvt__WBP_ClassButton_UI_Button_Menu_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "BndEvt__WBP_ClassButton_UI_Button_Menu_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ClassButton.WBP_ClassButton_C.ExecuteUbergraph_WBP_ClassButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassButton_C::ExecuteUbergraph_WBP_ClassButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "ExecuteUbergraph_WBP_ClassButton");

	Params::UWBP_ClassButton_C_ExecuteUbergraph_WBP_ClassButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassButton.WBP_ClassButton_C.OnGamepadConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ClassButton_C*          Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassButton_C::OnGamepadConfirm__DelegateSignature(class UWBP_ClassButton_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "OnGamepadConfirm__DelegateSignature");

	Params::UWBP_ClassButton_C_OnGamepadConfirm__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassButton.WBP_ClassButton_C.OnItemUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ClassButton_C::OnItemUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "OnItemUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ClassButton.WBP_ClassButton_C.OnItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct GameplayTags_GameplayTag    EquipSlot                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct Valhalla_InventoryItem      InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ClassButton_C::OnItemHovered__DelegateSignature(const struct GameplayTags_GameplayTag& EquipSlot, const struct Valhalla_InventoryItem& InventoryItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "OnItemHovered__DelegateSignature");

	Params::UWBP_ClassButton_C_OnItemHovered__DelegateSignature_Params Parms{};

	Parms.EquipSlot = EquipSlot;
	Parms.InventoryItem = InventoryItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ClassButton.WBP_ClassButton_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ClassButton_C*          OptionWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ClassButton_C::OnItemClicked__DelegateSignature(class UWBP_ClassButton_C* OptionWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ClassButton_C", "OnItemClicked__DelegateSignature");

	Params::UWBP_ClassButton_C_OnItemClicked__DelegateSignature_Params Parms{};

	Parms.OptionWidget = OptionWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


