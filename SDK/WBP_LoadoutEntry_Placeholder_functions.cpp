#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LoadoutEntry_Placeholder.WBP_LoadoutEntry_Placeholder_C
// (None)

class UClass* UWBP_LoadoutEntry_Placeholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LoadoutEntry_Placeholder_C");

	return Clss;
}


// WBP_LoadoutEntry_Placeholder_C WBP_LoadoutEntry_Placeholder.Default__WBP_LoadoutEntry_Placeholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LoadoutEntry_Placeholder_C* UWBP_LoadoutEntry_Placeholder_C::GetDefaultObj()
{
	static class UWBP_LoadoutEntry_Placeholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LoadoutEntry_Placeholder_C*>(UWBP_LoadoutEntry_Placeholder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LoadoutEntry_Placeholder.WBP_LoadoutEntry_Placeholder_C.UpdateSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct CoreUObject_Vector2D        Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadoutEntry_Placeholder_C::UpdateSize(const struct CoreUObject_Vector2D& Size, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_Placeholder_C", "UpdateSize");

	Params::UWBP_LoadoutEntry_Placeholder_C_UpdateSize_Params Parms{};

	Parms.Size = Size;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadoutEntry_Placeholder.WBP_LoadoutEntry_Placeholder_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadoutEntry_Placeholder_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_Placeholder_C", "PreConstruct");

	Params::UWBP_LoadoutEntry_Placeholder_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadoutEntry_Placeholder.WBP_LoadoutEntry_Placeholder_C.ExecuteUbergraph_WBP_LoadoutEntry_Placeholder
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadoutEntry_Placeholder_C::ExecuteUbergraph_WBP_LoadoutEntry_Placeholder(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadoutEntry_Placeholder_C", "ExecuteUbergraph_WBP_LoadoutEntry_Placeholder");

	Params::UWBP_LoadoutEntry_Placeholder_C_ExecuteUbergraph_WBP_LoadoutEntry_Placeholder_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


