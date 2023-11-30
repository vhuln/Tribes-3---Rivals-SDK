#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Shared_ActionIcon.UI_Shared_ActionIcon_C
// (None)

class UClass* UUI_Shared_ActionIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Shared_ActionIcon_C");

	return Clss;
}


// UI_Shared_ActionIcon_C UI_Shared_ActionIcon.Default__UI_Shared_ActionIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Shared_ActionIcon_C* UUI_Shared_ActionIcon_C::GetDefaultObj()
{
	static class UUI_Shared_ActionIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Shared_ActionIcon_C*>(UUI_Shared_ActionIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Shared_ActionIcon.UI_Shared_ActionIcon_C.GetRHInputKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECommonInputType        InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               InputKey                                                         (Parm, OutParm, HasGetValueTypeHash)
// class ARHHUDCommon*                LocalHud                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputType              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputType              Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputType              Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputType              Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputType              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARHHUDCommon*                CallFunc_GetHUDCommon_HUD_Common                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class URHInputManager*             CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValInputManager*            K2Node_DynamicCast_AsVal_Input_Manager                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct InputCore_Key>       CallFunc_GetRHInputKeys_OutKeys                                  (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_ActionIcon_C::GetRHInputKey(enum class ECommonInputType InputType, struct InputCore_Key* InputKey, class ARHHUDCommon* LocalHud, enum class ECommonInputType Temp_byte_Variable, enum class EInputType Temp_byte_Variable_1, enum class EInputType Temp_byte_Variable_2, enum class EInputType Temp_byte_Variable_3, enum class EInputType Temp_byte_Variable_4, bool CallFunc_IsValid_ReturnValue, enum class EInputType K2Node_Select_Default, class ARHHUDCommon* CallFunc_GetHUDCommon_HUD_Common, class URHInputManager* CallFunc_GetInputManager_ReturnValue, class UValInputManager* K2Node_DynamicCast_AsVal_Input_Manager, bool K2Node_DynamicCast_bSuccess, TArray<struct InputCore_Key>& CallFunc_GetRHInputKeys_OutKeys, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_ActionIcon_C", "GetRHInputKey");

	Params::UUI_Shared_ActionIcon_C_GetRHInputKey_Params Parms{};

	Parms.InputType = InputType;
	Parms.LocalHud = LocalHud;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetHUDCommon_HUD_Common = CallFunc_GetHUDCommon_HUD_Common;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsVal_Input_Manager = K2Node_DynamicCast_AsVal_Input_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRHInputKeys_OutKeys = CallFunc_GetRHInputKeys_OutKeys;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InputKey != nullptr)
		*InputKey = std::move(Parms.InputKey);

}


// Function UI_Shared_ActionIcon.UI_Shared_ActionIcon_C.UpdateInputName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NewInputName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_ActionIcon_C::UpdateInputName(class FName NewInputName, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_ActionIcon_C", "UpdateInputName");

	Params::UUI_Shared_ActionIcon_C_UpdateInputName_Params Parms{};

	Parms.NewInputName = NewInputName;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_ActionIcon.UI_Shared_ActionIcon_C.On Input Method Changed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        bNewInputType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct InputCore_Key               CallFunc_GetRHInputKey_InputKey                                  (HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentGamepadName_ReturnValue                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct SlateCore_SlateBrush        CallFunc_GetIconForInputKey_ReturnValue                          (None)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_ActionIcon_C::On_Input_Method_Changed(enum class ECommonInputType bNewInputType, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct InputCore_Key& CallFunc_GetRHInputKey_InputKey, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName CallFunc_GetCurrentGamepadName_ReturnValue, const struct SlateCore_SlateBrush& CallFunc_GetIconForInputKey_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_ActionIcon_C", "On Input Method Changed");

	Params::UUI_Shared_ActionIcon_C_On_Input_Method_Changed_Params Parms{};

	Parms.bNewInputType = bNewInputType;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetRHInputKey_InputKey = CallFunc_GetRHInputKey_InputKey;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCurrentGamepadName_ReturnValue = CallFunc_GetCurrentGamepadName_ReturnValue;
	Parms.CallFunc_GetIconForInputKey_ReturnValue = CallFunc_GetIconForInputKey_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Shared_ActionIcon.UI_Shared_ActionIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Shared_ActionIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_ActionIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Shared_ActionIcon.UI_Shared_ActionIcon_C.ExecuteUbergraph_UI_Shared_ActionIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Shared_ActionIcon_C::ExecuteUbergraph_UI_Shared_ActionIcon(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Shared_ActionIcon_C", "ExecuteUbergraph_UI_Shared_ActionIcon");

	Params::UUI_Shared_ActionIcon_C_ExecuteUbergraph_UI_Shared_ActionIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


