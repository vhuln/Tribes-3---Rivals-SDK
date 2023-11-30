#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetPopupManager
struct ABP_BrightLobbyHUD_C_GetPopupManager_Params
{
public:
	class URHPopupManager*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ShouldDisplayGameSelect
struct ABP_BrightLobbyHUD_C_ShouldDisplayGameSelect_Params
{
public:
	bool                                         bShouldShowGameSelect;                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3726[0x7];                                     // Fixing Size After Last Property  
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValGameInstance*                      K2Node_DynamicCast_AsVal_Game_Instance;            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ShouldDisplayMatchLoading
struct ABP_BrightLobbyHUD_C_ShouldDisplayMatchLoading_Params
{
public:
	bool                                         ShouldDisplay;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3755[0x7];                                     // Fixing Size After Last Property  
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ValPlayerController_City_C*        K2Node_DynamicCast_AsBP_Val_Player_Controller_City; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3758[0x7];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_GetRemoteLobbyQueueId_ReturnValue;        // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StriStri_ReturnValue;            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2B (0x2B - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Is in EOM View State
struct ABP_BrightLobbyHUD_C_Is_in_EOM_View_State_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_376E[0x7];                                     // Fixing Size After Last Property  
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x8(0x10)(ConstParm, ReferenceParm)
	class FName                                  CallFunc_GetCurrentTransitionRoute_Current_Route;  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Get_Current_View_Route_Current_Route;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetupQueueEvents
struct ABP_BrightLobbyHUD_C_SetupQueueEvents_Params
{
public:
	class URHQueueDataFactory*                   CallFunc_GetQueueDataFactory_ReturnValue;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallRemoveTopViewRoute
struct ABP_BrightLobbyHUD_C_CallRemoveTopViewRoute_Params
{
public:
	bool                                         ForceTransition;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ViewChanged;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Remove_Top_View_Route_ViewChanged;        // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallAddViewRoute
struct ABP_BrightLobbyHUD_C_CallAddViewRoute_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ClearRouteStack;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceTransition;                                   // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ViewChanged;                                       // 0xA(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Add_View_Route_ViewChanged;               // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.BindSettingCallbacks
struct ABP_BrightLobbyHUD_C_BindSettingCallbacks_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct RallyHereStart_SettingDelegateStruct  K2Node_MakeStruct_SettingDelegateStruct;           // 0x10(0x20)(NoDestructor, ContainsInstancedReference)
};

// 0x35 (0x35 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InternalAddViewRoute
struct ABP_BrightLobbyHUD_C_InternalAddViewRoute_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ClearRouteStack;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceTransition;                                   // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37FD[0x6];                                     // Fixing Size After Last Property  
	class UObject*                               Data;                                              // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ViewChanged;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37FE[0x3];                                     // Fixing Size After Last Property  
	class FName                                  NewViewRoute;                                      // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PreviousViewRoute;                                 // 0x24(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetTopViewRoute_ReturnValue;              // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddViewRoute_ReturnValue;                 // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnAcquisition
struct ABP_BrightLobbyHUD_C_OnAcquisition_Params
{
public:
	class UObject*                               Acquisition;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SwapViewRoute
struct ABP_BrightLobbyHUD_C_SwapViewRoute_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SwapTargetRoute;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceTransition;                                   // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_381D[0x7];                                     // Fixing Size After Last Property  
	class URHViewManager*                        CallFunc_GetViewManager_ReturnValue;               // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SwapViewRoute_ReturnValue;                // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x42 (0x42 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Remove Top View Route
struct ABP_BrightLobbyHUD_C_Remove_Top_View_Route_Params
{
public:
	bool                                         ForceTransition;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ViewChanged;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_384C[0x2];                                     // Fixing Size After Last Property  
	class FName                                  Temp_name_Variable;                                // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_384F[0x3];                                     // Fixing Size After Last Property  
	class URHLoginDataFactory*                   CallFunc_GetLoginDataFactory_ReturnValue;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLoggedIn_ReturnValue;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3851[0x2];                                     // Fixing Size After Last Property  
	class FName                                  CallFunc_GetTopViewRoute_ReturnValue;              // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3855[0x3];                                     // Fixing Size After Last Property  
	class FName                                  K2Node_Select_Default;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Add_View_Route_ViewChanged;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3864[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_GetViewRouteCount_ReturnValue;            // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveTopViewRoute_ReturnValue;           // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Add View Route
struct ABP_BrightLobbyHUD_C_Add_View_Route_Params
{
public:
	class FName                                  RouteName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ClearRouteStack;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ForceTransition;                                   // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ViewChanged;                                       // 0xA(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_InternalAddViewRoute_ViewChanged;         // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetCurrentTransitionRoute
struct ABP_BrightLobbyHUD_C_GetCurrentTransitionRoute_Params
{
public:
	class FName                                  Current_Route;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCurrentTransitionRoute_ReturnValue;    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetLobbyWidget
struct ABP_BrightLobbyHUD_C_GetLobbyWidget_Params
{
public:
	class URHLobbyWidget*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current View Route
struct ABP_BrightLobbyHUD_C_Get_Current_View_Route_Params
{
public:
	class FName                                  Current_Route;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCurrentRoute_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Sticky Loadout Panel
struct ABP_BrightLobbyHUD_C_Focus_Sticky_Loadout_Panel_Params
{
public:
	class UWidget*                               CallFunc_SetFocusToThis_ReturnValue;               // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current Loadout Slot
struct ABP_BrightLobbyHUD_C_Get_Current_Loadout_Slot_Params
{
public:
	uint8                                        Current_Loadout_Slot;                              // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Cache Current Loadout Slot
struct ABP_BrightLobbyHUD_C_Cache_Current_Loadout_Slot_Params
{
public:
	uint8                                        Loadout_Slot_Edit;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.FallbackLogoutCleanup
struct ABP_BrightLobbyHUD_C_FallbackLogoutCleanup_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38C6[0x4];                                     // Fixing Size After Last Property  
	TArray<class UPanelWidget*>                  CallFunc_GetFocusableWidgetContainers_ReturnValue; // 0x8(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38CB[0x4];                                     // Fixing Size After Last Property  
	class UPanelWidget*                          CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38D4[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38DE[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetFocusableWidgetContainers
struct ABP_BrightLobbyHUD_C_GetFocusableWidgetContainers_Params
{
public:
	TArray<class UPanelWidget*>                  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TArray<class UPanelWidget*>                  CallFunc_GetFocusableWidgetContainers_ReturnValue; // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38FB[0x7];                                     // Fixing Size After Last Property  
	TArray<class UPanelWidget*>                  K2Node_MakeArray_Array;                            // 0x28(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x1B (0x1B - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Login State Change
struct ABP_BrightLobbyHUD_C_Handle_Login_State_Change_Params
{
public:
	enum class ERHLoginState                     Login_State;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Add_View_Route_ViewChanged;               // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3925[0x6];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Add_View_Route_ViewChanged_1;             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Add_View_Route_ViewChanged_2;             // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Party Invite Received
struct ABP_BrightLobbyHUD_C_Handle_Party_Invite_Received_Params
{
public:
	class URH_PlayerInfo*                        Inviter;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ApplySafeFrameScale
struct ABP_BrightLobbyHUD_C_ApplySafeFrameScale_Params
{
public:
	float                                        SafeFrameScale;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleMatchStatusUpdated
struct ABP_BrightLobbyHUD_C_HandleMatchStatusUpdated_Params
{
public:
	enum class ERH_MatchStatus                   MatchStatus;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x168 (0x168 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ExecuteUbergraph_BP_BrightLobbyHUD
struct ABP_BrightLobbyHUD_C_ExecuteUbergraph_BP_BrightLobbyHUD_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39D1[0x4];                                     // Fixing Size After Last Property  
	class URH_GameInstanceSubsystem*             CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_ConfigSubsystem*                   CallFunc_GetConfigSubsystem_ReturnValue;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetAppSetting_Value;                      // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetAppSetting_ReturnValue;                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Add_View_Route_ViewChanged;               // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39D5[0x3];                                     // Fixing Size After Last Property  
	float                                        K2Node_Event_SafeFrameScale;                       // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39D6[0x4];                                     // Fixing Size After Last Property  
	class URHViewManager*                        CallFunc_GetViewManager_ReturnValue;               // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveRoute_ReturnValue;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39DA[0x6];                                     // Fixing Size After Last Property  
	class URHViewManager*                        CallFunc_GetViewManager_ReturnValue_1;             // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ReplaceRoute_ReturnValue;                 // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERH_MatchStatus                   K2Node_Event_MatchStatus;                          // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39DE[0x6];                                     // Fixing Size After Last Property  
	class URHQueueDataFactory*                   CallFunc_GetQueueDataFactory_ReturnValue;          // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInCustomMatch_ReturnValue;              // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHudReadyForBinding_ReturnValue;         // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldDisplayMatchLoading_ShouldDisplay;  // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39E4[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x68(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ERHAPI_Platform                   CallFunc_GetLoggedInPlatformId_ReturnValue;        // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39E8[0x7];                                     // Fixing Size After Last Property  
	class APlayerController*                     CallFunc_GetOwningPlayerController_ReturnValue;    // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValPlayerController*                  CallFunc_GetPlayer_ReturnValue;                    // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_LocalPlayerSubsystem*              CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValInventoryManager*                  CallFunc_GetInventoryManager_ReturnValue;          // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_LocalPlayerSessionSubsystem*       CallFunc_GetSessionSubsystem_ReturnValue;          // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsItemIdInInventoryMap_ReturnValue;       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39F8[0x7];                                     // Fixing Size After Last Property  
	TArray<class URH_SessionView*>               CallFunc_GetSessionsByType_ReturnValue;            // 0xB0(0x10)(ReferenceParm)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39F9[0x3];                                     // Fixing Size After Last Property  
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39FE[0x5];                                     // Fixing Size After Last Property  
	class URH_PlayerInfo*                        K2Node_CustomEvent_Inviter;                        // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A02[0x7];                                     // Fixing Size After Last Property  
	class FString                                CallFunc_BLUEPRINT_GetLastKnownDisplayName_OutDisplayName; // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BLUEPRINT_GetLastKnownDisplayName_ReturnValue; // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A05[0x7];                                     // Fixing Size After Last Property  
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0xF8(0x18)(None)
	class APlayerController*                     CallFunc_GetOwningPlayerController_ReturnValue_1;  // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayerController_ReturnValue_2;  // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x120(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBrightLobbyWidget_C*                  CallFunc_Create_ReturnValue;                       // 0x130(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class URHLoginDataFactory*                   CallFunc_GetLoginDataFactory_ReturnValue;          // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ERHLoginState                     CallFunc_GetCurrentLoginState_ReturnValue;         // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddToPlayerScreen_ReturnValue;            // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A06[0x6];                                     // Fixing Size After Last Property  
	class URHPartyManager*                       CallFunc_GetPartyManager_ReturnValue;              // 0x148(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x150(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Set_Safe_Frame_Scale_ImplicitCast;        // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Loadout Slot Change__DelegateSignature
struct ABP_BrightLobbyHUD_C_Loadout_Slot_Change__DelegateSignature_Params
{
public:
	uint8                                        Loadout_Slot_Edit;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


