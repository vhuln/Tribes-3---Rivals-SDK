#pragma once




#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C
// (None)

class UClass* UWBP_RegionSelectRedirect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RegionSelectRedirect_C");

	return Clss;
}


// WBP_RegionSelectRedirect_C WBP_RegionSelectRedirect.Default__WBP_RegionSelectRedirect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RegionSelectRedirect_C* UWBP_RegionSelectRedirect_C::GetDefaultObj()
{
	static class UWBP_RegionSelectRedirect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RegionSelectRedirect_C*>(UWBP_RegionSelectRedirect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RegionSelectRedirect_C::InitializeWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelectRedirect_C", "InitializeWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.Handle Region Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RegionSelectRedirect_C::Handle_Region_Selected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelectRedirect_C", "Handle Region Selected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.Handle Region Select Entries Created
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RegionSelectRedirect_C::Handle_Region_Select_Entries_Created()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelectRedirect_C", "Handle Region Select Entries Created");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RegionSelectRedirect_C::InitializeWidgetNavigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelectRedirect_C", "InitializeWidgetNavigation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.OnShown
// (Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RegionSelectRedirect_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelectRedirect_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RegionSelectRedirect.WBP_RegionSelectRedirect_C.ExecuteUbergraph_WBP_RegionSelectRedirect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_BrightLobbyHUD_C*        K2Node_DynamicCast_AsBP_Bright_Lobby_HUD                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Remove_Top_View_Route_ViewChanged                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_RegionSelect_Entry_C*>CallFunc_GetRegionSelectEntries_RegionSelectEntries              (ReferenceParm, ContainsInstancedReference)
// class UWBP_RegionSelect_Entry_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RegionSelectRedirect_C::ExecuteUbergraph_WBP_RegionSelectRedirect(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_BrightLobbyHUD_C* K2Node_DynamicCast_AsBP_Bright_Lobby_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Remove_Top_View_Route_ViewChanged, TArray<class UWBP_RegionSelect_Entry_C*>& CallFunc_GetRegionSelectEntries_RegionSelectEntries, class UWBP_RegionSelect_Entry_C* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RegionSelectRedirect_C", "ExecuteUbergraph_WBP_RegionSelectRedirect");

	Params::UWBP_RegionSelectRedirect_C_ExecuteUbergraph_WBP_RegionSelectRedirect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBP_Bright_Lobby_HUD = K2Node_DynamicCast_AsBP_Bright_Lobby_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Remove_Top_View_Route_ViewChanged = CallFunc_Remove_Top_View_Route_ViewChanged;
	Parms.CallFunc_GetRegionSelectEntries_RegionSelectEntries = CallFunc_GetRegionSelectEntries_RegionSelectEntries;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


