#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x37 - 0x0)
// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.On Get Player Loadout Account Settings
struct UWBP_Social_Header_Cosmetic_C_On_Get_Player_Loadout_Account_Settings_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_PlayerLoadout*                     Loadout;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetEquippedItemInSlot_ReturnValue;        // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_351F[0x2];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetEquippedItemInSlot_ReturnValue_1;      // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.On Display Name Loaded
struct UWBP_Social_Header_Cosmetic_C_On_Display_Name_Loaded_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3535[0x7];                                     // Fixing Size After Last Property  
	class FString                                DisplayName;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
};

// 0x20 (0x20 - 0x0)
// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnPlayerBannerLoaded
struct UWBP_Social_Header_Cosmetic_C_OnPlayerBannerLoaded_Params
{
public:
	struct RallyHereStart_RHEquippedLoadoutItemWrapper ItemWrapper;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class URHBanner*                             K2Node_DynamicCast_AsRHBanner;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_354F[0x7];                                     // Fixing Size After Last Property  
	class UIconInfo*                             CallFunc_GetLargeBannerInfo_ReturnValue;           // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnPlayerAvatarLoaded
struct UWBP_Social_Header_Cosmetic_C_OnPlayerAvatarLoaded_Params
{
public:
	struct RallyHereStart_RHEquippedLoadoutItemWrapper ItemWrapper;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class URHAvatar*                             K2Node_DynamicCast_AsRHAvatar;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3565[0x7];                                     // Fixing Size After Last Property  
	class UIconInfo*                             CallFunc_GetLargeAvatarInfo_ReturnValue;           // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.BindContextMenu
struct UWBP_Social_Header_Cosmetic_C_BindContextMenu_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateName
struct UWBP_Social_Header_Cosmetic_C_UpdateName_Params
{
public:
	enum class ERHAPI_Platform                   CallFunc_GetLoggedInPlatformId_ReturnValue;        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A5[0x7];                                     // Fixing Size After Last Property  
	struct CoreUObject_Timespan                  CallFunc_MakeTimespan_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URH_LocalPlayerSubsystem*              CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.UpdateAfterInfoChange
struct UWBP_Social_Header_Cosmetic_C_UpdateAfterInfoChange_Params
{
public:
	struct CoreUObject_Timespan                  CallFunc_MakeTimespan_ReturnValue;                 // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHLoadoutDataFactory*                 CallFunc_GetRHLoadoutDataFactory_ReturnValue;      // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.SetData
struct UWBP_Social_Header_Cosmetic_C_SetData_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.PreConstruct
struct UWBP_Social_Header_Cosmetic_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleInputStateChanged
struct UWBP_Social_Header_Cosmetic_C_HandleInputStateChanged_Params
{
public:
	enum class ERH_INPUT_STATE                   InputState;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleReadyNavigation
struct UWBP_Social_Header_Cosmetic_C_HandleReadyNavigation_Params
{
public:
	TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.HandleMenuStart
struct UWBP_Social_Header_Cosmetic_C_HandleMenuStart_Params
{
public:
	class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.ExecuteUbergraph_WBP_Social_Header_Cosmetic
struct UWBP_Social_Header_Cosmetic_C_ExecuteUbergraph_WBP_Social_Header_Cosmetic_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3623[0x4];                                     // Fixing Size After Last Property  
	class ARHHUDCommon*                          CallFunc_GetHUDCommon_HUD_Common;                  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   CallFunc_GetCurrentInputState_ReturnValue;         // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3627[0x3];                                     // Fixing Size After Last Property  
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ERH_INPUT_STATE                   K2Node_CustomEvent_InputState;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_362A[0x6];                                     // Fixing Size After Last Property  
	TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> K2Node_CustomEvent_StatusButtons;                  // 0x30(0x10)(ReferenceParm, ContainsInstancedReference)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_362B[0x7];                                     // Fixing Size After Last Property  
	class UWBP_PlayerStatus_ContextMenuOption_C* K2Node_CustomEvent_FocusWidget;                    // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnMenuShown__DelegateSignature
struct UWBP_Social_Header_Cosmetic_C_OnMenuShown__DelegateSignature_Params
{
public:
	class UWBP_PlayerStatus_ContextMenuOption_C* FocusWidget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C.OnNavigationReady__DelegateSignature
struct UWBP_Social_Header_Cosmetic_C_OnNavigationReady__DelegateSignature_Params
{
public:
	TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

}
}


