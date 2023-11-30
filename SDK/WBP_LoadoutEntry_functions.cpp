#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LoadoutEntry.WBP_LoadoutEntry_C
// (None)

class UClass* UWBP_LoadoutEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LoadoutEntry_C");

	return Clss;
}


// WBP_LoadoutEntry_C WBP_LoadoutEntry.Default__WBP_LoadoutEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LoadoutEntry_C* UWBP_LoadoutEntry_C::GetDefaultObj()
{
	static class UWBP_LoadoutEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LoadoutEntry_C*>(UWBP_LoadoutEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadoutEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_C", "PreConstruct");

	Params::UWBP_LoadoutEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.UpdateEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Equipped                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadoutEntry_C::UpdateEquipped(bool Equipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_C", "UpdateEquipped");

	Params::UWBP_LoadoutEntry_C_UpdateEquipped_Params Parms{};

	Parms.Equipped = Equipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.UpdateAsset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UValItemAsset*               ItemAsset                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadoutEntry_C::UpdateAsset(class UValItemAsset* ItemAsset, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_C", "UpdateAsset");

	Params::UWBP_LoadoutEntry_C_UpdateAsset_Params Parms{};

	Parms.ItemAsset = ItemAsset;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.UpdateName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_LoadoutEntry_C::UpdateName(class FText Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_C", "UpdateName");

	Params::UWBP_LoadoutEntry_C_UpdateName_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.UpdateIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   SoftIcon                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadoutEntry_C::UpdateIcon(TSoftObjectPtr<class UTexture2D> SoftIcon, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_C", "UpdateIcon");

	Params::UWBP_LoadoutEntry_C_UpdateIcon_Params Parms{};

	Parms.SoftIcon = SoftIcon;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.UpdateSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Vector2D        Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadoutEntry_C::UpdateSize(const struct CoreUObject_Vector2D& Size, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_C", "UpdateSize");

	Params::UWBP_LoadoutEntry_C_UpdateSize_Params Parms{};

	Parms.Size = Size;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.BndEvt__WBP_LoadoutEntry_UI_Button_Menu_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoadoutEntry_C::BndEvt__WBP_LoadoutEntry_UI_Button_Menu_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_C", "BndEvt__WBP_LoadoutEntry_UI_Button_Menu_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.BndEvt__WBP_LoadoutEntry_UI_Button_Menu_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoadoutEntry_C::BndEvt__WBP_LoadoutEntry_UI_Button_Menu_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_C", "BndEvt__WBP_LoadoutEntry_UI_Button_Menu_K2Node_ComponentBoundEvent_1_OnButtonHovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.BndEvt__WBP_LoadoutEntry_UI_Button_Menu_K2Node_ComponentBoundEvent_2_OnButtonUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoadoutEntry_C::BndEvt__WBP_LoadoutEntry_UI_Button_Menu_K2Node_ComponentBoundEvent_2_OnButtonUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_C", "BndEvt__WBP_LoadoutEntry_UI_Button_Menu_K2Node_ComponentBoundEvent_2_OnButtonUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.ExecuteUbergraph_WBP_LoadoutEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadoutEntry_C::ExecuteUbergraph_WBP_LoadoutEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_C", "ExecuteUbergraph_WBP_LoadoutEntry");

	Params::UWBP_LoadoutEntry_C_ExecuteUbergraph_WBP_LoadoutEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoadoutEntry_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_C", "OnUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_LoadoutEntry_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadoutEntry_C::OnHovered__DelegateSignature(class UWBP_LoadoutEntry_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_C", "OnHovered__DelegateSignature");

	Params::UWBP_LoadoutEntry_C_OnHovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadoutEntry.WBP_LoadoutEntry_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_LoadoutEntry_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadoutEntry_C::OnSelected__DelegateSignature(class UWBP_LoadoutEntry_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_C", "OnSelected__DelegateSignature");

	Params::UWBP_LoadoutEntry_C_OnSelected__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


