#pragma once




#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xA5 (0xA5 - 0x0)
// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.GetStatusColor
struct UWBP_PlayerStatus_ContextMenu_C_GetStatusColor_Params
{
public:
	enum class ERHPlayerOnlineStatus             PlayerStatus;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_293[0x3];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  StatusColor;                                       // 0x4(0x14)(Parm, OutParm)
	enum class ERHPlayerOnlineStatus             Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_297[0x3];                                      // Fixing Size After Last Property  
	class FName                                  Temp_name_Variable;                                // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_4;                              // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_5;                              // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_6;                              // 0x4C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_7;                              // 0x54(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_8;                              // 0x5C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_9;                              // 0x64(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_10;                             // 0x6C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct SlateCore_SlateColor                  K2Node_MakeStruct_SlateColor;                      // 0x74(0x14)(None)
	class FName                                  K2Node_Select_Default;                             // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct ColorEntry_ColorEntry                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x90(0x14)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.UpdatePlayerStatus
struct UWBP_PlayerStatus_ContextMenu_C_UpdatePlayerStatus_Params
{
public:
	class URH_LocalPlayerSubsystem*              CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERHPlayerOnlineStatus             CallFunc_GetPlayerOnlineStatus_ReturnValue;        // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B6[0x2];                                      // Fixing Size After Last Property  
	struct SlateCore_SlateColor                  CallFunc_GetStatusColor_StatusColor;               // 0xC(0x14)(None)
	class FText                                  CallFunc_GetPlayerStatusMessage_ReturnValue;       // 0x20(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.HideContextMenu
struct UWBP_PlayerStatus_ContextMenu_C_HideContextMenu_Params
{
public:
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.ShowContextMenu
struct UWBP_PlayerStatus_ContextMenu_C_ShowContextMenu_Params
{
public:
	class UWBP_PlayerStatus_ContextMenuOption_C* CallFunc_Array_Get_Item;                           // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x33 (0x33 - 0x0)
// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.HandleOptionSelected
struct UWBP_PlayerStatus_ContextMenu_C_HandleOptionSelected_Params
{
public:
	enum class EPlayerStatusOption               EPlayerStatus;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E5[0x3];                                      // Fixing Size After Last Property  
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E6[0x3];                                      // Fixing Size After Last Property  
	class ARHLobbyHUD*                           K2Node_DynamicCast_AsRHLobby_HUD;                  // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EA[0x7];                                      // Fixing Size After Last Property  
	class URH_LocalPlayerSubsystem*              CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class URHSettingsDataFactory*                CallFunc_GetSettingsDataFactory_ReturnValue;       // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ERHPlayerOnlineStatus             CallFunc_GetPlayerOnlineStatus_ReturnValue;        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x45 (0x45 - 0x0)
// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.SetupOptionButton
struct UWBP_PlayerStatus_ContextMenu_C_SetupOptionButton_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31A[0x3];                                      // Fixing Size After Last Property  
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_323[0x1];                                      // Fixing Size After Last Property  
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_PlayerStatus_ContextMenuOption_C* CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_326[0x4];                                      // Fixing Size After Last Property  
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.PreConstruct
struct UWBP_PlayerStatus_ContextMenu_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.SetPlayerInfo
struct UWBP_PlayerStatus_ContextMenu_C_SetPlayerInfo_Params
{
public:
	class URH_PlayerInfo*                        PlayerInfo;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.ExecuteUbergraph_WBP_PlayerStatus_ContextMenu
struct UWBP_PlayerStatus_ContextMenu_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_366[0x2];                                      // Fixing Size After Last Property  
	class URH_PlayerInfo*                        K2Node_CustomEvent_PlayerInfo;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnMenuStart__DelegateSignature
struct UWBP_PlayerStatus_ContextMenu_C_OnMenuStart__DelegateSignature_Params
{
public:
	class UWBP_PlayerStatus_ContextMenuOption_C* FirstFocusableButton;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnReadyNavigation__DelegateSignature
struct UWBP_PlayerStatus_ContextMenu_C_OnReadyNavigation__DelegateSignature_Params
{
public:
	TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

}
}


