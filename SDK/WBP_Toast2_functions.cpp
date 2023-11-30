#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Toast2.WBP_Toast2_C
// (None)

class UClass* UWBP_Toast2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Toast2_C");

	return Clss;
}


// WBP_Toast2_C WBP_Toast2.Default__WBP_Toast2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Toast2_C* UWBP_Toast2_C::GetDefaultObj()
{
	static class UWBP_Toast2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Toast2_C*>(UWBP_Toast2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Toast2.WBP_Toast2_C.DisplayPlayerLevelUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct Engine_FormatArgumentData   K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// TArray<struct Engine_FormatArgumentData>K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_Toast2_C::DisplayPlayerLevelUp(int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct Engine_FormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue, TArray<struct Engine_FormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Toast2_C", "DisplayPlayerLevelUp");

	Params::UWBP_Toast2_C_DisplayPlayerLevelUp_Params Parms{};

	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Toast2.WBP_Toast2_C.DisplayAwardUnlock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UPlatformInventoryItem>CallFunc_GetInventoryItem_ReturnValue                            (UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlatformInventoryItem*      K2Node_DynamicCast_AsPlatform_Inventory_Item                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconInfo*                   CallFunc_GetItemIconInfo_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (None)
// class FText                        CallFunc_GetItemType_ItemType                                    (None)

void UWBP_Toast2_C::DisplayAwardUnlock(bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UPlatformInventoryItem> CallFunc_GetInventoryItem_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UPlatformInventoryItem* K2Node_DynamicCast_AsPlatform_Inventory_Item, bool K2Node_DynamicCast_bSuccess, class UIconInfo* CallFunc_GetItemIconInfo_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, class FText CallFunc_GetItemType_ItemType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Toast2_C", "DisplayAwardUnlock");

	Params::UWBP_Toast2_C_DisplayAwardUnlock_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventoryItem_ReturnValue = CallFunc_GetInventoryItem_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlatform_Inventory_Item = K2Node_DynamicCast_AsPlatform_Inventory_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemIconInfo_ReturnValue = CallFunc_GetItemIconInfo_ReturnValue;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.CallFunc_GetItemType_ItemType = CallFunc_GetItemType_ItemType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Toast2.WBP_Toast2_C.DisplayItemUnlock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconInfo*                   CallFunc_GetItemIconInfo_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (None)
// class FText                        CallFunc_GetItemType_ItemType                                    (None)

void UWBP_Toast2_C::DisplayItemUnlock(class UIconInfo* CallFunc_GetItemIconInfo_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, class FText CallFunc_GetItemType_ItemType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Toast2_C", "DisplayItemUnlock");

	Params::UWBP_Toast2_C_DisplayItemUnlock_Params Parms{};

	Parms.CallFunc_GetItemIconInfo_ReturnValue = CallFunc_GetItemIconInfo_ReturnValue;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.CallFunc_GetItemType_ItemType = CallFunc_GetItemType_ItemType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Toast2.WBP_Toast2_C.OnOutroFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Toast2_C::OnOutroFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Toast2_C", "OnOutroFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Toast2.WBP_Toast2_C.OnWaitingFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Toast2_C::OnWaitingFinished(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Toast2_C", "OnWaitingFinished");

	Params::UWBP_Toast2_C_OnWaitingFinished_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Toast2.WBP_Toast2_C.OnIntroFinished
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Toast2_C::OnIntroFinished(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_SafeDivide_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Toast2_C", "OnIntroFinished");

	Params::UWBP_Toast2_C_OnIntroFinished_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast = CallFunc_PlayAnimation_PlaybackSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Toast2.WBP_Toast2_C.SetRarityTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_LinearColor     RarityBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct CoreUObject_LinearColor     RarityHighlight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Toast2_C::SetRarityTint(const struct CoreUObject_LinearColor& RarityBase, const struct CoreUObject_LinearColor& RarityHighlight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Toast2_C", "SetRarityTint");

	Params::UWBP_Toast2_C_SetRarityTint_Params Parms{};

	Parms.RarityBase = RarityBase;
	Parms.RarityHighlight = RarityHighlight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Toast2.WBP_Toast2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Toast2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Toast2_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Toast2.WBP_Toast2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Toast2_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Toast2_C", "PreConstruct");

	Params::UWBP_Toast2_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Toast2.WBP_Toast2_C.ExecuteUbergraph_WBP_Toast2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Toast2_C::ExecuteUbergraph_WBP_Toast2(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Toast2_C", "ExecuteUbergraph_WBP_Toast2");

	Params::UWBP_Toast2_C_ExecuteUbergraph_WBP_Toast2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Toast2.WBP_Toast2_C.FinishedOutroAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Toast2_C::FinishedOutroAnimation__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Toast2_C", "FinishedOutroAnimation__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Toast2.WBP_Toast2_C.OnRemoveToastNotification__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URHWidget*                   ToastWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Toast2_C::OnRemoveToastNotification__DelegateSignature(class URHWidget* ToastWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Toast2_C", "OnRemoveToastNotification__DelegateSignature");

	Params::UWBP_Toast2_C_OnRemoveToastNotification__DelegateSignature_Params Parms{};

	Parms.ToastWidget = ToastWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


